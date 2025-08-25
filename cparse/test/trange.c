struct S { int a; struct { int b[5]; } inner; };
int main(){
  struct S s = { .inner.b[1] = 9, .inner.b[2 ... 4] = 7 };
  int x[5] = { [0 ... 2] = 1, [4] = 5 };
  return s.inner.b[2] + x[0];
}
