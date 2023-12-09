#include"UART.h"
#define  UART0DR 			*((volatile unsigned int*) (0x101f1000))

void UART_vSendString(unsigned char * P_tx_string)
{
	while( *P_tx_string)
	{
		UART0DR= (unsigned int)(*P_tx_string);
		P_tx_string++;
	}
}