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

}
FIFO_Status FIFO_Dequeue(FIFO_Buffer_t * buff, ELEMENT_TYPE* item ){

}
