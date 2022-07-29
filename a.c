#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

char a[3][3][4] = {
    "ABC", "DEF", "GHI",
    "JKL", "OPQ", "RST",
    "OOO", "PPP", "QQQ",
};

int b[3][3] = {
    123, 456, 789,
    1232, 4562, 7892,
    1233, 4563, 7893,
};

int main()
{
    printf("%s\n", a[1][1]);
    printf("%d\n", b[1][1]);
    
    return 0;
}
