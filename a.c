#include <comelang.h>

int main(int argc, char** argv) {
    static char *states[] = {
      [0]  "unused",
      [1]  "used",
      [2]  "sleep ",
      [3]  "runble",
      [4]  "run   ",
      [5]  "zombie"
    };
    
    printf("%ld\n", 1L <<39);
    
    return 0;
}
