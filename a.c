#include <comelang.h>

int main(int argc, char** argv) {
    int*% a = new int;
    
    *a = 1;
    
    3.times {
        a = new int;
        *a = 2;
    }
    
    printf("a %d\n", *a);
    
    return 0;
}
