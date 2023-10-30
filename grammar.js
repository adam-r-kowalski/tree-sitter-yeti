module.exports = grammar({
  name: 'yeti',

  rules: {
    source_file: $ => repeat($.expression),

    expression: $ => choice(
      $.integer,
      $.float,
      $.symbol,
      $.keyword,
      $.string,
      $.ratio,
    ),

    integer: () => /\d+/,

    float: () => /\d+\.\d+/,

    symbol: () => /(?:\/|[^\/\s][^\/]*[^\/\s]|[a-zA-Z0-9!?_\-+*]+)/,

    keyword: () => /:[a-zA-Z0-9!?_\-+/*]+/,

    string: $ => seq(
      '"',
      repeat(choice(
        /[^"\\]/,
        /\\./
      )),
      '"'
    ),

    ratio: $ => seq($.integer, '/', $.integer),
  }
});
