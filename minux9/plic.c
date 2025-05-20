// === plic.c ===
#include <stdint.h>

#define UART0 0x10000000L
#define UART_RXDATA (volatile uint32_t*)(UART0 + 0x00)
#define UART_TXDATA (volatile uint32_t*)(UART0 + 0x04)
#define UART_TXFULL 0x80000000
#define UART_IE     (volatile uint32_t*)(UART0 + 0x08)
#define UART_RX_INTR (1 << 0)

#define PLIC_BASE 0x0c000000L
#define PLIC_PRIORITY     ((volatile uint32_t *)(PLIC_BASE + 0x000000))
#define PLIC_PENDING      ((volatile uint32_t *)(PLIC_BASE + 0x001000))
#define PLIC_MENABLE(hart) ((volatile uint32_t *)(PLIC_BASE + 0x002000 + (hart) * 0x100))
#define PLIC_MPRIORITY(hart) ((volatile uint32_t *)(PLIC_BASE + 0x200000 + (hart) * 0x2000))
#define PLIC_MCLAIM(hart) ((volatile uint32_t *)(PLIC_BASE + 0x200004 + (hart) * 0x2000))
#define PLIC_MCOMPLETE(hart) ((volatile uint32_t *)(PLIC_BASE + 0x200004 + (hart) * 0x2000))

#define HART_ID 0  // 通常は単一CPUなら hartid = 0

void plic_init() {
    // すべての割り込み優先度をデフォルトに
    for (int i = 1; i < 32; i++) {
        PLIC_PRIORITY[i] = 1;
    }

    // UARTなど使用する割り込みのみ許可（初期はすべてdisable）
    *PLIC_MENABLE(HART_ID) = 0;

    // 優先度閾値（0ならすべて通す）
    *PLIC_MPRIORITY(HART_ID) = 0;
}

void plic_enable(int irq) {
    *PLIC_MENABLE(HART_ID) |= (1 << irq);
}

int plic_claim() {
    return *PLIC_MCLAIM(HART_ID);
}

void plic_complete(int irq) {
    *PLIC_MCOMPLETE(HART_ID) = irq;
}

