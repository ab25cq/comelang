/* hello.ld */
ENTRY(_start)

SECTIONS
{
#  . = 0x88000000;
#  . = 0x10000000;
  . = 0x1000;
#  . = 0x100000;
#  . = 0x82000000;

  .text : {
    *(.text*)
  }

  .rodata : {
    *(.rodata*)
  }

  .data : {
    *(.data*)
  }

  .bss : {
    *(.bss*)
    *(COMMON)
  }
}

