#include <comelang.h>

int main(int argc, char** argv)
{
    if([1,2,4] === [1,2,3]) {
        puts("MATCH");
    }
    else {
        puts("NO MATCH");
    }
    
    return 0;
}
