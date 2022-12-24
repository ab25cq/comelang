#include <stdio.h>
#include <stdlib.h>
/*
extern void *stderr;

extern int printf (const char *__restrict __format, ...);
extern int fprintf (FILE *__restrict __stream, const char *__restrict __format, ...);
extern void exit (int aaa);
*/

#define EXPECT(expected, expr)                                  \
  do {                                                          \
    int e1 = (expected);                                        \
    int e2 = (expr);                                            \
    if (e1 == e2) {                                             \
      fprintf(stderr, "%s => %d\n", #expr, e2);                 \
    } else {                                                    \
      fprintf(stderr, "line %d: %s: %d expected, but got %d\n", \
              __LINE__, #expr, e1, e2);                         \
      exit(1);                                                  \
    }                                                           \
  } while (0)

int one() { return 1; }
int two() { return 2; }
int plus(int x, int y) { return x + y; }
int mul(int x, int y) { return x * y; }
int add(int a, int b, int c, int d, int e, int f) { return a+b+c+d+e+f; }
int add2(int (*a)[2]) { return a[0][0] + a[1][0]; }
int add3(int a[][2]) { return a[0][0] + a[1][0]; }
int add4(int a[2][2]) { return a[0][0] + a[1][0]; }
void nop() {}

int var1;
int var2[5];
int global_arr[1] = {5};
typedef int myint;

// Single-line comment test

int main(int argc, char** argv) {
  EXPECT(0, !1);
  EXPECT(1, !0);

  EXPECT(-1, ~0);
  EXPECT(-4, ~3);

  EXPECT(3, ({ int i = 3; i++; }));
  EXPECT(4, ({ int i = 3; ++i; }));
  EXPECT(3, ({ int i = 3; i--; }));
  EXPECT(2, ({ int i = 3; --i; }));

  EXPECT(5, 0 ? 3 : 5);
  EXPECT(3, 1 ? 3 : 5);

  EXPECT(3, (1, 2, 3));

  EXPECT(11, 9 | 2);
  EXPECT(11, 9 | 3);
  EXPECT(5, 6 ^ 3);
  EXPECT(2, 6 & 3);
  EXPECT(0, 6 & 0);

  EXPECT(3, ({ int x; int y; x=y=3; x; }));
  EXPECT(3, ({ int x; int y; x=y=3; y; }));

  EXPECT(45, ({ int x=0; int y=0; do { y=y+x; x=x+1; } while (x < 10); y; }));
  EXPECT(1, ({ int x=0; do {x++; break;} while (1); x; }));
  EXPECT(1, ({ int x=0; do {x++; continue;} while (0); x; }));

  EXPECT(60, ({ int sum=0; int i; for (i=10; i<15; i=i+1) sum = sum + i; sum;}));
  EXPECT(89, ({ int i=1; int j=1; for (int k=0; k<10; k=k+1) { int m=i+j; i=j; j=m; } i;}));
  EXPECT(1, ({ int i=1; for (int i = 5; i < 10; i++); i; }));
  EXPECT(5, ({ int i=0; for (; i < 10; i++) if (i==5) break; i; }));
  EXPECT(10, ({ int i=0; for (;;) { i++; if (i==10) break; } i; }));

  EXPECT(7, ({ int i=0; for (int j=0; j < 10; j++) { if (j<3) continue; i++; } i; }));

  EXPECT(45, ({ int i=0; int j=0; while (i<10) { j=j+i; i=i+1; } j;}));

  EXPECT(6, ({ int x=0; switch(3) { case 2: x=5; break; case 3: x=6; break; case 4: x=7; break; } x; }));
  EXPECT(7, ({ int x=0; switch(3) { case 2: x=5; case 3: x=6; case 4: x=7; } x; }));
  EXPECT(0, ({ int x=0; switch(3) case 1: x=5; x; }));

  EXPECT(3, ({ int ary[2]; *ary=1; *(ary+1)=2; *ary + *(ary+1);}));
  EXPECT(5, ({ int x; int *p = &x; x = 5; *p;}));
  EXPECT(4, ({ int *p; (p+5)-(p+1); }));

  EXPECT(40, ({ int ary[2][5]; sizeof(ary);}));
  EXPECT(8, ({ int ary[2][2]; ary[0][0]=3; ary[1][0]=5; add2(ary);}));
  EXPECT(8, ({ int ary[2][2]; ary[0][0]=3; ary[1][0]=5; add3(ary);}));
  EXPECT(8, ({ int ary[2][2]; ary[0][0]=3; ary[1][0]=5; add4(ary);}));

  EXPECT(3, ({ int ary[2]; ary[0]=1; ary[1]=2; ary[0] + ary[0+1];}));
  EXPECT(5, ({ int x; int *p = &x; x = 5; p[0];}));
  EXPECT(1, ({ int ary[2]; ary[0]=1; ary[1]=2; int *p=ary; *p++;}));
  EXPECT(2, ({ int ary[2]; ary[0]=1; ary[1]=2; int *p=ary; *++p;}));

  EXPECT(1, ({ char x; sizeof x; }));
  EXPECT(4, ({ int x; sizeof(x); }));
//  EXPECT(8, ({ int *x; sizeof x; }));
  EXPECT(16, ({ int x[4]; sizeof x; }));
  EXPECT(4, sizeof("abc"));
  EXPECT(7, sizeof("abc" "def"));
  EXPECT(9, sizeof("ab\0c" "\0def"));

  EXPECT(1, ({ char x; _Alignof x; }));
  EXPECT(4, ({ int x; _Alignof(x); }));
  EXPECT(8, ({ int *x; _Alignof x; }));
  EXPECT(4, ({ int x[4]; _Alignof x; }));
  EXPECT(8, ({ int *x[4]; _Alignof x; }));

  EXPECT(5, ({ char x = 5; x; }));
  EXPECT(42, ({ int x = 0; char *p = (char*)&x; p[0] = 42; x; }));

  EXPECT(0, '\0');
  EXPECT(0, '\00');
  EXPECT(0, '\000');
  EXPECT(1, '\1');
  EXPECT(7, '\7');
  EXPECT(64, '\100');

  printf("OK\n");
  
  return 0;
}
