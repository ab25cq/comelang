// 一般的な算術・比較・ビット演算のテスト
#include <stdio.h>
#include <stdbool.h>

static bool ok = true;
static void chk(int cond) { if (!cond) ok = false;
    puts(ok ? "OK" : "NG");
}

int main(void) {
    int a = 7, b = 3;
    chk(a + b == 10);
    chk(a - b == 4);
    chk(a * b == 21);
    chk(a / b == 2);
    chk(a % b == 1);

    chk((a & b) == (7 & 3));
    chk((a | b) == (7 | 3));
    chk((a ^ b) == (7 ^ 3));
    chk((a << 2) == 28);
    chk((a >> 1) == 3);

    chk(a > b);
    chk(a >= b);
    chk(b < a);
    chk(b <= a);
    chk(a == 7);
    chk(a != b);

    // 演算子の結合と優先順位
    chk(1 + 2 * 3 == 7);
    chk((1 + 2) * 3 == 9);
    chk(!!a);

    return ok ? 0 : 1;
}

