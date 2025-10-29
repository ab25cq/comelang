//#include <comelang.h>

int main(int argc, char** argv) {
    int status = 8;
    register long _a0 asm("a0") = (long)(status);
    register long _a7 asm("a7") = 70;
    
    return 0;
}
