struct { int x; } a;
union { char c; int i; } b;
enum { A=1, B } e;
struct { int y; } a2, a3; // only first gets inline for now
int main(){ return 0; }
