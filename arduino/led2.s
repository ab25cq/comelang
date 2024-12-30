; 定義セクション
.equ DDRD, 0x2A      ; Data Direction Register for Port D
.equ PORTD, 0x2B     ; Output Register for Port D
.equ PD2, 2          ; Pin 2 (PD2)

    .section .text
    .global main

main:
    ; PD2を出力モードに設定
    ldi r16, (1 << PD2)  ; PD2ビットをセット
    out DDRD, r16        ; DDRDに書き込み（出力設定）

    ; LEDを点灯
    ldi r16, (1 << PD2)  ; PD2ビットをセット
    out PORTD, r16       ; PORTDに書き込み（出力をHighに）

    ; 無限ループ
loop:
    rjmp loop            ; 無限ループで停止

