target remote localhost:3777
set architecture riscv:rv64
set disassemble-next-line on
layout asm
layout src
layout regs
b _start
list

