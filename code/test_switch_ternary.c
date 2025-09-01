// switch と 三項演算子の基本テスト
#include <stdio.h>
#include <stdbool.h>

static int grade_point(int score) {
    switch (score / 10) {
        case 10:
        case 9: return 4; // fallthrough で 90-100 は 4
        case 8: return 3;
        case 7: return 2;
        case 6: return 1;
        default: return 0;
    }
}

int main(void) {
    bool ok = true;
    ok = ok && (grade_point(95) == 4);
    ok = ok && (grade_point(82) == 3);
    ok = ok && (grade_point(71) == 2);
    ok = ok && (grade_point(64) == 1);
    ok = ok && (grade_point(10) == 0);

    int x = 5;
    int y = 10;
    int max = (x > y) ? x : y;
    ok = ok && (max == 10);

    if (ok) {
        puts("OK");
        return 0;
    } else {
        puts("NG");
        return 1;
    }
}

