    .section .text
    .global _start
_start:
    // 1) MMUを無効に
    mrs     x0, SCTLR_EL1
    bic     x0, x0, #1
    msr     SCTLR_EL1, x0

    // 2) ページテーブルベースをセット
    ldr     x0, =page_table
    msr     TTBR0_EL1, x0

    // 3) TCR_EL1 をロード & 設定
    ldr     x0, =tcr_val
    msr     TCR_EL1, x0

    // 4) MMUを有効に
    mrs     x0, SCTLR_EL1
    orr     x0, x0, #1
    msr     SCTLR_EL1, x0

    bl      main
    b       .

    .balign 64
page_table:
    .zero  (4096*4)    // 4レベル PTE table
    .zero  (4096*8)    // PTE entries

    .section .rodata
    .align  3
tcr_val:
    .quad  ((16UL<<32) | (3<<6) | (3<<8) | 1)

