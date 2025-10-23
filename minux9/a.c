
int add(int a, int b){ return a + b; }
int twice(int x){ x += x; return x; }
int main(){ int v = twice(add(2,3)); if (v >= 10) puts("ok"); return v; }
