#include "lets_split.h"
#include "quantum.h"

#ifdef USE_I2C

#include "i2c.h"
#include "split_util.h"

#endif

#include "keymap_colemak.h"
#include "sendstring_colemak.h"

#include "chords.h"

#include <string.h>

#define QWERTY 0
#define LOWER 1
#define RAISE 2
#define NUM 3
#define CYR 4
#define GOLDCREST 4

#define TO_LWR MO(LOWER)
#define TO_RSE MO(RAISE)
#define TG_NUM TG(NUM)
#define TG_GC TG(GOLDCREST)

#define COMP KC_APP

// Alias to make layering more clear
#define _______ KC_TRNS

#define MACRO_BREATHING_TOGGLE    1
#define MACRO_BREATHING_ENABLE    2
#define MACRO_BREATHING_DISABLE   3
#define MACRO_BREATHING_SPEED_INC 4
#define MACRO_BREATHING_SPEED_DEC 5
#define MACRO_CYR_A               6
#define MACRO_CYR_B               7
#define MACRO_CYR_V               8
#define MACRO_CYR_G               9
#define MACRO_CYR_D               10
#define MACRO_CYR_E               11
#define MACRO_CYR_YO              12
#define MACRO_CYR_ZHE             13
#define MACRO_CYR_Z               14
#define MACRO_CYR_I               15
#define MACRO_CYR_IY              16
#define MACRO_CYR_K               17
#define MACRO_CYR_L               18
#define MACRO_CYR_M               19
#define MACRO_CYR_N               20
#define MACRO_CYR_O               21
#define MACRO_CYR_P               22
#define MACRO_CYR_R               23
#define MACRO_CYR_S               24
#define MACRO_CYR_T               25
#define MACRO_CYR_U               26
#define MACRO_CYR_F               27
#define MACRO_CYR_H               28
#define MACRO_CYR_C               29
#define MACRO_CYR_CHE             30
#define MACRO_CYR_SHA             31
#define MACRO_CYR_SCHA            32 
#define MACRO_CYR_HARD            33 
#define MACRO_CYR_YI              34
#define MACRO_CYR_SOFT            35 
#define MACRO_CYR_YE              36
#define MACRO_CYR_YU              37
#define MACRO_CYR_YA              38

#define MACRO_GC_START            128
#define MACRO_GC_L_P1             128
#define MACRO_GC_L_P2             129
#define MACRO_GC_L_P3             130
#define MACRO_GC_L_P4             131
#define MACRO_GC_L_R1             132
#define MACRO_GC_L_R2             133
#define MACRO_GC_L_R3             134
#define MACRO_GC_L_M1             135
#define MACRO_GC_L_M2             136
#define MACRO_GC_L_M3             137
#define MACRO_GC_L_I1             138
#define MACRO_GC_L_I2             139
#define MACRO_GC_L_I3             140
#define MACRO_GC_L_I4             141
#define MACRO_GC_L_T1             142
#define MACRO_GC_L_T2             143
#define MACRO_GC_L_T3             144
#define MACRO_GC_L_T4             145
#define MACRO_GC_L_T5             146
#define MACRO_GC_R_T5             147
#define MACRO_GC_R_T4             148
#define MACRO_GC_R_T3             149
#define MACRO_GC_R_T2             150
#define MACRO_GC_R_T1             151
#define MACRO_GC_R_I4             152
#define MACRO_GC_R_I3             153
#define MACRO_GC_R_I2             154
#define MACRO_GC_R_I1             155
#define MACRO_GC_R_M3             156
#define MACRO_GC_R_M2             157
#define MACRO_GC_R_M1             158
#define MACRO_GC_R_R3             159
#define MACRO_GC_R_R2             160
#define MACRO_GC_R_R1             161
#define MACRO_GC_R_P4             162
#define MACRO_GC_R_P3             163
#define MACRO_GC_R_P2             164
#define MACRO_GC_R_P1             165
#define MACRO_GC_END              165

#define M_BRTOG M(MACRO_BREATHING_TOGGLE)
#define M_BREN  M(MACRO_BREATHING_ENABLE)
#define M_BRDIS M(MACRO_BREATHING_DISABLE)
#define M_BRINC M(MACRO_BREATHING_SPEED_INC)
#define M_BRDEC M(MACRO_BREATHING_SPEED_DEC)

