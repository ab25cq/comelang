#include <comelang.h>

int main() {
//    stdio_usb_init();  // USB出力の初期化
    const uint LED_PIN = 25;  // PicoのオンボードLEDピン
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    for(int i=0; i<5; i++) {
        gpio_put(LED_PIN, 1);  // LED ON
        sleep_ms(50);         // 50ms待機
        gpio_put(LED_PIN, 0);  // LED OFF
        sleep_ms(50);         // 50ms待機
    }
    
    while(true) {
        gpio_put(LED_PIN, 0);  // LED OFF
    }

    return 0;
}

