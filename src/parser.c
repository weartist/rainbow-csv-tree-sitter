#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  anon_sym_COMMA = 2,
  aux_sym_first_token1 = 3,
  aux_sym_first_token2 = 4,
  sym_csv = 5,
  sym_row = 6,
  sym_cycle = 7,
  sym_cycle2 = 8,
  sym_cycle3 = 9,
  sym_cycle4 = 10,
  sym_cycle5 = 11,
  sym_cycle6 = 12,
  sym_remainder = 13,
  sym_first = 14,
  sym_second = 15,
  sym_third = 16,
  sym_fourth = 17,
  sym_fifth = 18,
  sym_sixth = 19,
  aux_sym_csv_repeat1 = 20,
  aux_sym_row_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_COMMA] = ",",
  [aux_sym_first_token1] = "first_token1",
  [aux_sym_first_token2] = "first_token2",
  [sym_csv] = "csv",
  [sym_row] = "row",
  [sym_cycle] = "cycle",
  [sym_cycle2] = "cycle2",
  [sym_cycle3] = "cycle3",
  [sym_cycle4] = "cycle4",
  [sym_cycle5] = "cycle5",
  [sym_cycle6] = "cycle6",
  [sym_remainder] = "remainder",
  [sym_first] = "first",
  [sym_second] = "second",
  [sym_third] = "third",
  [sym_fourth] = "fourth",
  [sym_fifth] = "fifth",
  [sym_sixth] = "sixth",
  [aux_sym_csv_repeat1] = "csv_repeat1",
  [aux_sym_row_repeat1] = "row_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_first_token1] = aux_sym_first_token1,
  [aux_sym_first_token2] = aux_sym_first_token2,
  [sym_csv] = sym_csv,
  [sym_row] = sym_row,
  [sym_cycle] = sym_cycle,
  [sym_cycle2] = sym_cycle2,
  [sym_cycle3] = sym_cycle3,
  [sym_cycle4] = sym_cycle4,
  [sym_cycle5] = sym_cycle5,
  [sym_cycle6] = sym_cycle6,
  [sym_remainder] = sym_remainder,
  [sym_first] = sym_first,
  [sym_second] = sym_second,
  [sym_third] = sym_third,
  [sym_fourth] = sym_fourth,
  [sym_fifth] = sym_fifth,
  [sym_sixth] = sym_sixth,
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
  [aux_sym_first_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_first_token2] = {
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
  [sym_cycle5] = {
    .visible = true,
    .named = true,
  },
  [sym_cycle6] = {
    .visible = true,
    .named = true,
  },
  [sym_remainder] = {
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
  [sym_fourth] = {
    .visible = true,
    .named = true,
  },
  [sym_fifth] = {
    .visible = true,
    .named = true,
  },
  [sym_sixth] = {
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
  [14] = 8,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 11,
  [21] = 21,
  [22] = 22,
  [23] = 6,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '\r') SKIP(0)
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == ',') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == ',') ADVANCE(7);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_first_token1);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_first_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ',') ADVANCE(13);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_first_token2);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '"') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != ',') ADVANCE(13);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_first_token2);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != ',') ADVANCE(13);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_first_token2);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ',') ADVANCE(2);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_first_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ',') ADVANCE(13);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_first_token1] = ACTIONS(1),
    [aux_sym_first_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_csv] = STATE(33),
    [sym_row] = STATE(2),
    [sym_cycle] = STATE(4),
    [sym_cycle2] = STATE(4),
    [sym_cycle3] = STATE(4),
    [sym_cycle4] = STATE(4),
    [sym_cycle5] = STATE(4),
    [sym_cycle6] = STATE(4),
    [sym_remainder] = STATE(34),
    [sym_first] = STATE(9),
    [aux_sym_csv_repeat1] = STATE(2),
    [aux_sym_row_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_first_token1] = ACTIONS(5),
    [aux_sym_first_token2] = ACTIONS(5),
  },
  [2] = {
    [sym_row] = STATE(3),
    [sym_cycle] = STATE(4),
    [sym_cycle2] = STATE(4),
    [sym_cycle3] = STATE(4),
    [sym_cycle4] = STATE(4),
    [sym_cycle5] = STATE(4),
    [sym_cycle6] = STATE(4),
    [sym_remainder] = STATE(34),
    [sym_first] = STATE(9),
    [aux_sym_csv_repeat1] = STATE(3),
    [aux_sym_row_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(7),
    [aux_sym_first_token1] = ACTIONS(5),
    [aux_sym_first_token2] = ACTIONS(5),
  },
  [3] = {
    [sym_row] = STATE(3),
    [sym_cycle] = STATE(4),
    [sym_cycle2] = STATE(4),
    [sym_cycle3] = STATE(4),
    [sym_cycle4] = STATE(4),
    [sym_cycle5] = STATE(4),
    [sym_cycle6] = STATE(4),
    [sym_remainder] = STATE(34),
    [sym_first] = STATE(9),
    [aux_sym_csv_repeat1] = STATE(3),
    [aux_sym_row_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(9),
    [aux_sym_first_token1] = ACTIONS(11),
    [aux_sym_first_token2] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    STATE(9), 1,
      sym_first,
    STATE(35), 1,
      sym_remainder,
    ACTIONS(5), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
    STATE(5), 7,
      sym_cycle,
      sym_cycle2,
      sym_cycle3,
      sym_cycle4,
      sym_cycle5,
      sym_cycle6,
      aux_sym_row_repeat1,
  [20] = 3,
    STATE(16), 1,
      sym_first,
    ACTIONS(14), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
    STATE(5), 7,
      sym_cycle,
      sym_cycle2,
      sym_cycle3,
      sym_cycle4,
      sym_cycle5,
      sym_cycle6,
      aux_sym_row_repeat1,
  [37] = 1,
    ACTIONS(17), 4,
      anon_sym_LF,
      anon_sym_COMMA,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [44] = 3,
    ACTIONS(19), 1,
      anon_sym_LF,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(23), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [55] = 1,
    ACTIONS(25), 4,
      anon_sym_LF,
      anon_sym_COMMA,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [62] = 3,
    ACTIONS(27), 1,
      anon_sym_LF,
    ACTIONS(29), 1,
      anon_sym_COMMA,
    ACTIONS(31), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [73] = 3,
    ACTIONS(33), 1,
      anon_sym_LF,
    ACTIONS(35), 1,
      anon_sym_COMMA,
    ACTIONS(37), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [84] = 1,
    ACTIONS(39), 4,
      anon_sym_LF,
      anon_sym_COMMA,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [91] = 2,
    STATE(21), 1,
      sym_second,
    ACTIONS(41), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [99] = 2,
    STATE(26), 1,
      sym_third,
    ACTIONS(43), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [107] = 1,
    ACTIONS(25), 3,
      anon_sym_COMMA,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [113] = 2,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [121] = 2,
    ACTIONS(49), 1,
      anon_sym_COMMA,
    ACTIONS(31), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [129] = 2,
    STATE(7), 1,
      sym_third,
    ACTIONS(51), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [137] = 2,
    STATE(10), 1,
      sym_second,
    ACTIONS(53), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [145] = 2,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [153] = 1,
    ACTIONS(39), 3,
      anon_sym_COMMA,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [159] = 2,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    ACTIONS(37), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [167] = 2,
    STATE(25), 1,
      sym_fourth,
    ACTIONS(61), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [175] = 1,
    ACTIONS(17), 3,
      anon_sym_COMMA,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [181] = 1,
    ACTIONS(63), 3,
      anon_sym_COMMA,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [187] = 2,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    ACTIONS(67), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [195] = 2,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(23), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [203] = 2,
    STATE(29), 1,
      sym_fifth,
    ACTIONS(69), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [211] = 1,
    ACTIONS(71), 3,
      anon_sym_COMMA,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [217] = 2,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    ACTIONS(75), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [225] = 2,
    STATE(32), 1,
      sym_sixth,
    ACTIONS(77), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [233] = 1,
    ACTIONS(79), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [238] = 1,
    ACTIONS(81), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [243] = 1,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
  [247] = 1,
    ACTIONS(85), 1,
      anon_sym_LF,
  [251] = 1,
    ACTIONS(87), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 20,
  [SMALL_STATE(6)] = 37,
  [SMALL_STATE(7)] = 44,
  [SMALL_STATE(8)] = 55,
  [SMALL_STATE(9)] = 62,
  [SMALL_STATE(10)] = 73,
  [SMALL_STATE(11)] = 84,
  [SMALL_STATE(12)] = 91,
  [SMALL_STATE(13)] = 99,
  [SMALL_STATE(14)] = 107,
  [SMALL_STATE(15)] = 113,
  [SMALL_STATE(16)] = 121,
  [SMALL_STATE(17)] = 129,
  [SMALL_STATE(18)] = 137,
  [SMALL_STATE(19)] = 145,
  [SMALL_STATE(20)] = 153,
  [SMALL_STATE(21)] = 159,
  [SMALL_STATE(22)] = 167,
  [SMALL_STATE(23)] = 175,
  [SMALL_STATE(24)] = 181,
  [SMALL_STATE(25)] = 187,
  [SMALL_STATE(26)] = 195,
  [SMALL_STATE(27)] = 203,
  [SMALL_STATE(28)] = 211,
  [SMALL_STATE(29)] = 217,
  [SMALL_STATE(30)] = 225,
  [SMALL_STATE(31)] = 233,
  [SMALL_STATE(32)] = 238,
  [SMALL_STATE(33)] = 243,
  [SMALL_STATE(34)] = 247,
  [SMALL_STATE(35)] = 251,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_csv, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_csv, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_csv_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_csv_repeat1, 2), SHIFT_REPEAT(6),
  [14] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat1, 2), SHIFT_REPEAT(23),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_first, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_remainder, 5),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cycle3, 5),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_third, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_remainder, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cycle, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_remainder, 3),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cycle2, 3),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_second, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fourth, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cycle4, 7),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fifth, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cycle5, 9),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sixth, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cycle6, 11),
  [83] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
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
