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
    
    xassert("struct initializer", aa.a == 1 && aa.b == 2);
    xassert("struct initializer", bb.a == 3 && bb.b == 4);

    xassert("struct initializer", xyz[0].a === "AAA" && xyz[0].b == 2 && xyz[1].a === "BBB" && xyz[1].b == 4);
    struct {
        char* a;
        int b;
    } xyz2[] = { { "AAA",2 }, { "BBB", 4 }};
    
    xassert("struct initializer", xyz2[0].a === "AAA" && xyz2[0].b == 2 && xyz2[1].a === "BBB" && xyz2[1].b == 4);
    
    xassert("struct initializer", gNode.a == 1 && gNode.b == 0);
    
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
    
    return 0;
}
