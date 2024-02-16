#include<stdint.h>
extern long* _stack_top;
extern int main(void);
void Reset_Handler(void);
void Default_Handler(void)
{
	Reset_Handler();
}
void NMI_Handler(void) __attribute__((weak, alias("Default_Handler")));;
void HardFault_Handler(void)__attribute__((weak, alias("Default_Handler")));;
void MMFault_Handler(void)__attribute__((weak, alias("Default_Handler")));;
void BusFault_Handler(void)__attribute__((weak, alias("Default_Handler")));;
void UsageFault_Handler(void)__attribute__((weak, alias("Default_Handler")));;
uint32_t vectors[] __attribute__((section(".vectors")))={
	(uint32_t) &_stack_top,
	(uint32_t) &NMI_Handler,
	(uint32_t) &HardFault_Handler,
	(uint32_t) &MMFault_Handler,
	(uint32_t) &BusFault_Handler,
	(uint32_t) &UsageFault_Handler	
};
extern uint32_t _E_TEXT;
extern uint32_t _S_DATA;
extern uint32_t _E_DATA;
extern uint32_t _S_bss;
extern uint32_t _E_bss;

void Reset_Handler()
{ 
	uint32_t i=0;
	/*Copy Data from ROM to RAM*/
	uint32_t Data_Size = (uint8_t *)&_S_DATA -(uint8_t *)&_E_DATA; 
	uint8_t * P_src=(uint8_t*)&_E_TEXT;
	uint8_t * P_des=(uint8_t*)&_S_DATA;
	for(i=0;i<Data_Size;i++)
		*(P_des++)=*(P_src++);
	/*Init .bss*/
	uint32_t bss_size= (uint8_t*)&_E_bss-(uint8_t*)&_S_bss;
	P_des=(uint8_t*)_S_bss;
	for(i=0;i<bss_size;i++)
		*(P_des++)=(uint8_t)0;
	
	main();
}