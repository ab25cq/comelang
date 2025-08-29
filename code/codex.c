#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdatomic.h>
#include <stdarg.h>
#include <stddef.h>

// Simple test harness
static int total_tests = 0;
static int failed_tests = 0;

#define TEST_INCR() do { total_tests++; } while(0)
#define TEST_FAIL(fmt, ...) do { \
    failed_tests++; \
    printf("FAIL: %s:%d in %s() -> " fmt "\n", __FILE__, __LINE__, __func__, ##__VA_ARGS__); \
} while(0)

#define ASSERT_TRUE(cond) do { \
    TEST_INCR(); \
    if(!(cond)) TEST_FAIL("ASSERT_TRUE(%s) failed", #cond); \
} while(0)

#define ASSERT_INT_EQ(exp, got) do { \
    TEST_INCR(); \
    long long _e = (long long)(exp); \
    long long _g = (long long)(got); \
    if(_e != _g) TEST_FAIL("INT expected=%lld got=%lld", _e, _g); \
} while(0)

#define ASSERT_UINT_EQ(exp, got) do { \
    TEST_INCR(); \
    unsigned long long _e = (unsigned long long)(exp); \
    unsigned long long _g = (unsigned long long)(got); \
    if(_e != _g) TEST_FAIL("UINT expected=%llu got=%llu", _e, _g); \
} while(0)

#define ASSERT_STR_EQ(exp, got) do { \
    TEST_INCR(); \
    const char* _e = (exp); \
    const char* _g = (got); \
    if((_e == NULL && _g != NULL) || (_e != NULL && _g == NULL) || (_e && _g && strcmp(_e,_g) != 0)) { \
        TEST_FAIL("STR expected=\"%s\" got=\"%s\"", _e ? _e : "(null)", _g ? _g : "(null)"); \
    } \
} while(0)

#define ASSERT_DBL_NEAR(exp, got, eps) do { \
    TEST_INCR(); \
    double _e = (double)(exp); \
    double _g = (double)(got); \
    double _d = fabs(_e - _g); \
    if(!(_d <= (eps))) TEST_FAIL("DBL expected=%.10f got=%.10f (|d|=%.3g, eps=%.3g)", _e, _g, _d, (double)(eps)); \
} while(0)

// Feature macros
#define SQR(x) ((x) * (x))
#define MAX(a,b) ((a) > (b) ? (a) : (b))

// Typedefs, enums, structs, unions
typedef struct {
    int x, y;
} Point;

typedef enum {
    kRed = 1,
    kGreen = 2,
    kBlue = 4
} Color;

typedef union {
    uint32_t u32;
    unsigned char b[4];
} U32Bytes;

// Compile-time checks
_Static_assert(sizeof(char) == 1, "char is 1 byte");
_Static_assert(sizeof(int) >= 2, "int is at least 16-bit");
_Static_assert(sizeof(U32Bytes) == 4, "U32Bytes must be 4 bytes");
_Static_assert((int)kRed == 1 && (int)kGreen == 2 && (int)kBlue == 4, "Color enum values");
_Static_assert(offsetof(Point, y) >= sizeof(int), "Point.y offset after x");
_Static_assert(sizeof(void*) >= sizeof(int*), "pointer size sane");

// _Noreturn declaration for compile-time/type checks
_Noreturn static void must_exit(int code);
_Static_assert(sizeof(&must_exit) == sizeof(void (*)(int)), "_Noreturn function pointer size matches");

// Function pointer example
static int add(int a, int b) { return a + b; }
static int mul(int a, int b) { return a * b; }
static int sub(int a, int b) { return a - b; }

// Static local state
static int bump_static_counter(void) {
    static int counter = 0; // persists across calls
    counter += 3;
    return counter;
}

// Recursion
static int factorial(int n) {
    return (n <= 1) ? 1 : n * factorial(n - 1);
}

// Helper functions for tests
static int sum_for_loop(int n) {
    int s = 0;
    for (int i = 1; i <= n; i++) s += i;
    return s;
}

static int sum_while_loop(int n) {
    int s = 0, i = 1;
    while (i <= n) { s += i; i++; }
    return s;
}

