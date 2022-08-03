#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static unsigned int get32(unsigned char *p)
{
    return 123;
}

typedef struct Section {
    unsigned long data_offset; /* current data offset */
    unsigned char *data;       /* section data */
} Section;

int main()
{
    unsigned char* p;
    int x;
    
    Section* section = NULL;
    
    get32(p + 2) + x + section->data; // - p;
    
    return 0;
}
