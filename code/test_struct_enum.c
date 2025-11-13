// 構造体と列挙体の基本テスト
#include <stdio.h>
#include <stdbool.h>

typedef struct {
    int x;
    int y;
} Point;

static Point add_point(Point a, Point b) {
    Point r;
    r.x = a.x + b.x;
    r.y = a.y + b.y;
    return r; // 構造体の値返し
}

enum Color {
    RED = 1,
    GREEN, // 2
    BLUE   // 3
};

int main(void) {
    bool ok = true;

    Point p1 = { .x = 2, .y = 3 };
    Point p2 = { .x = 5, .y = 7 };
    Point p3 = add_point(p1, p2);
    ok = ok && (p3.x == 7 && p3.y == 10);

    // 代入も値コピー
    Point p4 = p3;
    ok = ok && (p4.x == 7 && p4.y == 10);

    enum Color c = GREEN;
    ok = ok && (c == 2);

    if (ok) {
        puts("OK");
        return 0;
    } else {
        puts("NG");
        return 1;
    }
}