static int sum_do_while_loop(int n) {
    if (n <= 0) return 0;
    int s = 0, i = 1;
    do { s += i; i++; } while (i <= n);
    return s;
}

// Tests
static void test_arithmetic(void) {
    ASSERT_INT_EQ(7, 3 + 4);
    ASSERT_INT_EQ(12, 3 * 4);
    ASSERT_INT_EQ(2, 7 / 3);
    ASSERT_INT_EQ(1, 7 % 3);
    ASSERT_INT_EQ(11, 3 + 4 * 2);
    ASSERT_INT_EQ(14, (3 + 4) * 2);
    ASSERT_INT_EQ(-10, -(3 + 7));

    int a = 5; a += 2; ASSERT_INT_EQ(7, a);
    a |= 8; ASSERT_INT_EQ(15, a);
    a &= ~1; ASSERT_INT_EQ(14, a);
    a ^= 6; ASSERT_INT_EQ(8, a);

    unsigned u = 1u << 31; ASSERT_TRUE(u > 0);
}

static void test_bit_ops(void) {
    unsigned x = 0b10101010u; // 170
    unsigned y = 0b11001100u; // 204
    ASSERT_UINT_EQ(0b10001000u, x & y);
    ASSERT_UINT_EQ(0b11101110u, x | y);
    ASSERT_UINT_EQ(0b01100110u, x ^ y);
    ASSERT_UINT_EQ(0b01010101u, (unsigned)(~x & 0xFF));
    ASSERT_UINT_EQ(0b01010100u, (x << 1) & 0xFFu); // mask to 8 bits
    ASSERT_UINT_EQ(0b01010101u, x >> 1);
}

static void test_logic_ternary(void) {
    int a = 3, b = 4;
    ASSERT_TRUE(a < b && b > 0);
    ASSERT_TRUE(!(a == b));
    int m = a > b ? a : b;
    ASSERT_INT_EQ(4, m);
}

static void test_loops(void) {
    ASSERT_INT_EQ(55, sum_for_loop(10));
    ASSERT_INT_EQ(55, sum_while_loop(10));
    ASSERT_INT_EQ(55, sum_do_while_loop(10));
    ASSERT_INT_EQ(0, sum_do_while_loop(0));
}

static void test_arrays_pointers(void) {
    int arr[5] = {1,2,3,4,5};
    ASSERT_INT_EQ(1, arr[0]);
    ASSERT_INT_EQ(5, arr[4]);
    int *p = arr;
    ASSERT_INT_EQ(3, *(p + 2));
    *(p + 1) = 20; ASSERT_INT_EQ(20, arr[1]);

    int mat[2][3] = {{1,2,3},{4,5,6}};
    ASSERT_INT_EQ(5, mat[1][1]);

    // function pointer
    int (*op)(int,int) = add;
    ASSERT_INT_EQ(9, op(4,5));
    op = mul;
    ASSERT_INT_EQ(20, op(4,5));
}

// Function pointer array + dispatch
static void test_func_pointer_array(void) {
    int (*ops[3])(int,int) = { add, mul, sub };
    int a = 4, b = 2;
    ASSERT_INT_EQ(6,  ops[0](a,b));
    ASSERT_INT_EQ(8,  ops[1](a,b));
    ASSERT_INT_EQ(2,  ops[2](a,b));

    // Iterate over ops to ensure indexing/calls work generically
    int expected[3] = {6, 8, 2};
    for (int i = 0; i < 3; ++i) {
        ASSERT_INT_EQ(expected[i], ops[i](a,b));
    }
}

