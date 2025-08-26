#include <comelang.h>

int main(int argc, char** argv)
{
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
