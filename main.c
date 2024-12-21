#include "StdTypes.h"
#include "Utils.h"
#include "MemMap.h"
#define  F_CPU  8000000
#include <util/delay.h>
#include "DIO_Interface.h"
#include "UART.h"
#include "sha256_module.h"
#include <string.h>
#include <stdio.h>
int main() {
	u8 input_data[] = "Hello TLS!";
	u8 hash_output[32];
	char hash_hex[65]; // 64 characters + null terminator
	u8 i;
	DIO_Init();
    LCD_Init();
	UART_Init(); // Initialize UART

	//Compute SHA-256 hash
	SHA256_ComputeHash(input_data, strlen((char *)input_data), hash_output);

	// Convert hash to hexadecimal format
	for (i = 0; i < 32; i++) {
		sprintf(&hash_hex[i * 2], "%02X", hash_output[i]);
	}
	hash_hex[64] = '\0'; // Null terminator for the string

	// Send the hash 
	LCD_SetCursor(0,0);
	LCD_WriteString((u8 *)"Input:");
	LCD_WriteString(input_data);
	LCD_SetCursor(1,0);
	LCD_WriteString((u8 *)"Hash:");
	LCD_WriteString((u8 *)hash_hex);
	LCD_WriteString((u8 *)"\n");

	while (1); // Infinite loop to prevent the program from exiting

	
}




