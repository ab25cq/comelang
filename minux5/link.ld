OUTPUT_ARCH( "riscv" )
ENTRY( _start )
SECTIONS
{
  . = 0x80000000;
  .text : { *(.text*) }
  .rodata : { *(.rodata*) }
  .data : { *(.data*) }
  .sdata : { *(.sdata*) }
  .bss : { *(.bss*) }
  .debug_info        0 : { *(.debug_info) } 
  .debug_abbrev      0 : { *(.debug_abbrev) }
  .debug_line        0 : { *(.debug_line) }
  .debug_str         0 : { *(.debug_str) }
  .debug_line_str    0 : { *(.debug_line_str) }
/*  .debug_pubnames    : { *(.debug_pubnames) }
  .debug_pubtypes    0 : { *(.debug_pubtypes) } */
  . += 0x8000;
  stack_top = .;

  /* End of uninitalized data segement */
  end = .;
}

