module.exports = grammar({
  name: "csv",

  rules: {
    csv: ($) => repeat($.row),

    row: ($) =>
      seq(
        repeat(
          choice(
            $.cycle7,
            $.cycle6,
            $.cycle5,
            $.cycle4,
            $.cycle3,
            $.cycle2,
            $.cycle,
          ),
        ),
        $.remainder,
        "\n",
      ),

    cycle: ($) => seq($.first),
    cycle2: ($) => seq($.first, ",", $.second),
    cycle3: ($) => seq($.first, ",", $.second, ",", $.third),
    cycle4: ($) => seq($.first, ",", $.second, ",", $.third, ",", $.fourth),
    cycle5: ($) =>
      seq($.first, ",", $.second, ",", $.third, ",", $.fourth, ",", $.fifth),
    cycle6: ($) =>
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
      ),
    cycle7: ($) =>
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
        ",",
        $.seventh,
      ),

    remainder: ($) =>
      choice(
        $.first,
        seq($.first, ",", $.second),
        seq($.first, ",", $.second, ",", $.third),
        seq($.first, ",", $.second, ",", $.third, ",", $.fourth),
        seq($.first, ",", $.second, ",", $.third, ",", $.fourth, ",", $.fifth),
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
        ),
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
          ",",
          $.seventh,
        ),
      ),

    // first, second, third的定义
    first: ($) => choice(/"[^"]*"/, /[^,\n\r]+/),
    second: ($) => choice(/"[^"]*"/, /[^,\n\r]+/),
    third: ($) => choice(/"[^"]*"/, /[^,\n\r]+/),
    fourth: ($) => choice(/"[^"]*"/, /[^,\n\r]+/),
    fifth: ($) => choice(/"[^"]*"/, /[^,\n\r]+/),
    sixth: ($) => choice(/"[^"]*"/, /[^,\n\r]+/),
    seventh: ($) => choice(/"[^"]*"/, /[^,\n\r]+/),
  },
});
