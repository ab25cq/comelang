// Demonstrates common GCC builtins
#include <stdio.h>
#include <stdint.h>

static int likely_branch(int x) {
    if (__builtin_expect(x != 0, 1)) {
        return 1;
    } else {
        return 0;
    }
}

int main(void) {
    unsigned int v = 0xF0; // 240 -> 11110000b
    printf("[builtin] popcount(0x%X)=%d\n", v, __builtin_popcount(v));

    unsigned int w = 16;
    printf("[builtin] clz(%u)=%d\n", w, __builtin_clz(w));

    printf("[builtin] likely_branch(1)=%d\n", likely_branch(1));

    // types_compatible_p is a compile-time expression
    _Static_assert(__builtin_types_compatible_p(int, signed int),
                   "int and signed int should be compatible");

    // Demonstrate unreachable in a way that never executes
    int v2 = 2;
    switch (v2) {
        case 2:
            puts("[builtin] reachable case");
            break;
        default:
            __builtin_unreachable();
    }

    return 0;
}
