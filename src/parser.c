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
#define STATE_COUNT 150
#define LARGE_STATE_COUNT 41
#define SYMBOL_COUNT 99
#define ALIAS_COUNT 0
#define TOKEN_COUNT 71
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
  anon_sym_GT = 13,
  anon_sym_GT_EQ = 14,
  anon_sym_LT = 15,
  anon_sym_LT_EQ = 16,
  anon_sym_PLUS = 17,
  anon_sym_DASH = 18,
  anon_sym_STAR = 19,
  anon_sym_SLASH = 20,
  anon_sym_PIPE_GT = 21,
  anon_sym_BANG = 22,
  anon_sym_DOT = 23,
  anon_sym_DQUOTE = 24,
  aux_sym_expr_string_token1 = 25,
  anon_sym_DQUOTE2 = 26,
  anon_sym_SQUOTE = 27,
  aux_sym_expr_string_token2 = 28,
  anon_sym_SQUOTE2 = 29,
  sym_string_esc = 30,
  sym_expr_tag = 31,
  anon_sym_true = 32,
  anon_sym_false = 33,
  sym_expr_nil = 34,
  sym_expr_number = 35,
  anon_sym_LBRACE = 36,
  anon_sym_COMMA = 37,
  anon_sym_RBRACE = 38,
  anon_sym_LBRACK = 39,
  anon_sym_RBRACK = 40,
  anon_sym_DOT_LBRACE = 41,
  anon_sym_DOT_LPAREN = 42,
  anon_sym_if = 43,
  anon_sym_else = 44,
  sym_require = 45,
  anon_sym_assert = 46,
  anon_sym_collectgarbage = 47,
  anon_sym_error = 48,
  anon_sym_getfenv = 49,
  anon_sym_getmetatable = 50,
  anon_sym_ipairs = 51,
  anon_sym_loadstring = 52,
  anon_sym_newproxy = 53,
  anon_sym_next = 54,
  anon_sym_pairs = 55,
  anon_sym_pcall = 56,
  anon_sym_print = 57,
  anon_sym_rawequal = 58,
  anon_sym_rawget = 59,
  anon_sym_rawset = 60,
  anon_sym_select = 61,
  anon_sym_setfenv = 62,
  anon_sym_setmetatable = 63,
  anon_sym_tonumber = 64,
  anon_sym_tostring = 65,
  anon_sym_type = 66,
  anon_sym_unpack = 67,
  anon_sym_xpcall = 68,
  anon_sym_COLON = 69,
  aux_sym_ident_token1 = 70,
  sym_source_file = 71,
  sym_stmt = 72,
  sym_let_stmt = 73,
  sym_assign_stmt = 74,
  sym_for_stmt = 75,
  sym_return_stmt = 76,
  sym__expr = 77,
  sym_expr_binop = 78,
  sym_expr_unop = 79,
  sym_expr_path = 80,
  sym_expr_string = 81,
  sym_expr_bool = 82,
  sym_expr_table = 83,
  sym_expr_paren = 84,
  sym_expr_block = 85,
  sym_expr_func = 86,
  sym_expr_if = 87,
  sym_fn_call = 88,
  sym_builtin_fn = 89,
  sym_meth_call = 90,
  sym_ident = 91,
  aux_sym__block_body_repeat1 = 92,
  aux_sym_expr_path_repeat1 = 93,
  aux_sym_expr_string_repeat1 = 94,
  aux_sym_expr_string_repeat2 = 95,
  aux_sym_expr_table_repeat1 = 96,
  aux_sym__call_args_repeat1 = 97,
  aux_sym__decl_args_repeat1 = 98,
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
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
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
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(157)
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(193);
      if (lookahead == '\'') ADVANCE(197);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == '*') ADVANCE(183);
      if (lookahead == '+') ADVANCE(181);
      if (lookahead == ',') ADVANCE(208);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == ':') ADVANCE(265);
      if (lookahead == ';') ADVANCE(161);
      if (lookahead == '<') ADVANCE(179);
      if (lookahead == '=') ADVANCE(165);
      if (lookahead == '>') ADVANCE(177);
      if (lookahead == '[') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(156);
      if (lookahead == ']') ADVANCE(211);
      if (lookahead == 'a') ADVANCE(120);
      if (lookahead == 'b') ADVANCE(109);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'g') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(6);
      if (lookahead == 'r') ADVANCE(7);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == 't') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(90);
      if (lookahead == 'x') ADVANCE(98);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '|') ADVANCE(5);
      if (lookahead == '}') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(213);
      if (lookahead == '{') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(176);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(185);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'c') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(13);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(52);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(78);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(79);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == 'g') ADVANCE(50);
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 55:
      if (lookahead == 'f') ADVANCE(214);
      if (lookahead == 'n') ADVANCE(169);
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 56:
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 58:
      if (lookahead == 'g') ADVANCE(257);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(231);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(15);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(42);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 68:
      if (lookahead == 'k') ADVANCE(171);
      END_STATE();
    case 69:
      if (lookahead == 'k') ADVANCE(261);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(263);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(243);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(44);
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(140);
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(142);
      if (lookahead == 'y') ADVANCE(100);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 98:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 99:
      if (lookahead == 'p') ADVANCE(12);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 102:
      if (lookahead == 'q') ADVANCE(141);
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 103:
      if (lookahead == 'q') ADVANCE(143);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(229);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 121:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 122:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 123:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 124:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 140:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 141:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 142:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 143:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 144:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 145:
      if (lookahead == 'v') ADVANCE(225);
      END_STATE();
    case 146:
      if (lookahead == 'v') ADVANCE(251);
      END_STATE();
    case 147:
      if (lookahead == 'w') ADVANCE(35);
      END_STATE();
    case 148:
      if (lookahead == 'w') ADVANCE(101);
      if (lookahead == 'x') ADVANCE(127);
      END_STATE();
    case 149:
      if (lookahead == 'x') ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == 'y') ADVANCE(233);
      END_STATE();
    case 151:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(151)
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(190);
      if (lookahead == '\'') ADVANCE(194);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '[') ADVANCE(210);
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'c') ADVANCE(352);
      if (lookahead == 'e') ADVANCE(368);
      if (lookahead == 'f') ADVANCE(272);
      if (lookahead == 'g') ADVANCE(293);
      if (lookahead == 'i') ADVANCE(316);
      if (lookahead == 'l') ADVANCE(355);
      if (lookahead == 'n') ADVANCE(294);
      if (lookahead == 'p') ADVANCE(266);
      if (lookahead == 'r') ADVANCE(268);
      if (lookahead == 's') ADVANCE(295);
      if (lookahead == 't') ADVANCE(353);
      if (lookahead == 'u') ADVANCE(348);
      if (lookahead == 'x') ADVANCE(357);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '}') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 152:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(195);
      if (lookahead == '\'') ADVANCE(197);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(156);
      if (lookahead != 0) ADVANCE(195);
      END_STATE();
    case 153:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(191);
      if (lookahead == '"') ADVANCE(193);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == '\\') ADVANCE(156);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 154:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(154)
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == '/') ADVANCE(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 155:
      if (lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 156:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(198);
      END_STATE();
    case 157:
      if (eof) ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(157)
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(190);
      if (lookahead == '\'') ADVANCE(194);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == '*') ADVANCE(183);
      if (lookahead == '+') ADVANCE(181);
      if (lookahead == ',') ADVANCE(208);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == ':') ADVANCE(265);
      if (lookahead == ';') ADVANCE(161);
      if (lookahead == '<') ADVANCE(179);
      if (lookahead == '=') ADVANCE(165);
      if (lookahead == '>') ADVANCE(177);
      if (lookahead == '[') ADVANCE(210);
      if (lookahead == ']') ADVANCE(211);
      if (lookahead == 'a') ADVANCE(120);
      if (lookahead == 'b') ADVANCE(109);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'g') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(6);
      if (lookahead == 'r') ADVANCE(7);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == 't') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(90);
      if (lookahead == 'x') ADVANCE(98);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '|') ADVANCE(5);
      if (lookahead == '}') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 158:
      if (eof) ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(158)
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(190);
      if (lookahead == '\'') ADVANCE(194);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'b') ADVANCE(370);
      if (lookahead == 'c') ADVANCE(352);
      if (lookahead == 'e') ADVANCE(368);
      if (lookahead == 'f') ADVANCE(271);
      if (lookahead == 'g') ADVANCE(293);
      if (lookahead == 'i') ADVANCE(316);
      if (lookahead == 'l') ADVANCE(304);
      if (lookahead == 'n') ADVANCE(294);
      if (lookahead == 'p') ADVANCE(266);
      if (lookahead == 'r') ADVANCE(267);
      if (lookahead == 's') ADVANCE(295);
      if (lookahead == 't') ADVANCE(353);
      if (lookahead == 'u') ADVANCE(348);
      if (lookahead == 'x') ADVANCE(357);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '}') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 159:
      if (eof) ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == '*') ADVANCE(183);
      if (lookahead == '+') ADVANCE(181);
      if (lookahead == ',') ADVANCE(208);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == ':') ADVANCE(265);
      if (lookahead == ';') ADVANCE(161);
      if (lookahead == '<') ADVANCE(179);
      if (lookahead == '=') ADVANCE(165);
      if (lookahead == '>') ADVANCE(177);
      if (lookahead == ']') ADVANCE(211);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == '|') ADVANCE(5);
      if (lookahead == '}') ADVANCE(209);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(175);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_break_stmt);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_break_stmt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_PIPE_GT);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(176);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '(') ADVANCE(213);
      if (lookahead == '{') ADVANCE(212);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_expr_string_token1);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_expr_string_token1);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_expr_string_token2);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_expr_string_token2);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_string_esc);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_expr_tag);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_expr_nil);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_expr_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_expr_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_DOT_LBRACE);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_DOT_LPAREN);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_require);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_require);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_assert);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_collectgarbage);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_collectgarbage);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_error);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_getfenv);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_getfenv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_getmetatable);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_getmetatable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_ipairs);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_ipairs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_loadstring);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_loadstring);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_newproxy);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_newproxy);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_next);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_next);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_pairs);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_pairs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_pcall);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_pcall);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_print);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_print);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_rawequal);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_rawequal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_rawget);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_rawget);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_rawset);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_rawset);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_setfenv);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_setfenv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_setmetatable);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_setmetatable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_tonumber);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_tonumber);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_tostring);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_tostring);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_unpack);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_unpack);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_xpcall);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_xpcall);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(324);
      if (lookahead == 'c') ADVANCE(279);
      if (lookahead == 'r') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(407);
      if (lookahead == 'e') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(407);
      if (lookahead == 'e') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(341);
      if (lookahead == 'o') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'b') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'b') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'b') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'b') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'c') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'c') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'c') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'c') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'd') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(408);
      if (lookahead == 'i') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead == 'g') ADVANCE(311);
      if (lookahead == 's') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(386);
      if (lookahead == 'o') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'f') ADVANCE(215);
      if (lookahead == 'p') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'f') ADVANCE(306);
      if (lookahead == 'm') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'f') ADVANCE(308);
      if (lookahead == 'm') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'g') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'g') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'g') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'g') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'i') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'i') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'i') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'i') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'i') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'i') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'k') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'k') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(305);
      if (lookahead == 't') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'm') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(400);
      if (lookahead == 's') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'o') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'o') ADVANCE(350);
      if (lookahead == 'r') ADVANCE(402);
      if (lookahead == 'y') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'o') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'o') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'o') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'p') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'p') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'p') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'p') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'q') ADVANCE(401);
      if (lookahead == 't') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'q') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'q') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 's') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 's') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 's') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 's') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 's') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 's') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'u') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'u') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'u') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'u') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'u') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'v') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'v') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'w') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'w') ADVANCE(360);
      if (lookahead == 'x') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'x') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'y') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 158},
  [2] = {.lex_state = 158},
  [3] = {.lex_state = 158},
  [4] = {.lex_state = 158},
  [5] = {.lex_state = 158},
  [6] = {.lex_state = 158},
  [7] = {.lex_state = 158},
  [8] = {.lex_state = 158},
  [9] = {.lex_state = 158},
  [10] = {.lex_state = 158},
  [11] = {.lex_state = 158},
  [12] = {.lex_state = 158},
  [13] = {.lex_state = 158},
  [14] = {.lex_state = 158},
  [15] = {.lex_state = 151},
  [16] = {.lex_state = 151},
  [17] = {.lex_state = 151},
  [18] = {.lex_state = 151},
  [19] = {.lex_state = 151},
  [20] = {.lex_state = 151},
  [21] = {.lex_state = 151},
  [22] = {.lex_state = 151},
  [23] = {.lex_state = 151},
  [24] = {.lex_state = 151},
  [25] = {.lex_state = 151},
  [26] = {.lex_state = 151},
  [27] = {.lex_state = 151},
  [28] = {.lex_state = 151},
  [29] = {.lex_state = 151},
  [30] = {.lex_state = 151},
  [31] = {.lex_state = 151},
  [32] = {.lex_state = 151},
  [33] = {.lex_state = 151},
  [34] = {.lex_state = 151},
  [35] = {.lex_state = 151},
  [36] = {.lex_state = 151},
  [37] = {.lex_state = 151},
  [38] = {.lex_state = 151},
  [39] = {.lex_state = 151},
  [40] = {.lex_state = 151},
  [41] = {.lex_state = 159},
  [42] = {.lex_state = 159},
  [43] = {.lex_state = 159},
  [44] = {.lex_state = 159},
  [45] = {.lex_state = 159},
  [46] = {.lex_state = 159},
  [47] = {.lex_state = 159},
  [48] = {.lex_state = 159},
  [49] = {.lex_state = 159},
  [50] = {.lex_state = 159},
  [51] = {.lex_state = 159},
  [52] = {.lex_state = 159},
  [53] = {.lex_state = 159},
  [54] = {.lex_state = 159},
  [55] = {.lex_state = 159},
  [56] = {.lex_state = 159},
  [57] = {.lex_state = 159},
  [58] = {.lex_state = 159},
  [59] = {.lex_state = 159},
  [60] = {.lex_state = 159},
  [61] = {.lex_state = 159},
  [62] = {.lex_state = 159},
  [63] = {.lex_state = 159},
  [64] = {.lex_state = 159},
  [65] = {.lex_state = 159},
  [66] = {.lex_state = 159},
  [67] = {.lex_state = 159},
  [68] = {.lex_state = 159},
  [69] = {.lex_state = 159},
  [70] = {.lex_state = 159},
  [71] = {.lex_state = 159},
  [72] = {.lex_state = 159},
  [73] = {.lex_state = 159},
  [74] = {.lex_state = 159},
  [75] = {.lex_state = 159},
  [76] = {.lex_state = 159},
  [77] = {.lex_state = 159},
  [78] = {.lex_state = 159},
  [79] = {.lex_state = 159},
  [80] = {.lex_state = 159},
  [81] = {.lex_state = 159},
  [82] = {.lex_state = 159},
  [83] = {.lex_state = 159},
  [84] = {.lex_state = 159},
  [85] = {.lex_state = 159},
  [86] = {.lex_state = 159},
  [87] = {.lex_state = 159},
  [88] = {.lex_state = 159},
  [89] = {.lex_state = 159},
  [90] = {.lex_state = 159},
  [91] = {.lex_state = 159},
  [92] = {.lex_state = 159},
  [93] = {.lex_state = 159},
  [94] = {.lex_state = 159},
  [95] = {.lex_state = 159},
  [96] = {.lex_state = 159},
  [97] = {.lex_state = 159},
  [98] = {.lex_state = 159},
  [99] = {.lex_state = 159},
  [100] = {.lex_state = 159},
  [101] = {.lex_state = 152},
  [102] = {.lex_state = 153},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 153},
  [105] = {.lex_state = 153},
  [106] = {.lex_state = 152},
  [107] = {.lex_state = 152},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 154},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 154},
  [132] = {.lex_state = 154},
  [133] = {.lex_state = 154},
  [134] = {.lex_state = 154},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 154},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
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
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
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
    [sym_source_file] = STATE(141),
    [sym_stmt] = STATE(110),
    [sym_let_stmt] = STATE(112),
    [sym_assign_stmt] = STATE(112),
    [sym_for_stmt] = STATE(112),
    [sym_return_stmt] = STATE(112),
    [sym__expr] = STATE(80),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
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
    [sym_stmt] = STATE(124),
    [sym_let_stmt] = STATE(112),
    [sym_assign_stmt] = STATE(112),
    [sym_for_stmt] = STATE(112),
    [sym_return_stmt] = STATE(112),
    [sym__expr] = STATE(80),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
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
    [sym_stmt] = STATE(124),
    [sym_let_stmt] = STATE(112),
    [sym_assign_stmt] = STATE(112),
    [sym_for_stmt] = STATE(112),
    [sym_return_stmt] = STATE(112),
    [sym__expr] = STATE(80),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
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
    [sym_stmt] = STATE(124),
    [sym_let_stmt] = STATE(112),
    [sym_assign_stmt] = STATE(112),
    [sym_for_stmt] = STATE(112),
    [sym_return_stmt] = STATE(112),
    [sym__expr] = STATE(80),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
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
    [sym_stmt] = STATE(124),
    [sym_let_stmt] = STATE(112),
    [sym_assign_stmt] = STATE(112),
    [sym_for_stmt] = STATE(112),
    [sym_return_stmt] = STATE(112),
    [sym__expr] = STATE(80),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
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
    [sym_stmt] = STATE(124),
    [sym_let_stmt] = STATE(112),
    [sym_assign_stmt] = STATE(112),
    [sym_for_stmt] = STATE(112),
    [sym_return_stmt] = STATE(112),
    [sym__expr] = STATE(80),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
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
    [sym_stmt] = STATE(124),
    [sym_let_stmt] = STATE(112),
    [sym_assign_stmt] = STATE(112),
    [sym_for_stmt] = STATE(112),
    [sym_return_stmt] = STATE(112),
    [sym__expr] = STATE(80),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
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
    [sym_stmt] = STATE(124),
    [sym_let_stmt] = STATE(112),
    [sym_assign_stmt] = STATE(112),
    [sym_for_stmt] = STATE(112),
    [sym_return_stmt] = STATE(112),
    [sym__expr] = STATE(80),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
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
    [sym_stmt] = STATE(124),
    [sym_let_stmt] = STATE(112),
    [sym_assign_stmt] = STATE(112),
    [sym_for_stmt] = STATE(112),
    [sym_return_stmt] = STATE(112),
    [sym__expr] = STATE(80),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
    [ts_builtin_sym_end] = ACTIONS(55),
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
  [10] = {
    [sym_stmt] = STATE(130),
    [sym_let_stmt] = STATE(112),
    [sym_assign_stmt] = STATE(112),
    [sym_for_stmt] = STATE(112),
    [sym_return_stmt] = STATE(112),
    [sym__expr] = STATE(80),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
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
    [sym_stmt] = STATE(118),
    [sym_let_stmt] = STATE(112),
    [sym_assign_stmt] = STATE(112),
    [sym_for_stmt] = STATE(112),
    [sym_return_stmt] = STATE(112),
    [sym__expr] = STATE(80),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
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
    [sym_stmt] = STATE(116),
    [sym_let_stmt] = STATE(112),
    [sym_assign_stmt] = STATE(112),
    [sym_for_stmt] = STATE(112),
    [sym_return_stmt] = STATE(112),
    [sym__expr] = STATE(80),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
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
    [sym_stmt] = STATE(124),
    [sym_let_stmt] = STATE(112),
    [sym_assign_stmt] = STATE(112),
    [sym_for_stmt] = STATE(112),
    [sym_return_stmt] = STATE(112),
    [sym__expr] = STATE(80),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
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
    [sym_stmt] = STATE(117),
    [sym_let_stmt] = STATE(112),
    [sym_assign_stmt] = STATE(112),
    [sym_for_stmt] = STATE(112),
    [sym_return_stmt] = STATE(112),
    [sym__expr] = STATE(80),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
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
    [sym__expr] = STATE(87),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(94),
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
    [sym__expr] = STATE(92),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(93),
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
    [sym__expr] = STATE(85),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
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
    [sym__expr] = STATE(86),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
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
    [sym__expr] = STATE(42),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
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
    [sym__expr] = STATE(45),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
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
    [sym__expr] = STATE(97),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
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
    [sym__expr] = STATE(83),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
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
    [sym__expr] = STATE(47),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
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
    [sym__expr] = STATE(91),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
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
    [sym__expr] = STATE(50),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
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
    [sym__expr] = STATE(43),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
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
    [sym__expr] = STATE(46),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
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
    [sym__expr] = STATE(41),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
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
    [sym__expr] = STATE(89),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
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
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
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
    [sym__expr] = STATE(88),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
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
    [sym__expr] = STATE(100),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
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
    [sym__expr] = STATE(90),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
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
    [sym__expr] = STATE(82),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
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
    [sym__expr] = STATE(95),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
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
    [sym__expr] = STATE(99),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
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
    [sym__expr] = STATE(84),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
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
    [sym__expr] = STATE(98),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
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
    [sym__expr] = STATE(81),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
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
    [sym__expr] = STATE(49),
    [sym_expr_binop] = STATE(77),
    [sym_expr_unop] = STATE(77),
    [sym_expr_path] = STATE(77),
    [sym_expr_string] = STATE(77),
    [sym_expr_bool] = STATE(77),
    [sym_expr_table] = STATE(77),
    [sym_expr_paren] = STATE(77),
    [sym_expr_block] = STATE(77),
    [sym_expr_func] = STATE(77),
    [sym_expr_if] = STATE(77),
    [sym_fn_call] = STATE(71),
    [sym_builtin_fn] = STATE(143),
    [sym_meth_call] = STATE(71),
    [sym_ident] = STATE(77),
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
  [0] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(77), 1,
      anon_sym_PIPE_GT,
    ACTIONS(79), 1,
      anon_sym_DOT,
    STATE(48), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(69), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(67), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [43] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(77), 1,
      anon_sym_PIPE_GT,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_else,
    ACTIONS(95), 1,
      anon_sym_COLON,
    STATE(48), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(89), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(91), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [98] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_PIPE_GT,
    ACTIONS(79), 1,
      anon_sym_DOT,
    STATE(48), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(69), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(67), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [135] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_DOT,
    STATE(44), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(99), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(97), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [170] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_DOT,
    STATE(48), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(106), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(104), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [205] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(77), 1,
      anon_sym_PIPE_GT,
    ACTIONS(79), 1,
      anon_sym_DOT,
    STATE(48), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(69), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(67), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [246] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(77), 1,
      anon_sym_PIPE_GT,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_COLON,
    ACTIONS(110), 1,
      anon_sym_EQ,
    STATE(48), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(89), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(91), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(108), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
  [299] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(114), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(112), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [332] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_EQ,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(77), 1,
      anon_sym_PIPE_GT,
    ACTIONS(79), 1,
      anon_sym_DOT,
    STATE(48), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(89), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(91), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(67), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [379] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_DOT,
    STATE(48), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(69), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(67), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(116), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_in,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [445] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(120), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(124), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(128), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(132), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(136), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [595] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(140), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(144), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [655] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(148), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(152), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(156), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(160), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(164), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(168), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(172), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(176), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [895] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(180), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(184), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(188), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(192), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(196), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1045] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(200), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(97), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(204), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(208), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(212), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(196), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(216), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(220), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_COLON,
  [1285] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(77), 1,
      anon_sym_PIPE_GT,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_COLON,
    ACTIONS(226), 1,
      anon_sym_EQ,
    STATE(48), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(89), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(91), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(224), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [1334] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(77), 1,
      anon_sym_PIPE_GT,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_COLON,
    STATE(48), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(89), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(91), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(228), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [1380] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(77), 1,
      anon_sym_PIPE_GT,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_COLON,
    STATE(48), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(89), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(91), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(230), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [1426] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(77), 1,
      anon_sym_PIPE_GT,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_COLON,
    STATE(48), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(89), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(91), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(232), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [1472] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(77), 1,
      anon_sym_PIPE_GT,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_COLON,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      aux_sym_expr_path_repeat1,
    STATE(108), 1,
      aux_sym_expr_table_repeat1,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(89), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(91), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1522] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(77), 1,
      anon_sym_PIPE_GT,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_COLON,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
    ACTIONS(240), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_expr_path_repeat1,
    STATE(125), 1,
      aux_sym__call_args_repeat1,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(89), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(91), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1572] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(77), 1,
      anon_sym_PIPE_GT,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_COLON,
    ACTIONS(240), 1,
      anon_sym_COMMA,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_expr_path_repeat1,
    STATE(126), 1,
      aux_sym__call_args_repeat1,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(89), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(91), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1622] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(77), 1,
      anon_sym_PIPE_GT,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_COLON,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      aux_sym_expr_path_repeat1,
    STATE(127), 1,
      aux_sym_expr_table_repeat1,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(89), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(91), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1672] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(77), 1,
      anon_sym_PIPE_GT,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_COLON,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      aux_sym_expr_path_repeat1,
    STATE(111), 1,
      aux_sym_expr_table_repeat1,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(89), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(91), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1722] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(77), 1,
      anon_sym_PIPE_GT,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_COLON,
    STATE(48), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(89), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(91), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(248), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [1768] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(77), 1,
      anon_sym_PIPE_GT,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_COLON,
    STATE(48), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(89), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(91), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(250), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1813] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(77), 1,
      anon_sym_PIPE_GT,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_COLON,
    STATE(48), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(89), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(91), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(252), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1858] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(77), 1,
      anon_sym_PIPE_GT,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_COLON,
    STATE(48), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(89), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(91), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(254), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1903] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_EQ,
    ACTIONS(198), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(196), 13,
      anon_sym_LPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [1930] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_EQ,
    ACTIONS(198), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(196), 13,
      anon_sym_LPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_GT,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [1957] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(77), 1,
      anon_sym_PIPE_GT,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_COLON,
    STATE(48), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(89), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(91), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(260), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2002] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(77), 1,
      anon_sym_PIPE_GT,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_COLON,
    ACTIONS(262), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(89), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(91), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2046] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(77), 1,
      anon_sym_PIPE_GT,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_COLON,
    ACTIONS(264), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(89), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(91), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2090] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(77), 1,
      anon_sym_PIPE_GT,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_COLON,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(89), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(91), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2134] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(77), 1,
      anon_sym_PIPE_GT,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_COLON,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(89), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(91), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2178] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(77), 1,
      anon_sym_PIPE_GT,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_COLON,
    ACTIONS(270), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      aux_sym_expr_path_repeat1,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(89), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(91), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2222] = 5,
    ACTIONS(272), 1,
      sym_comment,
    ACTIONS(274), 1,
      aux_sym_expr_string_token2,
    ACTIONS(277), 1,
      anon_sym_SQUOTE2,
    ACTIONS(279), 1,
      sym_string_esc,
    STATE(101), 1,
      aux_sym_expr_string_repeat2,
  [2238] = 5,
    ACTIONS(272), 1,
      sym_comment,
    ACTIONS(282), 1,
      aux_sym_expr_string_token1,
    ACTIONS(285), 1,
      anon_sym_DQUOTE2,
    ACTIONS(287), 1,
      sym_string_esc,
    STATE(102), 1,
      aux_sym_expr_string_repeat1,
  [2254] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_SEMI,
    STATE(103), 1,
      aux_sym__block_body_repeat1,
    ACTIONS(290), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
  [2268] = 5,
    ACTIONS(272), 1,
      sym_comment,
    ACTIONS(295), 1,
      aux_sym_expr_string_token1,
    ACTIONS(297), 1,
      anon_sym_DQUOTE2,
    ACTIONS(299), 1,
      sym_string_esc,
    STATE(102), 1,
      aux_sym_expr_string_repeat1,
  [2284] = 5,
    ACTIONS(272), 1,
      sym_comment,
    ACTIONS(301), 1,
      aux_sym_expr_string_token1,
    ACTIONS(303), 1,
      anon_sym_DQUOTE2,
    ACTIONS(305), 1,
      sym_string_esc,
    STATE(104), 1,
      aux_sym_expr_string_repeat1,
  [2300] = 5,
    ACTIONS(272), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_SQUOTE2,
    ACTIONS(307), 1,
      aux_sym_expr_string_token2,
    ACTIONS(309), 1,
      sym_string_esc,
    STATE(107), 1,
      aux_sym_expr_string_repeat2,
  [2316] = 5,
    ACTIONS(272), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_SQUOTE2,
    ACTIONS(311), 1,
      aux_sym_expr_string_token2,
    ACTIONS(313), 1,
      sym_string_esc,
    STATE(101), 1,
      aux_sym_expr_string_repeat2,
  [2332] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
    STATE(122), 1,
      aux_sym_expr_table_repeat1,
  [2345] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      aux_sym__decl_args_repeat1,
  [2358] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(323), 1,
      anon_sym_SEMI,
    STATE(113), 1,
      aux_sym__block_body_repeat1,
  [2371] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
    STATE(122), 1,
      aux_sym_expr_table_repeat1,
  [2384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2393] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 1,
      anon_sym_SEMI,
    STATE(103), 1,
      aux_sym__block_body_repeat1,
  [2406] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym__decl_args_repeat1,
  [2419] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(331), 1,
      anon_sym_SEMI,
    STATE(103), 1,
      aux_sym__block_body_repeat1,
  [2432] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(331), 1,
      anon_sym_SEMI,
    STATE(129), 1,
      aux_sym__block_body_repeat1,
  [2445] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_SEMI,
    ACTIONS(335), 1,
      anon_sym_RBRACE,
    STATE(123), 1,
      aux_sym__block_body_repeat1,
  [2458] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_SEMI,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
    STATE(115), 1,
      aux_sym__block_body_repeat1,
  [2471] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(341), 1,
      anon_sym_SEMI,
    STATE(103), 1,
      aux_sym__block_body_repeat1,
  [2484] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_RPAREN,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      aux_sym__call_args_repeat1,
  [2497] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
    ACTIONS(348), 1,
      aux_sym_ident_token1,
    STATE(114), 1,
      sym_ident,
  [2510] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    STATE(122), 1,
      aux_sym_expr_table_repeat1,
  [2523] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(353), 1,
      anon_sym_SEMI,
    STATE(103), 1,
      aux_sym__block_body_repeat1,
  [2536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2545] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_COMMA,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      aux_sym__call_args_repeat1,
  [2558] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_COMMA,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      aux_sym__call_args_repeat1,
  [2571] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(359), 1,
      anon_sym_RBRACE,
    STATE(122), 1,
      aux_sym_expr_table_repeat1,
  [2584] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
    ACTIONS(363), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      aux_sym__decl_args_repeat1,
  [2597] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(366), 1,
      anon_sym_SEMI,
    STATE(103), 1,
      aux_sym__block_body_repeat1,
  [2610] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(366), 1,
      anon_sym_SEMI,
    STATE(119), 1,
      aux_sym__block_body_repeat1,
  [2623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      aux_sym_ident_token1,
    STATE(144), 1,
      sym_ident,
  [2633] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      aux_sym_ident_token1,
    STATE(139), 1,
      sym_ident,
  [2643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      aux_sym_ident_token1,
    STATE(73), 1,
      sym_ident,
  [2653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      aux_sym_ident_token1,
    STATE(138), 1,
      sym_ident,
  [2663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2671] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      aux_sym_ident_token1,
    STATE(135), 1,
      sym_ident,
  [2681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_EQ,
  [2688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
  [2695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_EQ,
  [2702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_LBRACE,
  [2709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      ts_builtin_sym_end,
  [2716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_LPAREN,
  [2723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
  [2730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_in,
  [2737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
  [2744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LBRACE,
  [2751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_LBRACE,
  [2758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_EQ,
  [2765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(41)] = 0,
  [SMALL_STATE(42)] = 43,
  [SMALL_STATE(43)] = 98,
  [SMALL_STATE(44)] = 135,
  [SMALL_STATE(45)] = 170,
  [SMALL_STATE(46)] = 205,
  [SMALL_STATE(47)] = 246,
  [SMALL_STATE(48)] = 299,
  [SMALL_STATE(49)] = 332,
  [SMALL_STATE(50)] = 379,
  [SMALL_STATE(51)] = 414,
  [SMALL_STATE(52)] = 445,
  [SMALL_STATE(53)] = 475,
  [SMALL_STATE(54)] = 505,
  [SMALL_STATE(55)] = 535,
  [SMALL_STATE(56)] = 565,
  [SMALL_STATE(57)] = 595,
  [SMALL_STATE(58)] = 625,
  [SMALL_STATE(59)] = 655,
  [SMALL_STATE(60)] = 685,
  [SMALL_STATE(61)] = 715,
  [SMALL_STATE(62)] = 745,
  [SMALL_STATE(63)] = 775,
  [SMALL_STATE(64)] = 805,
  [SMALL_STATE(65)] = 835,
  [SMALL_STATE(66)] = 865,
  [SMALL_STATE(67)] = 895,
  [SMALL_STATE(68)] = 925,
  [SMALL_STATE(69)] = 955,
  [SMALL_STATE(70)] = 985,
  [SMALL_STATE(71)] = 1015,
  [SMALL_STATE(72)] = 1045,
  [SMALL_STATE(73)] = 1075,
  [SMALL_STATE(74)] = 1105,
  [SMALL_STATE(75)] = 1135,
  [SMALL_STATE(76)] = 1165,
  [SMALL_STATE(77)] = 1195,
  [SMALL_STATE(78)] = 1225,
  [SMALL_STATE(79)] = 1255,
  [SMALL_STATE(80)] = 1285,
  [SMALL_STATE(81)] = 1334,
  [SMALL_STATE(82)] = 1380,
  [SMALL_STATE(83)] = 1426,
  [SMALL_STATE(84)] = 1472,
  [SMALL_STATE(85)] = 1522,
  [SMALL_STATE(86)] = 1572,
  [SMALL_STATE(87)] = 1622,
  [SMALL_STATE(88)] = 1672,
  [SMALL_STATE(89)] = 1722,
  [SMALL_STATE(90)] = 1768,
  [SMALL_STATE(91)] = 1813,
  [SMALL_STATE(92)] = 1858,
  [SMALL_STATE(93)] = 1903,
  [SMALL_STATE(94)] = 1930,
  [SMALL_STATE(95)] = 1957,
  [SMALL_STATE(96)] = 2002,
  [SMALL_STATE(97)] = 2046,
  [SMALL_STATE(98)] = 2090,
  [SMALL_STATE(99)] = 2134,
  [SMALL_STATE(100)] = 2178,
  [SMALL_STATE(101)] = 2222,
  [SMALL_STATE(102)] = 2238,
  [SMALL_STATE(103)] = 2254,
  [SMALL_STATE(104)] = 2268,
  [SMALL_STATE(105)] = 2284,
  [SMALL_STATE(106)] = 2300,
  [SMALL_STATE(107)] = 2316,
  [SMALL_STATE(108)] = 2332,
  [SMALL_STATE(109)] = 2345,
  [SMALL_STATE(110)] = 2358,
  [SMALL_STATE(111)] = 2371,
  [SMALL_STATE(112)] = 2384,
  [SMALL_STATE(113)] = 2393,
  [SMALL_STATE(114)] = 2406,
  [SMALL_STATE(115)] = 2419,
  [SMALL_STATE(116)] = 2432,
  [SMALL_STATE(117)] = 2445,
  [SMALL_STATE(118)] = 2458,
  [SMALL_STATE(119)] = 2471,
  [SMALL_STATE(120)] = 2484,
  [SMALL_STATE(121)] = 2497,
  [SMALL_STATE(122)] = 2510,
  [SMALL_STATE(123)] = 2523,
  [SMALL_STATE(124)] = 2536,
  [SMALL_STATE(125)] = 2545,
  [SMALL_STATE(126)] = 2558,
  [SMALL_STATE(127)] = 2571,
  [SMALL_STATE(128)] = 2584,
  [SMALL_STATE(129)] = 2597,
  [SMALL_STATE(130)] = 2610,
  [SMALL_STATE(131)] = 2623,
  [SMALL_STATE(132)] = 2633,
  [SMALL_STATE(133)] = 2643,
  [SMALL_STATE(134)] = 2653,
  [SMALL_STATE(135)] = 2663,
  [SMALL_STATE(136)] = 2671,
  [SMALL_STATE(137)] = 2681,
  [SMALL_STATE(138)] = 2688,
  [SMALL_STATE(139)] = 2695,
  [SMALL_STATE(140)] = 2702,
  [SMALL_STATE(141)] = 2709,
  [SMALL_STATE(142)] = 2716,
  [SMALL_STATE(143)] = 2723,
  [SMALL_STATE(144)] = 2730,
  [SMALL_STATE(145)] = 2737,
  [SMALL_STATE(146)] = 2744,
  [SMALL_STATE(147)] = 2751,
  [SMALL_STATE(148)] = 2758,
  [SMALL_STATE(149)] = 2765,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_binop, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_binop, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_if, 5),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_if, 5),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_path_repeat1, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_path_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_path_repeat1, 2), SHIFT_REPEAT(133),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_unop, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_unop, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_if, 7),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_if, 7),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_path, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_path, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meth_call, 6),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meth_call, 6),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_func, 6),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_func, 6),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_string, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_string, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_block, 5),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_block, 5),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 5),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 5),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_func, 9),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_func, 9),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_func, 5),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_func, 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 4),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_call, 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 5),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_call, 5),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_block, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_block, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meth_call, 5),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meth_call, 5),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_string, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_string, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 6),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 6),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_paren, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_paren, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_block, 4),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_block, 4),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 4),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 4),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_call, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_func, 8),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_func, 8),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 7),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 7),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_func, 7),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_func, 7),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_bool, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_bool, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meth_call, 7),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meth_call, 7),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_table, 8),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_table, 8),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_stmt, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_stmt, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 7),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_table_repeat1, 6),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_table_repeat1, 4),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_table_repeat1, 2),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__call_args_repeat1, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_string_repeat2, 2), SHIFT_REPEAT(101),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_string_repeat2, 2),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_string_repeat2, 2), SHIFT_REPEAT(101),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_string_repeat1, 2), SHIFT_REPEAT(102),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_string_repeat1, 2),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_string_repeat1, 2), SHIFT_REPEAT(102),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_body_repeat1, 2), SHIFT_REPEAT(13),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__call_args_repeat1, 2), SHIFT_REPEAT(35),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_table_repeat1, 2), SHIFT_REPEAT(16),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_args_repeat1, 2),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decl_args_repeat1, 2), SHIFT_REPEAT(136),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [376] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_fn, 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
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
