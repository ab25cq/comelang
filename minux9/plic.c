
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


#include <stdint.h>

// 16550 UART レジスタのオフセット
#define RBR              0    // Receiver Buffer Register (受信データ読み出し)
#define THR              0    // Transmit Holding Register (送信データ書き込み)
#define LSR              5    // Line Status Register

// LSR 各ビット
#define LSR_RX_READY     0x01 // 受信データ準備完了
#define LSR_THR_EMPTY    0x20 // 送信レジスタ空き

static inline uint8_t uart_read_reg(int offset) {
    return *(volatile uint8_t*)(UART0 + offset);
}
    
void timer_handler();

/// UART から１バイト読み出す（ブロッキング）
char uart_getc(void) {
    // データが来るまで待つ
    while ((uart_read_reg(LSR) & LSR_RX_READY) == 0) {
timer_handler();
    }
    return uart_read_reg(RBR);
}

typedef unsigned long size_t;

size_t uart_readn(char *buf, size_t len) 
{
    size_t i = 0;
    while (i < len) {
        buf[i++] = uart_getc();
    }
    return i;
}                            
    
/// 改行（'\n' または '\r'）が来るまで、最大 maxlen-1 バイトを読み込んで
/// buf をヌル終端して返す（改行文字自身は捨てる）
size_t uart_readline(char *buf, size_t maxlen) {
    size_t i = 0;
      char c;
    while (i + 1 < maxlen) {
        c = uart_getc();
        // CR/LF 判定
        if (c == '\r' || c == '\n') {
            break;
        }
        buf[i++] = c;
    }
    buf[i] = '\0';
    // CR/LF のあとに LF が続く場合、自動で消したいならここでもう一度 uart_getc() を捨てても可
    return i;
}
