struct P { int x; int y; };
int main(){
  struct P p = { .y = 10, .x = 5 };
  int a[5] = { [2] = 3, [4] = 7 };
  return p.x + a[2];
}
