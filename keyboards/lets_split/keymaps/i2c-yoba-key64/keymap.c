#include "lets_split.h"
#include "quantum.h"

#define QWERTY 0
#define LOWER 1
#define RAISE 2

#define TO_LWR LT(LOWER,KC_APP)
#define TO_RSE MO(RAISE)

// Alias to make layering more clear
#define _______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Caps |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Ctl  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |Ctl/' |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Sh/Ent|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Esc  | RAlt | Alt  | GUI  |Lower | Bksp |Space |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[QWERTY] = KEYMAP( \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_CAPS, \
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, MT(MOD_RCTL, KC_QUOT), \
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, MT(MOD_RSFT, KC_ENT), \
    KC_ESC,  KC_RALT, KC_LALT, KC_LGUI, TO_LWR,  KC_BSPC, KC_SPC,  TO_RSE,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT \
),

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  | F10  |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |   ~  |   `  |   $  |   @  |   \  |   ^  |   %  |   *  | F11  | F12  |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |   !  |   #  |   <  |   =  |   |  |   &  |   +  |   >  | Vol+ | Vol- |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      | Del  |Enter |      | Home | PgDn | PgUp |End   |
 * `-----------------------------------------------------------------------------------'
 */
[LOWER] = KEYMAP( \
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______, \
  _______, KC_TILD, KC_GRV,  KC_DLR,  KC_AT,   KC_BSLS, KC_CIRC, KC_PERC, KC_ASTR, KC_F11,  KC_F12,  _______, \
  _______, KC_EXLM, KC_HASH, KC_LT,   KC_EQL,  KC_PIPE, KC_AMPR, KC_PLUS, KC_GT,   KC_VOLU, KC_VOLD, _______, \
  _______, _______, _______, _______, _______, KC_DEL,  KC_ENT,  _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END
),

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |      |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |  0   |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |  {   |   [  |   (  |   '  |   -  |   _  |   "  |   )  |   ]  |  }   |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      | Prev | Play | Stop | Next | Mute |      | Btn3 | Ins  |   [  |  ]   |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      | Del  |Enter |      | Home | PgDn | PgUp | End  |
 * `-----------------------------------------------------------------------------------'
 *
 * [ and ] on third row required to complete cyrillic layout
 */

[RAISE] = KEYMAP( \
  _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______, \
  _______, KC_LCBR, KC_LBRC, KC_LPRN, KC_QUOT, KC_MINS, KC_UNDS, KC_DQUO, KC_RPRN, KC_RBRC, KC_RCBR, _______, \
  _______, KC_MPRV, KC_MPLY, KC_MSTP, KC_MNXT, KC_MUTE, _______, KC_BTN3, KC_INS,  KC_LBRC, KC_RBRC, _______, \
  _______, _______, _______, _______, _______, KC_DEL,  KC_ENT,  _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END \
)
};
