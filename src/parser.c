#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 14
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_integer = 1,
  sym_float = 2,
  sym_symbol = 3,
  sym_keyword = 4,
  anon_sym_DQUOTE = 5,
  aux_sym_string_token1 = 6,
  aux_sym_string_token2 = 7,
  anon_sym_SLASH = 8,
  sym_source_file = 9,
  sym_expression = 10,
  sym_string = 11,
  sym_ratio = 12,
  aux_sym_source_file_repeat1 = 13,
  aux_sym_string_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_symbol] = "symbol",
  [sym_keyword] = "keyword",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_SLASH] = "/",
  [sym_source_file] = "source_file",
  [sym_expression] = "expression",
  [sym_string] = "string",
  [sym_ratio] = "ratio",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_symbol] = sym_symbol,
  [sym_keyword] = sym_keyword,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_source_file] = sym_source_file,
  [sym_expression] = sym_expression,
  [sym_string] = sym_string,
  [sym_ratio] = sym_ratio,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
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
  [sym_symbol] = {
    .visible = true,
    .named = true,
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
  [anon_sym_SLASH] = {
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
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_ratio] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 8:
      if (eof) ADVANCE(10);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(20);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(20);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_symbol);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(20);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(20);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(24);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(12),
    [sym_expression] = STATE(2),
    [sym_string] = STATE(5),
    [sym_ratio] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(7),
    [sym_symbol] = ACTIONS(7),
    [sym_keyword] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
  },
  [2] = {
    [sym_expression] = STATE(3),
    [sym_string] = STATE(5),
    [sym_ratio] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(7),
    [sym_symbol] = ACTIONS(7),
    [sym_keyword] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
  },
  [3] = {
    [sym_expression] = STATE(3),
    [sym_string] = STATE(5),
    [sym_ratio] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_integer] = ACTIONS(15),
    [sym_float] = ACTIONS(18),
    [sym_symbol] = ACTIONS(18),
    [sym_keyword] = ACTIONS(18),
    [anon_sym_DQUOTE] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    ACTIONS(28), 1,
      anon_sym_SLASH,
    ACTIONS(26), 5,
      sym_integer,
      sym_float,
      sym_symbol,
      sym_keyword,
      anon_sym_DQUOTE,
  [14] = 2,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    ACTIONS(26), 5,
      sym_integer,
      sym_float,
      sym_symbol,
      sym_keyword,
      anon_sym_DQUOTE,
  [25] = 2,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 5,
      sym_integer,
      sym_float,
      sym_symbol,
      sym_keyword,
      anon_sym_DQUOTE,
  [36] = 2,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 5,
      sym_integer,
      sym_float,
      sym_symbol,
      sym_keyword,
      anon_sym_DQUOTE,
  [47] = 2,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 5,
      sym_integer,
      sym_float,
      sym_symbol,
      sym_keyword,
      anon_sym_DQUOTE,
  [58] = 4,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      aux_sym_string_token1,
    ACTIONS(46), 1,
      aux_sym_string_token2,
    STATE(10), 1,
      aux_sym_string_repeat1,
  [71] = 4,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      aux_sym_string_token1,
    ACTIONS(52), 1,
      aux_sym_string_token2,
    STATE(11), 1,
      aux_sym_string_repeat1,
  [84] = 4,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      aux_sym_string_token1,
    ACTIONS(59), 1,
      aux_sym_string_token2,
    STATE(11), 1,
      aux_sym_string_repeat1,
  [97] = 1,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
  [101] = 1,
    ACTIONS(64), 1,
      sym_integer,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 14,
  [SMALL_STATE(6)] = 25,
  [SMALL_STATE(7)] = 36,
  [SMALL_STATE(8)] = 47,
  [SMALL_STATE(9)] = 58,
  [SMALL_STATE(10)] = 71,
  [SMALL_STATE(11)] = 84,
  [SMALL_STATE(12)] = 97,
  [SMALL_STATE(13)] = 101,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ratio, 3),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ratio, 3),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(11),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(11),
  [62] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
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
