/*
 * DIO.c
 *
 * Created: 6/10/2024 4:37:39 PM
 *  Author: Mina-Nasser
 */ 
#include "DIO.h"


void DIO_init(u8 pin_Num,u8 port_Num,u8 direction){
	switch(port_Num){
		case PORT_A:
			if (direction == IN){DDRA &= ~(1<<pin_Num);}
			else if(direction == OUT){DDRA |= (1<<pin_Num);}
			else{}
		break;
		case PORT_B:
			if (direction == IN){DDRB &= ~(1<<pin_Num);}
			else if(direction == OUT){DDRB |= (1<<pin_Num);}
			else{}
		break;
		case PORT_C:
			if (direction == IN){DDRC &= ~(1<<pin_Num);}
			else if(direction == OUT){DDRC |= (1<<pin_Num);}
			else{}
		break;
		case PORT_D:
			if (direction == IN){DDRD &= ~(1<<pin_Num);}
			else if(direction == OUT){DDRD |= (1<<pin_Num);}
			else{}
		break;
	}
}
void DIO_write(u8 pin_Num,u8 port_Num,u8 value){
	switch(port_Num){
		case PORT_A:
		if (value == LOW){PORTA &= ~(1<<pin_Num);}
		else if(value == HIGH){PORTA |= (1<<pin_Num);}
		else{}
		break;
		case PORT_B:
		if (value == LOW){PORTB &= ~(1<<pin_Num);}
		else if(value == HIGH){PORTB |= (1<<pin_Num);}
		else{}
		break;
		case PORT_C:
		if (value == LOW){PORTC &= ~(1<<pin_Num);}
		else if(value == HIGH){PORTC |= (1<<pin_Num);}
		else{}
		break;
		case PORT_D:
		if (value == LOW){PORTD &= ~(1<<pin_Num);}
		else if(value == HIGH){PORTD |= (1<<pin_Num);}
		else{}
		break;
	}
}

void DIO_toggle(u8 pin_Num,u8 port_Num){
	switch(port_Num){
		case PORT_A:
			PORTA ^= (1<<pin_Num);
		break;
		case PORT_B:
			PORTB ^= (1<<pin_Num);
		break;
		case PORT_C:
			PORTC ^= (1<<pin_Num);
		break;
		case PORT_D:
			PORTD ^= (1<<pin_Num);
		break;
	}
}

void DIO_read(u8 pin_Num,u8 port_Num,u8 *value){
	switch(port_Num){
		case PORT_A:
			*value = (PINA&(1<<pin_Num))>>pin_Num;
		break;
		case PORT_B:
			*value = (PINB&(1<<pin_Num))>>pin_Num;
		break;
		case PORT_C:
			*value = (PINC&(1<<pin_Num))>>pin_Num;
		break;
		case PORT_D:
			*value = (PIND&(1<<pin_Num))>>pin_Num;
		break;
	}
}
