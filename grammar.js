module.exports = grammar({
  name: "csv",

  rules: {
    file: ($) => repeat($.row),

    row: ($) => seq(repeat($.cycle), "\n"),

    cycle: ($) => seq($.variable, ",", $.string, ",", $.type, optional(",")),

    variable: ($) => /[^,\n\r]+/,

    string: ($) => /[^,\n\r]+/,

    type: ($) => /[^,\n\r]+/,
  },
});
