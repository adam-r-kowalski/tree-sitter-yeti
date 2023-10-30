module.exports = grammar({
  name: 'yeti',

  extras: $ => [/\s/, ','],

  rules: {
    source_file: $ => repeat($.expression),

    expression: $ => choice(
      $.integer,
      $.float,
      $.symbol,
      $.keyword,
      $.string,
      $.ratio,
      $.array,
      $.comment,
    ),

    integer: () => /\d+/,

    float: () => /\d+\.\d+/,

    symbol: () => choice(
      /[a-zA-Z0-9!?_\-+*]+/,
      '/'
    ),

    keyword: () => /:[a-zA-Z0-9!?_\-+*]+/,

    string: $ => seq(
      '"',
      repeat(choice(
        /[^"\\]/,
        /\\./
      )),
      '"'
    ),

    ratio: $ => prec(9, seq($.integer, '/', $.integer)),

    array: $ => seq('[', repeat(seq($.expression)), ']'),

    comment: $ => seq(';', /.*/),
  }
});
