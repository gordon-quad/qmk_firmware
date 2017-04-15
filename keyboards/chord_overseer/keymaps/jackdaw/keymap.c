#include "debug.h"
#include "action_layer.h"
#include "action_util.h"
#include "keymap_extras/keymap_french.h"
#include "lookup_tables/shelton_tables.h"
#include "lookup_tables/misc_tables.h"
#include "lookup_tables/user_tables.h"

#include "chord_overseer.h"

// Layer indexes
#define LAYER_STENO 0

// Macro indexes
#define STENO 0

// Keys family
enum key_family
{
    FAMILY_UNKNOWN,
    FAMILY_SPECIAL_CONTROLS,
    FAMILY_CASE_CONTROLS,
    FAMILY_LEFT_USER_SYMBOLS,
    FAMILY_LEFT_HAND,
    FAMILY_THUMBS,
    FAMILY_RIGHT_HAND,
    FAMILY_RIGHT_PINKY,
    FAMILY_LEFT_NUMBERS,
    FAMILY_RIGHT_NUMBERS,
    FAMILY_RIGHT_USER_SYMBOLS,
    FAMILY_SPACES,
    NB_FAMILY
};

// Bit to identify a steno key
#define STENO_BIT (1L << 31) 

// 3 bits for star and the plus key
#define OFFSET_SPECIAL_CONTROLS 0
#define SC_STAR (0 | (FAMILY_SPECIAL_CONTROLS << 4) | STENO_BIT)
#define SC_PLUS (1 | (FAMILY_SPECIAL_CONTROLS << 4) | STENO_BIT)
#define SC_MSPC (2 | (FAMILY_SPECIAL_CONTROLS << 4) | STENO_BIT) // META SPACE = No space key, Backspace when used with SC_STAR, space key otherwise

// 8 bits for the left hand
#define OFFSET_LEFT_HAND 3
#define L_N (0 | (FAMILY_LEFT_HAND << 4) | STENO_BIT)
#define L_R (1 | (FAMILY_LEFT_HAND << 4) | STENO_BIT)
#define L_W (2 | (FAMILY_LEFT_HAND << 4) | STENO_BIT)
#define L_H (3 | (FAMILY_LEFT_HAND << 4) | STENO_BIT)
#define L_C (4 | (FAMILY_LEFT_HAND << 4) | STENO_BIT)
#define L_T (5 | (FAMILY_LEFT_HAND << 4) | STENO_BIT)
#define L_A (6 | (FAMILY_LEFT_HAND << 4) | STENO_BIT)
#define L_S (7 | (FAMILY_LEFT_HAND << 4) | STENO_BIT)

// 5 bits for thumbs
#define OFFSET_THUMBS 11
#define T_E (0 | (FAMILY_THUMBS << 4) | STENO_BIT)
#define T_O (1 | (FAMILY_THUMBS << 4) | STENO_BIT)
#define T_A (2 | (FAMILY_THUMBS << 4) | STENO_BIT)
#define T_U (3 | (FAMILY_THUMBS << 4) | STENO_BIT)
#define T_I (4 | (FAMILY_THUMBS << 4) | STENO_BIT)

// 8 bits for the right hand
#define OFFSET_RIGHT_HAND 16
#define R_R (0 | (FAMILY_RIGHT_HAND << 4) | STENO_BIT)
#define R_N (1 | (FAMILY_RIGHT_HAND << 4) | STENO_BIT)
#define R_L (2 | (FAMILY_RIGHT_HAND << 4) | STENO_BIT)
#define R_G (3 | (FAMILY_RIGHT_HAND << 4) | STENO_BIT)
#define R_C (4 | (FAMILY_RIGHT_HAND << 4) | STENO_BIT)
#define R_H (5 | (FAMILY_RIGHT_HAND << 4) | STENO_BIT)
#define R_T (6 | (FAMILY_RIGHT_HAND << 4) | STENO_BIT)
#define R_S (7 | (FAMILY_RIGHT_HAND << 4) | STENO_BIT)

// 3 bits for E and Y and S
#define OFFSET_RIGHT_PINKY 24
#define RP_E  (0 | (FAMILY_RIGHT_PINKY << 4) | STENO_BIT)
#define RP_Y  (1 | (FAMILY_RIGHT_PINKY << 4) | STENO_BIT)
#define RP_S  (2 | (FAMILY_RIGHT_PINKY << 4) | STENO_BIT)

