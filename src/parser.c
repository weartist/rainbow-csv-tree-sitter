#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  anon_sym_COMMA = 2,
  anon_sym_SEMI = 3,
  anon_sym_PIPE = 4,
  aux_sym_first_token1 = 5,
  aux_sym_first_token2 = 6,
  sym_csv = 7,
  sym_row = 8,
  sym_cycle = 9,
  sym_cycle2 = 10,
  sym_cycle3 = 11,
  sym_cycle4 = 12,
  sym_cycle5 = 13,
  sym_cycle6 = 14,
  sym_cycle7 = 15,
  sym_remainder = 16,
  sym_first = 17,
  sym_second = 18,
  sym_third = 19,
  sym_fourth = 20,
  sym_fifth = 21,
  sym_sixth = 22,
  sym_seventh = 23,
  aux_sym_csv_repeat1 = 24,
  aux_sym_row_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_PIPE] = "|",
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
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_PIPE] = anon_sym_PIPE,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
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
  [18] = 11,
  [19] = 10,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 13,
  [25] = 7,
  [26] = 26,
  [27] = 12,
  [28] = 28,
  [29] = 8,
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
  [47] = 38,
  [48] = 48,
  [49] = 49,
  [50] = 50,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '\r') SKIP(0)
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == ',') ADVANCE(7);
      if (lookahead == ';') ADVANCE(8);
      if (lookahead == '|') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(10);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == ',') ADVANCE(7);
      if (lookahead == ';') ADVANCE(8);
      if (lookahead == '|') ADVANCE(9);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_first_token1);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_first_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(15);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_first_token2);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '"') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(15);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_first_token2);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(15);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_first_token2);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '|') ADVANCE(2);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_first_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(15);
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
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
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
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [aux_sym_first_token1] = ACTIONS(1),
    [aux_sym_first_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_csv] = STATE(49),
    [sym_row] = STATE(2),
    [sym_cycle] = STATE(4),
    [sym_cycle2] = STATE(4),
    [sym_cycle3] = STATE(4),
    [sym_cycle4] = STATE(4),
    [sym_cycle5] = STATE(4),
    [sym_cycle6] = STATE(4),
    [sym_cycle7] = STATE(4),
    [sym_remainder] = STATE(48),
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
    [sym_remainder] = STATE(48),
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
    [sym_remainder] = STATE(48),
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
    STATE(50), 1,
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
    STATE(23), 1,
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
    ACTIONS(21), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
    ACTIONS(19), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [52] = 1,
    ACTIONS(23), 6,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PIPE,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [61] = 1,
    ACTIONS(25), 6,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PIPE,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [70] = 3,
    ACTIONS(27), 1,
      anon_sym_LF,
    ACTIONS(31), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
    ACTIONS(29), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [83] = 1,
    ACTIONS(33), 6,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PIPE,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [92] = 1,
    ACTIONS(35), 6,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PIPE,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [101] = 1,
    ACTIONS(37), 6,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PIPE,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [110] = 1,
    ACTIONS(39), 6,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PIPE,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [119] = 3,
    ACTIONS(41), 1,
      anon_sym_LF,
    ACTIONS(45), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
    ACTIONS(43), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [132] = 3,
    ACTIONS(47), 1,
      anon_sym_LF,
    ACTIONS(51), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
    ACTIONS(49), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [145] = 3,
    ACTIONS(53), 1,
      anon_sym_LF,
    ACTIONS(57), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
    ACTIONS(55), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [158] = 3,
    ACTIONS(59), 1,
      anon_sym_LF,
    ACTIONS(63), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
    ACTIONS(61), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [171] = 1,
    ACTIONS(35), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PIPE,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [179] = 1,
    ACTIONS(33), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PIPE,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [187] = 2,
    ACTIONS(51), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
    ACTIONS(65), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [197] = 2,
    ACTIONS(45), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
    ACTIONS(67), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [207] = 2,
    ACTIONS(63), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
    ACTIONS(69), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [217] = 2,
    ACTIONS(31), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
    ACTIONS(71), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [227] = 1,
    ACTIONS(39), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PIPE,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [235] = 1,
    ACTIONS(23), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PIPE,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [243] = 2,
    ACTIONS(57), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
    ACTIONS(73), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [253] = 1,
    ACTIONS(37), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PIPE,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [261] = 2,
    ACTIONS(21), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
    ACTIONS(75), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [271] = 1,
    ACTIONS(25), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PIPE,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [279] = 2,
    STATE(21), 1,
      sym_second,
    ACTIONS(77), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [287] = 2,
    STATE(15), 1,
      sym_sixth,
    ACTIONS(79), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [295] = 2,
    STATE(22), 1,
      sym_fifth,
    ACTIONS(81), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [303] = 2,
    STATE(28), 1,
      sym_fourth,
    ACTIONS(83), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [311] = 2,
    STATE(17), 1,
      sym_fifth,
    ACTIONS(85), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [319] = 2,
    STATE(26), 1,
      sym_third,
    ACTIONS(87), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [327] = 2,
    STATE(39), 1,
      sym_seventh,
    ACTIONS(89), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [335] = 2,
    STATE(20), 1,
      sym_sixth,
    ACTIONS(91), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [343] = 1,
    ACTIONS(93), 3,
      anon_sym_LF,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [349] = 2,
    ACTIONS(95), 1,
      anon_sym_LF,
    ACTIONS(97), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [357] = 2,
    STATE(6), 1,
      sym_fourth,
    ACTIONS(99), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [365] = 2,
    STATE(46), 1,
      sym_seventh,
    ACTIONS(101), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [373] = 2,
    STATE(16), 1,
      sym_third,
    ACTIONS(103), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [381] = 2,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [389] = 2,
    STATE(14), 1,
      sym_second,
    ACTIONS(109), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [397] = 2,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [405] = 1,
    ACTIONS(97), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [410] = 1,
    ACTIONS(93), 2,
      aux_sym_first_token1,
      aux_sym_first_token2,
  [415] = 1,
    ACTIONS(115), 1,
      anon_sym_LF,
  [419] = 1,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
  [423] = 1,
    ACTIONS(119), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 21,
  [SMALL_STATE(6)] = 39,
  [SMALL_STATE(7)] = 52,
  [SMALL_STATE(8)] = 61,
  [SMALL_STATE(9)] = 70,
  [SMALL_STATE(10)] = 83,
  [SMALL_STATE(11)] = 92,
  [SMALL_STATE(12)] = 101,
  [SMALL_STATE(13)] = 110,
  [SMALL_STATE(14)] = 119,
  [SMALL_STATE(15)] = 132,
  [SMALL_STATE(16)] = 145,
  [SMALL_STATE(17)] = 158,
  [SMALL_STATE(18)] = 171,
  [SMALL_STATE(19)] = 179,
  [SMALL_STATE(20)] = 187,
  [SMALL_STATE(21)] = 197,
  [SMALL_STATE(22)] = 207,
  [SMALL_STATE(23)] = 217,
  [SMALL_STATE(24)] = 227,
  [SMALL_STATE(25)] = 235,
  [SMALL_STATE(26)] = 243,
  [SMALL_STATE(27)] = 253,
  [SMALL_STATE(28)] = 261,
  [SMALL_STATE(29)] = 271,
  [SMALL_STATE(30)] = 279,
  [SMALL_STATE(31)] = 287,
  [SMALL_STATE(32)] = 295,
  [SMALL_STATE(33)] = 303,
  [SMALL_STATE(34)] = 311,
  [SMALL_STATE(35)] = 319,
  [SMALL_STATE(36)] = 327,
  [SMALL_STATE(37)] = 335,
  [SMALL_STATE(38)] = 343,
  [SMALL_STATE(39)] = 349,
  [SMALL_STATE(40)] = 357,
  [SMALL_STATE(41)] = 365,
  [SMALL_STATE(42)] = 373,
  [SMALL_STATE(43)] = 381,
  [SMALL_STATE(44)] = 389,
  [SMALL_STATE(45)] = 397,
  [SMALL_STATE(46)] = 405,
  [SMALL_STATE(47)] = 410,
  [SMALL_STATE(48)] = 415,
  [SMALL_STATE(49)] = 419,
  [SMALL_STATE(50)] = 423,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_csv, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_csv, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_csv_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_csv_repeat1, 2), SHIFT_REPEAT(11),
  [14] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat1, 2), SHIFT_REPEAT(18),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_remainder, 7),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cycle4, 7),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_third, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fifth, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_remainder, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cycle, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sixth, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_first, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fourth, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_second, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_remainder, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cycle2, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_remainder, 11),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cycle6, 11),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_remainder, 5),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cycle3, 5),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_remainder, 9),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cycle5, 9),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_seventh, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_remainder, 13),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cycle7, 13),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [117] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
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
