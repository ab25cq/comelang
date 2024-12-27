    .section .text
    .global _start

_start:
    # UART0 Base Address
    movi a0, 0x3FF40000       
    
    # UART FIFO Address
    addi a1, a0, 0x20         

    # UART設定
    movi a2, 0x60000000        # UART_CONFIG_BASE: UART設定レジスタのベースアドレス
    movi a3, 0x1C              # 115200bps（UARTクロック設定値）
    s32i a3, a2, 0             # UARTのクロックレジスタに書き込み

    # メッセージ出力
    movi a2, message           # メッセージアドレス
    call write_string          # メッセージ出力

    # 無限ループ
loop:
    j loop

write_string:
    l8ui a3, a2, 0             # 文字をロード
    beqz a3, write_done        # NULLなら終了
    s8i a3, a1, 0              # UART FIFOに文字を書き込む
    addi a2, a2, 1             # 次の文字
    j write_string             # 再帰
write_done:
    ret

    .section .rodata
message:
    .asciz "Hello, World!\n"

