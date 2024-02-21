/*
 * FIFO.c
 *
 *  Created on: 16 Feb 2024
 *      Author: Ahmed Sherif
 */

#include <stdio.h>
#include "FIFO.h"
FIFO_Status FIFO_Init(FIFO_Buffer_t * buff, ELEMENT_TYPE * arr, uint8_t length){
	FIFO_Status status = FIFO_NOERROR;
	if (buff == NULL || arr == NULL)
		status = FIFO_NULL;
	else if (length <= 1)
		status =FIFO_INVALID_LENGTH;
	else{
		buff -> base = arr;
		buff -> head = arr;
		buff -> tail = arr;
		buff -> count = 0;
		buff -> length = length;
	}
	return status;
}
FIFO_Status FIFO_Enqueue(FIFO_Buffer_t * buff, ELEMENT_TYPE item ){
	FIFO_Status status = FIFO_NOERROR;
	if (buff == NULL || buff -> base == NULL || buff -> head == NULL || buff -> tail == NULL)
		status = FIFO_NULL;
	else if (buff -> length <= 1)
		status = FIFO_INVALID_LENGTH;
	else if  (buff -> count == buff -> length)
		status = FIFO_FULL;
	else
	{
		buff -> count +=1;
		*buff  -> head  = item;
		if (buff -> head == buff -> base + ((buff -> length - 1) * sizeof(ELEMENT_TYPE)))
			buff -> head = buff -> base;
		else
			buff -> head ++;
	}
return status;
}
FIFO_Status FIFO_Dequeue(FIFO_Buffer_t * buff, ELEMENT_TYPE* item ){
	FIFO_Status status = FIFO_NOERROR;
		if (buff == NULL || buff -> base == NULL || buff -> head == NULL || buff -> tail == NULL)
			status = FIFO_NULL;
		else if (buff -> length <= 1)
			status = FIFO_INVALID_LENGTH;
		else if  (buff -> count == 0)
			status = FIFO_EMPTY;
		else
		{
			buff -> count -=1;
			*item = *buff -> tail;
			if (buff -> tail == buff -> base + ((buff -> length - 1) * sizeof(ELEMENT_TYPE)))
				buff -> tail = buff -> base;
			else
				buff -> tail += 1;
		}
	return status;
}
