using c
{
#include "pico/stdlib.h"
}

int fun()
{
    return 3;
}

int main() {
    const uint LED_PIN = 25;  // PicoのオンボードLEDピン
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    while (true) {
        gpio_put(LED_PIN, 1);  // LED ON
        sleep_ms(500);         // 500ms待機
        gpio_put(LED_PIN, 0);  // LED OFF
        sleep_ms(500);         // 500ms待機
    }

    return 0;
}

