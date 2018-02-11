#ifndef SPLIT_KEYBOARD_UTIL_H
#define SPLIT_KEYBOARD_UTIL_H

#include <stdbool.h>
#include "eeconfig.h"

#define SLAVE_I2C_ADDRESS                   0x32

#define CMD_NONE                            0x00
#define CMD_BACKLIGHT_INCREASE              0x01
#define CMD_BACKLIGHT_DECREASE              0x02
#define CMD_BACKLIGHT_TOGGLE                0x03
#define CMD_BACKLIGHT_STEP                  0x04
#define CMD_BACKLIGHT_LEVEL_0               0x10
#define CMD_BACKLIGHT_LEVEL_1               0x11
#define CMD_BACKLIGHT_LEVEL_2               0x12
#define CMD_BACKLIGHT_LEVEL_3               0x13
#define CMD_BACKLIGHT_LEVEL_4               0x14
#define CMD_BACKLIGHT_LEVEL_5               0x15
#define CMD_BACKLIGHT_LEVEL_6               0x16
#define CMD_BACKLIGHT_LEVEL_7               0x17
#define CMD_BACKLIGHT_LEVEL_8               0x18
#define CMD_BACKLIGHT_LEVEL_9               0x19
#define CMD_BACKLIGHT_LEVEL_10              0x1a
#define CMD_BACKLIGHT_LEVEL_11              0x1b
#define CMD_BACKLIGHT_LEVEL_12              0x1c
#define CMD_BACKLIGHT_LEVEL_13              0x1d
#define CMD_BACKLIGHT_LEVEL_14              0x1e
#define CMD_BACKLIGHT_LEVEL_15              0x1f

#define CMD_BREATHING_ENABLE                0x05
#define CMD_BREATHING_DISABLE               0x06
#define CMD_BREATHING_SELF_DISABLE          0x07
#define CMD_BREATHING_TOGGLE                0x08
#define CMD_BREATHING_PERIOD_DEFAULT        0x09
#define CMD_BREATHING_INTENSITY_DEFAULT     0x0a

#define CMD_BREATHING_PERIOD_SET_0          0x20
#define CMD_BREATHING_PERIOD_SET_1          0x21
#define CMD_BREATHING_PERIOD_SET_2          0x22
#define CMD_BREATHING_PERIOD_SET_3          0x23
#define CMD_BREATHING_PERIOD_SET_4          0x24
#define CMD_BREATHING_PERIOD_SET_5          0x25
#define CMD_BREATHING_PERIOD_SET_6          0x26
#define CMD_BREATHING_PERIOD_SET_7          0x27
#define CMD_BREATHING_PERIOD_SET_8          0x28
#define CMD_BREATHING_PERIOD_SET_9          0x29
#define CMD_BREATHING_PERIOD_SET_10         0x2a
#define CMD_BREATHING_PERIOD_SET_11         0x2b
#define CMD_BREATHING_PERIOD_SET_12         0x2c
#define CMD_BREATHING_PERIOD_SET_13         0x2d
#define CMD_BREATHING_PERIOD_SET_14         0x2e
#define CMD_BREATHING_PERIOD_SET_15         0x2f

#define CMD_BREATHING_PERIOD_INC            0x30

#define CMD_BREATHING_PERIOD_DEC            0x40


extern volatile bool isLeftHand;

// slave version of matix scan, defined in matrix.c
void matrix_slave_scan(void);

void split_keyboard_setup(void);
bool has_usb(void);
void keyboard_slave_loop(void);

void matrix_master_OLED_init (void);

#endif
