// 文字列リテラルとエスケープ、リテラル連結、キャストの基本テスト
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void) {
    bool ok = true;

    // エスケープシーケンスと長さ
    const char *s = "line1\nline2\t!"; // 改行 + タブ
    ok = ok && (strchr(s, '\n') != NULL);
    ok = ok && (strchr(s, '\t') != NULL);

    // リテラル連結
    const char *t = "ab" "cd"; // コンパイル時に "abcd"
    ok = ok && (strcmp(t, "abcd") == 0);

    // キャスト: double -> int は小数切り捨て
    double d = 3.7;
    int di = (int)d;
    ok = ok && (di == 3);

    // int -> double は値を保持
    int n = 42;
    double nd = (double)n;
    ok = ok && (nd == 42.0);

    if (ok) {
        puts("OK");
        return 0;
    } else {
        puts("NG");
        return 1;
    }
}

