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

#include "hal.h"
#include "led.h"

#include "armed64.h"


void led_set(uint8_t usb_led)
{
        if (usb_led & (1<<USB_LED_CAPS_LOCK)) {
            LED_LEFT_1_ON();
            LED_RIGHT_1_ON();
        } else {
            LED_LEFT_1_OFF();
            LED_RIGHT_1_OFF();
        }
        if (usb_led & (1<<USB_LED_NUM_LOCK)) {
            LED_LEFT_2_ON();
            LED_RIGHT_2_ON();
        } else {
            LED_LEFT_2_OFF();
            LED_RIGHT_2_OFF();
        }
}
