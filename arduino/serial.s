.equ UBRR0H, 0xC5    ; USART Baud Rate Register High
.equ UBRR0L, 0xC4    ; USART Baud Rate Register Low
.equ UCSR0B, 0xC1    ; USART Control and Status Register B
.equ UCSR0C, 0xC2    ; USART Control and Status Register C
.equ UDR0, 0xC6      ; USART Data Register

    .section .text
    .global main

main:
    ; ボーレートを9600に設定 (UBRR = 103)
    ldi r16, 0
    out UBRR0H, r16   ; 上位8ビットは0
    ldi r16, 103
    out UBRR0L, r16   ; 下位8ビットに設定

    ; USARTを有効化 (送信のみ)
    ldi r16, (1 << TXEN0)  ; TXEN0ビットをセット
    out UCSR0B, r16

    ; 非同期モード、8ビットデータ、1ストップビット、パリティなし
    ldi r16, (1 << UCSZ01) | (1 << UCSZ00)
    out UCSR0C, r16

send_loop:
    ; 文字列を送信
    ldi r16, 'H'           ; 'H'を送信
    rcall send_char
    ldi r16, 'e'           ; 'e'を送信
    rcall send_char
    ldi r16, 'l'           ; 'l'を送信
    rcall send_char
    ldi r16, 'l'           ; 'l'を送信
    rcall send_char
    ldi r16, 'o'           ; 'o'を送信
    rcall send_char
    rcall send_newline     ; 改行

    rjmp send_loop         ; 無限ループ

send_char:
    ; UDR0が空になるまで待機
wait_UDRE:
    in r17, 0xC0           ; UCSR0Aを読み込み
    sbrs r17, UDRE0        ; UDRE0ビットがセットされるまで待つ
    rjmp wait_UDRE

    ; データを送信
    out UDR0, r16
    ret

send_newline:
    ldi r16, 0x0A          ; 改行文字 '\n'
    rcall send_char
    ldi r16, 0x0D          ; 復帰文字 '\r'
    rcall send_char
    ret

