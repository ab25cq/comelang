.globl trapvec
.section .text
.align 2
trapvec:
    csrr t0, mcause
    li t1, 0x8000000000000000  # 割り込みフラグ
    and t2, t0, t1
    beqz t2, not_interrupt

    li t1, 7                  # Machine timer interrupt (mtimer) = cause 7
    li t3, 0xfff
    and t0, t0, t3
    beq t0, t1, handle_timer

    li t1, 11                 # Machine external interrupt = cause 11
    beq t0, t1, handle_external
    j trap_return

not_interrupt:
    call panic
    j trap_return

handle_timer:
    call timer_irq_handler
    j trap_return

handle_external:
    call external_interrupt_handler
    j trap_return

trap_return:
    mret
