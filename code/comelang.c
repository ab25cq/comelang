#include <comelang.h>

typedef int (*FP)(int,char*);
typedef int (*FP2[2][3])(int, char*);
int g=3;

struct Test {
    int x;
} x;

struct B {
  unsigned a:1;
  int b:3;
  int :0;      // zero-width unnamed bit-field (force alignment)
  int c:5;
};

struct P { int x; int y; };
struct P gP = { .y = 10 };
int gA[5] = { [2] = 3 };
int *a, arr[3], (*fp)(int, char*); //, (*fpa[2])(int);
//int *a, (*fp)(int, char*), arr[3], (*fpa[2])(int);
int fun(){ int x=42; char* s; return x; }
int (*fpb[2])(int), arr[3];
typedef int I;
I g=3;
//struct P { int x; };
struct P2 { int x; };
enum E2 { EA = 0 };

typedef unsigned short int USI;
typedef long long LL;
typedef unsigned long long ULL;
typedef signed char SCHAR;
typedef long double LDBL;

USI a;
LL b = 1;
ULL c;
SCHAR d;
LDBL e;

void fun2()
{
      void* vp = 0;
      long long* llp = (volatile long long*) vp;
      unsigned long long* ullp = (volatile unsigned long long*) vp;
      char* rc = (restrict char*) vp;
      struct P2* pp = (const struct P2*) vp;
      enum E2 e = (enum E2) 0;
      (void)llp; (void)ullp; (void)rc; (void)pp; (void)e;
}

union U { int i; long l; };
enum E3 { EA2 = 0, EB2 = 1 };

long double*** gl;
int*** gi;

typedef unsigned long UL;
typedef char* PCHAR;

typedef int I3;

void funX() {
  void* vp = 0;
  long double** ldpp = (long double**) vp;
  int*** ippp = (int***) vp;
  union U u = (union U) 0;
  enum E3 e = (enum E3) 1;
  (void)gl; (void)gi; (void)ldpp; (void)ippp; (void)u; (void)e;
  }

typedef int A[3][4];

typedef int I2;
typedef int (*FPX)(int, char*);
I2 g = 3;

struct PXYZ { int x; int y; };

int funXXX() {
  struct PXYZ p = { .y = 10, .x = 5 };
  int a[5] = { [2] = 3, [4] = 7 };
  return p.x + a[2];
}
struct PXYZ { int x; int y; };
int funUHO(){
  struct PXYZ p = { .y = 10, .x = 5 };
  int a[5] = { [2] = 3, [4] = 7 };
  return p.x + a[2];
}

struct TestStruct {
    int x;
    long long ll;
    unsigned short us;
    int bitfield:4;
};

int (*fpUHO)();

struct Test {
    int x;
};

int (*fpGEGEGE)(int, char*);

struct Test {
    int a:1;
    int b:2;
};

typedef int (*FPXYZ[2])(int);

typedef int (*FPXYZ2[2][3])(int,char*);

int a[3] = {1,2,3,4};
int b[2][2] = { {1,2,3}, {4,5} };
int c = {1,2};
int d[3] = { [1] = 1 };
int e[4] = { [1 ... 3] = 7 };

struct PXXX { int x; int y; };
int funZZ(){
  int a[3] = {1,2,3};
  struct PXXX p = { 10, 20 };
  int b[2][2] = {{1,2},{3,4}};
  return a[0];
}

typedef int XA[3][4];
typedef int (*FPUHIHI[2])(int);
typedef int (*FPUHIHI2[2][3])(int, char*);

struct { int x; } aXXX;
union { char c; int i; } bXXX;
enum { XXXXXA=1, XXXXXB } eXXX;
struct { int y; } a2XXX, a3XXX; // only first gets inline for now

int main(int argc, char** argv)
{
   int xxx = 1;
   xxx = (int) 42;
    I2 x = 1;
    FPX f = 0;
    
    struct P p = { .y = 10, .x = 5 };
    int a[5] = { [2] = 3, [4] = 7 };
    
    xassert("C", a[2] == 3 && a[4] == 7 && p.y == 10 && p.x == 5 && gP.y == 10);
    xassert("C", gA[2] === 3);
    
    var li = [1,2,3,4,5];
    
    int x = false;
    
    if(false) {
    }
    else if(li.filter { it > 4 }.length() > 0) {
        x = true;
    }
    
    int y = false;
    for(int i=0; li.filter { it > 4 }.length() > 0; i++) {
        y = true;
        break;
    }
    
    xassert("method block at conditional test", x == true && y == true);
    
    int a = 0;
    false or (a = 111);
    true or (a = 222);
    
    xassert("or test", a == 111);
    
    int b = 0;
    true and (b = 111);
    false and (b = 222);
    
    xassert("and test", b == 111);
    
    (int a = 111);
    int c = (int)b + 111;
    xassert("parse test", c == 222);
    
    xassert("block test", ({int a = 222;}) == 222);
    
    xassert("block test2", ({int a = 222; string("aaa") === "aaa"}) == true);
    xassert("block test3", ({string a = string("aaa"); a === "aaa"}) == true);
    
    xassert("method block test", [1,2,3].map { it.to_string() } === [s"1", s"2", s"3"]);
    
    xassert("method block test2", [1,2,3,4,5].filter { it < 4 }.map { it.to_string() }.map { atoi(it) }  === [1, 2, 3]);

    int x = 1;
    x = (unsigned long) x;
    x = (int) 42;
    int y =  (int) x;
    void* vp = 0;
    int* ip = (const int*) vp;
     struct P* pp = (struct P*) vp;
    int z = (int) (unsigned long) 0;
    
    
    return 0;
}
