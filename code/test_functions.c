// 関数プロトタイプ、引数/戻り値、再帰の基本テスト
#include <stdio.h>
#include <stdbool.h>

static int add(int a, int b); // プロトタイプ宣言
static int fact(int n);

static int add(int a, int b) { return a + b; }

static int fact(int n) {
    if (n <= 1) return 1;
    return n * fact(n - 1);
}

int main(void) {
    bool ok = true;
    ok = ok && (add(3, 4) == 7);
    ok = ok && (fact(5) == 120);

    // 複数戻り値の代替として構造体; ここでは簡単に加算だけ
    struct Pair { int a, b; };
    struct Pair p = {1, 2};
    p.a = add(p.a, p.b); // 3
    ok = ok && (p.a == 3 && p.b == 2);

    if (ok) {
        puts("OK");
        return 0;
    } else {
        puts("NG");
        return 1;
    }
}

