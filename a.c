#include <comelang.h>

int main(int argc, char** argv) {
    int i = 3;
    int j = 7;
    int m = ({ __typeof__(i++) _a = (i++); __typeof__(j++) _b = (j++); _a > _b ? _a : _b; }); // both evaluated exactly once
    printf("m %d\n", m);
    return 0;
}
