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
	FIFO_Buffer_t buff;
	ELEMENT_TYPE arr[10];
	ELEMENT_TYPE item=5;
	FIFO_Status status;
	printf("Initialize Error Status is %d \n", FIFO_Init(&buff, arr, 10));
	for (int i =0; i < 10; i++)
	{
		printf("Pushing number %d status-->%d\n",i,FIFO_Enqueue(&buff,i));
	}
	printf("------------------------------------------------------------\n");
	for (int i =0; i < 2; i++)
	{
		status = FIFO_Dequeue(&buff,&item);
		printf("Dequeue:%d status-->%d\n",item,status);
	}
	for (int i =0; i < 3; i++)
	{
		printf("Pushing number %d status-->%d\n",i,FIFO_Enqueue(&buff,i));
	}
	return 0;
}
