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

#include "ch.h"
#include "hal.h"

#include "armed64.h"
#include "tca9555.h"

/*
 * scan matrix
 */
#include "print.h"
#include "debug.h"
#include "util.h"
#include "matrix.h"
#include "wait.h"
#include "timer.h"

#ifndef DEBOUNCE
#   define DEBOUNCE 5
#endif

uint8_t right_leds = 0;
uint8_t old_right_leds = 0;

static uint8_t debouncing = false;
static uint16_t debouncing_time;

/* matrix state(1:on, 0:off) */
static matrix_row_t matrix[MATRIX_ROWS];
static matrix_row_t matrix_debouncing[MATRIX_ROWS];

static void init_cols(void);
static void init_rows(void);
static void unselect_cols(void);
static void select_col(uint8_t col);
static void send_leds(uint8_t leds);
static uint8_t read_rows(bool left);
static bool read_rows_on_col(matrix_row_t current_matrix[], uint8_t current_col);


__attribute__ ((weak))
void matrix_init_user(void) {

}

__attribute__ ((weak))
void matrix_scan_user(void) {

}

void matrix_init_kb(void) {
    // put your keyboard start-up code here
    // runs once when the firmware starts up

    matrix_init_user();
}

void matrix_scan_kb(void) {
    // put your looping keyboard code here
    // runs every cycle (a lot)
    
    matrix_scan_user();
}


inline
uint8_t matrix_rows(void)
{
    return MATRIX_ROWS;
}

inline
uint8_t matrix_cols(void)
{
    return MATRIX_COLS;
}

void matrix_init(void)
{
    // initialize row and col
    AFIO->MAPR |= AFIO_MAPR_SWJ_CFG_JTAGDISABLE;

    palSetPadMode(GPIOC, 13,  PAL_MODE_OUTPUT_PUSHPULL);
    palSetPadMode(GPIOC, 14,  PAL_MODE_OUTPUT_PUSHPULL);
    palSetPadMode(GPIOC, 15,  PAL_MODE_OUTPUT_PUSHPULL);

    tca9555_init();
    init_rows();
    init_cols();
    unselect_cols();

    // initialize matrix state: all keys off
    for (uint8_t i=0; i < MATRIX_ROWS; i++) {
        matrix[i] = 0;
        matrix_debouncing[i] = 0;
    }

    //debug
    debug_matrix = true;
    LED_LEFT_2_OFF();
    LED_LEFT_3_OFF();
    LED_LEFT_1_ON();
    wait_ms(500);
    LED_LEFT_1_OFF();
}

uint8_t matrix_scan(void)
{
    for (uint8_t i = 0; i < MATRIX_COLS; i++)
    {
        bool matrix_changed = read_rows_on_col(matrix_debouncing, i);
        if (matrix_changed)
        {
            debouncing = true;
            debouncing_time = timer_read();
        }
    }

    if (debouncing && timer_elapsed(debouncing_time) > DEBOUNCE)
    {
        for (int row = 0; row < MATRIX_ROWS; row++) {
            matrix[row] = matrix_debouncing[row];
        }
        debouncing = false;
    }

    if (old_right_leds != right_leds)
    {
        send_leds(right_leds);
        old_right_leds = right_leds;
    }

    matrix_scan_quantum();

    return 1;
}

inline
bool matrix_is_on(uint8_t row, uint8_t col)
{
    return (matrix[row] & ((matrix_row_t)1<<col));
}

inline
matrix_row_t matrix_get_row(uint8_t row)
{
    return matrix[row];
}

void matrix_print(void)
{
    print("\nr/c 0123456789ABCDEF\n");
    for (uint8_t row = 0; row < MATRIX_ROWS; row++) {
        phex(row); print(": ");
        pbin_reverse16(matrix_get_row(row));
        print("\n");
    }
}

/* Row pin configuration
 */
static void  init_rows(void)
{
    palSetPadMode(GPIOB, 3,  PAL_MODE_INPUT_PULLUP);
    palSetPadMode(GPIOB, 4,  PAL_MODE_INPUT_PULLUP);
    palSetPadMode(GPIOB, 5,  PAL_MODE_INPUT_PULLUP);
    palSetPadMode(GPIOB, 6,  PAL_MODE_INPUT_PULLUP);
    palSetPadMode(GPIOB, 7,  PAL_MODE_INPUT_PULLUP);

    tca9555_write(TCA9555_CONFIG0, 0x1f);
}
/* Column pin configuration
 */
static void  init_cols(void)
{
    palSetPadMode(GPIOA, 0,  PAL_MODE_OUTPUT_PUSHPULL);
    palSetPadMode(GPIOA, 1,  PAL_MODE_OUTPUT_PUSHPULL);
    palSetPadMode(GPIOA, 2,  PAL_MODE_OUTPUT_PUSHPULL);
    palSetPadMode(GPIOA, 3,  PAL_MODE_OUTPUT_PUSHPULL);
    palSetPadMode(GPIOA, 4,  PAL_MODE_OUTPUT_PUSHPULL);
    palSetPadMode(GPIOA, 5,  PAL_MODE_OUTPUT_PUSHPULL);
    palSetPadMode(GPIOA, 6,  PAL_MODE_OUTPUT_PUSHPULL);

    tca9555_write(TCA9555_CONFIG1, 0x00);
}

static bool read_rows_on_col(matrix_row_t current_matrix[], uint8_t current_col)
{
    bool matrix_changed = false;
    
    // Select col and wait for col selecton to stabilize
    select_col(current_col);
    wait_us(30);

    // For each row...
    uint8_t row = read_rows(current_col < 7);
    for(uint8_t row_index = 0; row_index < MATRIX_ROWS; row_index++)
    {
    
        // Store last value of row prior to reading
        matrix_row_t last_row_value = current_matrix[row_index];

        // Check row pin state
        if (!(row & (1 << row_index)))
        {
            // Pin LO, set col bit
            current_matrix[row_index] |= (1 << current_col);
        }
        else
        {
            // Pin HI, clear col bit
            current_matrix[row_index] &= ~(1 << current_col);
        }

        // Determine if the matrix changed state
        if ((last_row_value != current_matrix[row_index]) && !(matrix_changed))
        {
            matrix_changed = true;
        }
    }
        
    // Unselect col
    unselect_cols();

    return matrix_changed;
}


/* Row pin configuration
 */
static void unselect_cols(void)
{
    palSetPad(GPIOA, 0);
    palSetPad(GPIOA, 1);
    palSetPad(GPIOA, 2);
    palSetPad(GPIOA, 3);
    palSetPad(GPIOA, 4);
    palSetPad(GPIOA, 5);
    palSetPad(GPIOA, 6);
    tca9555_write(TCA9555_OUTPUT1, 0xff);
}

static void select_col(uint8_t col)
{
    if (col < 7)
        palClearPad(GPIOA, col);
    else
        tca9555_write(TCA9555_OUTPUT1, ~(1 << (14-col)));
}

static uint8_t read_rows(bool left)
{
    if (left)
        return palReadGroup(GPIOB, 0x1f, 3);
    else
        return tca9555_read(TCA9555_INPUT0) & 0x1f;
}

static void send_leds(uint8_t leds)
{
    tca9555_write(TCA9555_OUTPUT0, ((~leds) & 0x7) << 5);
}
