const PREC = {
    eq: 0,
    or: 2,
    and: 3,
    ineq: 4,
    concat: 5,
    add: 6,
    mult: 7,
    pipe: 8,
    unary: 9,
    path: 10,
    fn_call: 11,
    meth_call: 11,
    index: 11,
};

const sep_by_1 = (sep, par) => seq(
    par, repeat(seq(sep, par)), optional(sep)
);
const sep_by_0 = (sep, par) => optional(sep_by_1(sep, par));
const parens = (...par) => seq("(", ...par, ")");

module.exports = grammar({
    name: 'noom',

    inline: $ => [
        $._decl_args,
        $._call_args,
        $._block_body,
        $._table_entry,
        $._expr_primary,
        $._expr_callable,
    ],

    supertypes: $ => [
        $._expr,
    ],

    extras: $ => [
        $.comment,
        /[\n]/,
        /\s/,
    ],

    rules: {
        source_file: $ => $._block_body,
        _block_body: $ => choice(
            $.stmt, 
            seq($.stmt, repeat(seq(";", $.stmt)), optional(";"))
        ),

        comment: $ => /\/\/[^\n]*[\n]/,

        stmt: $ => choice(
            $.let_stmt,
            $.assign_stmt,
            $.for_stmt,
            $.break_stmt,
            $.return_stmt,
            $._expr
        ),

        let_stmt: $ => seq(
            "let", $.ident, 
            optional(parens(optional($._decl_args))),
            optional(seq("=", $._expr)),
        ),
        assign_stmt: $ => seq($._expr, "=", $._expr),

        for_stmt: $ => seq(
            "for", parens(
                $.ident, "in", choice($._expr, $.builtin_range)
            ), $._expr
        ),
        builtin_range: $ => seq("@range", parens($._expr, ",", $._expr)),

        break_stmt: $ => "break",
        return_stmt: $ => seq("return", $._expr),

        _expr: $ => choice(
            $.expr_binop,
            $.expr_unop,
            prec(PREC.fn_call, $.fn_call),
            prec(PREC.meth_call, $.meth_call),
            $.expr_path,
            prec(PREC.index, $.expr_index),
            $._expr_primary,
        ),

        expr_binop: $ => choice(
            prec.left(PREC.eq, seq($._expr, choice("==", "!="), $._expr)),
            prec.left(PREC.or, seq($._expr, choice("or"), $._expr)),
            prec.left(PREC.and, seq($._expr, choice("and"), $._expr)),
            prec.left(PREC.ineq, seq($._expr, choice(">", ">=", "<", "<="), $._expr)),
            prec.left(PREC.concat, seq($._expr, choice(".."), $._expr)),
            prec.left(PREC.add, seq($._expr, choice("+", "-"), $._expr)),
            prec.left(PREC.mult, seq($._expr, choice("*", "/"), $._expr)),
            prec.left(PREC.pipe, seq($._expr, "|>", $._expr)),
        ),

        expr_unop: $ => choice(
            prec(PREC.unary, seq(choice("-", "!"), $._expr)),
        ),

        expr_path: $ => choice(
            prec(PREC.path, seq($._expr, repeat1(seq(".", $.ident)))),
        ),
        expr_index: $ => seq($._expr, "[", $._expr, "]"),

        _expr_primary: $ => choice(
            $.expr_string,
            $.expr_table,
            $.expr_paren,
            $.expr_block,
            $.expr_func,
            $.expr_tag,
            $.expr_bool,
            $.expr_if,
            $.expr_nil,
            $.expr_number,
            $.ident,
        ),
        _expr_callable: $ => choice(
            $.expr_paren,
            $.expr_func,
            $.expr_path,
            $.expr_index,
            $.ident,
        ),

        expr_string: $ => choice(
            seq(
                "\"",
                repeat(choice(
                    token.immediate(/[^"\\]/), 
                    $.string_esc
                )),
                token.immediate("\""),
            ), 
            seq(
                "'",
                repeat(choice(
                    token.immediate(/[^'\\]/), 
                    $.string_esc
                )),
                token.immediate("'"),
            ), 
            // TODO: make this validate string end marker matching the string
            // begin marker. (this might require writing a custom lexer...)
            seq(
                /\[=*\[([^\]=]|\][^\]=]|\]=*[^\]=])*\]=*\]/,
            ),
        ),
        string_esc: $ => token.immediate(/\\./),

        expr_tag: $ => seq(".", $._ident_immediate),
        expr_bool: $ => choice("true", "false"),
        expr_nil: $ => "nil",
        expr_number: $ => /[0-9]+/,
        expr_table: $ => seq("{", sep_by_0(",", $._table_entry), "}"),
        _table_entry: $ => choice(
            seq(
                choice(
                    $.ident,
                    seq("fn", $.ident, parens(optional($._decl_args))),
                    seq("[", $._expr, "]"),
                ),
            ":", $._expr),
            $._expr,
        ),
        expr_paren: $ => parens($._expr),
        expr_block: $ => seq(
            ".{",
            $._block_body,
            "}"
        ),
        expr_func: $ => seq(
            "fn", "(",
            optional($._decl_args),
            ")",
            "{",
            $._block_body,
            "}"
        ),
        expr_if: $ => prec.right(seq(
            "if",
            parens($._expr),
            $._expr,
            //repeat(seq("else", "if", $._expr)),
            optional(seq("else", $._expr)),
        )),


        fn_call: $ => seq(
            choice($._expr_callable, $.builtin_fn, $.require), 
            choice(parens(optional($._call_args)), $.expr_string),
        ),
        require: $ => "require",
        builtin_fn: $ => choice(
            "assert",
            "collectgarbage",
            "error",
            "getfenv",
            "getmetatable",
            "ipairs",
            "loadstring",
            "newproxy",
            "next",
            "pairs",
            "pcall",
            "print",
            "rawequal",
            "rawget",
            "rawset",
            "select",
            "setfenv",
            "setmetatable",
            "tonumber",
            "tostring",
            "type",
            "unpack",
            "xpcall",
        ),

        meth_call: $ => seq(
            $._expr, "->", $.ident, parens(optional($._call_args))
        ),

        _call_args: $ => sep_by_1(",", $._expr),
        _decl_args: $ => sep_by_1(",", $.ident),

        ident: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
        _ident_immediate: $ => alias(
            token.immediate(/[a-zA-Z_][a-zA-Z0-9_]*/), 
            $.ident
        ),
    }
});
