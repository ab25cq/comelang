/*
 * Copyright (C) 2021 Gary Sims
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <comelang.h>
#include "pico/stdlib.h"
#include <stdio.h>
#include "os.h"

const uint LED_PIN = 25;
const uint LED2_PIN = 14;

void task1_func(void) {
    piccolo_sleep_t t;
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
    while(1) {
        gpio_put(LED_PIN, 1);
        piccolo_sleep(&t, 1000);
        gpio_put(LED_PIN, 0);
        piccolo_sleep(&t, 1000);
    }
    piccolo_sleep(&t, 1000);
}

int is_prime(unsigned int n)
{
    unsigned int p;
    if (!(n & 1) || n < 2 ) return n == 2;
 
    /* comparing p*p <= n can overflow */
    for (p = 3; p <= n/p; p += 2)
        if (!(n % p)) return 0;
        
    return 1;
}

void task2_func(void) {
    piccolo_sleep_t t;
    int p;

    while(1) {
        piccolo_sleep_t t;
        int p;
        
        while(1) {
            var li = [1,2,3,4,5,6,7,8,9].map { it * 2 };
            foreach(it, li) {
                printf("task2: Created!\n");
                printf("it %d\n", it);
                piccolo_sleep(&t, 75);
            }
        }
        piccolo_yield();
    }
}

void task3_func(void) {
/*
    piccolo_sleep_t t;
    gpio_init(LED2_PIN);
    gpio_set_dir(LED2_PIN, GPIO_OUT);
    while (true) {
        gpio_put(LED2_PIN, 1);
        piccolo_sleep(&t, 75);
        gpio_put(LED2_PIN, 0);
        piccolo_sleep(&t, 75);
    }
*/
    piccolo_sleep_t t;
    int p;
    
    while(1) {
        var li = [1,2,3,4,5,6,7,8,9];
        foreach(it, li) {
            printf("task3: Created!\n");
            printf("it %d\n", it);
            piccolo_sleep(&t, 75);
        }
    }
}

int main() {
    piccolo_init();

    printf("PICCOLO OS Demo Starting...\n");

    piccolo_create_task(&task1_func);
    piccolo_create_task(&task2_func);
    piccolo_create_task(&task3_func);

    piccolo_start();
    
    while(1) {
    }

    return 0; /* Never gonna happen */
}
