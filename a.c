#include <comelang.h>

int main(int argc, char** argv)
{
    int a = ({ int b = 111; b + 1 })
    
    printf("a %d\n", a);
    
    a.to_string().puts();
    
    return 0;
}
