#include <comelang.h>

exception int fun()
{
    return none(s"ERR");
}

int main(int argc,char** argv)
{
    int n = fun()??;
    
    printf("%d\n", n);
    
    return 0;
}
