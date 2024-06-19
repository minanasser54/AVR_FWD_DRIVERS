/*
 * TIMER.h
 *
 * Created: 6/11/2024 12:54:24 AM
 *  Author: Mina-Nasser
 */ 


#ifndef TIMER_H_
#define TIMER_H_
#include <math.h>
typedef unsigned char u8;

#define INTERNAL_CLK_FREQ 1000000

#define TCCR0 *((volatile u8 *) 0x53 )
#define TCNT0 *((volatile u8 *) 0x52 )
#define TIFR *((volatile u8 *) 0x58 )
#define OCR0 *((volatile u8 *) 0x5C )



void TIMER_init(void);
void TIMER_stop(void);
void TIMER_start_no_prescaler(void);
void TIMER_start_256(void);
void DELAY_1ms(void);
void DELAY_ms(int ms);

#endif /* TIMER_H_ */