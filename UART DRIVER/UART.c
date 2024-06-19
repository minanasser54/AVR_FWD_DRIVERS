/*
 * UART.c
 *
 * Created: 6/16/2024 9:45:37 PM
 *  Author: Mina-Nasser
 */ 
#include "UART.h"
#include <string.h>

void UART_init( unsigned int baud )
{
	/* Set baud rate */
	UBRRH = (unsigned char)(baud>>8);
	UBRRL = (unsigned char)baud;
	/* Enable receiver and transmitter */
	UCSRB = (1<<4)|(1<<3);
	/* Set frame format: 8data, 2stop bit */
	UCSRC = (1<<7)|(1<<3)|(3<<1);
}
void UART_transmit_char( unsigned char data )
{
	/* Wait for empty transmit buffer */
	while ( !( UCSRA & (1<<5)) )
	;
	/* Put data into buffer, sends the data */
	UDR = data;
}
unsigned char UART_receive_char( void )
{
	/* Wait for data to be received */
	while ( !(UCSRA & (1<<7)) )
	;
	/* Get and return received data from buffer */
	return UDR;
}

void getCommand(char *str,u8 maxLen){
	char c;
	short i;
	for(i =0;i<maxLen;i++){
		c = UART_receive_char();
		if(c=='\n' || c=='\r'){ break;
		}
		else str[i]=c;
		UART_transmit_char(c);
		
	}
	
}
void printstr(char *str){
	while(*str){
		UART_transmit_char(*str);
		str++;
	}}


