/*
 * TIMER.c
 *
 * Created: 6/11/2024 12:54:13 AM
 *  Author: Mina-Nasser
 */ 

#include "TIMER.h"


void TIMER_init(void){
	TCCR0 = 0x00;
	TCNT0 = 0x00;
}
void TIMER_stop(void){
	TCCR0 = 0x00;
	TCNT0 = 0x00;
}
void TIMER_start_no_prescaler(void){
	TCCR0 |= (1<<0);
}
void TIMER_start_256(void){
	TCCR0 |= 0x04;
}
void TIMER_start_64(void){
	TCCR0 |= 0x03;
}
void DELAY_1ms(void){
	OCR0 = ceil((0.001*INTERNAL_CLK_FREQ)/64);
	TIMER_start_64();
	while((TIFR & (1<<1))==0);
	TIFR |= (1<<1);
	TIMER_stop();
}
void DELAY_ms(int ms){
	int start = 0 ;
	while (start < ms){
		DELAY_1ms();
		start=start+1;
	}
}