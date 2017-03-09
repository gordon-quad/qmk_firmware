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

static const I2CConfig i2cfg = {
    OPMODE_I2C,
    50000,
    STD_DUTY_CYCLE,
};

void tca9555_init(void)
{
    i2cStart(&I2CD, &i2cfg);
    palSetPadMode(I2C_PORT, I2C_SDA, PAL_MODE_STM32_ALTERNATE_OPENDRAIN);
    palSetPadMode(I2C_PORT, I2C_SCL, PAL_MODE_STM32_ALTERNATE_OPENDRAIN);
}

bool tca9555_write(uint8_t reg, uint8_t data)
{
    msg_t status = MSG_OK;
    systime_t timeout = MS2ST(5);
    uint8_t tx_data[2];

    tx_data[0] = reg;
    tx_data[1] = data;
    
    i2cAcquireBus(&I2CD);
    status = i2cMasterTransmitTimeout(&I2CD, TCA9555_SLAVE_ADDRESS, tx_data, 2, NULL, 0, timeout);
    i2cReleaseBus(&I2CD);

    return (status == MSG_OK);
}

int32_t tca9555_read(uint8_t reg)
{
    msg_t status = MSG_OK;
    systime_t timeout = MS2ST(5);
    uint8_t res[2];
    
    i2cAcquireBus(&I2CD);
    status = i2cMasterTransmitTimeout(&I2CD, TCA9555_SLAVE_ADDRESS, &reg, 1, res, 2, timeout);
    i2cReleaseBus(&I2CD);

    if (status == MSG_OK)
        return res[0];
    else
        return -1;
}
