module.exports = grammar({
  name: "csv",

  rules: {
    file: ($) => repeat($.row),

    row: ($) => seq(repeat($.cycle), "\n"),

    cycle: ($) =>
      seq(
        $.first,
        ",",
        $.second,
        ",",
        $.third,
        ",",
        $.fourth,
        ",",
        $.fifth,
        ",",
        $.sixth,
        optional(","),
      ),

    first: ($) => /[^,\n\r]+/,

    second: ($) => /[^,\n\r]+/,

    third: ($) => /[^,\n\r]+/,

    fourth: ($) => /[^,\n\r]+/,

    fifth: ($) => /[^,\n\r]+/,

    sixth: ($) => /[^,\n\r]+/,
  },
});
