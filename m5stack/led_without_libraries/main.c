#include <stdint.h>
#include <stdbool.h>

/// GPIO output enable reg
#define GPIO_ENABLE_W1TS_REG *(volatile uint32_t*)(0x3FF44024)

#define GPIO_OUT_W1TS_REG *(volatile uint32_t*)(0x3FF44008)
#define GPIO_OUT_W1TC_REG 0x3FF4400C

/// The GPIO hooked up to the onboard LED
#define BLINKY_GPIO 2

/// GPIO function mode
#define GPIO_FUNCX_OUT_BASE 0x3FF44530
#define GPIO_FUNCX_OUT_SEL_CFG *(volatile uint32_t*)(GPIO_FUNCX_OUT_BASE + (BLINKY_GPIO * 4))

// 簡易的な遅延関数
void delay(volatile uint32_t count) {
    while (count--) {
        __asm__ volatile("nop");
    }
}

const unsigned int LED_GPIO = 26;

int main(int argc, char** argv) {
    GPIO_ENABLE_W1TS_REG = 0x1 << BLINKY_GPIO;
    GPIO_FUNCX_OUT_SEL_CFG = 0x100;
    GPIO_OUT_W1TS_REG = 0x1 << LED_GPIO;
    
    while(1) {
    }
}