// 2 bits for space control keys
#define OFFSET_SPACE_CONTROLS 27
#define S_TAB  (0 | (FAMILY_SPACES << 4) | STENO_BIT)
#define S_ENT  (1 | (FAMILY_SPACES << 4) | STENO_BIT)

// 2 bits for case control keys (upper case, initial case)
#define OFFSET_CASE_CONTROLS 29
#define C_UC  (0 | (FAMILY_CASE_CONTROLS << 4) | STENO_BIT)
#define C_IC  (1 | (FAMILY_CASE_CONTROLS << 4) | STENO_BIT)

// 6 bits for left user symbols
#define OFFSET_LEFT_USER_SYMBOLS 0
#define USRL_0  (0 | (FAMILY_LEFT_USER_SYMBOLS << 4) | STENO_BIT)
#define USRL_1  (1 | (FAMILY_LEFT_USER_SYMBOLS << 4) | STENO_BIT)
#define USRL_2  (2 | (FAMILY_LEFT_USER_SYMBOLS << 4) | STENO_BIT)
#define USRL_3  (3 | (FAMILY_LEFT_USER_SYMBOLS << 4) | STENO_BIT)
#define USRL_4  (4 | (FAMILY_LEFT_USER_SYMBOLS << 4) | STENO_BIT)
#define USRL_5  (5 | (FAMILY_LEFT_USER_SYMBOLS << 4) | STENO_BIT)

// 6 bits for right user symbols
#define OFFSET_RIGHT_USER_SYMBOLS 6
#define USRR_0  (0 | (FAMILY_RIGHT_USER_SYMBOLS << 4) | STENO_BIT)
#define USRR_1  (1 | (FAMILY_RIGHT_USER_SYMBOLS << 4) | STENO_BIT)
#define USRR_2  (2 | (FAMILY_RIGHT_USER_SYMBOLS << 4) | STENO_BIT)
#define USRR_3  (3 | (FAMILY_RIGHT_USER_SYMBOLS << 4) | STENO_BIT)
#define USRR_4  (4 | (FAMILY_RIGHT_USER_SYMBOLS << 4) | STENO_BIT)
#define USRR_5  (5 | (FAMILY_RIGHT_USER_SYMBOLS << 4) | STENO_BIT)

// 5 bits for left numbers
#define OFFSET_LEFT_NUMBERS 12
#define NL_B0  (0 | (FAMILY_LEFT_NUMBERS << 4) | STENO_BIT)
#define NL_B1  (1 | (FAMILY_LEFT_NUMBERS << 4) | STENO_BIT)
#define NL_B2  (2 | (FAMILY_LEFT_NUMBERS << 4) | STENO_BIT)
#define NL_B3  (3 | (FAMILY_LEFT_NUMBERS << 4) | STENO_BIT)
#define NL_N0  (4 | (FAMILY_LEFT_NUMBERS << 4) | STENO_BIT)

// 5 bits for right numbers
#define OFFSET_RIGHT_NUMBERS 17
#define NR_B0  (0 | (FAMILY_RIGHT_NUMBERS << 4) | STENO_BIT)
#define NR_B1  (1 | (FAMILY_RIGHT_NUMBERS << 4) | STENO_BIT)
#define NR_B2  (2 | (FAMILY_RIGHT_NUMBERS << 4) | STENO_BIT)
#define NR_B3  (3 | (FAMILY_RIGHT_NUMBERS << 4) | STENO_BIT)
#define NR_N0  (4 | (FAMILY_RIGHT_NUMBERS << 4) | STENO_BIT)

// Table to convert family id to bit offset
const uint8_t g_family_to_bit_offset[NB_FAMILY] =
{
    0,
    OFFSET_SPECIAL_CONTROLS,
    OFFSET_CASE_CONTROLS,
    OFFSET_LEFT_USER_SYMBOLS,
    OFFSET_LEFT_HAND,
    OFFSET_THUMBS,
    OFFSET_RIGHT_HAND,
    OFFSET_RIGHT_PINKY,
    OFFSET_LEFT_NUMBERS,
    OFFSET_RIGHT_NUMBERS,
    OFFSET_RIGHT_USER_SYMBOLS,
    OFFSET_SPACE_CONTROLS
};

// A lookup table can stores letters (8 bits) or symbols (16 bits)
enum kind_table
{
    KIND_UNKNOWN,
    KIND_LETTERS,
    KIND_SYMBOLS,
    KIND_PUNCTUATIONS
};

