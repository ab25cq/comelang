# 1 "./code/test_invalid_0888.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 465 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "./code/test_invalid_0888.c" 2
// このファイルは「コンパイルに失敗すること」を確認するための故意に不正なコードです。
// 先頭 0 の 8 進数リテラルに 8 が含まれるため、C の規格上コンパイルエラーになります。

int x = 0888; // ← ここでコンパイルエラーになるはず

int main(void) {
    return x;
}
