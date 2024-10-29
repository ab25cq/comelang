#include <comelang.h>

char*% fun(int a)
{
    if(a == 0) {
        return null;
    }
    else {
        return xsprintf("%d", a);
    }
}

int main(int argc, char** argv)
{
    string a = fun(0).if {
        it + "B"
    }
    else {
        s"null"
    }
    
    puts(a);
    
    return 0;
}
