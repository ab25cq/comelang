OUTPUT_ARCH( "riscv" )
ENTRY(entry)
SECTIONS
{
#  . = 0x90000000;
#  PROVIDE(_userret = .);
#  .text.userret : {
#    *(.text.userret)
#  }
#  . += 4096;
  
  . = 0x80000000;
  .text : { *(.text*) }
#  .text : { *(.text) }
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
  
  . = ALIGN(4096);
  TRAPFRAME2 = .;
  . = . + 4096;
  
  . = ALIGN(4096);
  . = 0x80020000;
  PROVIDE(TRAMPOLINE = .);
  .trampoline : { *(.trampoline) }
  . = ALIGN(4096);
  PROVIDE(COMMON = .);
  .common : { *(.common) }
  . = . + 4096;
  . = ALIGN(4096);

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

