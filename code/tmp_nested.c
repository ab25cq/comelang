struct Outer {
  int a;
  struct { int x; union { char c; long l; } inner_u; } anon_s;
  union { float f; struct { unsigned u:3; int v; } inner_s; } anon_u;
};
int main(){ return 0; }
