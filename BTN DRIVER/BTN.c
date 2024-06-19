/*
 * BTN.c
 *
 * Created: 6/10/2024 7:00:52 PM
 *  Author: Mina-Nasser
 */ 
#include "BTN.h"


void BTN_init(u8 btn_Pin,u8 btn_Port){
	DIO_init(btn_Pin,btn_Port,0);
}
void BTN_read(u8 btn_Pin,u8 btn_Port,u8 *value){
	DIO_read(btn_Pin,btn_Port,value);
}