/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'factorio_locale',


  rules: {
    source_file: $ => repeat($.locale_category),

    locale_category: $ => seq(
        $.category_name,
        repeat1($.locale_pair)
    ),

    category_name: $ => seq(
        token.immediate('['),
        $.category_name_value,
        token.immediate(']')
    ),

    category_name_value: $ => /[a-zA-Z-_]+/,

    locale_pair: $ => seq(
        $.locale_key,
        token.immediate('='),
        $.locale_text,
        /\n/
    ),

    locale_key: $ => /[a-zA-Z0-9-_]+/,

    locale_text: $ => repeat1(choice(
        $.positional_arg,
        $.named_arg,
        $.plural_arg,
        $.richtext_arg,
        $.richtext_color,
        /.+/ // just text
    )),

    positional_arg: $ => /__[1-9][0-9]*__/,

    plural_arg: $ => seq(
        /__plural_for_parameter_[1-9][0-9]*_/,
        token.immediate('{'),
        repeat(seq($.plural_pair, token.immediate('|'))),
        $.plural_rest,
        token.immediate('}__'),
    ),

    plural_pair: $ => seq(
        $.plural_condition,
        token.immediate('='),
        $.locale_text
    ),

    plural_condition: $ => choice(
        /([0-9]+,)*[0-9]+/,
        /(ends in [0-9]+,)*ends in [0-9]+/,
    ),

    plural_rest: $ => seq(
        token.immediate('rest='),
        $.locale_text
    ),

    named_arg: $ => choice(
        $._control_arg,
        $._control_modifier_arg,
        '__CONTROL_STYLE_BEGIN__',
        '__CONTROL_STYLE_END__',
        '__CONTROL_LEFT_CLICK__',
        '__CONTROL_RIGHT_CLICK__',
        '__CONTROL_KEY_SHIFT__',
        '__CONTROL_KEY_CTRL__',
        $._alt_control_left_click_n,
        $._alt_control_right_click_n,
        '__REMARK_COLOR_BEGIN__',
        '__REMARK_COLOR_END__',
        $._alt_control_arg,
        '__CONTROL_MOVE__',
        $._entity_arg,
        $._item_arg,
        $._tile_arg,
        $._fluid_arg
    ),

    _entity_arg: $ => /__ENTITY__[a-zA-Z-_]+__/,
    _item_arg: $ => /__ITEM__[a-zA-Z-_]+__/,
    _tile_arg: $ => /__TILE__[a-zA-Z-_]+__/,
    _fluid_arg: $ => /__FLUID__[a-zA-Z-_]+__/,

    _alt_control_arg: $ => /__ALT_CONTROL__[0-9]+__[a-zA-Z-_]+__/,
    _alt_control_left_click_n: $ => /__ALT_CONTROL_LEFT_CLICK__[0-9]+__/,
    _alt_control_right_click_n: $ => /__ALT_CONTROL_RIGHT_CLICK__[0-9]+__/,

    _control_arg: $ => /__CONTROL__[a-zA-Z-_]+__/,
    _control_modifier_arg: $ => /__CONTROL_MODIFIER__[a-zA-Z-_]+__/,

    richtext_arg: $ => seq(
        '[',
        $.richtext_pair,
        ']'
    ),

    richtext_pair: $ => choice (
        $._richtext_img,
        $._richtext_gps,
        $._richtext_blueprint,
        $._richtext_armor,
        $._richtext_train,
        $._richtext_train_stop,
        $._richtext_tooltip,
        $._richtext_prototype,
    ),

    _richtext_armor: $ => seq(
        'armor=',
        /.+/
    ),

    _richtext_train: $ => seq(
        'train=',
        /[0-9]+/
    ),

    _richtext_train_stop: $ => seq(
        'train-stop=',
        /[0-9]+/
    ),

    _richtext_tooltip: $ => seq(
        'tooltip=',
        /.+/,
        ',',
        $._richtext_tooltip_locale_key
    ),

    _richtext_blueprint: $ => seq(
        'special-item=',
        /[a-zA-Z0-9=]+/
    ),

    _richtext_tooltip_locale_key: $ => /[a-zA-Z-_]\.[a-zA-Z-_]/,

    _richtext_img: $ => seq(
        'img=',
        $.richtext_img_value
    ),

    richtext_img_value: $ => choice(
        /[a-zA-Z-_][\.\/][a-zA-Z-_]/,
        /[a-zA-Z-_]/
    ),

    _richtext_gps: $ => seq(
        'gps=',
        $.richtext_gps_value
    ),

    richtext_gps_value: $ => seq(
        /[0-9]+/,
        ',',
        /[0-9]+/,
        optional(seq(',', /[a-zA-Z-_]+/))
    ),

    _richtext_prototype: $ => seq(
        $.richtext_category,
        '=',
        $.richtext_value
    ),

    richtext_category: $ => choice(
        'item',
        'entity',
        'technology',
        'recipe',
        'item-group',
        'fluid',
        'tile',
        'virtual-signal',
        'achievement'
    ),

    richtext_value: $ => /[a-zA-Z-_]/,

    richtext_color: $ => seq(
        '[color=',
        choice($.richtext_color_value, $.richtext_color_name),
        ']',
        $.locale_text,
        /\[[\/\.]color\]/
    ),

    richtext_color_name: $ => choice(
        'default',
        'red',
        'green',
        'blue',
        'orange',
        'yellow',
        'pink',
        'purple',
        'white',
        'black',
        'gray',
        'brown',
        'cyan',
        'acid'
    ),

    richtext_color_value: $ => choice(
        $._richtext_color_float,
        $._richtext_color_int,
        $._richtext_color_hex,
    ),

    _richtext_color_float: $ => seq(
        $._richtext_color_number_float,
        ',',
        $._richtext_color_number_float,
        ',',
        $._richtext_color_number_float
    ),

    _richtext_color_int: $ => seq(
        $._richtext_color_number_int,
        ',',
        $._richtext_color_number_int,
        ',',
        $._richtext_color_number_int
    ),

    _richtext_color_hex: $ => seq(
        '#',
        optional($._richtext_color_number_hex),
        $._richtext_color_number_hex,
        $._richtext_color_number_hex,
        $._richtext_color_number_hex
    ),

    _richtext_color_number_float: $ => /(1|0\.[0-9]+)/,
    _richtext_color_number_int: $ => /(?:1[0-9][0-9]|[1-9][0-9]|[1-9]|2(?:[0-4][0-9]|5[0-5]))/,
    _richtext_color_number_hex: $ => /[0-9a-f]/
  }
});

