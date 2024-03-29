/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */


#include "Platform_Types.h"
#define SET_BIT(REG,BIT)	REG|=(1<<BIT)
#define CLR_BIT(REG,BIT)	REG&=~(1<<BIT)
#define RCC_BASE 			0x40021000
#define GPIOA_BASE	 		0x40010800
#define RCC_APB2ENR_OFFSET  0x18
#define GPIO_CRH_OFFSET		0x04
#define GPIO_ODR_OFFSET		0x0c
#define	RCC_APB2ENR			*(vuint32_t *)(RCC_BASE+RCC_APB2ENR_OFFSET)
#define GPIO_CRH			*(vuint32_t *)(GPIOA_BASE+GPIO_CRH_OFFSET)
#define GPIO_ODR			*(vuint32_t *)(GPIOA_BASE+GPIO_ODR_OFFSET)
#define RCC_IOPAEN			2
#define GPIOA_CRH_MASK		0xFF0FFFFF
#define PORTA_PIN13			13
unsigned char g_variables[]={1,2,3};
unsigned char const c_variables[]= {1,2,3};
int main(void)
{
	SET_BIT(RCC_APB2ENR,RCC_IOPAEN);
	GPIO_CRH&=GPIOA_CRH_MASK;
	SET_BIT(GPIO_CRH,21);
	while(1)
	{
		uint32_t i=0;
		SET_BIT(GPIO_ODR,PORTA_PIN13);
		for(i=0;i<7000;i++);
		CLR_BIT(GPIO_ODR,13);
		for(i=0;i<7000;i++);
	}
	return 0;
}
