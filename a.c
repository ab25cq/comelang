#include <comelang.h>

int main(int argc, char** argv)
{
    foreach(it, [1,2,3]) {
        printf("%d\n", it);
    }
    
    return 0;
}
