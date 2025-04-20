#ifndef DEV_ADC_H
#define DEV_ADC_H

extern ER dev_adc_open(UW unit, UINT option);
extern ER dev_adc_read(UW unit, UW ch, UW *buf, SZ size, SZ *asize);

#endif /* DEV_ADC_H */