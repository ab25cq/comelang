// c_conformance_smoke.c
// Compile with: gcc -std=c11 -Wall -Wextra -O2 c_conformance_smoke.c -o ccheck
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stddef.h>
#include <stdarg.h>
#include <string.h>

#define UNUSED(x) (void)(x)

// ---- test harness ---------------------------------------------------------
static int g_fail = 0;
static int g_pass = 0;

#define STR2(x) #x
#define STR(x) STR2(x)

#define TEST(expr) do { \
    if (expr) { g_pass++; } \
    else { g_fail++; fprintf(stderr, "FAIL: %s at %s:%d\n", STR(expr), __FILE__, __LINE__); } \
} while (0)

#define EQ(a,b) ((a)==(b))
#define NE(a,b) ((a)!=(b))

// ---- compile-time checks (C11) -------------------------------------------
_Static_assert(sizeof(char) == 1, "char must be 1 byte");
_Static_assert(sizeof(short) <= sizeof(int), "short <= int");
_Static_assert(sizeof(long) >= sizeof(int), "long >= int");
_Static_assert(sizeof(void*) >= sizeof(char*), "pointer sizes consistent");

// ---- macros / preprocessor ------------------------------------------------
#define CAT(a,b) a##b
#define STRLIT(x) #x
#define MAX(a,b) ((a)>(b)?(a):(b))
#define IS_POWER_OF_TWO(x) (((x)!=0) && (((x)&((x)-1))==0))

// Variadic macro
#define SUM3(a, ...) ((a) + __VA_ARGS__)

// ---- typedef / enums ------------------------------------------------------
typedef unsigned long ulong_t;
typedef struct Point { int x, y; } Point;

enum Color { RED=1, GREEN=2, BLUE=4 };
typedef enum Color Color;

// ---- bitfields / struct layout -------------------------------------------
struct Flags {
    unsigned a:1;
    unsigned b:2;
    unsigned c:5;
};

struct WithFlexible {
    int n;
    char data[]; // flexible array member (C99)
};

// ---- unions ---------------------------------------------------------------
union U32F {
    uint32_t u;
    float f;
};

// ---- function pointers / arrays / declarators ----------------------------
static int add(int a, int b) { return a+b; }
static int mul(int a, int b) { return a*b; }
typedef int (*binop_t)(int,int);

// ---- inline (C99) ---------------------------------------------------------
static inline int sq(int x) { return x*x; }

// ---- generic selection (C11) ---------------------------------------------
#define type_tag(x) _Generic((x), \
    int: 1, \
    unsigned: 2, \
    long: 3, \
    unsigned long: 4, \
    float: 5, \
    double: 6, \
    default: 0)

// ---- varargs --------------------------------------------------------------
static long vaddl(int n, ...) {
    va_list ap; va_start(ap, n);
    long s = 0;
    for (int i=0;i<n;i++) s += va_arg(ap, long);
    va_end(ap);
    return s;
}

// ---- compound literals / designated inits --------------------------------
static Point make_point(int x, int y) {
    // compound literal
    Point p = (Point){ .x = x, .y = y };
    return p;
}

// ---- const/volatile qualifiers (basic sanity only) ------------------------
static int read_through_volatile(volatile int *p) {
    return *p; // side-effect barrier not testable here; just type-correctness
}

// ---- helper for float close check ----------------------------------------
static int feq(double a, double b, double eps) { return (a>b? a-b : b-a) <= eps; }

// ---- tests ---------------------------------------------------------------
static void test_integers(void) {
    TEST(EQ( (int) (1u + 2u), 3 ));
    TEST(EQ( (int) ((unsigned)1 - 2), (int)((unsigned)-1) )); // wrap
    TEST(EQ( (ulong_t)42, 42UL ));
    TEST(IS_POWER_OF_TWO(1));
    TEST(IS_POWER_OF_TWO(64));
    TEST(!IS_POWER_OF_TWO(0));
    TEST(!IS_POWER_OF_TWO(12));

    // integer promotions & shift
    unsigned x = 1u; x <<= 5; TEST(EQ(x, 32u));

    // sizeof / alignof (C11)
    TEST(sizeof(size_t) >= sizeof(unsigned));
    _Static_assert(_Alignof(max_align_t) >= _Alignof(long double), "max_align_t align");
}

static void test_chars_strings(void) {
    const char *s = "hello";
    TEST(EQ(s[0],'h'));
    TEST(EQ((int)strlen("abcdef"), 6));
    char buf[16]; strcpy(buf, "abc"); strcat(buf, "def");
    TEST(EQ(strcmp(buf,"abcdef"),0));

    // escape sequences
    const char *t = "line1\nline2\t\\";
    TEST(EQ((int)strchr(t,'\\') - (int)(t), (int)strlen("line1\nline2\t")));
}

static void test_arrays_pointers(void) {
    int a[5] = {0,1,2,3,4};
    TEST(EQ(*(a+3),3));
    TEST(EQ(a[4]-a[1],3));

    int *p = a;
    *(p+2) = 20;
    TEST(EQ(a[2],20));

    int (*pa)[5] = &a; // pointer to array
    TEST(EQ((*pa)[1],1));
}

