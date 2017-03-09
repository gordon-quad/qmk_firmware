/*
Copyright 2017 Gordon Quad <gordon@niflheim.info>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#define BASE        0
#define BASE_PUNCT  1
#define CYR         2
#define CYR_PUNCT   3
#define NUM         4
#define NUM_FN      5

#include "armed64.h"

#define MACRO_CAPS       1
#define MACRO_CAPS_BASE  2
#define MACRO_NUM        3
#define MACRO_CYR_PUNCT  4

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[BASE] = KEYMAP(
    /* left, spatial positions */                                     \
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                \
    KC_LALT, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_FN2,     \
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                \
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_TAB,     \
             KC_HOME, KC_PGDN, KC_PGUP, KC_END,                       \
                                                 KC_BSPC, KC_LGUI,    \
    /* right, spatial positions */                                    \
             KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_NO,      \
    KC_FN3,  KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LALT,    \
             KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_RCTL,    \
    KC_ENT,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,    \
                      KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,             \
    KC_FN0,  KC_SPC                                                   \
    ),
[BASE_PUNCT] = KEYMAP(
    /* left, spatial positions */                                     \
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,               \
    KC_LALT, KC_TILD, KC_GRV,  KC_DLR,  KC_AT,   KC_BSLS, KC_SLCK,    \
    KC_LCTL, KC_LCBR, KC_LBRC, KC_LPRN, KC_QUOT, KC_MINS,             \
    KC_LSFT, KC_EXLM, KC_HASH, KC_LT,   KC_EQL,  KC_PIPE, KC_NO,      \
             KC_PSCR, KC_PAUS, KC_INS,  KC_BTN3,                      \
                                                 KC_DEL,  KC_NO,      \
    /* right, spatial positions */                                    \
             KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_NO,      \
    KC_NO,   KC_CIRC, KC_PERC, KC_ASTR, KC_F11,  KC_F12,  KC_LALT,    \
             KC_UNDS, KC_DQUO, KC_RPRN, KC_RBRC, KC_RCBR, KC_RCTL,    \
    KC_NO,   KC_AMPR, KC_PLUS, KC_GT,   KC_MPLY, KC_MUTE, KC_RSFT,    \
                      KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,             \
    KC_TRNS, KC_SPC                                                   \
    ),
[CYR] = KEYMAP(
    /* left, spatial positions */                                     \
    KC_ESC,  KC_EXLM, KC_AT,   KC_GRV,  KC_DLR,  KC_PERC,             \
    KC_LALT, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_FN4,     \
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                \
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_TAB,     \
             KC_HOME, KC_PGDN, KC_PGUP, KC_END,                       \
                                                 KC_BSPC, KC_LGUI,    \
    /* right, spatial positions */                                    \
             KC_CIRC, KC_AMPR, KC_LBRC, KC_RBRC, KC_QUOT, KC_NO,      \
    KC_FN3,  KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LALT,    \
             KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_RCTL,    \
    KC_ENT,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,    \
                      KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,             \
    KC_FN1,  KC_SPC                                                   \
    ),
[CYR_PUNCT] = KEYMAP(
    /* left, spatial positions */                                     \
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                \
    KC_LALT, KC_TILD, KC_GRV,  KC_DLR,  KC_AT,   KC_BSLS, KC_SLCK,    \
    KC_LCTL, KC_LCBR, KC_LBRC, KC_LPRN, KC_QUOT, KC_MINS,             \
    KC_LSFT, KC_EXLM, KC_HASH, KC_LT,   KC_EQL,  KC_PIPE, KC_NO,      \
             KC_PSCR, KC_PAUS, KC_INS,  KC_BTN3,                      \
                                                 KC_DEL,  KC_NO,      \
    /* right, spatial positions */                                    \
             KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_NO,      \
    KC_NO,   KC_CIRC, KC_PERC, KC_ASTR, KC_NO,   KC_NO,   KC_LALT,    \
             KC_UNDS, KC_DQUO, KC_RPRN, KC_RBRC, KC_RCBR, KC_RCTL,    \
    KC_NO,   KC_AMPR, KC_PLUS, KC_GT,   KC_MPLY, KC_MUTE, KC_RSFT,    \
                      KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,             \
    KC_TRNS, KC_SPC                                                   \
    ),
[NUM] = KEYMAP(
    /* left, spatial positions */                                     \
    KC_ESC,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,             \
    KC_LALT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,      \
    KC_LCTL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,             \
    KC_LSFT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TAB,     \
             KC_HOME, KC_PGDN, KC_PGUP, KC_END,                       \
                                                 KC_BSPC, KC_TRNS,    \
    /* right, spatial positions */                                    \
             KC_NO,   KC_P7,   KC_P8,   KC_P9,   KC_INS,  KC_NO,      \
    KC_TRNS, KC_PSLS, KC_P4,   KC_P5,   KC_P6,   KC_PAST, KC_TAB,     \
             KC_PMNS, KC_P1,   KC_P2,   KC_P3,   KC_PPLS, KC_BSPC,    \
    KC_SPC,  KC_PEQL, KC_P0,   KC_P0,   KC_PDOT, KC_PCMM, KC_DEL,     \
                      KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,             \
    KC_FN5,  KC_ENT                                                   \
    ),
[NUM_FN] = KEYMAP(
    /* left, spatial positions */                                     \
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,               \
    KC_LALT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SLCK,    \
    KC_LCTL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,             \
    KC_LSFT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    \
             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                      \
                                                 KC_TRNS, KC_TRNS,    \
    /* right, spatial positions */                                    \
             KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_NO,      \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F11,  KC_F12,  KC_LALT,    \
             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_RCTL,    \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_RSFT,    \
                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,             \
    KC_TRNS, KC_TRNS                                                  \
    ),
};

const uint16_t fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(BASE_PUNCT),
    [1] = ACTION_MACRO(MACRO_CYR_PUNCT),
    [2] = ACTION_MACRO(MACRO_CAPS),
    [3] = ACTION_MACRO(MACRO_NUM),
    [4] = ACTION_MACRO(MACRO_CAPS_BASE),
    [5] = ACTION_LAYER_MOMENTARY(NUM_FN),
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    switch (id) {
    case MACRO_CAPS:
        if (record->event.pressed)
        {
            default_layer_set(1UL << CYR);
            return MACRODOWN( T(CLCK), END );
        }
        break;
    case MACRO_CAPS_BASE:
        if (record->event.pressed)
        {
            default_layer_set(1UL << BASE);
            return MACRODOWN( T(CLCK), END );
        }
        break;
    case MACRO_NUM:
        if (record->event.pressed)
        {
            layer_invert(NUM);
            return MACRODOWN( T(NLCK), END );
        }
        break;
    case MACRO_CYR_PUNCT:
        if (record->event.pressed)
        {
            layer_on(CYR_PUNCT);
            return MACRO( T(CLCK), END );
        }
        else
        {
            layer_off(CYR_PUNCT);
            return MACRO( T(CLCK), END );
        }
        break;
    }
    return MACRO_NONE;
}

