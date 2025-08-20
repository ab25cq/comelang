STACK_PAGES = 16;
STACK_MAX = 4096 * STACK_PAGES;

OUTPUT_ARCH( "riscv" )

PHDRS {
   text PT_LOAD FLAGS (r_x);
   data PT_LOAD FLAGS (rw_);
}

ENTRY(entry)
SECTIONS
{
  
  . = 0x80000000;
  .text : { *(.text*) } :text
  . = ALIGN(4096); /* <-- この行を追加 */
  .rodata : { *(.rodata*) } :text
  .data : { *(.data*) } :data
  .sdata : { *(.sdata*) } :data
  .bss : { *(.bss) *(.bss.*) *(.sbss) *(.sbss.*) } :data
  PROVIDE(_code_end = .);
  . += STACK_MAX;
  PROVIDE(stack_top = .);
  
  . = ALIGN(4096);
  TRAPFRAME = .;
  . = . + 4096;
  
  . = ALIGN(4096);
  TRAPFRAME2 = .;
  . = . + 4096;
  
  PROVIDE(TRAMPOLINE = .);
  .trampoline : { *(.trampoline) }
  . = ALIGN(4096);
  . = 0x80700000;
  PROVIDE(COMMON = .);
  .common : { *(.common) }
  . = . + 4096 * 32;
  . = ALIGN(4096);

  /* End of uninitalized data segement */
  PROVIDE(_end = .);
  . += STACK_MAX;
  PROVIDE(_end2 = .);
  . = . + 4096 * 8;
  PROVIDE(_end3 = .);
  
  .debug_info        0 : { *(.debug_info) } 
  .debug_abbrev      0 : { *(.debug_abbrev) }
  .debug_line        0 : { *(.debug_line) }
  .debug_str         0 : { *(.debug_str) }
  .debug_line_str    0 : { *(.debug_line_str) }
}

