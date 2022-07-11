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


int main() {
  EXPECT(0, 0);
  EXPECT(1, 1);
  EXPECT(493, 0755);
  EXPECT(48879, 0xBEEF);
  EXPECT(255, 0Xff);
  EXPECT(2, 1+1);
  EXPECT(10, 2*3+4);
  EXPECT(26, 2*3+4*5);
  EXPECT(5, 50/10);
  EXPECT(9, 6*3/2);
  EXPECT(45, (2+3)*(4+5));
  EXPECT(153, 1+2+3+4+5+6+7+8+9+10+11+12+13+14+15+16+17);

  EXPECT(2, ({ int a=2; a; }));
  EXPECT(10, ({ int a=2; int b; b=3+2; a*b; }));
  EXPECT(2, ({ int i=3; if (1) i=2; i; }));
  EXPECT(3, ({ int i=3; if (0) i=2; i; }));
  EXPECT(2, ({ int i=0; if (1) i=2; else i=3; i; }));
  EXPECT(3, ({ int i=0; if (0) i=2; else i=3; i; }));

  EXPECT(5, plus(2, 3));
  EXPECT(1, one());
  EXPECT(3, one()+two());
  EXPECT(6, mul(2, 3));
  EXPECT(21, add(1,2,3,4,5,6));

  EXPECT(0, 0 || 0);
  EXPECT(1, 1 || 0);
  EXPECT(1, 0 || 1);
  EXPECT(1, 1 || 1);

  EXPECT(0, 0 && 0);
  EXPECT(0, 1 && 0);
  EXPECT(0, 0 && 1);
  EXPECT(1, 1 && 1);

  EXPECT(0, 0 < 0);
  EXPECT(0, 1 < 0);
  EXPECT(1, 0 < 1);
  EXPECT(0, 0 > 0);
  EXPECT(0, 0 > 1);
  EXPECT(1, 1 > 0);

  EXPECT(0, 4 == 5);
  EXPECT(1, 5 == 5);
  EXPECT(1, 4 != 5);
  EXPECT(0, 5 != 5);

  EXPECT(1, 4 <= 5);
  EXPECT(1, 5 <= 5);
  EXPECT(0, 6 <= 5);

  EXPECT(0, 4 >= 5);
  EXPECT(1, 5 >= 5);
  EXPECT(1, 6 >= 5);

  EXPECT(8, 1 << 3);
  EXPECT(4, 16 >> 2);

  EXPECT(4, 19 % 5);
  EXPECT(0, 9 % 3);

  EXPECT(0-3, -3);


  printf("OK\n");
  return 0;
}
