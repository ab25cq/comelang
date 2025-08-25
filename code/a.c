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
    
    return 0;
}
