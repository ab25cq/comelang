#include <trykernel.h>
#include "device.h"
#include "..\i2c\dev_i2c.h"
#include "..\adc\dev_adc.h"

/* デバイス登録テーブル*/
T_DEV_DEF   dev_tbl[DEV_NUM] = {
    {"iica", 0, 0, 0, dev_i2c_open, dev_i2c_read, dev_i2c_write},   // I2C0
    {"iicb", 1, 0, 0, dev_i2c_open, dev_i2c_read, dev_i2c_write},   // I2C1
    {"adca", 0, 0, 0, dev_adc_open, dev_adc_read, 0},               // ADC
};