const uint8_t g_family_to_kind_table[NB_FAMILY] =
{
    KIND_UNKNOWN,
    KIND_UNKNOWN,
    KIND_UNKNOWN,
    KIND_SYMBOLS,
    KIND_LETTERS,
    KIND_LETTERS,
    KIND_LETTERS,
    KIND_LETTERS,
    KIND_SYMBOLS,
    KIND_SYMBOLS,
    KIND_SYMBOLS,
    KIND_SYMBOLS
};

// Global vars for the steno layer
uint32_t g_bits_keys_pressed_part1 = 0;
uint32_t g_bits_keys_pressed_part2 = 0;

uint32_t* g_family_to_keys_pressed[NB_FAMILY] = 
{
    &g_bits_keys_pressed_part1,
    &g_bits_keys_pressed_part1,
    &g_bits_keys_pressed_part1,
    &g_bits_keys_pressed_part2,
    &g_bits_keys_pressed_part1,
    &g_bits_keys_pressed_part1,
    &g_bits_keys_pressed_part1,
    &g_bits_keys_pressed_part1,
    &g_bits_keys_pressed_part2,
    &g_bits_keys_pressed_part2,
    &g_bits_keys_pressed_part2,
    &g_bits_keys_pressed_part1
};

uint8_t g_family_bits[NB_FAMILY] = {0};
typedef const uint8_t letters_table_t[MAX_LETTERS];
typedef const uint16_t symbols_table_t[MAX_SYMBOLS];
typedef const uint16_t punctuations_table_t[MAX_PUNCTUATIONS];
void* g_all_tables[NB_FAMILY] = 
{
    0,
    0,
    0,
    g_left_user_symbols_table,
    g_left_hand_table,
    g_thumbs_table,
    g_right_hand_table,
    g_right_pinky_table,
    g_left_numbers,
    g_right_numbers,
    g_right_user_symbols_table,
    g_spaces_ctl_table
};

#define MAX_UNDO 100
typedef struct 
{
    uint8_t inserted_chars_count    :8;
    uint8_t left_arrow_count        :3;
} undo_command_t;
bool can_undo(undo_command_t undo) { return (undo.inserted_chars_count > 0) || (undo.left_arrow_count > 0);}
undo_command_t g_undo_stack[MAX_UNDO] = { {0} };
int8_t g_undo_stack_index = 0;

// Steno keymap
const uint32_t PROGMEM g_steno_keymap[2][MATRIX_ROWS][MATRIX_COLS] = {

// BASE STENO MAP
KEYMAP(
                NL_B0, NL_B1,   S_ENT,  SC_PLUS,          SC_PLUS, NL_B2, NL_B3, NR_N0,
          C_UC, L_A,   L_C,     L_W,    L_N,     SC_MSPC, R_R,     R_L,   R_C,   R_T,   RP_E,
          C_IC, L_S,   L_T,     L_H,    L_R,     SC_MSPC, R_N,     R_G,   R_H,   R_S,   RP_Y,
                       SC_PLUS, T_E,    T_O,     SC_STAR, T_A,     T_U
),

// SHIFT STENO MAP (when C_IC or C_UC are pressed)
KEYMAP(
    0, 0, 0, 0,    0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0
)

// CYR STENO MAP
KEYMAP(
                NL_B0,    NL_B1,      S_ENT,     SC_PLUS,             SC_PLUS,    NL_B2,    NL_B3,    NR_N0,
          C_UC, L_RU_O,   L_RU_P,     L_RU_T,    L_RU_V,     SC_MSPC, R_RU_K,     R_RU_T,   R_RU_P,   RP_RU_I,   RP_RU_A,
          C_IC, L_RU_S,   L_RU_K,     L_RU_N,    L_RU_R,     SC_MSPC, R_RU_S,     R_RU_N,   R_RU_R,   RP_RU_E,   RP_RU_O,
                          SC_PLUS,    T_RU_I,    T_RU_A,     SC_STAR, T_RU_E,     T_RU_O
),

// SHIFT STENO MAP (when C_IC or C_UC are pressed)
KEYMAP(
    0, 0, 0, 0,    0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0
)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// If it accepts an argument (i.e, is a function), it doesn't need KC_.
// Otherwise, it needs KC_*


// STENO LAYER
#define ST_ON M(STENO)
[LAYER_STENO] = KEYMAP(
        ST_ON, ST_ON, ST_ON, ST_ON,        ST_ON, ST_ON, ST_ON, ST_ON,
 ST_ON, ST_ON, ST_ON, ST_ON, ST_ON, ST_ON, ST_ON, ST_ON, ST_ON, ST_ON, ST_ON,
 ST_ON, ST_ON, ST_ON, ST_ON, ST_ON, ST_ON, ST_ON, ST_ON, ST_ON, ST_ON, ST_ON,
               ST_ON, ST_ON, ST_ON, ST_ON, ST_ON, ST_ON
),

};

