/* entry.S - アセンブリでのエントリポイント */
.section .text
.global _start
_start:
    la sp, stack_top      # スタックポインタ初期化
    call main             # Cのmain関数にジャンプ

1:
    j 1b                  # 無限ループ（mainが戻ってきたら止まる）

.section .bss
.space 4096               # スタック領域確保
.global stack_top
stack_top:

