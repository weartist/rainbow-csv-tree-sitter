module.exports = grammar({
  name: "csv",

  rules: {
    file: ($) => repeat($.row),

    row: ($) => seq(repeat($.cycle), "\n"),

    cycle: ($) =>
      seq(
        $.text,
        ",",
        $.string,
        ",",
        $.integer,
        ",",
        $.boolean,
        ",",
        $.float,
        ",",
        $.null,
        optional(","),
      ),

    text: ($) => /[^,\n\r]+/,

    string: ($) => /[^,\n\r]+/,

    integer: ($) => /[^,\n\r]+/,

    boolean: ($) => /[^,\n\r]+/,

    float: ($) => /[^,\n\r]+/,

    null: ($) => /[^,\n\r]+/,
  },
});