const uint16_t PROGMEM fn_actions[] = 
{ 
};

bool can_stroke(void) { return (g_bits_keys_pressed_part1 == 0) && (g_bits_keys_pressed_part2 == 0); }

void send_mods_and_code(uint8_t mods, uint8_t code)
{
    const uint8_t original_mods = get_mods();
    set_mods(mods);
    register_code(code);
    set_mods(original_mods);
}

bool is_letter(uint8_t code)
{
    return (code >= KC_A) && (code <= KC_Z);
}

void stroke(void)
{
    // Send characters for each key family
    const uint8_t original_mods = get_mods();
    del_mods(MOD_LSFT|MOD_RSFT);
    bool initial_case_1 = false;
    bool initial_case_2 = false;
    undo_command_t new_undo_command;
    new_undo_command.inserted_chars_count = 0;
    new_undo_command.left_arrow_count = 0;

    // Get *, + and case controls info
    const uint8_t special_controls_bits = g_family_bits[FAMILY_SPECIAL_CONTROLS];
    const uint8_t thumbs_bits = g_family_bits[FAMILY_THUMBS];
    const bool has_right_consonant = g_family_bits[FAMILY_RIGHT_HAND] != 0;
    const bool has_star = special_controls_bits & (1 << (SC_STAR & 0xF));
    const bool has_plus = special_controls_bits & (1 << (SC_PLUS & 0xF));
    const bool has_meta_space = special_controls_bits & (1 << (SC_MSPC & 0xF));
    const uint8_t case_controls_bits = g_family_bits[FAMILY_CASE_CONTROLS];
    if (case_controls_bits)
    {
        initial_case_1 = case_controls_bits == 2;
        initial_case_2 = case_controls_bits == 3;
        add_mods(MOD_LSFT);
    }

    // Evaluate stroke
    bool undo_allowed = true;
    bool no_space_code_detected = false;
    for (int family_id = 0; family_id < NB_FAMILY; ++family_id)
    {
        uint8_t family_bits = g_family_bits[family_id];
        if (family_bits == 0)
        {
            continue;
        }

        // Get the lookup table
        undo_allowed = family_id == FAMILY_SPECIAL_CONTROLS;
        void* any_table = 0;
        uint8_t kind = g_family_to_kind_table[family_id];
        if (family_id == FAMILY_THUMBS && has_star)
        {
            any_table = g_thumbs_bigrams_table;
        }
        else if (family_id == FAMILY_LEFT_HAND && has_star && !thumbs_bits)
        {
            any_table = g_left_punctuations_table;
            kind = KIND_PUNCTUATIONS;
        }
        else if (family_id == FAMILY_RIGHT_HAND && has_star && !thumbs_bits)
        {
            any_table = g_right_punctuations_table;
            kind = KIND_PUNCTUATIONS;
        }
        else
        {
            any_table = g_all_tables[family_id];
        }

        if (any_table)
        {
            switch (kind)
            {
            case KIND_LETTERS:
                {
                    letters_table_t* letters_table = (letters_table_t*)any_table;
                    // Jackdaw rule: If E and Y pressed with vowel - produce YE not EY
                    if ((family_id == FAMILY_RIGHT_PINKY) && (!has_right_consonant) && (family_bits == 0x3))
                    {
                        register_code(_Y);
                        unregister_code(_Y);
                        new_undo_command.inserted_chars_count++;
                        if ((initial_case_1 && new_undo_command.inserted_chars_count == 1) || (initial_case_2 && new_undo_command.inserted_chars_count == 2))
                        {
                            del_mods(MOD_LSFT);
                        }
                        register_code(_E);
                        unregister_code(_E);
                        new_undo_command.inserted_chars_count++;
                        if ((initial_case_1 && new_undo_command.inserted_chars_count == 1) || (initial_case_2 && new_undo_command.inserted_chars_count == 2))
                        {
                            del_mods(MOD_LSFT);
                        }
                    }
                    else
                    {
                        for (int code_pos = 0; code_pos < MAX_LETTERS; ++code_pos)
                        {
                            const uint8_t byte = letters_table[family_bits][code_pos];
                            if (byte)
                            {
                                register_code(byte);
                                unregister_code(byte);
                                new_undo_command.inserted_chars_count++;
                                
                                // Jackdaw rule: If a 'Q' is detected on the left hand followed by a thumb vowel => add a 'U'
                                if (byte == _Q && thumbs_bits)
                                {
                                    register_code(_U);
                                    unregister_code(_U);
                                    new_undo_command.inserted_chars_count++;
                                }
                                
                                // Jackdaw rule: Double the first letter for the right hand only if + is in the stroke
                                if (has_plus && (family_id == FAMILY_RIGHT_HAND) && !code_pos)
                                {
                                    register_code(byte);
                                    unregister_code(byte);
                                    new_undo_command.inserted_chars_count++;
                                }
                                
                                if ((initial_case_1 && new_undo_command.inserted_chars_count == 1) || (initial_case_2 && new_undo_command.inserted_chars_count == 2))
                                {
                                    del_mods(MOD_LSFT);
                                }
                            }
                        }
                    }
                    break;
                }

            case KIND_SYMBOLS:
                {
                    symbols_table_t* symbols_table = (symbols_table_t*)any_table;
                    for (int code_pos = 0; code_pos < MAX_SYMBOLS; ++code_pos)
                    {
                        const uint16_t word = symbols_table[family_bits][code_pos];
                        if (word)
                        {
                            const uint8_t code = (uint8_t)word;
                            if (is_letter(code))
                            {
                                // By doing this the shift mod can be applied on letter code
                                register_code(code);
                            }
                            else
                            {
                                send_mods_and_code(word >> 8, code);
                            }

                            unregister_code(code);

                            if (code == KC_LEFT)
                            {
                                new_undo_command.left_arrow_count++;
                            }
                            else
                            {
                                new_undo_command.inserted_chars_count++;
                            }

                            if ((initial_case_1 && new_undo_command.inserted_chars_count == 1) || (initial_case_2 && new_undo_command.inserted_chars_count == 2))
                            {
                                del_mods(MOD_LSFT);
                            }
                        }
                        else
                        {
                            break;
                        }
                    }
                    break;
                }
            case KIND_PUNCTUATIONS:
                {
                    punctuations_table_t* punctuations_table = (punctuations_table_t*)any_table;
                    for (int code_pos = 0; code_pos < MAX_PUNCTUATIONS; ++code_pos)
                    {
                        const uint16_t word = punctuations_table[family_bits][code_pos];
                        if (word)
                        {
                            if (word == _NOSPC)
                            {
                                no_space_code_detected = true;
                            }
                            else
                            {
                                const uint8_t code = (uint8_t)word;
                                send_mods_and_code(word >> 8, code);
                                unregister_code(code);

                                if (code == KC_LEFT)
                                {
                                    new_undo_command.left_arrow_count++;
                                }
                                else
                                {
                                    new_undo_command.inserted_chars_count++;
                                }
                            }
                        }
                        else
                        {
                            break;
                        }
                    }
                    break;
                }
            }
        }
    }

    // Send automatically a space after a stroke or send explicitely when SC_MSPC is the only pressed key
    const bool send_space = (new_undo_command.inserted_chars_count > 0 && !has_meta_space) || (new_undo_command.inserted_chars_count == 0 && has_meta_space && !has_star);
    if (send_space && !no_space_code_detected)
    {
        register_code(KC_SPC);
        unregister_code(KC_SPC);
        new_undo_command.inserted_chars_count++;
    }

    if (can_undo(new_undo_command))
    {
        // Undo history
        if (g_undo_stack_index == MAX_UNDO)
        {
            g_undo_stack_index = 0;
        }

        g_undo_stack[g_undo_stack_index++] = new_undo_command;
    }
    else if (has_star)
    {
        // Compute the previous index
        int8_t previous_index = g_undo_stack_index - 1;
        if (previous_index < 0)
        {
            previous_index = MAX_UNDO - 1;
        }

        // Check if we have data to undo at previous_index
        undo_command_t previous_undo_command = g_undo_stack[previous_index];
        if (can_undo(previous_undo_command))
        {
            if (has_meta_space)
            {
                // Metaspace becomes a Backspace
                register_code(KC_BSPC);
                unregister_code(KC_BSPC);
                g_undo_stack[previous_index].inserted_chars_count--; // Patch chars to delete for the next undo

                // If there is no more data to remove at previous_index we can go to the previous stroke undo data 
                if (g_undo_stack[previous_index].inserted_chars_count == 0)
                {
                    g_undo_stack_index = previous_index;
                }
            }
            else if (undo_allowed)
            {
                // Undo motion commands first (only left arrow at the moment)
                if (previous_undo_command.left_arrow_count)
                {
                    for (uint8_t i = 0; i < previous_undo_command.left_arrow_count; ++i)
                    {
                        register_code(KC_RIGHT);
                        unregister_code(KC_RIGHT);
                    }

                    g_undo_stack[previous_index].left_arrow_count = 0;
                }

                // Undo inserted characters
                if (previous_undo_command.inserted_chars_count)
                {
                    for (uint8_t i = 0; i < previous_undo_command.inserted_chars_count; ++i)
                    {
                        register_code(KC_BSPC);
                        unregister_code(KC_BSPC);
                    }

                    g_undo_stack[previous_index].inserted_chars_count = 0;
                }

                g_undo_stack_index = previous_index;
            }
        }
        else if (has_meta_space)
        {
            // No data to remove in the undo stack, but we allow the Metaspace to become a Backspace
            register_code(KC_BSPC);
            unregister_code(KC_BSPC);
        }
    }

    // Restore original mods
    set_mods(original_mods);

    // Clear bits
    for (int i = 0; i < NB_FAMILY; ++i)
    {
        g_family_bits[i] = 0;
    }
}

