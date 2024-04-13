module.exports = grammar({
  name: "csv",

  rules: {
    csv: ($) => repeat($.row),

    row: ($) =>
      seq(repeat(choice($.cycle4, $.cycle3, $.cycle2, $.cycle)), "\n"),

    cycle: ($) => seq($.first, ",", $.second),
    cycle2: ($) => seq($.first),
    cycle3: ($) => seq($.first, ",", $.second, ",", $.third),
    cycle4: ($) => seq($.first, ",", $.second, ",", $.third, "，"),

    remainder: ($) =>
      choice(
        $.first,
        seq($.first, ",", $.second),
        seq($.first, ",", $.second, ",", $.third),
      ),

    first: ($) => /[^,\n\r]+/,
    second: ($) => /[^,\n\r]+/,
    third: ($) => /[^,\n\r]+/,
  },
});
