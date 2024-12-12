#include <stdio.h>
#include <stdint.h>
#include "pico/stdlib.h"

int main() {
    stdio_init_all();
    
    while(true) {
        printf("HELLO PICO\n");
        sleep_ms(1000);
    }
    return 0;
}

