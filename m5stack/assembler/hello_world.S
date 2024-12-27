    .section .text
    .global _start

_start:
    movi a0, 0x3FF40000       # UART0 Base Address
    addi a1, a0, 0x20         # UART FIFO Address
    movi a2, message          # メッセージのアドレス

    # UART設定
    movi a2, 0x60000000        # UART_CONFIG_BASE: UART設定レジスタのベースアドレス
    movi a3, 0x1C              # 115200bps（UARTクロック設定値）
    s32i a3, a2, 0             # UARTのクロックレジスタに書き込み

    # サブルーチンにジャンプし、戻り先アドレスを保存
    mov a3, a0                # 現在のリンクレジスタを保存
    movi a0, write_string     # サブルーチンのアドレスをセット
    jx a0                     # サブルーチンにジャンプ
    mov a0, a3                # リンクレジスタを復元

    # 無限ループ
loop:
    j loop

# サブルーチン: メッセージ出力
write_string:
    l8ui a3, a2, 0            # メッセージから1文字をロード
    beqz a3, write_done       # NULLなら終了
    s8i a3, a1, 0             # UART FIFOに文字を書き込む
    addi a2, a2, 1            # 次の文字
    j write_string            # 再帰

write_done:
    jx a0                     # 呼び出し元に戻る

    .section .rodata
message:
    .asciz "Hello, World!\n"