// Array initializers (designated, nested, partial)
static void test_array_initializers(void) {
    int a1[5] = {1, 2, 3}; // tail zero-initialized
    ASSERT_INT_EQ(1, a1[0]);
    ASSERT_INT_EQ(2, a1[1]);
    ASSERT_INT_EQ(3, a1[2]);
    ASSERT_INT_EQ(0, a1[3]);
    ASSERT_INT_EQ(0, a1[4]);

    int a2[6] = { [4] = 40, [2] = 20, [0] = 10 };
    ASSERT_INT_EQ(10, a2[0]);
    ASSERT_INT_EQ(0,  a2[1]);
    ASSERT_INT_EQ(20, a2[2]);
    ASSERT_INT_EQ(0,  a2[3]);
    ASSERT_INT_EQ(40, a2[4]);
    ASSERT_INT_EQ(0,  a2[5]);

    int m[2][3] = { [1] = { [2] = 9 } }; // nested designated
    ASSERT_INT_EQ(0, m[0][0]);
    ASSERT_INT_EQ(0, m[0][1]);
    ASSERT_INT_EQ(0, m[0][2]);
    ASSERT_INT_EQ(0, m[1][0]);
    ASSERT_INT_EQ(0, m[1][1]);
    ASSERT_INT_EQ(9, m[1][2]);

    // String literal initializer (includes NUL terminator)
    char s[] = "ABC";
    ASSERT_INT_EQ(4, (int)sizeof(s));
    ASSERT_INT_EQ('A', s[0]);
    ASSERT_INT_EQ('B', s[1]);
    ASSERT_INT_EQ('C', s[2]);
    ASSERT_INT_EQ('\0', s[3]);

    // Struct array with designated initializers
    Point pts[3] = { [1] = {.x = 2, .y = 3}, [0] = {.y = 1} };
    ASSERT_INT_EQ(0, pts[0].x);
    ASSERT_INT_EQ(1, pts[0].y);
    ASSERT_INT_EQ(2, pts[1].x);
    ASSERT_INT_EQ(3, pts[1].y);
    ASSERT_INT_EQ(0, pts[2].x);
    ASSERT_INT_EQ(0, pts[2].y);

    // Compound literals (C99)
    Point q = (Point){ .x = 7, .y = 8 };
    ASSERT_INT_EQ(7, q.x);
    ASSERT_INT_EQ(8, q.y);
    Point *qp = &(Point){ .x = 1, .y = 2 }; // automatic storage, valid within this block
    ASSERT_INT_EQ(1, qp->x);
    ASSERT_INT_EQ(2, qp->y);
}

// Casts: numeric, pointer, qualifiers
static void test_casts(void) {
    // Numeric casts
    double d = 3.9;
    int i = (int)d; // truncates toward zero
    ASSERT_INT_EQ(3, i);

    uint8_t small = (uint8_t)260; // modulo 256 -> 4
    ASSERT_UINT_EQ(4u, (unsigned)small);

    unsigned all1 = (unsigned)-1;
    ASSERT_UINT_EQ(~0u, all1);

    // Signed/unsigned interactions
    int neg = -5;
    unsigned u = (unsigned)neg; // large positive modulo 2^N
    ASSERT_TRUE(u > 1000000u || sizeof(unsigned) == 2); // allow 16-bit edge cases

    // Pointer casts round-trip via void*
    int v = 42;
    int *pi = &v;
    void *pv = (void*)pi;
    int *pi2 = (int*)pv;
    ASSERT_TRUE(pi == pi2);

    // uintptr_t round-trip
    uintptr_t addr = (uintptr_t)pi;
    int *pi3 = (int*)addr;
    ASSERT_TRUE(pi3 == pi);

    // Discard qualifiers via cast (do not write through it)
    const int cx = 7;
    const int *pcx = &cx;
    int *pncx = (int*)(uintptr_t)pcx; // just type conversion; no write
    ASSERT_TRUE((void*)pncx == (void*)pcx);
}

// Atomics (single-thread sanity checks)
static void test_atomics(void) {
    _Atomic int ai = ATOMIC_VAR_INIT(3);
    atomic_store_explicit(&ai, 10, memory_order_relaxed);
    ASSERT_INT_EQ(10, atomic_load_explicit(&ai, memory_order_relaxed));

    int old = atomic_fetch_add_explicit(&ai, 5, memory_order_relaxed);
    ASSERT_INT_EQ(10, old);
    ASSERT_INT_EQ(15, atomic_load_explicit(&ai, memory_order_relaxed));

    int expected = 15;
    bool exchanged = atomic_compare_exchange_strong_explicit(
        &ai, &expected, 99, memory_order_relaxed, memory_order_relaxed);
    ASSERT_TRUE(exchanged);
    ASSERT_INT_EQ(99, atomic_load_explicit(&ai, memory_order_relaxed));

    _Atomic unsigned long au = 0;
    unsigned long prev = atomic_fetch_or_explicit(&au, 0xAUL, memory_order_relaxed);
    ASSERT_UINT_EQ(0u, (unsigned)prev);
    ASSERT_UINT_EQ(0xAUL, (unsigned)atomic_load_explicit(&au, memory_order_relaxed));
}

