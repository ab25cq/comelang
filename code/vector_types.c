// Demonstrates GCC vector extensions via vector_size attribute
#include <stdio.h>
#include <stdint.h>

typedef int32_t v4si __attribute__((vector_size(16)));

int main(void) {
    v4si a = {1, 2, 3, 4};
    v4si b = {10, 20, 30, 40};
    v4si c = a + b; // element-wise add

    printf("[vector] c = {%d,%d,%d,%d}\n", c[0], c[1], c[2], c[3]);

    // element-wise multiply
    v4si d = a * b;
    printf("[vector] d = {%d,%d,%d,%d}\n", d[0], d[1], d[2], d[3]);

    return 0;
}
