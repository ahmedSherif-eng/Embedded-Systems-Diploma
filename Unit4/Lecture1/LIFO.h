/*
 * LIFO.h
 *
 *  Created on: 16 Feb 2024
 *      Author: Ahmed Sherif
 */

#ifndef LIFO_H_
#define LIFO_H_
#include <stdint.h>
#define ELEMENT_TYPE	uint8_t
typedef struct{
	uint8_t length;
	uint8_t count;
	ELEMENT_TYPE * base;
	ELEMENT_TYPE * head;
}LIFO_Buffer_t;
typedef enum{
	LIFO_NOERROR,
	LIFO_NULL,
	LIFO_EMPTY,
	LIFO_INVALID_LENGTH,
	LIFO_FULL
}LIFO_Status;
LIFO_Status LIFO_Init(LIFO_Buffer_t * buff, ELEMENT_TYPE * arr, uint8_t length);
LIFO_Status LIFO_Push(LIFO_Buffer_t * buff, ELEMENT_TYPE item );
LIFO_Status LIFO_Pop(LIFO_Buffer_t * buff, ELEMENT_TYPE* item );


#endif /* LIFO_H_ */
