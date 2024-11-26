#include <stdio.h>

uniq int gVar = 123;

uniq void fun()
{
    printf("%d\n", gVar);
}

int main(int argc, char** argv)
{
    fun();
    printf("gVar %d\n", gVar);
    
    char* p = (void*)0;
    
    *p = 1;
    
    return 0;
}
