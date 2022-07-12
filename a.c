#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    unsigned int instr = 3758096384;
    unsigned char v8 = 7;
    unsigned char vD = 12;
    instr |= 0x01A00000UL | (((unsigned int)vD) << 12) | v8;
printf("instr in %u\n", instr);

    return 0;
}
