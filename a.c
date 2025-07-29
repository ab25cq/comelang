#include <comelang.h>

int main(int argc, char** argv)
{
    
    //int size = ({ long _ret;  });
    int size = ({ long _ret; register long _a0 asm("a0") = 0;  _ret });
    
    return 0;
}
