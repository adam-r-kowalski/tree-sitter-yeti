#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
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
  sym_source_file = 11,
  sym_expression = 12,
  sym_symbol = 13,
  sym_string = 14,
  sym_ratio = 15,
  sym_array = 16,
  aux_sym_source_file_repeat1 = 17,
  aux_sym_string_repeat1 = 18,
  aux_sym_array_repeat1 = 19,
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
  [sym_source_file] = "source_file",
  [sym_expression] = "expression",
  [sym_symbol] = "symbol",
  [sym_string] = "string",
  [sym_ratio] = "ratio",
  [sym_array] = "array",
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
  [sym_source_file] = sym_source_file,
  [sym_expression] = sym_expression,
  [sym_symbol] = sym_symbol,
  [sym_string] = sym_string,
  [sym_ratio] = sym_ratio,
  [sym_array] = sym_array,
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
  [5] = 2,
  [6] = 3,
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
  [17] = 9,
  [18] = 14,
  [19] = 10,
  [20] = 16,
  [21] = 11,
  [22] = 12,
  [23] = 13,
  [24] = 15,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 25,
  [29] = 27,
  [30] = 30,
  [31] = 30,
  [32] = 32,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '[') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == ']') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
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
    case 1:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
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
          lookahead == ' ') ADVANCE(15);
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
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 0},
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
  },
  [1] = {
    [sym_source_file] = STATE(32),
    [sym_expression] = STATE(8),
    [sym_symbol] = STATE(11),
    [sym_string] = STATE(11),
    [sym_ratio] = STATE(11),
    [sym_array] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(7),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_SLASH] = ACTIONS(11),
    [sym_keyword] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
  },
  [2] = {
    [sym_expression] = STATE(4),
    [sym_symbol] = STATE(21),
    [sym_string] = STATE(21),
    [sym_ratio] = STATE(21),
    [sym_array] = STATE(21),
    [aux_sym_array_repeat1] = STATE(4),
    [sym_integer] = ACTIONS(17),
    [sym_float] = ACTIONS(19),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(23),
    [sym_keyword] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(29),
  },
  [3] = {
    [sym_expression] = STATE(2),
    [sym_symbol] = STATE(21),
    [sym_string] = STATE(21),
    [sym_ratio] = STATE(21),
    [sym_array] = STATE(21),
    [aux_sym_array_repeat1] = STATE(2),
    [sym_integer] = ACTIONS(17),
    [sym_float] = ACTIONS(19),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(23),
    [sym_keyword] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(31),
  },
  [4] = {
    [sym_expression] = STATE(4),
    [sym_symbol] = STATE(21),
    [sym_string] = STATE(21),
    [sym_ratio] = STATE(21),
    [sym_array] = STATE(21),
    [aux_sym_array_repeat1] = STATE(4),
    [sym_integer] = ACTIONS(33),
    [sym_float] = ACTIONS(36),
    [aux_sym_symbol_token1] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(42),
    [sym_keyword] = ACTIONS(36),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(48),
    [anon_sym_RBRACK] = ACTIONS(51),
  },
  [5] = {
    [sym_expression] = STATE(4),
    [sym_symbol] = STATE(21),
    [sym_string] = STATE(21),
    [sym_ratio] = STATE(21),
    [sym_array] = STATE(21),
    [aux_sym_array_repeat1] = STATE(4),
    [sym_integer] = ACTIONS(17),
    [sym_float] = ACTIONS(19),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(23),
    [sym_keyword] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(53),
  },
  [6] = {
    [sym_expression] = STATE(5),
    [sym_symbol] = STATE(21),
    [sym_string] = STATE(21),
    [sym_ratio] = STATE(21),
    [sym_array] = STATE(21),
    [aux_sym_array_repeat1] = STATE(5),
    [sym_integer] = ACTIONS(17),
    [sym_float] = ACTIONS(19),
    [aux_sym_symbol_token1] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(23),
    [sym_keyword] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(55),
  },
  [7] = {
    [sym_expression] = STATE(7),
    [sym_symbol] = STATE(11),
    [sym_string] = STATE(11),
    [sym_ratio] = STATE(11),
    [sym_array] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym_integer] = ACTIONS(59),
    [sym_float] = ACTIONS(62),
    [aux_sym_symbol_token1] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(68),
    [sym_keyword] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(74),
  },
  [8] = {
    [sym_expression] = STATE(7),
    [sym_symbol] = STATE(11),
    [sym_string] = STATE(11),
    [sym_ratio] = STATE(11),
    [sym_array] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(7),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_SLASH] = ACTIONS(11),
    [sym_keyword] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(81), 2,
      sym_integer,
      aux_sym_symbol_token1,
    ACTIONS(79), 6,
      ts_builtin_sym_end,
      sym_float,
      anon_sym_SLASH,
      sym_keyword,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
  [13] = 3,
    ACTIONS(87), 1,
      anon_sym_SLASH,
    ACTIONS(83), 2,
      sym_integer,
      aux_sym_symbol_token1,
    ACTIONS(85), 5,
      sym_float,
      sym_keyword,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [28] = 2,
    ACTIONS(83), 2,
      sym_integer,
      aux_sym_symbol_token1,
    ACTIONS(85), 6,
      ts_builtin_sym_end,
      sym_float,
      anon_sym_SLASH,
      sym_keyword,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
  [41] = 2,
    ACTIONS(91), 2,
      sym_integer,
      aux_sym_symbol_token1,
    ACTIONS(89), 6,
      ts_builtin_sym_end,
      sym_float,
      anon_sym_SLASH,
      sym_keyword,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
  [54] = 2,
    ACTIONS(95), 2,
      sym_integer,
      aux_sym_symbol_token1,
    ACTIONS(93), 6,
      ts_builtin_sym_end,
      sym_float,
      anon_sym_SLASH,
      sym_keyword,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
  [67] = 2,
    ACTIONS(97), 2,
      sym_integer,
      aux_sym_symbol_token1,
    ACTIONS(99), 6,
      sym_float,
      anon_sym_SLASH,
      sym_keyword,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [80] = 2,
    ACTIONS(103), 2,
      sym_integer,
      aux_sym_symbol_token1,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      sym_float,
      anon_sym_SLASH,
      sym_keyword,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
  [93] = 2,
    ACTIONS(107), 2,
      sym_integer,
      aux_sym_symbol_token1,
    ACTIONS(105), 6,
      ts_builtin_sym_end,
      sym_float,
      anon_sym_SLASH,
      sym_keyword,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
  [106] = 2,
    ACTIONS(81), 2,
      sym_integer,
      aux_sym_symbol_token1,
    ACTIONS(79), 6,
      sym_float,
      anon_sym_SLASH,
      sym_keyword,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [119] = 2,
    ACTIONS(97), 2,
      sym_integer,
      aux_sym_symbol_token1,
    ACTIONS(99), 6,
      ts_builtin_sym_end,
      sym_float,
      anon_sym_SLASH,
      sym_keyword,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
  [132] = 3,
    ACTIONS(109), 1,
      anon_sym_SLASH,
    ACTIONS(83), 2,
      sym_integer,
      aux_sym_symbol_token1,
    ACTIONS(85), 5,
      ts_builtin_sym_end,
      sym_float,
      sym_keyword,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
  [147] = 2,
    ACTIONS(107), 2,
      sym_integer,
      aux_sym_symbol_token1,
    ACTIONS(105), 6,
      sym_float,
      anon_sym_SLASH,
      sym_keyword,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [160] = 2,
    ACTIONS(83), 2,
      sym_integer,
      aux_sym_symbol_token1,
    ACTIONS(85), 6,
      sym_float,
      anon_sym_SLASH,
      sym_keyword,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [173] = 2,
    ACTIONS(91), 2,
      sym_integer,
      aux_sym_symbol_token1,
    ACTIONS(89), 6,
      sym_float,
      anon_sym_SLASH,
      sym_keyword,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [186] = 2,
    ACTIONS(95), 2,
      sym_integer,
      aux_sym_symbol_token1,
    ACTIONS(93), 6,
      sym_float,
      anon_sym_SLASH,
      sym_keyword,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [199] = 2,
    ACTIONS(103), 2,
      sym_integer,
      aux_sym_symbol_token1,
    ACTIONS(101), 6,
      sym_float,
      anon_sym_SLASH,
      sym_keyword,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [212] = 4,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      aux_sym_string_token1,
    ACTIONS(115), 1,
      aux_sym_string_token2,
    STATE(27), 1,
      aux_sym_string_repeat1,
  [225] = 4,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      aux_sym_string_token1,
    ACTIONS(122), 1,
      aux_sym_string_token2,
    STATE(26), 1,
      aux_sym_string_repeat1,
  [238] = 4,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    ACTIONS(127), 1,
      aux_sym_string_token1,
    ACTIONS(129), 1,
      aux_sym_string_token2,
    STATE(26), 1,
      aux_sym_string_repeat1,
  [251] = 4,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      aux_sym_string_token1,
    ACTIONS(135), 1,
      aux_sym_string_token2,
    STATE(29), 1,
      aux_sym_string_repeat1,
  [264] = 4,
    ACTIONS(127), 1,
      aux_sym_string_token1,
    ACTIONS(129), 1,
      aux_sym_string_token2,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      aux_sym_string_repeat1,
  [277] = 1,
    ACTIONS(139), 1,
      sym_integer,
  [281] = 1,
    ACTIONS(141), 1,
      sym_integer,
  [285] = 1,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 13,
  [SMALL_STATE(11)] = 28,
  [SMALL_STATE(12)] = 41,
  [SMALL_STATE(13)] = 54,
  [SMALL_STATE(14)] = 67,
  [SMALL_STATE(15)] = 80,
  [SMALL_STATE(16)] = 93,
  [SMALL_STATE(17)] = 106,
  [SMALL_STATE(18)] = 119,
  [SMALL_STATE(19)] = 132,
  [SMALL_STATE(20)] = 147,
  [SMALL_STATE(21)] = 160,
  [SMALL_STATE(22)] = 173,
  [SMALL_STATE(23)] = 186,
  [SMALL_STATE(24)] = 199,
  [SMALL_STATE(25)] = 212,
  [SMALL_STATE(26)] = 225,
  [SMALL_STATE(27)] = 238,
  [SMALL_STATE(28)] = 251,
  [SMALL_STATE(29)] = 264,
  [SMALL_STATE(30)] = 277,
  [SMALL_STATE(31)] = 281,
  [SMALL_STATE(32)] = 285,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(10),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(21),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(22),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(22),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(28),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ratio, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ratio, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(26),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(26),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [143] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
