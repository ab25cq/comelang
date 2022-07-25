#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct sData 
{
    int a;
    int b;
};

int main()
{
    struct sData a[] = { {.a = 111, .b = 222}, {.a = 333, .b =444}, {.a = 555, .b =666}};
    printf("%d %d %d\n", a[0].a, a[1].a, a[2].a);
    
    return 0;
}
