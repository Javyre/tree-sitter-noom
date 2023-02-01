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
#define STATE_COUNT 260
#define LARGE_STATE_COUNT 75
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
  aux_sym_expr_string_token3 = 37,
  sym_string_esc = 38,
  anon_sym_true = 39,
  anon_sym_false = 40,
  sym_expr_nil = 41,
  sym_expr_number = 42,
  anon_sym_LBRACE = 43,
  anon_sym_RBRACE = 44,
  anon_sym_fn = 45,
  anon_sym_COLON = 46,
  anon_sym_DOT_LBRACE = 47,
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
  [aux_sym_expr_string_token3] = "expr_string_token3",
  [sym_string_esc] = "string_esc",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_expr_nil] = "expr_nil",
  [sym_expr_number] = "expr_number",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_fn] = "fn",
  [anon_sym_COLON] = ":",
  [anon_sym_DOT_LBRACE] = ".{",
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
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOT_LBRACE] = anon_sym_DOT_LBRACE,
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
  [anon_sym_fn] = {
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
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
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
      if (lookahead == '"') ADVANCE(214);
      if (lookahead == '\'') ADVANCE(218);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '*') ADVANCE(200);
      if (lookahead == '+') ADVANCE(197);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == '/') ADVANCE(201);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == ';') ADVANCE(172);
      if (lookahead == '<') ADVANCE(194);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead == '>') ADVANCE(192);
      if (lookahead == '@') ADVANCE(112);
      if (lookahead == '[') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead == ']') ADVANCE(210);
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
      if (lookahead == '{') ADVANCE(228);
      if (lookahead == '|') ADVANCE(6);
      if (lookahead == '}') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
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
      if (lookahead == ']') ADVANCE(219);
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
      if (lookahead == 'n') ADVANCE(230);
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
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == 'g') ADVANCE(55);
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(241);
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
      if (lookahead == 'f') ADVANCE(234);
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
      if (lookahead == 'g') ADVANCE(277);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(251);
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
      if (lookahead == 'k') ADVANCE(281);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(225);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(259);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(283);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(263);
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
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(275);
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
      if (lookahead == 's') ADVANCE(257);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(249);
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
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(269);
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
      if (lookahead == 'v') ADVANCE(245);
      END_STATE();
    case 155:
      if (lookahead == 'v') ADVANCE(271);
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
      if (lookahead == 'y') ADVANCE(253);
      END_STATE();
    case 160:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(160)
      if (lookahead == '!') ADVANCE(203);
      if (lookahead == '"') ADVANCE(211);
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '-') ADVANCE(198);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '@') ADVANCE(112);
      if (lookahead == '[') ADVANCE(209);
      if (lookahead == 'a') ADVANCE(401);
      if (lookahead == 'c') ADVANCE(372);
      if (lookahead == 'e') ADVANCE(388);
      if (lookahead == 'f') ADVANCE(292);
      if (lookahead == 'g') ADVANCE(313);
      if (lookahead == 'i') ADVANCE(336);
      if (lookahead == 'l') ADVANCE(375);
      if (lookahead == 'n') ADVANCE(314);
      if (lookahead == 'p') ADVANCE(286);
      if (lookahead == 'r') ADVANCE(288);
      if (lookahead == 's') ADVANCE(315);
      if (lookahead == 't') ADVANCE(373);
      if (lookahead == 'u') ADVANCE(368);
      if (lookahead == 'x') ADVANCE(377);
      if (lookahead == '{') ADVANCE(228);
      if (lookahead == '}') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 161:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(212);
      if (lookahead == '"') ADVANCE(214);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 162:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(216);
      if (lookahead == '\'') ADVANCE(218);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead != 0) ADVANCE(216);
      END_STATE();
    case 163:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(163)
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '/') ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 166:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(220);
      END_STATE();
    case 167:
      if (eof) ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(167)
      if (lookahead == '!') ADVANCE(204);
      if (lookahead == '"') ADVANCE(211);
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '*') ADVANCE(200);
      if (lookahead == '+') ADVANCE(197);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == '/') ADVANCE(201);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == ';') ADVANCE(172);
      if (lookahead == '<') ADVANCE(194);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead == '>') ADVANCE(192);
      if (lookahead == '@') ADVANCE(112);
      if (lookahead == '[') ADVANCE(209);
      if (lookahead == ']') ADVANCE(210);
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
      if (lookahead == '{') ADVANCE(228);
      if (lookahead == '|') ADVANCE(6);
      if (lookahead == '}') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 168:
      if (eof) ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(168)
      if (lookahead == '!') ADVANCE(203);
      if (lookahead == '"') ADVANCE(211);
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == '-') ADVANCE(198);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'a') ADVANCE(401);
      if (lookahead == 'b') ADVANCE(390);
      if (lookahead == 'c') ADVANCE(372);
      if (lookahead == 'e') ADVANCE(388);
      if (lookahead == 'f') ADVANCE(291);
      if (lookahead == 'g') ADVANCE(313);
      if (lookahead == 'i') ADVANCE(336);
      if (lookahead == 'l') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(314);
      if (lookahead == 'p') ADVANCE(286);
      if (lookahead == 'r') ADVANCE(287);
      if (lookahead == 's') ADVANCE(315);
      if (lookahead == 't') ADVANCE(373);
      if (lookahead == 'u') ADVANCE(368);
      if (lookahead == 'x') ADVANCE(377);
      if (lookahead == '{') ADVANCE(228);
      if (lookahead == '}') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 169:
      if (eof) ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(169)
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '"') ADVANCE(211);
      if (lookahead == '\'') ADVANCE(215);
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
      if (lookahead == '[') ADVANCE(209);
      if (lookahead == ']') ADVANCE(210);
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(113);
      if (lookahead == '|') ADVANCE(6);
      if (lookahead == '}') ADVANCE(229);
      END_STATE();
    case 170:
      if (eof) ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(170)
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '*') ADVANCE(200);
      if (lookahead == '+') ADVANCE(197);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == '/') ADVANCE(201);
      if (lookahead == ';') ADVANCE(172);
      if (lookahead == '<') ADVANCE(194);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead == '>') ADVANCE(192);
      if (lookahead == '[') ADVANCE(208);
      if (lookahead == ']') ADVANCE(210);
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(113);
      if (lookahead == '|') ADVANCE(6);
      if (lookahead == '}') ADVANCE(229);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
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
      if (lookahead == '>') ADVANCE(285);
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
      if (lookahead == '.') ADVANCE(196);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == '{') ADVANCE(233);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '{') ADVANCE(233);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '[') ADVANCE(7);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_expr_string_token1);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_expr_string_token1);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_expr_string_token2);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_expr_string_token2);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_expr_string_token3);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_string_esc);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_expr_nil);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_expr_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_expr_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_DOT_LBRACE);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_require);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_require);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_assert);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_collectgarbage);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_collectgarbage);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_error);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_getfenv);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_getfenv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_getmetatable);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_getmetatable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_ipairs);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_ipairs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_loadstring);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_loadstring);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_newproxy);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_newproxy);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_next);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_next);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_pairs);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_pairs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_pcall);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_pcall);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_print);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_print);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_rawequal);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_rawequal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_rawget);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_rawget);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_rawset);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_rawset);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_setfenv);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_setfenv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_setmetatable);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_setmetatable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_tonumber);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_tonumber);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_tostring);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_tostring);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_unpack);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_unpack);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_xpcall);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_xpcall);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(344);
      if (lookahead == 'c') ADVANCE(299);
      if (lookahead == 'r') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(427);
      if (lookahead == 'e') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(427);
      if (lookahead == 'e') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(361);
      if (lookahead == 'n') ADVANCE(231);
      if (lookahead == 'o') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(361);
      if (lookahead == 'n') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(428);
      if (lookahead == 'i') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(383);
      if (lookahead == 'g') ADVANCE(331);
      if (lookahead == 's') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(406);
      if (lookahead == 'o') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(235);
      if (lookahead == 'p') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(326);
      if (lookahead == 'm') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(328);
      if (lookahead == 'm') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'k') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'k') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(325);
      if (lookahead == 't') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(420);
      if (lookahead == 's') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(422);
      if (lookahead == 'y') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'q') ADVANCE(421);
      if (lookahead == 't') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'q') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'q') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'w') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'w') ADVANCE(380);
      if (lookahead == 'x') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__ident_immediate_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
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
  [74] = {.lex_state = 160},
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
  [87] = {.lex_state = 169},
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
  [107] = {.lex_state = 169},
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
  [126] = {.lex_state = 169},
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
  [165] = {.lex_state = 170},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 168},
  [168] = {.lex_state = 161},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 161},
  [171] = {.lex_state = 162},
  [172] = {.lex_state = 168},
  [173] = {.lex_state = 161},
  [174] = {.lex_state = 162},
  [175] = {.lex_state = 162},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
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
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 163},
  [215] = {.lex_state = 163},
  [216] = {.lex_state = 163},
  [217] = {.lex_state = 165},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 163},
  [220] = {.lex_state = 163},
  [221] = {.lex_state = 163},
  [222] = {.lex_state = 163},
  [223] = {.lex_state = 163},
  [224] = {.lex_state = 163},
  [225] = {.lex_state = 163},
  [226] = {.lex_state = 163},
  [227] = {.lex_state = 163},
  [228] = {.lex_state = 163},
  [229] = {.lex_state = 163},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 163},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 163},
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
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 163},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 163},
  [256] = {.lex_state = 163},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
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
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT_LBRACE] = ACTIONS(1),
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
    [sym_stmt] = STATE(190),
    [sym_let_stmt] = STATE(182),
    [sym_assign_stmt] = STATE(182),
    [sym_for_stmt] = STATE(182),
    [sym_return_stmt] = STATE(182),
    [sym__expr] = STATE(132),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym_stmt] = STATE(211),
    [sym_let_stmt] = STATE(182),
    [sym_assign_stmt] = STATE(182),
    [sym_for_stmt] = STATE(182),
    [sym_return_stmt] = STATE(182),
    [sym__expr] = STATE(132),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym_stmt] = STATE(211),
    [sym_let_stmt] = STATE(182),
    [sym_assign_stmt] = STATE(182),
    [sym_for_stmt] = STATE(182),
    [sym_return_stmt] = STATE(182),
    [sym__expr] = STATE(132),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
    [ts_builtin_sym_end] = ACTIONS(47),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym_stmt] = STATE(211),
    [sym_let_stmt] = STATE(182),
    [sym_assign_stmt] = STATE(182),
    [sym_for_stmt] = STATE(182),
    [sym_return_stmt] = STATE(182),
    [sym__expr] = STATE(132),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym_stmt] = STATE(211),
    [sym_let_stmt] = STATE(182),
    [sym_assign_stmt] = STATE(182),
    [sym_for_stmt] = STATE(182),
    [sym_return_stmt] = STATE(182),
    [sym__expr] = STATE(132),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym_stmt] = STATE(211),
    [sym_let_stmt] = STATE(182),
    [sym_assign_stmt] = STATE(182),
    [sym_for_stmt] = STATE(182),
    [sym_return_stmt] = STATE(182),
    [sym__expr] = STATE(132),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym_stmt] = STATE(211),
    [sym_let_stmt] = STATE(182),
    [sym_assign_stmt] = STATE(182),
    [sym_for_stmt] = STATE(182),
    [sym_return_stmt] = STATE(182),
    [sym__expr] = STATE(132),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym_stmt] = STATE(211),
    [sym_let_stmt] = STATE(182),
    [sym_assign_stmt] = STATE(182),
    [sym_for_stmt] = STATE(182),
    [sym_return_stmt] = STATE(182),
    [sym__expr] = STATE(132),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym_stmt] = STATE(211),
    [sym_let_stmt] = STATE(182),
    [sym_assign_stmt] = STATE(182),
    [sym_for_stmt] = STATE(182),
    [sym_return_stmt] = STATE(182),
    [sym__expr] = STATE(132),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym_stmt] = STATE(211),
    [sym_let_stmt] = STATE(182),
    [sym_assign_stmt] = STATE(182),
    [sym_for_stmt] = STATE(182),
    [sym_return_stmt] = STATE(182),
    [sym__expr] = STATE(132),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym_stmt] = STATE(193),
    [sym_let_stmt] = STATE(182),
    [sym_assign_stmt] = STATE(182),
    [sym_for_stmt] = STATE(182),
    [sym_return_stmt] = STATE(182),
    [sym__expr] = STATE(132),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym_let_stmt] = STATE(182),
    [sym_assign_stmt] = STATE(182),
    [sym_for_stmt] = STATE(182),
    [sym_return_stmt] = STATE(182),
    [sym__expr] = STATE(132),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym_let_stmt] = STATE(182),
    [sym_assign_stmt] = STATE(182),
    [sym_for_stmt] = STATE(182),
    [sym_return_stmt] = STATE(182),
    [sym__expr] = STATE(132),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym_stmt] = STATE(196),
    [sym_let_stmt] = STATE(182),
    [sym_assign_stmt] = STATE(182),
    [sym_for_stmt] = STATE(182),
    [sym_return_stmt] = STATE(182),
    [sym__expr] = STATE(132),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym_stmt] = STATE(208),
    [sym_let_stmt] = STATE(182),
    [sym_assign_stmt] = STATE(182),
    [sym_for_stmt] = STATE(182),
    [sym_return_stmt] = STATE(182),
    [sym__expr] = STATE(132),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym_stmt] = STATE(203),
    [sym_let_stmt] = STATE(182),
    [sym_assign_stmt] = STATE(182),
    [sym_for_stmt] = STATE(182),
    [sym_return_stmt] = STATE(182),
    [sym__expr] = STATE(132),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(65),
    [anon_sym_fn] = ACTIONS(67),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym_ident] = ACTIONS(69),
  },
  [18] = {
    [sym__expr] = STATE(156),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym_ident] = ACTIONS(77),
  },
  [19] = {
    [sym__expr] = STATE(156),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym_ident] = ACTIONS(77),
  },
  [20] = {
    [sym__expr] = STATE(156),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym_ident] = ACTIONS(77),
  },
  [21] = {
    [sym_builtin_range] = STATE(249),
    [sym__expr] = STATE(163),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_ATrange] = ACTIONS(83),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(156),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym_ident] = ACTIONS(77),
  },
  [23] = {
    [sym__expr] = STATE(156),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(87),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym_ident] = ACTIONS(77),
  },
  [24] = {
    [sym__expr] = STATE(156),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym_ident] = ACTIONS(77),
  },
  [25] = {
    [sym__expr] = STATE(156),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym_ident] = ACTIONS(77),
  },
  [26] = {
    [sym__expr] = STATE(156),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(93),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym_ident] = ACTIONS(77),
  },
  [27] = {
    [sym__expr] = STATE(156),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym_ident] = ACTIONS(77),
  },
  [28] = {
    [sym__expr] = STATE(156),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym_ident] = ACTIONS(77),
  },
  [29] = {
    [sym__expr] = STATE(139),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(156),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_expr_string_token3] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_expr_nil] = ACTIONS(27),
    [sym_expr_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym_ident] = ACTIONS(77),
  },
  [31] = {
    [sym__expr] = STATE(155),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(155),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(144),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(105),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(155),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(107),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(155),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(109),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(90),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(93),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(98),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(152),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(88),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(133),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(140),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(162),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(138),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(158),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(153),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(157),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(161),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(149),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(146),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(151),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(145),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(143),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(91),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(92),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(155),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(94),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(95),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(96),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(97),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(150),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(164),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(154),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(165),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(142),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(135),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(137),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(159),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(160),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(89),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(147),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    [sym__expr] = STATE(134),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
  [74] = {
    [sym__expr] = STATE(148),
    [sym_expr_binop] = STATE(116),
    [sym_expr_unop] = STATE(116),
    [sym_expr_path] = STATE(77),
    [sym_expr_index] = STATE(75),
    [sym_expr_string] = STATE(116),
    [sym_expr_tag] = STATE(116),
    [sym_expr_bool] = STATE(116),
    [sym_expr_table] = STATE(116),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(116),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(116),
    [sym_fn_call] = STATE(106),
    [sym_builtin_fn] = STATE(167),
    [sym_meth_call] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_DOT_LBRACE] = ACTIONS(35),
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
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      sym_expr_string,
    ACTIONS(115), 7,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
    ACTIONS(111), 18,
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
    STATE(78), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(119), 7,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
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
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      sym_expr_string,
    ACTIONS(115), 7,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
    ACTIONS(111), 18,
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
    ACTIONS(125), 1,
      anon_sym_DOT,
    STATE(78), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(123), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LBRACK,
    ACTIONS(121), 22,
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
    ACTIONS(130), 7,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
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
    ACTIONS(134), 7,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
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
    ACTIONS(138), 7,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
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
    ACTIONS(142), 7,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
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
    ACTIONS(146), 7,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
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
    ACTIONS(150), 7,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
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
    ACTIONS(123), 7,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
    ACTIONS(121), 22,
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
    ACTIONS(154), 7,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
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
    ACTIONS(158), 7,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
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
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_expr_string_token3,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DASH_GT,
  [511] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(162), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(160), 19,
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
  [549] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(168), 1,
      anon_sym_EQ,
    ACTIONS(172), 1,
      anon_sym_or,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(194), 1,
      anon_sym_else,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(170), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(166), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [615] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_or,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(200), 1,
      anon_sym_EQ,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(198), 11,
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
  [673] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(200), 1,
      anon_sym_EQ,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(198), 12,
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
  [729] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(200), 1,
      anon_sym_EQ,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(198), 13,
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
  [783] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(200), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(198), 15,
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
  [833] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(200), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(198), 16,
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
  [881] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(200), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(198), 17,
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
  [925] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(200), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(198), 18,
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
  [965] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(200), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
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
  [1003] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_or,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    ACTIONS(204), 1,
      anon_sym_EQ,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(170), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(202), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_else,
  [1067] = 3,
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
  [1100] = 3,
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
  [1133] = 3,
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
  [1166] = 3,
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
  [1199] = 3,
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
  [1232] = 3,
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
  [1265] = 3,
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
  [1298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(111), 19,
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
  [1331] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      aux_sym_expr_string_token3,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_COLON,
    STATE(131), 1,
      sym_expr_string,
    ACTIONS(115), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
    ACTIONS(111), 13,
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
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
  [1376] = 3,
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
  [1409] = 3,
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
  [1442] = 3,
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
  [1475] = 3,
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
  [1508] = 3,
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
  [1541] = 3,
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
  [1574] = 3,
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
  [1607] = 3,
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
  [1640] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(111), 19,
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
  [1673] = 3,
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
  [1706] = 3,
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
  [1739] = 3,
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
  [1772] = 3,
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
  [1805] = 3,
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
  [1838] = 3,
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
  [1871] = 3,
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
  [1904] = 3,
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
  [1937] = 3,
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
  [1970] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      aux_sym_expr_string_token3,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      anon_sym_COLON,
    STATE(131), 1,
      sym_expr_string,
    ACTIONS(115), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
    ACTIONS(111), 13,
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
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
  [2015] = 3,
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
  [2048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(310), 19,
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
  [2081] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(314), 19,
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
  [2114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(318), 19,
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
  [2147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(322), 19,
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
  [2180] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_or,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    ACTIONS(328), 1,
      anon_sym_EQ,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(170), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(326), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2240] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_or,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    STATE(212), 1,
      aux_sym_expr_table_repeat1,
    ACTIONS(170), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2301] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_or,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    ACTIONS(332), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    STATE(184), 1,
      aux_sym_expr_table_repeat1,
    ACTIONS(170), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2362] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_or,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(170), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(334), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2419] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_or,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(338), 1,
      anon_sym_RBRACE,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    STATE(200), 1,
      aux_sym_expr_table_repeat1,
    ACTIONS(170), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2480] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_or,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(170), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(340), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2537] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_or,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(170), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(342), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2594] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_or,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    STATE(205), 1,
      aux_sym__call_args_repeat1,
    ACTIONS(170), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2655] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_or,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(170), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(348), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2712] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_or,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(170), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(350), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2769] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_or,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    STATE(187), 1,
      aux_sym_expr_table_repeat1,
    ACTIONS(170), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2830] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_or,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    STATE(195), 1,
      aux_sym_expr_table_repeat1,
    ACTIONS(170), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2891] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_or,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    ACTIONS(358), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    STATE(185), 1,
      aux_sym__call_args_repeat1,
    ACTIONS(170), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2952] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_or,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(170), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(360), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [3009] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_or,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    ACTIONS(362), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    STATE(198), 1,
      aux_sym_expr_table_repeat1,
    ACTIONS(170), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3070] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_or,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(170), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(364), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [3127] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_or,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(170), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(366), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [3184] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_or,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    STATE(192), 1,
      aux_sym_expr_table_repeat1,
    ACTIONS(170), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3245] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_or,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(170), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(370), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3301] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_or,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(170), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(372), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3357] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_or,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(170), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(374), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3413] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_or,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(170), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(376), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3469] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_or,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(170), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(378), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3525] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_or,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(170), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(380), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3581] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_or,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(170), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(382), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3637] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_or,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(170), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(384), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3693] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_or,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    ACTIONS(386), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(170), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3748] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_or,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(170), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3803] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_or,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(170), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3858] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_or,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(170), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3913] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_or,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(170), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3968] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_or,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(170), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4023] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_or,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    ACTIONS(398), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(170), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4078] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_or,
    ACTIONS(174), 1,
      anon_sym_and,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      anon_sym_PIPE_GT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_DASH_GT,
    ACTIONS(400), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(170), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(176), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4133] = 4,
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
  [4148] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      aux_sym_expr_string_token3,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      sym_expr_string,
  [4167] = 5,
    ACTIONS(408), 1,
      sym_comment,
    ACTIONS(410), 1,
      aux_sym_expr_string_token1,
    ACTIONS(413), 1,
      anon_sym_DQUOTE2,
    ACTIONS(415), 1,
      sym_string_esc,
    STATE(168), 1,
      aux_sym_expr_string_repeat1,
  [4183] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_EQ,
    ACTIONS(342), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4195] = 5,
    ACTIONS(408), 1,
      sym_comment,
    ACTIONS(420), 1,
      aux_sym_expr_string_token1,
    ACTIONS(422), 1,
      anon_sym_DQUOTE2,
    ACTIONS(424), 1,
      sym_string_esc,
    STATE(173), 1,
      aux_sym_expr_string_repeat1,
  [4211] = 5,
    ACTIONS(408), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_SQUOTE2,
    ACTIONS(426), 1,
      aux_sym_expr_string_token2,
    ACTIONS(428), 1,
      sym_string_esc,
    STATE(174), 1,
      aux_sym_expr_string_repeat2,
  [4227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 4,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_expr_string_token3,
  [4237] = 5,
    ACTIONS(408), 1,
      sym_comment,
    ACTIONS(432), 1,
      aux_sym_expr_string_token1,
    ACTIONS(434), 1,
      anon_sym_DQUOTE2,
    ACTIONS(436), 1,
      sym_string_esc,
    STATE(168), 1,
      aux_sym_expr_string_repeat1,
  [4253] = 5,
    ACTIONS(408), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_SQUOTE2,
    ACTIONS(438), 1,
      aux_sym_expr_string_token2,
    ACTIONS(440), 1,
      sym_string_esc,
    STATE(175), 1,
      aux_sym_expr_string_repeat2,
  [4269] = 5,
    ACTIONS(408), 1,
      sym_comment,
    ACTIONS(442), 1,
      aux_sym_expr_string_token2,
    ACTIONS(445), 1,
      anon_sym_SQUOTE2,
    ACTIONS(447), 1,
      sym_string_esc,
    STATE(175), 1,
      aux_sym_expr_string_repeat2,
  [4285] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    STATE(176), 1,
      aux_sym__block_body_repeat1,
    ACTIONS(450), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
  [4299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_EQ,
    ACTIONS(334), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_EQ,
    ACTIONS(340), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_EQ,
    ACTIONS(459), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4335] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym__decl_args_repeat1,
  [4348] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(467), 1,
      anon_sym_SEMI,
    STATE(176), 1,
      aux_sym__block_body_repeat1,
  [4361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4370] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_RPAREN,
    ACTIONS(471), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym__decl_args_repeat1,
  [4383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(473), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym_expr_table_repeat1,
  [4396] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    ACTIONS(475), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      aux_sym__call_args_repeat1,
  [4409] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_SEMI,
    ACTIONS(479), 1,
      anon_sym_RBRACE,
    STATE(188), 1,
      aux_sym__block_body_repeat1,
  [4422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    ACTIONS(481), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym_expr_table_repeat1,
  [4435] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(483), 1,
      anon_sym_SEMI,
    STATE(176), 1,
      aux_sym__block_body_repeat1,
  [4448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      aux_sym__decl_args_repeat1,
  [4461] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      ts_builtin_sym_end,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(197), 1,
      aux_sym__block_body_repeat1,
  [4474] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      aux_sym__call_args_repeat1,
  [4487] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym_expr_table_repeat1,
  [4500] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(483), 1,
      anon_sym_SEMI,
    STATE(202), 1,
      aux_sym__block_body_repeat1,
  [4513] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
    ACTIONS(498), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      aux_sym__decl_args_repeat1,
  [4526] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym_expr_table_repeat1,
  [4539] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_SEMI,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
    STATE(207), 1,
      aux_sym__block_body_repeat1,
  [4552] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(505), 1,
      anon_sym_SEMI,
    STATE(176), 1,
      aux_sym__block_body_repeat1,
  [4565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym_expr_table_repeat1,
  [4578] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    STATE(213), 1,
      aux_sym__decl_args_repeat1,
  [4591] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym_expr_table_repeat1,
  [4604] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_RPAREN,
    ACTIONS(515), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      aux_sym__decl_args_repeat1,
  [4617] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(517), 1,
      anon_sym_SEMI,
    STATE(176), 1,
      aux_sym__block_body_repeat1,
  [4630] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(517), 1,
      anon_sym_SEMI,
    STATE(210), 1,
      aux_sym__block_body_repeat1,
  [4643] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym__decl_args_repeat1,
  [4656] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    ACTIONS(523), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      aux_sym__call_args_repeat1,
  [4669] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
    ACTIONS(527), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      aux_sym__decl_args_repeat1,
  [4682] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(529), 1,
      anon_sym_SEMI,
    STATE(176), 1,
      aux_sym__block_body_repeat1,
  [4695] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    ACTIONS(531), 1,
      anon_sym_SEMI,
    STATE(181), 1,
      aux_sym__block_body_repeat1,
  [4708] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_RBRACE,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym_expr_table_repeat1,
  [4721] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    ACTIONS(531), 1,
      anon_sym_SEMI,
    STATE(176), 1,
      aux_sym__block_body_repeat1,
  [4734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4743] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    ACTIONS(362), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym_expr_table_repeat1,
  [4756] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      aux_sym__decl_args_repeat1,
  [4769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
    ACTIONS(542), 1,
      sym_ident,
  [4779] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_RPAREN,
    ACTIONS(546), 1,
      sym_ident,
  [4789] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
    ACTIONS(550), 1,
      sym_ident,
  [4799] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      aux_sym__ident_immediate_token1,
    STATE(111), 1,
      sym__ident_immediate,
  [4809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4817] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
    ACTIONS(542), 1,
      sym_ident,
  [4827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      sym_ident,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
  [4837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
    ACTIONS(542), 1,
      sym_ident,
  [4847] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
    ACTIONS(558), 1,
      sym_ident,
  [4857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_LPAREN,
    ACTIONS(562), 1,
      sym_ident,
  [4867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      sym_ident,
  [4877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
    ACTIONS(542), 1,
      sym_ident,
  [4887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_RPAREN,
    ACTIONS(542), 1,
      sym_ident,
  [4897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
    ACTIONS(568), 1,
      sym_ident,
  [4907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      sym_ident,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
  [4917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      sym_ident,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
  [4927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_COLON,
  [4934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      sym_ident,
  [4941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_LBRACE,
  [4948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_in,
  [4955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym_ident,
  [4962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_COLON,
  [4969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_LPAREN,
  [4976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_COLON,
  [4983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_COLON,
  [4990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LBRACE,
  [4997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_RPAREN,
  [5004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_LPAREN,
  [5011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
  [5018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_COLON,
  [5025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
  [5032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_COLON,
  [5039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_COLON,
  [5046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COLON,
  [5053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      sym_ident,
  [5060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
  [5067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      ts_builtin_sym_end,
  [5074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_LBRACE,
  [5081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_COLON,
  [5088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_LPAREN,
  [5095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_LPAREN,
  [5102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      sym_ident,
  [5109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      sym_ident,
  [5116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_COLON,
  [5123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_LPAREN,
  [5130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(75)] = 0,
  [SMALL_STATE(76)] = 48,
  [SMALL_STATE(77)] = 88,
  [SMALL_STATE(78)] = 136,
  [SMALL_STATE(79)] = 178,
  [SMALL_STATE(80)] = 215,
  [SMALL_STATE(81)] = 252,
  [SMALL_STATE(82)] = 289,
  [SMALL_STATE(83)] = 326,
  [SMALL_STATE(84)] = 363,
  [SMALL_STATE(85)] = 400,
  [SMALL_STATE(86)] = 437,
  [SMALL_STATE(87)] = 474,
  [SMALL_STATE(88)] = 511,
  [SMALL_STATE(89)] = 549,
  [SMALL_STATE(90)] = 615,
  [SMALL_STATE(91)] = 673,
  [SMALL_STATE(92)] = 729,
  [SMALL_STATE(93)] = 783,
  [SMALL_STATE(94)] = 833,
  [SMALL_STATE(95)] = 881,
  [SMALL_STATE(96)] = 925,
  [SMALL_STATE(97)] = 965,
  [SMALL_STATE(98)] = 1003,
  [SMALL_STATE(99)] = 1067,
  [SMALL_STATE(100)] = 1100,
  [SMALL_STATE(101)] = 1133,
  [SMALL_STATE(102)] = 1166,
  [SMALL_STATE(103)] = 1199,
  [SMALL_STATE(104)] = 1232,
  [SMALL_STATE(105)] = 1265,
  [SMALL_STATE(106)] = 1298,
  [SMALL_STATE(107)] = 1331,
  [SMALL_STATE(108)] = 1376,
  [SMALL_STATE(109)] = 1409,
  [SMALL_STATE(110)] = 1442,
  [SMALL_STATE(111)] = 1475,
  [SMALL_STATE(112)] = 1508,
  [SMALL_STATE(113)] = 1541,
  [SMALL_STATE(114)] = 1574,
  [SMALL_STATE(115)] = 1607,
  [SMALL_STATE(116)] = 1640,
  [SMALL_STATE(117)] = 1673,
  [SMALL_STATE(118)] = 1706,
  [SMALL_STATE(119)] = 1739,
  [SMALL_STATE(120)] = 1772,
  [SMALL_STATE(121)] = 1805,
  [SMALL_STATE(122)] = 1838,
  [SMALL_STATE(123)] = 1871,
  [SMALL_STATE(124)] = 1904,
  [SMALL_STATE(125)] = 1937,
  [SMALL_STATE(126)] = 1970,
  [SMALL_STATE(127)] = 2015,
  [SMALL_STATE(128)] = 2048,
  [SMALL_STATE(129)] = 2081,
  [SMALL_STATE(130)] = 2114,
  [SMALL_STATE(131)] = 2147,
  [SMALL_STATE(132)] = 2180,
  [SMALL_STATE(133)] = 2240,
  [SMALL_STATE(134)] = 2301,
  [SMALL_STATE(135)] = 2362,
  [SMALL_STATE(136)] = 2419,
  [SMALL_STATE(137)] = 2480,
  [SMALL_STATE(138)] = 2537,
  [SMALL_STATE(139)] = 2594,
  [SMALL_STATE(140)] = 2655,
  [SMALL_STATE(141)] = 2712,
  [SMALL_STATE(142)] = 2769,
  [SMALL_STATE(143)] = 2830,
  [SMALL_STATE(144)] = 2891,
  [SMALL_STATE(145)] = 2952,
  [SMALL_STATE(146)] = 3009,
  [SMALL_STATE(147)] = 3070,
  [SMALL_STATE(148)] = 3127,
  [SMALL_STATE(149)] = 3184,
  [SMALL_STATE(150)] = 3245,
  [SMALL_STATE(151)] = 3301,
  [SMALL_STATE(152)] = 3357,
  [SMALL_STATE(153)] = 3413,
  [SMALL_STATE(154)] = 3469,
  [SMALL_STATE(155)] = 3525,
  [SMALL_STATE(156)] = 3581,
  [SMALL_STATE(157)] = 3637,
  [SMALL_STATE(158)] = 3693,
  [SMALL_STATE(159)] = 3748,
  [SMALL_STATE(160)] = 3803,
  [SMALL_STATE(161)] = 3858,
  [SMALL_STATE(162)] = 3913,
  [SMALL_STATE(163)] = 3968,
  [SMALL_STATE(164)] = 4023,
  [SMALL_STATE(165)] = 4078,
  [SMALL_STATE(166)] = 4133,
  [SMALL_STATE(167)] = 4148,
  [SMALL_STATE(168)] = 4167,
  [SMALL_STATE(169)] = 4183,
  [SMALL_STATE(170)] = 4195,
  [SMALL_STATE(171)] = 4211,
  [SMALL_STATE(172)] = 4227,
  [SMALL_STATE(173)] = 4237,
  [SMALL_STATE(174)] = 4253,
  [SMALL_STATE(175)] = 4269,
  [SMALL_STATE(176)] = 4285,
  [SMALL_STATE(177)] = 4299,
  [SMALL_STATE(178)] = 4311,
  [SMALL_STATE(179)] = 4323,
  [SMALL_STATE(180)] = 4335,
  [SMALL_STATE(181)] = 4348,
  [SMALL_STATE(182)] = 4361,
  [SMALL_STATE(183)] = 4370,
  [SMALL_STATE(184)] = 4383,
  [SMALL_STATE(185)] = 4396,
  [SMALL_STATE(186)] = 4409,
  [SMALL_STATE(187)] = 4422,
  [SMALL_STATE(188)] = 4435,
  [SMALL_STATE(189)] = 4448,
  [SMALL_STATE(190)] = 4461,
  [SMALL_STATE(191)] = 4474,
  [SMALL_STATE(192)] = 4487,
  [SMALL_STATE(193)] = 4500,
  [SMALL_STATE(194)] = 4513,
  [SMALL_STATE(195)] = 4526,
  [SMALL_STATE(196)] = 4539,
  [SMALL_STATE(197)] = 4552,
  [SMALL_STATE(198)] = 4565,
  [SMALL_STATE(199)] = 4578,
  [SMALL_STATE(200)] = 4591,
  [SMALL_STATE(201)] = 4604,
  [SMALL_STATE(202)] = 4617,
  [SMALL_STATE(203)] = 4630,
  [SMALL_STATE(204)] = 4643,
  [SMALL_STATE(205)] = 4656,
  [SMALL_STATE(206)] = 4669,
  [SMALL_STATE(207)] = 4682,
  [SMALL_STATE(208)] = 4695,
  [SMALL_STATE(209)] = 4708,
  [SMALL_STATE(210)] = 4721,
  [SMALL_STATE(211)] = 4734,
  [SMALL_STATE(212)] = 4743,
  [SMALL_STATE(213)] = 4756,
  [SMALL_STATE(214)] = 4769,
  [SMALL_STATE(215)] = 4779,
  [SMALL_STATE(216)] = 4789,
  [SMALL_STATE(217)] = 4799,
  [SMALL_STATE(218)] = 4809,
  [SMALL_STATE(219)] = 4817,
  [SMALL_STATE(220)] = 4827,
  [SMALL_STATE(221)] = 4837,
  [SMALL_STATE(222)] = 4847,
  [SMALL_STATE(223)] = 4857,
  [SMALL_STATE(224)] = 4867,
  [SMALL_STATE(225)] = 4877,
  [SMALL_STATE(226)] = 4887,
  [SMALL_STATE(227)] = 4897,
  [SMALL_STATE(228)] = 4907,
  [SMALL_STATE(229)] = 4917,
  [SMALL_STATE(230)] = 4927,
  [SMALL_STATE(231)] = 4934,
  [SMALL_STATE(232)] = 4941,
  [SMALL_STATE(233)] = 4948,
  [SMALL_STATE(234)] = 4955,
  [SMALL_STATE(235)] = 4962,
  [SMALL_STATE(236)] = 4969,
  [SMALL_STATE(237)] = 4976,
  [SMALL_STATE(238)] = 4983,
  [SMALL_STATE(239)] = 4990,
  [SMALL_STATE(240)] = 4997,
  [SMALL_STATE(241)] = 5004,
  [SMALL_STATE(242)] = 5011,
  [SMALL_STATE(243)] = 5018,
  [SMALL_STATE(244)] = 5025,
  [SMALL_STATE(245)] = 5032,
  [SMALL_STATE(246)] = 5039,
  [SMALL_STATE(247)] = 5046,
  [SMALL_STATE(248)] = 5053,
  [SMALL_STATE(249)] = 5060,
  [SMALL_STATE(250)] = 5067,
  [SMALL_STATE(251)] = 5074,
  [SMALL_STATE(252)] = 5081,
  [SMALL_STATE(253)] = 5088,
  [SMALL_STATE(254)] = 5095,
  [SMALL_STATE(255)] = 5102,
  [SMALL_STATE(256)] = 5109,
  [SMALL_STATE(257)] = 5116,
  [SMALL_STATE(258)] = 5123,
  [SMALL_STATE(259)] = 5130,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_path, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_path, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_path_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_path_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_path_repeat1, 2), SHIFT_REPEAT(256),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_func, 11),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_func, 11),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_func, 10),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_func, 10),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_func, 6),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_func, 6),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_func, 9),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_func, 9),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_func, 8),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_func, 8),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_func, 7),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_func, 7),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_paren, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_paren, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_index, 4),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_index, 4),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_unop, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_unop, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_if, 5),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_if, 5),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_binop, 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_binop, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_if, 7),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_if, 7),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_string, 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_string, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 10),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 10),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 13),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 13),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 11),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 11),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 8),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 8),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 7),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 7),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 4),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meth_call, 6),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meth_call, 6),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 6),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_call, 6),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 3),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_call, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_tag, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_tag, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 6),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 6),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meth_call, 7),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meth_call, 7),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_block, 4),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_block, 4),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 9),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 9),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 4),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_call, 4),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_string, 2),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_string, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_block, 3),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_block, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_bool, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_bool, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 2),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_string, 3),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_string, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meth_call, 5),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meth_call, 5),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meth_call, 8),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meth_call, 8),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 5),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_call, 5),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_block, 5),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_block, 5),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 12),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 12),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 5),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 5),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 2),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_call, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 1),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 4),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 6),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 7),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 7),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_stmt, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_stmt, 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 8),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 9),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_table_repeat1, 8),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_table_repeat1, 6),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_table_repeat1, 9),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_table_repeat1, 4),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_table_repeat1, 10),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__call_args_repeat1, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_table_repeat1, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_table_repeat1, 7),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_string_repeat1, 2), SHIFT_REPEAT(168),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_string_repeat1, 2),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_string_repeat1, 2), SHIFT_REPEAT(168),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_fn, 1),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_string_repeat2, 2), SHIFT_REPEAT(175),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_string_repeat2, 2),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_string_repeat2, 2), SHIFT_REPEAT(175),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2), SHIFT_REPEAT(12),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 5),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__call_args_repeat1, 2), SHIFT_REPEAT(57),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_args_repeat1, 2),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decl_args_repeat1, 2), SHIFT_REPEAT(255),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_table_repeat1, 2), SHIFT_REPEAT(30),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_range, 6),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [612] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
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
