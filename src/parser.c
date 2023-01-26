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
#define STATE_COUNT 157
#define LARGE_STATE_COUNT 44
#define SYMBOL_COUNT 102
#define ALIAS_COUNT 0
#define TOKEN_COUNT 74
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
  sym_break_stmt = 9,
  anon_sym_return = 10,
  anon_sym_EQ_EQ = 11,
  anon_sym_BANG_EQ = 12,
  anon_sym_or = 13,
  anon_sym_and = 14,
  anon_sym_GT = 15,
  anon_sym_GT_EQ = 16,
  anon_sym_LT = 17,
  anon_sym_LT_EQ = 18,
  anon_sym_DOT_DOT = 19,
  anon_sym_PLUS = 20,
  anon_sym_DASH = 21,
  anon_sym_STAR = 22,
  anon_sym_SLASH = 23,
  anon_sym_PIPE_GT = 24,
  anon_sym_BANG = 25,
  anon_sym_DOT = 26,
  anon_sym_DQUOTE = 27,
  aux_sym_expr_string_token1 = 28,
  anon_sym_DQUOTE2 = 29,
  anon_sym_SQUOTE = 30,
  aux_sym_expr_string_token2 = 31,
  anon_sym_SQUOTE2 = 32,
  sym_string_esc = 33,
  sym_expr_tag = 34,
  anon_sym_true = 35,
  anon_sym_false = 36,
  sym_expr_nil = 37,
  sym_expr_number = 38,
  anon_sym_LBRACE = 39,
  anon_sym_COMMA = 40,
  anon_sym_RBRACE = 41,
  anon_sym_LBRACK = 42,
  anon_sym_RBRACK = 43,
  anon_sym_DOT_LBRACE = 44,
  anon_sym_DOT_LPAREN = 45,
  anon_sym_if = 46,
  anon_sym_else = 47,
  sym_require = 48,
  anon_sym_assert = 49,
  anon_sym_collectgarbage = 50,
  anon_sym_error = 51,
  anon_sym_getfenv = 52,
  anon_sym_getmetatable = 53,
  anon_sym_ipairs = 54,
  anon_sym_loadstring = 55,
  anon_sym_newproxy = 56,
  anon_sym_next = 57,
  anon_sym_pairs = 58,
  anon_sym_pcall = 59,
  anon_sym_print = 60,
  anon_sym_rawequal = 61,
  anon_sym_rawget = 62,
  anon_sym_rawset = 63,
  anon_sym_select = 64,
  anon_sym_setfenv = 65,
  anon_sym_setmetatable = 66,
  anon_sym_tonumber = 67,
  anon_sym_tostring = 68,
  anon_sym_type = 69,
  anon_sym_unpack = 70,
  anon_sym_xpcall = 71,
  anon_sym_COLON = 72,
  aux_sym_ident_token1 = 73,
  sym_source_file = 74,
  sym_stmt = 75,
  sym_let_stmt = 76,
  sym_assign_stmt = 77,
  sym_for_stmt = 78,
  sym_return_stmt = 79,
  sym__expr = 80,
  sym_expr_binop = 81,
  sym_expr_unop = 82,
  sym_expr_path = 83,
  sym_expr_string = 84,
  sym_expr_bool = 85,
  sym_expr_table = 86,
  sym_expr_paren = 87,
  sym_expr_block = 88,
  sym_expr_func = 89,
  sym_expr_if = 90,
  sym_fn_call = 91,
  sym_builtin_fn = 92,
  sym_meth_call = 93,
  sym_ident = 94,
  aux_sym__block_body_repeat1 = 95,
  aux_sym_expr_path_repeat1 = 96,
  aux_sym_expr_string_repeat1 = 97,
  aux_sym_expr_string_repeat2 = 98,
  aux_sym_expr_table_repeat1 = 99,
  aux_sym__call_args_repeat1 = 100,
  aux_sym__decl_args_repeat1 = 101,
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
  [anon_sym_COMMA] = ",",
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
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [anon_sym_COMMA] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(160)
      if (lookahead == '!') ADVANCE(193);
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '\'') ADVANCE(203);
      if (lookahead == '(') ADVANCE(171);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '*') ADVANCE(189);
      if (lookahead == '+') ADVANCE(187);
      if (lookahead == ',') ADVANCE(214);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(194);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == ':') ADVANCE(271);
      if (lookahead == ';') ADVANCE(164);
      if (lookahead == '<') ADVANCE(184);
      if (lookahead == '=') ADVANCE(168);
      if (lookahead == '>') ADVANCE(182);
      if (lookahead == '[') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(159);
      if (lookahead == ']') ADVANCE(217);
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'b') ADVANCE(113);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'g') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'l') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(107);
      if (lookahead == 'p') ADVANCE(6);
      if (lookahead == 'r') ADVANCE(7);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == 'u') ADVANCE(93);
      if (lookahead == 'x') ADVANCE(101);
      if (lookahead == '{') ADVANCE(213);
      if (lookahead == '|') ADVANCE(5);
      if (lookahead == '}') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(219);
      if (lookahead == '{') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(179);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(191);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == 'c') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(13);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(53);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(79);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(80);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(181);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(127);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == 'g') ADVANCE(51);
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 56:
      if (lookahead == 'f') ADVANCE(220);
      if (lookahead == 'n') ADVANCE(172);
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 58:
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(263);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(237);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(16);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(43);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 69:
      if (lookahead == 'k') ADVANCE(174);
      END_STATE();
    case 70:
      if (lookahead == 'k') ADVANCE(267);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(245);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(269);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(249);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(45);
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(125);
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(143);
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(145);
      if (lookahead == 'y') ADVANCE(103);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(12);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(112);
      END_STATE();
    case 105:
      if (lookahead == 'q') ADVANCE(144);
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 106:
      if (lookahead == 'q') ADVANCE(146);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 122:
      if (lookahead == 's') ADVANCE(243);
      END_STATE();
    case 123:
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 124:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 143:
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 144:
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 145:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 146:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 147:
      if (lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 148:
      if (lookahead == 'v') ADVANCE(231);
      END_STATE();
    case 149:
      if (lookahead == 'v') ADVANCE(257);
      END_STATE();
    case 150:
      if (lookahead == 'w') ADVANCE(36);
      END_STATE();
    case 151:
      if (lookahead == 'w') ADVANCE(104);
      if (lookahead == 'x') ADVANCE(130);
      END_STATE();
    case 152:
      if (lookahead == 'x') ADVANCE(153);
      END_STATE();
    case 153:
      if (lookahead == 'y') ADVANCE(239);
      END_STATE();
    case 154:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(154)
      if (lookahead == '!') ADVANCE(192);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '\'') ADVANCE(200);
      if (lookahead == '(') ADVANCE(171);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '[') ADVANCE(216);
      if (lookahead == 'a') ADVANCE(387);
      if (lookahead == 'c') ADVANCE(358);
      if (lookahead == 'e') ADVANCE(374);
      if (lookahead == 'f') ADVANCE(278);
      if (lookahead == 'g') ADVANCE(299);
      if (lookahead == 'i') ADVANCE(322);
      if (lookahead == 'l') ADVANCE(361);
      if (lookahead == 'n') ADVANCE(300);
      if (lookahead == 'p') ADVANCE(272);
      if (lookahead == 'r') ADVANCE(274);
      if (lookahead == 's') ADVANCE(301);
      if (lookahead == 't') ADVANCE(359);
      if (lookahead == 'u') ADVANCE(354);
      if (lookahead == 'x') ADVANCE(363);
      if (lookahead == '{') ADVANCE(213);
      if (lookahead == '}') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 155:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(197);
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '\\') ADVANCE(159);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 156:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead == '\'') ADVANCE(203);
      if (lookahead == '/') ADVANCE(202);
      if (lookahead == '\\') ADVANCE(159);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 157:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(157)
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '/') ADVANCE(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 158:
      if (lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 159:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 160:
      if (eof) ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(160)
      if (lookahead == '!') ADVANCE(193);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '\'') ADVANCE(200);
      if (lookahead == '(') ADVANCE(171);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '*') ADVANCE(189);
      if (lookahead == '+') ADVANCE(187);
      if (lookahead == ',') ADVANCE(214);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(194);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == ':') ADVANCE(271);
      if (lookahead == ';') ADVANCE(164);
      if (lookahead == '<') ADVANCE(184);
      if (lookahead == '=') ADVANCE(168);
      if (lookahead == '>') ADVANCE(182);
      if (lookahead == '[') ADVANCE(216);
      if (lookahead == ']') ADVANCE(217);
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'b') ADVANCE(113);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'g') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'l') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(107);
      if (lookahead == 'p') ADVANCE(6);
      if (lookahead == 'r') ADVANCE(7);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == 'u') ADVANCE(93);
      if (lookahead == 'x') ADVANCE(101);
      if (lookahead == '{') ADVANCE(213);
      if (lookahead == '|') ADVANCE(5);
      if (lookahead == '}') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 161:
      if (eof) ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(161)
      if (lookahead == '!') ADVANCE(192);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '\'') ADVANCE(200);
      if (lookahead == '(') ADVANCE(171);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'a') ADVANCE(387);
      if (lookahead == 'b') ADVANCE(376);
      if (lookahead == 'c') ADVANCE(358);
      if (lookahead == 'e') ADVANCE(374);
      if (lookahead == 'f') ADVANCE(277);
      if (lookahead == 'g') ADVANCE(299);
      if (lookahead == 'i') ADVANCE(322);
      if (lookahead == 'l') ADVANCE(310);
      if (lookahead == 'n') ADVANCE(300);
      if (lookahead == 'p') ADVANCE(272);
      if (lookahead == 'r') ADVANCE(273);
      if (lookahead == 's') ADVANCE(301);
      if (lookahead == 't') ADVANCE(359);
      if (lookahead == 'u') ADVANCE(354);
      if (lookahead == 'x') ADVANCE(363);
      if (lookahead == '{') ADVANCE(213);
      if (lookahead == '}') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 162:
      if (eof) ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(162)
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '\'') ADVANCE(200);
      if (lookahead == '(') ADVANCE(171);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '*') ADVANCE(189);
      if (lookahead == '+') ADVANCE(187);
      if (lookahead == ',') ADVANCE(214);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(195);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == ':') ADVANCE(271);
      if (lookahead == ';') ADVANCE(164);
      if (lookahead == '<') ADVANCE(184);
      if (lookahead == '=') ADVANCE(168);
      if (lookahead == '>') ADVANCE(182);
      if (lookahead == ']') ADVANCE(217);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(107);
      if (lookahead == '|') ADVANCE(5);
      if (lookahead == '}') ADVANCE(215);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(178);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_break_stmt);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_break_stmt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(185);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_PIPE_GT);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(179);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '(') ADVANCE(219);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == '{') ADVANCE(218);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(186);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_expr_string_token1);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_expr_string_token1);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_expr_string_token2);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_expr_string_token2);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_string_esc);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_expr_tag);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_expr_nil);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_expr_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_expr_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_DOT_LBRACE);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_DOT_LPAREN);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_require);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_require);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_assert);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_collectgarbage);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_collectgarbage);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_error);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_getfenv);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_getfenv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_getmetatable);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_getmetatable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_ipairs);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_ipairs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_loadstring);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_loadstring);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_newproxy);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_newproxy);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_next);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_next);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_pairs);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_pairs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_pcall);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_pcall);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_print);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_print);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_rawequal);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_rawequal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_rawget);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_rawget);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_rawset);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_rawset);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_setfenv);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_setfenv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_setmetatable);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_setmetatable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_tonumber);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_tonumber);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_tostring);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_tostring);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_unpack);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_unpack);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_xpcall);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_xpcall);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(330);
      if (lookahead == 'c') ADVANCE(285);
      if (lookahead == 'r') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(413);
      if (lookahead == 'e') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(413);
      if (lookahead == 'e') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(347);
      if (lookahead == 'o') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'b') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'b') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'b') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'b') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'c') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'c') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'c') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'c') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'd') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(414);
      if (lookahead == 'i') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(369);
      if (lookahead == 'g') ADVANCE(317);
      if (lookahead == 's') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(392);
      if (lookahead == 'o') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'f') ADVANCE(221);
      if (lookahead == 'p') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'f') ADVANCE(312);
      if (lookahead == 'm') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'f') ADVANCE(314);
      if (lookahead == 'm') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'g') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'g') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'g') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'g') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'i') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'i') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'i') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'i') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'i') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'i') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'k') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'k') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(311);
      if (lookahead == 't') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'm') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(406);
      if (lookahead == 's') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'o') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'o') ADVANCE(356);
      if (lookahead == 'r') ADVANCE(408);
      if (lookahead == 'y') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'o') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'o') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'o') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'p') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'p') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'p') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'p') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'q') ADVANCE(407);
      if (lookahead == 't') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'q') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'q') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 's') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 's') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 's') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 's') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 's') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 's') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'u') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'u') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'u') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'u') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'u') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'v') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'v') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'w') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'w') ADVANCE(366);
      if (lookahead == 'x') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'x') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'y') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 161},
  [2] = {.lex_state = 161},
  [3] = {.lex_state = 161},
  [4] = {.lex_state = 161},
  [5] = {.lex_state = 161},
  [6] = {.lex_state = 161},
  [7] = {.lex_state = 161},
  [8] = {.lex_state = 161},
  [9] = {.lex_state = 161},
  [10] = {.lex_state = 161},
  [11] = {.lex_state = 161},
  [12] = {.lex_state = 161},
  [13] = {.lex_state = 161},
  [14] = {.lex_state = 161},
  [15] = {.lex_state = 154},
  [16] = {.lex_state = 154},
  [17] = {.lex_state = 154},
  [18] = {.lex_state = 154},
  [19] = {.lex_state = 154},
  [20] = {.lex_state = 154},
  [21] = {.lex_state = 154},
  [22] = {.lex_state = 154},
  [23] = {.lex_state = 154},
  [24] = {.lex_state = 154},
  [25] = {.lex_state = 154},
  [26] = {.lex_state = 154},
  [27] = {.lex_state = 154},
  [28] = {.lex_state = 154},
  [29] = {.lex_state = 154},
  [30] = {.lex_state = 154},
  [31] = {.lex_state = 154},
  [32] = {.lex_state = 154},
  [33] = {.lex_state = 154},
  [34] = {.lex_state = 154},
  [35] = {.lex_state = 154},
  [36] = {.lex_state = 154},
  [37] = {.lex_state = 154},
  [38] = {.lex_state = 154},
  [39] = {.lex_state = 154},
  [40] = {.lex_state = 154},
  [41] = {.lex_state = 154},
  [42] = {.lex_state = 154},
  [43] = {.lex_state = 154},
  [44] = {.lex_state = 162},
  [45] = {.lex_state = 162},
  [46] = {.lex_state = 162},
  [47] = {.lex_state = 162},
  [48] = {.lex_state = 162},
  [49] = {.lex_state = 162},
  [50] = {.lex_state = 162},
  [51] = {.lex_state = 162},
  [52] = {.lex_state = 162},
  [53] = {.lex_state = 162},
  [54] = {.lex_state = 162},
  [55] = {.lex_state = 162},
  [56] = {.lex_state = 162},
  [57] = {.lex_state = 162},
  [58] = {.lex_state = 162},
  [59] = {.lex_state = 162},
  [60] = {.lex_state = 162},
  [61] = {.lex_state = 162},
  [62] = {.lex_state = 162},
  [63] = {.lex_state = 162},
  [64] = {.lex_state = 162},
  [65] = {.lex_state = 162},
  [66] = {.lex_state = 162},
  [67] = {.lex_state = 162},
  [68] = {.lex_state = 162},
  [69] = {.lex_state = 162},
  [70] = {.lex_state = 162},
  [71] = {.lex_state = 162},
  [72] = {.lex_state = 162},
  [73] = {.lex_state = 162},
  [74] = {.lex_state = 162},
  [75] = {.lex_state = 162},
  [76] = {.lex_state = 162},
  [77] = {.lex_state = 162},
  [78] = {.lex_state = 162},
  [79] = {.lex_state = 162},
  [80] = {.lex_state = 162},
  [81] = {.lex_state = 162},
  [82] = {.lex_state = 162},
  [83] = {.lex_state = 162},
  [84] = {.lex_state = 162},
  [85] = {.lex_state = 162},
  [86] = {.lex_state = 162},
  [87] = {.lex_state = 162},
  [88] = {.lex_state = 162},
  [89] = {.lex_state = 162},
  [90] = {.lex_state = 162},
  [91] = {.lex_state = 162},
  [92] = {.lex_state = 162},
  [93] = {.lex_state = 162},
  [94] = {.lex_state = 162},
  [95] = {.lex_state = 162},
  [96] = {.lex_state = 162},
  [97] = {.lex_state = 162},
  [98] = {.lex_state = 162},
  [99] = {.lex_state = 162},
  [100] = {.lex_state = 162},
  [101] = {.lex_state = 162},
  [102] = {.lex_state = 162},
  [103] = {.lex_state = 162},
  [104] = {.lex_state = 162},
  [105] = {.lex_state = 162},
  [106] = {.lex_state = 162},
  [107] = {.lex_state = 162},
  [108] = {.lex_state = 161},
  [109] = {.lex_state = 155},
  [110] = {.lex_state = 156},
  [111] = {.lex_state = 155},
  [112] = {.lex_state = 156},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 156},
  [115] = {.lex_state = 155},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 161},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 157},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 157},
  [141] = {.lex_state = 157},
  [142] = {.lex_state = 157},
  [143] = {.lex_state = 157},
  [144] = {.lex_state = 157},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
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
    [anon_sym_COMMA] = ACTIONS(1),
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
    [sym_source_file] = STATE(152),
    [sym_stmt] = STATE(119),
    [sym_let_stmt] = STATE(122),
    [sym_assign_stmt] = STATE(122),
    [sym_for_stmt] = STATE(122),
    [sym_return_stmt] = STATE(122),
    [sym__expr] = STATE(87),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
    [sym_stmt] = STATE(137),
    [sym_let_stmt] = STATE(122),
    [sym_assign_stmt] = STATE(122),
    [sym_for_stmt] = STATE(122),
    [sym_return_stmt] = STATE(122),
    [sym__expr] = STATE(87),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
    [sym_stmt] = STATE(137),
    [sym_let_stmt] = STATE(122),
    [sym_assign_stmt] = STATE(122),
    [sym_for_stmt] = STATE(122),
    [sym_return_stmt] = STATE(122),
    [sym__expr] = STATE(87),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
    [anon_sym_RBRACE] = ACTIONS(43),
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
    [sym_stmt] = STATE(137),
    [sym_let_stmt] = STATE(122),
    [sym_assign_stmt] = STATE(122),
    [sym_for_stmt] = STATE(122),
    [sym_return_stmt] = STATE(122),
    [sym__expr] = STATE(87),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
    [anon_sym_RBRACE] = ACTIONS(45),
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
    [sym_stmt] = STATE(137),
    [sym_let_stmt] = STATE(122),
    [sym_assign_stmt] = STATE(122),
    [sym_for_stmt] = STATE(122),
    [sym_return_stmt] = STATE(122),
    [sym__expr] = STATE(87),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
    [ts_builtin_sym_end] = ACTIONS(47),
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
  [6] = {
    [sym_stmt] = STATE(137),
    [sym_let_stmt] = STATE(122),
    [sym_assign_stmt] = STATE(122),
    [sym_for_stmt] = STATE(122),
    [sym_return_stmt] = STATE(122),
    [sym__expr] = STATE(87),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
    [ts_builtin_sym_end] = ACTIONS(49),
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
  [7] = {
    [sym_stmt] = STATE(137),
    [sym_let_stmt] = STATE(122),
    [sym_assign_stmt] = STATE(122),
    [sym_for_stmt] = STATE(122),
    [sym_return_stmt] = STATE(122),
    [sym__expr] = STATE(87),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
    [sym_stmt] = STATE(137),
    [sym_let_stmt] = STATE(122),
    [sym_assign_stmt] = STATE(122),
    [sym_for_stmt] = STATE(122),
    [sym_return_stmt] = STATE(122),
    [sym__expr] = STATE(87),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
    [sym_stmt] = STATE(137),
    [sym_let_stmt] = STATE(122),
    [sym_assign_stmt] = STATE(122),
    [sym_for_stmt] = STATE(122),
    [sym_return_stmt] = STATE(122),
    [sym__expr] = STATE(87),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
    [sym_stmt] = STATE(136),
    [sym_let_stmt] = STATE(122),
    [sym_assign_stmt] = STATE(122),
    [sym_for_stmt] = STATE(122),
    [sym_return_stmt] = STATE(122),
    [sym__expr] = STATE(87),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
    [sym_stmt] = STATE(125),
    [sym_let_stmt] = STATE(122),
    [sym_assign_stmt] = STATE(122),
    [sym_for_stmt] = STATE(122),
    [sym_return_stmt] = STATE(122),
    [sym__expr] = STATE(87),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
    [sym_stmt] = STATE(129),
    [sym_let_stmt] = STATE(122),
    [sym_assign_stmt] = STATE(122),
    [sym_for_stmt] = STATE(122),
    [sym_return_stmt] = STATE(122),
    [sym__expr] = STATE(87),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
    [sym_stmt] = STATE(137),
    [sym_let_stmt] = STATE(122),
    [sym_assign_stmt] = STATE(122),
    [sym_for_stmt] = STATE(122),
    [sym_return_stmt] = STATE(122),
    [sym__expr] = STATE(87),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
    [sym_stmt] = STATE(139),
    [sym_let_stmt] = STATE(122),
    [sym_assign_stmt] = STATE(122),
    [sym_for_stmt] = STATE(122),
    [sym_return_stmt] = STATE(122),
    [sym__expr] = STATE(87),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
    [sym__expr] = STATE(88),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(104),
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
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
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
    [sym__expr] = STATE(99),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(105),
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
    [sym__expr] = STATE(93),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(63),
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
  [18] = {
    [sym__expr] = STATE(89),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
    [sym__expr] = STATE(106),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
  [20] = {
    [sym__expr] = STATE(103),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
    [sym__expr] = STATE(94),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
    [sym__expr] = STATE(101),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
    [sym__expr] = STATE(95),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
    [sym__expr] = STATE(98),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
    [sym__expr] = STATE(90),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
    [sym__expr] = STATE(97),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
    [sym__expr] = STATE(54),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
    [sym__expr] = STATE(91),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
    [sym__expr] = STATE(107),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
    [sym__expr] = STATE(96),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
    [sym__expr] = STATE(53),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
    [sym__expr] = STATE(102),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
    [sym__expr] = STATE(52),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
    [sym__expr] = STATE(51),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
    [sym__expr] = STATE(50),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
    [sym__expr] = STATE(49),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
    [sym__expr] = STATE(48),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
    [sym__expr] = STATE(46),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
    [sym__expr] = STATE(47),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
    [sym__expr] = STATE(45),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
    [sym__expr] = STATE(100),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
    [sym__expr] = STATE(44),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
    [sym__expr] = STATE(92),
    [sym_expr_binop] = STATE(73),
    [sym_expr_unop] = STATE(73),
    [sym_expr_path] = STATE(73),
    [sym_expr_string] = STATE(73),
    [sym_expr_bool] = STATE(73),
    [sym_expr_table] = STATE(73),
    [sym_expr_paren] = STATE(73),
    [sym_expr_block] = STATE(73),
    [sym_expr_func] = STATE(73),
    [sym_expr_if] = STATE(73),
    [sym_fn_call] = STATE(79),
    [sym_builtin_fn] = STATE(108),
    [sym_meth_call] = STATE(79),
    [sym_ident] = STATE(73),
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
  [0] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_EQ,
    ACTIONS(71), 1,
      anon_sym_or,
    ACTIONS(73), 1,
      anon_sym_and,
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
    STATE(56), 1,
      aux_sym_expr_path_repeat1,
    STATE(82), 1,
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
    ACTIONS(67), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [61] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
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
    STATE(56), 1,
      aux_sym_expr_path_repeat1,
    STATE(82), 1,
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
    ACTIONS(67), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [118] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      anon_sym_or,
    ACTIONS(73), 1,
      anon_sym_and,
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
    ACTIONS(93), 1,
      anon_sym_EQ,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_COLON,
    STATE(56), 1,
      aux_sym_expr_path_repeat1,
    STATE(82), 1,
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
    ACTIONS(97), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(91), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
  [189] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_EQ,
    ACTIONS(71), 1,
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
    STATE(56), 1,
      aux_sym_expr_path_repeat1,
    STATE(82), 1,
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
    ACTIONS(67), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_and,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [248] = 11,
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
    STATE(56), 1,
      aux_sym_expr_path_repeat1,
    STATE(82), 1,
      sym_expr_string,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(69), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(67), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [301] = 10,
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
    STATE(56), 1,
      aux_sym_expr_path_repeat1,
    STATE(82), 1,
      sym_expr_string,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(69), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(67), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_or,
      anon_sym_and,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [352] = 9,
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
    STATE(56), 1,
      aux_sym_expr_path_repeat1,
    STATE(82), 1,
      sym_expr_string,
    ACTIONS(69), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(67), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [401] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_PIPE_GT,
    ACTIONS(89), 1,
      anon_sym_DOT,
    STATE(56), 1,
      aux_sym_expr_path_repeat1,
    STATE(82), 1,
      sym_expr_string,
    ACTIONS(69), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(67), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [446] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_DOT,
    STATE(56), 1,
      aux_sym_expr_path_repeat1,
    STATE(82), 1,
      sym_expr_string,
    ACTIONS(69), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(67), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [489] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_DOT,
    STATE(56), 1,
      aux_sym_expr_path_repeat1,
    STATE(82), 1,
      sym_expr_string,
    ACTIONS(103), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(101), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [532] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      anon_sym_or,
    ACTIONS(73), 1,
      anon_sym_and,
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
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_COLON,
    ACTIONS(107), 1,
      anon_sym_EQ,
    ACTIONS(109), 1,
      anon_sym_else,
    STATE(56), 1,
      aux_sym_expr_path_repeat1,
    STATE(82), 1,
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
    ACTIONS(97), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(105), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [605] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_DOT,
    STATE(55), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(111), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [645] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(55), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(120), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(118), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [683] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(122), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_in,
      anon_sym_RPAREN,
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
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [719] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(126), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(130), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [789] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(134), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(138), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(142), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(146), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [929] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(150), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [964] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(154), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [999] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(158), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1034] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(162), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(166), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(170), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(174), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(178), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(182), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1244] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(186), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(190), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(194), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(198), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(202), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(206), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(186), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(210), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1524] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(214), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(218), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1594] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(222), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(226), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(230), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1699] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(111), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
      anon_sym_COMMA,
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
    ACTIONS(71), 1,
      anon_sym_or,
    ACTIONS(73), 1,
      anon_sym_and,
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
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_COLON,
    ACTIONS(236), 1,
      anon_sym_EQ,
    STATE(56), 1,
      aux_sym_expr_path_repeat1,
    STATE(82), 1,
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
    ACTIONS(97), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(234), 3,
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
    ACTIONS(71), 1,
      anon_sym_or,
    ACTIONS(73), 1,
      anon_sym_and,
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
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_COLON,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_expr_path_repeat1,
    STATE(82), 1,
      sym_expr_string,
    STATE(120), 1,
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
    ACTIONS(97), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1869] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      anon_sym_or,
    ACTIONS(73), 1,
      anon_sym_and,
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
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_COLON,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      aux_sym_expr_path_repeat1,
    STATE(82), 1,
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
    ACTIONS(97), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1937] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      anon_sym_or,
    ACTIONS(73), 1,
      anon_sym_and,
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
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_COLON,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_expr_path_repeat1,
    STATE(82), 1,
      sym_expr_string,
    STATE(130), 1,
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
    ACTIONS(97), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2005] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      anon_sym_or,
    ACTIONS(73), 1,
      anon_sym_and,
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
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_COLON,
    STATE(56), 1,
      aux_sym_expr_path_repeat1,
    STATE(82), 1,
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
    ACTIONS(97), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(248), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2069] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      anon_sym_or,
    ACTIONS(73), 1,
      anon_sym_and,
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
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_COLON,
    STATE(56), 1,
      aux_sym_expr_path_repeat1,
    STATE(82), 1,
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
    ACTIONS(97), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(250), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2133] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      anon_sym_or,
    ACTIONS(73), 1,
      anon_sym_and,
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
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_COLON,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_expr_path_repeat1,
    STATE(82), 1,
      sym_expr_string,
    STATE(127), 1,
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
    ACTIONS(97), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2201] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      anon_sym_or,
    ACTIONS(73), 1,
      anon_sym_and,
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
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_COLON,
    STATE(56), 1,
      aux_sym_expr_path_repeat1,
    STATE(82), 1,
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
    ACTIONS(97), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(254), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2265] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      anon_sym_or,
    ACTIONS(73), 1,
      anon_sym_and,
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
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_COLON,
    STATE(56), 1,
      aux_sym_expr_path_repeat1,
    STATE(82), 1,
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
    ACTIONS(97), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(256), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2329] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      anon_sym_or,
    ACTIONS(73), 1,
      anon_sym_and,
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
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_COLON,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_expr_path_repeat1,
    STATE(82), 1,
      sym_expr_string,
    STATE(121), 1,
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
    ACTIONS(97), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2397] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      anon_sym_or,
    ACTIONS(73), 1,
      anon_sym_and,
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
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_COLON,
    STATE(56), 1,
      aux_sym_expr_path_repeat1,
    STATE(82), 1,
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
    ACTIONS(97), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(260), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2460] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      anon_sym_or,
    ACTIONS(73), 1,
      anon_sym_and,
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
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_COLON,
    STATE(56), 1,
      aux_sym_expr_path_repeat1,
    STATE(82), 1,
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
    ACTIONS(97), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(262), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2523] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      anon_sym_or,
    ACTIONS(73), 1,
      anon_sym_and,
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
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_COLON,
    STATE(56), 1,
      aux_sym_expr_path_repeat1,
    STATE(82), 1,
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
    ACTIONS(97), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(264), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2586] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      anon_sym_or,
    ACTIONS(73), 1,
      anon_sym_and,
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
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_COLON,
    STATE(56), 1,
      aux_sym_expr_path_repeat1,
    STATE(82), 1,
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
    ACTIONS(97), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(266), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2649] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      anon_sym_or,
    ACTIONS(73), 1,
      anon_sym_and,
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
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_COLON,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_expr_path_repeat1,
    STATE(82), 1,
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
    ACTIONS(97), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2711] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      anon_sym_or,
    ACTIONS(73), 1,
      anon_sym_and,
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
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_COLON,
    ACTIONS(270), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_expr_path_repeat1,
    STATE(82), 1,
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
    ACTIONS(97), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2773] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      anon_sym_or,
    ACTIONS(73), 1,
      anon_sym_and,
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
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_COLON,
    ACTIONS(272), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_expr_path_repeat1,
    STATE(82), 1,
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
    ACTIONS(97), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2835] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_EQ,
    ACTIONS(188), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(186), 17,
      anon_sym_LPAREN,
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
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [2867] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_EQ,
    ACTIONS(188), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(186), 17,
      anon_sym_LPAREN,
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
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [2899] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      anon_sym_or,
    ACTIONS(73), 1,
      anon_sym_and,
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
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_COLON,
    ACTIONS(278), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_expr_path_repeat1,
    STATE(82), 1,
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
    ACTIONS(97), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2961] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      anon_sym_or,
    ACTIONS(73), 1,
      anon_sym_and,
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
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_COLON,
    ACTIONS(280), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_expr_path_repeat1,
    STATE(82), 1,
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
    ACTIONS(97), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3023] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    STATE(82), 1,
      sym_expr_string,
  [3039] = 5,
    ACTIONS(282), 1,
      sym_comment,
    ACTIONS(284), 1,
      aux_sym_expr_string_token1,
    ACTIONS(287), 1,
      anon_sym_DQUOTE2,
    ACTIONS(289), 1,
      sym_string_esc,
    STATE(109), 1,
      aux_sym_expr_string_repeat1,
  [3055] = 5,
    ACTIONS(282), 1,
      sym_comment,
    ACTIONS(292), 1,
      aux_sym_expr_string_token2,
    ACTIONS(295), 1,
      anon_sym_SQUOTE2,
    ACTIONS(297), 1,
      sym_string_esc,
    STATE(110), 1,
      aux_sym_expr_string_repeat2,
  [3071] = 5,
    ACTIONS(282), 1,
      sym_comment,
    ACTIONS(300), 1,
      aux_sym_expr_string_token1,
    ACTIONS(302), 1,
      anon_sym_DQUOTE2,
    ACTIONS(304), 1,
      sym_string_esc,
    STATE(115), 1,
      aux_sym_expr_string_repeat1,
  [3087] = 5,
    ACTIONS(282), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_SQUOTE2,
    ACTIONS(306), 1,
      aux_sym_expr_string_token2,
    ACTIONS(308), 1,
      sym_string_esc,
    STATE(114), 1,
      aux_sym_expr_string_repeat2,
  [3103] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_SEMI,
    STATE(113), 1,
      aux_sym__block_body_repeat1,
    ACTIONS(310), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
  [3117] = 5,
    ACTIONS(282), 1,
      sym_comment,
    ACTIONS(315), 1,
      aux_sym_expr_string_token2,
    ACTIONS(317), 1,
      anon_sym_SQUOTE2,
    ACTIONS(319), 1,
      sym_string_esc,
    STATE(110), 1,
      aux_sym_expr_string_repeat2,
  [3133] = 5,
    ACTIONS(282), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_DQUOTE2,
    ACTIONS(321), 1,
      aux_sym_expr_string_token1,
    ACTIONS(323), 1,
      sym_string_esc,
    STATE(109), 1,
      aux_sym_expr_string_repeat1,
  [3149] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_RPAREN,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym__call_args_repeat1,
  [3162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(328), 1,
      anon_sym_SEMI,
    STATE(113), 1,
      aux_sym__block_body_repeat1,
  [3175] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
    ACTIONS(332), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      aux_sym__decl_args_repeat1,
  [3188] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      ts_builtin_sym_end,
    ACTIONS(337), 1,
      anon_sym_SEMI,
    STATE(134), 1,
      aux_sym__block_body_repeat1,
  [3201] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
    STATE(128), 1,
      aux_sym_expr_table_repeat1,
  [3214] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    STATE(128), 1,
      aux_sym_expr_table_repeat1,
  [3227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [3236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 3,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3245] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(345), 1,
      anon_sym_SEMI,
    STATE(113), 1,
      aux_sym__block_body_repeat1,
  [3258] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(345), 1,
      anon_sym_SEMI,
    STATE(138), 1,
      aux_sym__block_body_repeat1,
  [3271] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(347), 1,
      anon_sym_SEMI,
    STATE(113), 1,
      aux_sym__block_body_repeat1,
  [3284] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(349), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym__call_args_repeat1,
  [3297] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      aux_sym_expr_table_repeat1,
  [3310] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_SEMI,
    ACTIONS(356), 1,
      anon_sym_RBRACE,
    STATE(117), 1,
      aux_sym__block_body_repeat1,
  [3323] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    ACTIONS(358), 1,
      anon_sym_RBRACE,
    STATE(128), 1,
      aux_sym_expr_table_repeat1,
  [3336] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
    ACTIONS(362), 1,
      aux_sym_ident_token1,
    STATE(132), 1,
      sym_ident,
  [3349] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    STATE(135), 1,
      aux_sym__decl_args_repeat1,
  [3362] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym__call_args_repeat1,
  [3375] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(370), 1,
      anon_sym_SEMI,
    STATE(113), 1,
      aux_sym__block_body_repeat1,
  [3388] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      aux_sym__decl_args_repeat1,
  [3401] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_SEMI,
    ACTIONS(376), 1,
      anon_sym_RBRACE,
    STATE(124), 1,
      aux_sym__block_body_repeat1,
  [3414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [3423] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(378), 1,
      anon_sym_SEMI,
    STATE(113), 1,
      aux_sym__block_body_repeat1,
  [3436] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(378), 1,
      anon_sym_SEMI,
    STATE(126), 1,
      aux_sym__block_body_repeat1,
  [3449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      aux_sym_ident_token1,
    STATE(156), 1,
      sym_ident,
  [3459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      aux_sym_ident_token1,
    STATE(153), 1,
      sym_ident,
  [3469] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      aux_sym_ident_token1,
    STATE(145), 1,
      sym_ident,
  [3479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      aux_sym_ident_token1,
    STATE(149), 1,
      sym_ident,
  [3489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      aux_sym_ident_token1,
    STATE(86), 1,
      sym_ident,
  [3499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_EQ,
  [3514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
  [3521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LBRACE,
  [3528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_LPAREN,
  [3535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_LPAREN,
  [3542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_EQ,
  [3549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      ts_builtin_sym_end,
  [3556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_EQ,
  [3563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_LBRACE,
  [3570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_LPAREN,
  [3577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_in,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(44)] = 0,
  [SMALL_STATE(45)] = 61,
  [SMALL_STATE(46)] = 118,
  [SMALL_STATE(47)] = 189,
  [SMALL_STATE(48)] = 248,
  [SMALL_STATE(49)] = 301,
  [SMALL_STATE(50)] = 352,
  [SMALL_STATE(51)] = 401,
  [SMALL_STATE(52)] = 446,
  [SMALL_STATE(53)] = 489,
  [SMALL_STATE(54)] = 532,
  [SMALL_STATE(55)] = 605,
  [SMALL_STATE(56)] = 645,
  [SMALL_STATE(57)] = 683,
  [SMALL_STATE(58)] = 719,
  [SMALL_STATE(59)] = 754,
  [SMALL_STATE(60)] = 789,
  [SMALL_STATE(61)] = 824,
  [SMALL_STATE(62)] = 859,
  [SMALL_STATE(63)] = 894,
  [SMALL_STATE(64)] = 929,
  [SMALL_STATE(65)] = 964,
  [SMALL_STATE(66)] = 999,
  [SMALL_STATE(67)] = 1034,
  [SMALL_STATE(68)] = 1069,
  [SMALL_STATE(69)] = 1104,
  [SMALL_STATE(70)] = 1139,
  [SMALL_STATE(71)] = 1174,
  [SMALL_STATE(72)] = 1209,
  [SMALL_STATE(73)] = 1244,
  [SMALL_STATE(74)] = 1279,
  [SMALL_STATE(75)] = 1314,
  [SMALL_STATE(76)] = 1349,
  [SMALL_STATE(77)] = 1384,
  [SMALL_STATE(78)] = 1419,
  [SMALL_STATE(79)] = 1454,
  [SMALL_STATE(80)] = 1489,
  [SMALL_STATE(81)] = 1524,
  [SMALL_STATE(82)] = 1559,
  [SMALL_STATE(83)] = 1594,
  [SMALL_STATE(84)] = 1629,
  [SMALL_STATE(85)] = 1664,
  [SMALL_STATE(86)] = 1699,
  [SMALL_STATE(87)] = 1734,
  [SMALL_STATE(88)] = 1801,
  [SMALL_STATE(89)] = 1869,
  [SMALL_STATE(90)] = 1937,
  [SMALL_STATE(91)] = 2005,
  [SMALL_STATE(92)] = 2069,
  [SMALL_STATE(93)] = 2133,
  [SMALL_STATE(94)] = 2201,
  [SMALL_STATE(95)] = 2265,
  [SMALL_STATE(96)] = 2329,
  [SMALL_STATE(97)] = 2397,
  [SMALL_STATE(98)] = 2460,
  [SMALL_STATE(99)] = 2523,
  [SMALL_STATE(100)] = 2586,
  [SMALL_STATE(101)] = 2649,
  [SMALL_STATE(102)] = 2711,
  [SMALL_STATE(103)] = 2773,
  [SMALL_STATE(104)] = 2835,
  [SMALL_STATE(105)] = 2867,
  [SMALL_STATE(106)] = 2899,
  [SMALL_STATE(107)] = 2961,
  [SMALL_STATE(108)] = 3023,
  [SMALL_STATE(109)] = 3039,
  [SMALL_STATE(110)] = 3055,
  [SMALL_STATE(111)] = 3071,
  [SMALL_STATE(112)] = 3087,
  [SMALL_STATE(113)] = 3103,
  [SMALL_STATE(114)] = 3117,
  [SMALL_STATE(115)] = 3133,
  [SMALL_STATE(116)] = 3149,
  [SMALL_STATE(117)] = 3162,
  [SMALL_STATE(118)] = 3175,
  [SMALL_STATE(119)] = 3188,
  [SMALL_STATE(120)] = 3201,
  [SMALL_STATE(121)] = 3214,
  [SMALL_STATE(122)] = 3227,
  [SMALL_STATE(123)] = 3236,
  [SMALL_STATE(124)] = 3245,
  [SMALL_STATE(125)] = 3258,
  [SMALL_STATE(126)] = 3271,
  [SMALL_STATE(127)] = 3284,
  [SMALL_STATE(128)] = 3297,
  [SMALL_STATE(129)] = 3310,
  [SMALL_STATE(130)] = 3323,
  [SMALL_STATE(131)] = 3336,
  [SMALL_STATE(132)] = 3349,
  [SMALL_STATE(133)] = 3362,
  [SMALL_STATE(134)] = 3375,
  [SMALL_STATE(135)] = 3388,
  [SMALL_STATE(136)] = 3401,
  [SMALL_STATE(137)] = 3414,
  [SMALL_STATE(138)] = 3423,
  [SMALL_STATE(139)] = 3436,
  [SMALL_STATE(140)] = 3449,
  [SMALL_STATE(141)] = 3459,
  [SMALL_STATE(142)] = 3469,
  [SMALL_STATE(143)] = 3479,
  [SMALL_STATE(144)] = 3489,
  [SMALL_STATE(145)] = 3499,
  [SMALL_STATE(146)] = 3507,
  [SMALL_STATE(147)] = 3514,
  [SMALL_STATE(148)] = 3521,
  [SMALL_STATE(149)] = 3528,
  [SMALL_STATE(150)] = 3535,
  [SMALL_STATE(151)] = 3542,
  [SMALL_STATE(152)] = 3549,
  [SMALL_STATE(153)] = 3556,
  [SMALL_STATE(154)] = 3563,
  [SMALL_STATE(155)] = 3570,
  [SMALL_STATE(156)] = 3577,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_binop, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_binop, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_if, 7),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_if, 7),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_unop, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_unop, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_if, 5),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_if, 5),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_path_repeat1, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_path_repeat1, 2),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_path_repeat1, 2), SHIFT_REPEAT(144),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_path, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_path, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 5),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 5),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_func, 5),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_func, 5),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_func, 9),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_func, 9),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_func, 8),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_func, 8),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_paren, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_paren, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_string, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_string, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_block, 4),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_block, 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 8),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 8),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meth_call, 7),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meth_call, 7),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_func, 7),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_func, 7),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_block, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_block, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 7),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 7),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 4),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 4),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meth_call, 6),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meth_call, 6),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_bool, 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_bool, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 3),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_call, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 4),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_call, 4),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_func, 6),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_func, 6),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 6),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 6),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_block, 5),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_block, 5),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_call, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_string, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_string, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meth_call, 5),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meth_call, 5),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 5),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_call, 5),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 4),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_stmt, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 7),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_stmt, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__call_args_repeat1, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_table_repeat1, 4),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_table_repeat1, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_table_repeat1, 6),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_string_repeat1, 2), SHIFT_REPEAT(109),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_string_repeat1, 2),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_string_repeat1, 2), SHIFT_REPEAT(109),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_string_repeat2, 2), SHIFT_REPEAT(110),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_string_repeat2, 2),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_string_repeat2, 2), SHIFT_REPEAT(110),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2), SHIFT_REPEAT(13),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__call_args_repeat1, 2), SHIFT_REPEAT(26),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_args_repeat1, 2),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decl_args_repeat1, 2), SHIFT_REPEAT(142),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_fn, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_table_repeat1, 2), SHIFT_REPEAT(16),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [392] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
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
