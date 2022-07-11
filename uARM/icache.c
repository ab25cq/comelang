#include "types.h"
#include "CPU.h"
#include "icache.h"
#include <stdio.h>

//#define ICACHE_DEBUGGING



#ifdef ICACHE_DEBUGGING
    #define _icache_fetch_func    icacheFetch_
    #define _icache_test_func    icacheFetch
#else
    #define _icache_fetch_func    icacheFetch
    #define _icache_test_func    icacheFetch_test
#endif

void icacheInval(icache* ic){

    UInt8 i, j;

    for(i = 0; i < ICACHE_BUCKET_NUM; i++){
        for(j = 0; j < ICACHE_BUCKET_SZ; j++) ic->lines[i][j].info = 0;
        ic->ptr[i] = 0;
    }
}

void icacheInit(icache* ic, ArmCpu* cpu, ArmCpuMemF memF){

    ic->cpu = cpu;
    ic->memF = memF;

    icacheInval(ic);
}


static UInt8 icachePrvHash(UInt32 addr){

    addr >>= ICACHE_L;
    addr &= (1UL << ICACHE_S) - 1UL;

    return addr;
}

void icacheInvalAddr(icache* ic, UInt32 va){

    UInt32 off = va % ICACHE_LINE_SZ;
    Int8 i, j, bucket;
    icacheLine* lines;

    va -= off;

    bucket = icachePrvHash(va);
    lines = ic->lines[bucket];

    for(i = 0, j = ic->ptr[bucket]; (UInt8)i < ICACHE_BUCKET_SZ; i++){

        if(--j == -1) j = ICACHE_BUCKET_SZ - 1;

        if((lines[j].info & (ICACHE_ADDR_MASK | ICACHE_USED_MASK)) == (va | ICACHE_USED_MASK)){    //found it!

            lines[j].info = 0;
        }
    }
}

/*
    we cannot have data overlap cachelines since data is self aligned (word on 4-byte boundary, halfwords on2, etc. this is enforced elsewhere
*/

Boolean _icache_fetch_func(icache* ic, UInt32 va, UInt8 sz, Boolean priviledged, UInt8* fsrP, void* buf){

    UInt32 off = va % ICACHE_LINE_SZ;
    Int8 i, j, bucket;
    icacheLine* lines;
    icacheLine* line;

    va -= off;

    bucket = icachePrvHash(va);
    lines = ic->lines[bucket];

    for(i = 0, j = ic->ptr[bucket]; (UInt8)i < ICACHE_BUCKET_SZ; i++){

        if(--j == -1) j = ICACHE_BUCKET_SZ - 1;

        if((lines[j].info & (ICACHE_ADDR_MASK | ICACHE_USED_MASK)) == (va | ICACHE_USED_MASK)){    //found it!

            if(sz == 4){
                *(UInt32*)buf = *(UInt32*)(lines[j].data + off);
            }
            else if(sz == 2){
#if BYTE_ORDER == LITTLE_ENDIAN
                *(UInt16*)buf = *(UInt16*)(lines[j].data + off);
#endif /* BYTE_ORDER == LITTLE_ENDIAN */
#if BYTE_ORDER == BIG_ENDIAN
                if ((off % 4) == 0) {
                    *(UInt16*)buf = *(UInt16*)(lines[j].data + off + 2);
                }
                else {
                    *(UInt16*)buf = *(UInt16*)(lines[j].data + off - 2);
                }
#endif /* BYTE_ORDER == BIG_ENDIAN */
            }
            else __mem_copy(buf, lines[j].data + off, sz);
            return priviledged || !(lines[j].info & ICACHE_PRIV_MASK);
        }
    }
    //if we're here, we found nothing - time to populate the cache
    j = ic->ptr[bucket]++;
    if(ic->ptr[bucket] == ICACHE_BUCKET_SZ) ic->ptr[bucket] = 0;
    line = lines + j;

    line->info = va | (priviledged ? ICACHE_PRIV_MASK : 0);
puts("ic->memF");
    if(!ic->memF(ic->cpu, line->data, va, ICACHE_LINE_SZ, false, priviledged, fsrP)){

puts("ic->memF return false");
        return false;
    }
puts("ic->memF end");
    line->info |= ICACHE_USED_MASK;

    if(sz == 4){
        *(UInt32*)buf = *(UInt32*)(line->data + off);
    }
    else if(sz == 2){
#if BYTE_ORDER == LITTLE_ENDIAN
        *(UInt16*)buf = *(UInt16*)(line->data + off);
#endif /* BYTE_ORDER == LITTLE_ENDIAN */
#if BYTE_ORDER == BIG_ENDIAN
        if ((off % 4) == 0) {
            *(UInt16*)buf = *(UInt16*)(line->data + off + 2);
        }
        else {
            *(UInt16*)buf = *(UInt16*)(line->data + off - 2);
        }
#endif /* BYTE_ORDER == BIG_ENDIAN */
    }
    else __mem_copy(buf, line->data + off, sz);
    return true;
}

#include "stdio.h"
Boolean _icache_test_func(icache* ic, UInt32 va, UInt8 sz, Boolean priviledged, UInt8* fsrP, void* buf){

    UInt8 fsrO = -1, fsrT = -1;
    UInt8 dataO[4] = {0}, dataT[4] = {0};
    Boolean retO, retT;
    UInt8 i;

    retO = _icache_fetch_func(ic, va, sz, priviledged, &fsrO, dataO);
puts("retT ic->memF ic->cpu dataT va sz false priviledgged fsrT ");
    retT = ic->memF(ic->cpu, dataT, va, sz, false, priviledged, &fsrT);
puts("retT ic->memF end");

    if((retT != retO) || (fsrT != fsrO) || (dataT[0] != dataO[0]) || (dataT[1] != dataO[1]) || (dataT[2] != dataO[2]) || (dataT[3] != dataO[3])){

        fprintf(stderr, "icache fail!");
    }

    for(i = 0; i < sz; i++) ((UInt8*)buf)[i] = dataT[i];
    if(retT) *fsrP = fsrT;
    return retT;
}

void output_icache(icache* ic)
{
    FILE* f = fopen("AAA", "a");
    long unsigned int i;
    for(i=0; i<3; i++) {
        long unsigned int j;
        for(j=0; j<3; j++) {
            fprintf(f, "lines[%ld][%ld] %d\n", i,j, ic->lines[i][j].info);
            for(i=0; i<3; i++) {
                fprintf(f, "data[%ld] %d\n", i, ic->lines[i][j].data[i]);
            }
        }
    }
    fclose(f);
}

