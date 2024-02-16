/*
 * LIFO.c
 *
 *  Created on: 16 Feb 2024
 *      Author: Ahmed Sherif
 */
#include"LIFO.h"
#include <stdio.h>
LIFO_Status LIFO_Init(LIFO_Buffer_t * buff, ELEMENT_TYPE * arr, uint8_t length){
	LIFO_Status status = LIFO_NOERROR;
	if (arr == NULL || buff == NULL)
		status = LIFO_NULL;
	else if (length <= 1)
		status = LIFO_INVALID_LENGTH;
	else{
		buff -> base = arr;
		buff -> head = arr;
		buff -> count = 0;
		buff -> length = length;
	}
	return status;
}
LIFO_Status LIFO_Push(LIFO_Buffer_t * buff, ELEMENT_TYPE item ){
	LIFO_Status status = LIFO_NOERROR;
	if (buff == NULL)
		status = LIFO_NULL;
	else if (buff -> count == buff -> length)
		status = LIFO_FULL;
	else{
		buff -> count ++;
		*(buff -> head) = item;
		buff -> head++;
	}
	return status;
}
LIFO_Status LIFO_Pop(LIFO_Buffer_t * buff, ELEMENT_TYPE* item ){
	LIFO_Status status = LIFO_NOERROR;
	if (buff == NULL)
		status = LIFO_NULL;
	else if (buff -> count == 0)
		status =LIFO_EMPTY;
	else{
		buff -> count --;
		buff -> head --;
		*item = *(buff -> head);
	}
	return status;
}
