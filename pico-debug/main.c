#include "pico/stdlib.h"
#include "stdio.h"

int main() {
    stdio_init_all();
    const uint LED_PIN = 25; // PicoのオンボードLEDピン
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    printf("OS Demo Starting...\n");

    while (true) {
        gpio_put(LED_PIN, 1);
        sleep_ms(500);
        gpio_put(LED_PIN, 0);
        sleep_ms(500);
    }
}

