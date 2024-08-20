#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 142
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 114
#define ALIAS_COUNT 0
#define TOKEN_COUNT 79
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LBRACK = 1,
  anon_sym_RBRACK = 2,
  aux_sym_category_name_value_token1 = 3,
  anon_sym_EQ = 4,
  aux_sym_locale_pair_token1 = 5,
  sym_locale_key = 6,
  aux_sym_locale_text_token1 = 7,
  sym_positional_arg = 8,
  aux_sym_plural_arg_token1 = 9,
  anon_sym_LBRACE = 10,
  anon_sym_PIPE = 11,
  anon_sym_RBRACE__ = 12,
  aux_sym_plural_condition_token1 = 13,
  aux_sym_plural_condition_token2 = 14,
  anon_sym_rest_EQ = 15,
  anon_sym___CONTROL_STYLE_BEGIN__ = 16,
  anon_sym___CONTROL_STYLE_END__ = 17,
  anon_sym___CONTROL_LEFT_CLICK__ = 18,
  anon_sym___CONTROL_RIGHT_CLICK__ = 19,
  anon_sym___CONTROL_KEY_SHIFT__ = 20,
  anon_sym___CONTROL_KEY_CTRL__ = 21,
  anon_sym___REMARK_COLOR_BEGIN__ = 22,
  anon_sym___REMARK_COLOR_END__ = 23,
  anon_sym___CONTROL_MOVE__ = 24,
  sym__entity_arg = 25,
  sym__item_arg = 26,
  sym__tile_arg = 27,
  sym__fluid_arg = 28,
  sym__alt_control_arg = 29,
  sym__alt_control_left_click_n = 30,
  sym__alt_control_right_click_n = 31,
  sym__control_arg = 32,
  sym__control_modifier_arg = 33,
  anon_sym_LBRACK2 = 34,
  anon_sym_RBRACK2 = 35,
  anon_sym_armor_EQ = 36,
  anon_sym_train_EQ = 37,
  aux_sym__richtext_train_token1 = 38,
  anon_sym_train_DASHstop_EQ = 39,
  anon_sym_tooltip_EQ = 40,
  anon_sym_COMMA = 41,
  anon_sym_special_DASHitem_EQ = 42,
  aux_sym__richtext_blueprint_token1 = 43,
  sym__richtext_tooltip_locale_key = 44,
  anon_sym_img_EQ = 45,
  aux_sym_richtext_img_value_token1 = 46,
  aux_sym_richtext_img_value_token2 = 47,
  anon_sym_gps_EQ = 48,
  anon_sym_EQ2 = 49,
  anon_sym_item = 50,
  anon_sym_entity = 51,
  anon_sym_technology = 52,
  anon_sym_recipe = 53,
  anon_sym_item_DASHgroup = 54,
  anon_sym_fluid = 55,
  anon_sym_tile = 56,
  anon_sym_virtual_DASHsignal = 57,
  anon_sym_achievement = 58,
  anon_sym_LBRACKcolor_EQ = 59,
  aux_sym_richtext_color_token1 = 60,
  anon_sym_default = 61,
  anon_sym_red = 62,
  anon_sym_green = 63,
  anon_sym_blue = 64,
  anon_sym_orange = 65,
  anon_sym_yellow = 66,
  anon_sym_pink = 67,
  anon_sym_purple = 68,
  anon_sym_white = 69,
  anon_sym_black = 70,
  anon_sym_gray = 71,
  anon_sym_brown = 72,
  anon_sym_cyan = 73,
  anon_sym_acid = 74,
  anon_sym_POUND = 75,
  sym__richtext_color_number_float = 76,
  sym__richtext_color_number_int = 77,
  sym__richtext_color_number_hex = 78,
  sym_source_file = 79,
  sym_locale_category = 80,
  sym_category_name = 81,
  sym_category_name_value = 82,
  sym_locale_pair = 83,
  sym_locale_text = 84,
  sym_plural_arg = 85,
  sym_plural_pair = 86,
  sym_plural_condition = 87,
  sym_plural_rest = 88,
  sym_named_arg = 89,
  sym_richtext_arg = 90,
  sym_richtext_pair = 91,
  sym__richtext_armor = 92,
  sym__richtext_train = 93,
  sym__richtext_train_stop = 94,
  sym__richtext_tooltip = 95,
  sym__richtext_blueprint = 96,
  sym__richtext_img = 97,
  sym_richtext_img_value = 98,
  sym__richtext_gps = 99,
  sym_richtext_gps_value = 100,
  sym__richtext_prototype = 101,
  sym_richtext_category = 102,
  sym_richtext_value = 103,
  sym_richtext_color = 104,
  sym_richtext_color_name = 105,
  sym_richtext_color_value = 106,
  sym__richtext_color_float = 107,
  sym__richtext_color_int = 108,
  sym__richtext_color_hex = 109,
  aux_sym_source_file_repeat1 = 110,
  aux_sym_locale_category_repeat1 = 111,
  aux_sym_locale_text_repeat1 = 112,
  aux_sym_plural_arg_repeat1 = 113,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_category_name_value_token1] = "category_name_value_token1",
  [anon_sym_EQ] = "=",
  [aux_sym_locale_pair_token1] = "locale_pair_token1",
  [sym_locale_key] = "locale_key",
  [aux_sym_locale_text_token1] = "locale_text_token1",
  [sym_positional_arg] = "positional_arg",
  [aux_sym_plural_arg_token1] = "plural_arg_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_PIPE] = "|",
  [anon_sym_RBRACE__] = "}__",
  [aux_sym_plural_condition_token1] = "plural_condition_token1",
  [aux_sym_plural_condition_token2] = "plural_condition_token2",
  [anon_sym_rest_EQ] = "rest=",
  [anon_sym___CONTROL_STYLE_BEGIN__] = "__CONTROL_STYLE_BEGIN__",
  [anon_sym___CONTROL_STYLE_END__] = "__CONTROL_STYLE_END__",
  [anon_sym___CONTROL_LEFT_CLICK__] = "__CONTROL_LEFT_CLICK__",
  [anon_sym___CONTROL_RIGHT_CLICK__] = "__CONTROL_RIGHT_CLICK__",
  [anon_sym___CONTROL_KEY_SHIFT__] = "__CONTROL_KEY_SHIFT__",
  [anon_sym___CONTROL_KEY_CTRL__] = "__CONTROL_KEY_CTRL__",
  [anon_sym___REMARK_COLOR_BEGIN__] = "__REMARK_COLOR_BEGIN__",
  [anon_sym___REMARK_COLOR_END__] = "__REMARK_COLOR_END__",
  [anon_sym___CONTROL_MOVE__] = "__CONTROL_MOVE__",
  [sym__entity_arg] = "_entity_arg",
  [sym__item_arg] = "_item_arg",
  [sym__tile_arg] = "_tile_arg",
  [sym__fluid_arg] = "_fluid_arg",
  [sym__alt_control_arg] = "_alt_control_arg",
  [sym__alt_control_left_click_n] = "_alt_control_left_click_n",
  [sym__alt_control_right_click_n] = "_alt_control_right_click_n",
  [sym__control_arg] = "_control_arg",
  [sym__control_modifier_arg] = "_control_modifier_arg",
  [anon_sym_LBRACK2] = "[",
  [anon_sym_RBRACK2] = "]",
  [anon_sym_armor_EQ] = "armor=",
  [anon_sym_train_EQ] = "train=",
  [aux_sym__richtext_train_token1] = "_richtext_train_token1",
  [anon_sym_train_DASHstop_EQ] = "train-stop=",
  [anon_sym_tooltip_EQ] = "tooltip=",
  [anon_sym_COMMA] = ",",
  [anon_sym_special_DASHitem_EQ] = "special-item=",
  [aux_sym__richtext_blueprint_token1] = "_richtext_blueprint_token1",
  [sym__richtext_tooltip_locale_key] = "_richtext_tooltip_locale_key",
  [anon_sym_img_EQ] = "img=",
  [aux_sym_richtext_img_value_token1] = "richtext_img_value_token1",
  [aux_sym_richtext_img_value_token2] = "richtext_img_value_token2",
  [anon_sym_gps_EQ] = "gps=",
  [anon_sym_EQ2] = "=",
  [anon_sym_item] = "item",
  [anon_sym_entity] = "entity",
  [anon_sym_technology] = "technology",
  [anon_sym_recipe] = "recipe",
  [anon_sym_item_DASHgroup] = "item-group",
  [anon_sym_fluid] = "fluid",
  [anon_sym_tile] = "tile",
  [anon_sym_virtual_DASHsignal] = "virtual-signal",
  [anon_sym_achievement] = "achievement",
  [anon_sym_LBRACKcolor_EQ] = "[color=",
  [aux_sym_richtext_color_token1] = "richtext_color_token1",
  [anon_sym_default] = "default",
  [anon_sym_red] = "red",
  [anon_sym_green] = "green",
  [anon_sym_blue] = "blue",
  [anon_sym_orange] = "orange",
  [anon_sym_yellow] = "yellow",
  [anon_sym_pink] = "pink",
  [anon_sym_purple] = "purple",
  [anon_sym_white] = "white",
  [anon_sym_black] = "black",
  [anon_sym_gray] = "gray",
  [anon_sym_brown] = "brown",
  [anon_sym_cyan] = "cyan",
  [anon_sym_acid] = "acid",
  [anon_sym_POUND] = "#",
  [sym__richtext_color_number_float] = "_richtext_color_number_float",
  [sym__richtext_color_number_int] = "_richtext_color_number_int",
  [sym__richtext_color_number_hex] = "_richtext_color_number_hex",
  [sym_source_file] = "source_file",
  [sym_locale_category] = "locale_category",
  [sym_category_name] = "category_name",
  [sym_category_name_value] = "category_name_value",
  [sym_locale_pair] = "locale_pair",
  [sym_locale_text] = "locale_text",
  [sym_plural_arg] = "plural_arg",
  [sym_plural_pair] = "plural_pair",
  [sym_plural_condition] = "plural_condition",
  [sym_plural_rest] = "plural_rest",
  [sym_named_arg] = "named_arg",
  [sym_richtext_arg] = "richtext_arg",
  [sym_richtext_pair] = "richtext_pair",
  [sym__richtext_armor] = "_richtext_armor",
  [sym__richtext_train] = "_richtext_train",
  [sym__richtext_train_stop] = "_richtext_train_stop",
  [sym__richtext_tooltip] = "_richtext_tooltip",
  [sym__richtext_blueprint] = "_richtext_blueprint",
  [sym__richtext_img] = "_richtext_img",
  [sym_richtext_img_value] = "richtext_img_value",
  [sym__richtext_gps] = "_richtext_gps",
  [sym_richtext_gps_value] = "richtext_gps_value",
  [sym__richtext_prototype] = "_richtext_prototype",
  [sym_richtext_category] = "richtext_category",
  [sym_richtext_value] = "richtext_value",
  [sym_richtext_color] = "richtext_color",
  [sym_richtext_color_name] = "richtext_color_name",
  [sym_richtext_color_value] = "richtext_color_value",
  [sym__richtext_color_float] = "_richtext_color_float",
  [sym__richtext_color_int] = "_richtext_color_int",
  [sym__richtext_color_hex] = "_richtext_color_hex",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_locale_category_repeat1] = "locale_category_repeat1",
  [aux_sym_locale_text_repeat1] = "locale_text_repeat1",
  [aux_sym_plural_arg_repeat1] = "plural_arg_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_category_name_value_token1] = aux_sym_category_name_value_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_locale_pair_token1] = aux_sym_locale_pair_token1,
  [sym_locale_key] = sym_locale_key,
  [aux_sym_locale_text_token1] = aux_sym_locale_text_token1,
  [sym_positional_arg] = sym_positional_arg,
  [aux_sym_plural_arg_token1] = aux_sym_plural_arg_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_RBRACE__] = anon_sym_RBRACE__,
  [aux_sym_plural_condition_token1] = aux_sym_plural_condition_token1,
  [aux_sym_plural_condition_token2] = aux_sym_plural_condition_token2,
  [anon_sym_rest_EQ] = anon_sym_rest_EQ,
  [anon_sym___CONTROL_STYLE_BEGIN__] = anon_sym___CONTROL_STYLE_BEGIN__,
  [anon_sym___CONTROL_STYLE_END__] = anon_sym___CONTROL_STYLE_END__,
  [anon_sym___CONTROL_LEFT_CLICK__] = anon_sym___CONTROL_LEFT_CLICK__,
  [anon_sym___CONTROL_RIGHT_CLICK__] = anon_sym___CONTROL_RIGHT_CLICK__,
  [anon_sym___CONTROL_KEY_SHIFT__] = anon_sym___CONTROL_KEY_SHIFT__,
  [anon_sym___CONTROL_KEY_CTRL__] = anon_sym___CONTROL_KEY_CTRL__,
  [anon_sym___REMARK_COLOR_BEGIN__] = anon_sym___REMARK_COLOR_BEGIN__,
  [anon_sym___REMARK_COLOR_END__] = anon_sym___REMARK_COLOR_END__,
  [anon_sym___CONTROL_MOVE__] = anon_sym___CONTROL_MOVE__,
  [sym__entity_arg] = sym__entity_arg,
  [sym__item_arg] = sym__item_arg,
  [sym__tile_arg] = sym__tile_arg,
  [sym__fluid_arg] = sym__fluid_arg,
  [sym__alt_control_arg] = sym__alt_control_arg,
  [sym__alt_control_left_click_n] = sym__alt_control_left_click_n,
  [sym__alt_control_right_click_n] = sym__alt_control_right_click_n,
  [sym__control_arg] = sym__control_arg,
  [sym__control_modifier_arg] = sym__control_modifier_arg,
  [anon_sym_LBRACK2] = anon_sym_LBRACK,
  [anon_sym_RBRACK2] = anon_sym_RBRACK,
  [anon_sym_armor_EQ] = anon_sym_armor_EQ,
  [anon_sym_train_EQ] = anon_sym_train_EQ,
  [aux_sym__richtext_train_token1] = aux_sym__richtext_train_token1,
  [anon_sym_train_DASHstop_EQ] = anon_sym_train_DASHstop_EQ,
  [anon_sym_tooltip_EQ] = anon_sym_tooltip_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_special_DASHitem_EQ] = anon_sym_special_DASHitem_EQ,
  [aux_sym__richtext_blueprint_token1] = aux_sym__richtext_blueprint_token1,
  [sym__richtext_tooltip_locale_key] = sym__richtext_tooltip_locale_key,
  [anon_sym_img_EQ] = anon_sym_img_EQ,
  [aux_sym_richtext_img_value_token1] = aux_sym_richtext_img_value_token1,
  [aux_sym_richtext_img_value_token2] = aux_sym_richtext_img_value_token2,
  [anon_sym_gps_EQ] = anon_sym_gps_EQ,
  [anon_sym_EQ2] = anon_sym_EQ,
  [anon_sym_item] = anon_sym_item,
  [anon_sym_entity] = anon_sym_entity,
  [anon_sym_technology] = anon_sym_technology,
  [anon_sym_recipe] = anon_sym_recipe,
  [anon_sym_item_DASHgroup] = anon_sym_item_DASHgroup,
  [anon_sym_fluid] = anon_sym_fluid,
  [anon_sym_tile] = anon_sym_tile,
  [anon_sym_virtual_DASHsignal] = anon_sym_virtual_DASHsignal,
  [anon_sym_achievement] = anon_sym_achievement,
  [anon_sym_LBRACKcolor_EQ] = anon_sym_LBRACKcolor_EQ,
  [aux_sym_richtext_color_token1] = aux_sym_richtext_color_token1,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_red] = anon_sym_red,
  [anon_sym_green] = anon_sym_green,
  [anon_sym_blue] = anon_sym_blue,
  [anon_sym_orange] = anon_sym_orange,
  [anon_sym_yellow] = anon_sym_yellow,
  [anon_sym_pink] = anon_sym_pink,
  [anon_sym_purple] = anon_sym_purple,
  [anon_sym_white] = anon_sym_white,
  [anon_sym_black] = anon_sym_black,
  [anon_sym_gray] = anon_sym_gray,
  [anon_sym_brown] = anon_sym_brown,
  [anon_sym_cyan] = anon_sym_cyan,
  [anon_sym_acid] = anon_sym_acid,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym__richtext_color_number_float] = sym__richtext_color_number_float,
  [sym__richtext_color_number_int] = sym__richtext_color_number_int,
  [sym__richtext_color_number_hex] = sym__richtext_color_number_hex,
  [sym_source_file] = sym_source_file,
  [sym_locale_category] = sym_locale_category,
  [sym_category_name] = sym_category_name,
  [sym_category_name_value] = sym_category_name_value,
  [sym_locale_pair] = sym_locale_pair,
  [sym_locale_text] = sym_locale_text,
  [sym_plural_arg] = sym_plural_arg,
  [sym_plural_pair] = sym_plural_pair,
  [sym_plural_condition] = sym_plural_condition,
  [sym_plural_rest] = sym_plural_rest,
  [sym_named_arg] = sym_named_arg,
  [sym_richtext_arg] = sym_richtext_arg,
  [sym_richtext_pair] = sym_richtext_pair,
  [sym__richtext_armor] = sym__richtext_armor,
  [sym__richtext_train] = sym__richtext_train,
  [sym__richtext_train_stop] = sym__richtext_train_stop,
  [sym__richtext_tooltip] = sym__richtext_tooltip,
  [sym__richtext_blueprint] = sym__richtext_blueprint,
  [sym__richtext_img] = sym__richtext_img,
  [sym_richtext_img_value] = sym_richtext_img_value,
  [sym__richtext_gps] = sym__richtext_gps,
  [sym_richtext_gps_value] = sym_richtext_gps_value,
  [sym__richtext_prototype] = sym__richtext_prototype,
  [sym_richtext_category] = sym_richtext_category,
  [sym_richtext_value] = sym_richtext_value,
  [sym_richtext_color] = sym_richtext_color,
  [sym_richtext_color_name] = sym_richtext_color_name,
  [sym_richtext_color_value] = sym_richtext_color_value,
  [sym__richtext_color_float] = sym__richtext_color_float,
  [sym__richtext_color_int] = sym__richtext_color_int,
  [sym__richtext_color_hex] = sym__richtext_color_hex,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_locale_category_repeat1] = aux_sym_locale_category_repeat1,
  [aux_sym_locale_text_repeat1] = aux_sym_locale_text_repeat1,
  [aux_sym_plural_arg_repeat1] = aux_sym_plural_arg_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_category_name_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_locale_pair_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_locale_key] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_locale_text_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_positional_arg] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_plural_arg_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE__] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_plural_condition_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_plural_condition_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_rest_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym___CONTROL_STYLE_BEGIN__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym___CONTROL_STYLE_END__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym___CONTROL_LEFT_CLICK__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym___CONTROL_RIGHT_CLICK__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym___CONTROL_KEY_SHIFT__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym___CONTROL_KEY_CTRL__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym___REMARK_COLOR_BEGIN__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym___REMARK_COLOR_END__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym___CONTROL_MOVE__] = {
    .visible = true,
    .named = false,
  },
  [sym__entity_arg] = {
    .visible = false,
    .named = true,
  },
  [sym__item_arg] = {
    .visible = false,
    .named = true,
  },
  [sym__tile_arg] = {
    .visible = false,
    .named = true,
  },
  [sym__fluid_arg] = {
    .visible = false,
    .named = true,
  },
  [sym__alt_control_arg] = {
    .visible = false,
    .named = true,
  },
  [sym__alt_control_left_click_n] = {
    .visible = false,
    .named = true,
  },
  [sym__alt_control_right_click_n] = {
    .visible = false,
    .named = true,
  },
  [sym__control_arg] = {
    .visible = false,
    .named = true,
  },
  [sym__control_modifier_arg] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_armor_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_train_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__richtext_train_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_train_DASHstop_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tooltip_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_special_DASHitem_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__richtext_blueprint_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__richtext_tooltip_locale_key] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_img_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_richtext_img_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_richtext_img_value_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_gps_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_item] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_entity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_technology] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_recipe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_item_DASHgroup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fluid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_virtual_DASHsignal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_achievement] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKcolor_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_richtext_color_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_red] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_green] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_orange] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yellow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pink] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_purple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_white] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_black] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brown] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cyan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_acid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym__richtext_color_number_float] = {
    .visible = false,
    .named = true,
  },
  [sym__richtext_color_number_int] = {
    .visible = false,
    .named = true,
  },
  [sym__richtext_color_number_hex] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_locale_category] = {
    .visible = true,
    .named = true,
  },
  [sym_category_name] = {
    .visible = true,
    .named = true,
  },
  [sym_category_name_value] = {
    .visible = true,
    .named = true,
  },
  [sym_locale_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_locale_text] = {
    .visible = true,
    .named = true,
  },
  [sym_plural_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_plural_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_plural_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_plural_rest] = {
    .visible = true,
    .named = true,
  },
  [sym_named_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_richtext_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_richtext_pair] = {
    .visible = true,
    .named = true,
  },
  [sym__richtext_armor] = {
    .visible = false,
    .named = true,
  },
  [sym__richtext_train] = {
    .visible = false,
    .named = true,
  },
  [sym__richtext_train_stop] = {
    .visible = false,
    .named = true,
  },
  [sym__richtext_tooltip] = {
    .visible = false,
    .named = true,
  },
  [sym__richtext_blueprint] = {
    .visible = false,
    .named = true,
  },
  [sym__richtext_img] = {
    .visible = false,
    .named = true,
  },
  [sym_richtext_img_value] = {
    .visible = true,
    .named = true,
  },
  [sym__richtext_gps] = {
    .visible = false,
    .named = true,
  },
  [sym_richtext_gps_value] = {
    .visible = true,
    .named = true,
  },
  [sym__richtext_prototype] = {
    .visible = false,
    .named = true,
  },
  [sym_richtext_category] = {
    .visible = true,
    .named = true,
  },
  [sym_richtext_value] = {
    .visible = true,
    .named = true,
  },
  [sym_richtext_color] = {
    .visible = true,
    .named = true,
  },
  [sym_richtext_color_name] = {
    .visible = true,
    .named = true,
  },
  [sym_richtext_color_value] = {
    .visible = true,
    .named = true,
  },
  [sym__richtext_color_float] = {
    .visible = false,
    .named = true,
  },
  [sym__richtext_color_int] = {
    .visible = false,
    .named = true,
  },
  [sym__richtext_color_hex] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_locale_category_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_locale_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_plural_arg_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 2,
  [6] = 4,
  [7] = 2,
  [8] = 3,
  [9] = 9,
  [10] = 3,
  [11] = 4,
  [12] = 12,
  [13] = 2,
  [14] = 14,
  [15] = 3,
  [16] = 4,
  [17] = 17,
  [18] = 17,
  [19] = 17,
  [20] = 17,
  [21] = 21,
  [22] = 22,
  [23] = 22,
  [24] = 24,
  [25] = 21,
  [26] = 26,
  [27] = 26,
  [28] = 22,
  [29] = 29,
  [30] = 24,
  [31] = 24,
  [32] = 29,
  [33] = 22,
  [34] = 26,
  [35] = 21,
  [36] = 26,
  [37] = 29,
  [38] = 29,
  [39] = 24,
  [40] = 21,
  [41] = 41,
  [42] = 41,
  [43] = 41,
  [44] = 41,
  [45] = 45,
  [46] = 45,
  [47] = 47,
  [48] = 47,
  [49] = 47,
  [50] = 45,
  [51] = 45,
  [52] = 47,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 100,
  [111] = 79,
  [112] = 74,
  [113] = 109,
  [114] = 100,
  [115] = 79,
  [116] = 74,
  [117] = 109,
  [118] = 100,
  [119] = 79,
  [120] = 74,
  [121] = 121,
  [122] = 122,
  [123] = 109,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 131,
  [134] = 105,
  [135] = 131,
  [136] = 105,
  [137] = 131,
  [138] = 105,
  [139] = 139,
  [140] = 140,
  [141] = 141,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(394);
      ADVANCE_MAP(
        '#', 691,
        ',', 639,
        '0', 597,
        '1', 600,
        '2', 598,
        '=', 399,
        '[', 396,
        ']', 397,
        '_', 646,
        'a', 660,
        'b', 654,
        'c', 662,
        'd', 645,
        'e', 657,
        'f', 655,
        'g', 658,
        'i', 656,
        'o', 661,
        'p', 652,
        'r', 647,
        's', 659,
        't', 649,
        'v', 653,
        'w', 651,
        'y', 650,
        '{', 592,
        '|', 593,
        '}', 184,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(389);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(600);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '[') ADVANCE(631);
      if (lookahead == '_') ADVANCE(517);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(403);
      if (lookahead != 0) ADVANCE(589);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '[') ADVANCE(630);
      if (lookahead == '_') ADVANCE(517);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(513);
      if (lookahead != 0) ADVANCE(589);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(584);
      if (lookahead != 0) ADVANCE(589);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(401);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '[') ADVANCE(631);
      if (lookahead == '_') ADVANCE(517);
      if (lookahead == '|') ADVANCE(594);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(512);
      if (lookahead != 0) ADVANCE(589);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '[') ADVANCE(631);
      if (lookahead == '_') ADVANCE(517);
      if (lookahead == '}') ADVANCE(553);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(512);
      if (lookahead != 0) ADVANCE(589);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '[') ADVANCE(631);
      if (lookahead == '_') ADVANCE(517);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(512);
      if (lookahead != 0) ADVANCE(589);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(376);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(284);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(346);
      if (lookahead == '=') ADVANCE(635);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(347);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(283);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(380);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == 'c') ADVANCE(274);
      if (lookahead == 'r') ADVANCE(302);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == 'i') ADVANCE(293);
      if (lookahead == 'o') ADVANCE(322);
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == 'h') ADVANCE(279);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == 'i') ADVANCE(306);
      if (lookahead == 'u') ADVANCE(334);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == 'l') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == 'l') ADVANCE(359);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == 'm') ADVANCE(268);
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == 'p') ADVANCE(343);
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == 'p') ADVANCE(258);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == 'y') ADVANCE(228);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(375);
      END_STATE();
    case 31:
      if (lookahead == '1') ADVANCE(697);
      if (lookahead == '2') ADVANCE(695);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(698);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(398);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(665);
      if (lookahead == '[') ADVANCE(370);
      if (lookahead == ']') ADVANCE(397);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == 'r') ADVANCE(259);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(600);
      END_STATE();
    case 33:
      if (lookahead == '=') ADVANCE(665);
      if (lookahead == '[') ADVANCE(370);
      if (lookahead == 'e') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(600);
      END_STATE();
    case 34:
      if (lookahead == '=') ADVANCE(664);
      END_STATE();
    case 35:
      if (lookahead == '=') ADVANCE(643);
      END_STATE();
    case 36:
      if (lookahead == '=') ADVANCE(602);
      END_STATE();
    case 37:
      if (lookahead == '=') ADVANCE(634);
      END_STATE();
    case 38:
      if (lookahead == '=') ADVANCE(638);
      END_STATE();
    case 39:
      if (lookahead == '=') ADVANCE(637);
      END_STATE();
    case 40:
      if (lookahead == '=') ADVANCE(640);
      END_STATE();
    case 41:
      ADVANCE_MAP(
        'A', 103,
        'C', 128,
        'E', 117,
        'F', 102,
        'I', 144,
        'R', 60,
        'T', 85,
        'p', 290,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 42:
      if (lookahead == 'A') ADVANCE(131);
      END_STATE();
    case 43:
      if (lookahead == 'B') ADVANCE(64);
      if (lookahead == 'E') ADVANCE(121);
      END_STATE();
    case 44:
      if (lookahead == 'B') ADVANCE(68);
      if (lookahead == 'E') ADVANCE(122);
      END_STATE();
    case 45:
      if (lookahead == 'C') ADVANCE(98);
      END_STATE();
    case 46:
      if (lookahead == 'C') ADVANCE(108);
      END_STATE();
    case 47:
      if (lookahead == 'C') ADVANCE(142);
      if (lookahead == 'S') ADVANCE(79);
      END_STATE();
    case 48:
      if (lookahead == 'C') ADVANCE(127);
      END_STATE();
    case 49:
      if (lookahead == 'C') ADVANCE(99);
      END_STATE();
    case 50:
      if (lookahead == 'C') ADVANCE(100);
      END_STATE();
    case 51:
      if (lookahead == 'C') ADVANCE(111);
      END_STATE();
    case 52:
      if (lookahead == 'C') ADVANCE(101);
      END_STATE();
    case 53:
      if (lookahead == 'C') ADVANCE(112);
      END_STATE();
    case 54:
      if (lookahead == 'C') ADVANCE(113);
      END_STATE();
    case 55:
      if (lookahead == 'C') ADVANCE(130);
      END_STATE();
    case 56:
      if (lookahead == 'D') ADVANCE(84);
      if (lookahead == 'V') ADVANCE(67);
      END_STATE();
    case 57:
      if (lookahead == 'D') ADVANCE(213);
      END_STATE();
    case 58:
      if (lookahead == 'D') ADVANCE(200);
      END_STATE();
    case 59:
      if (lookahead == 'D') ADVANCE(202);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(115);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(73);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(116);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(152);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(76);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(135);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(211);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(198);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(77);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(223);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(74);
      END_STATE();
    case 71:
      if (lookahead == 'F') ADVANCE(89);
      END_STATE();
    case 72:
      if (lookahead == 'F') ADVANCE(145);
      END_STATE();
    case 73:
      if (lookahead == 'F') ADVANCE(143);
      END_STATE();
    case 74:
      if (lookahead == 'F') ADVANCE(148);
      END_STATE();
    case 75:
      if (lookahead == 'G') ADVANCE(80);
      END_STATE();
    case 76:
      if (lookahead == 'G') ADVANCE(86);
      END_STATE();
    case 77:
      if (lookahead == 'G') ADVANCE(91);
      END_STATE();
    case 78:
      if (lookahead == 'G') ADVANCE(81);
      END_STATE();
    case 79:
      if (lookahead == 'H') ADVANCE(90);
      END_STATE();
    case 80:
      if (lookahead == 'H') ADVANCE(147);
      END_STATE();
    case 81:
      if (lookahead == 'H') ADVANCE(149);
      END_STATE();
    case 82:
      if (lookahead == 'I') ADVANCE(57);
      END_STATE();
    case 83:
      if (lookahead == 'I') ADVANCE(75);
      END_STATE();
    case 84:
      if (lookahead == 'I') ADVANCE(71);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(104);
      END_STATE();
    case 86:
      if (lookahead == 'I') ADVANCE(119);
      END_STATE();
    case 87:
      if (lookahead == 'I') ADVANCE(45);
      END_STATE();
    case 88:
      if (lookahead == 'I') ADVANCE(138);
      END_STATE();
    case 89:
      if (lookahead == 'I') ADVANCE(65);
      END_STATE();
    case 90:
      if (lookahead == 'I') ADVANCE(72);
      END_STATE();
    case 91:
      if (lookahead == 'I') ADVANCE(120);
      END_STATE();
    case 92:
      if (lookahead == 'I') ADVANCE(49);
      END_STATE();
    case 93:
      if (lookahead == 'I') ADVANCE(50);
      END_STATE();
    case 94:
      if (lookahead == 'I') ADVANCE(52);
      END_STATE();
    case 95:
      if (lookahead == 'I') ADVANCE(78);
      END_STATE();
    case 96:
      if (lookahead == 'K') ADVANCE(63);
      if (lookahead == 'L') ADVANCE(61);
      if (lookahead == 'M') ADVANCE(124);
      if (lookahead == 'R') ADVANCE(83);
      if (lookahead == 'S') ADVANCE(140);
      if (lookahead == '_') ADVANCE(386);
      END_STATE();
    case 97:
      if (lookahead == 'K') ADVANCE(185);
      END_STATE();
    case 98:
      if (lookahead == 'K') ADVANCE(203);
      END_STATE();
    case 99:
      if (lookahead == 'K') ADVANCE(205);
      END_STATE();
    case 100:
      if (lookahead == 'K') ADVANCE(207);
      END_STATE();
    case 101:
      if (lookahead == 'K') ADVANCE(222);
      END_STATE();
    case 102:
      if (lookahead == 'L') ADVANCE(150);
      END_STATE();
    case 103:
      if (lookahead == 'L') ADVANCE(141);
      END_STATE();
    case 104:
      if (lookahead == 'L') ADVANCE(66);
      END_STATE();
    case 105:
      if (lookahead == 'L') ADVANCE(125);
      END_STATE();
    case 106:
      if (lookahead == 'L') ADVANCE(69);
      END_STATE();
    case 107:
      if (lookahead == 'L') ADVANCE(160);
      END_STATE();
    case 108:
      if (lookahead == 'L') ADVANCE(87);
      END_STATE();
    case 109:
      if (lookahead == 'L') ADVANCE(165);
      END_STATE();
    case 110:
      if (lookahead == 'L') ADVANCE(199);
      END_STATE();
    case 111:
      if (lookahead == 'L') ADVANCE(92);
      END_STATE();
    case 112:
      if (lookahead == 'L') ADVANCE(93);
      END_STATE();
    case 113:
      if (lookahead == 'L') ADVANCE(94);
      END_STATE();
    case 114:
      if (lookahead == 'L') ADVANCE(70);
      if (lookahead == 'R') ADVANCE(95);
      if (lookahead == '_') ADVANCE(377);
      END_STATE();
    case 115:
      if (lookahead == 'M') ADVANCE(42);
      END_STATE();
    case 116:
      if (lookahead == 'M') ADVANCE(192);
      END_STATE();
    case 117:
      if (lookahead == 'N') ADVANCE(139);
      END_STATE();
    case 118:
      if (lookahead == 'N') ADVANCE(137);
      END_STATE();
    case 119:
      if (lookahead == 'N') ADVANCE(204);
      END_STATE();
    case 120:
      if (lookahead == 'N') ADVANCE(206);
      END_STATE();
    case 121:
      if (lookahead == 'N') ADVANCE(58);
      END_STATE();
    case 122:
      if (lookahead == 'N') ADVANCE(59);
      END_STATE();
    case 123:
      if (lookahead == 'N') ADVANCE(146);
      END_STATE();
    case 124:
      if (lookahead == 'O') ADVANCE(56);
      END_STATE();
    case 125:
      if (lookahead == 'O') ADVANCE(134);
      END_STATE();
    case 126:
      if (lookahead == 'O') ADVANCE(107);
      END_STATE();
    case 127:
      if (lookahead == 'O') ADVANCE(105);
      END_STATE();
    case 128:
      if (lookahead == 'O') ADVANCE(118);
      END_STATE();
    case 129:
      if (lookahead == 'O') ADVANCE(109);
      END_STATE();
    case 130:
      if (lookahead == 'O') ADVANCE(123);
      END_STATE();
    case 131:
      if (lookahead == 'R') ADVANCE(97);
      END_STATE();
    case 132:
      if (lookahead == 'R') ADVANCE(126);
      END_STATE();
    case 133:
      if (lookahead == 'R') ADVANCE(110);
      END_STATE();
    case 134:
      if (lookahead == 'R') ADVANCE(168);
      END_STATE();
    case 135:
      if (lookahead == 'R') ADVANCE(220);
      END_STATE();
    case 136:
      if (lookahead == 'R') ADVANCE(129);
      END_STATE();
    case 137:
      if (lookahead == 'T') ADVANCE(132);
      END_STATE();
    case 138:
      if (lookahead == 'T') ADVANCE(153);
      END_STATE();
    case 139:
      if (lookahead == 'T') ADVANCE(88);
      END_STATE();
    case 140:
      if (lookahead == 'T') ADVANCE(151);
      END_STATE();
    case 141:
      if (lookahead == 'T') ADVANCE(158);
      END_STATE();
    case 142:
      if (lookahead == 'T') ADVANCE(133);
      END_STATE();
    case 143:
      if (lookahead == 'T') ADVANCE(189);
      END_STATE();
    case 144:
      if (lookahead == 'T') ADVANCE(62);
      END_STATE();
    case 145:
      if (lookahead == 'T') ADVANCE(201);
      END_STATE();
    case 146:
      if (lookahead == 'T') ADVANCE(136);
      END_STATE();
    case 147:
      if (lookahead == 'T') ADVANCE(224);
      END_STATE();
    case 148:
      if (lookahead == 'T') ADVANCE(225);
      END_STATE();
    case 149:
      if (lookahead == 'T') ADVANCE(226);
      END_STATE();
    case 150:
      if (lookahead == 'U') ADVANCE(82);
      END_STATE();
    case 151:
      if (lookahead == 'Y') ADVANCE(106);
      END_STATE();
    case 152:
      if (lookahead == 'Y') ADVANCE(166);
      END_STATE();
    case 153:
      if (lookahead == 'Y') ADVANCE(215);
      END_STATE();
    case 154:
      if (lookahead == ']') ADVANCE(633);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(699);
      END_STATE();
    case 155:
      if (lookahead == ']') ADVANCE(676);
      END_STATE();
    case 156:
      if (lookahead == '_') ADVANCE(595);
      END_STATE();
    case 157:
      if (lookahead == '_') ADVANCE(590);
      END_STATE();
    case 158:
      if (lookahead == '_') ADVANCE(55);
      END_STATE();
    case 159:
      if (lookahead == '_') ADVANCE(267);
      END_STATE();
    case 160:
      if (lookahead == '_') ADVANCE(96);
      END_STATE();
    case 161:
      if (lookahead == '_') ADVANCE(622);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 162:
      if (lookahead == '_') ADVANCE(623);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 163:
      if (lookahead == '_') ADVANCE(624);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 164:
      if (lookahead == '_') ADVANCE(621);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 165:
      if (lookahead == '_') ADVANCE(114);
      END_STATE();
    case 166:
      if (lookahead == '_') ADVANCE(47);
      END_STATE();
    case 167:
      if (lookahead == '_') ADVANCE(628);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 168:
      if (lookahead == '_') ADVANCE(43);
      END_STATE();
    case 169:
      if (lookahead == '_') ADVANCE(619);
      END_STATE();
    case 170:
      if (lookahead == '_') ADVANCE(613);
      END_STATE();
    case 171:
      if (lookahead == '_') ADVANCE(617);
      END_STATE();
    case 172:
      if (lookahead == '_') ADVANCE(625);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 173:
      if (lookahead == '_') ADVANCE(611);
      END_STATE();
    case 174:
      if (lookahead == '_') ADVANCE(605);
      END_STATE();
    case 175:
      if (lookahead == '_') ADVANCE(607);
      END_STATE();
    case 176:
      if (lookahead == '_') ADVANCE(615);
      END_STATE();
    case 177:
      if (lookahead == '_') ADVANCE(629);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 178:
      if (lookahead == '_') ADVANCE(609);
      END_STATE();
    case 179:
      if (lookahead == '_') ADVANCE(603);
      END_STATE();
    case 180:
      if (lookahead == '_') ADVANCE(373);
      END_STATE();
    case 181:
      if (lookahead == '_') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 182:
      if (lookahead == '_') ADVANCE(626);
      END_STATE();
    case 183:
      if (lookahead == '_') ADVANCE(627);
      END_STATE();
    case 184:
      if (lookahead == '_') ADVANCE(156);
      END_STATE();
    case 185:
      if (lookahead == '_') ADVANCE(48);
      END_STATE();
    case 186:
      if (lookahead == '_') ADVANCE(161);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 187:
      if (lookahead == '_') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 188:
      if (lookahead == '_') ADVANCE(382);
      END_STATE();
    case 189:
      if (lookahead == '_') ADVANCE(46);
      END_STATE();
    case 190:
      if (lookahead == '_') ADVANCE(162);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 191:
      if (lookahead == '_') ADVANCE(163);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 192:
      if (lookahead == '_') ADVANCE(188);
      END_STATE();
    case 193:
      if (lookahead == '_') ADVANCE(329);
      END_STATE();
    case 194:
      if (lookahead == '_') ADVANCE(164);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 195:
      if (lookahead == '_') ADVANCE(167);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 196:
      if (lookahead == '_') ADVANCE(172);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 197:
      if (lookahead == '_') ADVANCE(177);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 198:
      if (lookahead == '_') ADVANCE(169);
      END_STATE();
    case 199:
      if (lookahead == '_') ADVANCE(170);
      END_STATE();
    case 200:
      if (lookahead == '_') ADVANCE(171);
      END_STATE();
    case 201:
      if (lookahead == '_') ADVANCE(173);
      END_STATE();
    case 202:
      if (lookahead == '_') ADVANCE(174);
      END_STATE();
    case 203:
      if (lookahead == '_') ADVANCE(175);
      END_STATE();
    case 204:
      if (lookahead == '_') ADVANCE(176);
      END_STATE();
    case 205:
      if (lookahead == '_') ADVANCE(178);
      END_STATE();
    case 206:
      if (lookahead == '_') ADVANCE(179);
      END_STATE();
    case 207:
      if (lookahead == '_') ADVANCE(219);
      END_STATE();
    case 208:
      if (lookahead == '_') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 209:
      if (lookahead == '_') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 210:
      if (lookahead == '_') ADVANCE(383);
      END_STATE();
    case 211:
      if (lookahead == '_') ADVANCE(210);
      END_STATE();
    case 212:
      if (lookahead == '_') ADVANCE(384);
      END_STATE();
    case 213:
      if (lookahead == '_') ADVANCE(212);
      END_STATE();
    case 214:
      if (lookahead == '_') ADVANCE(385);
      END_STATE();
    case 215:
      if (lookahead == '_') ADVANCE(214);
      END_STATE();
    case 216:
      if (lookahead == '_') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 217:
      if (lookahead == '_') ADVANCE(387);
      END_STATE();
    case 218:
      if (lookahead == '_') ADVANCE(388);
      END_STATE();
    case 219:
      if (lookahead == '_') ADVANCE(378);
      END_STATE();
    case 220:
      if (lookahead == '_') ADVANCE(218);
      END_STATE();
    case 221:
      if (lookahead == '_') ADVANCE(379);
      END_STATE();
    case 222:
      if (lookahead == '_') ADVANCE(221);
      END_STATE();
    case 223:
      if (lookahead == '_') ADVANCE(44);
      END_STATE();
    case 224:
      if (lookahead == '_') ADVANCE(51);
      END_STATE();
    case 225:
      if (lookahead == '_') ADVANCE(53);
      END_STATE();
    case 226:
      if (lookahead == '_') ADVANCE(54);
      END_STATE();
    case 227:
      if (lookahead == 'a') ADVANCE(367);
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 228:
      if (lookahead == 'a') ADVANCE(307);
      END_STATE();
    case 229:
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == 'u') ADVANCE(249);
      END_STATE();
    case 230:
      if (lookahead == 'a') ADVANCE(311);
      END_STATE();
    case 231:
      if (lookahead == 'a') ADVANCE(304);
      END_STATE();
    case 232:
      if (lookahead == 'a') ADVANCE(282);
      END_STATE();
    case 233:
      if (lookahead == 'a') ADVANCE(363);
      END_STATE();
    case 234:
      if (lookahead == 'a') ADVANCE(288);
      END_STATE();
    case 235:
      if (lookahead == 'a') ADVANCE(339);
      END_STATE();
    case 236:
      if (lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 237:
      if (lookahead == 'a') ADVANCE(296);
      END_STATE();
    case 238:
      if (lookahead == 'a') ADVANCE(289);
      END_STATE();
    case 239:
      if (lookahead == 'c') ADVANCE(273);
      END_STATE();
    case 240:
      if (lookahead == 'c') ADVANCE(287);
      END_STATE();
    case 241:
      if (lookahead == 'c') ADVANCE(276);
      if (lookahead == 'd') ADVANCE(678);
      END_STATE();
    case 242:
      if (lookahead == 'c') ADVANCE(276);
      if (lookahead == 'd') ADVANCE(678);
      if (lookahead == 's') ADVANCE(352);
      END_STATE();
    case 243:
      if (lookahead == 'c') ADVANCE(277);
      END_STATE();
    case 244:
      if (lookahead == 'c') ADVANCE(324);
      END_STATE();
    case 245:
      if (lookahead == 'd') ADVANCE(671);
      END_STATE();
    case 246:
      if (lookahead == 'd') ADVANCE(690);
      END_STATE();
    case 247:
      if (lookahead == 'd') ADVANCE(345);
      END_STATE();
    case 248:
      if (lookahead == 'd') ADVANCE(345);
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(680);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(672);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(685);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(681);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(669);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 266:
      if (lookahead == 'f') ADVANCE(233);
      END_STATE();
    case 267:
      if (lookahead == 'f') ADVANCE(325);
      END_STATE();
    case 268:
      if (lookahead == 'g') ADVANCE(35);
      END_STATE();
    case 269:
      if (lookahead == 'g') ADVANCE(369);
      END_STATE();
    case 270:
      if (lookahead == 'g') ADVANCE(337);
      END_STATE();
    case 271:
      if (lookahead == 'g') ADVANCE(252);
      END_STATE();
    case 272:
      if (lookahead == 'g') ADVANCE(316);
      END_STATE();
    case 273:
      if (lookahead == 'h') ADVANCE(315);
      END_STATE();
    case 274:
      if (lookahead == 'h') ADVANCE(285);
      if (lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 275:
      if (lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 276:
      if (lookahead == 'i') ADVANCE(332);
      END_STATE();
    case 277:
      if (lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 278:
      if (lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 279:
      if (lookahead == 'i') ADVANCE(354);
      END_STATE();
    case 280:
      if (lookahead == 'i') ADVANCE(350);
      END_STATE();
    case 281:
      if (lookahead == 'i') ADVANCE(272);
      END_STATE();
    case 282:
      if (lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(357);
      END_STATE();
    case 284:
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 285:
      if (lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 286:
      if (lookahead == 'k') ADVANCE(683);
      END_STATE();
    case 287:
      if (lookahead == 'k') ADVANCE(686);
      END_STATE();
    case 288:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 289:
      if (lookahead == 'l') ADVANCE(673);
      END_STATE();
    case 290:
      if (lookahead == 'l') ADVANCE(360);
      END_STATE();
    case 291:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 292:
      if (lookahead == 'l') ADVANCE(321);
      END_STATE();
    case 293:
      if (lookahead == 'l') ADVANCE(250);
      END_STATE();
    case 294:
      if (lookahead == 'l') ADVANCE(299);
      END_STATE();
    case 295:
      if (lookahead == 'l') ADVANCE(355);
      END_STATE();
    case 296:
      if (lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 297:
      if (lookahead == 'l') ADVANCE(253);
      END_STATE();
    case 298:
      if (lookahead == 'l') ADVANCE(348);
      END_STATE();
    case 299:
      if (lookahead == 'l') ADVANCE(318);
      END_STATE();
    case 300:
      if (lookahead == 'l') ADVANCE(323);
      END_STATE();
    case 301:
      if (lookahead == 'm') ADVANCE(666);
      END_STATE();
    case 302:
      if (lookahead == 'm') ADVANCE(319);
      END_STATE();
    case 303:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 304:
      if (lookahead == 'm') ADVANCE(263);
      END_STATE();
    case 305:
      if (lookahead == 'm') ADVANCE(262);
      END_STATE();
    case 306:
      if (lookahead == 'n') ADVANCE(286);
      END_STATE();
    case 307:
      if (lookahead == 'n') ADVANCE(689);
      END_STATE();
    case 308:
      if (lookahead == 'n') ADVANCE(688);
      END_STATE();
    case 309:
      if (lookahead == 'n') ADVANCE(679);
      END_STATE();
    case 310:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 311:
      if (lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 312:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 313:
      if (lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 314:
      if (lookahead == 'n') ADVANCE(349);
      END_STATE();
    case 315:
      if (lookahead == 'n') ADVANCE(326);
      END_STATE();
    case 316:
      if (lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 317:
      if (lookahead == 'o') ADVANCE(366);
      END_STATE();
    case 318:
      if (lookahead == 'o') ADVANCE(365);
      END_STATE();
    case 319:
      if (lookahead == 'o') ADVANCE(338);
      END_STATE();
    case 320:
      if (lookahead == 'o') ADVANCE(361);
      END_STATE();
    case 321:
      if (lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 322:
      if (lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 323:
      if (lookahead == 'o') ADVANCE(335);
      END_STATE();
    case 324:
      if (lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 325:
      if (lookahead == 'o') ADVANCE(340);
      END_STATE();
    case 326:
      if (lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 327:
      if (lookahead == 'o') ADVANCE(331);
      END_STATE();
    case 328:
      if (lookahead == 'p') ADVANCE(670);
      END_STATE();
    case 329:
      if (lookahead == 'p') ADVANCE(235);
      END_STATE();
    case 330:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 331:
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 332:
      if (lookahead == 'p') ADVANCE(254);
      END_STATE();
    case 333:
      if (lookahead == 'p') ADVANCE(297);
      END_STATE();
    case 334:
      if (lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 335:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 336:
      if (lookahead == 'r') ADVANCE(351);
      END_STATE();
    case 337:
      if (lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 338:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 339:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 340:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 341:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 342:
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 343:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 344:
      if (lookahead == 's') ADVANCE(352);
      END_STATE();
    case 345:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 346:
      if (lookahead == 's') ADVANCE(353);
      END_STATE();
    case 347:
      if (lookahead == 's') ADVANCE(281);
      END_STATE();
    case 348:
      if (lookahead == 't') ADVANCE(677);
      END_STATE();
    case 349:
      if (lookahead == 't') ADVANCE(674);
      END_STATE();
    case 350:
      if (lookahead == 't') ADVANCE(368);
      END_STATE();
    case 351:
      if (lookahead == 't') ADVANCE(362);
      END_STATE();
    case 352:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 353:
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 354:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 355:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 356:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 357:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 358:
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 359:
      if (lookahead == 'u') ADVANCE(275);
      END_STATE();
    case 360:
      if (lookahead == 'u') ADVANCE(342);
      END_STATE();
    case 361:
      if (lookahead == 'u') ADVANCE(328);
      END_STATE();
    case 362:
      if (lookahead == 'u') ADVANCE(236);
      END_STATE();
    case 363:
      if (lookahead == 'u') ADVANCE(298);
      END_STATE();
    case 364:
      if (lookahead == 'v') ADVANCE(264);
      END_STATE();
    case 365:
      if (lookahead == 'w') ADVANCE(682);
      END_STATE();
    case 366:
      if (lookahead == 'w') ADVANCE(308);
      END_STATE();
    case 367:
      if (lookahead == 'y') ADVANCE(687);
      END_STATE();
    case 368:
      if (lookahead == 'y') ADVANCE(667);
      END_STATE();
    case 369:
      if (lookahead == 'y') ADVANCE(668);
      END_STATE();
    case 370:
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(244);
      END_STATE();
    case 371:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(371);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(636);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 372:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 373:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 374:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(600);
      END_STATE();
    case 375:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(692);
      END_STATE();
    case 376:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      END_STATE();
    case 377:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 378:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 379:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 380:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 381:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 382:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 383:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 384:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 385:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 386:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 387:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 388:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 389:
      if (eof) ADVANCE(394);
      ADVANCE_MAP(
        '#', 691,
        ',', 639,
        '0', 597,
        '1', 600,
        '2', 598,
        '=', 665,
        '[', 632,
        ']', 633,
        '_', 646,
        'a', 660,
        'b', 654,
        'c', 662,
        'd', 645,
        'e', 657,
        'f', 655,
        'g', 658,
        'i', 656,
        'o', 661,
        'p', 652,
        'r', 648,
        's', 659,
        't', 649,
        'v', 653,
        'w', 651,
        'y', 650,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(389);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(600);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 390:
      if (eof) ADVANCE(394);
      ADVANCE_MAP(
        '#', 691,
        ',', 639,
        '0', 30,
        '1', 693,
        '2', 695,
        '=', 399,
        '[', 395,
        ']', 633,
        'a', 14,
        'b', 22,
        'c', 29,
        'd', 18,
        'e', 25,
        'f', 23,
        'g', 26,
        'i', 24,
        'o', 28,
        'p', 20,
        'r', 15,
        's', 27,
        't', 16,
        'v', 21,
        'w', 19,
        'y', 17,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(391);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(698);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 391:
      if (eof) ADVANCE(394);
      ADVANCE_MAP(
        '#', 691,
        ',', 639,
        '0', 30,
        '1', 693,
        '2', 695,
        ']', 633,
        'a', 14,
        'b', 22,
        'c', 29,
        'd', 18,
        'e', 25,
        'f', 23,
        'g', 26,
        'i', 24,
        'o', 28,
        'p', 20,
        'r', 15,
        's', 27,
        't', 16,
        'v', 21,
        'w', 19,
        'y', 17,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(391);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(698);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 392:
      if (eof) ADVANCE(394);
      if (lookahead == '[') ADVANCE(395);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 393:
      if (eof) ADVANCE(394);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(244);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_category_name_value_token1);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(398);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_locale_pair_token1);
      if (lookahead == '\n') ADVANCE(400);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(403);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_locale_pair_token1);
      if (lookahead == '\n') ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_locale_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '[') ADVANCE(631);
      if (lookahead == '_') ADVANCE(517);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(403);
      if (lookahead != 0) ADVANCE(589);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '=') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      ADVANCE_MAP(
        'A', 463,
        'C', 487,
        'E', 476,
        'F', 462,
        'I', 503,
        'R', 422,
        'T', 447,
        'p', 565,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'A') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'B') ADVANCE(425);
      if (lookahead == 'E') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'B') ADVANCE(430);
      if (lookahead == 'E') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'C') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'C') ADVANCE(501);
      if (lookahead == 'S') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'C') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'C') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'C') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'C') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'C') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'C') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'C') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'D') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'D') ADVANCE(446);
      if (lookahead == 'V') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'D') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'D') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'E') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'E') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'E') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'E') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'E') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'E') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'E') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'E') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'E') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'E') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'E') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'F') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'F') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'F') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'F') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'G') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'G') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'G') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'G') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'H') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'H') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'H') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'I') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'I') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'I') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'I') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'I') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'I') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'I') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'I') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'I') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'I') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'I') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'I') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'I') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'K') ADVANCE(427);
      if (lookahead == 'L') ADVANCE(423);
      if (lookahead == 'M') ADVANCE(483);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'S') ADVANCE(499);
      if (lookahead == '_') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'K') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'K') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'K') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'K') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'L') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'L') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'L') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'L') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'L') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'L') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'L') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'L') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'L') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'L') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'L') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'L') ADVANCE(432);
      if (lookahead == 'R') ADVANCE(456);
      if (lookahead == '_') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'M') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'M') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'N') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'N') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'N') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'N') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'N') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'N') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'N') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'O') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'O') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'O') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'O') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'O') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'O') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'O') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'R') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'R') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'R') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'R') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'R') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'R') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'T') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'T') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'T') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'T') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'T') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'T') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'T') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'T') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'T') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'T') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'T') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'T') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'U') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'Y') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'Y') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'Y') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '[') ADVANCE(631);
      if (lookahead == '_') ADVANCE(517);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(512);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(589);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '[') ADVANCE(630);
      if (lookahead == '_') ADVANCE(517);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(513);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(589);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == ']') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '_') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'a') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'a') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'a') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'c') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'e') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'e') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'f') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'l') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'l') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'l') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'l') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'm') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'o') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'o') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'o') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'o') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'o') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'p') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'r') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'r') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'r') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'r') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'r') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'r') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 't') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == 'u') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(584);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(589);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_locale_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_positional_arg);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_plural_arg_token1);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_RBRACE__);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_RBRACE__);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_plural_condition_token1);
      if (lookahead == ',') ADVANCE(374);
      if (lookahead == '.') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(600);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_plural_condition_token1);
      if (lookahead == ',') ADVANCE(374);
      if (lookahead == '5') ADVANCE(599);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(600);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_plural_condition_token1);
      if (lookahead == ',') ADVANCE(374);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(600);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_plural_condition_token1);
      if (lookahead == ',') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(600);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_plural_condition_token2);
      if (lookahead == ',') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_rest_EQ);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym___CONTROL_STYLE_BEGIN__);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym___CONTROL_STYLE_BEGIN__);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym___CONTROL_STYLE_END__);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym___CONTROL_STYLE_END__);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym___CONTROL_LEFT_CLICK__);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym___CONTROL_LEFT_CLICK__);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym___CONTROL_RIGHT_CLICK__);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym___CONTROL_RIGHT_CLICK__);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym___CONTROL_KEY_SHIFT__);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym___CONTROL_KEY_SHIFT__);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym___CONTROL_KEY_CTRL__);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym___CONTROL_KEY_CTRL__);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym___REMARK_COLOR_BEGIN__);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym___REMARK_COLOR_BEGIN__);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym___REMARK_COLOR_END__);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym___REMARK_COLOR_END__);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym___CONTROL_MOVE__);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym___CONTROL_MOVE__);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__entity_arg);
      if (lookahead == '_') ADVANCE(621);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__item_arg);
      if (lookahead == '_') ADVANCE(622);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__tile_arg);
      if (lookahead == '_') ADVANCE(623);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__fluid_arg);
      if (lookahead == '_') ADVANCE(624);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__alt_control_arg);
      if (lookahead == '_') ADVANCE(625);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__alt_control_left_click_n);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__alt_control_right_click_n);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__control_arg);
      if (lookahead == '_') ADVANCE(628);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__control_modifier_arg);
      if (lookahead == '_') ADVANCE(629);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      if (lookahead == 'c') ADVANCE(570);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      if (lookahead == 'c') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(244);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_RBRACK2);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_armor_EQ);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_train_EQ);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__richtext_train_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(636);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_train_DASHstop_EQ);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_tooltip_EQ);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_special_DASHitem_EQ);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym__richtext_blueprint_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__richtext_tooltip_locale_key);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_img_EQ);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_richtext_img_value_token1);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_richtext_img_value_token2);
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == '/') ADVANCE(381);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_richtext_img_value_token2);
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead == '_') ADVANCE(41);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_richtext_img_value_token2);
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_richtext_img_value_token2);
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_richtext_img_value_token2);
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == 'i') ADVANCE(293);
      if (lookahead == 'o') ADVANCE(322);
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_richtext_img_value_token2);
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_richtext_img_value_token2);
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead == 'h') ADVANCE(279);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_richtext_img_value_token2);
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead == 'i') ADVANCE(306);
      if (lookahead == 'u') ADVANCE(334);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_richtext_img_value_token2);
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_richtext_img_value_token2);
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead == 'l') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_richtext_img_value_token2);
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead == 'l') ADVANCE(359);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_richtext_img_value_token2);
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead == 'm') ADVANCE(268);
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_richtext_img_value_token2);
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_richtext_img_value_token2);
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead == 'p') ADVANCE(343);
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_richtext_img_value_token2);
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead == 'p') ADVANCE(258);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_richtext_img_value_token2);
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead == 'r') ADVANCE(302);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_richtext_img_value_token2);
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_richtext_img_value_token2);
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead == 'y') ADVANCE(228);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_richtext_img_value_token2);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(381);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_gps_EQ);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == '-') ADVANCE(270);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_technology);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_recipe);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_item_DASHgroup);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_fluid);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_tile);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_virtual_DASHsignal);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_achievement);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_LBRACKcolor_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_richtext_color_token1);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_red);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_green);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_blue);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_orange);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_yellow);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_pink);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_purple);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_white);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_black);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_gray);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_brown);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_cyan);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_acid);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__richtext_color_number_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(692);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__richtext_color_number_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(698);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__richtext_color_number_int);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__richtext_color_number_int);
      if (lookahead == '5') ADVANCE(696);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(698);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__richtext_color_number_int);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(694);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__richtext_color_number_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(698);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__richtext_color_number_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__richtext_color_number_hex);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 390},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 390},
  [18] = {.lex_state = 390},
  [19] = {.lex_state = 390},
  [20] = {.lex_state = 390},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 390},
  [42] = {.lex_state = 390},
  [43] = {.lex_state = 390},
  [44] = {.lex_state = 390},
  [45] = {.lex_state = 32},
  [46] = {.lex_state = 32},
  [47] = {.lex_state = 32},
  [48] = {.lex_state = 32},
  [49] = {.lex_state = 32},
  [50] = {.lex_state = 32},
  [51] = {.lex_state = 32},
  [52] = {.lex_state = 32},
  [53] = {.lex_state = 32},
  [54] = {.lex_state = 392},
  [55] = {.lex_state = 390},
  [56] = {.lex_state = 390},
  [57] = {.lex_state = 392},
  [58] = {.lex_state = 392},
  [59] = {.lex_state = 371},
  [60] = {.lex_state = 392},
  [61] = {.lex_state = 32},
  [62] = {.lex_state = 371},
  [63] = {.lex_state = 371},
  [64] = {.lex_state = 154},
  [65] = {.lex_state = 31},
  [66] = {.lex_state = 390},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 390},
  [69] = {.lex_state = 390},
  [70] = {.lex_state = 390},
  [71] = {.lex_state = 154},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 32},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 390},
  [78] = {.lex_state = 390},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 390},
  [81] = {.lex_state = 31},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 31},
  [84] = {.lex_state = 390},
  [85] = {.lex_state = 390},
  [86] = {.lex_state = 390},
  [87] = {.lex_state = 390},
  [88] = {.lex_state = 31},
  [89] = {.lex_state = 390},
  [90] = {.lex_state = 154},
  [91] = {.lex_state = 390},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 390},
  [94] = {.lex_state = 390},
  [95] = {.lex_state = 390},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 390},
  [98] = {.lex_state = 390},
  [99] = {.lex_state = 390},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 390},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 390},
  [104] = {.lex_state = 371},
  [105] = {.lex_state = 390},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 154},
  [108] = {.lex_state = 390},
  [109] = {.lex_state = 390},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 32},
  [113] = {.lex_state = 390},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 32},
  [117] = {.lex_state = 390},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 32},
  [121] = {.lex_state = 32},
  [122] = {.lex_state = 390},
  [123] = {.lex_state = 390},
  [124] = {.lex_state = 32},
  [125] = {.lex_state = 372},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 371},
  [128] = {.lex_state = 371},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 392},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 390},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 390},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 390},
  [139] = {.lex_state = 390},
  [140] = {.lex_state = 32},
  [141] = {.lex_state = 32},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_positional_arg] = ACTIONS(1),
    [aux_sym_plural_arg_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_RBRACE__] = ACTIONS(1),
    [aux_sym_plural_condition_token1] = ACTIONS(1),
    [aux_sym_plural_condition_token2] = ACTIONS(1),
    [anon_sym_rest_EQ] = ACTIONS(1),
    [anon_sym___CONTROL_STYLE_BEGIN__] = ACTIONS(1),
    [anon_sym___CONTROL_STYLE_END__] = ACTIONS(1),
    [anon_sym___CONTROL_LEFT_CLICK__] = ACTIONS(1),
    [anon_sym___CONTROL_RIGHT_CLICK__] = ACTIONS(1),
    [anon_sym___CONTROL_KEY_SHIFT__] = ACTIONS(1),
    [anon_sym___CONTROL_KEY_CTRL__] = ACTIONS(1),
    [anon_sym___REMARK_COLOR_BEGIN__] = ACTIONS(1),
    [anon_sym___REMARK_COLOR_END__] = ACTIONS(1),
    [anon_sym___CONTROL_MOVE__] = ACTIONS(1),
    [sym__entity_arg] = ACTIONS(1),
    [sym__item_arg] = ACTIONS(1),
    [sym__tile_arg] = ACTIONS(1),
    [sym__fluid_arg] = ACTIONS(1),
    [sym__alt_control_arg] = ACTIONS(1),
    [sym__alt_control_left_click_n] = ACTIONS(1),
    [sym__alt_control_right_click_n] = ACTIONS(1),
    [sym__control_arg] = ACTIONS(1),
    [sym__control_modifier_arg] = ACTIONS(1),
    [anon_sym_LBRACK2] = ACTIONS(1),
    [anon_sym_RBRACK2] = ACTIONS(1),
    [anon_sym_armor_EQ] = ACTIONS(1),
    [anon_sym_train_EQ] = ACTIONS(1),
    [aux_sym__richtext_train_token1] = ACTIONS(1),
    [anon_sym_train_DASHstop_EQ] = ACTIONS(1),
    [anon_sym_tooltip_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_special_DASHitem_EQ] = ACTIONS(1),
    [sym__richtext_tooltip_locale_key] = ACTIONS(1),
    [anon_sym_img_EQ] = ACTIONS(1),
    [aux_sym_richtext_img_value_token1] = ACTIONS(1),
    [aux_sym_richtext_img_value_token2] = ACTIONS(1),
    [anon_sym_gps_EQ] = ACTIONS(1),
    [anon_sym_EQ2] = ACTIONS(1),
    [anon_sym_item] = ACTIONS(1),
    [anon_sym_entity] = ACTIONS(1),
    [anon_sym_technology] = ACTIONS(1),
    [anon_sym_recipe] = ACTIONS(1),
    [anon_sym_item_DASHgroup] = ACTIONS(1),
    [anon_sym_fluid] = ACTIONS(1),
    [anon_sym_tile] = ACTIONS(1),
    [anon_sym_virtual_DASHsignal] = ACTIONS(1),
    [aux_sym_richtext_color_token1] = ACTIONS(1),
    [anon_sym_red] = ACTIONS(1),
    [anon_sym_green] = ACTIONS(1),
    [anon_sym_blue] = ACTIONS(1),
    [anon_sym_orange] = ACTIONS(1),
    [anon_sym_yellow] = ACTIONS(1),
    [anon_sym_pink] = ACTIONS(1),
    [anon_sym_purple] = ACTIONS(1),
    [anon_sym_white] = ACTIONS(1),
    [anon_sym_black] = ACTIONS(1),
    [anon_sym_gray] = ACTIONS(1),
    [anon_sym_brown] = ACTIONS(1),
    [anon_sym_cyan] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym__richtext_color_number_float] = ACTIONS(1),
    [sym__richtext_color_number_int] = ACTIONS(1),
    [sym__richtext_color_number_hex] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(76),
    [sym_locale_category] = STATE(55),
    [sym_category_name] = STATE(60),
    [aux_sym_source_file_repeat1] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(7), 1,
      aux_sym_locale_pair_token1,
    ACTIONS(12), 1,
      aux_sym_plural_arg_token1,
    ACTIONS(18), 1,
      anon_sym_LBRACK2,
    ACTIONS(21), 1,
      anon_sym_LBRACKcolor_EQ,
    ACTIONS(9), 2,
      aux_sym_locale_text_token1,
      sym_positional_arg,
    STATE(2), 5,
      sym_plural_arg,
      sym_named_arg,
      sym_richtext_arg,
      sym_richtext_color,
      aux_sym_locale_text_repeat1,
    ACTIONS(15), 18,
      anon_sym___CONTROL_STYLE_BEGIN__,
      anon_sym___CONTROL_STYLE_END__,
      anon_sym___CONTROL_LEFT_CLICK__,
      anon_sym___CONTROL_RIGHT_CLICK__,
      anon_sym___CONTROL_KEY_SHIFT__,
      anon_sym___CONTROL_KEY_CTRL__,
      anon_sym___REMARK_COLOR_BEGIN__,
      anon_sym___REMARK_COLOR_END__,
      anon_sym___CONTROL_MOVE__,
      sym__entity_arg,
      sym__item_arg,
      sym__tile_arg,
      sym__fluid_arg,
      sym__alt_control_arg,
      sym__alt_control_left_click_n,
      sym__alt_control_right_click_n,
      sym__control_arg,
      sym__control_modifier_arg,
  [44] = 7,
    ACTIONS(26), 1,
      aux_sym_plural_arg_token1,
    ACTIONS(30), 1,
      anon_sym_LBRACK2,
    ACTIONS(32), 1,
      anon_sym_LBRACKcolor_EQ,
    STATE(74), 1,
      sym_locale_text,
    ACTIONS(24), 2,
      aux_sym_locale_text_token1,
      sym_positional_arg,
    STATE(6), 5,
      sym_plural_arg,
      sym_named_arg,
      sym_richtext_arg,
      sym_richtext_color,
      aux_sym_locale_text_repeat1,
    ACTIONS(28), 18,
      anon_sym___CONTROL_STYLE_BEGIN__,
      anon_sym___CONTROL_STYLE_END__,
      anon_sym___CONTROL_LEFT_CLICK__,
      anon_sym___CONTROL_RIGHT_CLICK__,
      anon_sym___CONTROL_KEY_SHIFT__,
      anon_sym___CONTROL_KEY_CTRL__,
      anon_sym___REMARK_COLOR_BEGIN__,
      anon_sym___REMARK_COLOR_END__,
      anon_sym___CONTROL_MOVE__,
      sym__entity_arg,
      sym__item_arg,
      sym__tile_arg,
      sym__fluid_arg,
      sym__alt_control_arg,
      sym__alt_control_left_click_n,
      sym__alt_control_right_click_n,
      sym__control_arg,
      sym__control_modifier_arg,
  [88] = 7,
    ACTIONS(36), 1,
      aux_sym_plural_arg_token1,
    ACTIONS(38), 1,
      anon_sym_RBRACE__,
    ACTIONS(42), 1,
      anon_sym_LBRACK2,
    ACTIONS(44), 1,
      anon_sym_LBRACKcolor_EQ,
    ACTIONS(34), 2,
      aux_sym_locale_text_token1,
      sym_positional_arg,
    STATE(5), 5,
      sym_plural_arg,
      sym_named_arg,
      sym_richtext_arg,
      sym_richtext_color,
      aux_sym_locale_text_repeat1,
    ACTIONS(40), 18,
      anon_sym___CONTROL_STYLE_BEGIN__,
      anon_sym___CONTROL_STYLE_END__,
      anon_sym___CONTROL_LEFT_CLICK__,
      anon_sym___CONTROL_RIGHT_CLICK__,
      anon_sym___CONTROL_KEY_SHIFT__,
      anon_sym___CONTROL_KEY_CTRL__,
      anon_sym___REMARK_COLOR_BEGIN__,
      anon_sym___REMARK_COLOR_END__,
      anon_sym___CONTROL_MOVE__,
      sym__entity_arg,
      sym__item_arg,
      sym__tile_arg,
      sym__fluid_arg,
      sym__alt_control_arg,
      sym__alt_control_left_click_n,
      sym__alt_control_right_click_n,
      sym__control_arg,
      sym__control_modifier_arg,
  [132] = 7,
    ACTIONS(7), 1,
      anon_sym_RBRACE__,
    ACTIONS(49), 1,
      aux_sym_plural_arg_token1,
    ACTIONS(55), 1,
      anon_sym_LBRACK2,
    ACTIONS(58), 1,
      anon_sym_LBRACKcolor_EQ,
    ACTIONS(46), 2,
      aux_sym_locale_text_token1,
      sym_positional_arg,
    STATE(5), 5,
      sym_plural_arg,
      sym_named_arg,
      sym_richtext_arg,
      sym_richtext_color,
      aux_sym_locale_text_repeat1,
    ACTIONS(52), 18,
      anon_sym___CONTROL_STYLE_BEGIN__,
      anon_sym___CONTROL_STYLE_END__,
      anon_sym___CONTROL_LEFT_CLICK__,
      anon_sym___CONTROL_RIGHT_CLICK__,
      anon_sym___CONTROL_KEY_SHIFT__,
      anon_sym___CONTROL_KEY_CTRL__,
      anon_sym___REMARK_COLOR_BEGIN__,
      anon_sym___REMARK_COLOR_END__,
      anon_sym___CONTROL_MOVE__,
      sym__entity_arg,
      sym__item_arg,
      sym__tile_arg,
      sym__fluid_arg,
      sym__alt_control_arg,
      sym__alt_control_left_click_n,
      sym__alt_control_right_click_n,
      sym__control_arg,
      sym__control_modifier_arg,
  [176] = 7,
    ACTIONS(26), 1,
      aux_sym_plural_arg_token1,
    ACTIONS(30), 1,
      anon_sym_LBRACK2,
    ACTIONS(32), 1,
      anon_sym_LBRACKcolor_EQ,
    ACTIONS(38), 1,
      aux_sym_richtext_color_token1,
    ACTIONS(61), 2,
      aux_sym_locale_text_token1,
      sym_positional_arg,
    STATE(7), 5,
      sym_plural_arg,
      sym_named_arg,
      sym_richtext_arg,
      sym_richtext_color,
      aux_sym_locale_text_repeat1,
    ACTIONS(28), 18,
      anon_sym___CONTROL_STYLE_BEGIN__,
      anon_sym___CONTROL_STYLE_END__,
      anon_sym___CONTROL_LEFT_CLICK__,
      anon_sym___CONTROL_RIGHT_CLICK__,
      anon_sym___CONTROL_KEY_SHIFT__,
      anon_sym___CONTROL_KEY_CTRL__,
      anon_sym___REMARK_COLOR_BEGIN__,
      anon_sym___REMARK_COLOR_END__,
      anon_sym___CONTROL_MOVE__,
      sym__entity_arg,
      sym__item_arg,
      sym__tile_arg,
      sym__fluid_arg,
      sym__alt_control_arg,
      sym__alt_control_left_click_n,
      sym__alt_control_right_click_n,
      sym__control_arg,
      sym__control_modifier_arg,
  [220] = 7,
    ACTIONS(7), 1,
      aux_sym_richtext_color_token1,
    ACTIONS(66), 1,
      aux_sym_plural_arg_token1,
    ACTIONS(72), 1,
      anon_sym_LBRACK2,
    ACTIONS(75), 1,
      anon_sym_LBRACKcolor_EQ,
    ACTIONS(63), 2,
      aux_sym_locale_text_token1,
      sym_positional_arg,
    STATE(7), 5,
      sym_plural_arg,
      sym_named_arg,
      sym_richtext_arg,
      sym_richtext_color,
      aux_sym_locale_text_repeat1,
    ACTIONS(69), 18,
      anon_sym___CONTROL_STYLE_BEGIN__,
      anon_sym___CONTROL_STYLE_END__,
      anon_sym___CONTROL_LEFT_CLICK__,
      anon_sym___CONTROL_RIGHT_CLICK__,
      anon_sym___CONTROL_KEY_SHIFT__,
      anon_sym___CONTROL_KEY_CTRL__,
      anon_sym___REMARK_COLOR_BEGIN__,
      anon_sym___REMARK_COLOR_END__,
      anon_sym___CONTROL_MOVE__,
      sym__entity_arg,
      sym__item_arg,
      sym__tile_arg,
      sym__fluid_arg,
      sym__alt_control_arg,
      sym__alt_control_left_click_n,
      sym__alt_control_right_click_n,
      sym__control_arg,
      sym__control_modifier_arg,
  [264] = 7,
    ACTIONS(26), 1,
      aux_sym_plural_arg_token1,
    ACTIONS(30), 1,
      anon_sym_LBRACK2,
    ACTIONS(32), 1,
      anon_sym_LBRACKcolor_EQ,
    STATE(120), 1,
      sym_locale_text,
    ACTIONS(24), 2,
      aux_sym_locale_text_token1,
      sym_positional_arg,
    STATE(6), 5,
      sym_plural_arg,
      sym_named_arg,
      sym_richtext_arg,
      sym_richtext_color,
      aux_sym_locale_text_repeat1,
    ACTIONS(28), 18,
      anon_sym___CONTROL_STYLE_BEGIN__,
      anon_sym___CONTROL_STYLE_END__,
      anon_sym___CONTROL_LEFT_CLICK__,
      anon_sym___CONTROL_RIGHT_CLICK__,
      anon_sym___CONTROL_KEY_SHIFT__,
      anon_sym___CONTROL_KEY_CTRL__,
      anon_sym___REMARK_COLOR_BEGIN__,
      anon_sym___REMARK_COLOR_END__,
      anon_sym___CONTROL_MOVE__,
      sym__entity_arg,
      sym__item_arg,
      sym__tile_arg,
      sym__fluid_arg,
      sym__alt_control_arg,
      sym__alt_control_left_click_n,
      sym__alt_control_right_click_n,
      sym__control_arg,
      sym__control_modifier_arg,
  [308] = 7,
    ACTIONS(36), 1,
      aux_sym_plural_arg_token1,
    ACTIONS(42), 1,
      anon_sym_LBRACK2,
    ACTIONS(44), 1,
      anon_sym_LBRACKcolor_EQ,
    STATE(82), 1,
      sym_locale_text,
    ACTIONS(78), 2,
      aux_sym_locale_text_token1,
      sym_positional_arg,
    STATE(4), 5,
      sym_plural_arg,
      sym_named_arg,
      sym_richtext_arg,
      sym_richtext_color,
      aux_sym_locale_text_repeat1,
    ACTIONS(40), 18,
      anon_sym___CONTROL_STYLE_BEGIN__,
      anon_sym___CONTROL_STYLE_END__,
      anon_sym___CONTROL_LEFT_CLICK__,
      anon_sym___CONTROL_RIGHT_CLICK__,
      anon_sym___CONTROL_KEY_SHIFT__,
      anon_sym___CONTROL_KEY_CTRL__,
      anon_sym___REMARK_COLOR_BEGIN__,
      anon_sym___REMARK_COLOR_END__,
      anon_sym___CONTROL_MOVE__,
      sym__entity_arg,
      sym__item_arg,
      sym__tile_arg,
      sym__fluid_arg,
      sym__alt_control_arg,
      sym__alt_control_left_click_n,
      sym__alt_control_right_click_n,
      sym__control_arg,
      sym__control_modifier_arg,
  [352] = 7,
    ACTIONS(26), 1,
      aux_sym_plural_arg_token1,
    ACTIONS(30), 1,
      anon_sym_LBRACK2,
    ACTIONS(32), 1,
      anon_sym_LBRACKcolor_EQ,
    STATE(116), 1,
      sym_locale_text,
    ACTIONS(24), 2,
      aux_sym_locale_text_token1,
      sym_positional_arg,
    STATE(6), 5,
      sym_plural_arg,
      sym_named_arg,
      sym_richtext_arg,
      sym_richtext_color,
      aux_sym_locale_text_repeat1,
    ACTIONS(28), 18,
      anon_sym___CONTROL_STYLE_BEGIN__,
      anon_sym___CONTROL_STYLE_END__,
      anon_sym___CONTROL_LEFT_CLICK__,
      anon_sym___CONTROL_RIGHT_CLICK__,
      anon_sym___CONTROL_KEY_SHIFT__,
      anon_sym___CONTROL_KEY_CTRL__,
      anon_sym___REMARK_COLOR_BEGIN__,
      anon_sym___REMARK_COLOR_END__,
      anon_sym___CONTROL_MOVE__,
      sym__entity_arg,
      sym__item_arg,
      sym__tile_arg,
      sym__fluid_arg,
      sym__alt_control_arg,
      sym__alt_control_left_click_n,
      sym__alt_control_right_click_n,
      sym__control_arg,
      sym__control_modifier_arg,
  [396] = 7,
    ACTIONS(38), 1,
      anon_sym_PIPE,
    ACTIONS(82), 1,
      aux_sym_plural_arg_token1,
    ACTIONS(86), 1,
      anon_sym_LBRACK2,
    ACTIONS(88), 1,
      anon_sym_LBRACKcolor_EQ,
    ACTIONS(80), 2,
      aux_sym_locale_text_token1,
      sym_positional_arg,
    STATE(13), 5,
      sym_plural_arg,
      sym_named_arg,
      sym_richtext_arg,
      sym_richtext_color,
      aux_sym_locale_text_repeat1,
    ACTIONS(84), 18,
      anon_sym___CONTROL_STYLE_BEGIN__,
      anon_sym___CONTROL_STYLE_END__,
      anon_sym___CONTROL_LEFT_CLICK__,
      anon_sym___CONTROL_RIGHT_CLICK__,
      anon_sym___CONTROL_KEY_SHIFT__,
      anon_sym___CONTROL_KEY_CTRL__,
      anon_sym___REMARK_COLOR_BEGIN__,
      anon_sym___REMARK_COLOR_END__,
      anon_sym___CONTROL_MOVE__,
      sym__entity_arg,
      sym__item_arg,
      sym__tile_arg,
      sym__fluid_arg,
      sym__alt_control_arg,
      sym__alt_control_left_click_n,
      sym__alt_control_right_click_n,
      sym__control_arg,
      sym__control_modifier_arg,
  [440] = 7,
    ACTIONS(92), 1,
      aux_sym_plural_arg_token1,
    ACTIONS(96), 1,
      anon_sym_LBRACK2,
    ACTIONS(98), 1,
      anon_sym_LBRACKcolor_EQ,
    STATE(130), 1,
      sym_locale_text,
    ACTIONS(90), 2,
      aux_sym_locale_text_token1,
      sym_positional_arg,
    STATE(16), 5,
      sym_plural_arg,
      sym_named_arg,
      sym_richtext_arg,
      sym_richtext_color,
      aux_sym_locale_text_repeat1,
    ACTIONS(94), 18,
      anon_sym___CONTROL_STYLE_BEGIN__,
      anon_sym___CONTROL_STYLE_END__,
      anon_sym___CONTROL_LEFT_CLICK__,
      anon_sym___CONTROL_RIGHT_CLICK__,
      anon_sym___CONTROL_KEY_SHIFT__,
      anon_sym___CONTROL_KEY_CTRL__,
      anon_sym___REMARK_COLOR_BEGIN__,
      anon_sym___REMARK_COLOR_END__,
      anon_sym___CONTROL_MOVE__,
      sym__entity_arg,
      sym__item_arg,
      sym__tile_arg,
      sym__fluid_arg,
      sym__alt_control_arg,
      sym__alt_control_left_click_n,
      sym__alt_control_right_click_n,
      sym__control_arg,
      sym__control_modifier_arg,
  [484] = 7,
    ACTIONS(7), 1,
      anon_sym_PIPE,
    ACTIONS(103), 1,
      aux_sym_plural_arg_token1,
    ACTIONS(109), 1,
      anon_sym_LBRACK2,
    ACTIONS(112), 1,
      anon_sym_LBRACKcolor_EQ,
    ACTIONS(100), 2,
      aux_sym_locale_text_token1,
      sym_positional_arg,
    STATE(13), 5,
      sym_plural_arg,
      sym_named_arg,
      sym_richtext_arg,
      sym_richtext_color,
      aux_sym_locale_text_repeat1,
    ACTIONS(106), 18,
      anon_sym___CONTROL_STYLE_BEGIN__,
      anon_sym___CONTROL_STYLE_END__,
      anon_sym___CONTROL_LEFT_CLICK__,
      anon_sym___CONTROL_RIGHT_CLICK__,
      anon_sym___CONTROL_KEY_SHIFT__,
      anon_sym___CONTROL_KEY_CTRL__,
      anon_sym___REMARK_COLOR_BEGIN__,
      anon_sym___REMARK_COLOR_END__,
      anon_sym___CONTROL_MOVE__,
      sym__entity_arg,
      sym__item_arg,
      sym__tile_arg,
      sym__fluid_arg,
      sym__alt_control_arg,
      sym__alt_control_left_click_n,
      sym__alt_control_right_click_n,
      sym__control_arg,
      sym__control_modifier_arg,
  [528] = 7,
    ACTIONS(82), 1,
      aux_sym_plural_arg_token1,
    ACTIONS(86), 1,
      anon_sym_LBRACK2,
    ACTIONS(88), 1,
      anon_sym_LBRACKcolor_EQ,
    STATE(75), 1,
      sym_locale_text,
    ACTIONS(115), 2,
      aux_sym_locale_text_token1,
      sym_positional_arg,
    STATE(11), 5,
      sym_plural_arg,
      sym_named_arg,
      sym_richtext_arg,
      sym_richtext_color,
      aux_sym_locale_text_repeat1,
    ACTIONS(84), 18,
      anon_sym___CONTROL_STYLE_BEGIN__,
      anon_sym___CONTROL_STYLE_END__,
      anon_sym___CONTROL_LEFT_CLICK__,
      anon_sym___CONTROL_RIGHT_CLICK__,
      anon_sym___CONTROL_KEY_SHIFT__,
      anon_sym___CONTROL_KEY_CTRL__,
      anon_sym___REMARK_COLOR_BEGIN__,
      anon_sym___REMARK_COLOR_END__,
      anon_sym___CONTROL_MOVE__,
      sym__entity_arg,
      sym__item_arg,
      sym__tile_arg,
      sym__fluid_arg,
      sym__alt_control_arg,
      sym__alt_control_left_click_n,
      sym__alt_control_right_click_n,
      sym__control_arg,
      sym__control_modifier_arg,
  [572] = 7,
    ACTIONS(26), 1,
      aux_sym_plural_arg_token1,
    ACTIONS(30), 1,
      anon_sym_LBRACK2,
    ACTIONS(32), 1,
      anon_sym_LBRACKcolor_EQ,
    STATE(112), 1,
      sym_locale_text,
    ACTIONS(24), 2,
      aux_sym_locale_text_token1,
      sym_positional_arg,
    STATE(6), 5,
      sym_plural_arg,
      sym_named_arg,
      sym_richtext_arg,
      sym_richtext_color,
      aux_sym_locale_text_repeat1,
    ACTIONS(28), 18,
      anon_sym___CONTROL_STYLE_BEGIN__,
      anon_sym___CONTROL_STYLE_END__,
      anon_sym___CONTROL_LEFT_CLICK__,
      anon_sym___CONTROL_RIGHT_CLICK__,
      anon_sym___CONTROL_KEY_SHIFT__,
      anon_sym___CONTROL_KEY_CTRL__,
      anon_sym___REMARK_COLOR_BEGIN__,
      anon_sym___REMARK_COLOR_END__,
      anon_sym___CONTROL_MOVE__,
      sym__entity_arg,
      sym__item_arg,
      sym__tile_arg,
      sym__fluid_arg,
      sym__alt_control_arg,
      sym__alt_control_left_click_n,
      sym__alt_control_right_click_n,
      sym__control_arg,
      sym__control_modifier_arg,
  [616] = 7,
    ACTIONS(38), 1,
      aux_sym_locale_pair_token1,
    ACTIONS(92), 1,
      aux_sym_plural_arg_token1,
    ACTIONS(96), 1,
      anon_sym_LBRACK2,
    ACTIONS(98), 1,
      anon_sym_LBRACKcolor_EQ,
    ACTIONS(117), 2,
      aux_sym_locale_text_token1,
      sym_positional_arg,
    STATE(2), 5,
      sym_plural_arg,
      sym_named_arg,
      sym_richtext_arg,
      sym_richtext_color,
      aux_sym_locale_text_repeat1,
    ACTIONS(94), 18,
      anon_sym___CONTROL_STYLE_BEGIN__,
      anon_sym___CONTROL_STYLE_END__,
      anon_sym___CONTROL_LEFT_CLICK__,
      anon_sym___CONTROL_RIGHT_CLICK__,
      anon_sym___CONTROL_KEY_SHIFT__,
      anon_sym___CONTROL_KEY_CTRL__,
      anon_sym___REMARK_COLOR_BEGIN__,
      anon_sym___REMARK_COLOR_END__,
      anon_sym___CONTROL_MOVE__,
      sym__entity_arg,
      sym__item_arg,
      sym__tile_arg,
      sym__fluid_arg,
      sym__alt_control_arg,
      sym__alt_control_left_click_n,
      sym__alt_control_right_click_n,
      sym__control_arg,
      sym__control_modifier_arg,
  [660] = 12,
    ACTIONS(119), 1,
      anon_sym_armor_EQ,
    ACTIONS(121), 1,
      anon_sym_train_EQ,
    ACTIONS(123), 1,
      anon_sym_train_DASHstop_EQ,
    ACTIONS(125), 1,
      anon_sym_tooltip_EQ,
    ACTIONS(127), 1,
      anon_sym_special_DASHitem_EQ,
    ACTIONS(129), 1,
      anon_sym_img_EQ,
    ACTIONS(131), 1,
      anon_sym_gps_EQ,
    ACTIONS(133), 1,
      anon_sym_item,
    STATE(121), 1,
      sym_richtext_category,
    STATE(123), 1,
      sym_richtext_pair,
    ACTIONS(135), 8,
      anon_sym_entity,
      anon_sym_technology,
      anon_sym_recipe,
      anon_sym_item_DASHgroup,
      anon_sym_fluid,
      anon_sym_tile,
      anon_sym_virtual_DASHsignal,
      anon_sym_achievement,
    STATE(122), 8,
      sym__richtext_armor,
      sym__richtext_train,
      sym__richtext_train_stop,
      sym__richtext_tooltip,
      sym__richtext_blueprint,
      sym__richtext_img,
      sym__richtext_gps,
      sym__richtext_prototype,
  [711] = 12,
    ACTIONS(119), 1,
      anon_sym_armor_EQ,
    ACTIONS(121), 1,
      anon_sym_train_EQ,
    ACTIONS(123), 1,
      anon_sym_train_DASHstop_EQ,
    ACTIONS(125), 1,
      anon_sym_tooltip_EQ,
    ACTIONS(127), 1,
      anon_sym_special_DASHitem_EQ,
    ACTIONS(129), 1,
      anon_sym_img_EQ,
    ACTIONS(131), 1,
      anon_sym_gps_EQ,
    ACTIONS(133), 1,
      anon_sym_item,
    STATE(109), 1,
      sym_richtext_pair,
    STATE(121), 1,
      sym_richtext_category,
    ACTIONS(135), 8,
      anon_sym_entity,
      anon_sym_technology,
      anon_sym_recipe,
      anon_sym_item_DASHgroup,
      anon_sym_fluid,
      anon_sym_tile,
      anon_sym_virtual_DASHsignal,
      anon_sym_achievement,
    STATE(122), 8,
      sym__richtext_armor,
      sym__richtext_train,
      sym__richtext_train_stop,
      sym__richtext_tooltip,
      sym__richtext_blueprint,
      sym__richtext_img,
      sym__richtext_gps,
      sym__richtext_prototype,
  [762] = 12,
    ACTIONS(119), 1,
      anon_sym_armor_EQ,
    ACTIONS(121), 1,
      anon_sym_train_EQ,
    ACTIONS(123), 1,
      anon_sym_train_DASHstop_EQ,
    ACTIONS(125), 1,
      anon_sym_tooltip_EQ,
    ACTIONS(127), 1,
      anon_sym_special_DASHitem_EQ,
    ACTIONS(129), 1,
      anon_sym_img_EQ,
    ACTIONS(131), 1,
      anon_sym_gps_EQ,
    ACTIONS(133), 1,
      anon_sym_item,
    STATE(117), 1,
      sym_richtext_pair,
    STATE(121), 1,
      sym_richtext_category,
    ACTIONS(135), 8,
      anon_sym_entity,
      anon_sym_technology,
      anon_sym_recipe,
      anon_sym_item_DASHgroup,
      anon_sym_fluid,
      anon_sym_tile,
      anon_sym_virtual_DASHsignal,
      anon_sym_achievement,
    STATE(122), 8,
      sym__richtext_armor,
      sym__richtext_train,
      sym__richtext_train_stop,
      sym__richtext_tooltip,
      sym__richtext_blueprint,
      sym__richtext_img,
      sym__richtext_gps,
      sym__richtext_prototype,
  [813] = 12,
    ACTIONS(119), 1,
      anon_sym_armor_EQ,
    ACTIONS(121), 1,
      anon_sym_train_EQ,
    ACTIONS(123), 1,
      anon_sym_train_DASHstop_EQ,
    ACTIONS(125), 1,
      anon_sym_tooltip_EQ,
    ACTIONS(127), 1,
      anon_sym_special_DASHitem_EQ,
    ACTIONS(129), 1,
      anon_sym_img_EQ,
    ACTIONS(131), 1,
      anon_sym_gps_EQ,
    ACTIONS(133), 1,
      anon_sym_item,
    STATE(113), 1,
      sym_richtext_pair,
    STATE(121), 1,
      sym_richtext_category,
    ACTIONS(135), 8,
      anon_sym_entity,
      anon_sym_technology,
      anon_sym_recipe,
      anon_sym_item_DASHgroup,
      anon_sym_fluid,
      anon_sym_tile,
      anon_sym_virtual_DASHsignal,
      anon_sym_achievement,
    STATE(122), 8,
      sym__richtext_armor,
      sym__richtext_train,
      sym__richtext_train_stop,
      sym__richtext_tooltip,
      sym__richtext_blueprint,
      sym__richtext_img,
      sym__richtext_gps,
      sym__richtext_prototype,
  [864] = 1,
    ACTIONS(137), 24,
      aux_sym_locale_pair_token1,
      aux_sym_locale_text_token1,
      sym_positional_arg,
      aux_sym_plural_arg_token1,
      anon_sym___CONTROL_STYLE_BEGIN__,
      anon_sym___CONTROL_STYLE_END__,
      anon_sym___CONTROL_LEFT_CLICK__,
      anon_sym___CONTROL_RIGHT_CLICK__,
      anon_sym___CONTROL_KEY_SHIFT__,
      anon_sym___CONTROL_KEY_CTRL__,
      anon_sym___REMARK_COLOR_BEGIN__,
      anon_sym___REMARK_COLOR_END__,
      anon_sym___CONTROL_MOVE__,
      sym__entity_arg,
      sym__item_arg,
      sym__tile_arg,
      sym__fluid_arg,
      sym__alt_control_arg,
      sym__alt_control_left_click_n,
      sym__alt_control_right_click_n,
      sym__control_arg,
      sym__control_modifier_arg,
      anon_sym_LBRACK2,
      anon_sym_LBRACKcolor_EQ,
  [891] = 1,
    ACTIONS(139), 24,
      aux_sym_locale_text_token1,
      sym_positional_arg,
      aux_sym_plural_arg_token1,
      anon_sym___CONTROL_STYLE_BEGIN__,
      anon_sym___CONTROL_STYLE_END__,
      anon_sym___CONTROL_LEFT_CLICK__,
      anon_sym___CONTROL_RIGHT_CLICK__,
      anon_sym___CONTROL_KEY_SHIFT__,
      anon_sym___CONTROL_KEY_CTRL__,
      anon_sym___REMARK_COLOR_BEGIN__,
      anon_sym___REMARK_COLOR_END__,
      anon_sym___CONTROL_MOVE__,
      sym__entity_arg,
      sym__item_arg,
      sym__tile_arg,
      sym__fluid_arg,
      sym__alt_control_arg,
      sym__alt_control_left_click_n,
      sym__alt_control_right_click_n,
      sym__control_arg,
      sym__control_modifier_arg,
      anon_sym_LBRACK2,
      anon_sym_LBRACKcolor_EQ,
      aux_sym_richtext_color_token1,
  [918] = 1,
    ACTIONS(139), 24,
      aux_sym_locale_pair_token1,
      aux_sym_locale_text_token1,
      sym_positional_arg,
      aux_sym_plural_arg_token1,
      anon_sym___CONTROL_STYLE_BEGIN__,
      anon_sym___CONTROL_STYLE_END__,
      anon_sym___CONTROL_LEFT_CLICK__,
      anon_sym___CONTROL_RIGHT_CLICK__,
      anon_sym___CONTROL_KEY_SHIFT__,
      anon_sym___CONTROL_KEY_CTRL__,
      anon_sym___REMARK_COLOR_BEGIN__,
      anon_sym___REMARK_COLOR_END__,
      anon_sym___CONTROL_MOVE__,
      sym__entity_arg,
      sym__item_arg,
      sym__tile_arg,
      sym__fluid_arg,
      sym__alt_control_arg,
      sym__alt_control_left_click_n,
      sym__alt_control_right_click_n,
      sym__control_arg,
      sym__control_modifier_arg,
      anon_sym_LBRACK2,
      anon_sym_LBRACKcolor_EQ,
  [945] = 1,
    ACTIONS(141), 24,
      aux_sym_locale_pair_token1,
      aux_sym_locale_text_token1,
      sym_positional_arg,
      aux_sym_plural_arg_token1,
      anon_sym___CONTROL_STYLE_BEGIN__,
      anon_sym___CONTROL_STYLE_END__,
      anon_sym___CONTROL_LEFT_CLICK__,
      anon_sym___CONTROL_RIGHT_CLICK__,
      anon_sym___CONTROL_KEY_SHIFT__,
      anon_sym___CONTROL_KEY_CTRL__,
      anon_sym___REMARK_COLOR_BEGIN__,
      anon_sym___REMARK_COLOR_END__,
      anon_sym___CONTROL_MOVE__,
      sym__entity_arg,
      sym__item_arg,
      sym__tile_arg,
      sym__fluid_arg,
      sym__alt_control_arg,
      sym__alt_control_left_click_n,
      sym__alt_control_right_click_n,
      sym__control_arg,
      sym__control_modifier_arg,
      anon_sym_LBRACK2,
      anon_sym_LBRACKcolor_EQ,
  [972] = 1,
    ACTIONS(137), 24,
      aux_sym_locale_text_token1,
      sym_positional_arg,
      aux_sym_plural_arg_token1,
      anon_sym_RBRACE__,
      anon_sym___CONTROL_STYLE_BEGIN__,
      anon_sym___CONTROL_STYLE_END__,
      anon_sym___CONTROL_LEFT_CLICK__,
      anon_sym___CONTROL_RIGHT_CLICK__,
      anon_sym___CONTROL_KEY_SHIFT__,
      anon_sym___CONTROL_KEY_CTRL__,
      anon_sym___REMARK_COLOR_BEGIN__,
      anon_sym___REMARK_COLOR_END__,
      anon_sym___CONTROL_MOVE__,
      sym__entity_arg,
      sym__item_arg,
      sym__tile_arg,
      sym__fluid_arg,
      sym__alt_control_arg,
      sym__alt_control_left_click_n,
      sym__alt_control_right_click_n,
      sym__control_arg,
      sym__control_modifier_arg,
      anon_sym_LBRACK2,
      anon_sym_LBRACKcolor_EQ,
  [999] = 1,
    ACTIONS(143), 24,
      aux_sym_locale_pair_token1,
      aux_sym_locale_text_token1,
      sym_positional_arg,
      aux_sym_plural_arg_token1,
      anon_sym___CONTROL_STYLE_BEGIN__,
      anon_sym___CONTROL_STYLE_END__,
      anon_sym___CONTROL_LEFT_CLICK__,
      anon_sym___CONTROL_RIGHT_CLICK__,
      anon_sym___CONTROL_KEY_SHIFT__,
      anon_sym___CONTROL_KEY_CTRL__,
      anon_sym___REMARK_COLOR_BEGIN__,
      anon_sym___REMARK_COLOR_END__,
      anon_sym___CONTROL_MOVE__,
      sym__entity_arg,
      sym__item_arg,
      sym__tile_arg,
      sym__fluid_arg,
      sym__alt_control_arg,
      sym__alt_control_left_click_n,
      sym__alt_control_right_click_n,
      sym__control_arg,
      sym__control_modifier_arg,
      anon_sym_LBRACK2,
      anon_sym_LBRACKcolor_EQ,
  [1026] = 1,
    ACTIONS(143), 24,
      aux_sym_locale_text_token1,
      sym_positional_arg,
      aux_sym_plural_arg_token1,
      anon_sym_RBRACE__,
      anon_sym___CONTROL_STYLE_BEGIN__,
      anon_sym___CONTROL_STYLE_END__,
      anon_sym___CONTROL_LEFT_CLICK__,
      anon_sym___CONTROL_RIGHT_CLICK__,
      anon_sym___CONTROL_KEY_SHIFT__,
      anon_sym___CONTROL_KEY_CTRL__,
      anon_sym___REMARK_COLOR_BEGIN__,
      anon_sym___REMARK_COLOR_END__,
      anon_sym___CONTROL_MOVE__,
      sym__entity_arg,
      sym__item_arg,
      sym__tile_arg,
      sym__fluid_arg,
      sym__alt_control_arg,
      sym__alt_control_left_click_n,
      sym__alt_control_right_click_n,
      sym__control_arg,
      sym__control_modifier_arg,
      anon_sym_LBRACK2,
      anon_sym_LBRACKcolor_EQ,
  [1053] = 1,
    ACTIONS(139), 24,
      aux_sym_locale_text_token1,
      sym_positional_arg,
      aux_sym_plural_arg_token1,
      anon_sym_RBRACE__,
      anon_sym___CONTROL_STYLE_BEGIN__,
      anon_sym___CONTROL_STYLE_END__,
      anon_sym___CONTROL_LEFT_CLICK__,
      anon_sym___CONTROL_RIGHT_CLICK__,
      anon_sym___CONTROL_KEY_SHIFT__,
      anon_sym___CONTROL_KEY_CTRL__,
      anon_sym___REMARK_COLOR_BEGIN__,
      anon_sym___REMARK_COLOR_END__,
      anon_sym___CONTROL_MOVE__,
      sym__entity_arg,
      sym__item_arg,
      sym__tile_arg,
      sym__fluid_arg,
      sym__alt_control_arg,
      sym__alt_control_left_click_n,
      sym__alt_control_right_click_n,
      sym__control_arg,
      sym__control_modifier_arg,
      anon_sym_LBRACK2,
      anon_sym_LBRACKcolor_EQ,
  [1080] = 1,
    ACTIONS(145), 24,
      aux_sym_locale_text_token1,
      sym_positional_arg,
      aux_sym_plural_arg_token1,
      anon_sym_RBRACE__,
      anon_sym___CONTROL_STYLE_BEGIN__,
      anon_sym___CONTROL_STYLE_END__,
      anon_sym___CONTROL_LEFT_CLICK__,
      anon_sym___CONTROL_RIGHT_CLICK__,
      anon_sym___CONTROL_KEY_SHIFT__,
      anon_sym___CONTROL_KEY_CTRL__,
      anon_sym___REMARK_COLOR_BEGIN__,
      anon_sym___REMARK_COLOR_END__,
      anon_sym___CONTROL_MOVE__,
      sym__entity_arg,
      sym__item_arg,
      sym__tile_arg,
      sym__fluid_arg,
      sym__alt_control_arg,
      sym__alt_control_left_click_n,
      sym__alt_control_right_click_n,
      sym__control_arg,
      sym__control_modifier_arg,
      anon_sym_LBRACK2,
      anon_sym_LBRACKcolor_EQ,
  [1107] = 1,
    ACTIONS(141), 24,
      aux_sym_locale_text_token1,
      sym_positional_arg,
      aux_sym_plural_arg_token1,
      anon_sym_RBRACE__,
      anon_sym___CONTROL_STYLE_BEGIN__,
      anon_sym___CONTROL_STYLE_END__,
      anon_sym___CONTROL_LEFT_CLICK__,
      anon_sym___CONTROL_RIGHT_CLICK__,
      anon_sym___CONTROL_KEY_SHIFT__,
      anon_sym___CONTROL_KEY_CTRL__,
      anon_sym___REMARK_COLOR_BEGIN__,
      anon_sym___REMARK_COLOR_END__,
      anon_sym___CONTROL_MOVE__,
      sym__entity_arg,
      sym__item_arg,
      sym__tile_arg,
      sym__fluid_arg,
      sym__alt_control_arg,
      sym__alt_control_left_click_n,
      sym__alt_control_right_click_n,
      sym__control_arg,
      sym__control_modifier_arg,
      anon_sym_LBRACK2,
      anon_sym_LBRACKcolor_EQ,
  [1134] = 1,
    ACTIONS(141), 24,
      aux_sym_locale_text_token1,
      sym_positional_arg,
      aux_sym_plural_arg_token1,
      anon_sym_PIPE,
      anon_sym___CONTROL_STYLE_BEGIN__,
      anon_sym___CONTROL_STYLE_END__,
      anon_sym___CONTROL_LEFT_CLICK__,
      anon_sym___CONTROL_RIGHT_CLICK__,
      anon_sym___CONTROL_KEY_SHIFT__,
      anon_sym___CONTROL_KEY_CTRL__,
      anon_sym___REMARK_COLOR_BEGIN__,
      anon_sym___REMARK_COLOR_END__,
      anon_sym___CONTROL_MOVE__,
      sym__entity_arg,
      sym__item_arg,
      sym__tile_arg,
      sym__fluid_arg,
      sym__alt_control_arg,
      sym__alt_control_left_click_n,
      sym__alt_control_right_click_n,
      sym__control_arg,
      sym__control_modifier_arg,
      anon_sym_LBRACK2,
      anon_sym_LBRACKcolor_EQ,
  [1161] = 1,
    ACTIONS(145), 24,
      aux_sym_locale_text_token1,
      sym_positional_arg,
      aux_sym_plural_arg_token1,
      anon_sym_PIPE,
      anon_sym___CONTROL_STYLE_BEGIN__,
      anon_sym___CONTROL_STYLE_END__,
      anon_sym___CONTROL_LEFT_CLICK__,
      anon_sym___CONTROL_RIGHT_CLICK__,
      anon_sym___CONTROL_KEY_SHIFT__,
      anon_sym___CONTROL_KEY_CTRL__,
      anon_sym___REMARK_COLOR_BEGIN__,
      anon_sym___REMARK_COLOR_END__,
      anon_sym___CONTROL_MOVE__,
      sym__entity_arg,
      sym__item_arg,
      sym__tile_arg,
      sym__fluid_arg,
      sym__alt_control_arg,
      sym__alt_control_left_click_n,
      sym__alt_control_right_click_n,
      sym__control_arg,
      sym__control_modifier_arg,
      anon_sym_LBRACK2,
      anon_sym_LBRACKcolor_EQ,
  [1188] = 1,
    ACTIONS(139), 24,
      aux_sym_locale_text_token1,
      sym_positional_arg,
      aux_sym_plural_arg_token1,
      anon_sym_PIPE,
      anon_sym___CONTROL_STYLE_BEGIN__,
      anon_sym___CONTROL_STYLE_END__,
      anon_sym___CONTROL_LEFT_CLICK__,
      anon_sym___CONTROL_RIGHT_CLICK__,
      anon_sym___CONTROL_KEY_SHIFT__,
      anon_sym___CONTROL_KEY_CTRL__,
      anon_sym___REMARK_COLOR_BEGIN__,
      anon_sym___REMARK_COLOR_END__,
      anon_sym___CONTROL_MOVE__,
      sym__entity_arg,
      sym__item_arg,
      sym__tile_arg,
      sym__fluid_arg,
      sym__alt_control_arg,
      sym__alt_control_left_click_n,
      sym__alt_control_right_click_n,
      sym__control_arg,
      sym__control_modifier_arg,
      anon_sym_LBRACK2,
      anon_sym_LBRACKcolor_EQ,
  [1215] = 1,
    ACTIONS(143), 24,
      aux_sym_locale_text_token1,
      sym_positional_arg,
      aux_sym_plural_arg_token1,
      anon_sym_PIPE,
      anon_sym___CONTROL_STYLE_BEGIN__,
      anon_sym___CONTROL_STYLE_END__,
      anon_sym___CONTROL_LEFT_CLICK__,
      anon_sym___CONTROL_RIGHT_CLICK__,
      anon_sym___CONTROL_KEY_SHIFT__,
      anon_sym___CONTROL_KEY_CTRL__,
      anon_sym___REMARK_COLOR_BEGIN__,
      anon_sym___REMARK_COLOR_END__,
      anon_sym___CONTROL_MOVE__,
      sym__entity_arg,
      sym__item_arg,
      sym__tile_arg,
      sym__fluid_arg,
      sym__alt_control_arg,
      sym__alt_control_left_click_n,
      sym__alt_control_right_click_n,
      sym__control_arg,
      sym__control_modifier_arg,
      anon_sym_LBRACK2,
      anon_sym_LBRACKcolor_EQ,
  [1242] = 1,
    ACTIONS(137), 24,
      aux_sym_locale_text_token1,
      sym_positional_arg,
      aux_sym_plural_arg_token1,
      anon_sym___CONTROL_STYLE_BEGIN__,
      anon_sym___CONTROL_STYLE_END__,
      anon_sym___CONTROL_LEFT_CLICK__,
      anon_sym___CONTROL_RIGHT_CLICK__,
      anon_sym___CONTROL_KEY_SHIFT__,
      anon_sym___CONTROL_KEY_CTRL__,
      anon_sym___REMARK_COLOR_BEGIN__,
      anon_sym___REMARK_COLOR_END__,
      anon_sym___CONTROL_MOVE__,
      sym__entity_arg,
      sym__item_arg,
      sym__tile_arg,
      sym__fluid_arg,
      sym__alt_control_arg,
      sym__alt_control_left_click_n,
      sym__alt_control_right_click_n,
      sym__control_arg,
      sym__control_modifier_arg,
      anon_sym_LBRACK2,
      anon_sym_LBRACKcolor_EQ,
      aux_sym_richtext_color_token1,
  [1269] = 1,
    ACTIONS(143), 24,
      aux_sym_locale_text_token1,
      sym_positional_arg,
      aux_sym_plural_arg_token1,
      anon_sym___CONTROL_STYLE_BEGIN__,
      anon_sym___CONTROL_STYLE_END__,
      anon_sym___CONTROL_LEFT_CLICK__,
      anon_sym___CONTROL_RIGHT_CLICK__,
      anon_sym___CONTROL_KEY_SHIFT__,
      anon_sym___CONTROL_KEY_CTRL__,
      anon_sym___REMARK_COLOR_BEGIN__,
      anon_sym___REMARK_COLOR_END__,
      anon_sym___CONTROL_MOVE__,
      sym__entity_arg,
      sym__item_arg,
      sym__tile_arg,
      sym__fluid_arg,
      sym__alt_control_arg,
      sym__alt_control_left_click_n,
      sym__alt_control_right_click_n,
      sym__control_arg,
      sym__control_modifier_arg,
      anon_sym_LBRACK2,
      anon_sym_LBRACKcolor_EQ,
      aux_sym_richtext_color_token1,
  [1296] = 1,
    ACTIONS(145), 24,
      aux_sym_locale_pair_token1,
      aux_sym_locale_text_token1,
      sym_positional_arg,
      aux_sym_plural_arg_token1,
      anon_sym___CONTROL_STYLE_BEGIN__,
      anon_sym___CONTROL_STYLE_END__,
      anon_sym___CONTROL_LEFT_CLICK__,
      anon_sym___CONTROL_RIGHT_CLICK__,
      anon_sym___CONTROL_KEY_SHIFT__,
      anon_sym___CONTROL_KEY_CTRL__,
      anon_sym___REMARK_COLOR_BEGIN__,
      anon_sym___REMARK_COLOR_END__,
      anon_sym___CONTROL_MOVE__,
      sym__entity_arg,
      sym__item_arg,
      sym__tile_arg,
      sym__fluid_arg,
      sym__alt_control_arg,
      sym__alt_control_left_click_n,
      sym__alt_control_right_click_n,
      sym__control_arg,
      sym__control_modifier_arg,
      anon_sym_LBRACK2,
      anon_sym_LBRACKcolor_EQ,
  [1323] = 1,
    ACTIONS(145), 24,
      aux_sym_locale_text_token1,
      sym_positional_arg,
      aux_sym_plural_arg_token1,
      anon_sym___CONTROL_STYLE_BEGIN__,
      anon_sym___CONTROL_STYLE_END__,
      anon_sym___CONTROL_LEFT_CLICK__,
      anon_sym___CONTROL_RIGHT_CLICK__,
      anon_sym___CONTROL_KEY_SHIFT__,
      anon_sym___CONTROL_KEY_CTRL__,
      anon_sym___REMARK_COLOR_BEGIN__,
      anon_sym___REMARK_COLOR_END__,
      anon_sym___CONTROL_MOVE__,
      sym__entity_arg,
      sym__item_arg,
      sym__tile_arg,
      sym__fluid_arg,
      sym__alt_control_arg,
      sym__alt_control_left_click_n,
      sym__alt_control_right_click_n,
      sym__control_arg,
      sym__control_modifier_arg,
      anon_sym_LBRACK2,
      anon_sym_LBRACKcolor_EQ,
      aux_sym_richtext_color_token1,
  [1350] = 1,
    ACTIONS(141), 24,
      aux_sym_locale_text_token1,
      sym_positional_arg,
      aux_sym_plural_arg_token1,
      anon_sym___CONTROL_STYLE_BEGIN__,
      anon_sym___CONTROL_STYLE_END__,
      anon_sym___CONTROL_LEFT_CLICK__,
      anon_sym___CONTROL_RIGHT_CLICK__,
      anon_sym___CONTROL_KEY_SHIFT__,
      anon_sym___CONTROL_KEY_CTRL__,
      anon_sym___REMARK_COLOR_BEGIN__,
      anon_sym___REMARK_COLOR_END__,
      anon_sym___CONTROL_MOVE__,
      sym__entity_arg,
      sym__item_arg,
      sym__tile_arg,
      sym__fluid_arg,
      sym__alt_control_arg,
      sym__alt_control_left_click_n,
      sym__alt_control_right_click_n,
      sym__control_arg,
      sym__control_modifier_arg,
      anon_sym_LBRACK2,
      anon_sym_LBRACKcolor_EQ,
      aux_sym_richtext_color_token1,
  [1377] = 1,
    ACTIONS(137), 24,
      aux_sym_locale_text_token1,
      sym_positional_arg,
      aux_sym_plural_arg_token1,
      anon_sym_PIPE,
      anon_sym___CONTROL_STYLE_BEGIN__,
      anon_sym___CONTROL_STYLE_END__,
      anon_sym___CONTROL_LEFT_CLICK__,
      anon_sym___CONTROL_RIGHT_CLICK__,
      anon_sym___CONTROL_KEY_SHIFT__,
      anon_sym___CONTROL_KEY_CTRL__,
      anon_sym___REMARK_COLOR_BEGIN__,
      anon_sym___REMARK_COLOR_END__,
      anon_sym___CONTROL_MOVE__,
      sym__entity_arg,
      sym__item_arg,
      sym__tile_arg,
      sym__fluid_arg,
      sym__alt_control_arg,
      sym__alt_control_left_click_n,
      sym__alt_control_right_click_n,
      sym__control_arg,
      sym__control_modifier_arg,
      anon_sym_LBRACK2,
      anon_sym_LBRACKcolor_EQ,
  [1404] = 6,
    ACTIONS(149), 1,
      anon_sym_POUND,
    ACTIONS(151), 1,
      sym__richtext_color_number_float,
    ACTIONS(153), 1,
      sym__richtext_color_number_int,
    STATE(136), 2,
      sym_richtext_color_name,
      sym_richtext_color_value,
    STATE(68), 3,
      sym__richtext_color_float,
      sym__richtext_color_int,
      sym__richtext_color_hex,
    ACTIONS(147), 14,
      anon_sym_default,
      anon_sym_red,
      anon_sym_green,
      anon_sym_blue,
      anon_sym_orange,
      anon_sym_yellow,
      anon_sym_pink,
      anon_sym_purple,
      anon_sym_white,
      anon_sym_black,
      anon_sym_gray,
      anon_sym_brown,
      anon_sym_cyan,
      anon_sym_acid,
  [1439] = 6,
    ACTIONS(149), 1,
      anon_sym_POUND,
    ACTIONS(151), 1,
      sym__richtext_color_number_float,
    ACTIONS(153), 1,
      sym__richtext_color_number_int,
    STATE(105), 2,
      sym_richtext_color_name,
      sym_richtext_color_value,
    STATE(68), 3,
      sym__richtext_color_float,
      sym__richtext_color_int,
      sym__richtext_color_hex,
    ACTIONS(147), 14,
      anon_sym_default,
      anon_sym_red,
      anon_sym_green,
      anon_sym_blue,
      anon_sym_orange,
      anon_sym_yellow,
      anon_sym_pink,
      anon_sym_purple,
      anon_sym_white,
      anon_sym_black,
      anon_sym_gray,
      anon_sym_brown,
      anon_sym_cyan,
      anon_sym_acid,
  [1474] = 6,
    ACTIONS(149), 1,
      anon_sym_POUND,
    ACTIONS(151), 1,
      sym__richtext_color_number_float,
    ACTIONS(153), 1,
      sym__richtext_color_number_int,
    STATE(138), 2,
      sym_richtext_color_name,
      sym_richtext_color_value,
    STATE(68), 3,
      sym__richtext_color_float,
      sym__richtext_color_int,
      sym__richtext_color_hex,
    ACTIONS(147), 14,
      anon_sym_default,
      anon_sym_red,
      anon_sym_green,
      anon_sym_blue,
      anon_sym_orange,
      anon_sym_yellow,
      anon_sym_pink,
      anon_sym_purple,
      anon_sym_white,
      anon_sym_black,
      anon_sym_gray,
      anon_sym_brown,
      anon_sym_cyan,
      anon_sym_acid,
  [1509] = 6,
    ACTIONS(149), 1,
      anon_sym_POUND,
    ACTIONS(151), 1,
      sym__richtext_color_number_float,
    ACTIONS(153), 1,
      sym__richtext_color_number_int,
    STATE(134), 2,
      sym_richtext_color_name,
      sym_richtext_color_value,
    STATE(68), 3,
      sym__richtext_color_float,
      sym__richtext_color_int,
      sym__richtext_color_hex,
    ACTIONS(147), 14,
      anon_sym_default,
      anon_sym_red,
      anon_sym_green,
      anon_sym_blue,
      anon_sym_orange,
      anon_sym_yellow,
      anon_sym_pink,
      anon_sym_purple,
      anon_sym_white,
      anon_sym_black,
      anon_sym_gray,
      anon_sym_brown,
      anon_sym_cyan,
      anon_sym_acid,
  [1544] = 6,
    ACTIONS(157), 1,
      anon_sym_rest_EQ,
    STATE(53), 1,
      aux_sym_plural_arg_repeat1,
    STATE(101), 1,
      sym_plural_condition,
    STATE(102), 1,
      sym_plural_pair,
    STATE(119), 1,
      sym_plural_rest,
    ACTIONS(155), 2,
      aux_sym_plural_condition_token1,
      aux_sym_plural_condition_token2,
  [1564] = 6,
    ACTIONS(157), 1,
      anon_sym_rest_EQ,
    STATE(53), 1,
      aux_sym_plural_arg_repeat1,
    STATE(79), 1,
      sym_plural_rest,
    STATE(101), 1,
      sym_plural_condition,
    STATE(102), 1,
      sym_plural_pair,
    ACTIONS(155), 2,
      aux_sym_plural_condition_token1,
      aux_sym_plural_condition_token2,
  [1584] = 6,
    ACTIONS(157), 1,
      anon_sym_rest_EQ,
    STATE(45), 1,
      aux_sym_plural_arg_repeat1,
    STATE(101), 1,
      sym_plural_condition,
    STATE(102), 1,
      sym_plural_pair,
    STATE(118), 1,
      sym_plural_rest,
    ACTIONS(155), 2,
      aux_sym_plural_condition_token1,
      aux_sym_plural_condition_token2,
  [1604] = 6,
    ACTIONS(157), 1,
      anon_sym_rest_EQ,
    STATE(46), 1,
      aux_sym_plural_arg_repeat1,
    STATE(100), 1,
      sym_plural_rest,
    STATE(101), 1,
      sym_plural_condition,
    STATE(102), 1,
      sym_plural_pair,
    ACTIONS(155), 2,
      aux_sym_plural_condition_token1,
      aux_sym_plural_condition_token2,
  [1624] = 6,
    ACTIONS(157), 1,
      anon_sym_rest_EQ,
    STATE(50), 1,
      aux_sym_plural_arg_repeat1,
    STATE(101), 1,
      sym_plural_condition,
    STATE(102), 1,
      sym_plural_pair,
    STATE(110), 1,
      sym_plural_rest,
    ACTIONS(155), 2,
      aux_sym_plural_condition_token1,
      aux_sym_plural_condition_token2,
  [1644] = 6,
    ACTIONS(157), 1,
      anon_sym_rest_EQ,
    STATE(53), 1,
      aux_sym_plural_arg_repeat1,
    STATE(101), 1,
      sym_plural_condition,
    STATE(102), 1,
      sym_plural_pair,
    STATE(111), 1,
      sym_plural_rest,
    ACTIONS(155), 2,
      aux_sym_plural_condition_token1,
      aux_sym_plural_condition_token2,
  [1664] = 6,
    ACTIONS(157), 1,
      anon_sym_rest_EQ,
    STATE(53), 1,
      aux_sym_plural_arg_repeat1,
    STATE(101), 1,
      sym_plural_condition,
    STATE(102), 1,
      sym_plural_pair,
    STATE(115), 1,
      sym_plural_rest,
    ACTIONS(155), 2,
      aux_sym_plural_condition_token1,
      aux_sym_plural_condition_token2,
  [1684] = 6,
    ACTIONS(157), 1,
      anon_sym_rest_EQ,
    STATE(51), 1,
      aux_sym_plural_arg_repeat1,
    STATE(101), 1,
      sym_plural_condition,
    STATE(102), 1,
      sym_plural_pair,
    STATE(114), 1,
      sym_plural_rest,
    ACTIONS(155), 2,
      aux_sym_plural_condition_token1,
      aux_sym_plural_condition_token2,
  [1704] = 5,
    ACTIONS(162), 1,
      anon_sym_rest_EQ,
    STATE(53), 1,
      aux_sym_plural_arg_repeat1,
    STATE(101), 1,
      sym_plural_condition,
    STATE(102), 1,
      sym_plural_pair,
    ACTIONS(159), 2,
      aux_sym_plural_condition_token1,
      aux_sym_plural_condition_token2,
  [1721] = 3,
    ACTIONS(166), 1,
      sym_locale_key,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(57), 2,
      sym_locale_pair,
      aux_sym_locale_category_repeat1,
  [1733] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
    STATE(60), 1,
      sym_category_name,
    STATE(56), 2,
      sym_locale_category,
      aux_sym_source_file_repeat1,
  [1747] = 4,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 1,
      anon_sym_LBRACK,
    STATE(60), 1,
      sym_category_name,
    STATE(56), 2,
      sym_locale_category,
      aux_sym_source_file_repeat1,
  [1761] = 3,
    ACTIONS(177), 1,
      sym_locale_key,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(57), 2,
      sym_locale_pair,
      aux_sym_locale_category_repeat1,
  [1773] = 1,
    ACTIONS(180), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_locale_key,
  [1779] = 3,
    ACTIONS(182), 1,
      aux_sym_richtext_img_value_token1,
    ACTIONS(184), 1,
      aux_sym_richtext_img_value_token2,
    STATE(93), 1,
      sym_richtext_img_value,
  [1789] = 2,
    ACTIONS(166), 1,
      sym_locale_key,
    STATE(54), 2,
      sym_locale_pair,
      aux_sym_locale_category_repeat1,
  [1797] = 1,
    ACTIONS(162), 3,
      aux_sym_plural_condition_token1,
      aux_sym_plural_condition_token2,
      anon_sym_rest_EQ,
  [1803] = 2,
    ACTIONS(186), 1,
      aux_sym_richtext_img_value_token2,
    STATE(70), 1,
      sym_richtext_value,
  [1810] = 2,
    ACTIONS(188), 1,
      aux_sym__richtext_train_token1,
    STATE(91), 1,
      sym_richtext_gps_value,
  [1817] = 2,
    ACTIONS(190), 1,
      anon_sym_RBRACK2,
    ACTIONS(192), 1,
      sym__richtext_color_number_hex,
  [1824] = 2,
    ACTIONS(194), 1,
      aux_sym_category_name_value_token1,
    STATE(140), 1,
      sym_category_name_value,
  [1831] = 2,
    ACTIONS(196), 1,
      anon_sym_RBRACK2,
    ACTIONS(198), 1,
      anon_sym_COMMA,
  [1838] = 1,
    ACTIONS(200), 1,
      anon_sym_COMMA,
  [1842] = 1,
    ACTIONS(202), 1,
      anon_sym_RBRACK2,
  [1846] = 1,
    ACTIONS(204), 1,
      anon_sym_RBRACK2,
  [1850] = 1,
    ACTIONS(206), 1,
      anon_sym_RBRACK2,
  [1854] = 1,
    ACTIONS(208), 1,
      sym__richtext_color_number_hex,
  [1858] = 1,
    ACTIONS(210), 1,
      anon_sym_COMMA,
  [1862] = 1,
    ACTIONS(212), 1,
      anon_sym_COMMA,
  [1866] = 1,
    ACTIONS(214), 1,
      aux_sym_richtext_color_token1,
  [1870] = 1,
    ACTIONS(216), 1,
      anon_sym_PIPE,
  [1874] = 1,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
  [1878] = 1,
    ACTIONS(220), 1,
      anon_sym_RBRACK2,
  [1882] = 1,
    ACTIONS(222), 1,
      sym__richtext_tooltip_locale_key,
  [1886] = 1,
    ACTIONS(224), 1,
      anon_sym_RBRACE__,
  [1890] = 1,
    ACTIONS(226), 1,
      sym__richtext_color_number_float,
  [1894] = 1,
    ACTIONS(228), 1,
      sym__richtext_color_number_int,
  [1898] = 1,
    ACTIONS(230), 1,
      anon_sym_RBRACE__,
  [1902] = 1,
    ACTIONS(232), 1,
      aux_sym_category_name_value_token1,
  [1906] = 1,
    ACTIONS(234), 1,
      anon_sym_RBRACK2,
  [1910] = 1,
    ACTIONS(236), 1,
      anon_sym_RBRACK2,
  [1914] = 1,
    ACTIONS(238), 1,
      anon_sym_RBRACK2,
  [1918] = 1,
    ACTIONS(240), 1,
      anon_sym_RBRACK2,
  [1922] = 1,
    ACTIONS(242), 1,
      sym__richtext_color_number_int,
  [1926] = 1,
    ACTIONS(244), 1,
      sym__richtext_color_number_float,
  [1930] = 1,
    ACTIONS(246), 1,
      sym__richtext_color_number_hex,
  [1934] = 1,
    ACTIONS(248), 1,
      anon_sym_RBRACK2,
  [1938] = 1,
    ACTIONS(250), 1,
      anon_sym_COMMA,
  [1942] = 1,
    ACTIONS(252), 1,
      anon_sym_RBRACK2,
  [1946] = 1,
    ACTIONS(254), 1,
      anon_sym_RBRACK2,
  [1950] = 1,
    ACTIONS(256), 1,
      anon_sym_RBRACK2,
  [1954] = 1,
    ACTIONS(258), 1,
      anon_sym_COMMA,
  [1958] = 1,
    ACTIONS(260), 1,
      anon_sym_RBRACK2,
  [1962] = 1,
    ACTIONS(262), 1,
      anon_sym_RBRACK2,
  [1966] = 1,
    ACTIONS(264), 1,
      anon_sym_RBRACK2,
  [1970] = 1,
    ACTIONS(266), 1,
      anon_sym_RBRACE__,
  [1974] = 1,
    ACTIONS(268), 1,
      anon_sym_EQ,
  [1978] = 1,
    ACTIONS(270), 1,
      anon_sym_PIPE,
  [1982] = 1,
    ACTIONS(272), 1,
      anon_sym_EQ,
  [1986] = 1,
    ACTIONS(274), 1,
      aux_sym__richtext_train_token1,
  [1990] = 1,
    ACTIONS(276), 1,
      anon_sym_RBRACK2,
  [1994] = 1,
    ACTIONS(278), 1,
      anon_sym_COMMA,
  [1998] = 1,
    ACTIONS(280), 1,
      sym__richtext_color_number_hex,
  [2002] = 1,
    ACTIONS(282), 1,
      anon_sym_RBRACK2,
  [2006] = 1,
    ACTIONS(284), 1,
      anon_sym_RBRACK2,
  [2010] = 1,
    ACTIONS(286), 1,
      anon_sym_RBRACE__,
  [2014] = 1,
    ACTIONS(288), 1,
      anon_sym_RBRACE__,
  [2018] = 1,
    ACTIONS(290), 1,
      aux_sym_richtext_color_token1,
  [2022] = 1,
    ACTIONS(292), 1,
      anon_sym_RBRACK2,
  [2026] = 1,
    ACTIONS(294), 1,
      anon_sym_RBRACE__,
  [2030] = 1,
    ACTIONS(296), 1,
      anon_sym_RBRACE__,
  [2034] = 1,
    ACTIONS(298), 1,
      aux_sym_richtext_color_token1,
  [2038] = 1,
    ACTIONS(300), 1,
      anon_sym_RBRACK2,
  [2042] = 1,
    ACTIONS(302), 1,
      anon_sym_RBRACE__,
  [2046] = 1,
    ACTIONS(304), 1,
      anon_sym_RBRACE__,
  [2050] = 1,
    ACTIONS(306), 1,
      aux_sym_richtext_color_token1,
  [2054] = 1,
    ACTIONS(308), 1,
      anon_sym_EQ2,
  [2058] = 1,
    ACTIONS(310), 1,
      anon_sym_RBRACK2,
  [2062] = 1,
    ACTIONS(312), 1,
      anon_sym_RBRACK2,
  [2066] = 1,
    ACTIONS(314), 1,
      anon_sym_EQ2,
  [2070] = 1,
    ACTIONS(316), 1,
      aux_sym__richtext_blueprint_token1,
  [2074] = 1,
    ACTIONS(318), 1,
      aux_sym_locale_text_token1,
  [2078] = 1,
    ACTIONS(320), 1,
      aux_sym__richtext_train_token1,
  [2082] = 1,
    ACTIONS(322), 1,
      aux_sym__richtext_train_token1,
  [2086] = 1,
    ACTIONS(324), 1,
      aux_sym_locale_text_token1,
  [2090] = 1,
    ACTIONS(326), 1,
      aux_sym_locale_pair_token1,
  [2094] = 1,
    ACTIONS(328), 1,
      anon_sym_LBRACE,
  [2098] = 1,
    ACTIONS(330), 1,
      sym_locale_key,
  [2102] = 1,
    ACTIONS(332), 1,
      anon_sym_LBRACE,
  [2106] = 1,
    ACTIONS(334), 1,
      anon_sym_RBRACK2,
  [2110] = 1,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
  [2114] = 1,
    ACTIONS(338), 1,
      anon_sym_RBRACK2,
  [2118] = 1,
    ACTIONS(340), 1,
      anon_sym_LBRACE,
  [2122] = 1,
    ACTIONS(342), 1,
      anon_sym_RBRACK2,
  [2126] = 1,
    ACTIONS(344), 1,
      anon_sym_EQ,
  [2130] = 1,
    ACTIONS(346), 1,
      anon_sym_RBRACK,
  [2134] = 1,
    ACTIONS(348), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 132,
  [SMALL_STATE(6)] = 176,
  [SMALL_STATE(7)] = 220,
  [SMALL_STATE(8)] = 264,
  [SMALL_STATE(9)] = 308,
  [SMALL_STATE(10)] = 352,
  [SMALL_STATE(11)] = 396,
  [SMALL_STATE(12)] = 440,
  [SMALL_STATE(13)] = 484,
  [SMALL_STATE(14)] = 528,
  [SMALL_STATE(15)] = 572,
  [SMALL_STATE(16)] = 616,
  [SMALL_STATE(17)] = 660,
  [SMALL_STATE(18)] = 711,
  [SMALL_STATE(19)] = 762,
  [SMALL_STATE(20)] = 813,
  [SMALL_STATE(21)] = 864,
  [SMALL_STATE(22)] = 891,
  [SMALL_STATE(23)] = 918,
  [SMALL_STATE(24)] = 945,
  [SMALL_STATE(25)] = 972,
  [SMALL_STATE(26)] = 999,
  [SMALL_STATE(27)] = 1026,
  [SMALL_STATE(28)] = 1053,
  [SMALL_STATE(29)] = 1080,
  [SMALL_STATE(30)] = 1107,
  [SMALL_STATE(31)] = 1134,
  [SMALL_STATE(32)] = 1161,
  [SMALL_STATE(33)] = 1188,
  [SMALL_STATE(34)] = 1215,
  [SMALL_STATE(35)] = 1242,
  [SMALL_STATE(36)] = 1269,
  [SMALL_STATE(37)] = 1296,
  [SMALL_STATE(38)] = 1323,
  [SMALL_STATE(39)] = 1350,
  [SMALL_STATE(40)] = 1377,
  [SMALL_STATE(41)] = 1404,
  [SMALL_STATE(42)] = 1439,
  [SMALL_STATE(43)] = 1474,
  [SMALL_STATE(44)] = 1509,
  [SMALL_STATE(45)] = 1544,
  [SMALL_STATE(46)] = 1564,
  [SMALL_STATE(47)] = 1584,
  [SMALL_STATE(48)] = 1604,
  [SMALL_STATE(49)] = 1624,
  [SMALL_STATE(50)] = 1644,
  [SMALL_STATE(51)] = 1664,
  [SMALL_STATE(52)] = 1684,
  [SMALL_STATE(53)] = 1704,
  [SMALL_STATE(54)] = 1721,
  [SMALL_STATE(55)] = 1733,
  [SMALL_STATE(56)] = 1747,
  [SMALL_STATE(57)] = 1761,
  [SMALL_STATE(58)] = 1773,
  [SMALL_STATE(59)] = 1779,
  [SMALL_STATE(60)] = 1789,
  [SMALL_STATE(61)] = 1797,
  [SMALL_STATE(62)] = 1803,
  [SMALL_STATE(63)] = 1810,
  [SMALL_STATE(64)] = 1817,
  [SMALL_STATE(65)] = 1824,
  [SMALL_STATE(66)] = 1831,
  [SMALL_STATE(67)] = 1838,
  [SMALL_STATE(68)] = 1842,
  [SMALL_STATE(69)] = 1846,
  [SMALL_STATE(70)] = 1850,
  [SMALL_STATE(71)] = 1854,
  [SMALL_STATE(72)] = 1858,
  [SMALL_STATE(73)] = 1862,
  [SMALL_STATE(74)] = 1866,
  [SMALL_STATE(75)] = 1870,
  [SMALL_STATE(76)] = 1874,
  [SMALL_STATE(77)] = 1878,
  [SMALL_STATE(78)] = 1882,
  [SMALL_STATE(79)] = 1886,
  [SMALL_STATE(80)] = 1890,
  [SMALL_STATE(81)] = 1894,
  [SMALL_STATE(82)] = 1898,
  [SMALL_STATE(83)] = 1902,
  [SMALL_STATE(84)] = 1906,
  [SMALL_STATE(85)] = 1910,
  [SMALL_STATE(86)] = 1914,
  [SMALL_STATE(87)] = 1918,
  [SMALL_STATE(88)] = 1922,
  [SMALL_STATE(89)] = 1926,
  [SMALL_STATE(90)] = 1930,
  [SMALL_STATE(91)] = 1934,
  [SMALL_STATE(92)] = 1938,
  [SMALL_STATE(93)] = 1942,
  [SMALL_STATE(94)] = 1946,
  [SMALL_STATE(95)] = 1950,
  [SMALL_STATE(96)] = 1954,
  [SMALL_STATE(97)] = 1958,
  [SMALL_STATE(98)] = 1962,
  [SMALL_STATE(99)] = 1966,
  [SMALL_STATE(100)] = 1970,
  [SMALL_STATE(101)] = 1974,
  [SMALL_STATE(102)] = 1978,
  [SMALL_STATE(103)] = 1982,
  [SMALL_STATE(104)] = 1986,
  [SMALL_STATE(105)] = 1990,
  [SMALL_STATE(106)] = 1994,
  [SMALL_STATE(107)] = 1998,
  [SMALL_STATE(108)] = 2002,
  [SMALL_STATE(109)] = 2006,
  [SMALL_STATE(110)] = 2010,
  [SMALL_STATE(111)] = 2014,
  [SMALL_STATE(112)] = 2018,
  [SMALL_STATE(113)] = 2022,
  [SMALL_STATE(114)] = 2026,
  [SMALL_STATE(115)] = 2030,
  [SMALL_STATE(116)] = 2034,
  [SMALL_STATE(117)] = 2038,
  [SMALL_STATE(118)] = 2042,
  [SMALL_STATE(119)] = 2046,
  [SMALL_STATE(120)] = 2050,
  [SMALL_STATE(121)] = 2054,
  [SMALL_STATE(122)] = 2058,
  [SMALL_STATE(123)] = 2062,
  [SMALL_STATE(124)] = 2066,
  [SMALL_STATE(125)] = 2070,
  [SMALL_STATE(126)] = 2074,
  [SMALL_STATE(127)] = 2078,
  [SMALL_STATE(128)] = 2082,
  [SMALL_STATE(129)] = 2086,
  [SMALL_STATE(130)] = 2090,
  [SMALL_STATE(131)] = 2094,
  [SMALL_STATE(132)] = 2098,
  [SMALL_STATE(133)] = 2102,
  [SMALL_STATE(134)] = 2106,
  [SMALL_STATE(135)] = 2110,
  [SMALL_STATE(136)] = 2114,
  [SMALL_STATE(137)] = 2118,
  [SMALL_STATE(138)] = 2122,
  [SMALL_STATE(139)] = 2126,
  [SMALL_STATE(140)] = 2130,
  [SMALL_STATE(141)] = 2134,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [7] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_locale_text_repeat1, 2, 0, 0),
  [9] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_locale_text_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [12] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_locale_text_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_locale_text_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_locale_text_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_locale_text_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_locale_text, 1, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_locale_text_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_locale_text_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_locale_text_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_locale_text_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_locale_text_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_locale_text_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_locale_text_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_locale_text_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_locale_text_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_locale_text_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_locale_text_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_locale_text_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_locale_text_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_locale_text_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_locale_text_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_arg, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plural_arg, 4, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_richtext_color, 5, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_richtext_arg, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plural_arg, 5, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plural_arg_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plural_arg_repeat1, 2, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_locale_category, 2, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_locale_category_repeat1, 2, 0, 0),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_locale_category_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_locale_pair, 4, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__richtext_color_hex, 4, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_richtext_gps_value, 3, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_richtext_color_value, 1, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_richtext_value, 1, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__richtext_prototype, 3, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plural_pair, 3, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__richtext_tooltip, 4, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plural_rest, 2, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__richtext_color_hex, 5, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__richtext_color_float, 5, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__richtext_color_int, 5, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_richtext_gps_value, 5, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__richtext_gps, 2, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__richtext_img, 2, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_richtext_img_value, 1, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__richtext_blueprint, 2, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__richtext_train_stop, 2, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__richtext_train, 2, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__richtext_armor, 2, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plural_condition, 1, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_richtext_color_name, 1, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_richtext_pair, 1, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_richtext_category, 1, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category_name, 3, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category_name_value, 1, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_factorio_locale(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
