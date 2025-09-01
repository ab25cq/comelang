// 基本的な制御構文のテスト: if/else, while, do-while, for, break/continue
#include <stdio.h>
#include <stdbool.h>

static bool test_if_else(void) {
    int x = 5;
    int y;
    if (x > 10) {
        y = 1;
    } else if (x == 5) {
        y = 2;
    } else {
        y = 3;
    }
    return y == 2;
}

static bool test_while(void) {
    int i = 0;
    int sum = 0;
    while (i < 10) {
        sum += i;
        i++;
    }
    return sum == 45; // 0..9 の和
}

static bool test_do_while(void) {
    int i = 0;
    int count = 0;
    do {
        count++;
        i++;
    } while (i < 3);
    return count == 3;
}

static bool test_for_break_continue(void) {
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) continue; // 奇数だけ足す
        if (i > 7) break;         // 1,3,5,7 まで
        sum += i;
    }
    return sum == (1 + 3 + 5 + 7);
}

int main(void) {
    bool ok = true;
    ok = ok && test_if_else();
    ok = ok && test_while();
    ok = ok && test_do_while();
    ok = ok && test_for_break_continue();

    if (ok) {
        puts("OK");
        return 0;
    } else {
        puts("NG");
        return 1;
    }
}

