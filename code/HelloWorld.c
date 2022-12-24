using neo-c;

int puts(const char* msg);
int printf(const char *format, ...);

typedef long size_t;

size_t strlen(const char *s);

void *calloc(size_t nmemb, size_t size);
void free(void *ptr);

int strcmp(const char* s1, const char* s2);

void exit(int status);

char *strcpy(char *dest, const char *src);

char *strncpy(char *dest, const char *src, size_t n);

int strcmp(const char *s1, const char *s2);

void xassert(const char* msg, bool exp)
{
    printf(msg);
    printf("...");

    if(exp) {
        puts("ok");
    }
    else {
        puts("false");
        exit(2);
    }
}

inline void inline_fun() 
{
    puts("HELLO WORLD");
}

inline void inline_fun2(char* msg)
{
    puts(msg);
}


inline void inline_fun3(int x, int y)
{
    printf("%d\n", x + y);
}

inline int inline_fun4(int x, int y)
{
    return x + y;
}

inline int inline_fun5(int x, int y)
{
    return inline_fun4(x, y);
}

struct sData
{
    int a;
    int b;
};

struct sUndefinedStruct;

struct sUndefinedStruct2 {
    struct sUndefinedStruct* data;
};

struct sUndefinedStruct {
    int data;
    int data2;
};

struct sAnonymousStruct {
    struct { int a; int b; } data;
};

enum eEnum { kEnumA, kEnumB, kEnumC };

enum { kEnumD, kEnumE, kEnumF };

enum eEnum2 { kEnumG, kEnumH, kEnumI } AAA;

enum { kEnumJ, kEnumK, kEnumL } BBB;

union uData {
    int data1;
    long data2;

    struct { int a; long b; long c; } data3;
} gUnionData;

int gGlobalArray[3];
int gGlobalArray2[3][3];

int gGlobalArray3[3] = {
    1,2,3
};

int gGlobalArray4[3][2] = {
    1,2, 3,4, 5,6
};

int gGlobalArray5[2][3][4] = {
    1,2,3,4, 5,6,7,8, 9,10,11,12,
    13,14,15,16, 17,18,19,20, 21,22,23,24
};

char gGlobalString[] = "ABC";

char* gGlobalArray6[3] = { "AAA", "BBB", "CCC" };

char gGlobalArray7[4] = { "ABC" };

char gGlobalArray8[4] = "ABC";

typedef __builtin_va_list va_list;

int vasprintf(char **strp, const char *fmt, va_list ap);

static void funA()
{
    static int xxx = 1;
    printf("%d\n", xxx);
    xxx++;
}

int funB(int x, int y)
{
    return x + y;
}

void int_show(int self)
{
    printf("int_show %d\n", self);
}


struct GenericsType<T, T2> 
{
    T item;
    T2 item2;
};

void fun(GenericsType<int, bool>* data)
{
    int a = 1;
}

void funX()
{
}

impl GenericsType<T,T2>
{
    void fun(GenericsType<T,T2>* self)
    {
        printf("%d %s\n", self.item, self.item2);
    }

    int fun2(GenericsType<T,T2>* self)
    {
        return self.item + 1;
    }

    int fun3(GenericsType<T,T2>* self) {
        GenericsType<int, char*>*% data = new GenericsType<int, char*>;

        data.item = 1;

        return self.fun2() + data.fun2();
    }

    int fun4(GenericsType<T,T2>* self) {
        T i = 1;
        T j = 2;
        return i + j;
    }
}

struct Data <T>
{
    T a;
    T b;
};

inline void inline_funX(char* a)
{
    puts(a);
}

void normal_fun(char* a)
{
    puts(a);
}

enum AAA
  {
    kA,
    kB = kA + 1,
    kC
};

extern void funY(int a, int b) version 1;
extern void funY(int a, int b) version 2;
extern void funY(int a, int b) version 3;

void funY(int a, int b) version 1
{
    puts("version 1");
}

