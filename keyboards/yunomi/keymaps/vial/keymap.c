// Copyright 2024 Tom Plant (@pl4nty)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
        KC_ESC,   KC_1,    KC_2,    KC_3,   KC_4,   KC_5,   KC_6,   KC_7,    KC_8,     KC_9,    KC_0,    KC_BSPC,
        KC_TAB,   KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,    KC_I,     KC_O,    KC_P,    KC_BSLS,
        KC_CAPS,  KC_A,    KC_S,    KC_D,   KC_F,   KC_G,   KC_H,   KC_J,    KC_K,     KC_L,    KC_SCLN, KC_ENT,
        KC_LSFT,  KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_N,   KC_M,    KC_COMM,  KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_SPC, KC_SPC, KC_SPC, KC_LBRC, KC_RBRC,  KC_QUOT, KC_RALT, KC_RCTL
    )
};
