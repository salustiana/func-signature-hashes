#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  anon_sym_COMMA = 3,
  aux_sym_primitive_type_token1 = 4,
  sym_function_definition = 5,
  sym_parameters = 6,
  sym_parameter = 7,
  sym_tuple_type = 8,
  sym_types = 9,
  sym_type = 10,
  sym_primitive_type = 11,
  sym_function_name = 12,
  sym_identifier = 13,
  aux_sym_parameters_repeat1 = 14,
  aux_sym_types_repeat1 = 15,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [aux_sym_primitive_type_token1] = "primitive_type_token1",
  [sym_function_definition] = "function_definition",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_tuple_type] = "tuple_type",
  [sym_types] = "types",
  [sym_type] = "type",
  [sym_primitive_type] = "primitive_type",
  [sym_function_name] = "function_name",
  [sym_identifier] = "identifier",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_types_repeat1] = "types_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_primitive_type_token1] = aux_sym_primitive_type_token1,
  [sym_function_definition] = sym_function_definition,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_tuple_type] = sym_tuple_type,
  [sym_types] = sym_types,
  [sym_type] = sym_type,
  [sym_primitive_type] = sym_primitive_type,
  [sym_function_name] = sym_function_name,
  [sym_identifier] = sym_identifier,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_types_repeat1] = aux_sym_types_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_primitive_type_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_type] = {
    .visible = true,
    .named = true,
  },
  [sym_types] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_types_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1);
      if (lookahead == '(') ADVANCE(2);
      if (lookahead == ')') ADVANCE(3);
      if (lookahead == ',') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_primitive_type_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
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
  [27] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_primitive_type_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_function_definition] = STATE(27),
    [sym_function_name] = STATE(26),
    [aux_sym_primitive_type_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_RPAREN,
    ACTIONS(9), 1,
      aux_sym_primitive_type_token1,
    STATE(12), 1,
      sym_type,
    STATE(24), 1,
      sym_types,
    STATE(17), 2,
      sym_tuple_type,
      sym_primitive_type,
  [20] = 6,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      aux_sym_primitive_type_token1,
    ACTIONS(11), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      sym_parameter,
    STATE(25), 1,
      sym_parameters,
    STATE(16), 2,
      sym_tuple_type,
      sym_primitive_type,
  [40] = 4,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      aux_sym_primitive_type_token1,
    STATE(15), 1,
      sym_parameter,
    STATE(16), 2,
      sym_tuple_type,
      sym_primitive_type,
  [54] = 4,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      aux_sym_primitive_type_token1,
    STATE(18), 1,
      sym_type,
    STATE(17), 2,
      sym_tuple_type,
      sym_primitive_type,
  [68] = 3,
    ACTIONS(13), 1,
      anon_sym_RPAREN,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym_parameters_repeat1,
  [78] = 3,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    STATE(7), 1,
      aux_sym_parameters_repeat1,
  [88] = 1,
    ACTIONS(22), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_primitive_type_token1,
  [94] = 3,
    ACTIONS(24), 1,
      anon_sym_RPAREN,
    ACTIONS(26), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_types_repeat1,
  [104] = 1,
    ACTIONS(29), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_primitive_type_token1,
  [110] = 3,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    ACTIONS(33), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_types_repeat1,
  [120] = 3,
    ACTIONS(33), 1,
      anon_sym_COMMA,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      aux_sym_types_repeat1,
  [130] = 3,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      aux_sym_parameters_repeat1,
  [140] = 1,
    ACTIONS(39), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_primitive_type_token1,
  [146] = 1,
    ACTIONS(17), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [151] = 2,
    ACTIONS(41), 1,
      aux_sym_primitive_type_token1,
    STATE(20), 1,
      sym_identifier,
  [158] = 1,
    ACTIONS(43), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [163] = 1,
    ACTIONS(24), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [168] = 1,
    ACTIONS(45), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [173] = 1,
    ACTIONS(47), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [178] = 1,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
  [182] = 1,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
  [186] = 1,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
  [190] = 1,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
  [194] = 1,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
  [198] = 1,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
  [202] = 1,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 54,
  [SMALL_STATE(6)] = 68,
  [SMALL_STATE(7)] = 78,
  [SMALL_STATE(8)] = 88,
  [SMALL_STATE(9)] = 94,
  [SMALL_STATE(10)] = 104,
  [SMALL_STATE(11)] = 110,
  [SMALL_STATE(12)] = 120,
  [SMALL_STATE(13)] = 130,
  [SMALL_STATE(14)] = 140,
  [SMALL_STATE(15)] = 146,
  [SMALL_STATE(16)] = 151,
  [SMALL_STATE(17)] = 158,
  [SMALL_STATE(18)] = 163,
  [SMALL_STATE(19)] = 168,
  [SMALL_STATE(20)] = 173,
  [SMALL_STATE(21)] = 178,
  [SMALL_STATE(22)] = 182,
  [SMALL_STATE(23)] = 186,
  [SMALL_STATE(24)] = 190,
  [SMALL_STATE(25)] = 194,
  [SMALL_STATE(26)] = 198,
  [SMALL_STATE(27)] = 202,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(4),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_types_repeat1, 2),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_types_repeat1, 2), SHIFT_REPEAT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_types, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_types, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [61] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_signatures() {
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
