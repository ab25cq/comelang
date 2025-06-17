.section .text
.globl _start

_start:
    // EL1で実行されていることを想定
    // スタックポインタ(SP)の初期化
    ldr x0, =stack_top
    mov sp, x0

    // C言語のmain関数へジャンプ
    bl main

    // mainから戻ることはないが、念のため無限ループ
halt:
    wfi
    b halt
