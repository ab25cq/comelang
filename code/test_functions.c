// 関数呼び出し・再帰・スコープの基本
#include <stdio.h>

static int fact(int n) { return n <= 1 ? 1 : n * fact(n-1); }
static int add(int a, int b) { int c = a + b; return c; }

int main(void) {
    int ok = 1;
    if (fact(5) != 120) ok = 0;
    if (add(10, 32) != 42) ok = 0;
    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}