void funY(int a, int b) version 2
{
    inherit(a, b);
    puts("version 2");
}

void funY(int a, int b) version 3
{
    inherit(a, b);
    puts("verion 3");
    printf("a %d b %d\n", a, b);
}

int funXY(int a, int b) version 1
{
    return 1;
}

int funXY(int a, int b) version 2
{
    return inherit(a, b) + 1;
}

int funXY(int a, int b) version 3
{
    return inherit(a, b) + 1;
}

int xxx(int a, int b) 
{
    return a + b;
}


int main()
{
    printf("HELLO WORLD\n");

    xassert("assert test", true);
    xassert("exp test", 1 < 2);
    xassert("exp2 test", 2 > 1);
    xassert("exp3 test", 1 >= 1);
    xassert("exp4 test", 1 <= 1);
    xassert("exp5 test", 1 == 1);
    xassert("exp6 test", 1 != 2);
    xassert("exp7 test", 1+1 == 2);
    xassert("exp8 test", 1-1 == 0);
    xassert("exp9 test", 1*2 == 2);
    xassert("exp10 test", 2/2 == 1);
    xassert("exp11 test", 3%2 == 1);

    int a = 1 + 1;

    xassert("auto test", a == 2);

    xassert("long test", 1L + 1L == 2L);

    xassert("auto cast test", 1L + 1 == 2);

    inline_fun();

    inline_fun2("HELLO HELLO");

    inline_fun3(1,2);

    xassert("inline function test", inline_fun4(1, 2) == 3);

    xassert("inline function test2", inline_fun5(1, 2) == 3);

    sData c;

    c.a = 1;

    xassert("structore test", c.a == 1);


    sUndefinedStruct d;

    d.data = 111;

    xassert("undefined struct test1", d.data == 111);

    sUndefinedStruct2 e;

    struct { int a; int b; } f;

    struct AnonymousStruct { int a } g;

    sAnonymousStruct h;

    xassert("enum test", kEnumA == 0);
    xassert("enum test2", kEnumD == 0);
    xassert("enum test3", kEnumG == 0);
    xassert("enum test4", kEnumJ == 0);

    enum ENUMENUM { kEnumX, kEnumY, kEnumZ } i;
    enum { kEnumX2, kEnumY2, kEnumZ2 } j;

    xassert("enum test5", kEnumX == 0);
    xassert("enum test6", kEnumX2 == 0);

    const int k = 1;

    xassert("constant test", k == 1);

    xassert("sizeof test", sizeof(long long int) == 8);

    uData l;

    l.data1 = 111;

    xassert("union test", l.data1 == 111);

    l.data2 = 222;

    xassert("union test2", l.data2 == 222);

    xassert("union test3", l.data1 != 111);

    gUnionData.data1 = 123;

    xassert("union test4", gUnionData.data1 == 123);

    int m[5];

    m[0] = 123;

    xassert("array test", m[0] == 123);

    int n[5][5];

    n[1][2] = 123;

    xassert("array test2", n[1][2] == 123);

    int o[5][5][5];

    o[1][2][3] = 123;

    xassert("array test3", o[1][2][3] == 123);

    int p[5][5][5][5];

    int q = 123;

    int* r = &q;

    xassert("pointer test", *r == 123);

    int s[5][5];

    int* t = &s[1][0];

    *t = 123;

    xassert("pointer test2", s[1][0] == 123);

    int u[5][5];

    u[1][0] = 123;

    int* v = u[1];

    *v = 234;

    xassert("pointer test3", u[1][0] == 234);

    int w[5] = { 1,2,3,4,5 };
    
    printf("%d\n", w[0]);
    printf("%d\n", w[1]);
    printf("%d\n", w[2]);
    printf("%d\n", w[3]);
    printf("%d\n", w[4]);
    

    xassert("array test4", w[1] == 2);

    int x[3][2] = { 1,2, 3,4, 5,6 };

    xassert("array test5", x[2][0] == 5);
    xassert("array test6", x[1][1] == 4);

    int y[2][3][2] = { 1,2, 3,4, 5,6
                     , 7,8, 9,10, 11,12 };

    xassert("array test7", y[0][1][0] == 3);
    xassert("array test8", y[1][2][1] == 12);

    gGlobalArray[1] = 2;

    xassert("global array", gGlobalArray[1] == 2);

    gGlobalArray2[1][1] = 2;

    xassert("global array2", gGlobalArray2[1][1] == 2);

    xassert("global array3", gGlobalArray3[0] == 1);

    xassert("global array4", gGlobalArray4[2][1] == 6);

    xassert("global array5", gGlobalArray5[1][2][0] == 21);

    int len = 5;

    int z[len];

    z[3] = 1;

    xassert("array test9", z[3] == 1);

    xassert("global variable test", strcmp(gGlobalString, "ABC") == 0);

    xassert("global variable test2", strcmp(gGlobalArray6[1], "BBB") == 0);

    char* aa[3] = { "AAA", "BBB", "CCC" };

    xassert("array test9", strcmp(aa[0], "AAA") == 0);

    xassert("global variable test3", strcmp(gGlobalArray7, "ABC") == 0);

    xassert("global variable test3", strcmp(gGlobalArray8, "ABC") == 0);

    char str[4] = "ABC";

    xassert("array test10", strcmp(str, "ABC") == 0);

    char str2[4] = { 'A', 'B', 'C', '\0' };

    xassert("array test11", strcmp(str2, "ABC") == 0);

    char str3[4] = { "ABC" };

    xassert("array test12", strcmp(str3, "ABC") == 0);

    funA();
    funA();

    int (*fun)(int, int) = funB;

    xassert("fun pointer test", fun(1, 2) == 3);

    int ab = 1;

    ab++;

    xassert("operator test", ab == 2);

    int ac = 2;

    xassert("operator test2", ac % 3 == 2);

    xassert("operator test3", true && true);

    xassert("operator test4", false || true);

    char* ad = null;

    xassert("operator test5", ad == null);

    xassert("operator test5", !false);

    int ii=0;
    while(ii < 5) {
        printf("%d\n", ii);
        ii++;
    }

    for(int jj=0; jj<5; jj++) {
        printf("%d\n", jj);
    }

    {
        int a = 123;
        printf("%d\n", a);
    }
    {
        int a = 234;
        printf("%d\n", a);
    }

    switch(2) {
        case 1:
            puts("AAA");
            break;

        case 2:
            puts("BBB");
            break;
    }

    int kk = 0;

test_label:
    printf("kk %d\n", kk);
    kk++;
    if(kk < 5) {
        goto test_label;
    }


    xassert("conditional operator", 1 == 1 ? true: false);

    int bd = 2;
    int bf = 2;
    xassert("conditional operator", ((bd == 2) ? bf : 0) == 2);

    xassert("complement operator", (0x01 ^ 0xFF) == 0xFE);

    xassert("func name", strcmp(__func__, "main") == 0);

    int bg = 3;

    xassert("++", bg++ == 3);
    xassert("++", bg == 4);

    int bh = 4;

    xassert("--", bh-- == 4);
    xassert("--", bh == 3);

    xassert("--", --bh == 2);

    int bi = 5;

    bi += 4;

    xassert("+=", bi == 9);

    int bj = 4;
    bj *= 4;

    xassert("*=", bj == 16);
    xassert("++", ++bj == 17);
    xassert("++", bj == 17);

    int array[128];
    int* ppp = array;

    ppp++;

    xassert("pointer sub test", ppp - array == 1);

    auto lam = int lambda(int x, int y) { 
        return x + y;
    };

    xassert("lambda test", lam(1, 2) == 3);

    funY(1, 2);
    xassert("mixin-layers test", funXY(1, 2) == 3);

    int (*funXX)(int, int) = xxx;
    
    xassert("fun pointer test", funXX(1, 1) == 2);

    return 0;
}

