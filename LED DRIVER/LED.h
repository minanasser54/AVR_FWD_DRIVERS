/*
 * LED.h
 *
 * Created: 6/10/2024 6:31:27 PM
 *  Author: Mina-Nasser
 */ 


#ifndef LED_H_
#define LED_H_

//Note using this Driver Needs Correct including our DIO Driver
#include "../DIO DRIVER/DIO.h"

void LED_on(u8 led_Pin,u8 led_Port);
void LED_off(u8 led_Pin,u8 led_Port);
void LED_toggle(u8 led_Pin,u8 led_Port);
void LED_init(u8 led_Pin,u8 led_Port);


#endif /* LED_H_ */