/*
 * Client.c
 *
 *  Created on: 16 Feb 2024
 *      Author: Ahmed Sherif
 */
#include<stdio.h>
#include "FIFO.h"
#include"LIFO.h"
int main()
{
	LIFO_Buffer_t buff;
	uint8_t arr[10];
	uint8_t item=5;
	printf("Initialize Error Status is %d \n", LIFO_Init(&buff, arr, 10));
	for (int i =0; i < 11; i++)
	{
		printf("Pushing number %d status-->%d\n",i,LIFO_Push(&buff,i));
	}
	printf("------------------------------------------------------------\n");
	for (int i =0; i < 11; i++)
	{
		 LIFO_Pop(&buff,&item);
		printf("Popping:%d status-->\n",item);
	}
	return 0;
}
