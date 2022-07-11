#include <stdio.h>
#include <string.h>

#define ICACHE_L		5UL	//line size is 2^L bytes
#define ICACHE_S		6UL	//number of sets is 2^S
#define ICACHE_A		3UL	//set associativity


#define ICACHE_LINE_SZ		(1UL << ICACHE_L)

int main()
{
    unsigned int addr = 2701131744;
    unsigned int pa = 2684354560;
    unsigned int sz = 16777216;

    printf("addr %u pa %u sz %u pa + sz %u\n", addr, pa, sz, pa + sz);

    printf("%d\n", pa <= addr && pa + sz > addr);
    addr = 2701131776;
    pa = 2684354560;
    sz = 16777216;
    printf("addr %u pa %u sz %u pa + sz %u\n", addr, pa, sz, pa + sz);
    printf("%d\n", pa <= addr && pa + sz > addr);

    return 0;
}