// Atomics with different types and memory orders
static void test_atomics_orders_types(void) {
    _Atomic int ai = 0;
    atomic_store_explicit(&ai, 1, memory_order_release);
    int li = atomic_load_explicit(&ai, memory_order_acquire);
    ASSERT_INT_EQ(1, li);
    int expected = 1;
    bool ok = atomic_compare_exchange_weak_explicit(&ai, &expected, 2, memory_order_acq_rel, memory_order_relaxed);
    ASSERT_TRUE(ok);
    ASSERT_INT_EQ(2, atomic_load_explicit(&ai, memory_order_seq_cst));

    _Atomic long long all = 0;
    long long prevll = atomic_exchange_explicit(&all, 123LL, memory_order_seq_cst);
    ASSERT_INT_EQ(0, (int)prevll);
    ASSERT_INT_EQ(123, (int)atomic_load_explicit(&all, memory_order_relaxed));

    _Atomic uint32_t au32; atomic_init(&au32, 0u);
    uint32_t prev = atomic_fetch_add_explicit(&au32, 5u, memory_order_acq_rel);
    ASSERT_UINT_EQ(0u, prev);
    ASSERT_UINT_EQ(5u, atomic_load_explicit(&au32, memory_order_relaxed));
    uint32_t expu = 999u;
    bool ok2 = atomic_compare_exchange_strong_explicit(&au32, &expu, 42u, memory_order_release, memory_order_relaxed);
    ASSERT_TRUE(!ok2);
    ASSERT_UINT_EQ(5u, expu);

    _Atomic bool ab = false;
    bool oldb = atomic_exchange_explicit(&ab, true, memory_order_seq_cst);
    ASSERT_TRUE(!oldb && atomic_load(&ab));
}

// Alignment tests using _Alignas/_Alignof
static void test_alignas_alignof(void) {
    _Alignas(16) unsigned char buf[64];
    ASSERT_UINT_EQ(0u, (unsigned)((uintptr_t)buf % 16u));

    struct Al16 { _Alignas(16) char c; };
    ASSERT_TRUE(_Alignof(struct Al16) >= 16);
    struct Al16 s;
    ASSERT_UINT_EQ(0u, (unsigned)((uintptr_t)&s % 16u));

    ASSERT_TRUE(_Alignof(int) <= _Alignof(max_align_t));
    ASSERT_TRUE(_Alignof(double) <= _Alignof(max_align_t));
}

// SIMD-friendly alignment with _Alignas
static void test_simd_alignas(void) {
    static _Alignas(32) unsigned char buf32[128];
    static _Alignas(64) unsigned char buf64[128];
    ASSERT_UINT_EQ(0u, (unsigned)((uintptr_t)buf32 % 32u));
    ASSERT_UINT_EQ(0u, (unsigned)((uintptr_t)buf64 % 64u));

    struct V32 { _Alignas(32) double v[4]; };
    struct V64 { _Alignas(64) double v[8]; };
    struct V32 v32;
    struct V64 v64;
    ASSERT_UINT_EQ(0u, (unsigned)((uintptr_t)&v32 % 32u));
    ASSERT_UINT_EQ(0u, (unsigned)((uintptr_t)&v64 % 64u));
}

// _Noreturn usage (do not call; just type sanity)
static void test_noreturn_decl(void) {
    void (*fp)(int) = must_exit; // type-compatible with void(int)
    ASSERT_TRUE(fp != NULL);
}

static _Noreturn void must_exit(int code) {
    // Not called in tests; exists to validate _Noreturn syntax/type
    exit(code);
}

// _Generic tests
#define TYPE_TAG(x) _Generic((x), \
    int: "int", \
    unsigned: "unsigned", \
    long: "long", \
    float: "float", \
    double: "double", \
    const char*: "cstr", \
    char*: "char*", \
    default: "other")

