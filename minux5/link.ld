OUTPUT_ARCH( "riscv" )
ENTRY( _start )
SECTIONS
{
  /* text: test code section */
  . = 0x80000000;
  .text : { *(.text*) }
  .rodata : { *(.rodata*) }
  /* data: Initialized data segment */
  .data : { *(.data*) }
  .sdata : { *(.sdata*) }
  .bss : { *(.bss*) }
  /*.debug_info       0 : { *(.debug_info) } */
  .debug_abbrev     0 : { *(.debug_abbrev) }
  .debug_line       0 : { *(.debug_line) }
  .debug_str        0 : { *(.debug_str) }
  .debug_pubnames   0 : { *(.debug_pubnames) }
  .debug_pubtypes   0 : { *(.debug_pubtypes) }
  . += 0x8000;
  stack_top = .;

  /* End of uninitalized data segement */
  PROVIDE(end = .);
}

