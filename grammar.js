let rules_for_sep = (sep, sym) => {
  let r = {};
  r[`_csv${sym}`] = ($) => repeat1(alias($[`row${sym}`], $.row));
  r[`row${sym}`] = ($) =>
    seq(
      repeat(seq($[`_cycle7${sym}`], sep)),
      optional($[`_remainder${sym}`]),
      "\n",
    );

  r[`_cycle7${sym}`] = ($) =>
    seq(
      optional(alias($[`field${sym}`], $.first)),
      sep,
      optional(alias($[`field${sym}`], $.second)),
      sep,
      optional(alias($[`field${sym}`], $.third)),
      sep,
      optional(alias($[`field${sym}`], $.fourth)),
      sep,
      optional(alias($[`field${sym}`], $.fifth)),
      sep,
      optional(alias($[`field${sym}`], $.sixth)),
      sep,
      optional(alias($[`field${sym}`], $.seventh)),
    );
  r[`_remainder${sym}`] = ($) =>
    seq(
      alias($[`field${sym}`], $.first),
      ...[$.seventh, $.sixth, $.fifth, $.fourth, $.third, $.second].reduce(
        (accum, fld) => [
          optional(seq(sep, optional(alias($[`field${sym}`], fld)), ...accum)),
        ],
        [],
      ),
    );

  r[`field${sym}`] = ($) =>
    choice(
      prec(3, $.boolean),
      prec(2, $.number),
      prec(1, $.float),
      prec(0, alias($[`text${sym}`], $.text)),
    );
  r[`text${sym}`] = (_) =>
    token(
      choice(
        new RegExp(`[^-+${sep}\\d\\s"][^${sep}\\n\\r"]+`),
        seq('"', repeat(choice(/[^"]/, '""')), '"'),
      ),
    );
  return r;
};

module.exports = grammar({
  name: "csv",

  rules: {
    csv: ($) => choice($._csvc, $._csvs, $._csvp),

    ...rules_for_sep(",", "c"),
    ...rules_for_sep(";", "s"),
    ...rules_for_sep("|", "p"),

    number: (_) => choice(/[-+]?\d+/, /0[xX][0-9a-fA-F]+/),
    float: (_) => choice(/\d*\.\d+/, /[-+]?\d+\.\d*/),
    boolean: (_) => choice("true", "false"),
  },

  conflicts: ($) => [
    [$.rowc, $.rows, $.rowp],
    [$.fieldc, $.fields, $.fieldp],
  ],
});
