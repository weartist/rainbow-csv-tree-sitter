#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  anon_sym_TAB = 2,
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
  sym_cycle7 = 13,
  sym_remainder = 14,
  sym_first = 15,
  sym_second = 16,
  sym_third = 17,
  sym_fourth = 18,
  sym_fifth = 19,
  sym_sixth = 20,
  sym_seventh = 21,
  aux_sym_csv_repeat1 = 22,
  aux_sym_row_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_TAB] = "\t",
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
  [sym_cycle7] = "cycle7",
  [sym_remainder] = "remainder",
  [sym_first] = "first",
  [sym_second] = "second",
  [sym_third] = "third",
  [sym_fourth] = "fourth",
  [sym_fifth] = "fifth",
  [sym_sixth] = "sixth",
  [sym_seventh] = "seventh",
  [aux_sym_csv_repeat1] = "csv_repeat1",
  [aux_sym_row_repeat1] = "row_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_TAB] = anon_sym_TAB,
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
  [sym_cycle7] = sym_cycle7,
  [sym_remainder] = sym_remainder,
  [sym_first] = sym_first,
  [sym_second] = sym_second,
  [sym_third] = sym_third,
  [sym_fourth] = sym_fourth,
  [sym_fifth] = sym_fifth,
  [sym_sixth] = sym_sixth,
  [sym_seventh] = sym_seventh,
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
  [anon_sym_TAB] = {
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
  [sym_cycle7] = {
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
  [sym_seventh] = {
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
  [18] = 18,
  [19] = 19,
  [20] = 10,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 12,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 16,
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
  [43] = 17,
  [44] = 15,
  [45] = 13,
  [46] = 46,
  [47] = 39,
  [48] = 48,
  [49] = 49,
  [50] = 50,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '\t') ADVANCE(10);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '\r') SKIP(0)
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(11);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(2)
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(10);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(10);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(11);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_first_token1);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_first_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(19);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_first_token2);
      if (lookahead == '\t') ADVANCE(10);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(19);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_first_token2);
      if (lookahead == '\t') ADVANCE(11);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(19);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_first_token2);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(19);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_first_token2);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_first_token2);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_first_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(19);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
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
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
    [aux_sym_first_token1] = ACTIONS(1),
    [aux_sym_first_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_csv] = STATE(50),
    [sym_row] = STATE(2),
    [sym_cycle] = STATE(4),
    [sym_cycle2] = STATE(4),
    [sym_cycle3] = STATE(4),
    [sym_cycle4] = STATE(4),
    [sym_cycle5] = STATE(4),
    [sym_cycle6] = STATE(4),
    [sym_cycle7] = STATE(4),
    [sym_remainder] = STATE(49),
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
    [sym_cycle7] = STATE(4),
    [sym_remainder] = STATE(49),
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
    [sym_cycle7] = STATE(4),
    [sym_remainder] = STATE(49),
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
    STATE(48), 1,
      sym_remainder,
    ACTIONS(5), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
    STATE(5), 8,
      sym_cycle,
      sym_cycle2,
      sym_cycle3,
      sym_cycle4,
      sym_cycle5,
      sym_cycle6,
      sym_cycle7,
      aux_sym_row_repeat1,
  [21] = 3,
    STATE(25), 1,
      sym_first,
    ACTIONS(14), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
    STATE(5), 8,
      sym_cycle,
      sym_cycle2,
      sym_cycle3,
      sym_cycle4,
      sym_cycle5,
      sym_cycle6,
      sym_cycle7,
      aux_sym_row_repeat1,
  [39] = 3,
    ACTIONS(17), 1,
      anon_sym_LF,
    ACTIONS(19), 1,
      anon_sym_TAB,
    ACTIONS(21), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [50] = 3,
    ACTIONS(23), 1,
      anon_sym_LF,
    ACTIONS(25), 1,
      anon_sym_TAB,
    ACTIONS(27), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [61] = 3,
    ACTIONS(29), 1,
      anon_sym_LF,
    ACTIONS(31), 1,
      anon_sym_TAB,
    ACTIONS(33), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [72] = 3,
    ACTIONS(35), 1,
      anon_sym_LF,
    ACTIONS(37), 1,
      anon_sym_TAB,
    ACTIONS(39), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [83] = 1,
    ACTIONS(41), 4,
      anon_sym_LF,
      anon_sym_TAB,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [90] = 3,
    ACTIONS(43), 1,
      anon_sym_LF,
    ACTIONS(45), 1,
      anon_sym_TAB,
    ACTIONS(47), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [101] = 1,
    ACTIONS(49), 4,
      anon_sym_LF,
      anon_sym_TAB,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [108] = 1,
    ACTIONS(51), 4,
      anon_sym_LF,
      anon_sym_TAB,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [115] = 3,
    ACTIONS(53), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      anon_sym_TAB,
    ACTIONS(57), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [126] = 1,
    ACTIONS(59), 4,
      anon_sym_LF,
      anon_sym_TAB,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [133] = 1,
    ACTIONS(61), 4,
      anon_sym_LF,
      anon_sym_TAB,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [140] = 1,
    ACTIONS(63), 4,
      anon_sym_LF,
      anon_sym_TAB,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [147] = 2,
    STATE(21), 1,
      sym_second,
    ACTIONS(65), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [155] = 2,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [163] = 1,
    ACTIONS(41), 3,
      anon_sym_TAB,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [169] = 2,
    ACTIONS(71), 1,
      anon_sym_TAB,
    ACTIONS(57), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [177] = 2,
    STATE(6), 1,
      sym_fourth,
    ACTIONS(73), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [185] = 2,
    STATE(26), 1,
      sym_third,
    ACTIONS(75), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [193] = 1,
    ACTIONS(49), 3,
      anon_sym_TAB,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [199] = 2,
    ACTIONS(77), 1,
      anon_sym_TAB,
    ACTIONS(39), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [207] = 2,
    ACTIONS(79), 1,
      anon_sym_TAB,
    ACTIONS(27), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [215] = 2,
    STATE(11), 1,
      sym_fifth,
    ACTIONS(81), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [223] = 2,
    STATE(31), 1,
      sym_fourth,
    ACTIONS(83), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [231] = 2,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [239] = 1,
    ACTIONS(61), 3,
      anon_sym_TAB,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [245] = 2,
    ACTIONS(89), 1,
      anon_sym_TAB,
    ACTIONS(21), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [253] = 2,
    STATE(8), 1,
      sym_sixth,
    ACTIONS(91), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [261] = 2,
    STATE(36), 1,
      sym_fifth,
    ACTIONS(93), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [269] = 2,
    STATE(14), 1,
      sym_second,
    ACTIONS(95), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [277] = 2,
    STATE(7), 1,
      sym_third,
    ACTIONS(97), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [285] = 2,
    ACTIONS(99), 1,
      anon_sym_TAB,
    ACTIONS(47), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [293] = 2,
    STATE(40), 1,
      sym_seventh,
    ACTIONS(101), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [301] = 2,
    STATE(41), 1,
      sym_sixth,
    ACTIONS(103), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [309] = 1,
    ACTIONS(105), 3,
      anon_sym_LF,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [315] = 2,
    ACTIONS(107), 1,
      anon_sym_LF,
    ACTIONS(109), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [323] = 2,
    ACTIONS(111), 1,
      anon_sym_TAB,
    ACTIONS(33), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [331] = 2,
    STATE(46), 1,
      sym_seventh,
    ACTIONS(113), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [339] = 1,
    ACTIONS(63), 3,
      anon_sym_TAB,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [345] = 1,
    ACTIONS(59), 3,
      anon_sym_TAB,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [351] = 1,
    ACTIONS(51), 3,
      anon_sym_TAB,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [357] = 1,
    ACTIONS(109), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [362] = 1,
    ACTIONS(105), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [367] = 1,
    ACTIONS(115), 1,
      anon_sym_LF,
  [371] = 1,
    ACTIONS(117), 1,
      anon_sym_LF,
  [375] = 1,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 21,
  [SMALL_STATE(6)] = 39,
  [SMALL_STATE(7)] = 50,
  [SMALL_STATE(8)] = 61,
  [SMALL_STATE(9)] = 72,
  [SMALL_STATE(10)] = 83,
  [SMALL_STATE(11)] = 90,
  [SMALL_STATE(12)] = 101,
  [SMALL_STATE(13)] = 108,
  [SMALL_STATE(14)] = 115,
  [SMALL_STATE(15)] = 126,
  [SMALL_STATE(16)] = 133,
  [SMALL_STATE(17)] = 140,
  [SMALL_STATE(18)] = 147,
  [SMALL_STATE(19)] = 155,
  [SMALL_STATE(20)] = 163,
  [SMALL_STATE(21)] = 169,
  [SMALL_STATE(22)] = 177,
  [SMALL_STATE(23)] = 185,
  [SMALL_STATE(24)] = 193,
  [SMALL_STATE(25)] = 199,
  [SMALL_STATE(26)] = 207,
  [SMALL_STATE(27)] = 215,
  [SMALL_STATE(28)] = 223,
  [SMALL_STATE(29)] = 231,
  [SMALL_STATE(30)] = 239,
  [SMALL_STATE(31)] = 245,
  [SMALL_STATE(32)] = 253,
  [SMALL_STATE(33)] = 261,
  [SMALL_STATE(34)] = 269,
  [SMALL_STATE(35)] = 277,
  [SMALL_STATE(36)] = 285,
  [SMALL_STATE(37)] = 293,
  [SMALL_STATE(38)] = 301,
  [SMALL_STATE(39)] = 309,
  [SMALL_STATE(40)] = 315,
  [SMALL_STATE(41)] = 323,
  [SMALL_STATE(42)] = 331,
  [SMALL_STATE(43)] = 339,
  [SMALL_STATE(44)] = 345,
  [SMALL_STATE(45)] = 351,
  [SMALL_STATE(46)] = 357,
  [SMALL_STATE(47)] = 362,
  [SMALL_STATE(48)] = 367,
  [SMALL_STATE(49)] = 371,
  [SMALL_STATE(50)] = 375,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_csv, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_csv, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_csv_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_csv_repeat1, 2), SHIFT_REPEAT(15),
  [14] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat1, 2), SHIFT_REPEAT(44),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_remainder, 7),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cycle4, 7),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_remainder, 5),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cycle3, 5),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_remainder, 11),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cycle6, 11),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_remainder, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cycle, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sixth, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_remainder, 9),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cycle5, 9),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fifth, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_second, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_remainder, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cycle2, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_first, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fourth, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_third, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_seventh, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_remainder, 13),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cycle7, 13),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [119] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
