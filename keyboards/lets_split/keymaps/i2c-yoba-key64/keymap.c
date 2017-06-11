#include "lets_split.h"
#include "quantum.h"

#ifdef USE_I2C

#include "i2c.h"
#include "split_util.h"

#endif

#define QWERTY 0
#define LOWER 1
#define RAISE 2
#define NUM 3

#define TO_LWR MO(LOWER)
#define TO_RSE MO(RAISE)
#define TG_NUM TG(NUM)

// Alias to make layering more clear
#define _______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * |Alt/Es|   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |Num   |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |Ct/Tab|   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |   '  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |Sh/Cap|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Sh/Ent|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |RAl/Co| Ins  | Del  | GUI  |Lower | Bksp |Space |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[QWERTY] = KEYMAP( \
    MT(MOD_LALT, KC_ESC),  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    TG_NUM, \
    MT(MOD_LCTL, KC_TAB),  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
    MT(MOD_LSFT, KC_CAPS), KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, MT(MOD_RSFT, KC_ENT), \
    MT(MOD_RALT, KC_APP),  KC_INS,  KC_DEL,  KC_LGUI, TO_LWR,  KC_BSPC, KC_SPC,  TO_RSE,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT \
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
 * |      | Prev | Play | Stop | Next | Mute |BlInc | Btn3 |BlDec |   [  |  ]   |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      | Del  |Enter |      | Home | PgDn | PgUp | End  |
 * `-----------------------------------------------------------------------------------'
 *
 * [ and ] on third row required to complete cyrillic layout
 */

[RAISE] = KEYMAP( \
  _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______, \
  _______, KC_LCBR, KC_LBRC, KC_LPRN, KC_QUOT, KC_MINS, KC_UNDS, KC_DQUO, KC_RPRN, KC_RBRC, KC_RCBR, _______, \
  _______, KC_MPRV, KC_MPLY, KC_MSTP, KC_MNXT, KC_MUTE, BL_INC,  KC_BTN3, BL_DEC,  KC_LBRC, KC_RBRC, _______, \
  _______, _______, _______, _______, _______, KC_DEL,  KC_ENT,  _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END \
),

/* Num
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |   7  |   8  |   9  |   +  |   /  |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |      |   4  |   5  |   6  |   -  |   *  |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |   1  |   2  |   3  |   0  |   .  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */

[NUM] = KEYMAP( \
  _______, _______, _______, _______, _______, KC_NLCK, KC_KP_7, KC_KP_8, KC_KP_9, KC_PPLS, KC_PSLS, _______, \
  _______, _______, _______, _______, _______, _______, KC_KP_4, KC_KP_5, KC_KP_6, KC_PMNS, KC_PAST, _______, \
  _______, _______, _______, _______, _______, _______, KC_KP_1, KC_KP_2, KC_KP_3, KC_KP_0, KC_PDOT, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ \
)
};

#ifdef USE_I2C
int i2c_cmd(uint8_t cmd)
{
    int err = i2c_master_start(SLAVE_I2C_ADDRESS + I2C_WRITE);
    if (err) goto i2c_error;

    // cmd stored in last byte of slave buffer
    err = i2c_master_write(I2C_CMD_OFFSET);
    if (err) goto i2c_error;

    // write command
    err = i2c_master_write(cmd);
    if (err) goto i2c_error;

    i2c_master_stop();

    if (err)
    {
i2c_error: // the cable is disconnceted, or something else went wrong
        i2c_reset_state();
        return err;
    }

    return 0;
}
#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) 
{
    switch(keycode)
    {
        case BL_INC:
            if (!record->event.pressed)
            {
#ifdef USE_I2C
                i2c_cmd(CMD_BACKLIGHT_INCREASE);
#endif
            }
            return true;
        case BL_0 ... BL_15:
            if (!record->event.pressed)
            {
#ifdef USE_I2C
                i2c_cmd(CMD_BACKLIGHT_LEVEL_0 + (keycode - BL_0));
#endif
            }
            return true;
        case BL_DEC:
            if (!record->event.pressed)
            {
#ifdef USE_I2C
                i2c_cmd(CMD_BACKLIGHT_DECREASE);
#endif
            }
            return true;
        case BL_TOGG:
            if (!record->event.pressed)
            {
#ifdef USE_I2C
                i2c_cmd(CMD_BACKLIGHT_TOGGLE);
#endif
            }
            return true;
        case BL_STEP:
            if (!record->event.pressed)
            {
#ifdef USE_I2C
                i2c_cmd(CMD_BACKLIGHT_STEP);
#endif
            }
            return true;
        default:
            return true;
    }
}
