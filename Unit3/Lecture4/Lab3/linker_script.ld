/*
* linker script Cortex M3
*	ENG:Ahmed Sherif
*/
MEMORY
{
flash(RX) : ORIGIN = 0x00000000, LENGTH = 512M
sram (RWX) : ORIGIN = 0x20000000, LENGTH = 512M
}
SECTIONS
{
    .text : {
        *(.vectors*)
		*(.text*)
		*(.rodata)
		_E_TEXT = . ;
    }> flash
	.data :
	{
		_S_DATA = . ;
		*(.data)
		. = ALIGN(4);
		_E_DATA = . ;
	}> flash
	.bss :
	{
	_S_bss = . ;
	 *(.bss)
	 _E_bss = . ;
	 . = ALIGN(4);
	}>sram
}