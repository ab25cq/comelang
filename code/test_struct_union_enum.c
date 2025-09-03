// struct/union/enum/typedef の基本
#include <stdio.h>
#include <stdbool.h>

typedef struct { int x; int y; } Point;
typedef union  { int i; float f; } Num;
enum Color { RED = 1, GREEN = 2, BLUE = 4 };

static int add_point(Point p) { return p.x + p.y; }

int main(void) {
    bool ok = true;
    Point p = { .x = 2, .y = 5 };
    if (add_point(p) != 7) ok = false;

    Num n; n.i = 0x3f800000; // 1.0f のビットパターン
    if (n.i == 0) ok = false; // アクセス可能性のみ確認

    enum Color c = GREEN;
    if (c != 2) ok = false;

    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}

