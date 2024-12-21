/*
 * UART.h
 *
 * Created: 2/26/2024 9:57:04 AM
 *  Author: Rana Mahmoud
 */ 


#ifndef UART_H_
#define UART_H_

void UART_Init();
void UART_Send(u8 data);
u8 UART_Receive();
u8 UART_ReceivePeriodic(u8 *data);

void UART_RX_InterruptEnable(void);
void UART_RX_InterruptDisble(void);

void UART_TX_InterruptEnable(void);
void UART_TX_InterruptDisble(void);

void UART_RX_SetCallBack(void(*LocalFptr)(void));
void UART_TX_SetCallBack(void(*LocalFptr)(void));


void UART_SendNoBlock(u8 data);
u8 UART_ReceiveNoBlock();

void UART_sendString(u8 *str);
void UART_receiveString(u8 *str);
#endif /* UART_H_ */