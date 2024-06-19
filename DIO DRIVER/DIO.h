/*
 * DIO.h
 *
 * Created: 6/10/2024 4:37:25 PM
 *  Author: Mina-Nasser
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "DIO_REG.h"
//u8  defined in DIO_REG 

//port names
#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'

//directions
#define IN 0
#define OUT 1

//values 
#define LOW 0
#define HIGH 1

void DIO_init(u8 pin_Num,u8 port_Num,u8 direction);
void DIO_write(u8 pin_Num,u8 port_Num,u8 value);
void DIO_toggle(u8 pin_Num,u8 port_Num);
void DIO_read(u8 pin_Num,u8 port_Num,u8 *value);


#endif /* DIO_H_ */