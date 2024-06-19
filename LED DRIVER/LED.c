/*
 * LED.c
 *
 * Created: 6/10/2024 6:31:39 PM
 *  Author: Mina-Nasser
 */ 
#include "LED.h"

void LED_on(u8 led_Pin,u8 led_Port){
	DIO_write(led_Pin,led_Port,1);
}
void LED_off(u8 led_Pin,u8 led_Port){
		DIO_write(led_Pin,led_Port,0);
}
void LED_toggle(u8 led_Pin,u8 led_Port){
	DIO_toggle(led_Pin,led_Port);
}
void LED_init(u8 led_Pin,u8 led_Port){
	DIO_init(led_Pin,led_Port,OUT);
}