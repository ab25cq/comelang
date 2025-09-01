// Demonstrates GCC statement expressions ({ ... }) and safer MAX macro
#include <stdio.h>

#define MAX(a, b) ({ \
    __typeof__(a) _a = (a); \
    __typeof__(b) _b = (b); \
    _a > _b ? _a : _b; \
})

int main(void) {
    int i = 3;
    int j = 7;
    int m = MAX(i++, j++); // both evaluated exactly once
    printf("[MAX] i=%d j=%d m=%d\n", i, j, m);

    int y = ({ int t = 3; t + 4; });
    printf("[stmt-expr] y=%d\n", y);

    return 0;
}
