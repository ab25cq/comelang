// 各種リテラルが想定通り評価されるかを実行時に検証
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

static bool approxf(float a, float b, float eps) {
    float diff = a - b;
    if (diff < 0) diff = -diff;
    return diff <= eps;
}

static bool approx(double a, double b, double eps) {
    double diff = a - b;
    if (diff < 0) diff = -diff;
    return diff <= eps;
}

int main(void) {
    bool ok = true;

    // 0x01 は 1
    int hx = 0x01;
    ok = ok && (hx == 1);

    // 1.1f は float、値はおおむね 1.1
    float f = 1.1f;
    ok = ok && approxf(f, 1.1f, 1e-6f);

    // 1.2 は double、値はおおむね 1.2
    double d = 1.2;
    ok = ok && approx(d, 1.2, 1e-12);

    // 22L は long、22UL は unsigned long
    long l = 22L;
    unsigned long ul = 22UL;
    ok = ok && (l == 22L) && (ul == 22UL);

    if (ok) {
        puts("OK");
        return 0;
    } else {
        puts("NG");
        return 1;
    }
}

