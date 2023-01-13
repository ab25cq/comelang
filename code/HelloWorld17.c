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

int main(int argc, char** argv)
{
puts("aaa");
  EXPECT(64, "\10000"[0]);
puts("aaa");
  EXPECT('0', "\10000"[1]);
puts("aaa");
  EXPECT('0', "\10000"[2]);
puts("aaa");
  EXPECT(0, "\10000"[3]);
puts("aaa");
  EXPECT(255, "\xffxyz"[0]);
puts("aaa");
  EXPECT('x', "\xffxyz"[1]);
puts("aaa");

puts("bbbb");
  EXPECT('a', ({ char *p = "abc"; p[0]; }));
  EXPECT('b', ({ char *p = "abc"; p[1]; }));
  EXPECT('c', ({ char *p = "abc"; p[2]; }));
  EXPECT(0, ({ char *p = "abc"; p[3]; }));

  EXPECT(1, ({ int x = 1; { int x = 2; } x; }));

  EXPECT(0, var1);
  EXPECT(5, ({ var1 = 5; var1; }));
  EXPECT(20, sizeof(var2));
  EXPECT(15, ({ var2[0] = 5; var2[4] = 10; var2[0] + var2[4]; }));
  EXPECT(5, global_arr[0]);

puts("bbbb");
  EXPECT(4, ({ struct { int a; } x; sizeof(x); }));
  EXPECT(8, ({ struct { char a; int b; } x; sizeof(x); }));
  EXPECT(12, ({ struct { char a; char b; int c; char d; } x; sizeof(x); }));
  EXPECT(3, ({ struct { int a; } x; x.a=3; x.a; }));
  EXPECT(8, ({ struct { char a; int b; } x; x.a=3; x.b=5; x.a+x.b; }));
//  EXPECT(8, ({ struct { char a; int b; } x; struct { char a; int b; } *p = &x; x.a=3; x.b=5; p->a+p->b; }));
  EXPECT(8, ({ struct tag { char a; int b; } x; struct tag *p = &x; x.a=3; x.b=5; p->a+p->b; }));
  EXPECT(48, ({ struct { struct { int b; int c[5]; } a[2]; } x; sizeof(x); }));

  EXPECT(8, ({
	struct {
	  struct {
	    int b;
	    int c[5];
	  } a[2];
	} x;
	x.a[0].b = 3;
	x.a[0].c[1] = 5;
	x.a[0].b + x.a[0].c[1];
      }));

  EXPECT(3, ({ typedef int foo; foo x = 3; x; }));
  EXPECT(4, ({ myint foo = 3; sizeof(foo); }));

  EXPECT(1, ({ typedef struct foo_ foo; 1; }));

  EXPECT(15, ({ int i=5; i*=3; i; }));
  EXPECT(1, ({ int i=5; i/=3; i; }));
  EXPECT(2, ({ int i=5; i%=3; i; }));
  EXPECT(8, ({ int i=5; i+=3; i; }));
  EXPECT(2, ({ int i=5; i-=3; i; }));
  EXPECT(40, ({ int i=5; i<<=3; i; }));
  EXPECT(0, ({ int i=5; i>>=3; i; }));
  EXPECT(1, ({ int i=5; i&=3; i; }));
  EXPECT(6, ({ int i=5; i^=3; i; }));
  EXPECT(7, ({ int i=5; i|=3; i; }));

  EXPECT(5, ({ int x; typeof(x) y = 5; y; }));
  EXPECT(1, ({ char x; typeof(x) y = 257; y; }));
  EXPECT(2, ({ char x; typeof(x) y[2]; y[0]=257; y[1]=1; y[0]+y[1]; }));

  EXPECT(0, ({ _Bool x = 0; x; }));
  EXPECT(1, ({ _Bool x = 1; x; }));
  EXPECT(0, ({ _Bool x; x = 0; x; }));
  EXPECT(1, ({ _Bool x; x = 2; x; }));
  EXPECT(0, ({ _Bool x; int y = 0; x = y; x; }));
  EXPECT(1, ({ _Bool x; int y = -1; x = y; x; }));
  EXPECT(0, ({ _Bool x; _Bool y = 0; x = y; x; }));
  EXPECT(1, ({ _Bool x; _Bool y = 1; x = y; x; }));
  EXPECT(1, ({ _Bool x = 0; !x; }));
  EXPECT(0, ({ _Bool x = 1; !x; }));
  EXPECT(-1, ({ _Bool x = 0; ~x; }));
//  EXPECT(-2, ({ _Bool x = 1; ~x; }));

  EXPECT(128, ((((((1+1)+(1+1))+(1+1)+(1+1))+(((1+1)+(1+1))+(1+1)+(1+1)))+((((1+1)+(1+1))+(1+1)+(1+1))+(((1+1)+(1+1))+(1+1)+(1+1))))+(((((1+1)+(1+1))+(1+1)+(1+1))+(((1+1)+(1+1))+(1+1)+(1+1)))+((((1+1)+(1+1))+(1+1)+(1+1))+(((1+1)+(1+1))+(1+1)+(1+1)))))+((((((1+1)+(1+1))+(1+1)+(1+1))+(((1+1)+(1+1))+(1+1)+(1+1)))+((((1+1)+(1+1))+(1+1)+(1+1))+(((1+1)+(1+1))+(1+1)+(1+1))))+(((((1+1)+(1+1))+(1+1)+(1+1))+(((1+1)+(1+1))+(1+1)+(1+1)))+((((1+1)+(1+1))+(1+1)+(1+1))+(((1+1)+(1+1))+(1+1)+(1+1))))));
  
  printf("OK\n");
  
  return 0;
}
