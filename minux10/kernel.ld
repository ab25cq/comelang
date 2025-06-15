ENTRY(_start)

MEMORY
{
  RAM : ORIGIN = 0x40000000, LENGTH = 256M
}

SECTIONS
{
  . = ORIGIN(RAM);

  .text   : { *(.text*)   } > RAM
  .rodata : { *(.rodata*) } > RAM
  .data   : { *(.data*)   } > RAM
  .bss    : { *(.bss*)    } > RAM
}

