.equ UBRR0H, 0xC5    ; ボーレート設定用レジスタ（上位）
.equ UBRR0L, 0xC4    ; ボーレート設定用レジスタ（下位）
.equ UCSR0B, 0xC1    ; コントロールレジスタB
.equ UCSR0C, 0xC2    ; コントロールレジスタC
.equ UCSR0A, 0xC0    ; コントロールレジスタA
.equ UDR0, 0xC6      ; データレジスタ
.equ TXEN0, 3        ; TXEN0ビット
.equ UCSZ00, 1       ; UCSZ00ビット
.equ UCSZ01, 2       ; UCSZ01ビット
.equ UDRE0, 5        ; UDRE0ビット

.section .text
.global main

main:
    ; ボーレート設定（9600bps）
    ldi r16, 103       ; ボーレートの下位バイト
    sts UBRR0L, r16    ; レジスタに書き込む
    ldi r16, 0         ; ボーレートの上位バイト
    sts UBRR0H, r16    ; レジスタに書き込む

    ; USART有効化（送信のみ）
    ldi r16, (1 << TXEN0)
    sts UCSR0B, r16    ; TXを有効化

    ; 非同期モード、8ビットデータ、1ストップビット
    ldi r16, (1 << UCSZ01) | (1 << UCSZ00)
    sts UCSR0C, r16    ; フレームフォーマット設定

send_loop:
    ; "Hello"を送信
    ldi r16, 'H'
    rcall send_char
    ldi r16, 'e'
    rcall send_char
    ldi r16, 'l'
    rcall send_char
    ldi r16, 'l'
    rcall send_char
    ldi r16, 'o'
    rcall send_char
    rcall send_newline
    rjmp send_loop

send_char:
    ; 送信レジスタが空くまで待機
wait_UDRE:
    lds r17, UCSR0A       ; UCSR0Aの読み取り
    sbrs r17, UDRE0       ; UDRE0ビットがセットされるまで待機
    rjmp wait_UDRE

    ; データ送信
    sts UDR0, r16
    ret

send_newline:
    ldi r16, 0x0A         ; 改行 '\n'
    rcall send_char
    ldi r16, 0x0D         ; 復帰 '\r'
    rcall send_char
    ret

