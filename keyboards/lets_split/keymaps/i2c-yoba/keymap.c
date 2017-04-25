#include "lets_split.h"
#include "quantum.h"

#define QWERTY 0
#define LOWER 1
#define RAISE 2

// Alias to make layering more clear
#define _______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Caps |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Ctl  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Esc  | Del  | Alt  | GUI  |Lower | Bksp |Space |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[QWERTY] = KEYMAP( \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_CAPS, \
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, MT(MOD_RSFT, KC_ENT), \
    KC_ESC,  KC_DEL,  KC_LALT, KC_LGUI, MO(1),   KC_BSPC, KC_SPC,  MO(2),   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT \
),

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |  |   |   &  |   *  |   (  |   )  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      | Mute | Vol- | Vol+ |      | Bksp |   $  |   %  |   ^  |   [  |  ]   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |   !  |   @  |   #  |   \  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      | Del  |Enter |      |      | PgDn | PgUp |      |
 * `-----------------------------------------------------------------------------------'
 */
[LOWER] = KEYMAP( \
  _______, _______, _______, _______, _______, _______, KC_PIPE, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL, \
  _______, _______, KC_MUTE, KC_VOLD, KC_VOLU, _______, KC_BSPC, KC_DLR,  KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, \
  _______, _______, _______, _______, _______, _______, _______, KC_EXLM, KC_AT,   KC_HASH, KC_BSLS, MT(MOD_RSFT, KC_ENT), \
  _______, _______, _______, _______, _______, KC_DEL,  KC_ENT,  _______, _______, KC_PGDN, KC_PGUP, _______
),

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |   `  |   `  |   ~  |   (  |   )  |      |      |   7  |   8  |   9  |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |  [   |   ]  |   {  |   }  |      |      |   4  |   5  |   6  |      |  \   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |  -   |   _  |  =   |  +   |      |      |   1  |   2  |   3  |      |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |    Enter    |   0  |   .  | PgDn | PgUp |      |
 * `-----------------------------------------------------------------------------------'
 */

[RAISE] = KEYMAP( \
  KC_GRV,  KC_GRV,  KC_TILD, KC_LPRN, KC_RPRN, _______, _______, KC_7,    KC_8,    KC_9,    _______, _______, \
  _______, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, _______, _______, KC_4,    KC_5,    KC_6,    _______, KC_BSLS, \
  _______, KC_MINS, KC_UNDS, KC_EQL,  KC_PLUS, _______, _______, KC_1,    KC_2,    KC_3,    _______, KC_ENT, \
  _______, _______, _______, _______, _______, KC_ENT,  KC_ENT,  KC_0,    KC_DOT,  KC_PGDN, KC_PGUP, _______ \
)
};
