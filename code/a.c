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
    
    return 0;
}
