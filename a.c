#include <stdio.h>


int main(int argc, char** argv) {
    int a[3] = { 1, 2, 3 };
  int x[5] = { [0 ... 2] = 1, [4] = 5 };
    
    
    printf("%d %d %d\n", a[0], a[1], a[2]);

    return 0;
}
