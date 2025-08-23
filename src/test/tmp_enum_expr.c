enum E { A=1, B=A+2, C=(B<<1)|~0, D=(int)A, E1='x', F = -A };
struct S { enum { X=1, Y=X+3 } e; };
int main(){ return 0; }
