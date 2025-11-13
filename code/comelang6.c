#include <stdio.h>
enum Color { RED=1, GREEN, BLUE=5 };
int main(void){
    enum Color c = GREEN; // 2
    int v=0;
    switch(c){ case RED: v=10; break; case GREEN: v=20; break; default: v=99; }
    printf("t04:%d-%d\n", c, v); // 2-20
    return 0;
}

