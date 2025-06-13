file kernel.elf
dir .
#set architecture riscv:rv64  # アーキテクチャを明示
#set remotetimeout 1000       # タイムアウトを長めに設定 (オプション)
#target extended-remote localhost:2510
target extended-remote localhost:2510
#target remote localhost:2510
set architecture riscv:rv64
set disassemble-next-line on
layout asm
layout src
layout regs
list
