module.exports = grammar({
    name: 'noom',

    inline: $ => [
        $._decl_args,
        $._call_args,
        $._block_body,
        $._table_entry,
        $._expr_primary,
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

        let_stmt: $ => seq("let", $.ident, "=", $._expr),
        assign_stmt: $ => seq($._expr, "=", $._expr),
        for_stmt: $ => seq("for", "(", $.ident, "in", $._expr, ")", $._expr),
        break_stmt: $ => "break",
        return_stmt: $ => seq("return", $._expr),

        _expr: $ => choice(
            $.expr_binop,
            $.expr_unop,
            prec(60, $.fn_call),
            prec(60, $.meth_call),
            $.expr_path,
            $._expr_primary,
        ),

        expr_binop: $ => choice(
            prec.left(00, seq($._expr, choice("==", "!="), $._expr)),
            prec.left(03, seq($._expr, choice("or"), $._expr)),
            prec.left(02, seq($._expr, choice("and"), $._expr)),
            prec.left(10, seq($._expr, choice(">", ">=", "<", "<="), $._expr)),
            prec.left(15, seq($._expr, choice(".."), $._expr)),
            prec.left(20, seq($._expr, choice("+", "-"), $._expr)),
            prec.left(30, seq($._expr, choice("*", "/"), $._expr)),
            prec.left(40, seq($._expr, "|>", $._expr)),
        ),

        expr_unop: $ => choice(
            prec(50, seq(choice("-", "!"), $._expr)),
        ),

        expr_path: $ => choice(
            prec(60, seq($._expr, repeat1(seq(".", $.ident)))),
        ),

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
        ),
        string_esc: $ => token.immediate(/\\./),

        expr_tag: $ => /\.[a-zA-Z_][[a-zA-Z0-9_]*]/,
        expr_bool: $ => choice("true", "false"),
        expr_nil: $ => "nil",
        expr_number: $ => /[0-9]+/,
        expr_table: $ => seq(
            "{",
            optional(seq($._table_entry, repeat(seq(",", $._table_entry)))),
            "}"
        ),
        expr_paren: $ => seq("(", $._expr, ")"),
        _table_entry: $ => choice(
            seq(choice($.ident, seq("[", $._expr, "]")), "=", $._expr),
            $._expr,
        ),
        expr_block: $ => seq(
            ".{",
            $._block_body,
            "}"
        ),
        expr_func: $ => seq(
            ".(",
            optional($._decl_args),
            ")",
            "{",
            $._block_body,
            "}"
        ),
        expr_if: $ => prec.right(seq(
            "if",
            "(",
            $._expr,
            ")",
            $._expr,
            //repeat(seq("else", "if", $._expr)),
            optional(seq("else", $._expr)),
        )),


        fn_call: $ => seq(
            choice($._expr, $.builtin_fn, $.require), "(", optional($._call_args), ")"
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
            $._expr, ":", $.ident, "(", optional($._call_args), ")"
        ),

        _call_args: $ => seq($._expr, repeat(seq(",", $._expr))),
        _decl_args: $ => seq($.ident, repeat(seq(",", $.ident))),

        ident: $ => choice(
            /[a-zA-Z_][a-zA-Z0-9_]*/
        ),
    }
});
