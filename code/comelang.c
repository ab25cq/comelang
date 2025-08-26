#include <comelang.h>

typedef int (*FP)(int,char*);
typedef int (*FP2[2][3])(int, char*);

struct P { int x; int y; };
struct P gP = { .y = 10 };
int gA[5] = { [2] = 3 };
int *a, arr[3], (*fp)(int, char*); //, (*fpa[2])(int);
//int *a, (*fp)(int, char*), arr[3], (*fpa[2])(int);
int fun(){ int x=42; char* s; return x; }
int (*fpb[2])(int), arr[3];
typedef int I;
I g=3;

int main(int argc, char** argv)
{
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

    
    return 0;
}
