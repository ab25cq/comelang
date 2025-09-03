// if/switch/while/do-while/for/break/continue の基本
#include <stdio.h>

int main(void) {
    int ok = 1;
    int x = 0;

    // if/else
    if (1) x += 2; else x += 100;
    if (0) x += 100; else x += 3;
    if (x == 5) ; else ok = 0;

    // while
    int i = 0, s = 0;
    while (i < 5) { s += i; i++; }
    if (s != 10) ok = 0;

    // do-while
    int d = 0, c = 0;
    do { d += 1; } while (++c < 3);
    if (d != 3) ok = 0;

    // for + continue/break
    int t = 0;
    for (int k = 0; k < 10; k++) {
        if (k % 2 == 1) continue;
        t += k;
        if (t > 10) break;
    }
    if (t != 12) ok = 0;

    // switch
    int sw = 3; int r = 0;
    switch (sw) {
        case 1: r = 10; break;
        case 2:
        case 3: r = 30; break;
        default: r = 0; break;
    }
    if (r != 30) ok = 0;

    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}

