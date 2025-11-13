// 配列とポインタ、関数呼び出しの基本テスト
#include <stdio.h>
#include <stdbool.h>

static int sum_array(const int *p, int n) {
    int s = 0;
    for (int i = 0; i < n; i++) s += p[i];
    return s;
}

static void fill_seq(int *p, int n, int start) {
    for (int i = 0; i < n; i++) p[i] = start + i;
}

int main(void) {
    bool ok = true;

    int a[5] = {1, 2, 3, 4, 5};
    ok = ok && (sum_array(a, 5) == 15);

    int b[4];
    fill_seq(b, 4, 10); // 10,11,12,13
    ok = ok && (b[0] == 10 && b[3] == 13);

    // ポインタ演算
    int *p = a;        // a は先頭要素へのポインタに暗黙変換
    ok = ok && (*p == 1);
    p = p + 3;         // 3 要素進める
    ok = ok && (*p == 4);

    if (ok) {
        puts("OK");
        return 0;
    } else {
        puts("NG");
        return 1;
    }
}

