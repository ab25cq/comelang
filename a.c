#include <comelang.h>

int fun(tup: int:xx, int:yy tup)
{
    puts(s"xx \{tup.xx} yy \{tup.yy}");
}

int main(int argc, char** argv) 
{
    var tup = (x:1, y:2);    
    
    fun(tup);
    
    tup = (y:3,z:4);
    
    puts(s"x \{tup.x} y \{tup.y}");

    return 0;
}

