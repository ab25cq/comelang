    .section .text
    .globl _start
_start:
    # x1 に 0x123 を設定
    addi x1, x0, 0x123
    # ECALL の戻り値（a0）= 0 にして終了
    addi a0, x0, 0
    ecall

