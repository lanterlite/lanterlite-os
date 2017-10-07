/*
*  link.ld
*/

	OUTPUT_FORMAT(i386pep)
/*
	OUTPUT_FORMAT(pe-i386)
	OUTPUT_FORMAT(pei-i386)    
	OUTPUT_FORMAT(pei-x86-64)
*/

ENTRY(entry)

SECTIONS
 {
   . = 0x100000;
   .text : { *(.text) }
   .data : { *(.data) }
   .bss  : { *(.bss)  }
 }