#define M_CA    M(MACRO_CYR_A)
#define M_CB    M(MACRO_CYR_B)
#define M_CV    M(MACRO_CYR_V)
#define M_CG    M(MACRO_CYR_G)
#define M_CD    M(MACRO_CYR_D)
#define M_CE    M(MACRO_CYR_E)
#define M_CYO   M(MACRO_CYR_YO)
#define M_CZHE  M(MACRO_CYR_ZHE)
#define M_CZ    M(MACRO_CYR_Z)
#define M_CI    M(MACRO_CYR_I)
#define M_CIY   M(MACRO_CYR_IY)
#define M_CK    M(MACRO_CYR_K)
#define M_CL    M(MACRO_CYR_L)
#define M_CM    M(MACRO_CYR_M)
#define M_CN    M(MACRO_CYR_N)
#define M_CO    M(MACRO_CYR_O)
#define M_CP    M(MACRO_CYR_P)
#define M_CR    M(MACRO_CYR_R)
#define M_CS    M(MACRO_CYR_S)
#define M_CT    M(MACRO_CYR_T)
#define M_CU    M(MACRO_CYR_U)
#define M_CF    M(MACRO_CYR_F)
#define M_CH    M(MACRO_CYR_H)
#define M_CC    M(MACRO_CYR_C)
#define M_CCHE  M(MACRO_CYR_CHE)
#define M_CSHA  M(MACRO_CYR_SHA)
#define M_CSCHA M(MACRO_CYR_SCHA)
#define M_CHARD M(MACRO_CYR_HARD)
#define M_CYI   M(MACRO_CYR_YI)
#define M_CSOFT M(MACRO_CYR_SOFT)
#define M_CYE   M(MACRO_CYR_YE)
#define M_CYU   M(MACRO_CYR_YU)
#define M_CYA   M(MACRO_CYR_YA)

#define M_L_P1  M(MACRO_GC_L_P1)
#define M_L_P2  M(MACRO_GC_L_P2)
#define M_L_P3  M(MACRO_GC_L_P3)
#define M_L_P4  M(MACRO_GC_L_P4)
#define M_L_R1  M(MACRO_GC_L_R1)
#define M_L_R2  M(MACRO_GC_L_R2)
#define M_L_R3  M(MACRO_GC_L_R3)
#define M_L_M1  M(MACRO_GC_L_M1)
#define M_L_M2  M(MACRO_GC_L_M2)
#define M_L_M3  M(MACRO_GC_L_M3)
#define M_L_I1  M(MACRO_GC_L_I1)
#define M_L_I2  M(MACRO_GC_L_I2)
#define M_L_I3  M(MACRO_GC_L_I3)
#define M_L_I4  M(MACRO_GC_L_I4)
#define M_L_T1  M(MACRO_GC_L_T1)
#define M_L_T2  M(MACRO_GC_L_T2)
#define M_L_T3  M(MACRO_GC_L_T3)
#define M_L_T4  M(MACRO_GC_L_T4)
#define M_L_T5  M(MACRO_GC_L_T5)
#define M_R_T5  M(MACRO_GC_R_T5)
#define M_R_T4  M(MACRO_GC_R_T4)
#define M_R_T3  M(MACRO_GC_R_T3)
#define M_R_T2  M(MACRO_GC_R_T2)
#define M_R_T1  M(MACRO_GC_R_T1)
#define M_R_I4  M(MACRO_GC_R_I4)
#define M_R_I3  M(MACRO_GC_R_I3)
#define M_R_I2  M(MACRO_GC_R_I2)
#define M_R_I1  M(MACRO_GC_R_I1)
#define M_R_M3  M(MACRO_GC_R_M3)
#define M_R_M2  M(MACRO_GC_R_M2)
#define M_R_M1  M(MACRO_GC_R_M1)
#define M_R_R3  M(MACRO_GC_R_R3)
#define M_R_R2  M(MACRO_GC_R_R2)
#define M_R_R1  M(MACRO_GC_R_R1)
#define M_R_P4  M(MACRO_GC_R_P4)
#define M_R_P3  M(MACRO_GC_R_P3)
#define M_R_P2  M(MACRO_GC_R_P2)
#define M_R_P1  M(MACRO_GC_R_P1)

