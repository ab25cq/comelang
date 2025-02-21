#include <stdint.h>
#include <stdbool.h>

// GPIOレジスタベースアドレス
#define GPIO_BASE 0x3FF44000
#define GPIO_OUT *(volatile uint32_t *)(GPIO_BASE + 0x04) // GPIO出力レジスタ
#define GPIO_ENABLE *(volatile uint32_t *)(GPIO_BASE + 0x20) // GPIO有効化レジスタ

#define LED_GPIO 26 // M5Stackの内蔵LEDはGPIO 10

// 簡易的な遅延関数
void delay(volatile uint32_t count) {
    while (count--) {
        __asm__ volatile("nop");
    }
}

int main(int argc, char** argv) {
    // GPIOを出力モードに設定
    GPIO_ENABLE |= (1 << LED_GPIO);

    while (1) {
        // LEDを点灯
        GPIO_OUT |= (1 << LED_GPIO);
        delay(1000000);

        // LEDを消灯
        GPIO_OUT &= ~(1 << LED_GPIO);
        delay(1000000);
    }
}