static void test_generic(void) {
    ASSERT_STR_EQ("int", TYPE_TAG(1));
    ASSERT_STR_EQ("double", TYPE_TAG(1.0));
    ASSERT_STR_EQ("float", TYPE_TAG(1.0f));
    ASSERT_STR_EQ("cstr", TYPE_TAG((const char*)"hi"));
    char buf[1];
    ASSERT_STR_EQ("char*", TYPE_TAG((char*)buf));
    ASSERT_STR_EQ("other", TYPE_TAG((short)1));

    int gi = _Generic(0, int: 1, default: 2);
    int gd = _Generic(0.0, double: 3, float: 4, default: 5);
    int gf = _Generic(0.0f, double: 3, float: 4, default: 5);
    int gp = _Generic((const char*)0, const char*: 7, char*: 8, default: 9);
    ASSERT_INT_EQ(1, gi);
    ASSERT_INT_EQ(3, gd);
    ASSERT_INT_EQ(4, gf);
    ASSERT_INT_EQ(7, gp);
}

// _Generic-based function dispatch (compile-time selection)
static int max_int(int a, int b) { return a > b ? a : b; }
static long max_long(long a, long b) { return a > b ? a : b; }
static double max_double(double a, double b) { return a > b ? a : b; }

#define TYPED_MAX(x, y) _Generic((x), \
    int: max_int, \
    long: max_long, \
    double: max_double, \
    default: max_double)(x, y)

static void test_generic_dispatch(void) {
    // Function selection by type
    int (*fi)(int,int) = _Generic(0, int: max_int, default: max_int);
    long (*fl)(long,long) = _Generic(0L, long: max_long, default: max_long);
    double (*fd)(double,double) = _Generic(0.0, double: max_double, default: max_double);
    ASSERT_TRUE(fi == max_int);
    ASSERT_TRUE(fl == max_long);
    ASSERT_TRUE(fd == max_double);

    // Value results via macro-dispatch
    ASSERT_INT_EQ(5, TYPED_MAX(3, 5));
    ASSERT_INT_EQ(7L, (long)TYPED_MAX(7L, 2L));
    ASSERT_DBL_NEAR(2.5, TYPED_MAX(2.5, -1.0), 1e-12);
}

// Variable Length Arrays (VLA)
static void test_vla(void) {
    int n = 10;
    int a[n];
    for (int i = 0; i < n; ++i) a[i] = i + 1;
    size_t bytes = sizeof a; // runtime for VLA
    ASSERT_UINT_EQ((unsigned)(n * (int)sizeof(int)), (unsigned)bytes);
    int s = 0; for (int i = 0; i < n; ++i) s += a[i];
    ASSERT_INT_EQ(n * (n + 1) / 2, s);

    // 2D VLA
    int r = 3, c = 4;
    int m[r][c];
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) m[i][j] = i * 10 + j;
    }
    ASSERT_INT_EQ(0, m[0][0]);
    ASSERT_INT_EQ(11, m[1][1]);
    ASSERT_INT_EQ(23, m[2][3]);

    // VLA parameter function is defined at file scope (below)
}

// Helper defined at file scope to accept VLA parameter
static int sum_vla_param(int len, int arr[len]) {
    int sum = 0; for (int i = 0; i < len; ++i) sum += arr[i];
    return sum;
}

static void test_vla_more(void) {
    int n = 7; int arr[n]; for (int i = 0; i < n; ++i) arr[i] = i;
    ASSERT_INT_EQ((n - 1) * n / 2, sum_vla_param(n, arr));
}

// Variadic functions
static int sum_variadic(int count, ...) {
    va_list ap; va_start(ap, count);
    int s = 0;
    for (int i = 0; i < count; ++i) s += va_arg(ap, int);
    va_end(ap);
    return s;
}

static void test_variadic(void) {
    ASSERT_INT_EQ(0, sum_variadic(0));
    ASSERT_INT_EQ(6, sum_variadic(3, 1, 2, 3));
    ASSERT_INT_EQ(55, sum_variadic(10, 1,2,3,4,5,6,7,8,9,10));
}

