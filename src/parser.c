#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  anon_sym_COMMA = 2,
  anon_sym_uff0c = 3,
  aux_sym_first_token1 = 4,
  sym_csv = 5,
  sym_row = 6,
  sym_cycle = 7,
  sym_cycle2 = 8,
  sym_cycle3 = 9,
  sym_cycle4 = 10,
  sym_first = 11,
  sym_second = 12,
  sym_third = 13,
  aux_sym_csv_repeat1 = 14,
  aux_sym_row_repeat1 = 15,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_COMMA] = ",",
  [anon_sym_uff0c] = "\uff0c",
  [aux_sym_first_token1] = "first_token1",
  [sym_csv] = "csv",
  [sym_row] = "row",
  [sym_cycle] = "cycle",
  [sym_cycle2] = "cycle2",
  [sym_cycle3] = "cycle3",
  [sym_cycle4] = "cycle4",
  [sym_first] = "first",
  [sym_second] = "second",
  [sym_third] = "third",
  [aux_sym_csv_repeat1] = "csv_repeat1",
  [aux_sym_row_repeat1] = "row_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_uff0c] = anon_sym_uff0c,
  [aux_sym_first_token1] = aux_sym_first_token1,
  [sym_csv] = sym_csv,
  [sym_row] = sym_row,
  [sym_cycle] = sym_cycle,
  [sym_cycle2] = sym_cycle2,
  [sym_cycle3] = sym_cycle3,
  [sym_cycle4] = sym_cycle4,
  [sym_first] = sym_first,
  [sym_second] = sym_second,
  [sym_third] = sym_third,
  [aux_sym_csv_repeat1] = aux_sym_csv_repeat1,
  [aux_sym_row_repeat1] = aux_sym_row_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uff0c] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_first_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_csv] = {
    .visible = true,
    .named = true,
  },
  [sym_row] = {
    .visible = true,
    .named = true,
  },
  [sym_cycle] = {
    .visible = true,
    .named = true,
  },
  [sym_cycle2] = {
    .visible = true,
    .named = true,
  },
  [sym_cycle3] = {
    .visible = true,
    .named = true,
  },
  [sym_cycle4] = {
    .visible = true,
    .named = true,
  },
  [sym_first] = {
    .visible = true,
    .named = true,
  },
  [sym_second] = {
    .visible = true,
    .named = true,
  },
  [sym_third] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_csv_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_row_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == '\r') SKIP(0)
      if (lookahead == ',') ADVANCE(6);
      if (lookahead == 65292) ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 1:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(11);
      END_STATE();
    case 2:
      if (eof) ADVANCE(3);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ',') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_uff0c);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ',') ADVANCE(11);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_first_token1);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == 65292) ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != ',') ADVANCE(11);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_first_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != ',') ADVANCE(11);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_first_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != ',') ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_first_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ',') ADVANCE(11);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_uff0c] = ACTIONS(1),
    [aux_sym_first_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_csv] = STATE(17),
    [sym_row] = STATE(2),
    [sym_cycle] = STATE(4),
    [sym_cycle2] = STATE(4),
    [sym_cycle3] = STATE(4),
    [sym_cycle4] = STATE(4),
    [sym_first] = STATE(8),
    [aux_sym_csv_repeat1] = STATE(2),
    [aux_sym_row_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_first_token1] = ACTIONS(7),
  },
  [2] = {
    [sym_row] = STATE(3),
    [sym_cycle] = STATE(4),
    [sym_cycle2] = STATE(4),
    [sym_cycle3] = STATE(4),
    [sym_cycle4] = STATE(4),
    [sym_first] = STATE(8),
    [aux_sym_csv_repeat1] = STATE(3),
    [aux_sym_row_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_first_token1] = ACTIONS(7),
  },
  [3] = {
    [sym_row] = STATE(3),
    [sym_cycle] = STATE(4),
    [sym_cycle2] = STATE(4),
    [sym_cycle3] = STATE(4),
    [sym_cycle4] = STATE(4),
    [sym_first] = STATE(8),
    [aux_sym_csv_repeat1] = STATE(3),
    [aux_sym_row_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(13),
    [aux_sym_first_token1] = ACTIONS(16),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(7), 1,
      aux_sym_first_token1,
    ACTIONS(19), 1,
      anon_sym_LF,
    STATE(8), 1,
      sym_first,
    STATE(5), 5,
      sym_cycle,
      sym_cycle2,
      sym_cycle3,
      sym_cycle4,
      aux_sym_row_repeat1,
  [17] = 4,
    ACTIONS(21), 1,
      anon_sym_LF,
    ACTIONS(23), 1,
      aux_sym_first_token1,
    STATE(8), 1,
      sym_first,
    STATE(5), 5,
      sym_cycle,
      sym_cycle2,
      sym_cycle3,
      sym_cycle4,
      aux_sym_row_repeat1,
  [34] = 2,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    ACTIONS(28), 2,
      anon_sym_LF,
      aux_sym_first_token1,
  [42] = 1,
    ACTIONS(30), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      aux_sym_first_token1,
  [48] = 2,
    ACTIONS(34), 1,
      anon_sym_COMMA,
    ACTIONS(32), 2,
      anon_sym_LF,
      aux_sym_first_token1,
  [56] = 2,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 2,
      anon_sym_LF,
      aux_sym_first_token1,
  [64] = 1,
    ACTIONS(40), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      aux_sym_first_token1,
  [70] = 2,
    ACTIONS(44), 1,
      anon_sym_COMMA,
    ACTIONS(42), 2,
      anon_sym_LF,
      aux_sym_first_token1,
  [78] = 1,
    ACTIONS(46), 3,
      anon_sym_LF,
      anon_sym_uff0c,
      aux_sym_first_token1,
  [84] = 2,
    ACTIONS(50), 1,
      anon_sym_uff0c,
    ACTIONS(48), 2,
      anon_sym_LF,
      aux_sym_first_token1,
  [92] = 2,
    ACTIONS(52), 1,
      aux_sym_first_token1,
    STATE(11), 1,
      sym_second,
  [99] = 2,
    ACTIONS(54), 1,
      aux_sym_first_token1,
    STATE(13), 1,
      sym_third,
  [106] = 1,
    ACTIONS(56), 2,
      anon_sym_LF,
      aux_sym_first_token1,
  [111] = 1,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 17,
  [SMALL_STATE(6)] = 34,
  [SMALL_STATE(7)] = 42,
  [SMALL_STATE(8)] = 48,
  [SMALL_STATE(9)] = 56,
  [SMALL_STATE(10)] = 64,
  [SMALL_STATE(11)] = 70,
  [SMALL_STATE(12)] = 78,
  [SMALL_STATE(13)] = 84,
  [SMALL_STATE(14)] = 92,
  [SMALL_STATE(15)] = 99,
  [SMALL_STATE(16)] = 106,
  [SMALL_STATE(17)] = 111,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_csv, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_csv, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_csv_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_csv_repeat1, 2), SHIFT_REPEAT(6),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_csv_repeat1, 2), SHIFT_REPEAT(7),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_row_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat1, 2), SHIFT_REPEAT(7),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 1),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row, 1),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_first, 1),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cycle2, 1),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 2),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row, 2),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_second, 1),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cycle, 3),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_third, 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cycle3, 5),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cycle4, 6),
  [58] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_csv(void) {
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
