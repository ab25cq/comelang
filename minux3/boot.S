/* boot.S - ARM Cortex-A (AArch64) boot code */
.global _start
.section .text

_start:
    // スタックポインタ初期化（0x40080000 あたり）
    ldr x0, =_stack_top
    mov sp, x0

    // Cのmain()関数を呼び出す
    bl main

1:  b 1b  // 無限ループ

.section .bss
.balign 16
_stack:
    .skip 0x1000
_stack_top:

