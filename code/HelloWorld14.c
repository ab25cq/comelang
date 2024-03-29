#include <comelang.h>

long fun()
{
    return (long)1;
}

using unsafe;

int (*gArray)[10];

int (*ArrayPointerRresultFun(int c, int d))[10]
{
    return gArray;
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

struct sDataXXX {
    int a;
    int b;
};

struct sDataYYY {
    int a;
    int b;
};

struct sDataYYY ayyy = (struct sDataYYY) { .a = 111 };
struct sDataYYY byyy = { .a = 111, .b = 222 };
struct sDataYYY cyyy = { 333 };
int dyyy[] = { 1, 2, 3};

struct sDataYYY eyyy[3] = { { .a = 111 }, { .a = 222 }, { .a = 333 }};

static char const ab_month_name[12][4] =
{
    "Jan", "Feb", "Mar", "Apr", "May", "Jun",
    "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
};

static char const ab_month_name2[2][12][4] =
{
    "Jan", "Feb", "Mar", "Apr", "May", "Jun",
    "Jul", "Aug", "Sep", "Oct", "Nov", "Dec",
    
    "Jan", "Feb", "Mar", "Apr", "May", "Jun",
    "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
};

struct sDataXYZ {
    long r;
};

int aaaX(int a, char** b)
{
    return 1;
}

#define offsetof(type, field) ((size_t) &((type *)0)->field)

struct TCCState {
    int warn_write_strings;
    int warn_unsupported;
    int warn_error;
    int warn_none;
    int warn_implicit_function_declaration;
};

typedef struct FlagDef {
    uint16_t offset;
    uint16_t flags;
    const char *name;
} FlagDef;

static const FlagDef warning_defs[] = {
    { offsetof(struct TCCState, warn_unsupported), 0, "unsupported" },
    { offsetof(struct TCCState, warn_write_strings), 0, "write-strings" },
    { offsetof(struct TCCState, warn_error), 0, "error" },
    { offsetof(struct TCCState, warn_implicit_function_declaration), 1,
      "implicit-function-declaration" },
};

#define VT_VALMASK   0x00ff
#define VT_CONST     0x00f0 
#define VT_LLOCAL    0x00f1
#define VT_LOCAL     0x00f2
#define VT_CMP       0x00f3
#define VT_JMP       0x00f4
#define VT_JMPI      0x00f5
#define VT_LVAL      0x0100
#define VT_SYM       0x0200
#define VT_MUSTCAST  0x0400
#define VT_MUSTBOUND 0x0800
#define VT_BOUNDED   0x8000
#define VT_LVAL_BYTE     0x1000
#define VT_LVAL_SHORT    0x2000
#define VT_LVAL_UNSIGNED 0x4000
#define VT_LVAL_TYPE     (VT_LVAL_BYTE | VT_LVAL_SHORT | VT_LVAL_UNSIGNED)

#define VT_INT        0
#define VT_BYTE       1
#define VT_SHORT      2
#define VT_VOID       3
#define VT_PTR        4
#define VT_ENUM       5
#define VT_FUNC       6
#define VT_STRUCT     7
#define VT_FLOAT      8
#define VT_DOUBLE     9
#define VT_LDOUBLE   10
#define VT_BOOL      11
#define VT_LLONG     12
#define VT_LONG      13
#define VT_BTYPE      0x000f
#define VT_UNSIGNED   0x0010
#define VT_ARRAY      0x0020
#define VT_BITFIELD   0x0040
#define VT_CONSTANT   0x0800
#define VT_VOLATILE   0x1000
#define VT_SIGNED     0x2000

#define VT_EXTERN  0x00000080
#define VT_STATIC  0x00000100
#define VT_TYPEDEF 0x00000200
#define VT_INLINE  0x00000400

#define VT_STRUCT_SHIFT 16

#define VSTACK_SIZE         256

struct Sym;

typedef struct CType {
    int t;
    struct Sym *ref;
} CType;

typedef union CValue {
    long double ld;
    double d;
    float f;
    int i;
    unsigned int ui;
    unsigned int ul;
    long long ll;
    unsigned long long ull;
    struct CString *cstr;
    void *ptr;
    int tab[1];
} CValue;

typedef struct Sym {
    int v;
    long r;
    long c;
    CType type;
    struct Sym *next;
    struct Sym *prev;
    struct Sym *prev_tok;
} Sym;
typedef struct SValue {
    CType type;
    unsigned short r;
    unsigned short r2;
    struct Sym *sym;
} SValue;

static SValue vstack[VSTACK_SIZE], *vtop;


static unsigned int get32(unsigned char *p)
{
    return 123;
}

typedef struct Section {
    unsigned long data_offset; /* current data offset */
    unsigned char *data;       /* section data */
} Section;

//const char **rt_bound_error_msg;

void va_arg_test(char *fmt, ...) 
{
    va_list ap;

    va_start(ap, fmt);
    int a = va_arg(ap, int);
    char* b = va_arg(ap, char*);
    
    xassert("va_arg test", a == 1 && b === "ABC");
    va_end(ap);
}

struct YYSTYPEStruct
{
    int x;
    int y;
};

typedef struct YYSTYPEStruct YYSTYPE;

fn funXYZXYZ(a:int, b:int*) -> int
{
    return a + b[0];
}

struct sDataXYZXYZ<T>
{
    T*% a;
};

impl sDataXYZXYZ<T>
{
    sDataXYZXYZ<T>*% initialize(sDataXYZXYZ<T>*% self)
    {
        self.a = new T;
        
        return self;
    }
}

struct sDataGG {
    int a;
    int b;
};

int main(int argc, char** argv)
{
    using unsafe;
    
    xassert("global array initializer test", dyyy[0] == 1 && dyyy[1] == 2 && dyyy[2] == 3);
    
    xassert("global struct initializer test", ayyy.a == 111 && ayyy.b == 0);
    xassert("global struct initializer test", byyy.a == 111 && byyy.b == 222);
    xassert("global struct initializer test", cyyy.a == 333 && cyyy.b == 0);
    xassert("global struct initializer test", eyyy[0].a == 111 && eyyy[1].a == 222 && eyyy[2].a == 333);
    
    int xg = 111;
    int yg = 222 -xg +111;
    int zg = 333;
    
    struct sDataYYY aag = (struct sDataYYY) { .a = xg+1-1 };
    struct sDataYYY bbg = { .a = xg+2-2, .b = yg };
    struct sDataYYY ccg = { zg };
    
    xassert("local struct initializer test", aag.a == 111);
    xassert("local struct initializer test", bbg.a == 111 && bbg.b == 222);
    xassert("local struct initializer test", ccg.a == 333);
    
    int x1 = 1;
    int x2 = 2;
    int x3 = 3;
    
    int dd[] = { x1, x2, x3 };
    
    xassert("local array initializer test", dd[0] == 1 && dd[1] == 2 && dd[2] == 3);
    
    struct sDataYYY ee[3] = { { .a = 111 }, { .a = 222 }, { .a = 333 }};
    
    xassert("local sturct array initializer test", ee[0].a == 111 && ee[1].a == 222 && ee[2].a == 333);

    int a[10];
    int (*b)[10] = &a;
    
    xassert("array pointer result fun", gArray == ArrayPointerRresultFun(1,1));

    xassert("global string test", aaa === "ABC");
    xassert("array initializer", bbb[0] == 1 && bbb[1] == 2 && bbb[2] == 3);
    xassert("global string test2", ccc === "ABC");
    xassert("array initializer2X", arrays2[0] === "AAA" && arrays2[1] === "BBB" && arrays2[2] === "CCC");
    
    int c[123] = { [0] = 1, [1] = 2, [2] = 3 };
    
    xassert("array initializer", c[0] == 1 && c[1] == 2 && c[2] == 3);
    
    int d[3][3] = { [0][1] = 1, [1][1] = 2, [2][2] = 3 };
    
    xassert("array initializer2Y", d[0][1] == 1 && d[1][1] == 2 && d[2][2] == 3);
    
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
    
    struct sDataXXX axy = (struct sDataXXX) { .a = 111 };
    struct sDataXXX bxy = { .a = 111, .b = 222 };
    
    int cxy[] = { 1, 2, 3};
    
    xassert("struct local variable initializer", axy.a == 111 && axy.b == 0);
    xassert("struct local variable initializer", bxy.a == 111 && bxy.b == 222);
    xassert("array local variable initializer", cxy[0] == 1 && cxy[1] == 2 && cxy[2] == 3);
    
    int nnn = 1;
    int* mmm = &nnn;
    
    --*mmm;
    
    xassert("plus plus minus minus test", nnn == 0);
    
    const char* nx4;
    
    nx4 = "ABC";
    nx4 = "DEF";
    
    xassert("const pointer assignment", strcmp(nx4, "DEF") == 0);

    xassert("array initializer test", strcmp(ab_month_name[0], "Jan") == 0);
    xassert("array initializer test2", strcmp(ab_month_name2[0][0], "Jan") == 0);
    struct sDataXYZ sym;
    
    (*(int*)&(sym.r)) = 111;
    
    xassert("assing test", (*(int*)&(sym.r)) == 111);
    
    int line_ref = 0;
    
    if(line_ref == 0) {
        printf("%d\n", line_ref);
    }
    ++line_ref;
    xassert("++ test", line_ref == 1);

    int (*prog_main)(int, char **);
    
    prog_main = aaaX;
    
    char* GGG[12];
    
    xassert("fun pointer test", prog_main(1, GGG) == 1);
    xassert("fun pointer test2", (*prog_main)(1, GGG) == 1);
    xassert("offset test", warning_defs[0].offset == 4 && warning_defs[1].offset == 0 && warning_defs[2].offset == 8 && warning_defs[3].offset == 16);
    
    xassert("double cmp", 1.3f > 1.2f);
    
    xassert("double cmp", 1.2f == 1.2f);
    
    unsigned char* p;
    int x;
    
/*
    Section* section = NULL;
    
    get32(p + 2) + x + section->data; // - p;

    if(rt_bound_error_msg && *rt_bound_error_msg) {
        puts("AAA");
    }
*/
    
    va_arg_test("aaa", 1, "ABC");
    
    YYSTYPE xaa[3] = { { .x=1, .y=1 }, { .x = 2, .y = 2 }, { .x = 3, .y = 3} };
    
    printf("%lu\n", sizeof(xaa));

    YYSTYPE *yyvsp = xaa;
    YYSTYPE yyval = { .x=999, .y = 999 };
    *++yyvsp = yyval;
    
    xassert("yyval", xaa[1].x == 999 && xaa[1].y == 999);
    //xassert("left shift", (int)(((long)2) << 32) == 0);
    
    const char* azi[5] = { "AAA", "BBB" };
    
    xassert("arrray initializer test", azi[0] === "AAA" && azi[1] === "BBB" && azi[2] == null && azi[4] == null);
    
    int xyz3[10];
    for(int i=0; i<10; i++) {
        xyz3[i] = i;
    }
    
    auto ppp = new smart_pointer<int>.initialize(xyz3, 10);
    
    xassert("smart pointer test", *ppp == 0);
    
    ppp++;
    
    xassert("smart pointer test", *ppp == 1);
    
    sDataXYZXYZ<int>*% aBY = new sDataXYZXYZ<int>.initialize();
    
    *aBY.a = 123;
    
    xassert("new T test", *(aBY.a) == 123);
    
    union uUnion* axyY = &gA;
    
    xassert("union testX", axyY->b.a == 'c' && axyY->b.b == 'd');
    
    struct sDataGG data[1024];
    int azz[4] = { 123, 123, 123, 123 };
    struct sDataGG* bzz;
    bzz = &((struct sDataGG*)azz)[1];
    
    struct sDataGG czz = ((struct sDataGG*)azz)[1];
    
    xassert("cast test", czz.a == 123 && czz.b == 123);
    
    return 0;
}