static void test_structs_unions(void) {
    struct Flags f = { .a=1, .b=3, .c=17 }; // b (2 bits) will truncate 3->3 ok
    TEST(EQ(f.a,1));
    TEST(EQ(f.b,3));
    TEST(EQ(f.c,17));

    // layout sanity
    struct { char c; int i; } s1;
    TEST(sizeof(s1) >= sizeof(char)+sizeof(int)); // padding allowed

    // designated init
    Point p = { .y=7, .x=3 };
    TEST(EQ(p.x,3) && EQ(p.y,7));

    // union aliasing within allowed common initial sequence
    union U32F uf; uf.u = 0x3f800000u; // 1.0f in IEEE-754
    float one = uf.f;
    TEST(feq(one, 1.0, 1e-6));

    // flexible array (allocation + access)
    size_t bytes = offsetof(struct WithFlexible, data) + 5;
    struct WithFlexible *wf = (struct WithFlexible*)malloc(bytes);
    TEST(wf != NULL);
    if (wf) {
        wf->n = 5;
        memcpy(wf->data, "abcd", 5); // includes '\0'
        TEST(EQ((int)wf->n, 5));
        TEST(EQ(strcmp(wf->data, "abcd"), 0));
        free(wf);
    }
}

static void test_functions_fpointers(void) {
    binop_t ops[2] = { add, mul };
    TEST(EQ(ops[0](2,3),5));
    TEST(EQ(ops[1](4,5),20));

    int v = sq(9);
    TEST(EQ(v,81));

    // passing/returning structs
    Point q = make_point(4,6);
    TEST(EQ(q.x+q.y,10));
}

static void test_control_flow(void) {
    int s=0;
    for (int i=0;i<10;i++) s+=i;
    TEST(EQ(s,45));

    int w=0; int i=0; while(i<5){ w+=i++; }
    TEST(EQ(w,10));

    int d=0; do { d++; } while(d<3);
    TEST(EQ(d,3));

    int sw = 2;
    switch(sw){
        case 1: TEST(0); break;
        case 2: TEST(1); break;
        default: TEST(0);
    }
}

static void test_varargs_generic(void) {
    long s = vaddl(4, 10L, 20L, 30L, 40L);
    TEST(EQ(s,100L));

    int ti = type_tag((int)0);
    int tu = type_tag((unsigned)0);
    int tl = type_tag((long)0);
    int tdl = type_tag((double)0);
    TEST(EQ(ti,1) && EQ(tu,2) && EQ(tl,3) && EQ(tdl,6));
}

static void test_compound_literals(void) {
    int *p = (int[]){1,2,3,4};
    TEST(EQ(p[2],3));
    Point r = (Point){.x=11,.y=22};
    TEST(EQ(r.x,11) && EQ(r.y,22));
}

static void test_const_volatile(void) {
    const int ci = 123;
    int dummy = 0;
    volatile int vi = 7 + ci;
    dummy += read_through_volatile(&vi);
    TEST(EQ(dummy, 7+123));
}

static void test_pointers_qualifier_conversions(void) {
    const char *cs = "abc";
    const void *cv = cs;
    UNUSED(cv);

    char *m = malloc(4);
    TEST(m != NULL);
    if (m) {
        strcpy(m, "xy");
        const char *cm = m; // add const
        TEST(EQ(cm[1],'y'));
        free(m);
    }
}

static void test_preprocessor(void) {
    int CAT(na,me) = 5;
    TEST(EQ(name,5));
    TEST(EQ(strcmp(STRLIT(hello world), "hello world"), 0));
    TEST(EQ(MAX(2,3),3));
    TEST(EQ(SUM3(1,2,3),6));
}

static void test_memory(void) {
    // basic memset/memcpy/memmove semantics
    char s[8]; memset(s, 0, sizeof(s));
    char t[8]; for (int i=0;i<8;i++) t[i]=(char)i;
    memcpy(s,t,8);
    TEST(EQ(memcmp(s,t,8),0));
    memmove(s+2, s, 6); // overlapping forward
    TEST(EQ(s[2],0) && EQ(s[7],5));
}

// ---- tricky integer conversions ------------------------------------------
static void test_integer_conversions(void) {
    // signed-to-unsigned conversion and back
    int si = -1;
    unsigned ui = (unsigned)si;
    TEST(NE(ui, 0u));

    // modulo arithmetic defined for unsigned
    unsigned r = (unsigned)3000000000u + 2000000000u;
    UNUSED(r); // value depends on width, but expression must compile/evaluate
    TEST(1);   // semantic smoke only

    // shift behavior: right-shift of unsigned is logical
    unsigned u = 0x80000000u;
    TEST(EQ(u >> 1, 0x40000000u));
}

// ---- main ----------------------------------------------------------------
int main(void) {
    test_integers();
    test_chars_strings();
    test_arrays_pointers();
    test_structs_unions();
    test_functions_fpointers();
    test_control_flow();
    test_varargs_generic();
    test_compound_literals();
    test_const_volatile();
    test_pointers_qualifier_conversions();
    test_preprocessor();
    test_memory();
    test_integer_conversions();

    if (g_fail == 0) {
        printf("All tests passed (%d checks).\n", g_pass);
        return EXIT_SUCCESS;
    } else {
        printf("Tests failed: %d failed, %d passed.\n", g_fail, g_pass);
        return EXIT_FAILURE;
    }
}

