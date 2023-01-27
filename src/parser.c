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
#define STATE_COUNT 255
#define LARGE_STATE_COUNT 74
#define SYMBOL_COUNT 108
#define ALIAS_COUNT 0
#define TOKEN_COUNT 77
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
  sym_string_esc = 37,
  anon_sym_true = 38,
  anon_sym_false = 39,
  sym_expr_nil = 40,
  sym_expr_number = 41,
  anon_sym_LBRACE = 42,
  anon_sym_RBRACE = 43,
  anon_sym_DOT_LBRACK = 44,
  anon_sym_COLON = 45,
  anon_sym_DOT_LBRACE = 46,
  anon_sym_DOT_LPAREN = 47,
  anon_sym_if = 48,
  anon_sym_else = 49,
  sym_require = 50,
  anon_sym_assert = 51,
  anon_sym_collectgarbage = 52,
  anon_sym_error = 53,
  anon_sym_getfenv = 54,
  anon_sym_getmetatable = 55,
  anon_sym_ipairs = 56,
  anon_sym_loadstring = 57,
  anon_sym_newproxy = 58,
  anon_sym_next = 59,
  anon_sym_pairs = 60,
  anon_sym_pcall = 61,
  anon_sym_print = 62,
  anon_sym_rawequal = 63,
  anon_sym_rawget = 64,
  anon_sym_rawset = 65,
  anon_sym_select = 66,
  anon_sym_setfenv = 67,
  anon_sym_setmetatable = 68,
  anon_sym_tonumber = 69,
  anon_sym_tostring = 70,
  anon_sym_type = 71,
  anon_sym_unpack = 72,
  anon_sym_xpcall = 73,
  anon_sym_DASH_GT = 74,
  sym_ident = 75,
  aux_sym__ident_immediate_token1 = 76,
  sym_source_file = 77,
  sym_stmt = 78,
  sym_let_stmt = 79,
  sym_assign_stmt = 80,
  sym_for_stmt = 81,
  sym_builtin_range = 82,
  sym_return_stmt = 83,
  sym__expr = 84,
  sym_expr_binop = 85,
  sym_expr_unop = 86,
  sym_expr_path = 87,
  sym_expr_index = 88,
  sym_expr_string = 89,
  sym_expr_tag = 90,
  sym_expr_bool = 91,
  sym_expr_table = 92,
  sym_expr_paren = 93,
  sym_expr_block = 94,
  sym_expr_func = 95,
  sym_expr_if = 96,
  sym_fn_call = 97,
  sym_builtin_fn = 98,
  sym_meth_call = 99,
  sym__ident_immediate = 100,
  aux_sym__block_body_repeat1 = 101,
  aux_sym_expr_path_repeat1 = 102,
  aux_sym_expr_string_repeat1 = 103,
  aux_sym_expr_string_repeat2 = 104,
  aux_sym_expr_table_repeat1 = 105,
  aux_sym__call_args_repeat1 = 106,
  aux_sym__decl_args_repeat1 = 107,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(164)
      if (lookahead == '!') ADVANCE(200);
      if (lookahead == '"') ADVANCE(210);
      if (lookahead == '\'') ADVANCE(214);
      if (lookahead == '(') ADVANCE(172);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '*') ADVANCE(196);
      if (lookahead == '+') ADVANCE(193);
      if (lookahead == ',') ADVANCE(179);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == ':') ADVANCE(226);
      if (lookahead == ';') ADVANCE(168);
      if (lookahead == '<') ADVANCE(190);
      if (lookahead == '=') ADVANCE(174);
      if (lookahead == '>') ADVANCE(188);
      if (lookahead == '@') ADVANCE(109);
      if (lookahead == '[') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(163);
      if (lookahead == ']') ADVANCE(206);
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'b') ADVANCE(116);
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'g') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 'l') ADVANCE(45);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(110);
      if (lookahead == 'p') ADVANCE(5);
      if (lookahead == 'r') ADVANCE(6);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(94);
      if (lookahead == 'x') ADVANCE(103);
      if (lookahead == '{') ADVANCE(223);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '}') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(185);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(198);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'c') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(54);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(81);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(82);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(187);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(130);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == 'g') ADVANCE(52);
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(229);
      if (lookahead == 'n') ADVANCE(177);
      if (lookahead == 'p') ADVANCE(17);
      END_STATE();
    case 58:
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(272);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(246);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(15);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(40);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(44);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 71:
      if (lookahead == 'k') ADVANCE(180);
      END_STATE();
    case 72:
      if (lookahead == 'k') ADVANCE(276);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(278);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(258);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(46);
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(146);
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(147);
      if (lookahead == 'y') ADVANCE(105);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(12);
      END_STATE();
    case 105:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 106:
      if (lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 107:
      if (lookahead == 'q') ADVANCE(150);
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 108:
      if (lookahead == 'q') ADVANCE(148);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(252);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(244);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 146:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 147:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 148:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 149:
      if (lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 151:
      if (lookahead == 'v') ADVANCE(240);
      END_STATE();
    case 152:
      if (lookahead == 'v') ADVANCE(266);
      END_STATE();
    case 153:
      if (lookahead == 'w') ADVANCE(36);
      END_STATE();
    case 154:
      if (lookahead == 'w') ADVANCE(106);
      if (lookahead == 'x') ADVANCE(133);
      END_STATE();
    case 155:
      if (lookahead == 'x') ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == 'y') ADVANCE(248);
      END_STATE();
    case 157:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(157)
      if (lookahead == '!') ADVANCE(199);
      if (lookahead == '"') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(211);
      if (lookahead == '(') ADVANCE(172);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '-') ADVANCE(194);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '@') ADVANCE(109);
      if (lookahead == 'a') ADVANCE(396);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == 'e') ADVANCE(383);
      if (lookahead == 'f') ADVANCE(287);
      if (lookahead == 'g') ADVANCE(308);
      if (lookahead == 'i') ADVANCE(331);
      if (lookahead == 'l') ADVANCE(370);
      if (lookahead == 'n') ADVANCE(309);
      if (lookahead == 'p') ADVANCE(281);
      if (lookahead == 'r') ADVANCE(283);
      if (lookahead == 's') ADVANCE(310);
      if (lookahead == 't') ADVANCE(368);
      if (lookahead == 'u') ADVANCE(363);
      if (lookahead == 'x') ADVANCE(372);
      if (lookahead == '{') ADVANCE(223);
      if (lookahead == '}') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 158:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      if (lookahead == '"') ADVANCE(210);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(163);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 159:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(212);
      if (lookahead == '\'') ADVANCE(214);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(163);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 160:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(160)
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '/') ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 161:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(161)
      if (lookahead == '/') ADVANCE(2);
      END_STATE();
    case 162:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(161)
      if (lookahead == '/') ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 163:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 164:
      if (eof) ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(164)
      if (lookahead == '!') ADVANCE(200);
      if (lookahead == '"') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(211);
      if (lookahead == '(') ADVANCE(172);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '*') ADVANCE(196);
      if (lookahead == '+') ADVANCE(193);
      if (lookahead == ',') ADVANCE(179);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == ':') ADVANCE(226);
      if (lookahead == ';') ADVANCE(168);
      if (lookahead == '<') ADVANCE(190);
      if (lookahead == '=') ADVANCE(174);
      if (lookahead == '>') ADVANCE(188);
      if (lookahead == '@') ADVANCE(109);
      if (lookahead == '[') ADVANCE(205);
      if (lookahead == ']') ADVANCE(206);
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'b') ADVANCE(116);
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'g') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 'l') ADVANCE(45);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(110);
      if (lookahead == 'p') ADVANCE(5);
      if (lookahead == 'r') ADVANCE(6);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(94);
      if (lookahead == 'x') ADVANCE(103);
      if (lookahead == '{') ADVANCE(223);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '}') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 165:
      if (eof) ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(165)
      if (lookahead == '!') ADVANCE(199);
      if (lookahead == '"') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(211);
      if (lookahead == '(') ADVANCE(172);
      if (lookahead == '-') ADVANCE(194);
      if (lookahead == '.') ADVANCE(203);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == 'a') ADVANCE(396);
      if (lookahead == 'b') ADVANCE(385);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == 'e') ADVANCE(383);
      if (lookahead == 'f') ADVANCE(286);
      if (lookahead == 'g') ADVANCE(308);
      if (lookahead == 'i') ADVANCE(331);
      if (lookahead == 'l') ADVANCE(319);
      if (lookahead == 'n') ADVANCE(309);
      if (lookahead == 'p') ADVANCE(281);
      if (lookahead == 'r') ADVANCE(282);
      if (lookahead == 's') ADVANCE(310);
      if (lookahead == 't') ADVANCE(368);
      if (lookahead == 'u') ADVANCE(363);
      if (lookahead == 'x') ADVANCE(372);
      if (lookahead == '{') ADVANCE(223);
      if (lookahead == '}') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 166:
      if (eof) ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(166)
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '"') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(211);
      if (lookahead == '(') ADVANCE(172);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '*') ADVANCE(196);
      if (lookahead == '+') ADVANCE(193);
      if (lookahead == ',') ADVANCE(179);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == ':') ADVANCE(226);
      if (lookahead == ';') ADVANCE(168);
      if (lookahead == '<') ADVANCE(190);
      if (lookahead == '=') ADVANCE(174);
      if (lookahead == '>') ADVANCE(188);
      if (lookahead == '[') ADVANCE(205);
      if (lookahead == ']') ADVANCE(206);
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(110);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '}') ADVANCE(224);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(184);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_ATrange);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_break_stmt);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_break_stmt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(189);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '=') ADVANCE(185);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '(') ADVANCE(228);
      if (lookahead == '.') ADVANCE(192);
      if (lookahead == '[') ADVANCE(225);
      if (lookahead == '{') ADVANCE(227);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '(') ADVANCE(228);
      if (lookahead == '[') ADVANCE(225);
      if (lookahead == '{') ADVANCE(227);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '(') ADVANCE(228);
      if (lookahead == '{') ADVANCE(227);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(192);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_expr_string_token1);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_expr_string_token1);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_expr_string_token2);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_expr_string_token2);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_string_esc);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_expr_nil);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_expr_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_expr_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_DOT_LBRACK);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_DOT_LBRACE);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_DOT_LPAREN);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_require);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_require);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_assert);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_collectgarbage);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_collectgarbage);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_error);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_getfenv);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_getfenv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_getmetatable);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_getmetatable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_ipairs);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_ipairs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_loadstring);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_loadstring);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_newproxy);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_newproxy);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_next);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_next);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_pairs);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_pairs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_pcall);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_pcall);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_print);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_print);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_rawequal);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_rawequal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_rawget);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_rawget);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_rawset);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_rawset);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_setfenv);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_setfenv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_setmetatable);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_setmetatable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_tonumber);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_tonumber);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_tostring);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_tostring);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_unpack);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_unpack);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_xpcall);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_xpcall);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(339);
      if (lookahead == 'c') ADVANCE(294);
      if (lookahead == 'r') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(356);
      if (lookahead == 'o') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(423);
      if (lookahead == 'i') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(378);
      if (lookahead == 'g') ADVANCE(326);
      if (lookahead == 's') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(401);
      if (lookahead == 'o') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(230);
      if (lookahead == 'p') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(321);
      if (lookahead == 'm') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(323);
      if (lookahead == 'm') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'k') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'k') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(320);
      if (lookahead == 't') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(415);
      if (lookahead == 's') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(365);
      if (lookahead == 'r') ADVANCE(417);
      if (lookahead == 'y') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'q') ADVANCE(416);
      if (lookahead == 't') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'q') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'q') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'w') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'w') ADVANCE(375);
      if (lookahead == 'x') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__ident_immediate_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 165},
  [2] = {.lex_state = 165},
  [3] = {.lex_state = 165},
  [4] = {.lex_state = 165},
  [5] = {.lex_state = 165},
  [6] = {.lex_state = 165},
  [7] = {.lex_state = 165},
  [8] = {.lex_state = 165},
  [9] = {.lex_state = 165},
  [10] = {.lex_state = 165},
  [11] = {.lex_state = 165},
  [12] = {.lex_state = 165},
  [13] = {.lex_state = 165},
  [14] = {.lex_state = 165},
  [15] = {.lex_state = 165},
  [16] = {.lex_state = 165},
  [17] = {.lex_state = 157},
  [18] = {.lex_state = 157},
  [19] = {.lex_state = 157},
  [20] = {.lex_state = 157},
  [21] = {.lex_state = 157},
  [22] = {.lex_state = 157},
  [23] = {.lex_state = 157},
  [24] = {.lex_state = 157},
  [25] = {.lex_state = 157},
  [26] = {.lex_state = 157},
  [27] = {.lex_state = 157},
  [28] = {.lex_state = 157},
  [29] = {.lex_state = 157},
  [30] = {.lex_state = 157},
  [31] = {.lex_state = 157},
  [32] = {.lex_state = 157},
  [33] = {.lex_state = 157},
  [34] = {.lex_state = 157},
  [35] = {.lex_state = 157},
  [36] = {.lex_state = 157},
  [37] = {.lex_state = 157},
  [38] = {.lex_state = 157},
  [39] = {.lex_state = 157},
  [40] = {.lex_state = 157},
  [41] = {.lex_state = 157},
  [42] = {.lex_state = 157},
  [43] = {.lex_state = 157},
  [44] = {.lex_state = 157},
  [45] = {.lex_state = 157},
  [46] = {.lex_state = 157},
  [47] = {.lex_state = 157},
  [48] = {.lex_state = 157},
  [49] = {.lex_state = 157},
  [50] = {.lex_state = 157},
  [51] = {.lex_state = 157},
  [52] = {.lex_state = 157},
  [53] = {.lex_state = 157},
  [54] = {.lex_state = 157},
  [55] = {.lex_state = 157},
  [56] = {.lex_state = 157},
  [57] = {.lex_state = 157},
  [58] = {.lex_state = 157},
  [59] = {.lex_state = 157},
  [60] = {.lex_state = 157},
  [61] = {.lex_state = 157},
  [62] = {.lex_state = 157},
  [63] = {.lex_state = 157},
  [64] = {.lex_state = 157},
  [65] = {.lex_state = 157},
  [66] = {.lex_state = 157},
  [67] = {.lex_state = 157},
  [68] = {.lex_state = 157},
  [69] = {.lex_state = 157},
  [70] = {.lex_state = 157},
  [71] = {.lex_state = 157},
  [72] = {.lex_state = 157},
  [73] = {.lex_state = 157},
  [74] = {.lex_state = 166},
  [75] = {.lex_state = 166},
  [76] = {.lex_state = 166},
  [77] = {.lex_state = 166},
  [78] = {.lex_state = 166},
  [79] = {.lex_state = 166},
  [80] = {.lex_state = 166},
  [81] = {.lex_state = 166},
  [82] = {.lex_state = 166},
  [83] = {.lex_state = 166},
  [84] = {.lex_state = 166},
  [85] = {.lex_state = 166},
  [86] = {.lex_state = 166},
  [87] = {.lex_state = 166},
  [88] = {.lex_state = 166},
  [89] = {.lex_state = 166},
  [90] = {.lex_state = 166},
  [91] = {.lex_state = 166},
  [92] = {.lex_state = 166},
  [93] = {.lex_state = 166},
  [94] = {.lex_state = 166},
  [95] = {.lex_state = 166},
  [96] = {.lex_state = 166},
  [97] = {.lex_state = 166},
  [98] = {.lex_state = 166},
  [99] = {.lex_state = 166},
  [100] = {.lex_state = 166},
  [101] = {.lex_state = 166},
  [102] = {.lex_state = 166},
  [103] = {.lex_state = 166},
  [104] = {.lex_state = 166},
  [105] = {.lex_state = 166},
  [106] = {.lex_state = 166},
  [107] = {.lex_state = 166},
  [108] = {.lex_state = 166},
  [109] = {.lex_state = 166},
  [110] = {.lex_state = 166},
  [111] = {.lex_state = 166},
  [112] = {.lex_state = 166},
  [113] = {.lex_state = 166},
  [114] = {.lex_state = 166},
  [115] = {.lex_state = 166},
  [116] = {.lex_state = 166},
  [117] = {.lex_state = 166},
  [118] = {.lex_state = 166},
  [119] = {.lex_state = 166},
  [120] = {.lex_state = 166},
  [121] = {.lex_state = 166},
  [122] = {.lex_state = 166},
  [123] = {.lex_state = 166},
  [124] = {.lex_state = 166},
  [125] = {.lex_state = 166},
  [126] = {.lex_state = 166},
  [127] = {.lex_state = 166},
  [128] = {.lex_state = 166},
  [129] = {.lex_state = 166},
  [130] = {.lex_state = 166},
  [131] = {.lex_state = 166},
  [132] = {.lex_state = 166},
  [133] = {.lex_state = 166},
  [134] = {.lex_state = 166},
  [135] = {.lex_state = 166},
  [136] = {.lex_state = 166},
  [137] = {.lex_state = 166},
  [138] = {.lex_state = 166},
  [139] = {.lex_state = 166},
  [140] = {.lex_state = 166},
  [141] = {.lex_state = 166},
  [142] = {.lex_state = 166},
  [143] = {.lex_state = 166},
  [144] = {.lex_state = 166},
  [145] = {.lex_state = 166},
  [146] = {.lex_state = 166},
  [147] = {.lex_state = 166},
  [148] = {.lex_state = 166},
  [149] = {.lex_state = 166},
  [150] = {.lex_state = 166},
  [151] = {.lex_state = 166},
  [152] = {.lex_state = 166},
  [153] = {.lex_state = 166},
  [154] = {.lex_state = 166},
  [155] = {.lex_state = 166},
  [156] = {.lex_state = 166},
  [157] = {.lex_state = 166},
  [158] = {.lex_state = 166},
  [159] = {.lex_state = 166},
  [160] = {.lex_state = 166},
  [161] = {.lex_state = 166},
  [162] = {.lex_state = 166},
  [163] = {.lex_state = 166},
  [164] = {.lex_state = 158},
  [165] = {.lex_state = 159},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 159},
  [168] = {.lex_state = 158},
  [169] = {.lex_state = 158},
  [170] = {.lex_state = 165},
  [171] = {.lex_state = 159},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 165},
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
  [207] = {.lex_state = 160},
  [208] = {.lex_state = 160},
  [209] = {.lex_state = 160},
  [210] = {.lex_state = 162},
  [211] = {.lex_state = 160},
  [212] = {.lex_state = 160},
  [213] = {.lex_state = 162},
  [214] = {.lex_state = 160},
  [215] = {.lex_state = 160},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 160},
  [218] = {.lex_state = 160},
  [219] = {.lex_state = 162},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 160},
  [222] = {.lex_state = 160},
  [223] = {.lex_state = 160},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 160},
  [226] = {.lex_state = 160},
  [227] = {.lex_state = 160},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 160},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 160},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
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
    [sym_source_file] = STATE(243),
    [sym_stmt] = STATE(181),
    [sym_let_stmt] = STATE(190),
    [sym_assign_stmt] = STATE(190),
    [sym_for_stmt] = STATE(190),
    [sym_return_stmt] = STATE(190),
    [sym__expr] = STATE(128),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
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
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [2] = {
    [sym_stmt] = STATE(204),
    [sym_let_stmt] = STATE(190),
    [sym_assign_stmt] = STATE(190),
    [sym_for_stmt] = STATE(190),
    [sym_return_stmt] = STATE(190),
    [sym__expr] = STATE(128),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
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
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [3] = {
    [sym_stmt] = STATE(204),
    [sym_let_stmt] = STATE(190),
    [sym_assign_stmt] = STATE(190),
    [sym_for_stmt] = STATE(190),
    [sym_return_stmt] = STATE(190),
    [sym__expr] = STATE(128),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
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
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [4] = {
    [sym_stmt] = STATE(204),
    [sym_let_stmt] = STATE(190),
    [sym_assign_stmt] = STATE(190),
    [sym_for_stmt] = STATE(190),
    [sym_return_stmt] = STATE(190),
    [sym__expr] = STATE(128),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
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
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [5] = {
    [sym_stmt] = STATE(204),
    [sym_let_stmt] = STATE(190),
    [sym_assign_stmt] = STATE(190),
    [sym_for_stmt] = STATE(190),
    [sym_return_stmt] = STATE(190),
    [sym__expr] = STATE(128),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
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
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [6] = {
    [sym_stmt] = STATE(204),
    [sym_let_stmt] = STATE(190),
    [sym_assign_stmt] = STATE(190),
    [sym_for_stmt] = STATE(190),
    [sym_return_stmt] = STATE(190),
    [sym__expr] = STATE(128),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [ts_builtin_sym_end] = ACTIONS(51),
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
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [7] = {
    [sym_stmt] = STATE(204),
    [sym_let_stmt] = STATE(190),
    [sym_assign_stmt] = STATE(190),
    [sym_for_stmt] = STATE(190),
    [sym_return_stmt] = STATE(190),
    [sym__expr] = STATE(128),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
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
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [8] = {
    [sym_stmt] = STATE(204),
    [sym_let_stmt] = STATE(190),
    [sym_assign_stmt] = STATE(190),
    [sym_for_stmt] = STATE(190),
    [sym_return_stmt] = STATE(190),
    [sym__expr] = STATE(128),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [ts_builtin_sym_end] = ACTIONS(55),
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
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [9] = {
    [sym_stmt] = STATE(204),
    [sym_let_stmt] = STATE(190),
    [sym_assign_stmt] = STATE(190),
    [sym_for_stmt] = STATE(190),
    [sym_return_stmt] = STATE(190),
    [sym__expr] = STATE(128),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
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
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [10] = {
    [sym_stmt] = STATE(204),
    [sym_let_stmt] = STATE(190),
    [sym_assign_stmt] = STATE(190),
    [sym_for_stmt] = STATE(190),
    [sym_return_stmt] = STATE(190),
    [sym__expr] = STATE(128),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
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
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(59),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [11] = {
    [sym_stmt] = STATE(184),
    [sym_let_stmt] = STATE(190),
    [sym_assign_stmt] = STATE(190),
    [sym_for_stmt] = STATE(190),
    [sym_return_stmt] = STATE(190),
    [sym__expr] = STATE(128),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
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
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [12] = {
    [sym_stmt] = STATE(175),
    [sym_let_stmt] = STATE(190),
    [sym_assign_stmt] = STATE(190),
    [sym_for_stmt] = STATE(190),
    [sym_return_stmt] = STATE(190),
    [sym__expr] = STATE(128),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
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
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [13] = {
    [sym_stmt] = STATE(202),
    [sym_let_stmt] = STATE(190),
    [sym_assign_stmt] = STATE(190),
    [sym_for_stmt] = STATE(190),
    [sym_return_stmt] = STATE(190),
    [sym__expr] = STATE(128),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
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
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [14] = {
    [sym_stmt] = STATE(204),
    [sym_let_stmt] = STATE(190),
    [sym_assign_stmt] = STATE(190),
    [sym_for_stmt] = STATE(190),
    [sym_return_stmt] = STATE(190),
    [sym__expr] = STATE(128),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
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
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [15] = {
    [sym_stmt] = STATE(178),
    [sym_let_stmt] = STATE(190),
    [sym_assign_stmt] = STATE(190),
    [sym_for_stmt] = STATE(190),
    [sym_return_stmt] = STATE(190),
    [sym__expr] = STATE(128),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
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
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [16] = {
    [sym_stmt] = STATE(200),
    [sym_let_stmt] = STATE(190),
    [sym_assign_stmt] = STATE(190),
    [sym_for_stmt] = STATE(190),
    [sym_return_stmt] = STATE(190),
    [sym__expr] = STATE(128),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
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
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [17] = {
    [sym__expr] = STATE(149),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(63),
    [anon_sym_DOT_LBRACK] = ACTIONS(65),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [18] = {
    [sym__expr] = STATE(142),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(69),
    [anon_sym_DOT_LBRACK] = ACTIONS(71),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [19] = {
    [sym__expr] = STATE(149),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(73),
    [anon_sym_DOT_LBRACK] = ACTIONS(65),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [20] = {
    [sym__expr] = STATE(149),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(75),
    [anon_sym_DOT_LBRACK] = ACTIONS(65),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [21] = {
    [sym_builtin_range] = STATE(240),
    [sym__expr] = STATE(160),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_ATrange] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [22] = {
    [sym__expr] = STATE(149),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(79),
    [anon_sym_DOT_LBRACK] = ACTIONS(65),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [23] = {
    [sym__expr] = STATE(149),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_DOT_LBRACK] = ACTIONS(65),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [24] = {
    [sym__expr] = STATE(149),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(83),
    [anon_sym_DOT_LBRACK] = ACTIONS(65),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [25] = {
    [sym__expr] = STATE(149),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_DOT_LBRACK] = ACTIONS(65),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [26] = {
    [sym__expr] = STATE(149),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(87),
    [anon_sym_DOT_LBRACK] = ACTIONS(65),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [27] = {
    [sym__expr] = STATE(149),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_DOT_LBRACK] = ACTIONS(65),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [28] = {
    [sym__expr] = STATE(144),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [29] = {
    [sym__expr] = STATE(135),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(93),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [30] = {
    [sym__expr] = STATE(155),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [31] = {
    [sym__expr] = STATE(155),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [32] = {
    [sym__expr] = STATE(155),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [33] = {
    [sym__expr] = STATE(155),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [34] = {
    [sym__expr] = STATE(149),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACK] = ACTIONS(65),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [35] = {
    [sym__expr] = STATE(139),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [36] = {
    [sym__expr] = STATE(90),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [37] = {
    [sym__expr] = STATE(158),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [38] = {
    [sym__expr] = STATE(150),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [39] = {
    [sym__expr] = STATE(143),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [40] = {
    [sym__expr] = STATE(136),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [41] = {
    [sym__expr] = STATE(137),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [42] = {
    [sym__expr] = STATE(163),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [43] = {
    [sym__expr] = STATE(133),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [44] = {
    [sym__expr] = STATE(154),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [45] = {
    [sym__expr] = STATE(156),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [46] = {
    [sym__expr] = STATE(97),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [47] = {
    [sym__expr] = STATE(141),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [48] = {
    [sym__expr] = STATE(146),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [49] = {
    [sym__expr] = STATE(161),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [50] = {
    [sym__expr] = STATE(145),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [51] = {
    [sym__expr] = STATE(162),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [52] = {
    [sym__expr] = STATE(88),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [53] = {
    [sym__expr] = STATE(89),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [54] = {
    [sym__expr] = STATE(96),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [55] = {
    [sym__expr] = STATE(91),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [56] = {
    [sym__expr] = STATE(92),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [57] = {
    [sym__expr] = STATE(93),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [58] = {
    [sym__expr] = STATE(94),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [59] = {
    [sym__expr] = STATE(95),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [60] = {
    [sym__expr] = STATE(153),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [61] = {
    [sym__expr] = STATE(159),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [62] = {
    [sym__expr] = STATE(132),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [63] = {
    [sym__expr] = STATE(129),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [64] = {
    [sym__expr] = STATE(87),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [65] = {
    [sym__expr] = STATE(147),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [66] = {
    [sym__expr] = STATE(152),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [67] = {
    [sym__expr] = STATE(157),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [68] = {
    [sym__expr] = STATE(140),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [69] = {
    [sym__expr] = STATE(155),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [70] = {
    [sym__expr] = STATE(151),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [71] = {
    [sym__expr] = STATE(138),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [72] = {
    [sym__expr] = STATE(148),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
  [73] = {
    [sym__expr] = STATE(134),
    [sym_expr_binop] = STATE(111),
    [sym_expr_unop] = STATE(111),
    [sym_expr_path] = STATE(76),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(111),
    [sym_expr_tag] = STATE(111),
    [sym_expr_bool] = STATE(111),
    [sym_expr_table] = STATE(111),
    [sym_expr_paren] = STATE(76),
    [sym_expr_block] = STATE(111),
    [sym_expr_func] = STATE(76),
    [sym_expr_if] = STATE(111),
    [sym_fn_call] = STATE(120),
    [sym_builtin_fn] = STATE(170),
    [sym_meth_call] = STATE(120),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_expr_nil] = ACTIONS(25),
    [sym_expr_number] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DOT_LBRACE] = ACTIONS(31),
    [anon_sym_DOT_LPAREN] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [sym_require] = ACTIONS(37),
    [anon_sym_assert] = ACTIONS(39),
    [anon_sym_collectgarbage] = ACTIONS(39),
    [anon_sym_error] = ACTIONS(39),
    [anon_sym_getfenv] = ACTIONS(39),
    [anon_sym_getmetatable] = ACTIONS(39),
    [anon_sym_ipairs] = ACTIONS(39),
    [anon_sym_loadstring] = ACTIONS(39),
    [anon_sym_newproxy] = ACTIONS(39),
    [anon_sym_next] = ACTIONS(39),
    [anon_sym_pairs] = ACTIONS(39),
    [anon_sym_pcall] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(39),
    [anon_sym_rawequal] = ACTIONS(39),
    [anon_sym_rawget] = ACTIONS(39),
    [anon_sym_rawset] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(39),
    [anon_sym_setfenv] = ACTIONS(39),
    [anon_sym_setmetatable] = ACTIONS(39),
    [anon_sym_tonumber] = ACTIONS(39),
    [anon_sym_tostring] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_unpack] = ACTIONS(39),
    [anon_sym_xpcall] = ACTIONS(39),
    [sym_ident] = ACTIONS(41),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_DOT,
    STATE(74), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(105), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(103), 22,
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
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [41] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(123), 1,
      sym_expr_string,
    ACTIONS(114), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(110), 19,
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
  [86] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(123), 1,
      sym_expr_string,
    ACTIONS(114), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(110), 19,
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
  [131] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(74), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(118), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(116), 22,
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
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [170] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(120), 22,
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
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [206] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(124), 22,
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
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(103), 22,
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
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [494] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_EQ,
    ACTIONS(158), 1,
      anon_sym_or,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(182), 1,
      anon_sym_else,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(156), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(152), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [560] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_or,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(188), 1,
      anon_sym_EQ,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(186), 11,
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
  [618] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(188), 1,
      anon_sym_EQ,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(186), 12,
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
  [674] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(188), 1,
      anon_sym_EQ,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(186), 13,
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
  [728] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(188), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(186), 15,
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
  [778] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(188), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(186), 16,
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
  [826] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(188), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(186), 17,
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
  [870] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(188), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(186), 18,
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
  [910] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_DOT,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(188), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(186), 19,
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
  [948] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_or,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    ACTIONS(192), 1,
      anon_sym_EQ,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(156), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(190), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
  [1012] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_DOT,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(196), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(194), 19,
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
  [1050] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(198), 19,
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
  [1083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(202), 19,
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
  [1116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(206), 19,
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
  [1149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(210), 19,
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
  [1182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(214), 19,
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
  [1215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(218), 19,
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
  [1248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(222), 19,
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
  [1281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(226), 19,
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
  [1314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(230), 19,
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
  [1347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(234), 19,
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
  [1380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(238), 19,
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
  [1413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(242), 19,
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
  [1446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(246), 19,
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
  [1479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(110), 19,
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
  [1512] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(250), 19,
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
  [1545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(254), 19,
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
  [1578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(258), 19,
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
  [1611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(262), 19,
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
  [1644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(266), 19,
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
  [1677] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(270), 19,
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
  [1710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(274), 19,
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
  [1743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(278), 19,
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
  [1776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(110), 19,
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
  [1809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(282), 19,
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
  [1842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(286), 19,
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
  [1875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(290), 19,
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
  [1908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(294), 19,
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
  [1941] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(298), 19,
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
  [1974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(302), 19,
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
  [2007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(306), 19,
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
  [2040] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_or,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    ACTIONS(312), 1,
      anon_sym_EQ,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(156), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(310), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2100] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_or,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(156), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(314), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2157] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_COLON,
    ACTIONS(200), 5,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(198), 14,
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
  [2190] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    ACTIONS(322), 1,
      anon_sym_COLON,
    ACTIONS(200), 5,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(198), 14,
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
  [2223] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    ACTIONS(158), 1,
      anon_sym_or,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    STATE(173), 1,
      aux_sym_expr_table_repeat1,
    ACTIONS(156), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2284] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_or,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(156), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(326), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2341] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    ACTIONS(158), 1,
      anon_sym_or,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    STATE(182), 1,
      aux_sym_expr_table_repeat1,
    ACTIONS(156), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2402] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_or,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
    ACTIONS(332), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    STATE(192), 1,
      aux_sym__call_args_repeat1,
    ACTIONS(156), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2463] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(158), 1,
      anon_sym_or,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    STATE(205), 1,
      aux_sym_expr_table_repeat1,
    ACTIONS(156), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2524] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_or,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(156), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(336), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2581] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_or,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(156), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(338), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2638] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_or,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(156), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(340), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2695] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_or,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    STATE(206), 1,
      aux_sym_expr_table_repeat1,
    ACTIONS(156), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2756] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(158), 1,
      anon_sym_or,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    STATE(179), 1,
      aux_sym_expr_table_repeat1,
    ACTIONS(156), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2817] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_or,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    ACTIONS(348), 1,
      anon_sym_COMMA,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    STATE(195), 1,
      aux_sym_expr_table_repeat1,
    ACTIONS(156), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2878] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_or,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(156), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(352), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2935] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_or,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
    ACTIONS(356), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    STATE(183), 1,
      aux_sym__call_args_repeat1,
    ACTIONS(156), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2996] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_or,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(156), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(358), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [3053] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(158), 1,
      anon_sym_or,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    STATE(194), 1,
      aux_sym_expr_table_repeat1,
    ACTIONS(156), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3114] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_or,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(156), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(362), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [3171] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_or,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(156), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(364), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3227] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_or,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(156), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(366), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3283] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_or,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(156), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(368), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3339] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_or,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(156), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(370), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3395] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_or,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(156), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(372), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3451] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_or,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(156), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(374), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3507] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_or,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(156), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(376), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3563] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_or,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(156), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(378), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3619] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_or,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    ACTIONS(380), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(156), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3674] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_or,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    ACTIONS(382), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(156), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3729] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_or,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(156), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3784] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_or,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    ACTIONS(386), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(156), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3839] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_or,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(156), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3894] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_or,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(156), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3949] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_or,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(156), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4004] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_or,
    ACTIONS(160), 1,
      anon_sym_and,
    ACTIONS(166), 1,
      anon_sym_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_PIPE_GT,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(156), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4059] = 5,
    ACTIONS(396), 1,
      sym_comment,
    ACTIONS(398), 1,
      aux_sym_expr_string_token1,
    ACTIONS(401), 1,
      anon_sym_DQUOTE2,
    ACTIONS(403), 1,
      sym_string_esc,
    STATE(164), 1,
      aux_sym_expr_string_repeat1,
  [4075] = 5,
    ACTIONS(396), 1,
      sym_comment,
    ACTIONS(406), 1,
      aux_sym_expr_string_token2,
    ACTIONS(408), 1,
      anon_sym_SQUOTE2,
    ACTIONS(410), 1,
      sym_string_esc,
    STATE(167), 1,
      aux_sym_expr_string_repeat2,
  [4091] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_SEMI,
    STATE(166), 1,
      aux_sym__block_body_repeat1,
    ACTIONS(412), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
  [4105] = 5,
    ACTIONS(396), 1,
      sym_comment,
    ACTIONS(417), 1,
      aux_sym_expr_string_token2,
    ACTIONS(420), 1,
      anon_sym_SQUOTE2,
    ACTIONS(422), 1,
      sym_string_esc,
    STATE(167), 1,
      aux_sym_expr_string_repeat2,
  [4121] = 5,
    ACTIONS(396), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_DQUOTE2,
    ACTIONS(425), 1,
      aux_sym_expr_string_token1,
    ACTIONS(427), 1,
      sym_string_esc,
    STATE(164), 1,
      aux_sym_expr_string_repeat1,
  [4137] = 5,
    ACTIONS(396), 1,
      sym_comment,
    ACTIONS(429), 1,
      aux_sym_expr_string_token1,
    ACTIONS(431), 1,
      anon_sym_DQUOTE2,
    ACTIONS(433), 1,
      sym_string_esc,
    STATE(168), 1,
      aux_sym_expr_string_repeat1,
  [4153] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(123), 1,
      sym_expr_string,
  [4169] = 5,
    ACTIONS(396), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_SQUOTE2,
    ACTIONS(435), 1,
      aux_sym_expr_string_token2,
    ACTIONS(437), 1,
      sym_string_esc,
    STATE(165), 1,
      aux_sym_expr_string_repeat2,
  [4185] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_RPAREN,
    ACTIONS(441), 1,
      anon_sym_COMMA,
    STATE(199), 1,
      aux_sym__decl_args_repeat1,
  [4198] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym_expr_table_repeat1,
  [4211] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(443), 1,
      anon_sym_SEMI,
    STATE(166), 1,
      aux_sym__block_body_repeat1,
  [4224] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(443), 1,
      anon_sym_SEMI,
    STATE(177), 1,
      aux_sym__block_body_repeat1,
  [4237] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_RPAREN,
    ACTIONS(447), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      aux_sym__decl_args_repeat1,
  [4250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(449), 1,
      anon_sym_SEMI,
    STATE(166), 1,
      aux_sym__block_body_repeat1,
  [4263] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(449), 1,
      anon_sym_SEMI,
    STATE(201), 1,
      aux_sym__block_body_repeat1,
  [4276] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(451), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym_expr_table_repeat1,
  [4289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 3,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4298] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      ts_builtin_sym_end,
    ACTIONS(457), 1,
      anon_sym_SEMI,
    STATE(187), 1,
      aux_sym__block_body_repeat1,
  [4311] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym_expr_table_repeat1,
  [4324] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
    ACTIONS(459), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym__call_args_repeat1,
  [4337] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_SEMI,
    ACTIONS(463), 1,
      anon_sym_RBRACE,
    STATE(197), 1,
      aux_sym__block_body_repeat1,
  [4350] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym__decl_args_repeat1,
  [4363] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_RPAREN,
    ACTIONS(471), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym__decl_args_repeat1,
  [4376] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(473), 1,
      anon_sym_SEMI,
    STATE(166), 1,
      aux_sym__block_body_repeat1,
  [4389] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
    ACTIONS(477), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym__decl_args_repeat1,
  [4402] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    ACTIONS(479), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym__call_args_repeat1,
  [4415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4424] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(482), 1,
      anon_sym_SEMI,
    STATE(166), 1,
      aux_sym__block_body_repeat1,
  [4437] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
    ACTIONS(484), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym__call_args_repeat1,
  [4450] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_RPAREN,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym__decl_args_repeat1,
  [4463] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym_expr_table_repeat1,
  [4476] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym_expr_table_repeat1,
  [4489] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym__decl_args_repeat1,
  [4502] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    STATE(166), 1,
      aux_sym__block_body_repeat1,
  [4515] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_RPAREN,
    ACTIONS(501), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym__decl_args_repeat1,
  [4528] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_RPAREN,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym__decl_args_repeat1,
  [4541] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_SEMI,
    ACTIONS(509), 1,
      anon_sym_RBRACE,
    STATE(174), 1,
      aux_sym__block_body_repeat1,
  [4554] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(511), 1,
      anon_sym_SEMI,
    STATE(166), 1,
      aux_sym__block_body_repeat1,
  [4567] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(511), 1,
      anon_sym_SEMI,
    STATE(191), 1,
      aux_sym__block_body_repeat1,
  [4580] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
    ACTIONS(513), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym_expr_table_repeat1,
  [4593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4602] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym_expr_table_repeat1,
  [4615] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym_expr_table_repeat1,
  [4628] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
    ACTIONS(516), 1,
      sym_ident,
  [4638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
    ACTIONS(520), 1,
      sym_ident,
  [4648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
    ACTIONS(524), 1,
      sym_ident,
  [4658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      aux_sym__ident_immediate_token1,
    STATE(98), 1,
      sym__ident_immediate,
  [4668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    ACTIONS(530), 1,
      sym_ident,
  [4678] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
    ACTIONS(534), 1,
      sym_ident,
  [4688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      aux_sym__ident_immediate_token1,
    STATE(131), 1,
      sym__ident_immediate,
  [4698] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      sym_ident,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
  [4708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_RPAREN,
    ACTIONS(516), 1,
      sym_ident,
  [4718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_LPAREN,
    ACTIONS(542), 1,
      anon_sym_EQ,
  [4728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_RPAREN,
    ACTIONS(516), 1,
      sym_ident,
  [4738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_RPAREN,
    ACTIONS(516), 1,
      sym_ident,
  [4748] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      aux_sym__ident_immediate_token1,
    STATE(130), 1,
      sym__ident_immediate,
  [4758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      sym_ident,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
  [4776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      sym_ident,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
  [4786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      sym_ident,
    ACTIONS(550), 1,
      anon_sym_RPAREN,
  [4796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_LBRACE,
  [4803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      sym_ident,
  [4810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      sym_ident,
  [4817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      sym_ident,
  [4824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_COLON,
  [4831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_EQ,
  [4838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      sym_ident,
  [4845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_LBRACE,
  [4852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_EQ,
  [4859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_COLON,
  [4866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_LPAREN,
  [4873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_COLON,
  [4880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_EQ,
  [4887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
  [4894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_COLON,
  [4901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_in,
  [4908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
  [4915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_LBRACE,
  [4922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_LPAREN,
  [4929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      ts_builtin_sym_end,
  [4936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_COLON,
  [4943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      sym_ident,
  [4950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_COLON,
  [4957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_LPAREN,
  [4964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_EQ,
  [4971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_COLON,
  [4978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_LBRACE,
  [4985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_COLON,
  [4992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_COLON,
  [4999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_COLON,
  [5006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(74)] = 0,
  [SMALL_STATE(75)] = 41,
  [SMALL_STATE(76)] = 86,
  [SMALL_STATE(77)] = 131,
  [SMALL_STATE(78)] = 170,
  [SMALL_STATE(79)] = 206,
  [SMALL_STATE(80)] = 242,
  [SMALL_STATE(81)] = 278,
  [SMALL_STATE(82)] = 314,
  [SMALL_STATE(83)] = 350,
  [SMALL_STATE(84)] = 386,
  [SMALL_STATE(85)] = 422,
  [SMALL_STATE(86)] = 458,
  [SMALL_STATE(87)] = 494,
  [SMALL_STATE(88)] = 560,
  [SMALL_STATE(89)] = 618,
  [SMALL_STATE(90)] = 674,
  [SMALL_STATE(91)] = 728,
  [SMALL_STATE(92)] = 778,
  [SMALL_STATE(93)] = 826,
  [SMALL_STATE(94)] = 870,
  [SMALL_STATE(95)] = 910,
  [SMALL_STATE(96)] = 948,
  [SMALL_STATE(97)] = 1012,
  [SMALL_STATE(98)] = 1050,
  [SMALL_STATE(99)] = 1083,
  [SMALL_STATE(100)] = 1116,
  [SMALL_STATE(101)] = 1149,
  [SMALL_STATE(102)] = 1182,
  [SMALL_STATE(103)] = 1215,
  [SMALL_STATE(104)] = 1248,
  [SMALL_STATE(105)] = 1281,
  [SMALL_STATE(106)] = 1314,
  [SMALL_STATE(107)] = 1347,
  [SMALL_STATE(108)] = 1380,
  [SMALL_STATE(109)] = 1413,
  [SMALL_STATE(110)] = 1446,
  [SMALL_STATE(111)] = 1479,
  [SMALL_STATE(112)] = 1512,
  [SMALL_STATE(113)] = 1545,
  [SMALL_STATE(114)] = 1578,
  [SMALL_STATE(115)] = 1611,
  [SMALL_STATE(116)] = 1644,
  [SMALL_STATE(117)] = 1677,
  [SMALL_STATE(118)] = 1710,
  [SMALL_STATE(119)] = 1743,
  [SMALL_STATE(120)] = 1776,
  [SMALL_STATE(121)] = 1809,
  [SMALL_STATE(122)] = 1842,
  [SMALL_STATE(123)] = 1875,
  [SMALL_STATE(124)] = 1908,
  [SMALL_STATE(125)] = 1941,
  [SMALL_STATE(126)] = 1974,
  [SMALL_STATE(127)] = 2007,
  [SMALL_STATE(128)] = 2040,
  [SMALL_STATE(129)] = 2100,
  [SMALL_STATE(130)] = 2157,
  [SMALL_STATE(131)] = 2190,
  [SMALL_STATE(132)] = 2223,
  [SMALL_STATE(133)] = 2284,
  [SMALL_STATE(134)] = 2341,
  [SMALL_STATE(135)] = 2402,
  [SMALL_STATE(136)] = 2463,
  [SMALL_STATE(137)] = 2524,
  [SMALL_STATE(138)] = 2581,
  [SMALL_STATE(139)] = 2638,
  [SMALL_STATE(140)] = 2695,
  [SMALL_STATE(141)] = 2756,
  [SMALL_STATE(142)] = 2817,
  [SMALL_STATE(143)] = 2878,
  [SMALL_STATE(144)] = 2935,
  [SMALL_STATE(145)] = 2996,
  [SMALL_STATE(146)] = 3053,
  [SMALL_STATE(147)] = 3114,
  [SMALL_STATE(148)] = 3171,
  [SMALL_STATE(149)] = 3227,
  [SMALL_STATE(150)] = 3283,
  [SMALL_STATE(151)] = 3339,
  [SMALL_STATE(152)] = 3395,
  [SMALL_STATE(153)] = 3451,
  [SMALL_STATE(154)] = 3507,
  [SMALL_STATE(155)] = 3563,
  [SMALL_STATE(156)] = 3619,
  [SMALL_STATE(157)] = 3674,
  [SMALL_STATE(158)] = 3729,
  [SMALL_STATE(159)] = 3784,
  [SMALL_STATE(160)] = 3839,
  [SMALL_STATE(161)] = 3894,
  [SMALL_STATE(162)] = 3949,
  [SMALL_STATE(163)] = 4004,
  [SMALL_STATE(164)] = 4059,
  [SMALL_STATE(165)] = 4075,
  [SMALL_STATE(166)] = 4091,
  [SMALL_STATE(167)] = 4105,
  [SMALL_STATE(168)] = 4121,
  [SMALL_STATE(169)] = 4137,
  [SMALL_STATE(170)] = 4153,
  [SMALL_STATE(171)] = 4169,
  [SMALL_STATE(172)] = 4185,
  [SMALL_STATE(173)] = 4198,
  [SMALL_STATE(174)] = 4211,
  [SMALL_STATE(175)] = 4224,
  [SMALL_STATE(176)] = 4237,
  [SMALL_STATE(177)] = 4250,
  [SMALL_STATE(178)] = 4263,
  [SMALL_STATE(179)] = 4276,
  [SMALL_STATE(180)] = 4289,
  [SMALL_STATE(181)] = 4298,
  [SMALL_STATE(182)] = 4311,
  [SMALL_STATE(183)] = 4324,
  [SMALL_STATE(184)] = 4337,
  [SMALL_STATE(185)] = 4350,
  [SMALL_STATE(186)] = 4363,
  [SMALL_STATE(187)] = 4376,
  [SMALL_STATE(188)] = 4389,
  [SMALL_STATE(189)] = 4402,
  [SMALL_STATE(190)] = 4415,
  [SMALL_STATE(191)] = 4424,
  [SMALL_STATE(192)] = 4437,
  [SMALL_STATE(193)] = 4450,
  [SMALL_STATE(194)] = 4463,
  [SMALL_STATE(195)] = 4476,
  [SMALL_STATE(196)] = 4489,
  [SMALL_STATE(197)] = 4502,
  [SMALL_STATE(198)] = 4515,
  [SMALL_STATE(199)] = 4528,
  [SMALL_STATE(200)] = 4541,
  [SMALL_STATE(201)] = 4554,
  [SMALL_STATE(202)] = 4567,
  [SMALL_STATE(203)] = 4580,
  [SMALL_STATE(204)] = 4593,
  [SMALL_STATE(205)] = 4602,
  [SMALL_STATE(206)] = 4615,
  [SMALL_STATE(207)] = 4628,
  [SMALL_STATE(208)] = 4638,
  [SMALL_STATE(209)] = 4648,
  [SMALL_STATE(210)] = 4658,
  [SMALL_STATE(211)] = 4668,
  [SMALL_STATE(212)] = 4678,
  [SMALL_STATE(213)] = 4688,
  [SMALL_STATE(214)] = 4698,
  [SMALL_STATE(215)] = 4708,
  [SMALL_STATE(216)] = 4718,
  [SMALL_STATE(217)] = 4728,
  [SMALL_STATE(218)] = 4738,
  [SMALL_STATE(219)] = 4748,
  [SMALL_STATE(220)] = 4758,
  [SMALL_STATE(221)] = 4766,
  [SMALL_STATE(222)] = 4776,
  [SMALL_STATE(223)] = 4786,
  [SMALL_STATE(224)] = 4796,
  [SMALL_STATE(225)] = 4803,
  [SMALL_STATE(226)] = 4810,
  [SMALL_STATE(227)] = 4817,
  [SMALL_STATE(228)] = 4824,
  [SMALL_STATE(229)] = 4831,
  [SMALL_STATE(230)] = 4838,
  [SMALL_STATE(231)] = 4845,
  [SMALL_STATE(232)] = 4852,
  [SMALL_STATE(233)] = 4859,
  [SMALL_STATE(234)] = 4866,
  [SMALL_STATE(235)] = 4873,
  [SMALL_STATE(236)] = 4880,
  [SMALL_STATE(237)] = 4887,
  [SMALL_STATE(238)] = 4894,
  [SMALL_STATE(239)] = 4901,
  [SMALL_STATE(240)] = 4908,
  [SMALL_STATE(241)] = 4915,
  [SMALL_STATE(242)] = 4922,
  [SMALL_STATE(243)] = 4929,
  [SMALL_STATE(244)] = 4936,
  [SMALL_STATE(245)] = 4943,
  [SMALL_STATE(246)] = 4950,
  [SMALL_STATE(247)] = 4957,
  [SMALL_STATE(248)] = 4964,
  [SMALL_STATE(249)] = 4971,
  [SMALL_STATE(250)] = 4978,
  [SMALL_STATE(251)] = 4985,
  [SMALL_STATE(252)] = 4992,
  [SMALL_STATE(253)] = 4999,
  [SMALL_STATE(254)] = 5006,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_path_repeat1, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_path_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_path_repeat1, 2), SHIFT_REPEAT(227),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_path, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_path, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_func, 9),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_func, 9),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_index, 4),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_index, 4),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_paren, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_paren, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_func, 7),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_func, 7),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_func, 10),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_func, 10),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_func, 5),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_func, 5),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_func, 8),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_func, 8),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_func, 6),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_func, 6),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_if, 5),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_if, 5),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_binop, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_binop, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_if, 7),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_if, 7),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_unop, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_unop, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_tag, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_tag, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_bool, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_bool, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 3),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 5),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_call, 5),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_string, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_string, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meth_call, 7),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meth_call, 7),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_block, 3),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_block, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 4),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_string, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_string, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 10),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 10),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 6),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_call, 6),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 11),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 11),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_block, 4),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_block, 4),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 13),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 13),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 6),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 6),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meth_call, 8),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meth_call, 8),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 2),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meth_call, 5),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meth_call, 5),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 7),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 7),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 8),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 8),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 4),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_call, 4),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 3),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_call, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 9),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 9),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 2),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_call, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 5),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 5),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_block, 5),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_block, 5),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 12),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 12),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meth_call, 6),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meth_call, 6),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 1),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 8),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 7),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 7),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 9),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_stmt, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_stmt, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 6),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 4),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_table_repeat1, 7),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_table_repeat1, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_table_repeat1, 5),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_table_repeat1, 9),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_table_repeat1, 6),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_table_repeat1, 10),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_table_repeat1, 8),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__call_args_repeat1, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_string_repeat1, 2), SHIFT_REPEAT(164),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_string_repeat1, 2),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_string_repeat1, 2), SHIFT_REPEAT(164),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2), SHIFT_REPEAT(14),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_string_repeat2, 2), SHIFT_REPEAT(167),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_string_repeat2, 2),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_string_repeat2, 2), SHIFT_REPEAT(167),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_fn, 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__call_args_repeat1, 2), SHIFT_REPEAT(69),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_args_repeat1, 2),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decl_args_repeat1, 2), SHIFT_REPEAT(245),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_table_repeat1, 2), SHIFT_REPEAT(34),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_range, 6),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [588] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
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
