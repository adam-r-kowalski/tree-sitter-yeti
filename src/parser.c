#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_integer = 1,
  sym_float = 2,
  aux_sym_symbol_token1 = 3,
  anon_sym_SLASH = 4,
  sym_keyword = 5,
  anon_sym_DQUOTE = 6,
  aux_sym_string_token1 = 7,
  aux_sym_string_token2 = 8,
  anon_sym_LBRACK = 9,
  anon_sym_RBRACK = 10,
  anon_sym_SEMI = 11,
  aux_sym_comment_token1 = 12,
  sym_source_file = 13,
  sym_expression = 14,
  sym_symbol = 15,
  sym_string = 16,
  sym_ratio = 17,
  sym_array = 18,
  sym_comment = 19,
  aux_sym_source_file_repeat1 = 20,
  aux_sym_string_repeat1 = 21,
  aux_sym_array_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [aux_sym_symbol_token1] = "symbol_token1",
  [anon_sym_SLASH] = "/",
  [sym_keyword] = "keyword",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_SEMI] = ";",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_source_file] = "source_file",
  [sym_expression] = "expression",
  [sym_symbol] = "symbol",
  [sym_string] = "string",
  [sym_ratio] = "ratio",
  [sym_array] = "array",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [aux_sym_symbol_token1] = aux_sym_symbol_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_keyword] = sym_keyword,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_source_file] = sym_source_file,
  [sym_expression] = sym_expression,
  [sym_symbol] = sym_symbol,
  [sym_string] = sym_string,
  [sym_ratio] = sym_ratio,
  [sym_array] = sym_array,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_symbol_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_ratio] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
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
  [7] = 4,
  [8] = 3,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 9,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 18,
  [20] = 13,
  [21] = 10,
  [22] = 17,
  [23] = 11,
  [24] = 12,
  [25] = 14,
  [26] = 16,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 27,
  [31] = 29,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 32,
  [36] = 34,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(0)
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ';') ADVANCE(19);
      if (lookahead == '[') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == ']') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (lookahead == '!' ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 3:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(14);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 20},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 20},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [aux_sym_symbol_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(33),
    [sym_expression] = STATE(2),
    [sym_symbol] = STATE(11),
    [sym_string] = STATE(11),
    [sym_ratio] = STATE(11),
    [sym_array] = STATE(11),
    [sym_comment] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(7),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_SLASH] = ACTIONS(11),
    [sym_keyword] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_SEMI] = ACTIONS(17),
  },
  [2] = {
    [sym_expression] = STATE(6),
    [sym_symbol] = STATE(11),
    [sym_string] = STATE(11),
    [sym_ratio] = STATE(11),
    [sym_array] = STATE(11),
    [sym_comment] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(7),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_SLASH] = ACTIONS(11),
    [sym_keyword] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_SEMI] = ACTIONS(17),
  },
  [3] = {
    [sym_expression] = STATE(5),
    [sym_symbol] = STATE(23),
    [sym_string] = STATE(23),
    [sym_ratio] = STATE(23),
    [sym_array] = STATE(23),
    [sym_comment] = STATE(23),
    [aux_sym_array_repeat1] = STATE(5),
    [sym_integer] = ACTIONS(21),
    [sym_float] = ACTIONS(23),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(27),
    [sym_keyword] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
  },
  [4] = {
    [sym_expression] = STATE(3),
    [sym_symbol] = STATE(23),
    [sym_string] = STATE(23),
    [sym_ratio] = STATE(23),
    [sym_array] = STATE(23),
    [sym_comment] = STATE(23),
    [aux_sym_array_repeat1] = STATE(3),
    [sym_integer] = ACTIONS(21),
    [sym_float] = ACTIONS(23),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(27),
    [sym_keyword] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(35),
  },
  [5] = {
    [sym_expression] = STATE(5),
    [sym_symbol] = STATE(23),
    [sym_string] = STATE(23),
    [sym_ratio] = STATE(23),
    [sym_array] = STATE(23),
    [sym_comment] = STATE(23),
    [aux_sym_array_repeat1] = STATE(5),
    [sym_integer] = ACTIONS(39),
    [sym_float] = ACTIONS(42),
    [aux_sym_symbol_token1] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(48),
    [sym_keyword] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(54),
    [anon_sym_RBRACK] = ACTIONS(57),
    [anon_sym_SEMI] = ACTIONS(59),
  },
  [6] = {
    [sym_expression] = STATE(6),
    [sym_symbol] = STATE(11),
    [sym_string] = STATE(11),
    [sym_ratio] = STATE(11),
    [sym_array] = STATE(11),
    [sym_comment] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(62),
    [sym_integer] = ACTIONS(64),
    [sym_float] = ACTIONS(67),
    [aux_sym_symbol_token1] = ACTIONS(70),
    [anon_sym_SLASH] = ACTIONS(73),
    [sym_keyword] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(82),
  },
  [7] = {
    [sym_expression] = STATE(8),
    [sym_symbol] = STATE(23),
    [sym_string] = STATE(23),
    [sym_ratio] = STATE(23),
    [sym_array] = STATE(23),
    [sym_comment] = STATE(23),
    [aux_sym_array_repeat1] = STATE(8),
    [sym_integer] = ACTIONS(21),
    [sym_float] = ACTIONS(23),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(27),
    [sym_keyword] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(85),
    [anon_sym_SEMI] = ACTIONS(35),
  },
  [8] = {
    [sym_expression] = STATE(5),
    [sym_symbol] = STATE(23),
    [sym_string] = STATE(23),
    [sym_ratio] = STATE(23),
    [sym_array] = STATE(23),
    [sym_comment] = STATE(23),
    [aux_sym_array_repeat1] = STATE(5),
    [sym_integer] = ACTIONS(21),
    [sym_float] = ACTIONS(23),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(27),
    [sym_keyword] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(87),
    [anon_sym_SEMI] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(91), 2,
      sym_integer,
      aux_sym_symbol_token1,
    ACTIONS(89), 7,
      ts_builtin_sym_end,
      sym_float,
      anon_sym_SLASH,
      sym_keyword,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_SEMI,
  [14] = 3,
    ACTIONS(97), 1,
      anon_sym_SLASH,
    ACTIONS(93), 2,
      sym_integer,
      aux_sym_symbol_token1,
    ACTIONS(95), 6,
      sym_float,
      sym_keyword,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [30] = 2,
    ACTIONS(93), 2,
      sym_integer,
      aux_sym_symbol_token1,
    ACTIONS(95), 7,
      ts_builtin_sym_end,
      sym_float,
      anon_sym_SLASH,
      sym_keyword,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_SEMI,
  [44] = 2,
    ACTIONS(101), 2,
      sym_integer,
      aux_sym_symbol_token1,
    ACTIONS(99), 7,
      ts_builtin_sym_end,
      sym_float,
      anon_sym_SLASH,
      sym_keyword,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_SEMI,
  [58] = 2,
    ACTIONS(103), 2,
      sym_integer,
      aux_sym_symbol_token1,
    ACTIONS(105), 7,
      sym_float,
      anon_sym_SLASH,
      sym_keyword,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [72] = 2,
    ACTIONS(109), 2,
      sym_integer,
      aux_sym_symbol_token1,
    ACTIONS(107), 7,
      ts_builtin_sym_end,
      sym_float,
      anon_sym_SLASH,
      sym_keyword,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_SEMI,
  [86] = 2,
    ACTIONS(91), 2,
      sym_integer,
      aux_sym_symbol_token1,
    ACTIONS(89), 7,
      sym_float,
      anon_sym_SLASH,
      sym_keyword,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [100] = 2,
    ACTIONS(113), 2,
      sym_integer,
      aux_sym_symbol_token1,
    ACTIONS(111), 7,
      ts_builtin_sym_end,
      sym_float,
      anon_sym_SLASH,
      sym_keyword,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_SEMI,
  [114] = 2,
    ACTIONS(117), 2,
      sym_integer,
      aux_sym_symbol_token1,
    ACTIONS(115), 7,
      ts_builtin_sym_end,
      sym_float,
      anon_sym_SLASH,
      sym_keyword,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_SEMI,
  [128] = 2,
    ACTIONS(121), 2,
      sym_integer,
      aux_sym_symbol_token1,
    ACTIONS(119), 7,
      ts_builtin_sym_end,
      sym_float,
      anon_sym_SLASH,
      sym_keyword,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_SEMI,
  [142] = 2,
    ACTIONS(121), 2,
      sym_integer,
      aux_sym_symbol_token1,
    ACTIONS(119), 7,
      sym_float,
      anon_sym_SLASH,
      sym_keyword,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [156] = 2,
    ACTIONS(103), 2,
      sym_integer,
      aux_sym_symbol_token1,
    ACTIONS(105), 7,
      ts_builtin_sym_end,
      sym_float,
      anon_sym_SLASH,
      sym_keyword,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_SEMI,
  [170] = 3,
    ACTIONS(123), 1,
      anon_sym_SLASH,
    ACTIONS(93), 2,
      sym_integer,
      aux_sym_symbol_token1,
    ACTIONS(95), 6,
      ts_builtin_sym_end,
      sym_float,
      sym_keyword,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_SEMI,
  [186] = 2,
    ACTIONS(117), 2,
      sym_integer,
      aux_sym_symbol_token1,
    ACTIONS(115), 7,
      sym_float,
      anon_sym_SLASH,
      sym_keyword,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [200] = 2,
    ACTIONS(93), 2,
      sym_integer,
      aux_sym_symbol_token1,
    ACTIONS(95), 7,
      sym_float,
      anon_sym_SLASH,
      sym_keyword,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [214] = 2,
    ACTIONS(101), 2,
      sym_integer,
      aux_sym_symbol_token1,
    ACTIONS(99), 7,
      sym_float,
      anon_sym_SLASH,
      sym_keyword,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [228] = 2,
    ACTIONS(109), 2,
      sym_integer,
      aux_sym_symbol_token1,
    ACTIONS(107), 7,
      sym_float,
      anon_sym_SLASH,
      sym_keyword,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [242] = 2,
    ACTIONS(113), 2,
      sym_integer,
      aux_sym_symbol_token1,
    ACTIONS(111), 7,
      sym_float,
      anon_sym_SLASH,
      sym_keyword,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [256] = 4,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    ACTIONS(127), 1,
      aux_sym_string_token1,
    ACTIONS(129), 1,
      aux_sym_string_token2,
    STATE(29), 1,
      aux_sym_string_repeat1,
  [269] = 4,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      aux_sym_string_token1,
    ACTIONS(136), 1,
      aux_sym_string_token2,
    STATE(28), 1,
      aux_sym_string_repeat1,
  [282] = 4,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      aux_sym_string_token1,
    ACTIONS(143), 1,
      aux_sym_string_token2,
    STATE(28), 1,
      aux_sym_string_repeat1,
  [295] = 4,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      aux_sym_string_token1,
    ACTIONS(149), 1,
      aux_sym_string_token2,
    STATE(31), 1,
      aux_sym_string_repeat1,
  [308] = 4,
    ACTIONS(141), 1,
      aux_sym_string_token1,
    ACTIONS(143), 1,
      aux_sym_string_token2,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      aux_sym_string_repeat1,
  [321] = 1,
    ACTIONS(153), 1,
      sym_integer,
  [325] = 1,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
  [329] = 1,
    ACTIONS(157), 1,
      aux_sym_comment_token1,
  [333] = 1,
    ACTIONS(159), 1,
      sym_integer,
  [337] = 1,
    ACTIONS(161), 1,
      aux_sym_comment_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 14,
  [SMALL_STATE(11)] = 30,
  [SMALL_STATE(12)] = 44,
  [SMALL_STATE(13)] = 58,
  [SMALL_STATE(14)] = 72,
  [SMALL_STATE(15)] = 86,
  [SMALL_STATE(16)] = 100,
  [SMALL_STATE(17)] = 114,
  [SMALL_STATE(18)] = 128,
  [SMALL_STATE(19)] = 142,
  [SMALL_STATE(20)] = 156,
  [SMALL_STATE(21)] = 170,
  [SMALL_STATE(22)] = 186,
  [SMALL_STATE(23)] = 200,
  [SMALL_STATE(24)] = 214,
  [SMALL_STATE(25)] = 228,
  [SMALL_STATE(26)] = 242,
  [SMALL_STATE(27)] = 256,
  [SMALL_STATE(28)] = 269,
  [SMALL_STATE(29)] = 282,
  [SMALL_STATE(30)] = 295,
  [SMALL_STATE(31)] = 308,
  [SMALL_STATE(32)] = 321,
  [SMALL_STATE(33)] = 325,
  [SMALL_STATE(34)] = 329,
  [SMALL_STATE(35)] = 333,
  [SMALL_STATE(36)] = 337,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(10),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(23),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(24),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(24),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(30),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(4),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(34),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ratio, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ratio, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(28),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(28),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [155] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_yeti(void) {
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
