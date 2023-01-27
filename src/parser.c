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
#define STATE_COUNT 256
#define LARGE_STATE_COUNT 74
#define SYMBOL_COUNT 109
#define ALIAS_COUNT 0
#define TOKEN_COUNT 78
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  sym_comment = 2,
  anon_sym_let = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_EQ = 6,
  anon_sym_for = 7,
  anon_sym_in = 8,
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
  anon_sym_LBRACK = 29,
  anon_sym_RBRACK = 30,
  anon_sym_DQUOTE = 31,
  aux_sym_expr_string_token1 = 32,
  anon_sym_DQUOTE2 = 33,
  anon_sym_SQUOTE = 34,
  aux_sym_expr_string_token2 = 35,
  anon_sym_SQUOTE2 = 36,
  aux_sym_expr_string_token3 = 37,
  sym_string_esc = 38,
  anon_sym_true = 39,
  anon_sym_false = 40,
  sym_expr_nil = 41,
  sym_expr_number = 42,
  anon_sym_LBRACE = 43,
  anon_sym_RBRACE = 44,
  anon_sym_DOT_LBRACK = 45,
  anon_sym_COLON = 46,
  anon_sym_DOT_LBRACE = 47,
  anon_sym_DOT_LPAREN = 48,
  anon_sym_if = 49,
  anon_sym_else = 50,
  sym_require = 51,
  anon_sym_assert = 52,
  anon_sym_collectgarbage = 53,
  anon_sym_error = 54,
  anon_sym_getfenv = 55,
  anon_sym_getmetatable = 56,
  anon_sym_ipairs = 57,
  anon_sym_loadstring = 58,
  anon_sym_newproxy = 59,
  anon_sym_next = 60,
  anon_sym_pairs = 61,
  anon_sym_pcall = 62,
  anon_sym_print = 63,
  anon_sym_rawequal = 64,
  anon_sym_rawget = 65,
  anon_sym_rawset = 66,
  anon_sym_select = 67,
  anon_sym_setfenv = 68,
  anon_sym_setmetatable = 69,
  anon_sym_tonumber = 70,
  anon_sym_tostring = 71,
  anon_sym_type = 72,
  anon_sym_unpack = 73,
  anon_sym_xpcall = 74,
  anon_sym_DASH_GT = 75,
  sym_ident = 76,
  aux_sym__ident_immediate_token1 = 77,
  sym_source_file = 78,
  sym_stmt = 79,
  sym_let_stmt = 80,
  sym_assign_stmt = 81,
  sym_for_stmt = 82,
  sym_builtin_range = 83,
  sym_return_stmt = 84,
  sym__expr = 85,
  sym_expr_binop = 86,
  sym_expr_unop = 87,
  sym_expr_path = 88,
  sym_expr_index = 89,
  sym_expr_string = 90,
  sym_expr_tag = 91,
  sym_expr_bool = 92,
  sym_expr_table = 93,
  sym_expr_paren = 94,
  sym_expr_block = 95,
  sym_expr_func = 96,
  sym_expr_if = 97,
  sym_fn_call = 98,
  sym_builtin_fn = 99,
  sym_meth_call = 100,
  sym__ident_immediate = 101,
  aux_sym__block_body_repeat1 = 102,
  aux_sym_expr_path_repeat1 = 103,
  aux_sym_expr_string_repeat1 = 104,
  aux_sym_expr_string_repeat2 = 105,
  aux_sym_expr_table_repeat1 = 106,
  aux_sym__call_args_repeat1 = 107,
  aux_sym__decl_args_repeat1 = 108,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [sym_comment] = "comment",
  [anon_sym_let] = "let",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_expr_string_token1] = "expr_string_token1",
  [anon_sym_DQUOTE2] = "\"",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_expr_string_token2] = "expr_string_token2",
  [anon_sym_SQUOTE2] = "'",
  [aux_sym_expr_string_token3] = "expr_string_token3",
  [sym_string_esc] = "string_esc",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_expr_nil] = "expr_nil",
  [sym_expr_number] = "expr_number",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOT_LBRACK] = ".[",
  [anon_sym_COLON] = ":",
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
  [anon_sym_DASH_GT] = "->",
  [sym_ident] = "ident",
  [aux_sym__ident_immediate_token1] = "ident",
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
  [sym_expr_index] = "expr_index",
  [sym_expr_string] = "expr_string",
  [sym_expr_tag] = "expr_tag",
  [sym_expr_bool] = "expr_bool",
  [sym_expr_table] = "expr_table",
  [sym_expr_paren] = "expr_paren",
  [sym_expr_block] = "expr_block",
  [sym_expr_func] = "expr_func",
  [sym_expr_if] = "expr_if",
  [sym_fn_call] = "fn_call",
  [sym_builtin_fn] = "builtin_fn",
  [sym_meth_call] = "meth_call",
  [sym__ident_immediate] = "_ident_immediate",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_expr_string_token1] = aux_sym_expr_string_token1,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_expr_string_token2] = aux_sym_expr_string_token2,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [aux_sym_expr_string_token3] = aux_sym_expr_string_token3,
  [sym_string_esc] = sym_string_esc,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_expr_nil] = sym_expr_nil,
  [sym_expr_number] = sym_expr_number,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOT_LBRACK] = anon_sym_DOT_LBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
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
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_ident] = sym_ident,
  [aux_sym__ident_immediate_token1] = sym_ident,
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
  [sym_expr_index] = sym_expr_index,
  [sym_expr_string] = sym_expr_string,
  [sym_expr_tag] = sym_expr_tag,
  [sym_expr_bool] = sym_expr_bool,
  [sym_expr_table] = sym_expr_table,
  [sym_expr_paren] = sym_expr_paren,
  [sym_expr_block] = sym_expr_block,
  [sym_expr_func] = sym_expr_func,
  [sym_expr_if] = sym_expr_if,
  [sym_fn_call] = sym_fn_call,
  [sym_builtin_fn] = sym_builtin_fn,
  [sym_meth_call] = sym_meth_call,
  [sym__ident_immediate] = sym__ident_immediate,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_in] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [aux_sym_expr_string_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_string_esc] = {
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
  [anon_sym_DOT_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__ident_immediate_token1] = {
    .visible = true,
    .named = true,
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
  [sym_expr_index] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_string] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_tag] = {
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
  [sym__ident_immediate] = {
    .visible = false,
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
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(167)
      if (lookahead == '!') ADVANCE(204);
      if (lookahead == '"') ADVANCE(215);
      if (lookahead == '\'') ADVANCE(219);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '*') ADVANCE(200);
      if (lookahead == '+') ADVANCE(197);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == '/') ADVANCE(201);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == ';') ADVANCE(172);
      if (lookahead == '<') ADVANCE(194);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead == '>') ADVANCE(192);
      if (lookahead == '@') ADVANCE(112);
      if (lookahead == '[') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead == ']') ADVANCE(211);
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'b') ADVANCE(119);
      if (lookahead == 'c') ADVANCE(102);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'g') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(113);
      if (lookahead == 'p') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead == 'u') ADVANCE(97);
      if (lookahead == 'x') ADVANCE(106);
      if (lookahead == '{') ADVANCE(229);
      if (lookahead == '|') ADVANCE(6);
      if (lookahead == '}') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(189);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '[') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == ']') ADVANCE(220);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(202);
      END_STATE();
    case 7:
      if (lookahead == ']') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(21);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(57);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(84);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(85);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(191);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == 'g') ADVANCE(55);
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 60:
      if (lookahead == 'f') ADVANCE(235);
      if (lookahead == 'n') ADVANCE(181);
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 61:
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 62:
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(278);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(252);
      END_STATE();
    case 65:
      if (lookahead == 'g') ADVANCE(18);
      END_STATE();
    case 66:
      if (lookahead == 'g') ADVANCE(43);
      END_STATE();
    case 67:
      if (lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 74:
      if (lookahead == 'k') ADVANCE(184);
      END_STATE();
    case 75:
      if (lookahead == 'k') ADVANCE(282);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(260);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(284);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(264);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(131);
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(149);
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(150);
      if (lookahead == 'y') ADVANCE(108);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 106:
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 107:
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 108:
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 109:
      if (lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 110:
      if (lookahead == 'q') ADVANCE(153);
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 111:
      if (lookahead == 'q') ADVANCE(151);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(258);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(250);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 149:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 151:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 152:
      if (lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 153:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 154:
      if (lookahead == 'v') ADVANCE(246);
      END_STATE();
    case 155:
      if (lookahead == 'v') ADVANCE(272);
      END_STATE();
    case 156:
      if (lookahead == 'w') ADVANCE(39);
      END_STATE();
    case 157:
      if (lookahead == 'w') ADVANCE(109);
      if (lookahead == 'x') ADVANCE(136);
      END_STATE();
    case 158:
      if (lookahead == 'x') ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == 'y') ADVANCE(254);
      END_STATE();
    case 160:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(160)
      if (lookahead == '!') ADVANCE(203);
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == '\'') ADVANCE(216);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '-') ADVANCE(198);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '@') ADVANCE(112);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'a') ADVANCE(402);
      if (lookahead == 'c') ADVANCE(373);
      if (lookahead == 'e') ADVANCE(389);
      if (lookahead == 'f') ADVANCE(293);
      if (lookahead == 'g') ADVANCE(314);
      if (lookahead == 'i') ADVANCE(337);
      if (lookahead == 'l') ADVANCE(376);
      if (lookahead == 'n') ADVANCE(315);
      if (lookahead == 'p') ADVANCE(287);
      if (lookahead == 'r') ADVANCE(289);
      if (lookahead == 's') ADVANCE(316);
      if (lookahead == 't') ADVANCE(374);
      if (lookahead == 'u') ADVANCE(369);
      if (lookahead == 'x') ADVANCE(378);
      if (lookahead == '{') ADVANCE(229);
      if (lookahead == '}') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 161:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(213);
      if (lookahead == '"') ADVANCE(215);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 162:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(217);
      if (lookahead == '\'') ADVANCE(219);
      if (lookahead == '/') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 163:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(163)
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '/') ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 164:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(164)
      if (lookahead == '/') ADVANCE(2);
      END_STATE();
    case 165:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(164)
      if (lookahead == '/') ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 166:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(221);
      END_STATE();
    case 167:
      if (eof) ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(167)
      if (lookahead == '!') ADVANCE(204);
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == '\'') ADVANCE(216);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '*') ADVANCE(200);
      if (lookahead == '+') ADVANCE(197);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == '/') ADVANCE(201);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == ';') ADVANCE(172);
      if (lookahead == '<') ADVANCE(194);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead == '>') ADVANCE(192);
      if (lookahead == '@') ADVANCE(112);
      if (lookahead == '[') ADVANCE(210);
      if (lookahead == ']') ADVANCE(211);
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'b') ADVANCE(119);
      if (lookahead == 'c') ADVANCE(102);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'g') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(113);
      if (lookahead == 'p') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead == 'u') ADVANCE(97);
      if (lookahead == 'x') ADVANCE(106);
      if (lookahead == '{') ADVANCE(229);
      if (lookahead == '|') ADVANCE(6);
      if (lookahead == '}') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 168:
      if (eof) ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(168)
      if (lookahead == '!') ADVANCE(203);
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == '\'') ADVANCE(216);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == '-') ADVANCE(198);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'a') ADVANCE(402);
      if (lookahead == 'b') ADVANCE(391);
      if (lookahead == 'c') ADVANCE(373);
      if (lookahead == 'e') ADVANCE(389);
      if (lookahead == 'f') ADVANCE(292);
      if (lookahead == 'g') ADVANCE(314);
      if (lookahead == 'i') ADVANCE(337);
      if (lookahead == 'l') ADVANCE(325);
      if (lookahead == 'n') ADVANCE(315);
      if (lookahead == 'p') ADVANCE(287);
      if (lookahead == 'r') ADVANCE(288);
      if (lookahead == 's') ADVANCE(316);
      if (lookahead == 't') ADVANCE(374);
      if (lookahead == 'u') ADVANCE(369);
      if (lookahead == 'x') ADVANCE(378);
      if (lookahead == '{') ADVANCE(229);
      if (lookahead == '}') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 169:
      if (eof) ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(169)
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == '\'') ADVANCE(216);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '*') ADVANCE(200);
      if (lookahead == '+') ADVANCE(197);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '.') ADVANCE(208);
      if (lookahead == '/') ADVANCE(201);
      if (lookahead == ';') ADVANCE(172);
      if (lookahead == '<') ADVANCE(194);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead == '>') ADVANCE(192);
      if (lookahead == '[') ADVANCE(210);
      if (lookahead == ']') ADVANCE(211);
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(113);
      if (lookahead == '|') ADVANCE(6);
      if (lookahead == '}') ADVANCE(230);
      END_STATE();
    case 170:
      if (eof) ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(170)
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '*') ADVANCE(200);
      if (lookahead == '+') ADVANCE(197);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '.') ADVANCE(208);
      if (lookahead == '/') ADVANCE(201);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == ';') ADVANCE(172);
      if (lookahead == '<') ADVANCE(194);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead == '>') ADVANCE(192);
      if (lookahead == '[') ADVANCE(209);
      if (lookahead == ']') ADVANCE(211);
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(113);
      if (lookahead == '|') ADVANCE(6);
      if (lookahead == '}') ADVANCE(230);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(188);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_ATrange);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_break_stmt);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_break_stmt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(286);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_PIPE_GT);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(189);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '(') ADVANCE(234);
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == '[') ADVANCE(231);
      if (lookahead == '{') ADVANCE(233);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '(') ADVANCE(234);
      if (lookahead == '[') ADVANCE(231);
      if (lookahead == '{') ADVANCE(233);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '(') ADVANCE(234);
      if (lookahead == '{') ADVANCE(233);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(196);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '[') ADVANCE(7);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_expr_string_token1);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_expr_string_token1);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_expr_string_token2);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_expr_string_token2);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_expr_string_token3);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_string_esc);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_expr_nil);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_expr_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_expr_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_DOT_LBRACK);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_DOT_LBRACE);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_DOT_LPAREN);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_require);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_require);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_assert);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_collectgarbage);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_collectgarbage);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_error);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_getfenv);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_getfenv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_getmetatable);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_getmetatable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_ipairs);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_ipairs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_loadstring);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_loadstring);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_newproxy);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_newproxy);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_next);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_next);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_pairs);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_pairs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_pcall);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_pcall);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_print);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_print);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_rawequal);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_rawequal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_rawget);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_rawget);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_rawset);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_rawset);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_setfenv);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_setfenv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_setmetatable);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_setmetatable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_tonumber);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_tonumber);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_tostring);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_tostring);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_unpack);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_unpack);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_xpcall);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_xpcall);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(345);
      if (lookahead == 'c') ADVANCE(300);
      if (lookahead == 'r') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(428);
      if (lookahead == 'e') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(428);
      if (lookahead == 'e') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(362);
      if (lookahead == 'o') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(429);
      if (lookahead == 'i') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(384);
      if (lookahead == 'g') ADVANCE(332);
      if (lookahead == 's') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(407);
      if (lookahead == 'o') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(236);
      if (lookahead == 'p') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(327);
      if (lookahead == 'm') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(329);
      if (lookahead == 'm') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'k') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'k') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(326);
      if (lookahead == 't') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(421);
      if (lookahead == 's') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(371);
      if (lookahead == 'r') ADVANCE(423);
      if (lookahead == 'y') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'q') ADVANCE(422);
      if (lookahead == 't') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'q') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'q') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'w') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'w') ADVANCE(381);
      if (lookahead == 'x') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__ident_immediate_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 168},
  [2] = {.lex_state = 168},
  [3] = {.lex_state = 168},
  [4] = {.lex_state = 168},
  [5] = {.lex_state = 168},
  [6] = {.lex_state = 168},
  [7] = {.lex_state = 168},
  [8] = {.lex_state = 168},
  [9] = {.lex_state = 168},
  [10] = {.lex_state = 168},
  [11] = {.lex_state = 168},
  [12] = {.lex_state = 168},
  [13] = {.lex_state = 168},
  [14] = {.lex_state = 168},
  [15] = {.lex_state = 168},
  [16] = {.lex_state = 168},
  [17] = {.lex_state = 160},
  [18] = {.lex_state = 160},
  [19] = {.lex_state = 160},
  [20] = {.lex_state = 160},
  [21] = {.lex_state = 160},
  [22] = {.lex_state = 160},
  [23] = {.lex_state = 160},
  [24] = {.lex_state = 160},
  [25] = {.lex_state = 160},
  [26] = {.lex_state = 160},
  [27] = {.lex_state = 160},
  [28] = {.lex_state = 160},
  [29] = {.lex_state = 160},
  [30] = {.lex_state = 160},
  [31] = {.lex_state = 160},
  [32] = {.lex_state = 160},
  [33] = {.lex_state = 160},
  [34] = {.lex_state = 160},
  [35] = {.lex_state = 160},
  [36] = {.lex_state = 160},
  [37] = {.lex_state = 160},
  [38] = {.lex_state = 160},
  [39] = {.lex_state = 160},
  [40] = {.lex_state = 160},
  [41] = {.lex_state = 160},
  [42] = {.lex_state = 160},
  [43] = {.lex_state = 160},
  [44] = {.lex_state = 160},
  [45] = {.lex_state = 160},
  [46] = {.lex_state = 160},
  [47] = {.lex_state = 160},
  [48] = {.lex_state = 160},
  [49] = {.lex_state = 160},
  [50] = {.lex_state = 160},
  [51] = {.lex_state = 160},
  [52] = {.lex_state = 160},
  [53] = {.lex_state = 160},
  [54] = {.lex_state = 160},
  [55] = {.lex_state = 160},
  [56] = {.lex_state = 160},
  [57] = {.lex_state = 160},
  [58] = {.lex_state = 160},
  [59] = {.lex_state = 160},
  [60] = {.lex_state = 160},
  [61] = {.lex_state = 160},
  [62] = {.lex_state = 160},
  [63] = {.lex_state = 160},
  [64] = {.lex_state = 160},
  [65] = {.lex_state = 160},
  [66] = {.lex_state = 160},
  [67] = {.lex_state = 160},
  [68] = {.lex_state = 160},
  [69] = {.lex_state = 160},
  [70] = {.lex_state = 160},
  [71] = {.lex_state = 160},
  [72] = {.lex_state = 160},
  [73] = {.lex_state = 160},
  [74] = {.lex_state = 169},
  [75] = {.lex_state = 169},
  [76] = {.lex_state = 169},
  [77] = {.lex_state = 169},
  [78] = {.lex_state = 169},
  [79] = {.lex_state = 169},
  [80] = {.lex_state = 169},
  [81] = {.lex_state = 169},
  [82] = {.lex_state = 169},
  [83] = {.lex_state = 169},
  [84] = {.lex_state = 169},
  [85] = {.lex_state = 169},
  [86] = {.lex_state = 169},
  [87] = {.lex_state = 170},
  [88] = {.lex_state = 170},
  [89] = {.lex_state = 170},
  [90] = {.lex_state = 170},
  [91] = {.lex_state = 170},
  [92] = {.lex_state = 170},
  [93] = {.lex_state = 170},
  [94] = {.lex_state = 170},
  [95] = {.lex_state = 170},
  [96] = {.lex_state = 170},
  [97] = {.lex_state = 170},
  [98] = {.lex_state = 170},
  [99] = {.lex_state = 170},
  [100] = {.lex_state = 170},
  [101] = {.lex_state = 170},
  [102] = {.lex_state = 170},
  [103] = {.lex_state = 170},
  [104] = {.lex_state = 170},
  [105] = {.lex_state = 170},
  [106] = {.lex_state = 170},
  [107] = {.lex_state = 170},
  [108] = {.lex_state = 170},
  [109] = {.lex_state = 170},
  [110] = {.lex_state = 170},
  [111] = {.lex_state = 170},
  [112] = {.lex_state = 170},
  [113] = {.lex_state = 170},
  [114] = {.lex_state = 170},
  [115] = {.lex_state = 170},
  [116] = {.lex_state = 170},
  [117] = {.lex_state = 170},
  [118] = {.lex_state = 170},
  [119] = {.lex_state = 170},
  [120] = {.lex_state = 170},
  [121] = {.lex_state = 170},
  [122] = {.lex_state = 170},
  [123] = {.lex_state = 170},
  [124] = {.lex_state = 170},
  [125] = {.lex_state = 170},
  [126] = {.lex_state = 170},
  [127] = {.lex_state = 170},
  [128] = {.lex_state = 170},
  [129] = {.lex_state = 170},
  [130] = {.lex_state = 170},
  [131] = {.lex_state = 170},
  [132] = {.lex_state = 170},
  [133] = {.lex_state = 170},
  [134] = {.lex_state = 170},
  [135] = {.lex_state = 170},
  [136] = {.lex_state = 170},
  [137] = {.lex_state = 170},
  [138] = {.lex_state = 170},
  [139] = {.lex_state = 170},
  [140] = {.lex_state = 170},
  [141] = {.lex_state = 170},
  [142] = {.lex_state = 170},
  [143] = {.lex_state = 170},
  [144] = {.lex_state = 170},
  [145] = {.lex_state = 170},
  [146] = {.lex_state = 170},
  [147] = {.lex_state = 170},
  [148] = {.lex_state = 170},
  [149] = {.lex_state = 170},
  [150] = {.lex_state = 170},
  [151] = {.lex_state = 170},
  [152] = {.lex_state = 170},
  [153] = {.lex_state = 170},
  [154] = {.lex_state = 170},
  [155] = {.lex_state = 170},
  [156] = {.lex_state = 170},
  [157] = {.lex_state = 170},
  [158] = {.lex_state = 170},
  [159] = {.lex_state = 170},
  [160] = {.lex_state = 170},
  [161] = {.lex_state = 170},
  [162] = {.lex_state = 170},
  [163] = {.lex_state = 170},
  [164] = {.lex_state = 170},
  [165] = {.lex_state = 168},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 161},
  [171] = {.lex_state = 161},
  [172] = {.lex_state = 162},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 162},
  [175] = {.lex_state = 161},
  [176] = {.lex_state = 168},
  [177] = {.lex_state = 162},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 163},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 163},
  [216] = {.lex_state = 165},
  [217] = {.lex_state = 163},
  [218] = {.lex_state = 163},
  [219] = {.lex_state = 163},
  [220] = {.lex_state = 165},
  [221] = {.lex_state = 165},
  [222] = {.lex_state = 163},
  [223] = {.lex_state = 163},
  [224] = {.lex_state = 163},
  [225] = {.lex_state = 163},
  [226] = {.lex_state = 163},
  [227] = {.lex_state = 163},
  [228] = {.lex_state = 163},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 163},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 163},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 163},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 163},
  [247] = {.lex_state = 163},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [aux_sym_expr_string_token3] = ACTIONS(1),
    [sym_string_esc] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_expr_nil] = ACTIONS(1),
    [sym_expr_number] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOT_LBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
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
    [anon_sym_DASH_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(250),
    [sym_stmt] = STATE(188),
    [sym_let_stmt] = STATE(181),
    [sym_assign_stmt] = STATE(181),
    [sym_for_stmt] = STATE(181),
    [sym_return_stmt] = STATE(181),
    [sym__expr] = STATE(129),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_for] = ACTIONS(9),
    [sym_break_stmt] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [2] = {
    [sym_stmt] = STATE(201),
    [sym_let_stmt] = STATE(181),
    [sym_assign_stmt] = STATE(181),
    [sym_for_stmt] = STATE(181),
    [sym_return_stmt] = STATE(181),
    [sym__expr] = STATE(129),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_for] = ACTIONS(9),
    [sym_break_stmt] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [3] = {
    [sym_stmt] = STATE(201),
    [sym_let_stmt] = STATE(181),
    [sym_assign_stmt] = STATE(181),
    [sym_for_stmt] = STATE(181),
    [sym_return_stmt] = STATE(181),
    [sym__expr] = STATE(129),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_for] = ACTIONS(9),
    [sym_break_stmt] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [4] = {
    [sym_stmt] = STATE(201),
    [sym_let_stmt] = STATE(181),
    [sym_assign_stmt] = STATE(181),
    [sym_for_stmt] = STATE(181),
    [sym_return_stmt] = STATE(181),
    [sym__expr] = STATE(129),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_for] = ACTIONS(9),
    [sym_break_stmt] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [5] = {
    [sym_stmt] = STATE(201),
    [sym_let_stmt] = STATE(181),
    [sym_assign_stmt] = STATE(181),
    [sym_for_stmt] = STATE(181),
    [sym_return_stmt] = STATE(181),
    [sym__expr] = STATE(129),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_for] = ACTIONS(9),
    [sym_break_stmt] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [6] = {
    [sym_stmt] = STATE(201),
    [sym_let_stmt] = STATE(181),
    [sym_assign_stmt] = STATE(181),
    [sym_for_stmt] = STATE(181),
    [sym_return_stmt] = STATE(181),
    [sym__expr] = STATE(129),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_for] = ACTIONS(9),
    [sym_break_stmt] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [7] = {
    [sym_stmt] = STATE(201),
    [sym_let_stmt] = STATE(181),
    [sym_assign_stmt] = STATE(181),
    [sym_for_stmt] = STATE(181),
    [sym_return_stmt] = STATE(181),
    [sym__expr] = STATE(129),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_for] = ACTIONS(9),
    [sym_break_stmt] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(55),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [8] = {
    [sym_stmt] = STATE(201),
    [sym_let_stmt] = STATE(181),
    [sym_assign_stmt] = STATE(181),
    [sym_for_stmt] = STATE(181),
    [sym_return_stmt] = STATE(181),
    [sym__expr] = STATE(129),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_for] = ACTIONS(9),
    [sym_break_stmt] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [9] = {
    [sym_stmt] = STATE(201),
    [sym_let_stmt] = STATE(181),
    [sym_assign_stmt] = STATE(181),
    [sym_for_stmt] = STATE(181),
    [sym_return_stmt] = STATE(181),
    [sym__expr] = STATE(129),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_for] = ACTIONS(9),
    [sym_break_stmt] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(59),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [10] = {
    [sym_stmt] = STATE(201),
    [sym_let_stmt] = STATE(181),
    [sym_assign_stmt] = STATE(181),
    [sym_for_stmt] = STATE(181),
    [sym_return_stmt] = STATE(181),
    [sym__expr] = STATE(129),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_for] = ACTIONS(9),
    [sym_break_stmt] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [11] = {
    [sym_stmt] = STATE(203),
    [sym_let_stmt] = STATE(181),
    [sym_assign_stmt] = STATE(181),
    [sym_for_stmt] = STATE(181),
    [sym_return_stmt] = STATE(181),
    [sym__expr] = STATE(129),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_for] = ACTIONS(9),
    [sym_break_stmt] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [12] = {
    [sym_stmt] = STATE(211),
    [sym_let_stmt] = STATE(181),
    [sym_assign_stmt] = STATE(181),
    [sym_for_stmt] = STATE(181),
    [sym_return_stmt] = STATE(181),
    [sym__expr] = STATE(129),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_for] = ACTIONS(9),
    [sym_break_stmt] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [13] = {
    [sym_stmt] = STATE(186),
    [sym_let_stmt] = STATE(181),
    [sym_assign_stmt] = STATE(181),
    [sym_for_stmt] = STATE(181),
    [sym_return_stmt] = STATE(181),
    [sym__expr] = STATE(129),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_for] = ACTIONS(9),
    [sym_break_stmt] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [14] = {
    [sym_stmt] = STATE(200),
    [sym_let_stmt] = STATE(181),
    [sym_assign_stmt] = STATE(181),
    [sym_for_stmt] = STATE(181),
    [sym_return_stmt] = STATE(181),
    [sym__expr] = STATE(129),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_for] = ACTIONS(9),
    [sym_break_stmt] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [15] = {
    [sym_stmt] = STATE(189),
    [sym_let_stmt] = STATE(181),
    [sym_assign_stmt] = STATE(181),
    [sym_for_stmt] = STATE(181),
    [sym_return_stmt] = STATE(181),
    [sym__expr] = STATE(129),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_for] = ACTIONS(9),
    [sym_break_stmt] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [16] = {
    [sym_stmt] = STATE(201),
    [sym_let_stmt] = STATE(181),
    [sym_assign_stmt] = STATE(181),
    [sym_for_stmt] = STATE(181),
    [sym_return_stmt] = STATE(181),
    [sym__expr] = STATE(129),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_for] = ACTIONS(9),
    [sym_break_stmt] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [17] = {
    [sym__expr] = STATE(136),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(65),
    [anon_sym_DOT_LBRACK] = ACTIONS(67),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [18] = {
    [sym__expr] = STATE(150),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(71),
    [anon_sym_DOT_LBRACK] = ACTIONS(73),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [19] = {
    [sym__expr] = STATE(150),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(75),
    [anon_sym_DOT_LBRACK] = ACTIONS(73),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [20] = {
    [sym_builtin_range] = STATE(236),
    [sym__expr] = STATE(163),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_ATrange] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [21] = {
    [sym__expr] = STATE(150),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(79),
    [anon_sym_DOT_LBRACK] = ACTIONS(73),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [22] = {
    [sym__expr] = STATE(150),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_DOT_LBRACK] = ACTIONS(73),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [23] = {
    [sym__expr] = STATE(150),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(83),
    [anon_sym_DOT_LBRACK] = ACTIONS(73),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [24] = {
    [sym__expr] = STATE(150),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_DOT_LBRACK] = ACTIONS(73),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [25] = {
    [sym__expr] = STATE(150),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(87),
    [anon_sym_DOT_LBRACK] = ACTIONS(73),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [26] = {
    [sym__expr] = STATE(150),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_DOT_LBRACK] = ACTIONS(73),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [27] = {
    [sym__expr] = STATE(150),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_DOT_LBRACK] = ACTIONS(73),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [28] = {
    [sym__expr] = STATE(149),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(93),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [29] = {
    [sym__expr] = STATE(149),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [30] = {
    [sym__expr] = STATE(142),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [31] = {
    [sym__expr] = STATE(149),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [32] = {
    [sym__expr] = STATE(146),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [33] = {
    [sym__expr] = STATE(150),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACK] = ACTIONS(73),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [34] = {
    [sym__expr] = STATE(149),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [35] = {
    [sym__expr] = STATE(156),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [36] = {
    [sym__expr] = STATE(92),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [37] = {
    [sym__expr] = STATE(164),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [38] = {
    [sym__expr] = STATE(130),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [39] = {
    [sym__expr] = STATE(159),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [40] = {
    [sym__expr] = STATE(141),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [41] = {
    [sym__expr] = STATE(158),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [42] = {
    [sym__expr] = STATE(160),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [43] = {
    [sym__expr] = STATE(153),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [44] = {
    [sym__expr] = STATE(147),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [45] = {
    [sym__expr] = STATE(139),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [46] = {
    [sym__expr] = STATE(137),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [47] = {
    [sym__expr] = STATE(135),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [48] = {
    [sym__expr] = STATE(88),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [49] = {
    [sym__expr] = STATE(97),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [50] = {
    [sym__expr] = STATE(87),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [51] = {
    [sym__expr] = STATE(89),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [52] = {
    [sym__expr] = STATE(90),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [53] = {
    [sym__expr] = STATE(91),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [54] = {
    [sym__expr] = STATE(161),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [55] = {
    [sym__expr] = STATE(93),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [56] = {
    [sym__expr] = STATE(132),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [57] = {
    [sym__expr] = STATE(162),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [58] = {
    [sym__expr] = STATE(155),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [59] = {
    [sym__expr] = STATE(133),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [60] = {
    [sym__expr] = STATE(152),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [61] = {
    [sym__expr] = STATE(95),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [62] = {
    [sym__expr] = STATE(94),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [63] = {
    [sym__expr] = STATE(140),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [64] = {
    [sym__expr] = STATE(157),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [65] = {
    [sym__expr] = STATE(151),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [66] = {
    [sym__expr] = STATE(149),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [67] = {
    [sym__expr] = STATE(138),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [68] = {
    [sym__expr] = STATE(145),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [69] = {
    [sym__expr] = STATE(143),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [70] = {
    [sym__expr] = STATE(154),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [71] = {
    [sym__expr] = STATE(96),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [72] = {
    [sym__expr] = STATE(131),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
  [73] = {
    [sym__expr] = STATE(144),
    [sym_expr_binop] = STATE(103),
    [sym_expr_unop] = STATE(103),
    [sym_expr_path] = STATE(74),
    [sym_expr_index] = STATE(76),
    [sym_expr_string] = STATE(103),
    [sym_expr_tag] = STATE(103),
    [sym_expr_bool] = STATE(103),
    [sym_expr_table] = STATE(103),
    [sym_expr_paren] = STATE(74),
    [sym_expr_block] = STATE(103),
    [sym_expr_func] = STATE(74),
    [sym_expr_if] = STATE(103),
    [sym_fn_call] = STATE(110),
    [sym_builtin_fn] = STATE(165),
    [sym_meth_call] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LBRACE] = ACTIONS(33),
    [anon_sym_DOT_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [sym_require] = ACTIONS(39),
    [anon_sym_assert] = ACTIONS(41),
    [anon_sym_collectgarbage] = ACTIONS(41),
    [anon_sym_error] = ACTIONS(41),
    [anon_sym_getfenv] = ACTIONS(41),
    [anon_sym_getmetatable] = ACTIONS(41),
    [anon_sym_ipairs] = ACTIONS(41),
    [anon_sym_loadstring] = ACTIONS(41),
    [anon_sym_newproxy] = ACTIONS(41),
    [anon_sym_next] = ACTIONS(41),
    [anon_sym_pairs] = ACTIONS(41),
    [anon_sym_pcall] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(41),
    [anon_sym_rawequal] = ACTIONS(41),
    [anon_sym_rawget] = ACTIONS(41),
    [anon_sym_rawset] = ACTIONS(41),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_setfenv] = ACTIONS(41),
    [anon_sym_setmetatable] = ACTIONS(41),
    [anon_sym_tonumber] = ACTIONS(41),
    [anon_sym_tostring] = ACTIONS(41),
    [anon_sym_type] = ACTIONS(41),
    [anon_sym_unpack] = ACTIONS(41),
    [anon_sym_xpcall] = ACTIONS(41),
    [sym_ident] = ACTIONS(43),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      aux_sym_expr_string_token3,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    STATE(128), 1,
      sym_expr_string,
    ACTIONS(109), 7,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
    ACTIONS(105), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [48] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(113), 7,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
    ACTIONS(111), 22,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_expr_string_token3,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [88] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      aux_sym_expr_string_token3,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    STATE(128), 1,
      sym_expr_string,
    ACTIONS(109), 7,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
    ACTIONS(105), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [136] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_DOT,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(117), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LBRACK,
    ACTIONS(115), 22,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_expr_string_token3,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 7,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
    ACTIONS(122), 22,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_expr_string_token3,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 7,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
    ACTIONS(126), 22,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_expr_string_token3,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 7,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
    ACTIONS(130), 22,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_expr_string_token3,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 7,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
    ACTIONS(134), 22,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_expr_string_token3,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 7,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
    ACTIONS(138), 22,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_expr_string_token3,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 7,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
    ACTIONS(142), 22,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_expr_string_token3,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [400] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 7,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
    ACTIONS(146), 22,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_expr_string_token3,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [437] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 7,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
    ACTIONS(150), 22,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_expr_string_token3,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [474] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 7,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
    ACTIONS(115), 22,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_expr_string_token3,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [511] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_EQ,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(154), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [565] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_EQ,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_or,
    ACTIONS(178), 1,
      anon_sym_and,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(154), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [623] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(156), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(154), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [673] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(156), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(154), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [721] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(156), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(154), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [765] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(156), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(154), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [805] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_DOT,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(156), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(154), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [843] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_or,
    ACTIONS(178), 1,
      anon_sym_and,
    ACTIONS(182), 1,
      anon_sym_EQ,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(188), 1,
      anon_sym_else,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(184), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(180), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [909] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_or,
    ACTIONS(178), 1,
      anon_sym_and,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    ACTIONS(194), 1,
      anon_sym_EQ,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(184), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(192), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
  [973] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_DOT,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(198), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(196), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [1011] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_EQ,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(178), 1,
      anon_sym_and,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(154), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [1067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(200), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [1100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(204), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [1133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(208), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [1166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(212), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [1199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(216), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [1232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(105), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [1265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(220), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [1298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(224), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [1331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(228), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [1364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(232), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [1397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(236), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [1430] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(240), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [1463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(105), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [1496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(244), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [1529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(248), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [1562] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(252), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [1595] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(256), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [1628] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(260), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [1661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(264), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [1694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(268), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [1727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(272), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [1760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(276), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [1793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(280), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [1826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(284), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [1859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(288), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [1892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(292), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [1925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(296), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [1958] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(300), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [1991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(304), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [2024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(308), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [2057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(312), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [2090] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_or,
    ACTIONS(178), 1,
      anon_sym_and,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    ACTIONS(318), 1,
      anon_sym_EQ,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(184), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(316), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2150] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_or,
    ACTIONS(178), 1,
      anon_sym_and,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    STATE(195), 1,
      aux_sym_expr_table_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(184), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2211] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_or,
    ACTIONS(178), 1,
      anon_sym_and,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(184), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(322), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2268] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_or,
    ACTIONS(178), 1,
      anon_sym_and,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    ACTIONS(326), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    STATE(187), 1,
      aux_sym_expr_table_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(184), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2329] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_or,
    ACTIONS(178), 1,
      anon_sym_and,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(184), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(328), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2386] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(332), 1,
      anon_sym_COLON,
    ACTIONS(278), 5,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(276), 14,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
  [2419] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_or,
    ACTIONS(178), 1,
      anon_sym_and,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(184), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(334), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2476] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_or,
    ACTIONS(178), 1,
      anon_sym_and,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(338), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    STATE(193), 1,
      aux_sym_expr_table_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(184), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2537] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_or,
    ACTIONS(178), 1,
      anon_sym_and,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    STATE(212), 1,
      aux_sym_expr_table_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(184), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2598] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_or,
    ACTIONS(178), 1,
      anon_sym_and,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    STATE(182), 1,
      aux_sym_expr_table_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(184), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2659] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_or,
    ACTIONS(178), 1,
      anon_sym_and,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(184), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(344), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2716] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_or,
    ACTIONS(178), 1,
      anon_sym_and,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(184), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(346), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2773] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_or,
    ACTIONS(178), 1,
      anon_sym_and,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(184), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(348), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2830] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_or,
    ACTIONS(178), 1,
      anon_sym_and,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    STATE(208), 1,
      aux_sym__call_args_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(184), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2891] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_or,
    ACTIONS(178), 1,
      anon_sym_and,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    STATE(196), 1,
      aux_sym_expr_table_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(184), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2952] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_or,
    ACTIONS(178), 1,
      anon_sym_and,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    ACTIONS(356), 1,
      anon_sym_COMMA,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    STATE(191), 1,
      aux_sym_expr_table_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(184), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3013] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_or,
    ACTIONS(178), 1,
      anon_sym_and,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(184), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(358), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [3070] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_or,
    ACTIONS(178), 1,
      anon_sym_and,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
    ACTIONS(362), 1,
      anon_sym_COMMA,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    STATE(183), 1,
      aux_sym__call_args_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(184), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3131] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_or,
    ACTIONS(178), 1,
      anon_sym_and,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(184), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(364), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [3188] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(368), 1,
      anon_sym_COLON,
    ACTIONS(278), 5,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(276), 14,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
  [3221] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_or,
    ACTIONS(178), 1,
      anon_sym_and,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(184), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(370), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3277] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_or,
    ACTIONS(178), 1,
      anon_sym_and,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(184), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(372), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3333] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_or,
    ACTIONS(178), 1,
      anon_sym_and,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(184), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(374), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3389] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_or,
    ACTIONS(178), 1,
      anon_sym_and,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(184), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(376), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3445] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_or,
    ACTIONS(178), 1,
      anon_sym_and,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(184), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(378), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3501] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_or,
    ACTIONS(178), 1,
      anon_sym_and,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(184), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(380), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3557] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_or,
    ACTIONS(178), 1,
      anon_sym_and,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(184), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(382), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3613] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_or,
    ACTIONS(178), 1,
      anon_sym_and,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(184), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(384), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3669] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_or,
    ACTIONS(178), 1,
      anon_sym_and,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(184), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3724] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_or,
    ACTIONS(178), 1,
      anon_sym_and,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(184), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3779] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_or,
    ACTIONS(178), 1,
      anon_sym_and,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(184), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3834] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_or,
    ACTIONS(178), 1,
      anon_sym_and,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(184), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3889] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_or,
    ACTIONS(178), 1,
      anon_sym_and,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    ACTIONS(394), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(184), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3944] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_or,
    ACTIONS(178), 1,
      anon_sym_and,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    ACTIONS(396), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(184), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3999] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_or,
    ACTIONS(178), 1,
      anon_sym_and,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(184), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4054] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_SLASH,
    ACTIONS(172), 1,
      anon_sym_PIPE_GT,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_or,
    ACTIONS(178), 1,
      anon_sym_and,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_DASH_GT,
    ACTIONS(400), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(158), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(184), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4109] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      aux_sym_expr_string_token3,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    STATE(128), 1,
      sym_expr_string,
  [4128] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_EQ,
    ACTIONS(402), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_EQ,
    ACTIONS(364), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_EQ,
    ACTIONS(410), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_EQ,
    ACTIONS(348), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4179] = 5,
    ACTIONS(416), 1,
      sym_comment,
    ACTIONS(418), 1,
      aux_sym_expr_string_token1,
    ACTIONS(421), 1,
      anon_sym_DQUOTE2,
    ACTIONS(423), 1,
      sym_string_esc,
    STATE(170), 1,
      aux_sym_expr_string_repeat1,
  [4195] = 5,
    ACTIONS(416), 1,
      sym_comment,
    ACTIONS(426), 1,
      aux_sym_expr_string_token1,
    ACTIONS(428), 1,
      anon_sym_DQUOTE2,
    ACTIONS(430), 1,
      sym_string_esc,
    STATE(170), 1,
      aux_sym_expr_string_repeat1,
  [4211] = 5,
    ACTIONS(416), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_SQUOTE2,
    ACTIONS(432), 1,
      aux_sym_expr_string_token2,
    ACTIONS(434), 1,
      sym_string_esc,
    STATE(177), 1,
      aux_sym_expr_string_repeat2,
  [4227] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_SEMI,
    STATE(173), 1,
      aux_sym__block_body_repeat1,
    ACTIONS(436), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
  [4241] = 5,
    ACTIONS(416), 1,
      sym_comment,
    ACTIONS(441), 1,
      aux_sym_expr_string_token2,
    ACTIONS(443), 1,
      anon_sym_SQUOTE2,
    ACTIONS(445), 1,
      sym_string_esc,
    STATE(172), 1,
      aux_sym_expr_string_repeat2,
  [4257] = 5,
    ACTIONS(416), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_DQUOTE2,
    ACTIONS(447), 1,
      aux_sym_expr_string_token1,
    ACTIONS(449), 1,
      sym_string_esc,
    STATE(171), 1,
      aux_sym_expr_string_repeat1,
  [4273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_expr_string_token3,
  [4283] = 5,
    ACTIONS(416), 1,
      sym_comment,
    ACTIONS(453), 1,
      aux_sym_expr_string_token2,
    ACTIONS(456), 1,
      anon_sym_SQUOTE2,
    ACTIONS(458), 1,
      sym_string_esc,
    STATE(177), 1,
      aux_sym_expr_string_repeat2,
  [4299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_EQ,
    ACTIONS(328), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4311] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym__decl_args_repeat1,
  [4324] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_RBRACE,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_expr_table_repeat1,
  [4337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4346] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    ACTIONS(470), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_expr_table_repeat1,
  [4359] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym__call_args_repeat1,
  [4372] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym__decl_args_repeat1,
  [4385] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    ACTIONS(478), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym__call_args_repeat1,
  [4398] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(481), 1,
      anon_sym_SEMI,
    STATE(199), 1,
      aux_sym__block_body_repeat1,
  [4411] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_expr_table_repeat1,
  [4424] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      ts_builtin_sym_end,
    ACTIONS(485), 1,
      anon_sym_SEMI,
    STATE(192), 1,
      aux_sym__block_body_repeat1,
  [4437] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_SEMI,
    ACTIONS(489), 1,
      anon_sym_RBRACE,
    STATE(194), 1,
      aux_sym__block_body_repeat1,
  [4450] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym__decl_args_repeat1,
  [4463] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_expr_table_repeat1,
  [4476] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(495), 1,
      anon_sym_SEMI,
    STATE(173), 1,
      aux_sym__block_body_repeat1,
  [4489] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_expr_table_repeat1,
  [4502] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    ACTIONS(499), 1,
      anon_sym_SEMI,
    STATE(173), 1,
      aux_sym__block_body_repeat1,
  [4515] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_expr_table_repeat1,
  [4528] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    ACTIONS(356), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_expr_table_repeat1,
  [4541] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_RPAREN,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    STATE(207), 1,
      aux_sym__decl_args_repeat1,
  [4554] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_RPAREN,
    ACTIONS(507), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym__decl_args_repeat1,
  [4567] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(509), 1,
      anon_sym_SEMI,
    STATE(173), 1,
      aux_sym__block_body_repeat1,
  [4580] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(509), 1,
      anon_sym_SEMI,
    STATE(202), 1,
      aux_sym__block_body_repeat1,
  [4593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4602] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(511), 1,
      anon_sym_SEMI,
    STATE(173), 1,
      aux_sym__block_body_repeat1,
  [4615] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(511), 1,
      anon_sym_SEMI,
    STATE(206), 1,
      aux_sym__block_body_repeat1,
  [4628] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_RPAREN,
    ACTIONS(515), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym__decl_args_repeat1,
  [4641] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym__decl_args_repeat1,
  [4654] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(521), 1,
      anon_sym_SEMI,
    STATE(173), 1,
      aux_sym__block_body_repeat1,
  [4667] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym__decl_args_repeat1,
  [4680] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(527), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym__call_args_repeat1,
  [4693] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_RPAREN,
    ACTIONS(531), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym__decl_args_repeat1,
  [4706] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(481), 1,
      anon_sym_SEMI,
    STATE(173), 1,
      aux_sym__block_body_repeat1,
  [4719] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(536), 1,
      anon_sym_RBRACE,
    STATE(210), 1,
      aux_sym__block_body_repeat1,
  [4732] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_expr_table_repeat1,
  [4745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
    ACTIONS(538), 1,
      sym_ident,
  [4755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4763] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    ACTIONS(538), 1,
      sym_ident,
  [4773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      aux_sym__ident_immediate_token1,
    STATE(119), 1,
      sym__ident_immediate,
  [4783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    ACTIONS(544), 1,
      sym_ident,
  [4793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
    ACTIONS(548), 1,
      sym_ident,
  [4803] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      sym_ident,
    ACTIONS(550), 1,
      anon_sym_RPAREN,
  [4813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      aux_sym__ident_immediate_token1,
    STATE(134), 1,
      sym__ident_immediate,
  [4823] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      aux_sym__ident_immediate_token1,
    STATE(148), 1,
      sym__ident_immediate,
  [4833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
    ACTIONS(558), 1,
      sym_ident,
  [4843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
    ACTIONS(538), 1,
      sym_ident,
  [4853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      sym_ident,
    ACTIONS(560), 1,
      anon_sym_RPAREN,
  [4863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
    ACTIONS(564), 1,
      sym_ident,
  [4873] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      sym_ident,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
  [4883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      sym_ident,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
  [4893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_RPAREN,
    ACTIONS(538), 1,
      sym_ident,
  [4903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_COLON,
  [4910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_COLON,
  [4917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
  [4924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_COLON,
  [4931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      sym_ident,
  [4938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_in,
  [4945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_LBRACE,
  [4952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
  [4959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym_ident,
  [4966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
  [4973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym_ident,
  [4980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_COLON,
  [4987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_LPAREN,
  [4994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_COLON,
  [5001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_LBRACE,
  [5008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_LBRACE,
  [5015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_COLON,
  [5022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      sym_ident,
  [5029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      sym_ident,
  [5036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_COLON,
  [5043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_LPAREN,
  [5050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      ts_builtin_sym_end,
  [5057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_LPAREN,
  [5064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_COLON,
  [5071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_COLON,
  [5078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_COLON,
  [5085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(74)] = 0,
  [SMALL_STATE(75)] = 48,
  [SMALL_STATE(76)] = 88,
  [SMALL_STATE(77)] = 136,
  [SMALL_STATE(78)] = 178,
  [SMALL_STATE(79)] = 215,
  [SMALL_STATE(80)] = 252,
  [SMALL_STATE(81)] = 289,
  [SMALL_STATE(82)] = 326,
  [SMALL_STATE(83)] = 363,
  [SMALL_STATE(84)] = 400,
  [SMALL_STATE(85)] = 437,
  [SMALL_STATE(86)] = 474,
  [SMALL_STATE(87)] = 511,
  [SMALL_STATE(88)] = 565,
  [SMALL_STATE(89)] = 623,
  [SMALL_STATE(90)] = 673,
  [SMALL_STATE(91)] = 721,
  [SMALL_STATE(92)] = 765,
  [SMALL_STATE(93)] = 805,
  [SMALL_STATE(94)] = 843,
  [SMALL_STATE(95)] = 909,
  [SMALL_STATE(96)] = 973,
  [SMALL_STATE(97)] = 1011,
  [SMALL_STATE(98)] = 1067,
  [SMALL_STATE(99)] = 1100,
  [SMALL_STATE(100)] = 1133,
  [SMALL_STATE(101)] = 1166,
  [SMALL_STATE(102)] = 1199,
  [SMALL_STATE(103)] = 1232,
  [SMALL_STATE(104)] = 1265,
  [SMALL_STATE(105)] = 1298,
  [SMALL_STATE(106)] = 1331,
  [SMALL_STATE(107)] = 1364,
  [SMALL_STATE(108)] = 1397,
  [SMALL_STATE(109)] = 1430,
  [SMALL_STATE(110)] = 1463,
  [SMALL_STATE(111)] = 1496,
  [SMALL_STATE(112)] = 1529,
  [SMALL_STATE(113)] = 1562,
  [SMALL_STATE(114)] = 1595,
  [SMALL_STATE(115)] = 1628,
  [SMALL_STATE(116)] = 1661,
  [SMALL_STATE(117)] = 1694,
  [SMALL_STATE(118)] = 1727,
  [SMALL_STATE(119)] = 1760,
  [SMALL_STATE(120)] = 1793,
  [SMALL_STATE(121)] = 1826,
  [SMALL_STATE(122)] = 1859,
  [SMALL_STATE(123)] = 1892,
  [SMALL_STATE(124)] = 1925,
  [SMALL_STATE(125)] = 1958,
  [SMALL_STATE(126)] = 1991,
  [SMALL_STATE(127)] = 2024,
  [SMALL_STATE(128)] = 2057,
  [SMALL_STATE(129)] = 2090,
  [SMALL_STATE(130)] = 2150,
  [SMALL_STATE(131)] = 2211,
  [SMALL_STATE(132)] = 2268,
  [SMALL_STATE(133)] = 2329,
  [SMALL_STATE(134)] = 2386,
  [SMALL_STATE(135)] = 2419,
  [SMALL_STATE(136)] = 2476,
  [SMALL_STATE(137)] = 2537,
  [SMALL_STATE(138)] = 2598,
  [SMALL_STATE(139)] = 2659,
  [SMALL_STATE(140)] = 2716,
  [SMALL_STATE(141)] = 2773,
  [SMALL_STATE(142)] = 2830,
  [SMALL_STATE(143)] = 2891,
  [SMALL_STATE(144)] = 2952,
  [SMALL_STATE(145)] = 3013,
  [SMALL_STATE(146)] = 3070,
  [SMALL_STATE(147)] = 3131,
  [SMALL_STATE(148)] = 3188,
  [SMALL_STATE(149)] = 3221,
  [SMALL_STATE(150)] = 3277,
  [SMALL_STATE(151)] = 3333,
  [SMALL_STATE(152)] = 3389,
  [SMALL_STATE(153)] = 3445,
  [SMALL_STATE(154)] = 3501,
  [SMALL_STATE(155)] = 3557,
  [SMALL_STATE(156)] = 3613,
  [SMALL_STATE(157)] = 3669,
  [SMALL_STATE(158)] = 3724,
  [SMALL_STATE(159)] = 3779,
  [SMALL_STATE(160)] = 3834,
  [SMALL_STATE(161)] = 3889,
  [SMALL_STATE(162)] = 3944,
  [SMALL_STATE(163)] = 3999,
  [SMALL_STATE(164)] = 4054,
  [SMALL_STATE(165)] = 4109,
  [SMALL_STATE(166)] = 4128,
  [SMALL_STATE(167)] = 4143,
  [SMALL_STATE(168)] = 4155,
  [SMALL_STATE(169)] = 4167,
  [SMALL_STATE(170)] = 4179,
  [SMALL_STATE(171)] = 4195,
  [SMALL_STATE(172)] = 4211,
  [SMALL_STATE(173)] = 4227,
  [SMALL_STATE(174)] = 4241,
  [SMALL_STATE(175)] = 4257,
  [SMALL_STATE(176)] = 4273,
  [SMALL_STATE(177)] = 4283,
  [SMALL_STATE(178)] = 4299,
  [SMALL_STATE(179)] = 4311,
  [SMALL_STATE(180)] = 4324,
  [SMALL_STATE(181)] = 4337,
  [SMALL_STATE(182)] = 4346,
  [SMALL_STATE(183)] = 4359,
  [SMALL_STATE(184)] = 4372,
  [SMALL_STATE(185)] = 4385,
  [SMALL_STATE(186)] = 4398,
  [SMALL_STATE(187)] = 4411,
  [SMALL_STATE(188)] = 4424,
  [SMALL_STATE(189)] = 4437,
  [SMALL_STATE(190)] = 4450,
  [SMALL_STATE(191)] = 4463,
  [SMALL_STATE(192)] = 4476,
  [SMALL_STATE(193)] = 4489,
  [SMALL_STATE(194)] = 4502,
  [SMALL_STATE(195)] = 4515,
  [SMALL_STATE(196)] = 4528,
  [SMALL_STATE(197)] = 4541,
  [SMALL_STATE(198)] = 4554,
  [SMALL_STATE(199)] = 4567,
  [SMALL_STATE(200)] = 4580,
  [SMALL_STATE(201)] = 4593,
  [SMALL_STATE(202)] = 4602,
  [SMALL_STATE(203)] = 4615,
  [SMALL_STATE(204)] = 4628,
  [SMALL_STATE(205)] = 4641,
  [SMALL_STATE(206)] = 4654,
  [SMALL_STATE(207)] = 4667,
  [SMALL_STATE(208)] = 4680,
  [SMALL_STATE(209)] = 4693,
  [SMALL_STATE(210)] = 4706,
  [SMALL_STATE(211)] = 4719,
  [SMALL_STATE(212)] = 4732,
  [SMALL_STATE(213)] = 4745,
  [SMALL_STATE(214)] = 4755,
  [SMALL_STATE(215)] = 4763,
  [SMALL_STATE(216)] = 4773,
  [SMALL_STATE(217)] = 4783,
  [SMALL_STATE(218)] = 4793,
  [SMALL_STATE(219)] = 4803,
  [SMALL_STATE(220)] = 4813,
  [SMALL_STATE(221)] = 4823,
  [SMALL_STATE(222)] = 4833,
  [SMALL_STATE(223)] = 4843,
  [SMALL_STATE(224)] = 4853,
  [SMALL_STATE(225)] = 4863,
  [SMALL_STATE(226)] = 4873,
  [SMALL_STATE(227)] = 4883,
  [SMALL_STATE(228)] = 4893,
  [SMALL_STATE(229)] = 4903,
  [SMALL_STATE(230)] = 4910,
  [SMALL_STATE(231)] = 4917,
  [SMALL_STATE(232)] = 4924,
  [SMALL_STATE(233)] = 4931,
  [SMALL_STATE(234)] = 4938,
  [SMALL_STATE(235)] = 4945,
  [SMALL_STATE(236)] = 4952,
  [SMALL_STATE(237)] = 4959,
  [SMALL_STATE(238)] = 4966,
  [SMALL_STATE(239)] = 4973,
  [SMALL_STATE(240)] = 4980,
  [SMALL_STATE(241)] = 4987,
  [SMALL_STATE(242)] = 4994,
  [SMALL_STATE(243)] = 5001,
  [SMALL_STATE(244)] = 5008,
  [SMALL_STATE(245)] = 5015,
  [SMALL_STATE(246)] = 5022,
  [SMALL_STATE(247)] = 5029,
  [SMALL_STATE(248)] = 5036,
  [SMALL_STATE(249)] = 5043,
  [SMALL_STATE(250)] = 5050,
  [SMALL_STATE(251)] = 5057,
  [SMALL_STATE(252)] = 5064,
  [SMALL_STATE(253)] = 5071,
  [SMALL_STATE(254)] = 5078,
  [SMALL_STATE(255)] = 5085,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_path, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_path, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_path_repeat1, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_path_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_path_repeat1, 2), SHIFT_REPEAT(239),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_index, 4),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_index, 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_func, 9),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_func, 9),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_paren, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_paren, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_func, 7),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_func, 7),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_func, 5),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_func, 5),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_func, 10),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_func, 10),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_func, 8),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_func, 8),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_func, 6),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_func, 6),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_binop, 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_binop, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_if, 5),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_if, 5),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_if, 7),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_if, 7),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_unop, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_unop, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 12),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 12),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meth_call, 7),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meth_call, 7),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 7),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 7),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_string, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_string, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_bool, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_bool, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meth_call, 6),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meth_call, 6),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 6),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_call, 6),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 4),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 4),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 3),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_call, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 11),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 11),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_block, 5),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_block, 5),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_block, 4),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_block, 4),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 9),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 9),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 5),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 5),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 6),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 6),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 8),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 8),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_block, 3),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_block, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 3),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 13),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 13),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_tag, 2),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_tag, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 4),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_call, 4),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meth_call, 5),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meth_call, 5),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_string, 2),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_string, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 5),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_call, 5),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_string, 3),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_string, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meth_call, 8),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meth_call, 8),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 10),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 10),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 2),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_call, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 1),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_stmt, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 4),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_stmt, 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 7),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 9),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 7),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 8),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 6),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__call_args_repeat1, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_table_repeat1, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_table_repeat1, 10),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_table_repeat1, 5),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_table_repeat1, 7),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_table_repeat1, 6),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_table_repeat1, 8),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_table_repeat1, 9),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 5),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_string_repeat1, 2), SHIFT_REPEAT(170),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_string_repeat1, 2),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_string_repeat1, 2), SHIFT_REPEAT(170),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2), SHIFT_REPEAT(16),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_fn, 1),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_string_repeat2, 2), SHIFT_REPEAT(177),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_string_repeat2, 2),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_string_repeat2, 2), SHIFT_REPEAT(177),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_table_repeat1, 2), SHIFT_REPEAT(33),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__call_args_repeat1, 2), SHIFT_REPEAT(66),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_args_repeat1, 2),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decl_args_repeat1, 2), SHIFT_REPEAT(233),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_range, 6),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [608] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
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
