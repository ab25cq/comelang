// hello.S - AArch64 Assembly Hello World for QEMU

.section .data
// 表示したい文字列を定義します。 .asciz は自動で末尾にヌル文字(\0)を付けます。
hello_string:
    .asciz "Hello, World from AArch64 Assembly!\n"

.section .text
.global _start // _startシンボルを外部に公開します。これがエントリーポイントです。

_start:
    // 文字列をUARTに一文字ずつ出力する
    // UARTのベースアドレス (0x09000000) を x1 レジスタにロード
    ldr x1, =0x09000000
    // 表示する文字列のアドレスを x2 レジスタにロード
    ldr x2, =hello_string

print_loop:
    // x2が指すアドレスから1バイト(文字)を w3 レジスタにロード
    ldrb w3, [x2]
    // ロードした文字がヌル文字(0)かチェック
    // もし0なら、print_endにジャンプ (cbz = Compare and Branch if Zero)
    cbz w3, print_end
    // w3の文字をUARTのデータレジスタ (x1が指すアドレス) にストア(き込み)
    strb w3, [x1]
    // 文字列ポインタ(x2)を1つ進める
    add x2, x2, #1
    // ループの先頭に戻る
    b print_loop

print_end:
    // セミホスティング(Semihosting)を使ってQEMUをクリーンに終了させる
    // 詳細はARM Semihostingの仕様を参照
    // SYS_EXIT (0x18) を w0 にセット
    mov w0, #0x18
    // 終了理由コード (ADP_Stopped_ApplicationExit) を x1 にセット
    ldr x1, =0x20026
    // hlt命令でセミホスティングを呼び出す
    hlt #0xf000

// 無限ループ (セミホスティングが失敗した場合のフェイルセーフ)
halt:
    wfi // Wait For Interrupt
    b halt
