// === uart.c: UART RX 割り込みでキーを受け取る簡単な例 ===
#include <stdint.h>

#define UART0 0x10000000L
#define UART_RXDATA (volatile uint32_t*)(UART0 + 0x00)
#define UART_TXDATA (volatile uint32_t*)(UART0 + 0x04)
#define UART_TXFULL 0x80000000
#define UART_IE     (volatile uint32_t*)(UART0 + 0x08)
//#define UART_RX_INTR (1 << 0)
#define UART_IER ((volatile uint8_t *)(UART0 + 0x01))
#define UART_RX_INTR 0x01

#define UART_THR  ((volatile uint8_t *)(UART0 + 0x00))  // 書き込み用
#define UART_LSR  ((volatile uint8_t *)(UART0 + 0x05))  // Line Status Register
#define UART_LSR_THRE 0x20  // Transmit Holding Register Empty


volatile char last_key = 0;

void uart_rx_handler() {
    last_key = *(UART_RXDATA);
}

void uart_init() {
    *UART_IER |= UART_RX_INTR;
    asm volatile("csrs mie, %0" :: "r"(1 << 11)); // MEIE
    asm volatile("csrs mstatus, %0" :: "r"(1 << 3)); // MIE
}

void putc(char c) {
    while (!(*UART_LSR & UART_LSR_THRE)) ;  // 送信FIFO空くまで待つ
    *UART_THR = c;
}
void putchar(char c) {
    while (!(*UART_LSR & UART_LSR_THRE)) ;  // 送信FIFO空くまで待つ
    *UART_THR = c;
}

void puts(const char* s) {
    while (*s) putc(*s++);
}

void putc_direct(char c) {
    *(volatile char*)0x10000000L = c;
}

void puts_direct(const char* s) {
    while (*s) putc_direct(*s++);
}
