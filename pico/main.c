#include "pico/stdlib.h"

int main() {
    const uint LED_PIN = 25;  // PicoのオンボードLEDピン
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    while(1) {
        gpio_put(LED_PIN, 1);  // LED ON
        sleep_ms(50);         // 50ms待機
        gpio_put(LED_PIN, 0);  // LED OFF
        sleep_ms(50);         // 50ms待機
    }

    return 0;
}

