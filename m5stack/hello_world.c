#define UART_BASE 0x3FF40000
#define UART_FIFO (UART_BASE + 0x20)
#define UART_CLKDIV (UART_BASE + 0x14)
#define UART_CONF0 (UART_BASE + 0x24)
#define UART_CONF1 (UART_BASE + 0x28)

#define UART_CONF0 (UART_BASE + 0x24) // 設定レジスタ

void uart_init() {
    // UARTクロックの設定: 115200 bps
    volatile unsigned int *uart_clkdiv = (unsigned int *)UART_CLKDIV;
    *uart_clkdiv = 104; // デフォルトクロック80MHz ÷ 115200 ≈ 104

    // データビット、パリティ、ストップビット設定
    volatile unsigned int *conf0_reg = (volatile unsigned int *)UART_CONF0;
    *conf0_reg = (0 << 0)  | // データビット: 8ビット (2'b00)
                 (0 << 2)  | // パリティなし
                 (1 << 4);   // ストップビット: 1ビット
                 
    volatile unsigned int*conf1_reg = (volatile unsigned int *)UART_CONF1;
         *conf1_reg = (1 << 12);   // FIFO長の設定
}

void uart_write_char(char c) {
    volatile unsigned int *uart_fifo = (unsigned int *)UART_FIFO;
    *uart_fifo = c;
}

void uart_write_string(const char *str) {
    while (*str) {
        uart_write_char(*str++);
    }
}

void main() {
    uart_init();                  // UART初期化
    uart_write_string("Hello, World!\n"); // UARTで文字列送信

    while (1) {
        // 無限ループで停止
    }
}