// _Thread_local tests (single-thread semantics)
_Thread_local static int g_tls_counter = 0;
static int tls_get(void) { return g_tls_counter; }
static void tls_inc(void) { g_tls_counter++; }
static int* tls_addr(void) { return &g_tls_counter; }

static void test_thread_local(void) {
    int *a1 = tls_addr();
    int start = tls_get();
    tls_inc(); tls_inc();
    ASSERT_INT_EQ(start + 2, tls_get());
    int *a2 = tls_addr();
    ASSERT_TRUE(a1 == a2);
}
static void test_strings(void) {
    char buf[32];
    strcpy(buf, "Hello");
    strcat(buf, ", ");
    strcat(buf, "World");
    ASSERT_STR_EQ("Hello, World", buf);
    ASSERT_INT_EQ(12, (int)strlen(buf));

    // memcpy / memcmp
    char a[8] = {0};
    char b[8] = {0};
    for (int i = 0; i < 8; i++) a[i] = (char)(i + 1);
    memcpy(b, a, sizeof(a));
    ASSERT_INT_EQ(0, memcmp(a, b, sizeof(a)));
}

static void test_structs_enums_unions(void) {
    Point p = { .x = 3, .y = 4 };
    ASSERT_INT_EQ(3, p.x);
    ASSERT_INT_EQ(4, p.y);
    Point *pp = &p; pp->x += 7; pp->y += 6;
    ASSERT_INT_EQ(10, p.x);
    ASSERT_INT_EQ(10, p.y);

    Color c = kGreen;
    int res = 0;
    switch (c) {
        case kRed:   res = 1; break;
        case kGreen: res = 2; break;
        case kBlue:  res = 3; break;
        default:     res = -1; break;
    }
    ASSERT_INT_EQ(2, res);

    U32Bytes u; u.u32 = 0x11223344u;
    ASSERT_UINT_EQ(0x44u, (unsigned)u.b[0]); // assuming little-endian on common platforms
    ASSERT_UINT_EQ(0x33u, (unsigned)u.b[1]);
}

static void test_macros_static(void) {
    ASSERT_INT_EQ(25, SQR(5));
    ASSERT_INT_EQ(36, SQR(5 + 1)); // ((5+1)*(5+1))
    ASSERT_INT_EQ(9, MAX(9, -1));

    int a = bump_static_counter(); // 3
    int b = bump_static_counter(); // 6
    int c = bump_static_counter(); // 9
    ASSERT_INT_EQ(3, a);
    ASSERT_INT_EQ(6, b);
    ASSERT_INT_EQ(9, c);
}

static void test_recursion(void) {
    ASSERT_INT_EQ(1, factorial(0));
    ASSERT_INT_EQ(1, factorial(1));
    ASSERT_INT_EQ(120, factorial(5));
}

static void test_floating_point(void) {
    double x = 0.1 + 0.2; // infamous 0.30000000000000004
    ASSERT_DBL_NEAR(0.3, x, 1e-9);
    ASSERT_DBL_NEAR(M_PI * M_PI, SQR(M_PI), 1e-12);
}

int main(void) {
    printf("Running C syntax/feature tests...\n");
    test_arithmetic();
    test_bit_ops();
    test_logic_ternary();
    test_loops();
    test_arrays_pointers();
    test_strings();
    test_structs_enums_unions();
    test_macros_static();
    test_recursion();
    test_floating_point();
    test_func_pointer_array();
    test_array_initializers();
    test_casts();
    test_generic();
    test_generic_dispatch();
    test_vla();
    test_vla_more();
    test_variadic();
    test_thread_local();
    test_atomics();
    test_atomics_orders_types();
    test_alignas_alignof();
    test_simd_alignas();
    test_noreturn_decl();

    int passed = total_tests - failed_tests;
    printf("\nSummary: %d tests, %d passed, %d failed\n", total_tests, passed, failed_tests);
    if (failed_tests == 0) {
        printf("All tests passed. ✅\n");
    } else {
        printf("Some tests failed. ❌\n");
    }
    return failed_tests == 0 ? 0 : 1;
}
