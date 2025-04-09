ENTRY(_start)

PHDRS {
  text PT_LOAD FLAGS(5); /* R + X = 4 + 1 = 5 */
  data PT_LOAD FLAGS(6); /* R + W = 4 + 2 = 6 */
}

SECTIONS {
  . = 0x80000000;

  .text : {
    *(.text)
    *(.text.*)
    *(.rodata)
    *(.rodata.*)
  } :text

  .data : {
    *(.data)
  } :data

  .bss : {
    *(.bss COMMON)
  } :data
}

