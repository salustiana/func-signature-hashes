// grammar.js

module.exports = grammar({
  name: 'signatures',

  rules: {
    function_definition: $ => seq(
      $.function_name,
      '(',
      optional($.parameters),
      ')'
    ),

    parameters: $ => seq(
      $.parameter,
      repeat(seq(',', $.parameter))
    ),

    parameter: $ => seq(
      choice($.primitive_type, $.tuple_type),
      $.identifier
    ),

    tuple_type: $ => seq(
      '(',
      optional($.types),
      ')'
    ),

    types: $ => seq(
      $.type,
      repeat(seq(',', $.type))
    ),

    type: $ => choice($.primitive_type, $.tuple_type),

    /*
    primitive_type: $ => choice(
      'int',
      'float',
      'string',
      'bool',
      'void'
    ),
    */

    primitive_type: $ => /[a-zA-Z_]\w*/,

    function_name: $ => /[a-zA-Z_]\w*/,

    identifier: $ => /[a-zA-Z_]\w*/,
  }
});
