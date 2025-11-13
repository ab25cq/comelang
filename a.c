#include <stdio.h>
#include <stdlib.h>

int fun()
{
    puts("aaa");
}

void fun2()
{
    puts("bbb");
}

static int fun4(int a, char* b)
{
    return 1;
}

static const int gUHO;

struct sData
{
    int a;
    char* b;
};

if (num_fields(sData) == 2) {
    if(field_types(sData, 0) == int) {
        int a = 7;
    }
    else {
        int a = 999;
    }
}
elif (defined(fun2) && defined(fun)) {
    int a = 3;
}
else {
    int a = 2;
}

int main(void) {
    printf("a %d\n", a);
    return 0;
}

