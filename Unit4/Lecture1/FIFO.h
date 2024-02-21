/*
 * FIFO.h
 *
 *  Created on: 16 Feb 2024
 *      Author: Ahmed Sherif
 */

#ifndef FIFO_H_
#define FIFO_H_
#include <stdint.h>
#define ELEMENT_TYPE	uint8_t
typedef struct{
	uint8_t length;
	uint8_t count;
	ELEMENT_TYPE * base;
	ELEMENT_TYPE * tail;
	ELEMENT_TYPE * head;
}FIFO_Buffer_t;
typedef enum{
	FIFO_NOERROR,
	FIFO_NULL,
	FIFO_EMPTY,
	FIFO_INVALID_LENGTH,
	FIFO_FULL
}FIFO_Status;
FIFO_Status FIFO_Init(FIFO_Buffer_t * buff, ELEMENT_TYPE * arr, uint8_t length);
FIFO_Status FIFO_Enqueue(FIFO_Buffer_t * buff, ELEMENT_TYPE item );
FIFO_Status FIFO_Dequeue(FIFO_Buffer_t * buff, ELEMENT_TYPE* item );
#endif /* FIFO_H_ */
