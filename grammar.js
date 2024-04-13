module.exports = grammar({
  name: "csv",

  rules: {
    file: ($) => repeat($.row),

    row: ($) => seq(repeat($.cycle), "\n"),

    cycle: ($) => seq($.text, ",", $.number, ",", $.float, optional(",")),

    text: ($) => /[^,\n\r]+/,

    number: ($) => /[^,\n\r]+/,

    float: ($) => /[^,\n\r]+/,
  },
});
