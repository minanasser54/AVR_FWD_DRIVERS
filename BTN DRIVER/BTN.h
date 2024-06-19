/*
 * BTN.h
 *
 * Created: 6/10/2024 7:01:07 PM
 *  Author: Mina-Nasser
 */ 


#ifndef BTN_H_
#define BTN_H_

//Note using this Driver Needs Correct including our DIO Driver
#include "../DIO DRIVER/DIO.h"

void BTN_init(u8 btn_Pin,u8 btn_Port);
void BTN_read(u8 btn_Pin,u8 btn_Port,u8 *value);



#endif /* BTN_H_ */