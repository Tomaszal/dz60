#include "dz60.h"

// Define special keycodes for readability
#define ____ KC_TRNS
#define XXXX KC_NO

// Define layers
#define _BS 00 // Base
#define _FN 01 // Function
#define _MC 31 // Macro

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_BS] = LAYOUT(
		KC_GESC,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_PSCR,  MO(_MC),
		KC_TAB,             KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,
		KC_CAPS,            KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,
		KC_LSFT,  XXXX,     KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_DEL,
		KC_LCTL,  KC_LGUI,  KC_LALT,            KC_BSPC,            MO(_FN),            KC_SPC,             KC_RALT,  KC_RCTL,  XXXX,     KC_RGUI,  ____),

	[_FN] = LAYOUT(
		KC_GRV,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   ____,     ____,
		____,               ____,     ____,     ____,     ____,     ____,     ____,     KC_HOME,  KC_UP,    KC_END,   ____,     ____,     ____,     ____,
		____,               ____,     ____,     ____,     ____,     ____,     ____,     KC_LEFT,  KC_DOWN,  KC_RGHT,  ____,     ____,               ____,
		____,     XXXX,     ____,     ____,     ____,     ____,     ____,     ____,     ____,     ____,     ____,     ____,               ____,     ____,
		____,     ____,     ____,               KC_DEL,             ____,               ____,               ____,     ____,     XXXX,     ____,     ____),

	[_MC] = LAYOUT(
		RESET,    M(1),     M(2),     M(3),     M(4),     M(5),     M(6),     M(7),     M(8),     M(9),     M(10),    M(11),    M(12),    ____,     ____,
		____,               ____,     ____,     ____,     ____,     ____,     ____,     ____,     ____,     ____,     ____,     ____,     ____,     ____,
		KC_LOCK,            ____,     ____,     ____,     ____,     ____,     ____,     ____,     ____,     ____,     ____,     ____,               ____,
		____,     XXXX,     ____,     ____,     ____,     ____,     ____,     ____,     ____,     ____,     ____,     ____,               ____,     ____,
		____,     ____,     ____,               ____,               ____,               ____,               ____,     ____,     XXXX,     ____,     ____),
};
