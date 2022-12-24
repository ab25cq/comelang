#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define GC_SIZE_MAX 4096*2

struct sGCInfo
{
    void* mem;
    int count;
};

struct sGCInfo gGCTable[GC_SIZE_MAX];

void come_gc_init()
{
    memset(gGCTable, 0, sizeof(struct sGCInfo)*GC_SIZE_MAX);
}

void* igc_calloc(long count, size_t size)
{
    void* result = calloc(count, size);
    
    long key = (long)result % GC_SIZE_MAX;
    
    struct sGCInfo* it = gGCTable + key;
    
    for(;;) {
        if(it->mem == NULL) {
            it->count = 1;
            it->mem = result;
            break;
        }
        else {
            it++;
            
            if(it == gGCTable + GC_SIZE_MAX) {
                it = gGCTable;
            }
            else if(it == gGCTable + key) {
                fprintf(stderr, "overflow gc size\n");
                exit(1);
            }
        }
    }
    
    return result;
}

void igc_increment_ref_count(void* mem)
{
    long key = (long)mem % GC_SIZE_MAX;
    
    struct sGCInfo* it = gGCTable + key;
    
    for(;;) {
        if(it->mem == mem) {
            it->count++;
            break;
        }
        else {
            it++;
            
            if(it == gGCTable + GC_SIZE_MAX) {
                it = gGCTable;
            }
            else if(it == gGCTable + key) {
                fprintf(stderr, "memory not found in incremeting refference count\n");
                exit(1);
            }
        }
    }
}

void igc_decrement_ref_count(void* mem)
{
    long key = (long)mem % GC_SIZE_MAX;
    
    struct sGCInfo* it = gGCTable + key;
    
    for(;;) {
        if(it->mem == mem) {
            it->count--;
            if(it->count == 0) {
                free(it->mem);
                memset(it, 0, sizeof(struct sGCInfo));
            }
            break;
        }
        else {
            it++;
            
            if(it == gGCTable + GC_SIZE_MAX) {
                it = gGCTable;
            }
            else if(it == gGCTable + key) {
                fprintf(stderr, "memory not found in decremeting refference count\n");
                exit(1);
            }
        }
    }
}
