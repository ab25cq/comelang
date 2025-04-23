OUTPUT_ARCH( "riscv" )
ENTRY( _start )
SECTIONS
{
/*
  .debug_info       0x90000000 : { *(.debug_info) } 
  .debug_abbrev     0x90010000 : { *(.debug_abbrev) }
  .debug_line       0x90020000 : { *(.debug_line) }
  .debug_str        0x90030000 : { *(.debug_str) }
  .debug_pubnames   0x90040000 : { *(.debug_pubnames) }
  .debug_pubtypes   0x90050000 : { *(.debug_pubtypes) }
  .debug_aranges    0x90060000 : { *(.debug_aranges) }
  .debug_line_str   0x90070000 : { *(.debug_line_str) }
  .debug_frame      0x90080000 : { *(.debug_frame) }
*/
  /* text: test code section */
  . = 0x80000000;
  .text : { *(.text*) }
  .rodata : { *(.rodata*) }
  /* data: Initialized data segment */
  .data : { *(.data*) }
  .sdata : { *(.sdata*) }
  . += 0x8000;
  stack_top = .;

  /* End of uninitalized data segement */
  end = .;
}

