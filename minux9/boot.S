.section .text.boot
.globl _boot_entry

_boot_entry:
    li t0, 0x80000000  # 本来のスタートアドレスをロード
    jr t0              # そこへジャンプ
