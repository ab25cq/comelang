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
    string a = fun(1).case {
        (it == null) {
            null
        }
        else {
            it + "X"
        }
    }
    
    puts(a);
    
    return 0;
}
