OUTPUT_ARCH( "riscv" )
ENTRY( _start )
SECTIONS
{
  . = 0x80000000;
  .text : { *(.text*) }
  .rodata : { *(.rodata*) }
  .data : { *(.data*) }
  .sdata : { *(.sdata*) }
  .bss : { *(.bss) *(.bss.*) *(.sbss) *(.sbss.*) }
  PROVIDE(_code_end = .);
  . += 0x64000;
  PROVIDE(stack_top = .);
  
  . = ALIGN(4096);
  TRAPFRAME = .;
  . = . + 4096;

  /* End of uninitalized data segement */
  PROVIDE(_end = .);
  . += 0x64000;
  PROVIDE(_end2 = .);
  . = . + 4096 * 8;
  PROVIDE(_end3 = .);
  
  .debug_info        0 : { *(.debug_info) } 
  .debug_abbrev      0 : { *(.debug_abbrev) }
  .debug_line        0 : { *(.debug_line) }
  .debug_str         0 : { *(.debug_str) }
  .debug_line_str    0 : { *(.debug_line_str) }
/*  .debug_pubnames    : { *(.debug_pubnames) }
  .debug_pubtypes    0 : { *(.debug_pubtypes) } */
}

