#define _GNU_SOURCE

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#ifdef __DARWIN__
#include <malloc/malloc.h>
#else
#include <malloc.h>
#endif

struct mallinfo xxx;

int main()
{
    puts("HELLO WORLD");
    return 0;
}
