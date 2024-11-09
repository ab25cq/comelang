#include <comelang-pico.h>

int fun()
{
    return 3;
}

int main() {
//    stdio_usb_init();  // USB出力の初期化
    const uint LED_PIN = 25;  // PicoのオンボードLEDピン
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    var li = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    foreach(it, li) {
        for(int i=0; i<5; i++) {
            gpio_put(LED_PIN, 1);  // LED ON
            sleep_ms(50*it);         // 50ms待機
            gpio_put(LED_PIN, 0);  // LED OFF
            sleep_ms(50*it);         // 50ms待機
        }
    }
    
    while(true) {
        gpio_put(LED_PIN, 0);  // LED OFF
    }

    return 0;
}