const macro_t *action_get_macro(keyrecord_t *record, uint8_t macroId, uint8_t opt)
{
    switch (macroId)
    {
    case STENO:
        {
            const uint32_t dword = g_steno_keymap[0][record->event.key.row][record->event.key.col];
            if (dword)
            {
                if (dword & STENO_BIT)
                {
                    const uint32_t bit_key = 1L << (dword & 0x0F);
                    const uint8_t family = (dword >> 4) & 0x0F;
                    const uint8_t family_offset = g_family_to_bit_offset[family];
                    uint32_t* keys_pressed_p = g_family_to_keys_pressed[family];
                    if (record->event.pressed)
                    {
                        if (family == FAMILY_CASE_CONTROLS)
                        {
                            register_code(KC_LSFT);
                        }

                        (*keys_pressed_p) |= (bit_key << family_offset);
                        g_family_bits[family] |= bit_key;
                    }
                    else
                    {
                        (*keys_pressed_p) &= ~(bit_key << family_offset);

                        // Stroke if all steno keys are released
                        if (can_stroke())
                        {
                            stroke();
                        }

                        if (family == FAMILY_CASE_CONTROLS)
                        {
                            unregister_code(KC_LSFT);
                        }
                    }
                }
                else
                {
                    const uint16_t base_word = (uint16_t)dword;
                    const uint8_t base_code = (uint8_t)dword;
                    const uint32_t dword_shift = g_steno_keymap[1][record->event.key.row][record->event.key.col];
                    const uint16_t word_shift = (uint16_t)dword_shift;
                    bool send_shift_code = false;
                    uint8_t shift_code = 0;
                    if (dword_shift)
                    {
                        shift_code = (uint8_t)word_shift;
                        uint32_t* keys_pressed_p = g_family_to_keys_pressed[FAMILY_CASE_CONTROLS];
                        if ((*keys_pressed_p) & ((uint32_t)(3) << OFFSET_CASE_CONTROLS))
                        {
                            send_shift_code = true;
                        }
                    }

                    if (send_shift_code)
                    {
                        if (record->event.pressed)
                        {
                            send_mods_and_code(word_shift >> 8, shift_code);
                        }
                        else
                        {
                            unregister_code(base_code);
                            unregister_code(shift_code);
                        }
                    }
                    else
                    {
                        // Send mods and key code
                        if (record->event.pressed)
                        {
                            send_mods_and_code(base_word >> 8, base_code);
                        }
                        else
                        {
                            unregister_code(base_code);
                            if (shift_code)
                            {
                                unregister_code(shift_code);
                            }
                        }
                    }
                }
            }
            break;
        }
    }
    return MACRO_NONE;
}

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {}

// Runs constantly in the background, in a loop.
void matrix_scan_user(void)
{
    LED_RED_OFF();

    if (!can_stroke())
    {
        LED_RED_ON();
    }
}
