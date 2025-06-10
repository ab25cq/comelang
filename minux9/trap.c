// === trap.c: 外部割り込みの処理（UART RX） ===
#include <stdint.h>

#define UART_IRQ 10
extern void uart_rx_handler();
extern int plic_claim(void);
extern void plic_complete(int irq);

extern void trapvec();  // trap.S に定義された割り込みベクタ関数

void trap_init() {
    uintptr_t trapvec_addr = (uintptr_t)&trapvec;
    
    // mtvec に trapvec のアドレスを設定（direct モード）
    asm volatile("csrw stvec, %0" :: "r"(trapvec_addr));
}

void external_interrupt_handler() {
    int irq = plic_claim();
    if (irq == UART_IRQ) {
        uart_rx_handler();
    }
    if (irq) {
        plic_complete(irq);
    }
}

volatile int watchdog_counter = 0;
const int watchdog_timeout = 100;  // 100 × 10ms = 1秒でタイムアウト

// タイマー割り込みで呼ばれる
void puts(const char* s);

void timer_irq_handler() 
{
    watchdog_counter++;
    if (watchdog_counter >= watchdog_timeout) {
        puts("WATCH DOG RESET");
        while(1);
    }
}

void reset_watchdog() 
{
    watchdog_counter = 0;
}

