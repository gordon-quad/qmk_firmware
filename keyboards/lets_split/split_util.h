#ifndef SPLIT_KEYBOARD_UTIL_H
#define SPLIT_KEYBOARD_UTIL_H

#include <stdbool.h>

#ifdef EE_HANDS
	#define EECONFIG_BOOTMAGIC_END      (uint8_t *)10
	#define EECONFIG_HANDEDNESS         EECONFIG_BOOTMAGIC_END
#endif

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
#define CMD_BREATHING_DEFAULTS              0x09
#define CMD_BREATHING_INTENSITY_DEFAULT     0x0a
#define CMD_BREATHING_SPEED_DEFAULT         0x0b

#define CMD_BREATHING_SPEED_SET_0           0x20
#define CMD_BREATHING_SPEED_SET_1           0x21
#define CMD_BREATHING_SPEED_SET_2           0x22
#define CMD_BREATHING_SPEED_SET_3           0x23
#define CMD_BREATHING_SPEED_SET_4           0x24
#define CMD_BREATHING_SPEED_SET_5           0x25
#define CMD_BREATHING_SPEED_SET_6           0x26
#define CMD_BREATHING_SPEED_SET_7           0x27
#define CMD_BREATHING_SPEED_SET_8           0x28
#define CMD_BREATHING_SPEED_SET_9           0x29
#define CMD_BREATHING_SPEED_SET_10          0x2a
#define CMD_BREATHING_SPEED_SET_11          0x2b
#define CMD_BREATHING_SPEED_SET_12          0x2c
#define CMD_BREATHING_SPEED_SET_13          0x2d
#define CMD_BREATHING_SPEED_SET_14          0x2e
#define CMD_BREATHING_SPEED_SET_15          0x2f

#define CMD_BREATHING_SPEED_INC_0           0x30
#define CMD_BREATHING_SPEED_INC_1           0x31
#define CMD_BREATHING_SPEED_INC_2           0x32
#define CMD_BREATHING_SPEED_INC_3           0x33
#define CMD_BREATHING_SPEED_INC_4           0x34
#define CMD_BREATHING_SPEED_INC_5           0x35
#define CMD_BREATHING_SPEED_INC_6           0x36
#define CMD_BREATHING_SPEED_INC_7           0x37
#define CMD_BREATHING_SPEED_INC_8           0x38
#define CMD_BREATHING_SPEED_INC_9           0x39
#define CMD_BREATHING_SPEED_INC_10          0x3a
#define CMD_BREATHING_SPEED_INC_11          0x3b
#define CMD_BREATHING_SPEED_INC_12          0x3c
#define CMD_BREATHING_SPEED_INC_13          0x3d
#define CMD_BREATHING_SPEED_INC_14          0x3e
#define CMD_BREATHING_SPEED_INC_15          0x3f

#define CMD_BREATHING_SPEED_DEC_0           0x40
#define CMD_BREATHING_SPEED_DEC_1           0x41
#define CMD_BREATHING_SPEED_DEC_2           0x42
#define CMD_BREATHING_SPEED_DEC_3           0x43
#define CMD_BREATHING_SPEED_DEC_4           0x44
#define CMD_BREATHING_SPEED_DEC_5           0x45
#define CMD_BREATHING_SPEED_DEC_6           0x46
#define CMD_BREATHING_SPEED_DEC_7           0x47
#define CMD_BREATHING_SPEED_DEC_8           0x48
#define CMD_BREATHING_SPEED_DEC_9           0x49
#define CMD_BREATHING_SPEED_DEC_10          0x4a
#define CMD_BREATHING_SPEED_DEC_11          0x4b
#define CMD_BREATHING_SPEED_DEC_12          0x4c
#define CMD_BREATHING_SPEED_DEC_13          0x4d
#define CMD_BREATHING_SPEED_DEC_14          0x4e
#define CMD_BREATHING_SPEED_DEC_15          0x4f


extern volatile bool isLeftHand;

// slave version of matix scan, defined in matrix.c
void matrix_slave_scan(void);

void split_keyboard_setup(void);
bool has_usb(void);
void keyboard_slave_loop(void);

#endif
