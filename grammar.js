module.exports = grammar({
  name: "csv",

  rules: {
    file: ($) => repeat($.row),

    row: ($) => seq(repeat($.cycle), "\n"),

    cycle: ($) => seq($.text, ",", $.number, ",", $.ele, optional(",")),

    text: ($) => /[^,\n\r]+/,

    number: ($) => /[^,\n\r]+/,

    ele: ($) => /[^,\n\r]+/,
  },
});
