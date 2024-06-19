/*
 * UART.h
 *
 * Created: 6/16/2024 9:45:48 PM
 *  Author: Mina-Nasser
 */ 
//EXAMPLE USE CODE
//#include "UART DRIVER/UART.h"
//int main(void)
//{	char x[10];
	//UART_init(F8_MHZ_9600);
	//while (1)
	//{printstr("\r ENTER :  \r");
		//getCommand(x,10);
		//printstr("DONE \r");
	//printstr(x); }}

#ifndef UART_H_
#define UART_H_

#define F8_MHZ_9600 51
#define F1_MHZ_9600 6

#define u8 unsigned char
#define UBRRH *((volatile u8 *) 0x40 )
#define UBRRL *((volatile u8 *) 0x29 )
#define UCSRB *((volatile u8 *) 0x2A )
#define UCSRC *((volatile u8 *) 0x40 )
#define UCSRA *((volatile u8 *) 0x2B )
#define UDR *((volatile u8 *) 0x2C )


void UART_init( unsigned int baud );
void UART_transmit_char( unsigned char data );
unsigned char UART_receive_char( void );
void getCommand(char *str,u8 maxLen);
void printstr(char *str);

#endif /* UART_H_ */