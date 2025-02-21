#include "sdkconfig.h"
#include <stdio.h>
#include <wchar.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#define LED_PIN 26 // GPIO 26番ピン

void app_main(void) {
    // GPIO設定
    gpio_reset_pin(LED_PIN); // ピンをリセット
    gpio_set_direction(LED_PIN, GPIO_MODE_OUTPUT); // 出力モードに設定

    while (1) {
        // LEDを点灯
        gpio_set_level(LED_PIN, 1);
        printf("LED ON\n");
        vTaskDelay(pdMS_TO_TICKS(1000)); // 1秒待機

        // LEDを消灯
        gpio_set_level(LED_PIN, 0);
        printf("LED OFF\n");
        vTaskDelay(pdMS_TO_TICKS(1000)); // 1秒待機
    }
}

