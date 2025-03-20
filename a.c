#include "a.h"
#include <wchar.h>

uniq int fun()
{
    return 3;
}

wchar_t wchar_t::fun(wchar_t a)
{
    return a;
}

int main(int argc,char** argv)
{
    printf("%d\n", fun());
    
    return 0;
}
