/*
 * Platform_Types.h
 *
 *  Created on: Dec 2, 2023
 *      Author: Ahmed Sherif
 */

#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_
/***************************CPU Architecture Types**************************/
#define CPU_TYPE_8	8
#define CPU_TYPE_16	16
#define CPU_TYPE_32	32
#define CPU_TYPE_64	64
/*************************************************************************************************/
/************************************ STM32 ****************************************************/
#define CPU_TYPE	CPU_TYPE_32
#define CPU_BIT_ORDER       MSB_FIRST
#define CPU_BYTE_ORDER      HIGH_BYTE_FIRST
/*************************************************************************************************/
/************************************ Endianess ****************************************************/
#define LITTLE_ENDIAN	1
#define LSB_FIRST		1
#define BIG_ENDIAN		0
#define MSB_FIRST		0
#define HIGH_BYTE_FIRST 0
#define LOW_BYTE_FIRST  1
/*********************************************************************************************/
/************************************TYPES****************************************************/
typedef unsigned char		boolean;
typedef unsigned char		uint8_t;
typedef signed char			sint8_t;
typedef unsigned short 		uint16_t;
typedef signed short		sint16_t;
typedef unsigned int 		uint32_t;
typedef signed int			sint32_t;
typedef signed long long	sint64_t;
typedef unsigned long long 	uint64_t;
typedef float				float32_t;
typedef double				float64_t;
/*********************************************************************************************/
/************************************Volatile Types****************************************************/
typedef volatile sint8_t		 vint8_t;
typedef volatile uint8_t 	 vuint8_t;
typedef volatile sint16_t 	 vint16_t;
typedef volatile uint16_t	 vuint16_t;
typedef volatile sint32_t 	 vint32_t;
typedef volatile uint32_t 	 vuint32_t;
typedef volatile sint64_t 	 vint64_t;
typedef volatile uint64_t 	 vuint64_t;
/*********************************************************************************************/
/************************************Boolean Types****************************************************/
#ifndef TRUE
#define TRUE	1
#endif
#ifndef FALSE
#define FALSE 	0
#endif
#endif /* PLATFORM_TYPES_H_ */