#define GC_L_P1 (1ULL<<0)
#define GC_L_P2 (1ULL<<1)
#define GC_L_P3 (1ULL<<2)
#define GC_L_P4 (1ULL<<3)
#define GC_L_R1 (1ULL<<4)
#define GC_L_R2 (1ULL<<5)
#define GC_L_R3 (1ULL<<6)
#define GC_L_M1 (1ULL<<7)
#define GC_L_M2 (1ULL<<8)
#define GC_L_M3 (1ULL<<9)
#define GC_L_I1 (1ULL<<10)
#define GC_L_I2 (1ULL<<11)
#define GC_L_I3 (1ULL<<12)
#define GC_L_I4 (1ULL<<13)
#define GC_L_T1 (1ULL<<14)
#define GC_L_T2 (1ULL<<15)
#define GC_L_T3 (1ULL<<16)
#define GC_L_T4 (1ULL<<17)
#define GC_L_T5 (1ULL<<18)
#define GC_R_T1 (1ULL<<19)
#define GC_R_T2 (1ULL<<20)
#define GC_R_T3 (1ULL<<21)
#define GC_R_T4 (1ULL<<22)
#define GC_R_T5 (1ULL<<23)
#define GC_R_I1 (1ULL<<24)
#define GC_R_I2 (1ULL<<25)
#define GC_R_I3 (1ULL<<26)
#define GC_R_I4 (1ULL<<27)
#define GC_R_M1 (1ULL<<28)
#define GC_R_M2 (1ULL<<29)
#define GC_R_M3 (1ULL<<30)
#define GC_R_R1 (1ULL<<31)
#define GC_R_R2 (1ULL<<32)
#define GC_R_R3 (1ULL<<33)
#define GC_R_P1 (1ULL<<34)
#define GC_R_P2 (1ULL<<35)
#define GC_R_P3 (1ULL<<36)
#define GC_R_P4 (1ULL<<37)

#define SFT_CAP TD(0)

qk_tap_dance_action_t tap_dance_actions[] = {
        [0]  = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_CAPS)
};

uint64_t chord = 0ULL;
uint64_t chord_pressed = 0ULL;

uint8_t chord_mods = 0;

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
    MT(MOD_LALT, KC_ESC),  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    TT(NUM), \
    MT(MOD_LCTL, KC_TAB),  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
    SFT_CAP,     KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, MT(MOD_RSFT, KC_ENT), \
    MT(MOD_RALT, COMP),    KC_INS,  KC_DEL,  KC_LGUI, TO_LWR,  KC_BSPC, KC_SPC,  TO_RSE,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT \
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
  TG_GC,   M_BRTOG, M_BREN,  M_BRDIS, _______, KC_NLCK, KC_KP_7, KC_KP_8, KC_KP_9, KC_PPLS, KC_PSLS, _______, \
  _______, M_BRINC, M_BRDEC, _______, _______, _______, KC_KP_4, KC_KP_5, KC_KP_6, KC_PMNS, KC_PAST, _______, \
  _______, _______, _______, _______, _______, _______, KC_KP_1, KC_KP_2, KC_KP_3, KC_KP_0, KC_PDOT, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ \
),

/* Cyrillic
 * ,-----------------------------------------------------------------------------------.
 * |      |   Й  |   Ц  |   У  |   К  |   Е  |   Н  |   Г  |   Ш  |   Щ  |   З  |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |   Ф  |   Ы  |   В  |   А  |   П  |   Р  |   О  |   Л  |   Д  |   Ж  |   Э  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |   Я  |   Ч  |   С  |   М  |   И  |   Т  |   Ь  |   Б  |   Ю  |   .  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */

[CYR] = KEYMAP( \
  _______, M_CIY,   M_CC,    M_CU,    M_CK,    M_CE,    M_CN,    M_CG,    M_CSHA,  M_CSCHA, M_CZ,    _______, \
  _______, M_CF,    M_CYI,   M_CV,    M_CA,    M_CP,    M_CR,    M_CO,    M_CL,    M_CD,    M_CZHE,  M_CYE, \
  _______, M_CYA,   M_CCHE,  M_CS,    M_CV,    M_CI,    M_CT,    M_CSOFT, M_CB,    M_CYU,   KC_DOT,  _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ \
),

