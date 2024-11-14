.section .vectors, "ax"
.align 11
.global vector_table

vector_table:
    // Synchronous EL1t
    b default_handler
    // IRQ EL1t (ここでタイマー割り込みハンドラを登録)
    b timer_interrupt_handler
    // FIQ EL1t
    b default_handler
    // SError EL1t
    b default_handler
    // Synchronous EL1h
    b default_handler
    // IRQ EL1h
    b default_handler
    // FIQ EL1h
    b default_handler
    // SError EL1h
    b default_handler

