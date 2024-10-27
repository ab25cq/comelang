#include <stdio.h>

int main(int argc, char** argv)
{
    int a = if(true) {
        if(true) {
            2
        }
        
        3
    }
    
    printf("a %d\n", a);
    
    
    return 0;
}
