#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: colemak */
    KEYMAP(
        ESC,   1,    2,   3,   4,   5,  FN2, FN1,  6,   7,      8,    9,     0,    EQL, \
        TAB,   Q,    W,   F,   P,   G, LBRC, RBRC, J,   L,      U,    Y,  SCLN,   MINS, \
        LCTRL, A,    R,   S,   T,   D,             H,   N,      E,    I,     O,   QUOT, \
        LSFT,  Z,    X,   C,   V,   B,  GRV, BSLS, K,   M,   COMM,  DOT,  SLSH,   RSFT, \
        FN3, DEL, LALT, FN0,            ENT, BSPC,            SPC, LGUI,   FN0,     FN3 ),
	/*1: qwerty gaming */
	KEYMAP(
        ESC,   1,    2,   3,   4,   5,  FN2,  FN2, 6,   7,      8,    9,     0,    EQL, \
        TAB,   Q,    W,   E,   R,   T, LBRC, RBRC, Y,   U,      I,    O,     P,   MINS, \
        LCTRL, A,    S,   D,   F,   G,             H,   J,      K,    L,  SCLN,   QUOT, \
        LSFT,  Z,    X,   C,   V,   B,  GRV, BSLS, N,   M,   COMM,  DOT,  SLSH,   RSFT, \
        FN3, DEL, LALT, SPC,            FN0,  ENT,           BSPC, LGUI,   FN0,     FN3 ),
	/*2: fn main */
	KEYMAP(
        NO,      NO,    NO,    NO,    NO,   NO,  FN1,   FN1, FN1, PSLS,  PAST,  PMNS,    NO,    EQL, \
        NO,    PGUP,  HOME,    UP,   END, VOLU, CAPS,  PDOT,  P7,   P8,    P9,  PPLS,  SCLN,   MINS, \
        LCTRL, PGDN,  LEFT,  DOWN, RIGHT, VOLD,               P4,   P5,    P6,  COMM,    NO,   QUOT, \
        LSFT,   F13,   F14,   F15,   F16, PSCR,  DEL,    P0,  P1,   P2,    P3,   ENT,  SLSH,   RSFT, \
        FN3,    DEL,  LALT,   FN0,               FN0,   BSPC,             SPC,  LGUI,   FN0,    FN3 ),
	/*3: f keys and mouse */
	KEYMAP(
		NO,    NO,    NO,    NO,    NO,    NO,    NO,    NO,    NO,    NO,    NO,    NO,    NO,    NO,    \
		NO,    F1,    F2,    F3,    F4,    NO,    NO,    NO,    NO,    NO,  BTN4,  BTN3,  BTN5,    NO,    \
		LCTRL, F5,    F6,    F7,    F8,    NO,                  NO,  WH_U,  BTN1,  MS_U,  BTN2,    RCTRL,    \
		LSFT,  F9,   F10,   F11,   F12,    NO,    NO,    NO,    NO,  WH_D,  MS_L,  MS_D,  MS_R,    RSFT,    \
		FN3,   NO,  LALT,    NO,                  NO,    NO,                  NO,  LGUI,   FN0,    FN3 ),

};
const uint16_t PROGMEM fn_actions[] = {
    /* Poker Layout */
    [0] = ACTION_LAYER_MOMENTARY(2),
    [1] = ACTION_LAYER_TOGGLE(2),
    [2] = ACTION_LAYER_TOGGLE(1),
    [3] = ACTION_LAYER_MOMENTARY(3),
};
