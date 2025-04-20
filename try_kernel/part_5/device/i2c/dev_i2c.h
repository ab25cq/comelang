#ifndef DEV_I2C_H
#define DEV_I2C_H

extern ER dev_i2c_open(UW unit, UINT omode);
extern ER dev_i2c_read(UW unit, UW sadr, UB *buf, SZ size, SZ *asize);
extern ER dev_i2c_write(UW unit, UW sadr, UB *buf, SZ size, SZ *asize);

#endif /* DEV_I2C_H */