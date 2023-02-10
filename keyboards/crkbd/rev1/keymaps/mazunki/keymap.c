#include QMK_KEYBOARD_H
#include "mazunki.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[BASE] =  LAYOUT_split_3x6_3(                                                                            
			KC_TAB,   KC_ESC,  KC_DOT,              KC_COMM,  KC_P,     KC_Y,    KC_F      ,      KC_G,  KC_C,  KC_R,  KC_L,  KC_SLSH,
			KC_LCTL,  KC_A,    KC_O,                KC_E,     KC_U,     KC_I,    KC_QUOT,  KC_D,  KC_H,  KC_T,  KC_N,  KC_S,  
			KC_LSFT,  KC_Q,    KC_J,                KC_K,     KC_X,     OSL(2),  KC_SCLN,  KC_B,  KC_M,  KC_W,  KC_V,  KC_Z,  
			KC_LGUI,  KC_SPC,  TO(MISC),            KC_ENT,   KC_BSPC,  KC_RALT                                               
			),

	[SYMBOLS] = LAYOUT_split_3x6_3(KC_TAB, KC_6, KC_7, KC_8, KC_9, KC_0, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC, KC_LCTL, KC_1, KC_2, KC_3, KC_4, KC_5, KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, KC_GRV, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD, KC_LGUI, TO(SYMBOLS), TO(BASE), KC_ENT, KC_TRNS, KC_RALT),

	[MISC] = LAYOUT_split_3x6_3(KC_NO, KC_NO, KC_Q, KC_W, KC_R, KC_E, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSCR, KC_NO, KC_LCTL, KC_A, KC_S, KC_D, KC_NO, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_HOME, KC_PGUP, KC_NO, KC_NO, KC_NO, KC_NO, KC_LCTL, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_END, KC_PGDN, KC_SPC, KC_LSFT, TO(BASE), KC_NO, KC_NO, KC_NO)

// [QWERTY] = LAYOUT_split_3x6_3(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT, KC_LSFT, OSL(SYMBOLS), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_LGUI, KC_LSFT, TO(MISC), KC_ENT, KC_NO, KC_RALT),
};