/* Goldcrest
 * ,-----------------------------------------------------------------------------------.
 * |      |      |   R1 |   M1 |   I1 |   I3 |   I3 |   I1 |   M1 |   R1 |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |   P1 |   P3 |   R2 |   M2 |   I2 |   I4 |   I4 |   I2 |   M2 |   R2 |   P3 |   P1 |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |   P2 |   P4 |   R3 |   M3 |   T2 |   T4 |   T4 |   T2 |   M3 |   R3 |   P4 |   P2 |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |   T1 |   T3 |   T5 |   T5 |   T3 |   T1 |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */

[GOLDCREST] = KEYMAP( \
  _______, _______, M_L_R1,  M_L_M1,  M_L_I1,  M_L_I3,  M_R_I3,  M_R_I1,  M_R_M1,  M_R_R1,  _______, _______, \
  M_L_P1,  M_L_P3,  M_L_R2,  M_L_M2,  M_L_I2,  M_L_I4,  M_R_I4,  M_R_I2,  M_R_M2,  M_R_R2,  M_R_P3,  M_R_P1, \
  M_L_P2,  M_L_P4,  M_L_R3,  M_L_M3,  M_L_T2,  M_L_T4,  M_R_T4,  M_R_T2,  M_R_M3,  M_R_R3,  M_R_P4,  M_R_P2, \
  _______, _______, _______, M_L_T1,  M_L_T3,  M_L_T5,  M_R_T5,  M_R_T3,  M_R_T1,  _______, _______, _______ \
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

uint64_t translate_to_bits(uint8_t id)
{
    return 1ULL << (id - MACRO_GC_START);
}

void process_special(uint16_t idx)
{
    switch(idx)
    {
    case CHORD_MODS_GUI:
        register_code(KC_LGUI);
        chord_mods |= MOD_LGUI;
        break;
    case CHORD_MODS_CTL:
        register_code(KC_LCTL);
        chord_mods |= MOD_LCTL;
        break;
    case CHORD_MODS_CTL_GUI:
        register_code(KC_LGUI);
        chord_mods |= MOD_LGUI;
        register_code(KC_LCTL);
        chord_mods |= MOD_LCTL;
        break;
    case CHORD_MODS_SFT:
        register_code(KC_LSFT);
        chord_mods |= MOD_LSFT;
        break;
    case CHORD_MODS_SFT_GUI:
        register_code(KC_LGUI);
        chord_mods |= MOD_LGUI;
        register_code(KC_LSFT);
        chord_mods |= MOD_LSFT;
        break;
    case CHORD_MODS_SFT_CTL:
        register_code(KC_LCTL);
        chord_mods |= MOD_LCTL;
        register_code(KC_LSFT);
        chord_mods |= MOD_LSFT;
        break;
    case CHORD_MODS_SFT_CTL_GUI:
        register_code(KC_LGUI);
        chord_mods |= MOD_LGUI;
        register_code(KC_LCTL);
        chord_mods |= MOD_LCTL;
        register_code(KC_LSFT);
        chord_mods |= MOD_LSFT;
        break;
    case CHORD_MODS_ALT:
        register_code(KC_LALT);
        chord_mods |= MOD_LALT;
        break;
    case CHORD_MODS_ALT_GUI:
        register_code(KC_LGUI);
        chord_mods |= MOD_LGUI;
        register_code(KC_LALT);
        chord_mods |= MOD_LALT;
        break;
    case CHORD_MODS_ALT_CTL:
        register_code(KC_LCTL);
        chord_mods |= MOD_LCTL;
        register_code(KC_LALT);
        chord_mods |= MOD_LALT;
        break;
    case CHORD_MODS_ALT_CTL_GUI:
        register_code(KC_LGUI);
        chord_mods |= MOD_LGUI;
        register_code(KC_LCTL);
        chord_mods |= MOD_LCTL;
        register_code(KC_LALT);
        chord_mods |= MOD_LALT;
        break;
    case CHORD_MODS_ALT_SFT:
        register_code(KC_LSFT);
        chord_mods |= MOD_LSFT;
        register_code(KC_LALT);
        chord_mods |= MOD_LALT;
        break;
    case CHORD_MODS_ALT_SFT_GUI:
        register_code(KC_LGUI);
        chord_mods |= MOD_LGUI;
        register_code(KC_LSFT);
        chord_mods |= MOD_LSFT;
        register_code(KC_LALT);
        chord_mods |= MOD_LALT;
        break;
    case CHORD_MODS_ALT_SFT_CTL:
        register_code(KC_LCTL);
        chord_mods |= MOD_LCTL;
        register_code(KC_LSFT);
        chord_mods |= MOD_LSFT;
        register_code(KC_LALT);
        chord_mods |= MOD_LALT;
        break;
    case CHORD_MODS_ALT_SFT_CTL_GUI:
        register_code(KC_LGUI);
        chord_mods |= MOD_LGUI;
        register_code(KC_LCTL);
        chord_mods |= MOD_LCTL;
        register_code(KC_LSFT);
        chord_mods |= MOD_LSFT;
        register_code(KC_LALT);
        chord_mods |= MOD_LALT;
        break;
    default:
        break;
    }
}

void undo_mods(void)
{
    if (chord_mods & MOD_LGUI)
        unregister_code(KC_LGUI);
    if (chord_mods & MOD_LCTL)
        unregister_code(KC_LCTL);
    if (chord_mods & MOD_LSFT)
        unregister_code(KC_LSFT);
    if (chord_mods & MOD_LALT)
        unregister_code(KC_LALT);
    chord_mods = 0;
}

void process_pair(uint16_t idx)
{
    if (idx < CHORD_SPECIAL)
        send_string(chords[idx]);
    else
        process_special(idx);
}

uint8_t thumb_mode_pr(uint16_t thumb)
{
    if ((thumb == CHORD_THUMB_CAP1) ||
        (thumb == CHORD_THUMB_CAP12))
        return MAP_LAT_CAPS;
    if ((thumb == CHORD_THUMB_MODS) ||
        (thumb == CHORD_THUMB_SYMB_MODS) ||
        (thumb == CHORD_THUMB_NAV))
        return MAP_MODS;
    if (thumb == CHORD_THUMB_SYMB)
        return MAP_SYMB;
    return MAP_LAT;
}

uint8_t thumb_mode_mi(uint16_t thumb)
{
    if ((thumb == CHORD_THUMB_CAP2) ||
        (thumb == CHORD_THUMB_CAP12))
        return MAP_LAT_CAPS;
    if ((thumb == CHORD_THUMB_SYMB) ||
        (thumb == CHORD_THUMB_SYMB_MODS))
        return MAP_SYMB;
    if (thumb == CHORD_THUMB_NAV)
        return MAP_NAV;
    return MAP_LAT;
}

const macro_t *process_chord(uint64_t chord)
{
    uint8_t left_pr_idx = pgm_read_byte(&(left_pr_chord_to_id[((chord & (0x7fULL << 0)) >> 0)]));
    uint8_t left_mi_idx = pgm_read_byte(&(left_mi_chord_to_id[((chord & (0x7fULL << 7)) >> 7)]));
    uint8_t left_thumb_idx = pgm_read_byte(&(left_thumb_chord_to_id[((chord & (0x1fULL << 14)) >> 14)]));
    uint8_t right_thumb_idx = pgm_read_byte(&(right_thumb_chord_to_id[((chord & (0x1fULL << 19)) >> 19)]));
    uint8_t right_mi_idx = pgm_read_byte(&(right_mi_chord_to_id[((chord & (0x7fULL << 24)) >> 24)]));
    uint8_t right_pr_idx = pgm_read_byte(&(right_pr_chord_to_id[((chord & (0x7fULL << 31)) >> 31)]));

    uint16_t left_thumb  = pgm_read_word(&(thumb_chords[left_thumb_idx]));
    uint16_t right_thumb = pgm_read_word(&(thumb_chords[right_thumb_idx]));
    
    uint8_t left_pr_map_idx = thumb_mode_pr(left_thumb);
    uint8_t left_mi_map_idx = thumb_mode_mi(left_thumb);
    
    uint8_t right_pr_map_idx = thumb_mode_pr(right_thumb);
    uint8_t right_mi_map_idx = thumb_mode_mi(right_thumb);

    uint16_t left_pr  = pgm_read_word(&(pr_map[left_pr_map_idx][left_pr_idx]));
    uint16_t left_mi  = pgm_read_word(&(mi_map[left_mi_map_idx][left_mi_idx]));
    uint16_t right_pr = pgm_read_word(&(pr_map[right_pr_map_idx][right_pr_idx]));
    uint16_t right_mi = pgm_read_word(&(mi_map[right_mi_map_idx][right_mi_idx]));

    process_pair(left_pr);
    process_pair(left_mi);
    undo_mods();
    process_pair(right_pr);
    process_pair(right_mi);
    undo_mods();
    return MACRO_NONE;
}


const macro_t *goldcrest_process(uint8_t id, uint8_t pressed)
{
    uint64_t bit = translate_to_bits(id);
    const macro_t *res;

    if (pressed)
    {
        chord |= bit;
        chord_pressed |= bit;
        return MACRO_NONE;
    }
    else
    {
        chord_pressed &= ~bit;
        if (chord_pressed == 0ULL)
        {
            res = process_chord(chord);
            chord = 0ULL;
            return res;
        }
        return MACRO_NONE;
    }
}


const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{

  // MACRODOWN only works in this function
  switch(id)
  {
#ifdef BACKLIGHT_BREATHING
      case MACRO_BREATHING_TOGGLE:
          if (record->event.pressed)
          {
#ifdef USE_I2C
              i2c_cmd(CMD_BREATHING_TOGGLE);
#endif
              breathing_toggle();
          }
          break;
      case MACRO_BREATHING_ENABLE:
          if (record->event.pressed)
          {
#ifdef USE_I2C
              i2c_cmd(CMD_BREATHING_ENABLE);
#endif
              breathing_enable();
          }
          break;
      case MACRO_BREATHING_DISABLE:
          if (record->event.pressed)
          {
#ifdef USE_I2C
              i2c_cmd(CMD_BREATHING_DISABLE);
#endif
              breathing_disable();
          }
          break;
      case MACRO_BREATHING_SPEED_INC:
          if (record->event.pressed)
          {
#ifdef USE_I2C
              i2c_cmd(CMD_BREATHING_SPEED_INC_1);
#endif
              breathing_speed_inc(1);
          }
          break;
      case MACRO_BREATHING_SPEED_DEC:
          if (record->event.pressed)
          {
#ifdef USE_I2C
              i2c_cmd(CMD_BREATHING_SPEED_DEC_1);
#endif
              breathing_speed_dec(1);
          }
          break;
#endif//BACKLIGHT_BREATHING
      case MACRO_CYR_A:
          return (record->event.pressed ? MACRO( T(APP), T(C), T(O), T(S), T(A), END ) : MACRO_NONE);
      case MACRO_CYR_B:
          return (record->event.pressed ? MACRO( T(APP), T(C), T(O), T(S), T(B), END ) : MACRO_NONE);
      case MACRO_CYR_V:
          return (record->event.pressed ? MACRO( T(APP), T(C), T(O), T(S), T(V), END ) : MACRO_NONE);
      case MACRO_CYR_G:
          return (record->event.pressed ? MACRO( T(APP), T(C), T(O), T(S), T(T), END ) : MACRO_NONE);
      case MACRO_CYR_D:
          return (record->event.pressed ? MACRO( T(APP), T(C), T(O), T(S), T(G), END ) : MACRO_NONE);
      case MACRO_CYR_E:
          return (record->event.pressed ? MACRO( T(APP), T(C), T(O), T(S), T(K), END ) : MACRO_NONE);
      case MACRO_CYR_YO:
          return (record->event.pressed ? MACRO( T(APP), T(C), T(O), T(S), T(O), T(SCLN), END ) : MACRO_NONE);
      case MACRO_CYR_ZHE:
          return (record->event.pressed ? MACRO( T(APP), T(C), T(O), T(S), T(Y), END ) : MACRO_NONE);
      case MACRO_CYR_Z:
          return (record->event.pressed ? MACRO( T(APP), T(C), T(O), T(S), T(Z), END ) : MACRO_NONE);
      case MACRO_CYR_I:
          return (record->event.pressed ? MACRO( T(APP), T(C), T(O), T(S), T(L), END ) : MACRO_NONE);
      case MACRO_CYR_IY:
          return (record->event.pressed ? MACRO( T(APP), T(C), T(O), T(S), T(O), T(O), END ) : MACRO_NONE);
      case MACRO_CYR_K:
          return (record->event.pressed ? MACRO( T(APP), T(C), T(O), T(S), T(N), END ) : MACRO_NONE);
      case MACRO_CYR_L:
          return (record->event.pressed ? MACRO( T(APP), T(C), T(O), T(S), T(U), END ) : MACRO_NONE);
      case MACRO_CYR_M:
          return (record->event.pressed ? MACRO( T(APP), T(C), T(O), T(S), T(M), END ) : MACRO_NONE);
      case MACRO_CYR_N:
          return (record->event.pressed ? MACRO( T(APP), T(C), T(O), T(S), T(J), END ) : MACRO_NONE);
      case MACRO_CYR_O:
          return (record->event.pressed ? MACRO( T(APP), T(C), T(O), T(S), T(SCLN), END ) : MACRO_NONE);
      case MACRO_CYR_P:
          return (record->event.pressed ? MACRO( T(APP), T(C), T(O), T(S), T(R), END ) : MACRO_NONE);
      case MACRO_CYR_R:
          return (record->event.pressed ? MACRO( T(APP), T(C), T(O), T(S), T(S), END ) : MACRO_NONE);
      case MACRO_CYR_S:
          return (record->event.pressed ? MACRO( T(APP), T(C), T(O), T(S), T(D), END ) : MACRO_NONE);
      case MACRO_CYR_T:
          return (record->event.pressed ? MACRO( T(APP), T(C), T(O), T(S), T(F), END ) : MACRO_NONE);
      case MACRO_CYR_U:
          return (record->event.pressed ? MACRO( T(APP), T(C), T(O), T(S), T(I), END ) : MACRO_NONE);
      case MACRO_CYR_F:
          return (record->event.pressed ? MACRO( T(APP), T(C), T(O), T(S), T(E), END ) : MACRO_NONE);
      case MACRO_CYR_H:
          return (record->event.pressed ? MACRO( T(APP), T(C), T(O), T(S), T(H), END ) : MACRO_NONE);
      case MACRO_CYR_C:
          return (record->event.pressed ? MACRO( T(APP), T(C), T(O), T(S), T(C), END ) : MACRO_NONE);
      case MACRO_CYR_CHE:
          return (record->event.pressed ? MACRO( T(APP), T(C), T(O), T(S), T(Q), END ) : MACRO_NONE);
      case MACRO_CYR_SHA:
          return (record->event.pressed ? MACRO( T(APP), T(C), T(O), T(S), T(W), END ) : MACRO_NONE);
      case MACRO_CYR_SCHA:
          return (record->event.pressed ? MACRO( T(APP), T(C), T(O), T(S), T(X), END ) : MACRO_NONE);
      case MACRO_CYR_HARD:
          return (record->event.pressed ? MACRO( T(APP), T(C), T(O), T(S), T(O), T(X), END ) : MACRO_NONE);
      case MACRO_CYR_YI:
          return (record->event.pressed ? MACRO( T(APP), T(C), T(O), T(S), T(O), T(Q), END ) : MACRO_NONE);
      case MACRO_CYR_SOFT:
          return (record->event.pressed ? MACRO( T(APP), T(C), T(O), T(S), T(O), T(W), END ) : MACRO_NONE);
      case MACRO_CYR_YE:
          return (record->event.pressed ? MACRO( T(APP), T(C), T(O), T(S), T(O), T(K), END ) : MACRO_NONE);
      case MACRO_CYR_YU:
          return (record->event.pressed ? MACRO( T(APP), T(C), T(O), T(S), T(O), T(I), END ) : MACRO_NONE);
      case MACRO_CYR_YA:
          return (record->event.pressed ? MACRO( T(APP), T(C), T(O), T(S), T(O), T(A), END ) : MACRO_NONE);
      case MACRO_GC_START...MACRO_GC_END:
          return goldcrest_process(id, record->event.pressed);
      default:
          break;
  }
  return MACRO_NONE;
}
