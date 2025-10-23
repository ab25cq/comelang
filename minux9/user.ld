/* user.ld */
OUTPUT_ARCH( "riscv" )
ENTRY( main ) /* エントリーポイントをmainに指定 */

/* ユーザープログラムの開始アドレスを定義 */
BASE_ADDRESS = 0x1000;

SECTIONS
{
  . = BASE_ADDRESS;
  
  .text : {
    *(.text.init)
    *(.text .text.*)
  }

  .rodata : {
    *(.rodata .rodata.*)
  }

  .data : {
    . = ALIGN(8);
/*    __global_pointer$ = . + 0x800; */
    *(.sdata .sdata.*)
    *(.data .data.*)
  }

  .bss : {
    *(.sbss .sbss.*)
    *(.bss .bss.*)
  }
  
  _end = .;
}
