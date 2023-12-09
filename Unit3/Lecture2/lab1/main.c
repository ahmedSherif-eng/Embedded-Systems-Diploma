#include "UART.h"
char * myName="Learn in depth: Ahmed Sherif";
void main()
{
	UART_vSendString(myName);
}