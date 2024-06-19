/*
 * ADC.c
 *
 * Created: 6/15/2024 4:51:20 PM
 *  Author: Mina-Nasser
 */ 
#include "ADC0.h"

void ADC0_init(void){
	DIO_init(0,PORT_A,IN);  //adc0 input
	ADMUX |= (1<<6);   //choose adc0 , single ended , avcc ref ,adjust right
	ADCSRA |= (1<<7);  //  presacler2 ,no interrupts
}

float ADC0_read(void){
	u16 D_value=0,temp_value=0;
	float A_value=0.0;
	ADMUX |= (ADC_CH_0 & 0x0F);
	ADCSRA |= (1<<6); 
	while((ADCSRA&(1<<4))==0 ){
		temp_value=ADCL + (ADCH<<8);
		if (temp_value != 0 )
		{
			D_value=temp_value;
		}
	}
	A_value=D_value*ADC_STEP;
	return A_value;
}