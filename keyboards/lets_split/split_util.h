#ifndef SPLIT_KEYBOARD_UTIL_H
#define SPLIT_KEYBOARD_UTIL_H

#include <stdbool.h>

#ifdef EE_HANDS
	#define EECONFIG_BOOTMAGIC_END      (uint8_t *)10
	#define EECONFIG_HANDEDNESS         EECONFIG_BOOTMAGIC_END
#endif

#define SLAVE_I2C_ADDRESS           0x32

#define CMD_NONE                    0x00
#define CMD_BACKLIGHT_INCREASE      0x01
#define CMD_BACKLIGHT_DECREASE      0x02
#define CMD_BACKLIGHT_TOGGLE        0x03
#define CMD_BACKLIGHT_STEP          0x04
#define CMD_BACKLIGHT_LEVEL_0       0x10
#define CMD_BACKLIGHT_LEVEL_1       0x11
#define CMD_BACKLIGHT_LEVEL_2       0x12
#define CMD_BACKLIGHT_LEVEL_3       0x13
#define CMD_BACKLIGHT_LEVEL_4       0x14
#define CMD_BACKLIGHT_LEVEL_5       0x15
#define CMD_BACKLIGHT_LEVEL_6       0x16
#define CMD_BACKLIGHT_LEVEL_7       0x17
#define CMD_BACKLIGHT_LEVEL_8       0x18
#define CMD_BACKLIGHT_LEVEL_9       0x19
#define CMD_BACKLIGHT_LEVEL_10      0x1a
#define CMD_BACKLIGHT_LEVEL_11      0x1b
#define CMD_BACKLIGHT_LEVEL_12      0x1c
#define CMD_BACKLIGHT_LEVEL_13      0x1d
#define CMD_BACKLIGHT_LEVEL_14      0x1e
#define CMD_BACKLIGHT_LEVEL_15      0x1f

extern volatile bool isLeftHand;

// slave version of matix scan, defined in matrix.c
void matrix_slave_scan(void);

void split_keyboard_setup(void);
bool has_usb(void);
void keyboard_slave_loop(void);

#endif
