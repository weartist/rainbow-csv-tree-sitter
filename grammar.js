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
    cycle2: ($) => seq($.first, "\t", $.second),
    cycle3: ($) => seq($.first, "\t", $.second, "\t", $.third),
    cycle4: ($) => seq($.first, "\t", $.second, "\t", $.third, "\t", $.fourth),
    cycle5: ($) =>
      seq(
        $.first,
        "\t",
        $.second,
        "\t",
        $.third,
        "\t",
        $.fourth,
        "\t",
        $.fifth,
      ),
    cycle6: ($) =>
      seq(
        $.first,
        "\t",
        $.second,
        "\t",
        $.third,
        "\t",
        $.fourth,
        "\t",
        $.fifth,
        "\t",
        $.sixth,
      ),
    cycle7: ($) =>
      seq(
        $.first,
        "\t",
        $.second,
        "\t",
        $.third,
        "\t",
        $.fourth,
        "\t",
        $.fifth,
        "\t",
        $.sixth,
        "\t",
        $.seventh,
      ),

    remainder: ($) =>
      choice(
        $.first,
        seq($.first, "\t", $.second),
        seq($.first, "\t", $.second, "\t", $.third),
        seq($.first, "\t", $.second, "\t", $.third, "\t", $.fourth),
        seq(
          $.first,
          "\t",
          $.second,
          "\t",
          $.third,
          "\t",
          $.fourth,
          "\t",
          $.fifth,
        ),
        seq(
          $.first,
          "\t",
          $.second,
          "\t",
          $.third,
          "\t",
          $.fourth,
          "\t",
          $.fifth,
          "\t",
          $.sixth,
        ),
        seq(
          $.first,
          "\t",
          $.second,
          "\t",
          $.third,
          "\t",
          $.fourth,
          "\t",
          $.fifth,
          "\t",
          $.sixth,
          "\t",
          $.seventh,
        ),
      ),

    // first, second, third的定义
    first: ($) => choice(/"[^"]*"/, /[^\n\r\t]+/),
    second: ($) => choice(/"[^"]*"/, /[^\n\r\t]+/),
    third: ($) => choice(/"[^"]*"/, /[^\n\r\t]+/),
    fourth: ($) => choice(/"[^"]*"/, /[^\n\r\t]+/),
    fifth: ($) => choice(/"[^"]*"/, /[^\n\r\t]+/),
    sixth: ($) => choice(/"[^"]*"/, /[^\n\r\t]+/),
    seventh: ($) => choice(/"[^"]*"/, /[^\n\r\t]+/),
  },
});
