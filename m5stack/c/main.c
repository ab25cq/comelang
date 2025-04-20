#include <stdint.h>

#define UART_FIFO_REG    (0x3FF40000 + 0x0)
#define UART_CLKDIV_REG  (0x3FF40000 + 0x14)
#define UART_CONF0_REG   (0x3FF40000 + 0x20)

// ボーレート設定
#define UART_CLK_FREQ  80000000  // 80 MHz
#define UART_BAUD_RATE 115200

void uart_init() {
    // ボーレート設定
    uint32_t clk_div = (UART_CLK_FREQ << 4) / UART_BAUD_RATE;
    *((volatile uint32_t *)(UART_CLKDIV_REG)) = clk_div;

    // UART設定 (8N1: 8ビットデータ、パリティなし、1ストップビット)
    *((volatile uint32_t *)(UART_CONF0_REG)) = (0x3 << 2);
}

void uart_send_char(char c) {
    // FIFOが空になるまで待機
    while ((*((volatile uint32_t *)(UART_FIFO_REG + 0x18)) & (1 << 3)) == 0);
    *((volatile uint32_t *)(UART_FIFO_REG)) = c;
}

void uart_send_string(const char *str) {
    while (*str) {
        uart_send_char(*str++);
    }
}

void app_main() {
    uart_init();
    uart_send_string("Hello, World!\n");

    while (1) {
        // 無限ループで動作を継続
    }
}

