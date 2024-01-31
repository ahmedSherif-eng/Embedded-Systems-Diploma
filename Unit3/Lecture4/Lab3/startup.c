#include<stdint.h>
extern int main(void);
void Reset_Handler(void);
void Default_Handler(void)
{
	Reset_Handler();
}
void NMI_Handler(void) __attribute__((weak, alias("Default_Handler")));;
void HardFault_Handler(void)__attribute__((weak, alias("Default_Handler")));;

static unsigned long Stack_top[256]; /*reserve 256 *4 bytes = 1024 bytes after bss  */

void(* const vectores[])() __attribute__((section(".vectors")))={
(void (*) ()) ((unsigned long) Stack_top +sizeof(Stack_top))
,&Reset_Handler
,&NMI_Handler
,&HardFault_Handler
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