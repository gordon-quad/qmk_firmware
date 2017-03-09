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

#ifndef _TCA9555_H_
#define _TCA9555_H_

#define I2CD I2CD2
#define I2C_PORT GPIOB
#define I2C_SCL GPIOB_I2C2_SCL
#define I2C_SDA GPIOB_I2C2_SDA

#define TCA9555_SLAVE_ADDRESS 0x27

#define TCA9555_INPUT0 0x00
#define TCA9555_INPUT1 0x01
#define TCA9555_OUTPUT0 0x02
#define TCA9555_OUTPUT1 0x03
#define TCA9555_POLARITY0 0x04
#define TCA9555_POLARITY1 0x05
#define TCA9555_CONFIG0 0x06
#define TCA9555_CONFIG1 0x07

void tca9555_init(void);
bool tca9555_write(uint8_t reg, uint8_t data);
int32_t tca9555_read(uint8_t reg);

#endif//_TCA9555_H_
