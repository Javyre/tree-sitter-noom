#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 164
#define LARGE_STATE_COUNT 46
#define SYMBOL_COUNT 104
#define ALIAS_COUNT 0
#define TOKEN_COUNT 75
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  sym_comment = 2,
  anon_sym_let = 3,
  anon_sym_EQ = 4,
  anon_sym_for = 5,
  anon_sym_LPAREN = 6,
  anon_sym_in = 7,
  anon_sym_RPAREN = 8,
  anon_sym_ATrange = 9,
  anon_sym_COMMA = 10,
  sym_break_stmt = 11,
  anon_sym_return = 12,
  anon_sym_EQ_EQ = 13,
  anon_sym_BANG_EQ = 14,
  anon_sym_or = 15,
  anon_sym_and = 16,
  anon_sym_GT = 17,
  anon_sym_GT_EQ = 18,
  anon_sym_LT = 19,
  anon_sym_LT_EQ = 20,
  anon_sym_DOT_DOT = 21,
  anon_sym_PLUS = 22,
  anon_sym_DASH = 23,
  anon_sym_STAR = 24,
  anon_sym_SLASH = 25,
  anon_sym_PIPE_GT = 26,
  anon_sym_BANG = 27,
  anon_sym_DOT = 28,
  anon_sym_DQUOTE = 29,
  aux_sym_expr_string_token1 = 30,
  anon_sym_DQUOTE2 = 31,
  anon_sym_SQUOTE = 32,
  aux_sym_expr_string_token2 = 33,
  anon_sym_SQUOTE2 = 34,
  sym_string_esc = 35,
  sym_expr_tag = 36,
  anon_sym_true = 37,
  anon_sym_false = 38,
  sym_expr_nil = 39,
  sym_expr_number = 40,
  anon_sym_LBRACE = 41,
  anon_sym_RBRACE = 42,
  anon_sym_LBRACK = 43,
  anon_sym_RBRACK = 44,
  anon_sym_DOT_LBRACE = 45,
  anon_sym_DOT_LPAREN = 46,
  anon_sym_if = 47,
  anon_sym_else = 48,
  sym_require = 49,
  anon_sym_assert = 50,
  anon_sym_collectgarbage = 51,
  anon_sym_error = 52,
  anon_sym_getfenv = 53,
  anon_sym_getmetatable = 54,
  anon_sym_ipairs = 55,
  anon_sym_loadstring = 56,
  anon_sym_newproxy = 57,
  anon_sym_next = 58,
  anon_sym_pairs = 59,
  anon_sym_pcall = 60,
  anon_sym_print = 61,
  anon_sym_rawequal = 62,
  anon_sym_rawget = 63,
  anon_sym_rawset = 64,
  anon_sym_select = 65,
  anon_sym_setfenv = 66,
  anon_sym_setmetatable = 67,
  anon_sym_tonumber = 68,
  anon_sym_tostring = 69,
  anon_sym_type = 70,
  anon_sym_unpack = 71,
  anon_sym_xpcall = 72,
  anon_sym_COLON = 73,
  aux_sym_ident_token1 = 74,
  sym_source_file = 75,
  sym_stmt = 76,
  sym_let_stmt = 77,
  sym_assign_stmt = 78,
  sym_for_stmt = 79,
  sym_builtin_range = 80,
  sym_return_stmt = 81,
  sym__expr = 82,
  sym_expr_binop = 83,
  sym_expr_unop = 84,
  sym_expr_path = 85,
  sym_expr_string = 86,
  sym_expr_bool = 87,
  sym_expr_table = 88,
  sym_expr_paren = 89,
  sym_expr_block = 90,
  sym_expr_func = 91,
  sym_expr_if = 92,
  sym_fn_call = 93,
  sym_builtin_fn = 94,
  sym_meth_call = 95,
  sym_ident = 96,
  aux_sym__block_body_repeat1 = 97,
  aux_sym_expr_path_repeat1 = 98,
  aux_sym_expr_string_repeat1 = 99,
  aux_sym_expr_string_repeat2 = 100,
  aux_sym_expr_table_repeat1 = 101,
  aux_sym__call_args_repeat1 = 102,
  aux_sym__decl_args_repeat1 = 103,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [sym_comment] = "comment",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_for] = "for",
  [anon_sym_LPAREN] = "(",
  [anon_sym_in] = "in",
  [anon_sym_RPAREN] = ")",
  [anon_sym_ATrange] = "@range",
  [anon_sym_COMMA] = ",",
  [sym_break_stmt] = "break_stmt",
  [anon_sym_return] = "return",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_or] = "or",
  [anon_sym_and] = "and",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PIPE_GT] = "|>",
  [anon_sym_BANG] = "!",
  [anon_sym_DOT] = ".",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_expr_string_token1] = "expr_string_token1",
  [anon_sym_DQUOTE2] = "\"",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_expr_string_token2] = "expr_string_token2",
  [anon_sym_SQUOTE2] = "'",
  [sym_string_esc] = "string_esc",
  [sym_expr_tag] = "expr_tag",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_expr_nil] = "expr_nil",
  [sym_expr_number] = "expr_number",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOT_LBRACE] = ".{",
  [anon_sym_DOT_LPAREN] = ".(",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [sym_require] = "require",
  [anon_sym_assert] = "assert",
  [anon_sym_collectgarbage] = "collectgarbage",
  [anon_sym_error] = "error",
  [anon_sym_getfenv] = "getfenv",
  [anon_sym_getmetatable] = "getmetatable",
  [anon_sym_ipairs] = "ipairs",
  [anon_sym_loadstring] = "loadstring",
  [anon_sym_newproxy] = "newproxy",
  [anon_sym_next] = "next",
  [anon_sym_pairs] = "pairs",
  [anon_sym_pcall] = "pcall",
  [anon_sym_print] = "print",
  [anon_sym_rawequal] = "rawequal",
  [anon_sym_rawget] = "rawget",
  [anon_sym_rawset] = "rawset",
  [anon_sym_select] = "select",
  [anon_sym_setfenv] = "setfenv",
  [anon_sym_setmetatable] = "setmetatable",
  [anon_sym_tonumber] = "tonumber",
  [anon_sym_tostring] = "tostring",
  [anon_sym_type] = "type",
  [anon_sym_unpack] = "unpack",
  [anon_sym_xpcall] = "xpcall",
  [anon_sym_COLON] = ":",
  [aux_sym_ident_token1] = "ident_token1",
  [sym_source_file] = "source_file",
  [sym_stmt] = "stmt",
  [sym_let_stmt] = "let_stmt",
  [sym_assign_stmt] = "assign_stmt",
  [sym_for_stmt] = "for_stmt",
  [sym_builtin_range] = "builtin_range",
  [sym_return_stmt] = "return_stmt",
  [sym__expr] = "_expr",
  [sym_expr_binop] = "expr_binop",
  [sym_expr_unop] = "expr_unop",
  [sym_expr_path] = "expr_path",
  [sym_expr_string] = "expr_string",
  [sym_expr_bool] = "expr_bool",
  [sym_expr_table] = "expr_table",
  [sym_expr_paren] = "expr_paren",
  [sym_expr_block] = "expr_block",
  [sym_expr_func] = "expr_func",
  [sym_expr_if] = "expr_if",
  [sym_fn_call] = "fn_call",
  [sym_builtin_fn] = "builtin_fn",
  [sym_meth_call] = "meth_call",
  [sym_ident] = "ident",
  [aux_sym__block_body_repeat1] = "_block_body_repeat1",
  [aux_sym_expr_path_repeat1] = "expr_path_repeat1",
  [aux_sym_expr_string_repeat1] = "expr_string_repeat1",
  [aux_sym_expr_string_repeat2] = "expr_string_repeat2",
  [aux_sym_expr_table_repeat1] = "expr_table_repeat1",
  [aux_sym__call_args_repeat1] = "_call_args_repeat1",
  [aux_sym__decl_args_repeat1] = "_decl_args_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_comment] = sym_comment,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_ATrange] = anon_sym_ATrange,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_break_stmt] = sym_break_stmt,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PIPE_GT] = anon_sym_PIPE_GT,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_expr_string_token1] = aux_sym_expr_string_token1,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_expr_string_token2] = aux_sym_expr_string_token2,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [sym_string_esc] = sym_string_esc,
  [sym_expr_tag] = sym_expr_tag,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_expr_nil] = sym_expr_nil,
  [sym_expr_number] = sym_expr_number,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOT_LBRACE] = anon_sym_DOT_LBRACE,
  [anon_sym_DOT_LPAREN] = anon_sym_DOT_LPAREN,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [sym_require] = sym_require,
  [anon_sym_assert] = anon_sym_assert,
  [anon_sym_collectgarbage] = anon_sym_collectgarbage,
  [anon_sym_error] = anon_sym_error,
  [anon_sym_getfenv] = anon_sym_getfenv,
  [anon_sym_getmetatable] = anon_sym_getmetatable,
  [anon_sym_ipairs] = anon_sym_ipairs,
  [anon_sym_loadstring] = anon_sym_loadstring,
  [anon_sym_newproxy] = anon_sym_newproxy,
  [anon_sym_next] = anon_sym_next,
  [anon_sym_pairs] = anon_sym_pairs,
  [anon_sym_pcall] = anon_sym_pcall,
  [anon_sym_print] = anon_sym_print,
  [anon_sym_rawequal] = anon_sym_rawequal,
  [anon_sym_rawget] = anon_sym_rawget,
  [anon_sym_rawset] = anon_sym_rawset,
  [anon_sym_select] = anon_sym_select,
  [anon_sym_setfenv] = anon_sym_setfenv,
  [anon_sym_setmetatable] = anon_sym_setmetatable,
  [anon_sym_tonumber] = anon_sym_tonumber,
  [anon_sym_tostring] = anon_sym_tostring,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_unpack] = anon_sym_unpack,
  [anon_sym_xpcall] = anon_sym_xpcall,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_ident_token1] = aux_sym_ident_token1,
  [sym_source_file] = sym_source_file,
  [sym_stmt] = sym_stmt,
  [sym_let_stmt] = sym_let_stmt,
  [sym_assign_stmt] = sym_assign_stmt,
  [sym_for_stmt] = sym_for_stmt,
  [sym_builtin_range] = sym_builtin_range,
  [sym_return_stmt] = sym_return_stmt,
  [sym__expr] = sym__expr,
  [sym_expr_binop] = sym_expr_binop,
  [sym_expr_unop] = sym_expr_unop,
  [sym_expr_path] = sym_expr_path,
  [sym_expr_string] = sym_expr_string,
  [sym_expr_bool] = sym_expr_bool,
  [sym_expr_table] = sym_expr_table,
  [sym_expr_paren] = sym_expr_paren,
  [sym_expr_block] = sym_expr_block,
  [sym_expr_func] = sym_expr_func,
  [sym_expr_if] = sym_expr_if,
  [sym_fn_call] = sym_fn_call,
  [sym_builtin_fn] = sym_builtin_fn,
  [sym_meth_call] = sym_meth_call,
  [sym_ident] = sym_ident,
  [aux_sym__block_body_repeat1] = aux_sym__block_body_repeat1,
  [aux_sym_expr_path_repeat1] = aux_sym_expr_path_repeat1,
  [aux_sym_expr_string_repeat1] = aux_sym_expr_string_repeat1,
  [aux_sym_expr_string_repeat2] = aux_sym_expr_string_repeat2,
  [aux_sym_expr_table_repeat1] = aux_sym_expr_table_repeat1,
  [aux_sym__call_args_repeat1] = aux_sym__call_args_repeat1,
  [aux_sym__decl_args_repeat1] = aux_sym__decl_args_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATrange] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_break_stmt] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_expr_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_expr_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [sym_string_esc] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_tag] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_expr_nil] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [sym_require] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_assert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_collectgarbage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_getfenv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_getmetatable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ipairs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loadstring] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_newproxy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_next] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pairs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pcall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_print] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rawequal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rawget] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rawset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_select] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setfenv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setmetatable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tonumber] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tostring] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unpack] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xpcall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ident_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_let_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_for_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_range] = {
    .visible = true,
    .named = true,
  },
  [sym_return_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_expr_binop] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_unop] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_path] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_string] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_table] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_paren] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_block] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_func] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_if] = {
    .visible = true,
    .named = true,
  },
  [sym_fn_call] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_fn] = {
    .visible = true,
    .named = true,
  },
  [sym_meth_call] = {
    .visible = true,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__block_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expr_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expr_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expr_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expr_table_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__call_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decl_args_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(165)
      if (lookahead == '!') ADVANCE(200);
      if (lookahead == '"') ADVANCE(206);
      if (lookahead == '\'') ADVANCE(210);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ')') ADVANCE(178);
      if (lookahead == '*') ADVANCE(196);
      if (lookahead == '+') ADVANCE(194);
      if (lookahead == ',') ADVANCE(180);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == ';') ADVANCE(169);
      if (lookahead == '<') ADVANCE(191);
      if (lookahead == '=') ADVANCE(173);
      if (lookahead == '>') ADVANCE(189);
      if (lookahead == '@') ADVANCE(111);
      if (lookahead == '[') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(164);
      if (lookahead == ']') ADVANCE(223);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'b') ADVANCE(118);
      if (lookahead == 'c') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'g') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'l') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 'o') ADVANCE(112);
      if (lookahead == 'p') ADVANCE(6);
      if (lookahead == 'r') ADVANCE(7);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == 'u') ADVANCE(96);
      if (lookahead == 'x') ADVANCE(105);
      if (lookahead == '{') ADVANCE(220);
      if (lookahead == '|') ADVANCE(5);
      if (lookahead == '}') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(225);
      if (lookahead == '{') ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(186);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(198);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == 'c') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(55);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(82);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(83);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(188);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == 'g') ADVANCE(53);
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 58:
      if (lookahead == 'f') ADVANCE(226);
      if (lookahead == 'n') ADVANCE(177);
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 60:
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(269);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(243);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(16);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(41);
      END_STATE();
    case 65:
      if (lookahead == 'g') ADVANCE(45);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 72:
      if (lookahead == 'k') ADVANCE(181);
      END_STATE();
    case 73:
      if (lookahead == 'k') ADVANCE(273);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(217);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(275);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(255);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(47);
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(148);
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(149);
      if (lookahead == 'y') ADVANCE(107);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 105:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 106:
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 107:
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 108:
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 109:
      if (lookahead == 'q') ADVANCE(152);
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 110:
      if (lookahead == 'q') ADVANCE(150);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(249);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 148:
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 149:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 151:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 152:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 153:
      if (lookahead == 'v') ADVANCE(237);
      END_STATE();
    case 154:
      if (lookahead == 'v') ADVANCE(263);
      END_STATE();
    case 155:
      if (lookahead == 'w') ADVANCE(37);
      END_STATE();
    case 156:
      if (lookahead == 'w') ADVANCE(108);
      if (lookahead == 'x') ADVANCE(135);
      END_STATE();
    case 157:
      if (lookahead == 'x') ADVANCE(158);
      END_STATE();
    case 158:
      if (lookahead == 'y') ADVANCE(245);
      END_STATE();
    case 159:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      if (lookahead == '!') ADVANCE(199);
      if (lookahead == '"') ADVANCE(203);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ')') ADVANCE(178);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '@') ADVANCE(111);
      if (lookahead == '[') ADVANCE(222);
      if (lookahead == 'a') ADVANCE(393);
      if (lookahead == 'c') ADVANCE(364);
      if (lookahead == 'e') ADVANCE(380);
      if (lookahead == 'f') ADVANCE(284);
      if (lookahead == 'g') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(328);
      if (lookahead == 'l') ADVANCE(367);
      if (lookahead == 'n') ADVANCE(306);
      if (lookahead == 'p') ADVANCE(278);
      if (lookahead == 'r') ADVANCE(280);
      if (lookahead == 's') ADVANCE(307);
      if (lookahead == 't') ADVANCE(365);
      if (lookahead == 'u') ADVANCE(360);
      if (lookahead == 'x') ADVANCE(369);
      if (lookahead == '{') ADVANCE(220);
      if (lookahead == '}') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 160:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      if (lookahead == '\'') ADVANCE(210);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(164);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 161:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(204);
      if (lookahead == '"') ADVANCE(206);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(164);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 162:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(162)
      if (lookahead == ')') ADVANCE(178);
      if (lookahead == '/') ADVANCE(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 163:
      if (lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 164:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(211);
      END_STATE();
    case 165:
      if (eof) ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(165)
      if (lookahead == '!') ADVANCE(200);
      if (lookahead == '"') ADVANCE(203);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ')') ADVANCE(178);
      if (lookahead == '*') ADVANCE(196);
      if (lookahead == '+') ADVANCE(194);
      if (lookahead == ',') ADVANCE(180);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == ';') ADVANCE(169);
      if (lookahead == '<') ADVANCE(191);
      if (lookahead == '=') ADVANCE(173);
      if (lookahead == '>') ADVANCE(189);
      if (lookahead == '@') ADVANCE(111);
      if (lookahead == '[') ADVANCE(222);
      if (lookahead == ']') ADVANCE(223);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'b') ADVANCE(118);
      if (lookahead == 'c') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'g') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'l') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 'o') ADVANCE(112);
      if (lookahead == 'p') ADVANCE(6);
      if (lookahead == 'r') ADVANCE(7);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == 'u') ADVANCE(96);
      if (lookahead == 'x') ADVANCE(105);
      if (lookahead == '{') ADVANCE(220);
      if (lookahead == '|') ADVANCE(5);
      if (lookahead == '}') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 166:
      if (eof) ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(166)
      if (lookahead == '!') ADVANCE(199);
      if (lookahead == '"') ADVANCE(203);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'a') ADVANCE(393);
      if (lookahead == 'b') ADVANCE(382);
      if (lookahead == 'c') ADVANCE(364);
      if (lookahead == 'e') ADVANCE(380);
      if (lookahead == 'f') ADVANCE(283);
      if (lookahead == 'g') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(328);
      if (lookahead == 'l') ADVANCE(316);
      if (lookahead == 'n') ADVANCE(306);
      if (lookahead == 'p') ADVANCE(278);
      if (lookahead == 'r') ADVANCE(279);
      if (lookahead == 's') ADVANCE(307);
      if (lookahead == 't') ADVANCE(365);
      if (lookahead == 'u') ADVANCE(360);
      if (lookahead == 'x') ADVANCE(369);
      if (lookahead == '{') ADVANCE(220);
      if (lookahead == '}') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 167:
      if (eof) ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(167)
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '"') ADVANCE(203);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ')') ADVANCE(178);
      if (lookahead == '*') ADVANCE(196);
      if (lookahead == '+') ADVANCE(194);
      if (lookahead == ',') ADVANCE(180);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == ';') ADVANCE(169);
      if (lookahead == '<') ADVANCE(191);
      if (lookahead == '=') ADVANCE(173);
      if (lookahead == '>') ADVANCE(189);
      if (lookahead == ']') ADVANCE(223);
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(112);
      if (lookahead == '|') ADVANCE(5);
      if (lookahead == '}') ADVANCE(221);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(185);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_ATrange);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_break_stmt);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_break_stmt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(190);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_PIPE_GT);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(186);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '(') ADVANCE(225);
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == '{') ADVANCE(224);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(193);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_expr_string_token1);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_expr_string_token1);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_expr_string_token2);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_expr_string_token2);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_string_esc);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_expr_tag);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_expr_nil);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_expr_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_expr_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_DOT_LBRACE);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_DOT_LPAREN);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_require);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_require);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_assert);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_collectgarbage);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_collectgarbage);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_error);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_getfenv);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_getfenv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_getmetatable);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_getmetatable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_ipairs);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_ipairs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_loadstring);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_loadstring);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_newproxy);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_newproxy);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_next);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_next);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_pairs);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_pairs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_pcall);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_pcall);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_print);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_print);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_rawequal);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_rawequal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_rawget);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_rawget);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_rawset);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_rawset);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_setfenv);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_setfenv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_setmetatable);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_setmetatable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_tonumber);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_tonumber);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_tostring);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_tostring);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_unpack);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_unpack);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_xpcall);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_xpcall);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(336);
      if (lookahead == 'c') ADVANCE(291);
      if (lookahead == 'r') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(419);
      if (lookahead == 'e') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(419);
      if (lookahead == 'e') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(353);
      if (lookahead == 'o') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'b') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'b') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'b') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'b') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'c') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'c') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'c') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'c') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'd') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(420);
      if (lookahead == 'i') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(375);
      if (lookahead == 'g') ADVANCE(323);
      if (lookahead == 's') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(398);
      if (lookahead == 'o') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'f') ADVANCE(227);
      if (lookahead == 'p') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'f') ADVANCE(318);
      if (lookahead == 'm') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'f') ADVANCE(320);
      if (lookahead == 'm') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'g') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'g') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'g') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'g') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'i') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'i') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'i') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'i') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'i') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'i') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'k') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'k') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(317);
      if (lookahead == 't') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'm') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(412);
      if (lookahead == 's') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'o') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'o') ADVANCE(362);
      if (lookahead == 'r') ADVANCE(414);
      if (lookahead == 'y') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'o') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'o') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'o') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'p') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'p') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'p') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'p') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'q') ADVANCE(413);
      if (lookahead == 't') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'q') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'q') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 's') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 's') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 's') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 's') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 's') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 's') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'u') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'u') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'u') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'u') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'u') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'v') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'v') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'w') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'w') ADVANCE(372);
      if (lookahead == 'x') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'x') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'y') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 166},
  [2] = {.lex_state = 166},
  [3] = {.lex_state = 166},
  [4] = {.lex_state = 166},
  [5] = {.lex_state = 166},
  [6] = {.lex_state = 166},
  [7] = {.lex_state = 166},
  [8] = {.lex_state = 166},
  [9] = {.lex_state = 166},
  [10] = {.lex_state = 166},
  [11] = {.lex_state = 166},
  [12] = {.lex_state = 166},
  [13] = {.lex_state = 166},
  [14] = {.lex_state = 166},
  [15] = {.lex_state = 159},
  [16] = {.lex_state = 159},
  [17] = {.lex_state = 159},
  [18] = {.lex_state = 159},
  [19] = {.lex_state = 159},
  [20] = {.lex_state = 159},
  [21] = {.lex_state = 159},
  [22] = {.lex_state = 159},
  [23] = {.lex_state = 159},
  [24] = {.lex_state = 159},
  [25] = {.lex_state = 159},
  [26] = {.lex_state = 159},
  [27] = {.lex_state = 159},
  [28] = {.lex_state = 159},
  [29] = {.lex_state = 159},
  [30] = {.lex_state = 159},
  [31] = {.lex_state = 159},
  [32] = {.lex_state = 159},
  [33] = {.lex_state = 159},
  [34] = {.lex_state = 159},
  [35] = {.lex_state = 159},
  [36] = {.lex_state = 159},
  [37] = {.lex_state = 159},
  [38] = {.lex_state = 159},
  [39] = {.lex_state = 159},
  [40] = {.lex_state = 159},
  [41] = {.lex_state = 159},
  [42] = {.lex_state = 159},
  [43] = {.lex_state = 159},
  [44] = {.lex_state = 159},
  [45] = {.lex_state = 159},
  [46] = {.lex_state = 167},
  [47] = {.lex_state = 167},
  [48] = {.lex_state = 167},
  [49] = {.lex_state = 167},
  [50] = {.lex_state = 167},
  [51] = {.lex_state = 167},
  [52] = {.lex_state = 167},
  [53] = {.lex_state = 167},
  [54] = {.lex_state = 167},
  [55] = {.lex_state = 167},
  [56] = {.lex_state = 167},
  [57] = {.lex_state = 167},
  [58] = {.lex_state = 167},
  [59] = {.lex_state = 167},
  [60] = {.lex_state = 167},
  [61] = {.lex_state = 167},
  [62] = {.lex_state = 167},
  [63] = {.lex_state = 167},
  [64] = {.lex_state = 167},
  [65] = {.lex_state = 167},
  [66] = {.lex_state = 167},
  [67] = {.lex_state = 167},
  [68] = {.lex_state = 167},
  [69] = {.lex_state = 167},
  [70] = {.lex_state = 167},
  [71] = {.lex_state = 167},
  [72] = {.lex_state = 167},
  [73] = {.lex_state = 167},
  [74] = {.lex_state = 167},
  [75] = {.lex_state = 167},
  [76] = {.lex_state = 167},
  [77] = {.lex_state = 167},
  [78] = {.lex_state = 167},
  [79] = {.lex_state = 167},
  [80] = {.lex_state = 167},
  [81] = {.lex_state = 167},
  [82] = {.lex_state = 167},
  [83] = {.lex_state = 167},
  [84] = {.lex_state = 167},
  [85] = {.lex_state = 167},
  [86] = {.lex_state = 167},
  [87] = {.lex_state = 167},
  [88] = {.lex_state = 167},
  [89] = {.lex_state = 167},
  [90] = {.lex_state = 167},
  [91] = {.lex_state = 167},
  [92] = {.lex_state = 167},
  [93] = {.lex_state = 167},
  [94] = {.lex_state = 167},
  [95] = {.lex_state = 167},
  [96] = {.lex_state = 167},
  [97] = {.lex_state = 167},
  [98] = {.lex_state = 167},
  [99] = {.lex_state = 167},
  [100] = {.lex_state = 167},
  [101] = {.lex_state = 167},
  [102] = {.lex_state = 167},
  [103] = {.lex_state = 167},
  [104] = {.lex_state = 167},
  [105] = {.lex_state = 167},
  [106] = {.lex_state = 167},
  [107] = {.lex_state = 167},
  [108] = {.lex_state = 167},
  [109] = {.lex_state = 167},
  [110] = {.lex_state = 167},
  [111] = {.lex_state = 167},
  [112] = {.lex_state = 160},
  [113] = {.lex_state = 166},
  [114] = {.lex_state = 161},
  [115] = {.lex_state = 161},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 160},
  [118] = {.lex_state = 160},
  [119] = {.lex_state = 161},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 166},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 162},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 162},
  [146] = {.lex_state = 162},
  [147] = {.lex_state = 162},
  [148] = {.lex_state = 162},
  [149] = {.lex_state = 162},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_ATrange] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_break_stmt] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PIPE_GT] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [sym_string_esc] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_expr_nil] = ACTIONS(1),
    [sym_expr_number] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT_LBRACE] = ACTIONS(1),
    [anon_sym_DOT_LPAREN] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [sym_require] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_collectgarbage] = ACTIONS(1),
    [anon_sym_error] = ACTIONS(1),
    [anon_sym_getfenv] = ACTIONS(1),
    [anon_sym_getmetatable] = ACTIONS(1),
    [anon_sym_ipairs] = ACTIONS(1),
    [anon_sym_loadstring] = ACTIONS(1),
    [anon_sym_newproxy] = ACTIONS(1),
    [anon_sym_next] = ACTIONS(1),
    [anon_sym_pairs] = ACTIONS(1),
    [anon_sym_pcall] = ACTIONS(1),
    [anon_sym_print] = ACTIONS(1),
    [anon_sym_rawequal] = ACTIONS(1),
    [anon_sym_rawget] = ACTIONS(1),
    [anon_sym_rawset] = ACTIONS(1),
    [anon_sym_select] = ACTIONS(1),
    [anon_sym_setfenv] = ACTIONS(1),
    [anon_sym_setmetatable] = ACTIONS(1),
    [anon_sym_tonumber] = ACTIONS(1),
    [anon_sym_tostring] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_unpack] = ACTIONS(1),
    [anon_sym_xpcall] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(161),
    [sym_stmt] = STATE(122),
    [sym_let_stmt] = STATE(131),
    [sym_assign_stmt] = STATE(131),
    [sym_for_stmt] = STATE(131),
    [sym_return_stmt] = STATE(131),
    [sym__expr] = STATE(89),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_for] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_break_stmt] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [2] = {
    [sym_stmt] = STATE(132),
    [sym_let_stmt] = STATE(131),
    [sym_assign_stmt] = STATE(131),
    [sym_for_stmt] = STATE(131),
    [sym_return_stmt] = STATE(131),
    [sym__expr] = STATE(89),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_for] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_break_stmt] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(41),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [3] = {
    [sym_stmt] = STATE(132),
    [sym_let_stmt] = STATE(131),
    [sym_assign_stmt] = STATE(131),
    [sym_for_stmt] = STATE(131),
    [sym_return_stmt] = STATE(131),
    [sym__expr] = STATE(89),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_for] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_break_stmt] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [4] = {
    [sym_stmt] = STATE(132),
    [sym_let_stmt] = STATE(131),
    [sym_assign_stmt] = STATE(131),
    [sym_for_stmt] = STATE(131),
    [sym_return_stmt] = STATE(131),
    [sym__expr] = STATE(89),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_for] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_break_stmt] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [5] = {
    [sym_stmt] = STATE(132),
    [sym_let_stmt] = STATE(131),
    [sym_assign_stmt] = STATE(131),
    [sym_for_stmt] = STATE(131),
    [sym_return_stmt] = STATE(131),
    [sym__expr] = STATE(89),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_for] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_break_stmt] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [6] = {
    [sym_stmt] = STATE(132),
    [sym_let_stmt] = STATE(131),
    [sym_assign_stmt] = STATE(131),
    [sym_for_stmt] = STATE(131),
    [sym_return_stmt] = STATE(131),
    [sym__expr] = STATE(89),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_for] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_break_stmt] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [7] = {
    [sym_stmt] = STATE(132),
    [sym_let_stmt] = STATE(131),
    [sym_assign_stmt] = STATE(131),
    [sym_for_stmt] = STATE(131),
    [sym_return_stmt] = STATE(131),
    [sym__expr] = STATE(89),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_for] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_break_stmt] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [8] = {
    [sym_stmt] = STATE(132),
    [sym_let_stmt] = STATE(131),
    [sym_assign_stmt] = STATE(131),
    [sym_for_stmt] = STATE(131),
    [sym_return_stmt] = STATE(131),
    [sym__expr] = STATE(89),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_for] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_break_stmt] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [9] = {
    [sym_stmt] = STATE(132),
    [sym_let_stmt] = STATE(131),
    [sym_assign_stmt] = STATE(131),
    [sym_for_stmt] = STATE(131),
    [sym_return_stmt] = STATE(131),
    [sym__expr] = STATE(89),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_for] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_break_stmt] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(55),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [10] = {
    [sym_stmt] = STATE(125),
    [sym_let_stmt] = STATE(131),
    [sym_assign_stmt] = STATE(131),
    [sym_for_stmt] = STATE(131),
    [sym_return_stmt] = STATE(131),
    [sym__expr] = STATE(89),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_for] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_break_stmt] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [11] = {
    [sym_stmt] = STATE(139),
    [sym_let_stmt] = STATE(131),
    [sym_assign_stmt] = STATE(131),
    [sym_for_stmt] = STATE(131),
    [sym_return_stmt] = STATE(131),
    [sym__expr] = STATE(89),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_for] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_break_stmt] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [12] = {
    [sym_stmt] = STATE(120),
    [sym_let_stmt] = STATE(131),
    [sym_assign_stmt] = STATE(131),
    [sym_for_stmt] = STATE(131),
    [sym_return_stmt] = STATE(131),
    [sym__expr] = STATE(89),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_for] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_break_stmt] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [13] = {
    [sym_stmt] = STATE(132),
    [sym_let_stmt] = STATE(131),
    [sym_assign_stmt] = STATE(131),
    [sym_for_stmt] = STATE(131),
    [sym_return_stmt] = STATE(131),
    [sym__expr] = STATE(89),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_for] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_break_stmt] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [14] = {
    [sym_stmt] = STATE(142),
    [sym_let_stmt] = STATE(131),
    [sym_assign_stmt] = STATE(131),
    [sym_for_stmt] = STATE(131),
    [sym_return_stmt] = STATE(131),
    [sym__expr] = STATE(89),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_for] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_break_stmt] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [15] = {
    [sym_builtin_range] = STATE(155),
    [sym__expr] = STATE(103),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_ATrange] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [16] = {
    [sym__expr] = STATE(93),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(107),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [17] = {
    [sym__expr] = STATE(101),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(111),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(63),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [18] = {
    [sym__expr] = STATE(91),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [19] = {
    [sym__expr] = STATE(90),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [20] = {
    [sym__expr] = STATE(109),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [21] = {
    [sym__expr] = STATE(48),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [22] = {
    [sym__expr] = STATE(98),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [23] = {
    [sym__expr] = STATE(104),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [24] = {
    [sym__expr] = STATE(96),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [25] = {
    [sym__expr] = STATE(106),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [26] = {
    [sym__expr] = STATE(99),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [27] = {
    [sym__expr] = STATE(92),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [28] = {
    [sym__expr] = STATE(100),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [29] = {
    [sym__expr] = STATE(56),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [30] = {
    [sym__expr] = STATE(97),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [31] = {
    [sym__expr] = STATE(94),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [32] = {
    [sym__expr] = STATE(110),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [33] = {
    [sym__expr] = STATE(51),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [34] = {
    [sym__expr] = STATE(50),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [35] = {
    [sym__expr] = STATE(49),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [36] = {
    [sym__expr] = STATE(55),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [37] = {
    [sym__expr] = STATE(47),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [38] = {
    [sym__expr] = STATE(105),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [39] = {
    [sym__expr] = STATE(108),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [40] = {
    [sym__expr] = STATE(102),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [41] = {
    [sym__expr] = STATE(54),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [42] = {
    [sym__expr] = STATE(46),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [43] = {
    [sym__expr] = STATE(95),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [44] = {
    [sym__expr] = STATE(53),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
  [45] = {
    [sym__expr] = STATE(52),
    [sym_expr_binop] = STATE(83),
    [sym_expr_unop] = STATE(83),
    [sym_expr_path] = STATE(83),
    [sym_expr_string] = STATE(83),
    [sym_expr_bool] = STATE(83),
    [sym_expr_table] = STATE(83),
    [sym_expr_paren] = STATE(83),
    [sym_expr_block] = STATE(83),
    [sym_expr_func] = STATE(83),
    [sym_expr_if] = STATE(83),
    [sym_fn_call] = STATE(69),
    [sym_builtin_fn] = STATE(113),
    [sym_meth_call] = STATE(69),
    [sym_ident] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_expr_tag] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LPAREN] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [sym_require] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(37),
    [anon_sym_collectgarbage] = ACTIONS(37),
    [anon_sym_error] = ACTIONS(37),
    [anon_sym_getfenv] = ACTIONS(37),
    [anon_sym_getmetatable] = ACTIONS(37),
    [anon_sym_ipairs] = ACTIONS(37),
    [anon_sym_loadstring] = ACTIONS(37),
    [anon_sym_newproxy] = ACTIONS(37),
    [anon_sym_next] = ACTIONS(37),
    [anon_sym_pairs] = ACTIONS(37),
    [anon_sym_pcall] = ACTIONS(37),
    [anon_sym_print] = ACTIONS(37),
    [anon_sym_rawequal] = ACTIONS(37),
    [anon_sym_rawget] = ACTIONS(37),
    [anon_sym_rawset] = ACTIONS(37),
    [anon_sym_select] = ACTIONS(37),
    [anon_sym_setfenv] = ACTIONS(37),
    [anon_sym_setmetatable] = ACTIONS(37),
    [anon_sym_tonumber] = ACTIONS(37),
    [anon_sym_tostring] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_unpack] = ACTIONS(37),
    [anon_sym_xpcall] = ACTIONS(37),
    [aux_sym_ident_token1] = ACTIONS(39),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_EQ,
    ACTIONS(73), 1,
      anon_sym_or,
    ACTIONS(79), 1,
      anon_sym_DOT_DOT,
    ACTIONS(83), 1,
      anon_sym_STAR,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      anon_sym_PIPE_GT,
    ACTIONS(89), 1,
      anon_sym_DOT,
    STATE(57), 1,
      aux_sym_expr_path_repeat1,
    STATE(60), 1,
      sym_expr_string,
    ACTIONS(75), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(69), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_and,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [59] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_DOT_DOT,
    ACTIONS(83), 1,
      anon_sym_STAR,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      anon_sym_PIPE_GT,
    ACTIONS(89), 1,
      anon_sym_DOT,
    STATE(57), 1,
      aux_sym_expr_path_repeat1,
    STATE(60), 1,
      sym_expr_string,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(71), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(69), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [112] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_STAR,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      anon_sym_PIPE_GT,
    ACTIONS(89), 1,
      anon_sym_DOT,
    STATE(57), 1,
      aux_sym_expr_path_repeat1,
    STATE(60), 1,
      sym_expr_string,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(71), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(69), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [163] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_STAR,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      anon_sym_PIPE_GT,
    ACTIONS(89), 1,
      anon_sym_DOT,
    STATE(57), 1,
      aux_sym_expr_path_repeat1,
    STATE(60), 1,
      sym_expr_string,
    ACTIONS(71), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(69), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [212] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_PIPE_GT,
    ACTIONS(89), 1,
      anon_sym_DOT,
    STATE(57), 1,
      aux_sym_expr_path_repeat1,
    STATE(60), 1,
      sym_expr_string,
    ACTIONS(71), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(69), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [257] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_DOT,
    STATE(57), 1,
      aux_sym_expr_path_repeat1,
    STATE(60), 1,
      sym_expr_string,
    ACTIONS(71), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(69), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [300] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_EQ,
    ACTIONS(79), 1,
      anon_sym_DOT_DOT,
    ACTIONS(83), 1,
      anon_sym_STAR,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      anon_sym_PIPE_GT,
    ACTIONS(89), 1,
      anon_sym_DOT,
    STATE(57), 1,
      aux_sym_expr_path_repeat1,
    STATE(60), 1,
      sym_expr_string,
    ACTIONS(75), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(69), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [357] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_EQ,
    ACTIONS(73), 1,
      anon_sym_or,
    ACTIONS(79), 1,
      anon_sym_DOT_DOT,
    ACTIONS(83), 1,
      anon_sym_STAR,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      anon_sym_PIPE_GT,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      anon_sym_and,
    STATE(57), 1,
      aux_sym_expr_path_repeat1,
    STATE(60), 1,
      sym_expr_string,
    ACTIONS(75), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(69), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [418] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_DOT,
    STATE(57), 1,
      aux_sym_expr_path_repeat1,
    STATE(60), 1,
      sym_expr_string,
    ACTIONS(95), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(93), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [461] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_or,
    ACTIONS(79), 1,
      anon_sym_DOT_DOT,
    ACTIONS(83), 1,
      anon_sym_STAR,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      anon_sym_PIPE_GT,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      anon_sym_and,
    ACTIONS(99), 1,
      anon_sym_EQ,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_COLON,
    STATE(57), 1,
      aux_sym_expr_path_repeat1,
    STATE(60), 1,
      sym_expr_string,
    ACTIONS(75), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(97), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
  [532] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_or,
    ACTIONS(79), 1,
      anon_sym_DOT_DOT,
    ACTIONS(83), 1,
      anon_sym_STAR,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      anon_sym_PIPE_GT,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      anon_sym_and,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_COLON,
    ACTIONS(109), 1,
      anon_sym_EQ,
    ACTIONS(111), 1,
      anon_sym_else,
    STATE(57), 1,
      aux_sym_expr_path_repeat1,
    STATE(60), 1,
      sym_expr_string,
    ACTIONS(75), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(107), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [605] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(58), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(115), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(113), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [643] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_DOT,
    STATE(58), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(119), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(117), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [683] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(124), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_in,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [719] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(128), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(132), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [789] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(136), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(140), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(144), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(148), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [929] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(152), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [964] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(156), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [999] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(160), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1034] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(164), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(168), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(172), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(176), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(180), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(184), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1244] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(188), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(192), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(196), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(200), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(204), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(208), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(212), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(216), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1524] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(164), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(220), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1594] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(224), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(228), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(232), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1699] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(117), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1734] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_or,
    ACTIONS(79), 1,
      anon_sym_DOT_DOT,
    ACTIONS(83), 1,
      anon_sym_STAR,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      anon_sym_PIPE_GT,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      anon_sym_and,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_COLON,
    ACTIONS(238), 1,
      anon_sym_EQ,
    STATE(57), 1,
      aux_sym_expr_path_repeat1,
    STATE(60), 1,
      sym_expr_string,
    ACTIONS(75), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(236), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [1801] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_or,
    ACTIONS(79), 1,
      anon_sym_DOT_DOT,
    ACTIONS(83), 1,
      anon_sym_STAR,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      anon_sym_PIPE_GT,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      anon_sym_and,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_COLON,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_expr_path_repeat1,
    STATE(60), 1,
      sym_expr_string,
    STATE(138), 1,
      aux_sym__call_args_repeat1,
    ACTIONS(75), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1869] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_or,
    ACTIONS(79), 1,
      anon_sym_DOT_DOT,
    ACTIONS(83), 1,
      anon_sym_STAR,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      anon_sym_PIPE_GT,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      anon_sym_and,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_COLON,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      aux_sym_expr_path_repeat1,
    STATE(60), 1,
      sym_expr_string,
    STATE(133), 1,
      aux_sym__call_args_repeat1,
    ACTIONS(75), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1937] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_or,
    ACTIONS(79), 1,
      anon_sym_DOT_DOT,
    ACTIONS(83), 1,
      anon_sym_STAR,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      anon_sym_PIPE_GT,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      anon_sym_and,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_COLON,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(248), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_expr_path_repeat1,
    STATE(60), 1,
      sym_expr_string,
    STATE(137), 1,
      aux_sym_expr_table_repeat1,
    ACTIONS(75), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2005] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_or,
    ACTIONS(79), 1,
      anon_sym_DOT_DOT,
    ACTIONS(83), 1,
      anon_sym_STAR,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      anon_sym_PIPE_GT,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      anon_sym_and,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_COLON,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_expr_path_repeat1,
    STATE(60), 1,
      sym_expr_string,
    STATE(123), 1,
      aux_sym_expr_table_repeat1,
    ACTIONS(75), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2073] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_or,
    ACTIONS(79), 1,
      anon_sym_DOT_DOT,
    ACTIONS(83), 1,
      anon_sym_STAR,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      anon_sym_PIPE_GT,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      anon_sym_and,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_COLON,
    STATE(57), 1,
      aux_sym_expr_path_repeat1,
    STATE(60), 1,
      sym_expr_string,
    ACTIONS(75), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(252), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2137] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_or,
    ACTIONS(79), 1,
      anon_sym_DOT_DOT,
    ACTIONS(83), 1,
      anon_sym_STAR,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      anon_sym_PIPE_GT,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      anon_sym_and,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_COLON,
    STATE(57), 1,
      aux_sym_expr_path_repeat1,
    STATE(60), 1,
      sym_expr_string,
    ACTIONS(75), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(254), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2201] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_or,
    ACTIONS(79), 1,
      anon_sym_DOT_DOT,
    ACTIONS(83), 1,
      anon_sym_STAR,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      anon_sym_PIPE_GT,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      anon_sym_and,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_COLON,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_expr_path_repeat1,
    STATE(60), 1,
      sym_expr_string,
    STATE(129), 1,
      aux_sym_expr_table_repeat1,
    ACTIONS(75), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2269] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_or,
    ACTIONS(79), 1,
      anon_sym_DOT_DOT,
    ACTIONS(83), 1,
      anon_sym_STAR,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      anon_sym_PIPE_GT,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      anon_sym_and,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_COLON,
    STATE(57), 1,
      aux_sym_expr_path_repeat1,
    STATE(60), 1,
      sym_expr_string,
    ACTIONS(75), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(258), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2333] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_or,
    ACTIONS(79), 1,
      anon_sym_DOT_DOT,
    ACTIONS(83), 1,
      anon_sym_STAR,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      anon_sym_PIPE_GT,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      anon_sym_and,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_COLON,
    STATE(57), 1,
      aux_sym_expr_path_repeat1,
    STATE(60), 1,
      sym_expr_string,
    ACTIONS(75), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(260), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2397] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_or,
    ACTIONS(79), 1,
      anon_sym_DOT_DOT,
    ACTIONS(83), 1,
      anon_sym_STAR,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      anon_sym_PIPE_GT,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      anon_sym_and,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_COLON,
    STATE(57), 1,
      aux_sym_expr_path_repeat1,
    STATE(60), 1,
      sym_expr_string,
    ACTIONS(75), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(262), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2460] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_or,
    ACTIONS(79), 1,
      anon_sym_DOT_DOT,
    ACTIONS(83), 1,
      anon_sym_STAR,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      anon_sym_PIPE_GT,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      anon_sym_and,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_COLON,
    STATE(57), 1,
      aux_sym_expr_path_repeat1,
    STATE(60), 1,
      sym_expr_string,
    ACTIONS(75), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(264), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2523] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_or,
    ACTIONS(79), 1,
      anon_sym_DOT_DOT,
    ACTIONS(83), 1,
      anon_sym_STAR,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      anon_sym_PIPE_GT,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      anon_sym_and,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_COLON,
    STATE(57), 1,
      aux_sym_expr_path_repeat1,
    STATE(60), 1,
      sym_expr_string,
    ACTIONS(75), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(266), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2586] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_or,
    ACTIONS(79), 1,
      anon_sym_DOT_DOT,
    ACTIONS(83), 1,
      anon_sym_STAR,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      anon_sym_PIPE_GT,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      anon_sym_and,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_COLON,
    STATE(57), 1,
      aux_sym_expr_path_repeat1,
    STATE(60), 1,
      sym_expr_string,
    ACTIONS(75), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(268), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2649] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_or,
    ACTIONS(79), 1,
      anon_sym_DOT_DOT,
    ACTIONS(83), 1,
      anon_sym_STAR,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      anon_sym_PIPE_GT,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      anon_sym_and,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_COLON,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      aux_sym_expr_path_repeat1,
    STATE(60), 1,
      sym_expr_string,
    ACTIONS(75), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2711] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_or,
    ACTIONS(79), 1,
      anon_sym_DOT_DOT,
    ACTIONS(83), 1,
      anon_sym_STAR,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      anon_sym_PIPE_GT,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      anon_sym_and,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_COLON,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_expr_path_repeat1,
    STATE(60), 1,
      sym_expr_string,
    ACTIONS(75), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2773] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_or,
    ACTIONS(79), 1,
      anon_sym_DOT_DOT,
    ACTIONS(83), 1,
      anon_sym_STAR,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      anon_sym_PIPE_GT,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      anon_sym_and,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_COLON,
    ACTIONS(274), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      aux_sym_expr_path_repeat1,
    STATE(60), 1,
      sym_expr_string,
    ACTIONS(75), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2835] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_or,
    ACTIONS(79), 1,
      anon_sym_DOT_DOT,
    ACTIONS(83), 1,
      anon_sym_STAR,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      anon_sym_PIPE_GT,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      anon_sym_and,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_COLON,
    ACTIONS(276), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      aux_sym_expr_path_repeat1,
    STATE(60), 1,
      sym_expr_string,
    ACTIONS(75), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2897] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_EQ,
    ACTIONS(166), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(164), 17,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [2929] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_or,
    ACTIONS(79), 1,
      anon_sym_DOT_DOT,
    ACTIONS(83), 1,
      anon_sym_STAR,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      anon_sym_PIPE_GT,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      anon_sym_and,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_COLON,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      aux_sym_expr_path_repeat1,
    STATE(60), 1,
      sym_expr_string,
    ACTIONS(75), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2991] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_or,
    ACTIONS(79), 1,
      anon_sym_DOT_DOT,
    ACTIONS(83), 1,
      anon_sym_STAR,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      anon_sym_PIPE_GT,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      anon_sym_and,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_COLON,
    ACTIONS(282), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym_expr_path_repeat1,
    STATE(60), 1,
      sym_expr_string,
    ACTIONS(75), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3053] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_or,
    ACTIONS(79), 1,
      anon_sym_DOT_DOT,
    ACTIONS(83), 1,
      anon_sym_STAR,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      anon_sym_PIPE_GT,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      anon_sym_and,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_COLON,
    ACTIONS(284), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym_expr_path_repeat1,
    STATE(60), 1,
      sym_expr_string,
    ACTIONS(75), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3115] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_EQ,
    ACTIONS(166), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(164), 17,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [3147] = 5,
    ACTIONS(288), 1,
      sym_comment,
    ACTIONS(290), 1,
      aux_sym_expr_string_token2,
    ACTIONS(292), 1,
      anon_sym_SQUOTE2,
    ACTIONS(294), 1,
      sym_string_esc,
    STATE(118), 1,
      aux_sym_expr_string_repeat2,
  [3163] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym_expr_string,
  [3179] = 5,
    ACTIONS(288), 1,
      sym_comment,
    ACTIONS(296), 1,
      aux_sym_expr_string_token1,
    ACTIONS(298), 1,
      anon_sym_DQUOTE2,
    ACTIONS(300), 1,
      sym_string_esc,
    STATE(115), 1,
      aux_sym_expr_string_repeat1,
  [3195] = 5,
    ACTIONS(288), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DQUOTE2,
    ACTIONS(302), 1,
      aux_sym_expr_string_token1,
    ACTIONS(304), 1,
      sym_string_esc,
    STATE(119), 1,
      aux_sym_expr_string_repeat1,
  [3211] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_SEMI,
    STATE(116), 1,
      aux_sym__block_body_repeat1,
    ACTIONS(306), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
  [3225] = 5,
    ACTIONS(288), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_SQUOTE2,
    ACTIONS(311), 1,
      aux_sym_expr_string_token2,
    ACTIONS(313), 1,
      sym_string_esc,
    STATE(112), 1,
      aux_sym_expr_string_repeat2,
  [3241] = 5,
    ACTIONS(288), 1,
      sym_comment,
    ACTIONS(315), 1,
      aux_sym_expr_string_token2,
    ACTIONS(318), 1,
      anon_sym_SQUOTE2,
    ACTIONS(320), 1,
      sym_string_esc,
    STATE(118), 1,
      aux_sym_expr_string_repeat2,
  [3257] = 5,
    ACTIONS(288), 1,
      sym_comment,
    ACTIONS(323), 1,
      aux_sym_expr_string_token1,
    ACTIONS(326), 1,
      anon_sym_DQUOTE2,
    ACTIONS(328), 1,
      sym_string_esc,
    STATE(119), 1,
      aux_sym_expr_string_repeat1,
  [3273] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_SEMI,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
    STATE(126), 1,
      aux_sym__block_body_repeat1,
  [3286] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(335), 1,
      anon_sym_SEMI,
    STATE(116), 1,
      aux_sym__block_body_repeat1,
  [3299] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
    ACTIONS(339), 1,
      anon_sym_SEMI,
    STATE(121), 1,
      aux_sym__block_body_repeat1,
  [3312] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    STATE(143), 1,
      aux_sym_expr_table_repeat1,
  [3325] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    ACTIONS(343), 1,
      anon_sym_SEMI,
    STATE(116), 1,
      aux_sym__block_body_repeat1,
  [3338] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    ACTIONS(343), 1,
      anon_sym_SEMI,
    STATE(141), 1,
      aux_sym__block_body_repeat1,
  [3351] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(345), 1,
      anon_sym_SEMI,
    STATE(116), 1,
      aux_sym__block_body_repeat1,
  [3364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 3,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3373] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_RPAREN,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    STATE(135), 1,
      aux_sym__decl_args_repeat1,
  [3386] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
    STATE(143), 1,
      aux_sym_expr_table_repeat1,
  [3399] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_RPAREN,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym__call_args_repeat1,
  [3412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [3421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [3430] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(358), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      aux_sym__call_args_repeat1,
  [3443] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(360), 1,
      anon_sym_SEMI,
    STATE(116), 1,
      aux_sym__block_body_repeat1,
  [3456] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    ACTIONS(364), 1,
      anon_sym_COMMA,
    STATE(135), 1,
      aux_sym__decl_args_repeat1,
  [3469] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      aux_sym__decl_args_repeat1,
  [3482] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(369), 1,
      anon_sym_RBRACE,
    STATE(143), 1,
      aux_sym_expr_table_repeat1,
  [3495] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      aux_sym__call_args_repeat1,
  [3508] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_SEMI,
    ACTIONS(375), 1,
      anon_sym_RBRACE,
    STATE(124), 1,
      aux_sym__block_body_repeat1,
  [3521] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    ACTIONS(379), 1,
      aux_sym_ident_token1,
    STATE(136), 1,
      sym_ident,
  [3534] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(381), 1,
      anon_sym_SEMI,
    STATE(116), 1,
      aux_sym__block_body_repeat1,
  [3547] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(381), 1,
      anon_sym_SEMI,
    STATE(134), 1,
      aux_sym__block_body_repeat1,
  [3560] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      aux_sym_expr_table_repeat1,
  [3573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3581] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      aux_sym_ident_token1,
    STATE(151), 1,
      sym_ident,
  [3591] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      aux_sym_ident_token1,
    STATE(88), 1,
      sym_ident,
  [3601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      aux_sym_ident_token1,
    STATE(162), 1,
      sym_ident,
  [3611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      aux_sym_ident_token1,
    STATE(157), 1,
      sym_ident,
  [3621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      aux_sym_ident_token1,
    STATE(144), 1,
      sym_ident,
  [3631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_EQ,
  [3638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_LPAREN,
  [3645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
  [3652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
  [3659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_EQ,
  [3666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
  [3673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
  [3680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_in,
  [3687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
  [3694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_LBRACE,
  [3701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
  [3708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      ts_builtin_sym_end,
  [3715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_EQ,
  [3722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(46)] = 0,
  [SMALL_STATE(47)] = 59,
  [SMALL_STATE(48)] = 112,
  [SMALL_STATE(49)] = 163,
  [SMALL_STATE(50)] = 212,
  [SMALL_STATE(51)] = 257,
  [SMALL_STATE(52)] = 300,
  [SMALL_STATE(53)] = 357,
  [SMALL_STATE(54)] = 418,
  [SMALL_STATE(55)] = 461,
  [SMALL_STATE(56)] = 532,
  [SMALL_STATE(57)] = 605,
  [SMALL_STATE(58)] = 643,
  [SMALL_STATE(59)] = 683,
  [SMALL_STATE(60)] = 719,
  [SMALL_STATE(61)] = 754,
  [SMALL_STATE(62)] = 789,
  [SMALL_STATE(63)] = 824,
  [SMALL_STATE(64)] = 859,
  [SMALL_STATE(65)] = 894,
  [SMALL_STATE(66)] = 929,
  [SMALL_STATE(67)] = 964,
  [SMALL_STATE(68)] = 999,
  [SMALL_STATE(69)] = 1034,
  [SMALL_STATE(70)] = 1069,
  [SMALL_STATE(71)] = 1104,
  [SMALL_STATE(72)] = 1139,
  [SMALL_STATE(73)] = 1174,
  [SMALL_STATE(74)] = 1209,
  [SMALL_STATE(75)] = 1244,
  [SMALL_STATE(76)] = 1279,
  [SMALL_STATE(77)] = 1314,
  [SMALL_STATE(78)] = 1349,
  [SMALL_STATE(79)] = 1384,
  [SMALL_STATE(80)] = 1419,
  [SMALL_STATE(81)] = 1454,
  [SMALL_STATE(82)] = 1489,
  [SMALL_STATE(83)] = 1524,
  [SMALL_STATE(84)] = 1559,
  [SMALL_STATE(85)] = 1594,
  [SMALL_STATE(86)] = 1629,
  [SMALL_STATE(87)] = 1664,
  [SMALL_STATE(88)] = 1699,
  [SMALL_STATE(89)] = 1734,
  [SMALL_STATE(90)] = 1801,
  [SMALL_STATE(91)] = 1869,
  [SMALL_STATE(92)] = 1937,
  [SMALL_STATE(93)] = 2005,
  [SMALL_STATE(94)] = 2073,
  [SMALL_STATE(95)] = 2137,
  [SMALL_STATE(96)] = 2201,
  [SMALL_STATE(97)] = 2269,
  [SMALL_STATE(98)] = 2333,
  [SMALL_STATE(99)] = 2397,
  [SMALL_STATE(100)] = 2460,
  [SMALL_STATE(101)] = 2523,
  [SMALL_STATE(102)] = 2586,
  [SMALL_STATE(103)] = 2649,
  [SMALL_STATE(104)] = 2711,
  [SMALL_STATE(105)] = 2773,
  [SMALL_STATE(106)] = 2835,
  [SMALL_STATE(107)] = 2897,
  [SMALL_STATE(108)] = 2929,
  [SMALL_STATE(109)] = 2991,
  [SMALL_STATE(110)] = 3053,
  [SMALL_STATE(111)] = 3115,
  [SMALL_STATE(112)] = 3147,
  [SMALL_STATE(113)] = 3163,
  [SMALL_STATE(114)] = 3179,
  [SMALL_STATE(115)] = 3195,
  [SMALL_STATE(116)] = 3211,
  [SMALL_STATE(117)] = 3225,
  [SMALL_STATE(118)] = 3241,
  [SMALL_STATE(119)] = 3257,
  [SMALL_STATE(120)] = 3273,
  [SMALL_STATE(121)] = 3286,
  [SMALL_STATE(122)] = 3299,
  [SMALL_STATE(123)] = 3312,
  [SMALL_STATE(124)] = 3325,
  [SMALL_STATE(125)] = 3338,
  [SMALL_STATE(126)] = 3351,
  [SMALL_STATE(127)] = 3364,
  [SMALL_STATE(128)] = 3373,
  [SMALL_STATE(129)] = 3386,
  [SMALL_STATE(130)] = 3399,
  [SMALL_STATE(131)] = 3412,
  [SMALL_STATE(132)] = 3421,
  [SMALL_STATE(133)] = 3430,
  [SMALL_STATE(134)] = 3443,
  [SMALL_STATE(135)] = 3456,
  [SMALL_STATE(136)] = 3469,
  [SMALL_STATE(137)] = 3482,
  [SMALL_STATE(138)] = 3495,
  [SMALL_STATE(139)] = 3508,
  [SMALL_STATE(140)] = 3521,
  [SMALL_STATE(141)] = 3534,
  [SMALL_STATE(142)] = 3547,
  [SMALL_STATE(143)] = 3560,
  [SMALL_STATE(144)] = 3573,
  [SMALL_STATE(145)] = 3581,
  [SMALL_STATE(146)] = 3591,
  [SMALL_STATE(147)] = 3601,
  [SMALL_STATE(148)] = 3611,
  [SMALL_STATE(149)] = 3621,
  [SMALL_STATE(150)] = 3631,
  [SMALL_STATE(151)] = 3638,
  [SMALL_STATE(152)] = 3645,
  [SMALL_STATE(153)] = 3652,
  [SMALL_STATE(154)] = 3659,
  [SMALL_STATE(155)] = 3666,
  [SMALL_STATE(156)] = 3673,
  [SMALL_STATE(157)] = 3680,
  [SMALL_STATE(158)] = 3687,
  [SMALL_STATE(159)] = 3694,
  [SMALL_STATE(160)] = 3701,
  [SMALL_STATE(161)] = 3708,
  [SMALL_STATE(162)] = 3715,
  [SMALL_STATE(163)] = 3722,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_binop, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_binop, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_unop, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_unop, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_if, 7),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_if, 7),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_if, 5),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_if, 5),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_path, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_path, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_path_repeat1, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_path_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_path_repeat1, 2), SHIFT_REPEAT(146),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_call, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meth_call, 6),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meth_call, 6),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_func, 9),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_func, 9),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_paren, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_paren, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_string, 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_string, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_func, 5),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_func, 5),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_block, 5),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_block, 5),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 5),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 5),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 3),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_block, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_block, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_func, 8),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_func, 8),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meth_call, 5),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meth_call, 5),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 8),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 8),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meth_call, 7),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meth_call, 7),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 4),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_call, 4),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_call, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_string, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_string, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 6),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 6),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_block, 4),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_block, 4),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_func, 6),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_func, 6),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 4),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 4),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_func, 7),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_func, 7),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 7),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 7),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_bool, 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_bool, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 2),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 5),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_call, 5),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 1),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 4),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_stmt, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_stmt, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 7),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_table_repeat1, 4),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__call_args_repeat1, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_table_repeat1, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_table_repeat1, 6),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2), SHIFT_REPEAT(13),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_string_repeat2, 2), SHIFT_REPEAT(118),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_string_repeat2, 2),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_string_repeat2, 2), SHIFT_REPEAT(118),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_string_repeat1, 2), SHIFT_REPEAT(119),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_string_repeat1, 2),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_string_repeat1, 2), SHIFT_REPEAT(119),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_fn, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__call_args_repeat1, 2), SHIFT_REPEAT(28),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_args_repeat1, 2),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decl_args_repeat1, 2), SHIFT_REPEAT(149),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_table_repeat1, 2), SHIFT_REPEAT(17),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [406] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_range, 6),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_noom(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
