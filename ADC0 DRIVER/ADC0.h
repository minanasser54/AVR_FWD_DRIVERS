/*
 * ADC.h
 *
 * Created: 6/15/2024 4:51:30 PM
 *  Author: Mina-Nasser
 */ 


#ifndef ADC0_H_
#define ADC0_H_

#include "../DIO DRIVER/DIO.h"
#define VREF 5
#define ADC_STEP VREF/1024.0

typedef unsigned short u16;


#define ADMUX *((volatile u8 *) 0x27 )
#define ADCSRA *((volatile u8 *) 0x26 )
#define ADCH *((volatile u8 *) 0x25 )
#define ADCL *((volatile u8 *) 0x24 )

#define ADC_CH_0  0

void ADC0_init(void);
float ADC0_read(void);


#endif /* ADC_H_ */