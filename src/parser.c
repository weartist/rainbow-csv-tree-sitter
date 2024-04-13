#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 12
#define ALIAS_COUNT 0
#define TOKEN_COUNT 4
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  anon_sym_COMMA = 2,
  aux_sym_variable_token1 = 3,
  sym_file = 4,
  sym_row = 5,
  sym_cycle = 6,
  sym_variable = 7,
  sym_string = 8,
  sym_type = 9,
  aux_sym_file_repeat1 = 10,
  aux_sym_row_repeat1 = 11,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_COMMA] = ",",
  [aux_sym_variable_token1] = "variable_token1",
  [sym_file] = "file",
  [sym_row] = "row",
  [sym_cycle] = "cycle",
  [sym_variable] = "variable",
  [sym_string] = "string",
  [sym_type] = "type",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_row_repeat1] = "row_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_variable_token1] = aux_sym_variable_token1,
  [sym_file] = sym_file,
  [sym_row] = sym_row,
  [sym_cycle] = sym_cycle,
  [sym_variable] = sym_variable,
  [sym_string] = sym_string,
  [sym_type] = sym_type,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
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
  [aux_sym_variable_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_file] = {
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
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_file_repeat1] = {
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
      if (lookahead == ',') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 1:
      if (lookahead == ',') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(8);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '\n') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != ',') ADVANCE(8);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != ',') ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ',') ADVANCE(8);
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
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_variable_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(14),
    [sym_row] = STATE(2),
    [sym_cycle] = STATE(4),
    [sym_variable] = STATE(15),
    [aux_sym_file_repeat1] = STATE(2),
    [aux_sym_row_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_variable_token1] = ACTIONS(7),
  },
  [2] = {
    [sym_row] = STATE(3),
    [sym_cycle] = STATE(4),
    [sym_variable] = STATE(15),
    [aux_sym_file_repeat1] = STATE(3),
    [aux_sym_row_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_variable_token1] = ACTIONS(7),
  },
  [3] = {
    [sym_row] = STATE(3),
    [sym_cycle] = STATE(4),
    [sym_variable] = STATE(15),
    [aux_sym_file_repeat1] = STATE(3),
    [aux_sym_row_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(13),
    [aux_sym_variable_token1] = ACTIONS(16),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(7), 1,
      aux_sym_variable_token1,
    ACTIONS(19), 1,
      anon_sym_LF,
    STATE(15), 1,
      sym_variable,
    STATE(5), 2,
      sym_cycle,
      aux_sym_row_repeat1,
  [14] = 4,
    ACTIONS(21), 1,
      anon_sym_LF,
    ACTIONS(23), 1,
      aux_sym_variable_token1,
    STATE(15), 1,
      sym_variable,
    STATE(5), 2,
      sym_cycle,
      aux_sym_row_repeat1,
  [28] = 2,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    ACTIONS(28), 2,
      anon_sym_LF,
      aux_sym_variable_token1,
  [36] = 2,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 2,
      anon_sym_LF,
      aux_sym_variable_token1,
  [44] = 1,
    ACTIONS(34), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      aux_sym_variable_token1,
  [50] = 2,
    ACTIONS(38), 1,
      anon_sym_COMMA,
    ACTIONS(36), 2,
      anon_sym_LF,
      aux_sym_variable_token1,
  [58] = 2,
    ACTIONS(40), 1,
      aux_sym_variable_token1,
    STATE(17), 1,
      sym_string,
  [65] = 2,
    ACTIONS(42), 1,
      aux_sym_variable_token1,
    STATE(9), 1,
      sym_type,
  [72] = 1,
    ACTIONS(44), 2,
      anon_sym_LF,
      aux_sym_variable_token1,
  [77] = 1,
    ACTIONS(46), 1,
      anon_sym_COMMA,
  [81] = 1,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
  [85] = 1,
    ACTIONS(50), 1,
      anon_sym_COMMA,
  [89] = 1,
    ACTIONS(52), 1,
      anon_sym_COMMA,
  [93] = 1,
    ACTIONS(54), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 14,
  [SMALL_STATE(6)] = 28,
  [SMALL_STATE(7)] = 36,
  [SMALL_STATE(8)] = 44,
  [SMALL_STATE(9)] = 50,
  [SMALL_STATE(10)] = 58,
  [SMALL_STATE(11)] = 65,
  [SMALL_STATE(12)] = 72,
  [SMALL_STATE(13)] = 77,
  [SMALL_STATE(14)] = 81,
  [SMALL_STATE(15)] = 85,
  [SMALL_STATE(16)] = 89,
  [SMALL_STATE(17)] = 93,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(6),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(13),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_row_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat1, 2), SHIFT_REPEAT(13),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 1),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 2),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row, 2),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cycle, 5),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cycle, 6),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [48] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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
