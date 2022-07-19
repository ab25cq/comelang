#include <comelang.h>

long fun()
{
    return (long)1;
}

int gArray[10];

int (*ArrayPointerRresultFun(int c, int d))[10]
{
    return &gArray;
}

char* aaa = "ABC";
int bbb[] = { 1, 2, 3};

char ccc[] = "ABC";

char* arrays2[] = { "AAA", "BBB", "CCC" };

struct sData {
    int a;
    int b;
};

struct sData aa = { 1, 2 };

struct {
    char* a;
    int b;
} xyz[] = { { "AAA",2 }, { "BBB", 4 }};

struct Node {
    int a;
    int b;
};

struct Node gNode = { 1 };

int add2(int (*a)[2]) { return a[0][0] + a[0][0]; }
int add3(int b[][2]) { return b[0][0] + b[1][0]; }
int add4(int c[2][2]) { return c[0][0] + c[1][0]; }

struct sData2 {
    int a;
    int b;
    
    struct {
        int c;
        int d;
    } c;
    
    struct {
        int c;
        int d;
    } d;
    
    union {
        int a;
        long b;
        char c;
    } e;
};

union eNode2 {
    int a;
    long b;
    char c;
};

eNode2 gNodeX = (eNode2) { .c = 'd' };

struct sData2 gData = (struct sData2){ .a = 1, .b = 2, .c = { .c = 3, .d =4 }, .e = { .c='c' } };

struct sData2* gData2 = &(struct sData2) { .a = 3, .b = 4, .c = { .c = 4, .d = 5} };
struct sData2 {
    int a;
    int b;
    
    struct {
        int c;
        int d;
    } c;
    
    struct {
        int c;
        int d;
    } d;
    
    union {
        int a;
        long b;
        char c;
    } e;
};

struct sData3 {
    int a;
    
    struct {
        int a;
        int b;
    } b;
    
    union {
        int a;
        long b;
        char c;
    } c;
    
    struct {
        struct {
            int a;
            int b;
        } a;
    } d;
};

struct sData3 gData3 = (struct sData3){ .a = 1, .b = { .a = 3, .b =4 }, .c = {.c ='f' }, .d = { .a = { .a = 111, .b = 222}}};

union uUnion {
    struct {
        int a;
        int b;
    } a;
    
    struct {
        char a;
        char b;
    } b;
    
    int c;
    
    union {
        int a;
        char b;
    } d;
    
    struct {
        struct {
            int a;
            int b;
        } a;
    } e;
};

union uUnion gA = (union uUnion) { .b = { .a = 'c', .b = 'd' } };
union uUnion gB = (union uUnion) { .a = { .a = 111, .b = 222 }};
union uUnion gC = (union uUnion) { .c = 123 };
union uUnion gD = (union uUnion) { .d = { .a = 777 } };
union uUnion gE = (union uUnion) { .e = { .a = { .a = 111, .b = 222} } };

struct sXXX {
    int a;
    int b;
};

struct sXXX xxx[3] = {
    { .a = 111, .b = 222 }, { .a = 333, .b = 444 }, { .a = 555, .b = 666 }
};

int main(int argc, char** argv)
{
    int a[10];
    int (*b)[10] = &a;
    
    xassert("array pointer result fun", &gArray == ArrayPointerRresultFun(1,1));

    xassert("global string test", aaa === "ABC");
    xassert("array initializer", bbb[0] == 1 && bbb[1] == 2 && bbb[2] == 3);
    xassert("global string test2", ccc === "ABC");
    xassert("array initializer2", arrays2[0] === "AAA" && arrays2[1] === "BBB" && arrays2[2] === "CCC");
    
    int c[123] = { [0] = 1, [1] = 2, [2] = 3 };
    
    xassert("array initializer", c[0] == 1 && c[1] == 2 && c[2] == 3);
    
    int d[3][3] = { [0][1] = 1, [1][1] = 2, [2][2] = 3 };
    
    xassert("array initializer2", d[0][1] == 1 && d[1][1] == 2 && d[2][2] == 3);
    
    struct sData bb = { 3, 4};
    
    xassert("struct initializerA", aa.a == 1 && aa.b == 2);
    xassert("struct initializerB", bb.a == 3 && bb.b == 4);

    xassert("struct initializerC", xyz[0].a === "AAA" && xyz[0].b == 2 && xyz[1].a === "BBB" && xyz[1].b == 4);
    struct {
        char* a;
        int b;
    } xyz2[] = { { "AAA",2 }, { "BBB", 4 }};
    
    xassert("struct initializerD", xyz2[0].a === "AAA" && xyz2[0].b == 2 && xyz2[1].a === "BBB" && xyz2[1].b == 4);
    
    xassert("struct initializerE", gNode.a == 1 && gNode.b == 0);
    
    int ggg[2][2];
    
    ggg[0][0] = 1;
    ggg[1][0] = 2;
    
    xassert("array pram test", add2(ggg) == 2 && add3(ggg) == 3 && add4(ggg) == 3);
    
    int xxxxxxx=0; switch(3) case 1: xxxxxxx=5;
    
    xassert("siwthc test", xxxxxxx == 0);
    
    bool hhh = true;
    
    xassert("bool test", (int)hhh == 1);
    
    char xxxxxxxxxxxyx = 'c'; typeof(xxxxxxxxxxxyx) iii[2];
    
    iii[0] = 'd';
    iii[1] = 'e';
    
    xassert("typeof test", iii[0] == 'd' && iii[1] == 'e');
    
    xassert("initializer test", gNodeX.c == 'd');
    
    xassert("initializer test2", gData.a == 1 && gData.b == 2 && gData.c.c == 3 && gData.c.d == 4 && gData.e.c == 'c' && gData.d.c == 0 && gData.d.d == 0);
    xassert("initializer test4", gData3.a == 1 && gData3.b.a == 3 && gData3.b.b == 4 && gData3.c.c == 'f' && gData3.d.a.a == 111 && gData3.d.a.b == 222);

    xassert("union initializer", gA.b.a == 'c' && gA.b.b == 'd' && gB.a.a == 111 && gB.a.b == 222 && gC.c == 123 && gD.d.a == 777 && gE.e.a.a == 111 && gE.e.a.b === 222);

    xassert("struct array initializer", xxx[0].a == 111 && xxx[0].b == 222 && xxx[1].a == 333 && xxx[1].b == 444 && xxx[2].a == 555 && xxx[2].b == 666);
    
    return 0;
}
