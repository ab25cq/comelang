/*
 * Copyright (C) 2021-2022 Gary Sims
 * Copyright (C) 2022 Keith Standiford
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
 
#include <comelang.h>

#include <stdio.h>
#include <stdlib.h>
#include "pico/stdlib.h"
#include "pico/time.h"
#include "time.h"

#include "os.h"

const uint LED_PIN = 25;
const uint LED2_PIN = 14;

void task1_func(void) {
  gpio_init(LED_PIN);
  gpio_set_dir(LED_PIN, GPIO_OUT);

  while (true) {
    gpio_put(LED_PIN, 1);
    piccolo_sleep_ms(1000);
    gpio_put(LED_PIN, 0);
    piccolo_sleep_ms(1000);
  }
}

/*
int is_prime(unsigned int n) {
  unsigned int p;
  if (!(n & 1) || n < 2)
    return n == 2;

  /* comparing p*p <= n can overflow */
  for (p = 3; p <= n / p; p += 2)
    if (!(n % p))
      return 0;
  return 1;
}

void task2_func(void) {
  int p;

  while (1) {
    p = to_ms_since_boot(get_absolute_time());
    if (is_prime(p) == 1) {
      printf("%d is prime!\n", p);
      piccolo_sleep_ms(1000);
    }
  }
}
*/
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

int task3_cmpfunc(const void *a, const void *b) {
  return (*(int *)a - *(int *)b);
}

/*
 * Make sure that none of the artificial workload
 * is optimized away from the compiler
 */
/*
#pragma GCC push_options
#pragma GCC optimize("O0")
void task3_func(void) {
  gpio_init(LED2_PIN);
  gpio_set_dir(LED2_PIN, GPIO_OUT);

  while (true) {
    gpio_put(LED2_PIN, 1);

    for (int x = 0; x < 20; x++) {
      int *values = (int *)malloc(1024);
      int j = 1024;
      for (int i = 0; i < 1024; i++) {
        values[i] = j--;
      }
      qsort(values, 1024, sizeof(int), task3_cmpfunc);
      free(values);
    }
    gpio_put(LED2_PIN, 0);
    piccolo_sleep_ms(30);
  }
}
#pragma GCC pop_options
*/

int main() {
  piccolo_init();
  stdio_init_all();

  printf("PICCOLO OS Demo Starting...\n");

  piccolo_create_task(&task1_func);
  piccolo_create_task(&task2_func);
//  piccolo_create_task(&task3_func);

  piccolo_start();

  return 0; /* Never gonna happen */
}
