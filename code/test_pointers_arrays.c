// 配列・ポインタ・関数渡しの基本
#include <stdio.h>
#include <stdbool.h>

static int sum(const int *a, int n) {
    int s = 0;
    for (int i = 0; i < n; i++) s += a[i];
    return s;
}

static void inc_all(int *a, int n) {
    for (int i = 0; i < n; i++) *(a + i) += 1;
}

int main(void) {
    bool ok = true;
    int a[5] = {1,2,3,4,5};
    if (sum(a, 5) != 15) ok = false;

    int *p = a;
    if (*(p + 2) != 3) ok = false;

    inc_all(a, 5);
    if (a[0] != 2 || a[4] != 6) ok = false;

    int b[3];
    for (int i = 0; i < 3; i++) b[i] = i*i;
    if (b[0] != 0 || b[1] != 1 || b[2] != 4) ok = false;

    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}

