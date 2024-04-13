module.exports = grammar({
  name: "csv",

  rules: {
    file: ($) => repeat($.row),

    row: ($) => seq(repeat($.cycle), "\n"),

    cycle: ($) =>
      seq($.first, ",", $.second, ",", $.third, ",", $.boolean, optional(",")),

    first: ($) => /[^,\n\r]+/,

    second: ($) => /[^,\n\r]+/,

    third: ($) => /[^,\n\r]+/,

    boolean: ($) => /[^,\n\r]+/,
  },
});
