#include "mmu.h"

volatile char* uart_virtual = (volatile char*)0xffffffe000000000;

void putc(char c) {
    *uart_virtual = c;
}

void puts(const char* s) {
    while (*s) putc(*s++);
}

void main() {
    init_mmu(); // MMU有効化！

    puts("Hello from virtual memory!\n");
}

