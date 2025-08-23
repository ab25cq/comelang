struct Outer {
  enum { X=1, Y } e1;
  struct { int a; union { char c; } u; } s1;
  struct Named { int n; } s2;
  union NamedU { float f; } u2;
};
int main(){ return 0; }
