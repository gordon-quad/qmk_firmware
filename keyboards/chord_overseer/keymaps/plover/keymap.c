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

#include "chord_overseer.h"

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP(
              KC_1, KC_2, KC_3, KC_4,       KC_5, KC_6, KC_7, KC_8,
        KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_9,
        KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_M, KC_0,
                    KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N
    ),
};

const uint16_t fn_actions[] = {
};
