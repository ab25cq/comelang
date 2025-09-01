// 基本的な演算子のテスト: 算術、比較、論理、ビット演算、優先順位
#include <stdio.h>
#include <stdbool.h>

static bool test_arith(void) {
    int a = 7;
    int b = 3;
    int c = a + b;     // 10
    int d = a - b;     // 4
    int e = a * b;     // 21
    int f = a / b;     // 2 (整数除算)
    int g = a % b;     // 1
    return c == 10 && d == 4 && e == 21 && f == 2 && g == 1;
}

static bool test_rel_logic(void) {
    int x = 5, y = 8;
    bool r1 = (x < y) && (y > 0);
    bool r2 = (x == 5) || (y == 0);
    bool r3 = !(x == y);
    return r1 && r2 && r3;
}

static bool test_bitwise(void) {
    unsigned int x = 0x0F; // 0000 1111
    unsigned int y = 0x33; // 0011 0011
    unsigned int a = x & y; // 0000 0011 -> 0x03
    unsigned int b = x | y; // 0011 1111 -> 0x3F
    unsigned int c = x ^ y; // 0011 1100 -> 0x3C
    unsigned int d = ~x;    // ...1111 0000 (実際の上位は実装依存だがビット単位での相補)
    unsigned int e = (1u << 3); // 8
    unsigned int f = (32u >> 2); // 8
    (void)d; // 値そのものは環境で異なるため未使用にして警告回避
    return a == 0x03 && b == 0x3F && c == 0x3C && e == 8 && f == 8;
}

static bool test_precedence_inc(void) {
    int a = 1, b = 2, c = 3;
    // 優先順位: * が + より高い
    int r1 = a + b * c; // 1 + 2*3 = 7
    // 前置/後置の確認
    int i = 0;
    int r2 = i++ + 10; // r2=10, i=1
    int r3 = ++i + 10; // 先に i=2 -> r3=12
    return (r1 == 7) && (r2 == 10) && (r3 == 12) && (i == 2);
}

int main(void) {
    bool ok = true;
    ok = ok && test_arith();
    ok = ok && test_rel_logic();
    ok = ok && test_bitwise();
    ok = ok && test_precedence_inc();
    if (ok) {
        puts("OK");
        return 0;
    } else {
        puts("NG");
        return 1;
    }
}

