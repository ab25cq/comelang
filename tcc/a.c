#include "elf.h"
#include "tcc.h"

unsigned long elf_hash(const unsigned char *name)
{
    unsigned long h = 0, g;
    
    while (*name) {
        h = (h << 4) + *name++;
        g = h & 0xf0000000;
        if (g)
            h ^= g >> 24;
        h &= ~g;
    }
    return h;
}

int find_elf_sym(Section *s, const char *name)
{
    Section *hs;
    int sym_index;
    sym_index = ((int *)hs->data)[2];
    return 0;
}
