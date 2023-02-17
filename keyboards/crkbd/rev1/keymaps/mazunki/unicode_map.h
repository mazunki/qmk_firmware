
#include QMK_KEYBOARD_H

/*
 * remember to UNICODEMAP_ENABLE = yes in your rules.mk
 */

enum unicode_names {
	KC_AE,
	KC_OE,
	KC_AA,
}

// U+2134 => 0x2134. it is not utf-8 hex
const uint32_t unicode_map[] PROGMEM = {
	[KC_AE] = 0x00E6,  // 0x00C6
	[KC_OE] = 0x00F8, // 0x00D8
	[KC_AA] = 0x00E5, // 0x00C5
}

