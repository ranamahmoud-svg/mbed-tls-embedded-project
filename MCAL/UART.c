/*
 * UART.c
 *
 * Created: 2/26/2024 9:57:04 AM
 *  Author: Rana Mahmoud
 */ 
#include "StdTypes.h"
#include "MemMap.h"
#include "Utils.h"

void UART_Init()
{
	/*  9600 Baud rate 8M clock */
	UBRRL=51;
	/* frame */
	/* 8 Bit data No parity 1 stop bit */
	CLR_BIT(UCSRA,U2X); // normal speed
	SET_BIT(UCSRB,TXEN); // Enable TX
	SET_BIT(UCSRB,RXEN); // Enable RX
}
void UART_Send(u8 data)
{
	while(!READ_BIT(UCSRA,UDRE)); //send data using busy wait design
	UDR=data;
}

u8 UART_Receive()
{
	while(!READ_BIT(UCSRA,RXC)); //Receive data using busy wait design
	return UDR;
}

u8 UART_ReceivePeriodic(u8 *data)
{
	if(READ_BIT(UCSRA,RXC)) //Receive data using Periodic check design
	{
		*data=UDR;
		return 1;
	}
	return 0;
}


void UART_SendNoBlock(u8 data)
{
	UDR=data;
}
u8 UART_ReceiveNoBlock()
{
	return UDR;
}
void UART_sendString(u8 *str)
{
	u8 i;
	for(i=0;str[i];i++)
	{
		UART_Send(str[i]);
	}
	//UART_Send('#');
}

void UART_receiveString(u8 *str)
{
	u8 i=0;
	str[i]= UART_Receive();
	for(;str[i]!=13;)
	{
		i++;
		str[i]= UART_Receive();
	}
	str[i]=0;
}


