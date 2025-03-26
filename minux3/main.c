#include "uart.h"

void main() {
    uart_init();
    uart_puts("Hello from C!\n");
    while (1) {}  // 無限ループ
}

