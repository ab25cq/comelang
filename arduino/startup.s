        .section .text
        .global start
        .type   start, @function

start:
        mov r16, r16
        ldi r20, 0x2   // 即値をr20に代入
        ldi r17, 0x1
        lds r18, 0x40  //0x40番地の値をr18に代入
        add r18, r17   // r17をr18に加えてr18に保存
        sts 0x40, r18  // r18の値を0x40番地に格納
        lds r19, 0x40
        mov r16, r16

