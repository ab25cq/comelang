#include "uart.h"

#define UART0_BASE 0x09000000
#define UARTFR     0x18
#define UART_TXFF  (1 << 5)

volatile unsigned int* const uart0 = (unsigned int*) UART0_BASE;

void uart_init() {
    // QEMU virtマシンのUARTは初期化不要
}

void uart_putc(char c) {
    while (uart0[UARTFR / 4] & UART_TXFF) {} // FIFO空き待ち
    uart0[0] = c;
}

void uart_puts(const char* s) {
    while (*s) {
        uart_putc(*s++);
    }
}

