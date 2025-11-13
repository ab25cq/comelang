#ifndef COMELANG_H
#define COMELANG_H

#define __BEGIN_DECLS
#define __END_DECLS

#undef __cplusplus

#ifdef __STDC__
#define __P(protos) protos
#else
#define __P(protos) ()
#endif

#define _GNU_SOURCE

#define ALLOCATED_MAGIC_NUM 177783

#define nullptr ((void*)0)
typedef char*% string;


///////////////////////////////////////////////////////////////////////////
// PICO
///////////////////////////////////////////////////////////////////////////

#ifdef __PICO__
#undef _GNU_SOURCE
__c__ {#define _GNU_SOURCE}
#define _GNU_SOURCE
no_output {
#include "stdarg.h"
}
no_output {
#include "stdlib.h"
}
no_output {
#include "stdio.h"
}
no_output {
#include "string.h"
}
no_output {
#include "pico/stdio.h"
}
__c__ {#include "stdarg.h"}
__c__ {#include "stdlib.h"}
__c__ {#include "stdint.h"}
__c__ {#include "string.h"}
//__c__ {#include "stdio.h"}
__c__ {#include "ctype.h"}
__c__ {#include "wchar.h"}
__c__ {#include "pico/stdlib.h"}
__c__ {#include "pico/stdio.h"}
__c__ {#include "pico/time.h"}
__c__ {#include "hardware/irq.h"}
__c__ {#include "hardware/timer.h"}
__c__ {#include "hardware/uart.h"}

__c__ {#include "pico/mutex.h"}
__c__ {#include "pico/multicore.h"}

#define MUTEX_INITIALIZER (mutex_t){ .locked = false, .core = NULL }
#define NULL ((void*)0)

typedef __builtin_va_list va_list;

using neo-c;

///////////////////////////////////////////////////////////////////////////
// BARE METAL 
///////////////////////////////////////////////////////////////////////////
#elif defined(__BARE_METAL__)

#include "neo-c-libc.h"

///////////////////////////////////////////////////////////////////////////
// UNIX
///////////////////////////////////////////////////////////////////////////
#else

#define COME_STACKFRAME_MAX 16
#define COME_STACKFRAME_MAX_GLOBAL 128

using C
{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#undef va_start
#define va_start(ap, last) __builtin_va_start(ap, last)
#include <limits.h>
#include <locale.h>
#include <errno.h>
#include <assert.h>
#include <ctype.h>
}

using neo-c;

#endif

///////////////////////////////////////////////////////////////////////////
// PREVIOUS DEFINITIONS
///////////////////////////////////////////////////////////////////////////
//#define foreach(o1, o2) for(var o2_saved = (o2), var o1 = (o2_saved).begin(); !(o2_saved).end(); o1 = (o2_saved).next())

struct buffer 
{
    char*% buf;
    int len;
    int size;
};

uniq buffer*% buffer*::initialize(buffer*% self);
uniq void buffer*::finalize(buffer* self);
uniq buffer*% buffer*::clone(buffer* self);
uniq bool buffer*::equals(buffer* left, buffer* right);
uniq buffer* buffer*::append_str(buffer* self, char* mem);
uniq buffer* buffer*::append(buffer* self, char* mem, size_t size);
uniq string xsprintf(char* msg, ...);
uniq string char*::to_string(char* self);
uniq string int::to_string(int self);
uniq unsigned int bool::get_hash_key(bool value);
uniq unsigned int _Bool::get_hash_key(bool value);
uniq unsigned int char::get_hash_key(char value);
uniq unsigned int short::get_hash_key(short int value);
uniq unsigned int int::get_hash_key(int value);
uniq unsigned int long::get_hash_key(long value);
uniq unsigned int size_t::get_hash_key(size_t value);
uniq unsigned int float::get_hash_key(float value);
uniq unsigned int double::get_hash_key(double value);
uniq unsigned int char*::get_hash_key(char* value);
uniq unsigned int string::get_hash_key(char* value);
uniq unsigned int void*::get_hash_key(void* value);
uniq string char*::substring(char* str, int head, int tail);
uniq buffer* buffer*::append_format(buffer* self, char* msg, ...);
uniq string __builtin_string(char* str);
uniq string buffer*::to_string(buffer* self);
uniq string char*::to_string(char* self);
uniq string double::to_string(double self);
uniq string float::to_string(float self);
uniq string size_t::to_string(size_t self);
uniq string long::to_string(long self);
uniq string int::to_string(int self);
uniq string short::to_string(short self);
uniq string char::to_string(char self);
uniq string bool::to_string(bool self);
uniq string _Bool::to_string(bool self);
uniq bool string::equals(char* self, char* right);


///////////////////////////////////////////////////////////////////////////
// DEBUG FUNCTIONS
///////////////////////////////////////////////////////////////////////////
#if defined(__MINUX__) || defined(__BARE_METAL__) || defined(__PICO__)
uniq void come_push_stackframe(char* sname, int sline, int id)
{
}

uniq void come_pop_stackframe()
{
}

uniq void come_save_stackframe(char* sname, int sline)
{
}

uniq void stackframe()
{
}

uniq string come_get_stackframe()
{
    return string("");
}

#else
uniq char* gComeStackFrameSName[COME_STACKFRAME_MAX_GLOBAL];
uniq int gComeStackFrameSLine[COME_STACKFRAME_MAX_GLOBAL];
uniq int gComeStackFrameID[COME_STACKFRAME_MAX_GLOBAL];
uniq int gNumComeStackFrame = 0;

uniq char* gComeStackFrameBuffer = NULL;

uniq void come_push_stackframe(char* sname, int sline, int id)
{
    if(gNumComeStackFrame < COME_STACKFRAME_MAX_GLOBAL) {
        gComeStackFrameSName[gNumComeStackFrame] = sname;  // const string
        gComeStackFrameSLine[gNumComeStackFrame] = sline;
        gComeStackFrameID[gNumComeStackFrame] = id;
    
        gNumComeStackFrame++;
    }
}

uniq void come_pop_stackframe()
{
    if(gNumComeStackFrame > 0) {
        gNumComeStackFrame--;
    }
}

uniq void come_save_stackframe(char* sname, int sline)
{
    buffer*% buf = new buffer();
    buf.append_format("%s %d\n", sname, sline);
    for(int i=gNumComeStackFrame-2; i>=0; i--) {
        buf.append_format("%s %d #%d\n", gComeStackFrameSName[i], gComeStackFrameSLine[i], gComeStackFrameID[i]);
    }
    
    if(gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer = strdup(buf.to_string());
}

uniq void stackframe()
{
    for(int i=gNumComeStackFrame-1; i>=0; i--) {
        printf("%s %d #%d\n", gComeStackFrameSName[i], gComeStackFrameSLine[i], gComeStackFrameID[i]);
    }
}

uniq string come_get_stackframe()
{
    return string(gComeStackFrameBuffer);
}
#endif

uniq void xassert(char* msg, bool test)
{
    printf("%s...", msg);
    if(!test) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

#if !defined(__MINUX__) && !defined(__BARE_METAL__) && !defined(__PICO__)
record uniq bool die(char* msg)
{
    perror(msg);
    stackframe();
    exit(4);
    
    return false;
}
#else
uniq bool die(char* msg)
{
    puts(msg);
    //stackframe();
    exit(4);
    
    return false;
}
#endif

//////////////////////////////
/// heap
//////////////////////////////
struct sMemHeaderTiny
{
    size_t size;
    int allocated;   //ALLOCATED_MAGIC_NUM
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
    struct sMemHeaderTiny* free_next;
    char* class_name;
    char* sname;
    int sline;
};

struct sMemHeader
{
    size_t size;
    int allocated;            /// ALLOCATED_MAGIC_NUM 
    struct sMemHeader* next;
    struct sMemHeader* prev;
    struct sMemHeader* free_next;
    
#if !defined(__MINUX__) && !defined(__BARE_METAL__) && !defined(__PICO__)
    char* sname[COME_STACKFRAME_MAX];
    int sline[COME_STACKFRAME_MAX];
    int id[COME_STACKFRAME_MAX];
#endif
    
    char* class_name;
};

uniq sMemHeader* gAllocMem;

uniq int gComeDebugLib = 0;

uniq int gNumAlloc = 0;
uniq int gNumFree = 0;

#define HEAP_POOL_PAGE_SIZE 4096

#if !defined(__MINUX__) && !defined(__BARE_METAL__) && !defined(__PICO__)

#define INIT_PAGE_PAGE_SIZE 4
#define NEW_ALLOC_SIZE 2

struct sHeapPage
{
    char** mPages;
    int mSizePages;
    
    char* mTop;
    int mCurrentPages;
    
    sMemHeaderTiny* mFreeMem[HEAP_POOL_PAGE_SIZE];
};

uniq struct sHeapPage gHeapPages;

uniq void come_heap_init(int come_debug)
{
    gComeDebugLib = come_debug
    
    gComeStackFrameBuffer = NULL;
    memset(gComeStackFrameSName, 0, sizeof(char*)*COME_STACKFRAME_MAX_GLOBAL);
    memset(gComeStackFrameSLine, 0, sizeof(int)*COME_STACKFRAME_MAX_GLOBAL);
    memset(gComeStackFrameID, 0, sizeof(int)*COME_STACKFRAME_MAX_GLOBAL);
    
    gHeapPages.mSizePages = INIT_PAGE_PAGE_SIZE;
    
    gHeapPages.mPages = calloc(1, sizeof(char**)*gHeapPages.mSizePages);
    for(int i=0; i<gHeapPages.mSizePages; i++) {
        gHeapPages.mPages[i] = calloc(1, sizeof(char)*HEAP_POOL_PAGE_SIZE);
    }
    
    gHeapPages.mTop = gHeapPages.mPages[0];
    gHeapPages.mCurrentPages = 0;
    
    memset(gHeapPages.mFreeMem, 0, sizeof(sMemHeaderTiny*)*HEAP_POOL_PAGE_SIZE);
    
    gAllocMem = NULL;
}

uniq void come_heap_final()
{
    if(gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    
    if(gComeDebugLib) {
        sMemHeader* it = gAllocMem;
        int n = 0;
        while(it) {
            n++;
            
            bool flag = false;
            printf("#%d ", n);
            if(it->class_name) {
                printf("%p (%s): ", (char*)it + sizeof(sMemHeader) + sizeof(size_t) + sizeof(size_t), it->class_name);
            }
            for(int i=0; i<COME_STACKFRAME_MAX; i++) {
                if(it->sname[i]) {
                    printf("%s %d #%d, ", it->sname[i], it->sline[i], it->id[i]);
                    flag = true;
                }
            }
            if(flag) {
                puts("");
            }
            it = it->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n", n, gNumAlloc, gNumFree);
    }
    else {
        sMemHeaderTiny* it = (sMemHeaderTiny*)gAllocMem;
        int n = 0;
        while(it) {
            n++;
            if(it->class_name) {
                printf("#%d %p (%s) %s %d\n", n, (char*)it + sizeof(sMemHeader) + sizeof(size_t) + sizeof(size_t), it->class_name, it->sname , it->sline);
            }
            it = it->next;
        }
        if(n > 0) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n", n, gNumAlloc, gNumFree);
        }
    }
    for(int i=0; i<gHeapPages.mSizePages; i++) {
        free(gHeapPages.mPages[i]);
    }
    free(gHeapPages.mPages);
}

uniq void* alloc_from_pages(size_t size)
{
    void* result = null;
#ifdef __32BIT_CPU__
    size = (size + 3 & ~0x3);
#else
    size = (size + 7 & ~0x7);
#endif
    
    if(size < HEAP_POOL_PAGE_SIZE) {
        if(gHeapPages.mFreeMem[size]) {
            result = gHeapPages.mFreeMem[size];
            
            gHeapPages.mFreeMem[size] = gHeapPages.mFreeMem[size]->free_next;
            memset(result, 0, size);
        }

        if(result == null) {
            size_t free_area = gHeapPages.mPages[gHeapPages.mCurrentPages] + HEAP_POOL_PAGE_SIZE - gHeapPages.mTop;
            
            if(size >= free_area) {
                gHeapPages.mCurrentPages++;
                
                if(gHeapPages.mCurrentPages == gHeapPages.mSizePages) {
                    int new_size_pages = gHeapPages.mSizePages * NEW_ALLOC_SIZE;
                    char** new_pages = calloc(1, sizeof(char*)*new_size_pages);
                    
                    int i=0;
                    for(; i<gHeapPages.mSizePages; i++) {
                        new_pages[i] = gHeapPages.mPages[i];
                    }
                    
                    for(; i<new_size_pages; i++) {
                        new_pages[i] = calloc(1, sizeof(char)*HEAP_POOL_PAGE_SIZE);
                    }
                    
                    free(gHeapPages.mPages);
                    
                    gHeapPages.mPages = new_pages;
                    gHeapPages.mSizePages = new_size_pages;
                }
                
                gHeapPages.mTop = gHeapPages.mPages[gHeapPages.mCurrentPages];
            }
            
            result = gHeapPages.mTop;
            gHeapPages.mTop += size;
        }
    }
    else {
        result = calloc(1, size);
    }
    
    return result;
}

uniq void come_free_mem_of_heap_pool(void* mem)
{
    if(mem) {
        if(gComeDebugLib) {
            sMemHeader* it = (sMemHeader*)((char*)mem - sizeof(sMemHeader));
            
            if(it->allocated != ALLOCATED_MAGIC_NUM) {
                return;
            }
            
            it->allocated = 0;
            
            sMemHeader* prev_it = it->prev;
            sMemHeader* next_it = it->next;
            
            if(gAllocMem == it) {
                gAllocMem = next_it;
                
                if(gAllocMem) {
                    gAllocMem->prev = null;
                }
            }
            else {
                if(prev_it) {
                    prev_it->next = next_it;
                }
                if(next_it) {
                    next_it->prev = prev_it;
                }
            }
            
            size_t size = it->size;
            
            if(size < HEAP_POOL_PAGE_SIZE) {
                if(gHeapPages.mFreeMem[size] == NULL) {
                    it->free_next = NULL;
                    gHeapPages.mFreeMem[size] = (sMemHeaderTiny*)it;
                }
                else {
                    it->free_next = (sMemHeader*)gHeapPages.mFreeMem[size];
                    gHeapPages.mFreeMem[size] = (sMemHeaderTiny*)it;
                }
            }
            else {
                free(it);
            }
            
            gNumFree++;
        }
        else {
            sMemHeaderTiny* it = (sMemHeaderTiny*)((char*)mem - sizeof(sMemHeaderTiny));
            
            if(it->allocated != ALLOCATED_MAGIC_NUM) {
                return;
            }
            
            it->allocated = 0;
            
            sMemHeaderTiny* prev_it = it->prev;
            sMemHeaderTiny* next_it = it->next;
            
            if(gAllocMem == it) {
                gAllocMem = (sMemHeader*)next_it;
                
                if(gAllocMem) {
                    gAllocMem->prev = null;
                }
            }
            else {
                if(prev_it) {
                    prev_it->next = next_it;
                }
                if(next_it) {
                    next_it->prev = prev_it;
                }
            }
            
            size_t size = it->size;
            
            if(size < HEAP_POOL_PAGE_SIZE) {
                if(gHeapPages.mFreeMem[size] == NULL) {
                    it->free_next = NULL;
                    gHeapPages.mFreeMem[size] = it;
                }
                else {
                    it->free_next = gHeapPages.mFreeMem[size];
                    gHeapPages.mFreeMem[size] = it;
                }
            }
            else {
                free(it);
            }
            
            gNumFree++;
        }
    }
}

uniq void* come_alloc_mem_from_heap_pool(size_t size, char* sname=null, int sline=0, char* class_name="")
{
    if(gComeDebugLib) {
        void* result = alloc_from_pages(size + sizeof(sMemHeader));
        
        sMemHeader* it = result;
        
        it->allocated = ALLOCATED_MAGIC_NUM;
        
        it->size = size + sizeof(sMemHeader);
        it->free_next = NULL;
        
        come_push_stackframe(sname, sline, 0);

        if(gNumComeStackFrame < COME_STACKFRAME_MAX) {
            int i;
            for(i=0; i<gNumComeStackFrame; i++) {
                it.sname[i] = gComeStackFrameSName[i];
                it.sline[i] = gComeStackFrameSLine[i];
                it.id[i] = gComeStackFrameID[i];
            }
        }
        else {
            int i;
            for(i=0; i<COME_STACKFRAME_MAX; i++) {
                it.sname[i] = gComeStackFrameSName[gNumComeStackFrame -1 - i];
                it.sline[i] = gComeStackFrameSLine[gNumComeStackFrame -1 - i];
                it.id[i] = gComeStackFrameID[gNumComeStackFrame -1 - i];
            }
        }
        
        come_pop_stackframe();
        
        it->next = gAllocMem;
        it->prev = null;
        
        it->class_name = class_name; 
        
        if(gAllocMem) {
            gAllocMem->prev = it;
        }
        
        gAllocMem = it;
        
        gNumAlloc++;
        
        return (char*)result + sizeof(sMemHeader);
    }
    else {
        void* result = alloc_from_pages(size + sizeof(sMemHeaderTiny));
        
        sMemHeaderTiny* it = result;
        
        it->allocated = ALLOCATED_MAGIC_NUM;
        
        it->class_name = class_name; 
        
        it->sname = sname;
        it->sline = sline;
        
        it->size = size + sizeof(sMemHeaderTiny);
        it->free_next = NULL;
        
        it->next = (sMemHeaderTiny*)gAllocMem;
        it->prev = null;
        
        if(gAllocMem) {
            ((sMemHeaderTiny*)gAllocMem)->prev = it;
        }
        
        gAllocMem = (sMemHeader*)it;
        
        gNumAlloc++;
        
        return (char*)result + sizeof(sMemHeaderTiny);
    }
}

uniq void come_print_heap_info(void* mem)
{
    if(gComeDebugLib) {
        sMemHeader* it = (sMemHeader*)((char*)mem - sizeof(size_t) - sizeof(size_t) - sizeof(sMemHeader));
        
        if(it->allocated != ALLOCATED_MAGIC_NUM) {
            return;
        }
        
        printf("%p ", mem);
        if(it->class_name) {
            printf("(%s): ", it->class_name);
        }
        for(int i=0; i<COME_STACKFRAME_MAX; i++) {
            if(it->sname[i]) {
                printf("%s %d #%d, ", it->sname[i], it->sline[i], it->id[i]);
            }
        }
        puts("");
    }
    else {
        sMemHeaderTiny* it = (sMemHeaderTiny*)((char*)mem - sizeof(size_t) - sizeof(size_t) - sizeof(sMemHeaderTiny));
        
        if(it->allocated != ALLOCATED_MAGIC_NUM) {
            return;
        }
        printf("%p (%s) %s %d\n", mem, it->class_name, it->sname , it->sline);
    }
}

#else

uniq void come_heap_init(int come_debug)
{
}

uniq void come_heap_final()
{
}

uniq void* alloc_from_pages(size_t size)
{
    void* result = null;
#ifdef __32BIT_CPU__
    size = (size + 3 & ~0x3);
#else
    size = (size + 7 & ~0x7);
#endif
    result = calloc(1, size);

    return result;
}

uniq void come_free_mem_of_heap_pool(void* mem)
{
    if(mem) {
        if(gComeDebugLib) {
        }
        else {
            sMemHeaderTiny* it = (sMemHeaderTiny*)((char*)mem - sizeof(sMemHeaderTiny));
            
            if(it->allocated != ALLOCATED_MAGIC_NUM) {
                return;
            }
            
            it->allocated = 0;
            
            sMemHeaderTiny* prev_it = it->prev;
            sMemHeaderTiny* next_it = it->next;
            
            if(gAllocMem == it) {
                gAllocMem = (sMemHeader*)next_it;
                
                if(gAllocMem) {
                    gAllocMem->prev = null;
                }
            }
            else {
                if(prev_it) {
                    prev_it->next = next_it;
                }
                if(next_it) {
                    next_it->prev = prev_it;
                }
            }
            
            size_t size = it->size;
            
            free(it);
            
            gNumFree++;
        }
    }
}

uniq void* come_alloc_mem_from_heap_pool(size_t size, char* sname=null, int sline=0, char* class_name="")
{
    if(gComeDebugLib) {
    }
    else {
        void* result = alloc_from_pages(size + sizeof(sMemHeaderTiny));
        
        sMemHeaderTiny* it = result;
        
        it->allocated = ALLOCATED_MAGIC_NUM;
        
        it->class_name = class_name; 
        
        it->sname = sname;
        it->sline = sline;
        
        it->size = size + sizeof(sMemHeaderTiny);
        it->free_next = NULL;
        
        it->next = (sMemHeaderTiny*)gAllocMem;
        it->prev = null;
        
        if(gAllocMem) {
            ((sMemHeaderTiny*)gAllocMem)->prev = it;
        }
        
        gAllocMem = (sMemHeader*)it;
        
        gNumAlloc++;
        
        return (char*)result + sizeof(sMemHeaderTiny);
    }
}

uniq void come_print_heap_info(void* mem)
{
}
#endif

uniq char* come_dynamic_typeof(void* mem)
{
    if(gComeDebugLib) {
        sMemHeader* it = (sMemHeader*)((char*)mem - sizeof(size_t) - sizeof(size_t) - sizeof(sMemHeader));
        
        if(it->allocated != ALLOCATED_MAGIC_NUM) {
            printf("invalid heap object(%p)(1)\n", it);
            exit(2);
        }
        
        return it->class_name;
    }
    else {
        sMemHeaderTiny* it = (sMemHeaderTiny*)((char*)mem - sizeof(size_t) - sizeof(size_t) - sizeof(sMemHeaderTiny));
        
        if(it->allocated != ALLOCATED_MAGIC_NUM) {
            printf("invalid heap object(%p)(2)\n", it);
            exit(2);
        }
        
        return it->class_name;
    }
}

uniq void* come_calloc(size_t count, size_t size, char* sname=null, int sline=0, char* class_name="")
{
    char* mem = come_alloc_mem_from_heap_pool(sizeof(size_t)+sizeof(size_t)+count*size, sname, sline, class_name);
    
    size_t* ref_count = (size_t*)mem;

    *ref_count = 0;
    
    size_t* size2 = (size_t*)(mem + sizeof(size_t));
    
    *size2 = size*count + sizeof(size_t) + sizeof(size_t);
    
    return mem + sizeof(size_t) + sizeof(size_t);
}

uniq void come_free(void* mem)
{
    if(mem == NULL) {
        return;
    }
    
    size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));
    
    come_free_mem_of_heap_pool((char*)ref_count);
}

uniq void* come_memdup(void* block, char* sname=null, int sline=0, char* class_name=null)
{
    if(!block) {
        return null;
    }

    char* mem = (char*)block - sizeof(size_t) - sizeof(size_t);
    
    size_t* size_p = (size_t*)(mem + sizeof(size_t));

    size_t size = *size_p - sizeof(size_t) - sizeof(size_t);
    
    void* result = come_calloc(1, size, sname, sline, class_name);

    memcpy(result, block, size);
    
    return result;
}

uniq void* come_increment_ref_count(void* mem)
{
    if(mem == NULL) {
        return mem;
    }
    
    size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));
    
    (*ref_count)++;
    
    return mem;
}

uniq void* come_print_ref_count(void* mem)
{
    if(mem == NULL) {
        return mem;
    }
    
    size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));
    
    printf("ref_count %ld\n", *ref_count);
    
    return mem;
}

uniq int come_get_ref_count(void* mem)
{
    if(mem == NULL) {
        return 0;
    }
    
    size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));
    
    return *ref_count;
}

uniq void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, bool no_decrement, bool no_free, void* result_obj)
{
    if(result_obj) {
        if(mem == result_obj) {
            return mem;
        }
    }
    if(mem == NULL) {
        return NULL;
    }
    
    size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));
    
    if(!no_decrement) {
        (*ref_count)--;
    }
    
    size_t count = *ref_count;
    if(!no_free && count <= 0) {
        if(protocol_obj && protocol_fun) {
            void (*finalizer)(void*) = protocol_fun;
            finalizer(protocol_obj);
            
            come_free(protocol_obj);
        }
        come_free(mem);
        return NULL;
    }
    
    return mem;
}

uniq void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj)
{
    if(result_obj) {
        if(mem == result_obj) {
            return;
        }
    }
    if(mem == NULL) {
        return;
    }
    
    if(call_finalizer_only) {
        if(fun) {
            if(protocol_obj && protocol_fun) {
                void (*finalizer)(void*) = protocol_fun;
                finalizer(protocol_obj);
            }
            void (*finalizer)(void*) = fun;
            finalizer(mem);
        }
        else {
            if(protocol_obj && protocol_fun) {
                void (*finalizer)(void*) = protocol_fun;
                finalizer(protocol_obj);
            }
        }
    }
    else {
        size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));
        
        if(!no_decrement) {
            (*ref_count)--;
        }
        
        size_t count = *ref_count;
        if(!no_free && count <= 0) {
            if(mem) {
                if(fun) {
                    if(protocol_obj && protocol_fun) {
                        void (*finalizer)(void*) = protocol_fun;
                        finalizer(protocol_obj);
                        come_free(protocol_obj);
                    }
                    if(fun) {
                        void (*finalizer)(void*) = fun;
                        finalizer(mem);
                    }
                }
                else {
                    if(protocol_obj && protocol_fun) {
                        void (*finalizer)(void*) = protocol_fun;
                        finalizer(protocol_obj);
                        come_free(protocol_obj);
                    }
                }
                come_free(mem);
            }
        }
    }
}

uniq string __builtin_string(char* str)
{
    if(str == null) {
        return null;
    }
    int len = strlen(str) + 1;
    
    char*% result = new char[len];

    strncpy(result, str, len);

    return result;
}

#ifndef __RISCV__
uniq void come_push_stackframe(char* sname, int sline, int id) version 2
{
    inherit(sname, sline, id);
}

uniq void come_pop_stackframe() version 2
{
    inherit();
}

uniq void come_save_stackframe(char* sname, int sline) version 2
{
    inherit(sname, sline);
}

uniq void stackframe() version 2
{
    inherit();
}

uniq string come_get_stackframe() version 2
{
    return inherit();
}

uniq void* come_calloc(size_t count, size_t size, char* sname=null, int sline=0, char* class_name="") version 2
{
    return inherit(count, size, sname, sline, class_name);
}

uniq void come_free(void* mem) version 2
{
    inherit(mem);
}

#endif

//////////////////////////////
// list
//////////////////////////////
struct list_item<T>
{
    T item;
    list_item<T>* prev;
    list_item<T>* next;
};

struct list<T>
{
    list_item<T>* head;
    list_item<T>* tail;
    int len;

    list_item<T>* it;
};

impl list <T>
{
    list<T>*% initialize(list<T>*% self) {
        self.head = null;
        self.tail = null;
        self.len = 0;

        return self;
    }
    list<T>*% initialize_with_values(list<T>*% self, int num_value, T&* values) 
    {
        self.head = null;
        self.tail = null;
        self.len = 0;
        
        for(int i=0; i<num_value; i++) {
            self.push_back(dummy_heap values[i]);
        }

        return self;
    }
    void finalize(list<T>* self) {
        list_item<T>* it = self.head;
        while(it != null) {
            var prev_it = it;
            it = it.next;
            delete prev_it;
        }
    }
    immutable list<T>*% clone(list<T>* self) {
        if(self == null) {
            return null;
        }
        var result = new list<T>.initialize();

        list_item<T>* it = self.head;
        while(it != null) {
            if(isheap(T)) {
                result.add(clone it.item);
            }
            else {
                result.add(dummy_heap dupe it.item);
            }

            it = it.next;
        }

        return result;
    }
    list<T>* add(list<T>* self, T item)
    {
        if(self.len == 0) {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);
            
            litem.prev = null;
            litem.next = null;
            litem.item = item;
            
            self.tail = litem;
            self.head = litem;
        }
        else if(self.len == 1) {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = self.head;
            litem.next = null;
            litem.item = item;
            
            self.tail = litem;
            self.head.next = litem;
        }
        else {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = self.tail;
            litem.next = null;
            litem.item = item;
            
            self.tail.next = litem;
            self.tail = litem;
        }

        self.len++;
        
        return self;
    }
    T pop_front(list<T>* self) {
        T result;
        if(self.len == 1) {
            result = self.head.item;
            
            list_item<T>* litem = self.head;
            self.head = null;
            self.tail = null;
            
            delete borrow litem;
            
            self.len--;
        }
        else if(self.len == 2) {
            list_item<T>* litem = self.head;
            
            result = self.head.item;
            
            self.head = self.head.next;
            self.head.prev = null;
            self.head.next = null;
            self.tail = self.head;
            
            delete borrow litem;
            
            self.len--;
        }
        else if(self.len >= 3) {
            list_item<T>* litem = self.head;
            
            result = self.head.item;
            
            self.head = litem.next;
            self.head.prev = null;
            
            delete borrow litem;
            
            self.len--;
        }
        return result;
    }
    list<T>* push_back(list<T>* self, T item)
    {
        if(self.len == 0) {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);
            
            litem.prev = null;
            litem.next = null;
            litem.item = item;
            
            self.tail = litem;
            self.head = litem;
        }
        else if(self.len == 1) {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = self.head;
            litem.next = null;
            litem.item = item;
            
            self.tail = litem;
            self.head.next = litem;
        }
        else {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = self.tail;
            litem.next = null;
            litem.item = item;
            
            self.tail.next = litem;
            self.tail = litem;
        }

        self.len++;
        
        return self;
    }
    
    immutable string to_string(list<T>* self)
    {
        buffer*% result = new buffer();
        
        result.append_str("[");
        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            result.append_str(it.item.to_string());
            it = it.next;
            
            i++;
            
            if(i != self.length()) {
                result.append_str(",");
            }
        }
        
        result.append_str("]");
        
        return result.to_string();
    }
    
    T& begin(list<T>* self) {
        if(self == null) {
            T&` result;
            memset(&result, 0, sizeof(T));
            return result;
        }
        self.it = self.head;

        if(self.it) {
            return self.it.item;
        }
        
        T&` result;
        memset(&result, 0, sizeof(T));
        return result;
    }

    T& next(list<T>* self) {
        if(self == null || self.it == null) {
            T`& result;
            memset(&result, 0, sizeof(T));
            return result;
        }
        
        self.it = self.it.next;

        if(self.it) {
            return self.it.item;
        }
        
        T&` result;
        memset(&result, 0, sizeof(T));
        return result;
    }

    bool end(list<T>* self) {
        return self == null || self.it == null;
    }
    immutable list<T>* each(list<T>* self, void* parent, void (*block)(void*, T&,int,bool*)) 
    {
        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            bool end_flag = false;
            block(parent, it.item, i, &end_flag);

            if(end_flag == true) {
                break;
            }
            it = it.next;
            i++;
        }
        
        return self;
    }
    immutable T item(list<T>* self, int position, T& default_value) 
    {
        if(position < 0) {
            position += self.len;
        }

        list_item<T>* it = self.head;
        var i = 0;
        while(it != null) {
            if(position == i) {
                return it.item;
            }
            it = it.next;
            i++;
        };

        return dummy_heap default_value;
    }

    immutable int length(list<T>* self)
    {
        if(self == null) {
            return 0;
        }
        return self.len;
    }
    
    list<T>* insert(list<T>* self, int position, T item)
    {
        if(position < 0) {
            position += self.len + 1;
        }
        if(position < 0) {
            position = 0;
        }
        if(self.len == 0 || position >= self.len) {
            int len = self.len;
            for(int i=0; i<position-len; i++) {
                T` default_value;
                memset(&default_value, 0, sizeof(T));
                self.push_back(default_value);
            }
            self.push_back(item);
            return self;
        }

        if(position == 0) {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = null;
            litem.next = self.head;
            litem.item = item;
            
            self.head.prev = litem;
            self.head = litem;

            self.len++;
        }
        else if(self.len == 1) {
            var litem = borrow gc_inc(new list_item<T>);

            litem.prev = self.head;
            litem.next = self.tail;
            litem.item = item;
            
            self.tail.prev = litem;
            self.head.next = litem;

            self.len++;
        }
        else {
            list_item<T>* it = self.head;
            int i = 0;
            while(it != null) {
                if(position == i) {
                    list_item<T>* litem = borrow gc_inc(new list_item<T>);

                    litem.prev = it.prev;
                    litem.next = it;
                    litem.item = item;

                    it.prev.next = litem;
                    it.prev = litem;

                    self.len++;
                }

                it = it.next;
                i++;
            }
        }
        
        return self;
    }
    list<T>* reset(list<T>* self) {
        list_item<T>* it = self.head;
        while(it != null) {
            var prev_it = it;
            it = it.next;
            delete prev_it;
        }

        self.head = null;
        self.tail = null;

        self.len = 0;
        
        return self;
    }
    list<T>* remove(list<T>* self, T& item) {
        int it2 = 0;
        list_item<T>* it = self.head;
        while(it != null) {
            if(it.item.equals(item)) {
                self.delete(it2, it2+1);
                break;
            }
            it2++;
            
            it = it.next;
        }
        
        return self;
    }
    list<T>* remove_by_pointer(list<T>* self, T& item) {
        int it2 = 0;
        list_item<T>* it = self.head;
        while(it != null) {
            if(it->item == item) {
                self.delete(it2, it2+1);
                break;
            }
            it2++;
            
            it = it.next;
        }
        
        return self;
    }
    list<T>* delete(list<T>* self, int head, int tail)
    {
        if(head < 0) {
            head += self.len;
        }
        if(tail < 0) {
            tail += self.len + 1;
        }

        if(head > tail) {
            int tmp = tail;
            tail = head;
            head = tmp;
        }

        if(head < 0) {
            head = 0;
        }

        if(tail > self.len) {
            tail = self.len;
        }

        if(head == tail) {
            return self;
        }
        
        if(head == 0 && tail == self.len) 
        {
            self.reset();
        }
        else if(head == 0) {
            list_item<T>* it = self.head;
            int i = 0;
            while(it != null) {
                if(i < tail) {
                    list_item<T>* prev_it = it;

                    it = it.next;
                    i++;

                    delete prev_it;

                    self.len--;
                }
                else if(i == tail) {
                    self.head = it;
                    self.head.prev = null;
                    break;
                }
                else {
                    it = it.next;
                    i++;
                }
            }
        }
        else if(tail == self.len) {
            list_item<T>* it = self.head;
            int i = 0;
            while(it != null) {
                if(i == head) {
                    self.tail = it.prev;
                    self.tail.next = null;
                }

                if(i >= head) {
                    list_item<T>* prev_it = it;

                    it = it.next;
                    i++;

                    delete prev_it;

                    self.len--;
                }
                else {
                    it = it.next;
                    i++;
                }
            }
        }
        else {
            list_item<T>* it = self.head;

            list_item<T>* head_prev_it = null;
            list_item<T>* tail_it = null;


            int i = 0;
            while(it != null) {
                if(i == head) {
                    head_prev_it = it.prev;
                }
                if(i == tail) {
                    tail_it = it;
                }

                if(i >= head && i < tail) 
                {
                    list_item<T>* prev_it = it;

                    it = it.next;
                    i++;

                    delete prev_it;

                    self.len--;
                }
                else {
                    it = it.next;
                    i++;
                }
            }

            if(head_prev_it != null) {
                head_prev_it.next = tail_it;
            }
            if(tail_it != null) {
                tail_it.prev = head_prev_it;
            }
        }
        
        return self;
    }
    list<T>* replace(list<T>* self, int position, T item)
    {
        if(position < 0) {
            position += self.len;
        }
        if(position < 0) {
            position = 0;
        }
        
        if(self.len == 0 || position >= self.len) {
            int len = self.len;
            for(int i=0; i<position-len; i++) {
                T` default_value;
                memset(&default_value, 0, sizeof(T));
                self.push_back(default_value);
            }
            self.push_back(item);
            return self;
        }

        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            if(position == i) {
                it.item = item;
                break;
            }
            it = it.next;
            i++;
        }
        
        return self;
    }

    immutable int find(list<T>* self, T& item, int default_value) {
        int it2 = 0;
        list_item<T>* it = self.head;
        while(it != null) {
            if(it.item.equals(item)) {
                return it2;
            }
            it2++;
            
            it = it.next;
        }

        return default_value;
    }
    immutable int find_by_pointer(list<T>* self, T& item, int default_value) {
        int it2 = 0;
        list_item<T>* it = self.head;
        while(it != null) {
            if(it.item == item) {
                return it2;
            }
            it2++;
            
            it = it.next;
        }

        return default_value;
    }
    immutable bool equals(list<T>* left, list<T>* right)
    {
        if(left.len != right.len) {
            return false;
        }

        list_item<T>* it = left.head;
        list_item<T>* it2 = right.head;

        while(it != null) {
            if(!it.item.equals(it2.item)) {
                return false;
            }

            it = it.next;
            it2 = it2.next;
        }

        return true;
    }
    immutable list<T>*% sublist(list<T>* self, int begin, int tail) {
        list<T>*% result = new list<T>.initialize();

        if(begin < 0) {
            begin += self.len;
        }

        if(tail < 0) {
            tail += self.len + 1;
        }

        if(begin < 0) {
            begin = 0;
        }

        if(tail >= self.len) {
            tail = self.len;
        }

        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            if(i >= begin && i < tail) {
                result.push_back(it.item);
            }
            it = it.next;
            i++;
        };

        return result;
    }
    void operator_store_element(list<T>* self, int position, T item) {
        self.replace(position, item);
    }
    immutable T operator_load_element(list<T>* self, int position) {
        if(position < 0) {
            position += self.len;
        }

        list_item<T>* it = self.head;
        var i = 0;
        while(it != null) {
            if(position == i) {
                return it.item;
            }
            it = it.next;
            i++;
        };

        T` default_value;
        memset(&default_value, 0, sizeof(T));
        return default_value;
    }
    immutable list<T>*% operator_load_range_element(list<T>* self, int begin, int tail) {
        list<T>*% result = new list<T>.initialize();

        if(begin < 0) {
            begin += self.len;
        }

        if(tail < 0) {
            tail += self.len + 1;
        }

        if(begin < 0) {
            begin = 0;
        }

        if(tail >= self.len) {
            tail = self.len;
        }

        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            if(i >= begin && i < tail) {
                result.push_back(it.item);
            }
            it = it.next;
            i++;
        };

        return result;
    }
    bool operator_equals(list<T>* left, list<T>* right) 
    {
        if(left.len != right.len) {
            return false;
        }

        list_item<T>* it = left.head;
        list_item<T>* it2 = right.head;

        while(it != null) {
            if(!(it.item === it2.item)) {
                return false;
            }

            it = it.next;
            it2 = it2.next;
        }

        return true;
    }
    bool operator_not_equals(list<T>* left, list<T>* right) {
        return !left.operator_equals(right);
    }
    bool contained(list<T>* self, T& item) {
        for(var it = self.begin(); !self.end(); it = self.next()) {
            if(it.equals(item)) {
                return true;
            }
        }
        
        return false;
    }
    list<T>*% merge_list_with_lambda(list<T>* left, list<T>* right, int (*compare)(T&,T&)) {
        auto result = new list<T>.initialize();

        list_item<T>* it = left.head;
        list_item<T>* it2= right.head;

        while(true) {
            if(it && it2) {
                if(it.item == null) {
                    it = it.next;
                }
                else if(it2.item == null) {
                    it2 = it2.next;
                }
                else if(compare(it.item, it2.item) <= 0) 
                {
                    if(isheap(T)) {
                        result.push_back(clone it.item);
                    }
                    else {
                        result.push_back(dummy_heap dupe it.item);
                    }

                    it = it.next;
                }
                else {
                    if(isheap(T)) {
                        result.push_back(clone it2.item);
                    }
                    else {
                        result.push_back(dummy_heap dupe it2.item);
                    }


                    it2 = it2.next;
                }
            }

            if(it == null) {
                if(it2 != null) {
                    while(it2 != null) {
                        if(isheap(T)) {
                            result.push_back(clone it2.item);
                        }
                        else {
                            result.push_back(dummy_heap dupe it2.item);
                        }

                        it2 = it2.next;
                    }
                }
                break;
            }
            else if(it2 == null) {
                if(it != null) {
                    while(it != null) {
                        if(isheap(T)) {
                            result.push_back(clone it.item);
                        }
                        else {
                            result.push_back(dummy_heap dupe it.item);
                        }

                        it = it.next;
                    }
                }
                break;
            }
        }

        return result;
    }
    list<T>*% merge_sort_with_lambda(list<T>* self, int (*compare)(T&,T&)) {
        if(self.head == null) {
            return clone self;
        }
        if(self.head.next == null) {
            return clone self;
        }

        auto list1 = new list<T>.initialize();
        auto list2 = new list<T>.initialize();

        list_item<T>* it = self.head;

        while(true) {
            list1.push_back(dupe it.item);
            list2.push_back(dupe it.next.item);

            if(it.next.next == null) {
                break;
            }

            it = it.next.next;

            if(it.next == null) {
                if(isheap(T)) {
                    list1.push_back(clone it.item);
                }
                else {
                    list1.push_back(dummy_heap dupe it.item);
                }
                break;
            }
        }
        
        auto left_list = list1.merge_sort_with_lambda(compare);
        auto right_list = list2.merge_sort_with_lambda(compare);
        
        return left_list.merge_list_with_lambda(right_list, compare);
    }
    list<T>*% sort_with_lambda(list<T>* self, int (*compare)(T&,T&)) {
        return self.merge_sort_with_lambda(compare);
    }
    list<T>*% sort(list<T>* self) {
        return self.merge_sort_with_lambda(int lambda(T& left, T& right) { return left.compare(right); });
    }
    template<R> immutable list<R>*% map(list<T>* self, void* parent, R (*block)(void*, T&))
    {
        auto result = new list<R>.initialize();

        list_item<T>* it = self.head;
        while(it != null) {
            R item = block(parent, it.item);
            result.push_back(item);

            it = it.next;
        }

        return result;
    }
    immutable list<T>*% reverse(list<T>* self) {
        list<T>%* result = new list<T>();

        list_item<T>* it = self.tail;
        while(it != null) {
            result.push_back(dupe it.item);
            it = it.prev;
        };

        return result;
    }
    immutable list<T>*% uniq(list<T>* self) {
        list<T>*% result = new list<T>.initialize();

        if(self.length() > 0) {
            T item_before = self.head.item;

            result.push_back(dupe item_before);

            list_item<T>* it = self.head;
            it = it.next;
            while(it != null) {
                if(!it.item.equals(item_before)) {
                    result.push_back(dupe it.item);
                }

                item_before = it.item;
                
                it = it.next;
            }
        }

        return result;
    }
    immutable list<T>*% filter(list<T>* self, void* parent, bool (*block)(void*, T&))
    {
        list<T>*% result = new list<T>();

        list_item<T>* it = self.head;
        while(it != null) {
            if(block(parent, it.item)) {
                result.push_back(dupe it.item);
            }

            it = it.next;
        }

        return result;
    } 
    
    immutable list<T>*% operator_add(list<T>*% left, list<T>*% right) {
        list<T>*% result = new list<T>();

        list_item<T>* it = left.head;
        while(it != null) {
            result.push_back(dupe it.item);

            it = it.next;
        }

        it = right.head;
        while(it != null) {
            result.push_back(dupe it.item);

            it = it.next;
        }

        return result;
    }
    list<T>*% operator_mult(list<T>* left, int right) {
        list<T>*% result = new list<T>();

        for(int i=0; i<right; i++) {
            list_item<T>* it = left.head;
            while(it != null) {
                result.push_back(dupe it.item);
    
                it = it.next;
            }
        }

        return result;
    }
    string join(list<T>* self, char* sep=" ") {
        buffer*% buf = new buffer();
        
        int n = 0;
        for(var it = self.begin(); !self.end(); it = self.next()) {
            buf.append_str(it);
            
            if(n < self.length()-1) {
                buf.append_str(sep);
            }
            
            n++;
        }
        
        return buf.to_string();
    }
}

//////////////////////////////
// map
//////////////////////////////
struct map<T, T2>
{
    T*& keys;
    bool* item_existance;
    T2*& items;
    int size;
    int len;
    
    list<T>*% key_list;

    int it;
};

#define MAP_TABLE_DEFAULT_SIZE 128

impl map <T, T2>
{
    map<T,T2>*% initialize(map<T,T2>*% self) {
        self.keys = borrow gc_inc(new T[MAP_TABLE_DEFAULT_SIZE]);
        self.items = borrow gc_inc(new T2[MAP_TABLE_DEFAULT_SIZE]);
        self.item_existance = borrow gc_inc(new bool[MAP_TABLE_DEFAULT_SIZE]);

        for(int i=0; i<MAP_TABLE_DEFAULT_SIZE; i++)
        {
            self.item_existance[i] = false;
        }

        self.size = MAP_TABLE_DEFAULT_SIZE;
        self.len = 0;
        
        self.key_list = new list<T>();

        self.it = 0;

        return self;
    }
    map<T,T2>*% initialize_with_values(map<T,T2>*% self, int num_keys, T&* keys, T2&* values) 
    {
        self.keys = borrow gc_inc(new T[MAP_TABLE_DEFAULT_SIZE]);
        self.items = borrow gc_inc(new T2[MAP_TABLE_DEFAULT_SIZE]);
        self.item_existance = borrow gc_inc(new bool[MAP_TABLE_DEFAULT_SIZE]);

        for(int i=0; i<MAP_TABLE_DEFAULT_SIZE; i++)
        {
            self.item_existance[i] = false;
        }

        self.size = MAP_TABLE_DEFAULT_SIZE;
        self.len = 0;

        self.it = 0;
        
        self.key_list = new list<T>();
        
        for(int i=0; i<num_keys; i++) {
            self.insert(dummy_heap keys\[i], dummy_heap values[i]);
        }

        return self;
    }
    void finalize(map<T,T2>* self) {
        for(int i=0; i<self.size; i++) {
            if(self.item_existance[i]) {
                if(isheap(T2)) {
                    delete self.items\[i];
                }
            }
        }
        come_free((char*)self.items);

        for(int i=0; i<self.size; i++) {
            if(self.item_existance[i]) {
                if(isheap(T)) {
                    delete self.keys\[i];
                }
            }
        }
        come_free((char*)self.keys);
        
        delete borrow self.key_list;

        delete borrow self.item_existance;
    }
    map<T, T2>*% clone(map<T, T2>* self)
    {
        if(self == null) {
            return null;
        }
        
        var result = new map<T,T2>();
        
        result.key_list = new list<T>();

        for(var it = self.begin(); !self.end(); it = self.next()) {
            T2` default_value;
            memset(&default_value, 0, sizeof(T2));
            
            var it2 = self.at(it, default_value);

            if(isheap(T) && isheap(T2)) {
                result.put(clone it, clone it2);
            }
            else if(isheap(T)) {
                result.put(clone it, dummy_heap dupe it2);
            }
            else if(isheap(T2)) {
                result.put(dummy_heap dupe it, clone it2);
            }
            else {
                result.put(dummy_heap dupe it, dummy_heap dupe it2);
            }
        }

        return result;
    }
    
    immutable string to_string(map<T,T2>* self)
    {
        buffer*% result = new buffer();
        
        result.append_str("[");
        
        list_item<T&>* it = self.key_list.head;
        while(it) {
            T2` default_value;
            memset(&default_value, 0, sizeof(T2));
            T2& it2 = self.at(it.item, default_value);
            
            result.append_str(it.item.to_string());
            result.append_str(":");
            result.append_str(it2.to_string());
            
            it = it.next;
            
            if(it != null) {
                result.append_str(",");
            }
        }
        
        result.append_str("]");
        
        return result.to_string();
    }
    
    immutable T2 at(map<T, T2>* self, T& key, T2 default_value) {
        unsigned int hash = ((T)key).get_hash_key() % self.size;
        unsigned int it = hash;
        
        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key))
                {
                    return dummy_heap self.items\[it];
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    return default_value;
                }
            }
            else {
                return default_value;
            }
        }

        return default_value;
    }
    map<T,T2>* remove(map<T, T2>* self, T& key) {
        unsigned int hash = ((T)key).get_hash_key() % self.size;
        unsigned int it = hash;
        
        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key))
                {
                    self.key_list.remove(self.keys\[it]);
                    
                    self.item_existance[it] = false;
                    if(isheap(T)) {
                        delete borrow self.keys\[it];
                    }
                    self.keys\[it] = null;
                    if(isheap(T2)) {
                        delete borrow self.items\[it];
                    }
                    memset(self.items + it, 0, sizeof(T2));
                    
                    self.len--;
                    break;
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    break;
                }
            }
            else {
                break;
            }
        }
        
        return self;
    }
    map<T,T2>* remove_by_pointer(map<T, T2>* self, T& key) {
        unsigned int hash = ((T)key).get_hash_key() % self.size;
        unsigned int it = hash;
        
        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it] == key) 
                {
                    self.key_list.remove(self.keys\[it]);
                    
                    self.item_existance[it] = false;
                    if(isheap(T)) {
                        delete borrow self.keys\[it];
                    }
                    self.keys\[it] = null;
                    if(isheap(T2)) {
                        delete borrow self.items\[it];
                    }
                    memset(self.items + it, 0, sizeof(T2));
                    
                    self.len--;
                    break;
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    break;
                }
            }
            else {
                break;
            }
        }
        
        return self;
    }
    immutable int length(map<T, T2>* self) {
        return self.len;
    }
    
    T& begin(map<T, T2>* self) {
        if(self == null) {
            T`& result;
            memset(&result, 0, sizeof(T));
            return result;
        }
        self.key_list.it = self.key_list.head;

        if(self.key_list.it) {
            return self.key_list.it.item;
        }
        
        T`& result;
        memset(&result, 0, sizeof(T));
        return result;
    }

    T& next(map<T, T2>* self) {
        if(self == null || self.key_list.it == null) {
            T`& result;
            memset(&result, 0, sizeof(T));
            return result;
        }
        self.key_list.it = self.key_list.it.next;

        if(self.key_list.it) {
            return self.key_list.it.item;
        }
        
        T`& result;
        memset(&result, 0, sizeof(T));
        return result;
    }

    bool end(map<T, T2>* self) {
        return self == null || self.key_list == null || self.key_list.it == null;
    }
    
    void rehash(map<T,T2>* self) {
        int size = self.size * 10;
        T&* keys = borrow gc_inc(new T[size]);
        T2&* items = borrow gc_inc(new T2[size]);
        bool* item_existance = borrow gc_inc(new bool[size]);

        int len = 0;

        for(var it = self.begin(); !self.end(); it = self.next()) {
            T2` default_value;
            memset(&default_value, 0, sizeof(T2));
            T2& it2 = self.at(it, default_value);
            unsigned int hash = ((T)it).get_hash_key() % size;
            int n = hash;

            while(true) {
                if(item_existance[n])
                {
                    n++;

                    if(n >= size) {
                        n = 0;
                    }
                    else if(n == hash) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
                else {
                    item_existance[n] = true;
                    keys\[n] = it;
                    T2 default_value;
                    items\[n] = self.at(it, default_value);

                    len++;
                    break;
                }
            }
        }

        come_free((char*)self.items);
        delete borrow self.item_existance;
        come_free((char*)self.keys);

        self.keys = keys;
        self.items = items;
        self.item_existance = item_existance;

        self.size = size;
        self.len = len;
    }
    
    map<T,T2>* insert(map<T,T2>* self, T key, T2 item) {
        if(self.len*10 >= self.size) {
            self.rehash();
        }
        unsigned int hash = ((T)key).get_hash_key() % self.size;
        unsigned int it = hash;
        
        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key)) 
                {
                    if(isheap(T)) {
                        self.key_list.remove(self.keys\[it]);
                        delete self.keys\[it];
                        self.keys\[it] = borrow gc_inc(key);
                    }
                    else {
                        self.key_list.remove(self.keys\[it]);
                        self.keys\[it] = borrow key;
                    }
                    if(isheap(T2)) {
                        delete self.items\[it];
                        self.items\[it] = borrow gc_inc(item);
                    }
                    else {
                        self.items\[it] = borrow item;
                    }
                    break;
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                self.item_existance[it] = true;
                if(isheap(T)) {
                    self.keys\[it] = borrow gc_inc(key);
                }
                else {
                    self.keys\[it] = borrow key;
                }
                if(isheap(T2)) {
                    self.items\[it] = borrow gc_inc(item);
                }
                else {
                    self.items\[it] = item;
                }

                self.len++;

                break;
            }
        }
        
        bool same_key_exist = false;
        for(var it2 = self.key_list.begin(); !self.key_list.end(); it2 = self.key_list.next()) {
            if(it2.equals(key)) {
                same_key_exist = true;
            }
        }
        
        if(!same_key_exist) {
            self.key_list.push_back(key);
        }
        
        return self;
    }
    map<T,T2>* put(map<T,T2>* self, T key, T2 item) {
        if(self.len*2 >= self.size) {
            self.rehash();
        }
        unsigned int hash = ((T)key).get_hash_key() % self.size;
        int it = hash;

        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key)) 
                {
                    if(isheap(T)) {
                        delete self.keys\[it];
                        self.key_list.remove(self.keys\[it]);
                        self.keys\[it] = borrow gc_inc(key);
                    }
                    else {
                        self.key_list.remove(self.keys\[it]);
                        self.keys\[it] = borrow key;
                    }
                    if(isheap(T2)) {
                        delete self.items\[it];
                        self.items\[it] = borrow gc_inc(item);
                    }
                    else {
                        self.items\[it] = borrow item;
                    }
                    break;
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                self.item_existance[it] = true;
                if(isheap(T)) {
                    self.keys\[it] = borrow gc_inc(key);
                }
                else {
                    self.keys\[it] = borrow key;
                }
                if(isheap(T2)) {
                    self.items\[it] = borrow gc_inc(item);
                }
                else {
                    self.items\[it] = item;
                }

                self.len++;

                break;
            }
        }
        
        bool same_key_exist = false;
        for(var it2 = self.key_list.begin(); !self.key_list.end(); it2 = self.key_list.next()) {
            if(it2.equals(key)) {
                same_key_exist = true;
            }
        }
        
        if(!same_key_exist) {
            self.key_list.push_back(key);
        }
        
        return self;
    }
    immutable T2 operator_load_element(map<T, T2>* self, T& key) {
        T2` default_value;
        memset(&default_value, 0, sizeof(T2));
        
        unsigned int hash = ((T)key).get_hash_key() % self.size;
        unsigned int it = hash;
        
        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key))
                {
                    return dummy_heap self.items\[it];
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    return default_value;
                }
            }
            else {
                return default_value;
            }
        }

        return default_value;
    }
    
    void operator_store_element(map<T, T2>* self, T key, T2 item) {
        self.insert(key, item);
    }
    
    immutable bool equals(map<T, T2>* left, map<T, T2>* right)
    {
        if(left.len != right.len) {
            return false;
        }

        int n = 0;
        bool result = true;
        for(var it = left.key_list.begin(); !left.key_list.end(); it = left.key_list.next()) {
            T` default_value;
            memset(&default_value, 0, sizeof(T));
            T& it2 = right.key_list.item(n, default_value);
            
            if(it.equals(it2)) {
                T2` default_value2;
                memset(&default_value2, 0, sizeof(T2));
                T2& item = left.at(it, default_value2);
                T2& item2 = right.at(it2, default_value2);
                
                if(!item.equals(item2)) {
                    result = false;
                }
            }
            else {
                result = false;
            }
            
            n++;
        }

        return result;
    }
    
    immutable bool operator_equals(map<T, T2>* left, map<T,T2>* right) {
        if(left.len != right.len) {
            return false;
        }

        int n = 0;
        bool result = true;
        for(var it = left.key_list.begin(); !left.key_list.end(); it = left.key_list.next()) {
            T` default_value;
            memset(&default_value, 0, sizeof(T));
            T& it2 = right.key_list.item(n, default_value);
            
            if(it === it2) {
                T2` default_value2;
                memset(&default_value2, 0, sizeof(T2));
                T2& item = left.at(it, default_value2);
                T2& item2 = right.at(it2, default_value2);
                
                if(!(item === item2)) {
                    result = false;
                }
            }
            else {
                result = false;
            }
            
            n++;
        }

        return result;
    }
    
    bool operator_not_equals(map<T, T2>* left, map<T,T2>* right) {
        return !(left.operator_equals(right);
    }
    
    immutable bool find(map<T, T2>* self, T& key) {
        unsigned int hash = ((T)key).get_hash_key() % self.size;
        int it = hash;

        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key))
                {
                    return true;
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    return false;
                }
            }
            else {
                return false;
            }
        }

        return false;
    }
    immutable map<T,T2>*% operator_add(map<T,T2>* left, map<T,T2>* right) {
        map<T,T2>*% result = new map<T,T2>();

        int n = 0;
        for(var it = left.key_list.begin(); !left.key_list.end(); it = left.key_list.next()) {
            T2` default_value;
            memset(&default_value, 0, sizeof(T2));
            T2& it2 = left.at(it, default_value);
            
            if(isheap(T) && isheap(T2)) {
                result.insert(clone it, clone it2);
            }
            else if(isheap(T)) {
                result.insert(clone it, dummy_heap dupe it2);
            }
            else if(isheap(T2)) {
                result.insert(dummy_heap dupe it, clone it2);
            }
            else {
                result.insert(dummy_heap dupe it, dummy_heap dupe it2);
            }
            n++;
        }

        n=0;
        for(var it = right.key_list.begin(); !right.key_list.end(); it = right.key_list.next()) {
            T2` default_value;
            memset(&default_value, 0, sizeof(T2));
            T2& it2 = left.at(it, default_value);
            
            if(isheap(T) && isheap(T2)) {
                result.insert(clone it, clone it2);
            }
            else if(isheap(T)) {
                result.insert(clone it, dummy_heap dupe it2);
            }
            else if(isheap(T2)) {
                result.insert(dummy_heap dupe it, clone it2);
            }
            else {
                result.insert(dummy_heap dupe it, dummy_heap dupe it2);
            }
            n++;
        }

        return result;
    }
    immutable map<T,T2>*% operator_mult(map<T,T2>* left, int right) {
        map<T,T2>*% result = new map<T,T2>();

        for(int i=0; i<right; i++ ) {
            int n = 0;
            for(var it = left.key_list.begin(); !left.key_list.end(); it = left.key_list.next()) {
                T2` default_value;
                memset(&default_value, 0, sizeof(T2));
                
                T2& it2 = left.at(it, default_value);
                
                if(isheap(T) && isheap(T2)) {
                    result.insert(clone it, clone it2);
                }
                else if(isheap(T)) {
                    result.insert(clone it, dummy_heap dupe it2);
                }
                else if(isheap(T2)) {
                    result.insert(dummy_heap dupe it, clone it2);
                }
                else {
                    result.insert(dummy_heap dupe it, dummy_heap dupe it2);
                }
                n++;
            }
        }

        return result;
    }
    immutable list<T>*% keys(map<T, T2>* self) {
        var result = new list<T>();
        
        for(var it = self.key_list.begin(); !self.key_list.end(); it = self.key_list.next()) {
            if(isheap(T)) {
                result.push_back(clone it);
            }
            else {
                result.push_back(dummy_heap dupe it);
            }
        }
        
        return result;
    }
    
    immutable list<T2>*% values(map<T, T2>* self) {
        var result = new list<T2>();
        
        for(var it = self.key_list.begin(); !self.key_list.end(); it = self.key_list.next()) { 
            T2` default_value;
            memset(&default_value, 0, sizeof(T2));
        
            var it2 = self.at(it, default_value);
            
            if(isheap(T2)) {
                result.push_back(clone it2);
            }
            else {
                result.push_back(dummy_heap dupe it2);
            }
        }
        
        return result;
    }
}

//////////////////////////////
// tuple
//////////////////////////////
struct tuple1<T>
{
    T v1;
};

impl tuple1 <T>
{
    tuple1<T>*% initialize(tuple1<T>*% self, T v1)
    {
        self.v1 = v1;
        
        return self;
    }
    
    immutable bool equals(tuple1<T>* self, tuple1<T>* right)
    {
        if(!self.v1.equals(right.v1)) {
            return false;
        }
        
        return true;
    }
    immutable bool operator_equals(tuple1<T>* self, tuple1<T>* right) 
    {
        if(!(self.v1 === right.v1)) {
            return false;
        }
        
        return true;
    }
    immutable bool operator_not_equals(tuple1<T>* left, tuple1<T>* right) {
        return !left.operator_equals(right);
    }
    
    immutable string to_string(tuple1<T>* self)
    {
        return "(" + self.v1.to_string() + ")";
    }
}

struct tuple2<T, T2>
{
    T v1;
    T2 v2;
};

impl tuple2 <T, T2>
{
    tuple2<T, T2>*% initialize(tuple2<T, T2>*% self, T v1, T2 v2)
    {
        self.v1 = v1;
        self.v2 = v2;
        
        return self;
    }
    
    immutable string to_string(tuple2<T, T2>* self)
    {
        return "(" + self.v1.to_string() + "," + self.v2.to_string() + ")";
    }
    immutable bool equals(tuple2<T,T2>* self, tuple2<T,T2>* right)
    {
        if(!self.v1.equals(right.v1)) {
            return false;
        }
        if(!self.v2.equals(right.v2)) {
            return false;
        }
        
        return true;
    }
    immutable bool operator_equals(tuple2<T,T2>* self, tuple2<T,T2>* right) 
    {
        if(!(self.v1 === right.v1)) {
            return false;
        }
        if(!(self.v2 === right.v2)) {
            return false;
        }
        
        return true;
    }
    immutable bool operator_not_equals(tuple2<T,T2>* left, tuple2<T,T2>* right) {
        return !left.operator_equals(right);
    }
}


struct tuple3<T, T2, T3>
{
    T v1;
    T2 v2;
    T3 v3;
};

impl tuple3 <T, T2, T3>
{
    tuple3<T, T2, T3>*% initialize(tuple3<T, T2, T3>*% self, T v1, T2 v2, T3 v3)
    {
        self.v1 = v1;
        self.v2 = v2;
        self.v3 = v3;
        
        return self;
    }
    
    immutable string to_string(tuple3<T, T2, T3>* self)
    {
        return "(" + self.v1.to_string() + "," + self.v2.to_string() + "," + self.v3.to_string() + ")";
    }
    immutable bool equals(tuple3<T,T2,T3>* self, tuple3<T,T2,T3>* right)
    {
        if(!self.v1.equals(right.v1)) {
            return false;
        }
        if(!self.v2.equals(right.v2)) {
            return false;
        }
        if(!self.v3.equals(right.v3)) {
            return false;
        }
        
        return true;
    }
    immutable bool operator_equals(tuple3<T,T2,T3>* self, tuple3<T,T2,T3>* right) 
    {
        if(!(self.v1 === right.v1)) {
            return false;
        }
        if(!(self.v2 === right.v2)) {
            return false;
        }
        if(!(self.v3 === right.v3)) {
            return false;
        }
        
        return true;
    }
    immutable bool operator_not_equals(tuple3<T,T2,T3>* left, tuple3<T,T2,T3>* right) {
        return !left.operator_equals(right);
    }
}

struct tuple4<T, T2, T3, T4>
{
    T v1;
    T2 v2;
    T3 v3;
    T4 v4;
};

impl tuple4 <T, T2, T3, T4>
{
    tuple4<T, T2, T3, T4>*% initialize(tuple4<T, T2, T3, T4>*% self, T v1, T2 v2, T3 v3, T4 v4)
    {
        self.v1 = v1;
        self.v2 = v2;
        self.v3 = v3;
        self.v4 = v4;
        
        return self;
    }
    
    immutable string to_string(tuple4<T, T2, T3, T4>* self)
    {
        return "(" + self.v1.to_string() + "," + self.v2.to_string() + "," + self.v3.to_string() + "," + self.v4.to_string() + ")";
    }
    immutable bool equals(tuple4<T,T2,T3,T4>* self, tuple4<T,T2,T3,T4>* right)
    {
        if(!self.v1.equals(right.v1)) {
            return false;
        }
        if(!self.v2.equals(right.v2)) {
            return false;
        }
        if(!self.v3.equals(right.v3)) {
            return false;
        }
        if(!self.v4.equals(right.v4)) {
            return false;
        }
        
        return true;
    }
    immutable bool operator_equals(tuple4<T,T2,T3,T4>* self, tuple4<T,T2,T3,T4>* right) 
    {
        if(!(self.v1 === right.v1)) {
            return false;
        }
        if(!(self.v2 === right.v2)) {
            return false;
        }
        if(!(self.v3 === right.v3)) {
            return false;
        }
        if(!(self.v4 === right.v4)) {
            return false;
        }
        
        return true;
    }
    immutable bool operator_not_equals(tuple4<T,T2,T3,T4>* left, tuple4<T,T2,T3,T4>* right) {
        return !left.operator_equals(right);
    }
}

struct tuple5<T, T2, T3, T4, T5>
{
    T v1;
    T2 v2;
    T3 v3;
    T4 v4;
    T5 v5;
};

impl tuple5 <T, T2, T3, T4, T5>
{
    tuple5<T, T2, T3, T4, T5>*% initialize(tuple5<T, T2, T3, T4, T5>*% self, T v1, T2 v2, T3 v3, T4 v4, T5 v5)
    {
        self.v1 = v1;
        self.v2 = v2;
        self.v3 = v3;
        self.v4 = v4;
        self.v5 = v5;
        
        return self;
    }
    
    immutable string to_string(tuple5<T, T2, T3, T4, T5>* self)
    {
        return "(" + self.v1.to_string() + "," + self.v2.to_string() + "," + self.v3.to_string() + "," + self.v4.to_string() + "," + self.v5.to_string() + ")";
    }
    immutable bool equals(tuple5<T,T2,T3,T4,T5>* self, tuple5<T,T2,T3,T4,T5>* right)
    {
        if(!self.v1.equals(right.v1)) {
            return false;
        }
        if(!self.v2.equals(right.v2)) {
            return false;
        }
        if(!self.v3.equals(right.v3)) {
            return false;
        }
        if(!self.v4.equals(right.v4)) {
            return false;
        }
        if(!self.v5.equals(right.v5)) {
            return false;
        }
        
        return true;
    }
    immutable bool operator_equals(tuple5<T,T2,T3,T4,T5>* self, tuple5<T,T2,T3,T4,T5>* right) 
    {
        if(!(self.v1 === right.v1)) {
            return false;
        }
        if(!(self.v2 === right.v2)) {
            return false;
        }
        if(!(self.v3 === right.v3)) {
            return false;
        }
        if(!(self.v4 === right.v4)) {
            return false;
        }
        if(!(self.v5 === right.v5)) {
            return false;
        }
        
        return true;
    }
    immutable bool operator_not_equals(tuple5<T,T2,T3,T4,T5>* left, tuple5<T,T2,T3,T4,T5>* right) {
        return !left.operator_equals(right);
    }
}

//////////////////////////////
// buffer
//////////////////////////////
uniq buffer*% buffer*::initialize(buffer*% self) 
{
    self.size = 128;
    self.buf = new char[self.size];
    self.buf[0] = '\0';
    self.len = 0;

    return self;
}

uniq buffer*% buffer*::initialize_with_value(buffer*% self, char* mem, size_t size) 
{
    self.size = 128;
    self.buf = new char[self.size];
    self.buf[0] = '\0';
    self.len = 0;
    
    self.append(mem, size);

    return self;
}

uniq void buffer*::finalize(buffer* self)
{
    if(self && self.buf) delete borrow self.buf;
}

uniq immutable buffer*% buffer*::clone(buffer* self)
{
    if(self == null) {
        return null;
    }
    
    var result = new buffer;
    
    result.size = self.size;
    result.buf = new char[self.size];
    result.len = self.len;
    memcpy(result.buf, self.buf, self.len);
    
    return result;
}

uniq immutable bool buffer*::equals(buffer* left, buffer* right)
{
    if(left == null || right == null) {
        return false;
    }
    
    return left.to_string().equals(right.to_string());
}

uniq immutable int buffer*::length(buffer* self) 
{
    if(self == null) {
        return 0;
    }
    return self.len;
}

uniq void buffer*::reset(buffer* self)
{
    if(self == null) {
        return;
    }
    self.buf[0] = '\0';
    self.len = 0;
}

uniq void buffer*::trim(buffer* self, int len)
{
    if(self == null) {
        return;
    }
    self.len -= len;
    self.buf[self.len] = '\0';
}

uniq buffer* buffer*::append(buffer* self, char* mem, size_t size)
{
    if(self == null || mem == null) {
        return self;
    }
    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';
    
    return self;
}

uniq buffer* buffer*::append_char(buffer* self, char c)
{
    if(self == null) {
        return null;
    }
    if(self.len + 1 + 1 + 1 >= self.size) {
        char*% old_buf = clone self.buf;
        int old_len = self.len;
        
        int new_size = (self.size + 10 + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    self.buf[self.len] = c;
    self.len++;

    self.buf[self.len] = '\0';
    
    return self;
}

uniq buffer* buffer*::append_str(buffer* self, char* mem)
{
    if(self == null || mem == null) {
        return self;
    }
    
    int size = strlen(mem);
    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';
    
    return self;
}

uniq buffer* buffer*::append_format(buffer* self, char* msg, ...)
{
    if(self == null || msg == null) {
        return self;
    }
    
#ifdef __RISCV__
    char result[128];
    
    va_list` args;
    va_start(args, msg);
    snprintf(result, 128, args);
    va_end(args);
    
    int len = strlen(result);
#else
    va_list` args;
    va_start(args, msg);
    char* result;
    int len = vasprintf(&result, msg, args);
    va_end(args);
    
    if(len < 0) {
        return self;
    }
#endif
    
    string mem = string(result);
    
    int size = strlen(mem);
    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';
    
    free(result);
    
    return self;
}

uniq buffer* buffer*::append_nullterminated_str(buffer* self, char* mem)
{
    if(self == null || mem == null) {
        return self;
    }
    int size = strlen(mem) + 1;
    if(self.len + size + 1 + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';
    self.len++;
    
    return self;
}

uniq buffer* buffer*::append_int(buffer* self, int value) 
{
    if(self == null) {
        return null;
    }
    int* mem = &value;
    int size = sizeof(int);
    
    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';
    
    return self;
}

uniq buffer* buffer*::append_long(buffer* self, long value) 
{
    long* mem = &value;
    int size = sizeof(long);
    
    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';
    
    return self;
}

uniq buffer* buffer*::append_short(buffer* self, short value) 
{
    if(self == null) {
        return null;
    }
    
    short* mem = &value;
    int size = sizeof(short);
    
    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';
    
    return self;
}

uniq buffer* buffer*::alignment(buffer* self) 
{
    if(self == null) {
        return null;
    }
    
    int len = self.len;
    len = (len + 3) & ~3;
    
    if(len >= self.size) {
        int new_size = (self.size + 1 + 1) * 2;
        self.buf = new char[new_size];
        self.size = new_size;
    }

    for(int i=self.len; i<len; i++) {
        self.buf[i] = '\0';
    }
    
    self.len = len;
    
    return self;
}

uniq immutable int buffer*::compare(buffer* left, buffer* right) 
{
    if(left == null && right == null) {
        return 0;
    }
    else if(left == null) {
        return -1;
    }
    else if(right == null) {
        return 1;
    }
    
    return strcmp(left.buf, right.buf);
}

uniq immutable buffer*% char*::to_buffer(char* self) 
{
    var result = new buffer.initialize();
    
    if(self == null) {
        return result;
    }

    result.append_str(self);

    return result;
}

uniq immutable string buffer*::to_string(buffer* self)
{
    if(self == null) {
        return string("");
    }
    
    return string(self.buf);
}

uniq immutable unsigned char* buffer*::head_pointer(buffer* self)
{
    return self.buf;
}

uniq buffer*% char[]::to_buffer(char* self, size_t len) 
{
    var result = new buffer();
    result.append(self, sizeof(char)*len);
    return result;
}

uniq immutable buffer*% char*[]::to_buffer(char** self, size_t len) 
{
    var result = new buffer();
    for(int i=0; i<len; i++) {
        result.append(self[i], strlen(self[i]));
    }
    return result;
}

uniq immutable buffer*% short[]::to_buffer(short* self, size_t len) 
{
    var result = new buffer();
    result.append((char*)self, sizeof(short)*len);
    return result;
}

uniq immutable buffer*% int[]::to_buffer(int* self, size_t len) 
{
    var result = new buffer();
    result.append((char*)self, sizeof(int)*len);
    return result;
}

uniq immutable buffer*% long[]::to_buffer(long* self, size_t len) 
{
    var result = new buffer();
    result.append((char*)self, sizeof(long)*len);
    return result;
}

uniq immutable buffer*% float[]::to_buffer(float* self, size_t len) 
{
    var result = new buffer();
    result.append((char*)self, sizeof(float)*len);
    return result;
}

uniq immutable buffer*% double[]::to_buffer(double* self, size_t len) 
{
    var result = new buffer();
    result.append((char*)self, sizeof(double)*len);
    return result;
}

uniq immutable string buffer*::printable(buffer* self)
{
    int len = self.len;
    string result = new char[len*2+1];

    int n = 0;
    for(int i=0; i<len; i++) {
        unsigned char c = self.buf[i];

        if((c >= 0 && c < ' ') 
            || c == 127)
        {
            result[n++] = '^';
            result[n++] = c + 'A' - 1;
        }
        else if(c > 127) {
            result[n++] = '?';
        }
        else {
            result[n++] = c;
        }
    }

    result[n] = '\0'

    return result;
}

impl list <T>
{
    immutable buffer*% to_buffer(list<T>* self) {
        var result = new buffer();
        for(var it = self.begin(); !self.end(); it = self.next()) {
            result.append((char*)&it, sizeof(T));
        }
        return result;
    }
}

//////////////////////////////
/// base library(primitive array)
//////////////////////////////
uniq list<char>*% char[]::to_list(char* self, size_t len) 
{
    return new list<char>.initialize_with_values(len, self);
}

uniq list<char*>*% char*[]::to_list(char** self, size_t len) 
{
    return new list<char*>.initialize_with_values(len, self);
}

uniq list<short>*% short[]::to_list(short* self, size_t len) 
{
    return new list<short>.initialize_with_values(len, self);
}

uniq list<int>*% int[]::to_list(int* self, size_t len) 
{
    return new list<int>.initialize_with_values(len, self);
}

uniq list<long>*% long[]::to_list(long* self, size_t len) 
{
    return new list<long>.initialize_with_values(len, self);
}

uniq list<float>*% float[]::to_list(float* self, size_t len) 
{
    return new list<float>.initialize_with_values(len, self);
}

uniq list<double>*% double[]::to_list(double* self, size_t len) 
{
    return new list<double>.initialize_with_values(len, self);
}

//////////////////////////////
/// base library(equals)
//////////////////////////////
uniq immutable bool bool::equals(bool self, bool right) 
{
    return self == right;
}

uniq immutable bool _Bool::equals(_Bool self, _Bool right) 
{
    return self == right;
}

uniq immutable bool char::equals(char self, char right) 
{
    return self == right;
}

uniq immutable bool short::equals(short self, short right) 
{
    return self == right;
}

uniq immutable bool int::equals(int self, int right) 
{
    return self == right;
}

uniq immutable bool long::equals(long self, long right) 
{
    return self == right;
}

uniq immutable bool size_t::equals(size_t self, size_t right) 
{
    return self == right;
}

uniq immutable bool float::equals(float self, float right) 
{
    return self == right;
}

uniq immutable bool double::equals(double self, double right) 
{
    return self == right;
}

uniq immutable bool bool::operator_equals(bool self, bool right)
{
    return self == right;
}

uniq immutable bool _Bool::operator_equals(bool self, bool right)
{
    return self == right;
}

uniq immutable bool char::operator_equals(char self, char right)
{
    return self == right;
}

uniq immutable bool short::operator_equals(short self, short right)
{
    return self == right;
}

uniq immutable bool int::operator_equals(int self, int right)
{
    return self == right;
}

uniq immutable bool long::operator_equals(long self, long right)
{
    return self == right;
}

uniq bool bool::operator_not_equals(bool self, bool right)
{
    return !(self == right);
}

uniq bool _Bool::operator_not_equals(bool self, bool right)
{
    return !(self == right);
}

uniq bool char::operator_not_equals(char self, char right)
{
    return !(self == right);
}

uniq bool short::operator_not_equals(short self, short right)
{
    return !(self == right);
}

uniq bool int::operator_not_equals(int self, int right)
{
    return !(self == right);
}

uniq bool long::operator_not_equals(long self, long right)
{
    return !(self == right);
}

uniq bool char*::equals(char* self, char* right) 
{
    if(self == null && right == null) {
        return true;
    }
    else if(self == null) {
        return false;
    }
    else if(right == null) {
        return false;
    }
    
    return strcmp(self, right) == 0;
}

uniq bool string::equals(char* self, char* right) 
{
    if(self == null && right == null) {
        return true;
    }
    else if(self == null) {
        return false;
    }
    else if(right == null) {
        return false;
    }
    
    return strcmp(self, right) == 0;
}

uniq bool void*::equals(void* self, void* right) 
{
    return self == right;
}

uniq bool bool*::equals(bool* self, bool* right) 
{
    return *self == *right;
}

uniq bool string::operator_equals(char* self, char* right) 
{
    if(self == null && right == null) {
        return true;
    }
    else if(self == null) {
        return false;
    }
    else if(right == null) {
        return false;
    }
    
    return strcmp(self, right) == 0;
}

uniq bool char*::operator_equals(char* self, char* right) 
{
    if(self == null && right == null) {
        return true;
    }
    else if(self == null) {
        return false;
    }
    else if(right == null) {
        return false;
    }
    
    return strcmp(self, right) == 0;
}

uniq bool void*::operator_equals(char* self, char* right) 
{
    return self == right;
}

uniq bool void*::operator_not_equals(char* self, char* right) 
{
    return !self.operator_equals(right);
}

uniq bool string::operator_not_equals(char* self, char* right) 
{
    if(self == null && right == null) {
        return false;
    }
    else if(self == null) {
        return true;
    }
    else if(right == null) {
        return true;
    }
    
    return strcmp(self, right) != 0;
}

uniq bool char*::operator_not_equals(char* self, char* right) 
{
    if(self == null && right == null) {
        return false;
    }
    else if(self == null) {
        return true;
    }
    else if(right == null) {
        return true;
    }
    
    return strcmp(self, right) != 0;
}


uniq string char*::operator_add(char* self, char* right) 
{
    if(self == null || right == null) {
        return string("");
    }
    int len = strlen(self) + strlen(right);
   
    char*% result = new char[len+1];
    
    strncpy(result, self, len+1);
    strncat(result, right, len+1);
    
    return result;
}

uniq string string::operator_add(char* self, char* right) 
{
    if(self == null || right == null) {
        return string("");
    }
    int len = strlen(self) + strlen(right);
   
    char*% result = new char[len+1];
    
    strncpy(result, self, len+1);
    strncat(result, right, len+1);
    
    return result;
}

uniq string char*::operator_mult(char* self, int right) 
{
    if(self == null) {
        return string("");
    }
    var buf = new buffer();
    
    for(int i=0; i<right; i++) {
        buf.append_str(self);
    }
    
    return buf.to_string();
}

uniq string string::operator_mult(char* self, int right) 
{
    if(self == null) {
        return string("");
    }
    var buf = new buffer();
    
    for(int i=0; i<right; i++) {
        buf.append_str(self);
    }
    
    return buf.to_string();
}

uniq size_t char[]::length(char* self, size_t len) 
{
    return len;
}

uniq bool char*[]::contained(char** self, size_t len, char* str) 
{
    bool result = false;
    for(int i=0; i<len; i++) {
        if(strncmp(self[i], str, strlen(self[i])) == 0) {
            result = true;
            break;
        }
    }
    return result;
}

uniq size_t short[]::length(short* self, size_t len) 
{
    return len;
}

uniq size_t int[]::length(int* self, size_t len) 
{
    return len;
}

uniq size_t long[]::length(long* self, size_t len) 
{
    return len;
}

uniq size_t float[]::length(float* self, size_t len) 
{
    return len;
}

uniq size_t double[]::length(double* self, size_t len) 
{
    return len;
}

//////////////////////////////
/// base library(get_hash key)
//////////////////////////////
uniq unsigned int bool::get_hash_key(bool value)
{
    return (((int)value).get_hash_key());
}

uniq unsigned int _Bool::get_hash_key(bool value)
{
    return (((int)value).get_hash_key());
}

uniq unsigned int char::get_hash_key(char value)
{
    return value;
}

uniq unsigned int short::get_hash_key(short int value)
{
    return value;
}

uniq unsigned int int::get_hash_key(int value)
{
    return value;
}

uniq unsigned int long::get_hash_key(long value)
{
    return value;
}

uniq unsigned int size_t::get_hash_key(size_t value)
{
    return value;
}

uniq unsigned int float::get_hash_key(float value)
{
    return (unsigned int)value;
}

uniq unsigned int double::get_hash_key(double value)
{
    return (unsigned int)value;
}

uniq unsigned int char*::get_hash_key(char* value)
{
    if(value == null) {
        return 0;
    }
    int result = 0;
    char* p = value;
    while(*p) {
        result += (*p);
        p++;
    }
    return result;
}

uniq unsigned int string::get_hash_key(char* value)
{
    if(value == null) {
        return 0;
    }
    int result = 0;
    char* p = value;
    while(*p) {
        result += (*p);
        p++;
    }
    return result;
}

uniq unsigned int void*::get_hash_key(void* value)
{
    return (((int)value).get_hash_key());
}

//////////////////////////////
/// base library(clone)
//////////////////////////////
uniq bool bool::clone(bool self)
{
    return self;
}

uniq bool _Bool::clone(bool self)
{
    return self;
}

uniq char char::clone(char self)
{
    return self;
}

uniq short int short::clone(short self)
{
    return self;
}

uniq int int::clone(int self)
{
    return self;
}

uniq long int long::clone(long self)
{
    return self;
}

uniq size_t size_t::clone(size_t self)
{
    return self;
}

uniq double double::clone(double self)
{
    return self;
}

uniq float float::clone(float self)
{
    return self;
}

//////////////////////////////
/// base library(character code)
//////////////////////////////

uniq bool xisalpha(char c)
{
    bool result = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    return result;
}

uniq bool xisblank(char c)
{
    return c == ' ' || c == '\t';
}

uniq bool xisdigit(char c)
{
    return (c >= '0' && c <= '9');
}

uniq bool xisspace(char c)
{
    return c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == 28 || c == 11;
}

uniq bool xisalnum(char c)
{
    return xisalpha(c) || xisdigit(c);
}

uniq bool xisascii(char c)
{
    bool result = (c >= ' ' && c <= '~');
    return result;
}

uniq bool xispunct(char c) {
    return (c >= '!' && c <= '/') || (c >= ':' && c <= '@') || (c >= '[' && c <= '`') || (c >= '{' && c <= '~');
 }

//////////////////////////////
/// base library(simple string library)
//////////////////////////////
uniq int string::length(char* str)
{
    if(str == null) {
        return 0;
    }
    return strlen(str);
}

uniq int char*::length(char* str) {
    if(str == null) {
        return 0;
    }
    return strlen(str);
}

uniq string char*::reverse(char* str) 
{
    if(str == null) {
        return string("");
    }
    int len = strlen(str);
    char*% result = new char[len + 1];

    for(int i=0; i<len; i++) {
        result[i] = str[len-i-1];
    }

    result[len] = '\0';

    return result;
}

uniq string string::operator_load_range_element(char* str, int head, int tail)
{
    if(str == null) {
        return string("");
    }

    int len = strlen(str);

    if(head < 0) {
        head += len;
    }
    if(tail < 0) {
        tail += len + 1;
    }

    if(head > tail) {
        return str.substring(tail, head).reverse();
    }

    if(head < 0) {
        head = 0;
    }

    if(tail >= len) {
        tail = len;
    }

    if(head == tail) {
        return string("");
    }

    if(tail-head+1 < 1) {
        return string("");
    }

    string result = new char[tail-head+1];

    memcpy(result, str + head, tail-head);
    result[tail-head] = '\0';

    return result;
}

uniq string char*::operator_load_range_element(char* str, int head, int tail)
{
    if(str == null) {
        return string("");
    }

    int len = strlen(str);

    if(head < 0) {
        head += len;
    }
    if(tail < 0) {
        tail += len + 1;
    }

    if(head > tail) {
        return str.substring(tail, head).reverse();
    }

    if(head < 0) {
        head = 0;
    }

    if(tail >= len) {
        tail = len;
    }

    if(head == tail) {
        return string("");
    }

    if(tail-head+1 < 1) {
        return string("");
    }

    string result = new char[tail-head+1];

    memcpy(result, str + head, tail-head);
    result[tail-head] = '\0';

    return result;
}

uniq string char*::substring(char* str, int head, int tail)
{
    if(str == null) {
        return string("");
    }

    int len = strlen(str);

    if(head < 0) {
        head += len;
    }
    if(tail < 0) {
        tail += len + 1;
    }

    if(head > tail) {
        return str.substring(tail, head).reverse();
    }

    if(head < 0) {
        head = 0;
    }

    if(tail >= len) {
        tail = len;
    }

    if(head == tail) {
        return string("");
    }

    if(tail-head+1 < 1) {
        return string("");
    }

    string result = new char[tail-head+1];

    memcpy(result, str + head, tail-head);
    result[tail-head] = '\0';

    return result;
}

uniq string xsprintf(char* msg, ...)
{
    if(msg == null) {
        return string("");
    }
    va_list` args;
    va_start(args, msg);
    char* result;
    int len = vasprintf(&result, msg, args);
    va_end(args);
    
    if(len < 0) {
        return string("");
    }
    
    string result2 = string(result);
    
    free(result);
    
    return result2;
}

uniq string char*::delete(char* str, int head, int tail) 
{
    if(str == null) {
        return string("");
    }
    
    int len = strlen(str);

    if(strcmp(str, "") == 0) {
        return string(str);
    }
    
    if(head < 0) {
       head += len;
    }
    
    if(tail < 0) {
       tail += len + 1;
    }

    if(head < 0) {
        head = 0;
    }

    if(tail < 0) {
        return string(str);
    }

    if(tail >= len) {
        tail = len;
    }
    
    char*% result = new char[len-(tail-head)+1];
    
    memcpy(result, str, head);
    memcpy(result + head, str + tail, len-tail);
    
    result[len -(tail-head)] = '\0';

    return result;
}

uniq list<string>*% char*::split_char(char* self, char c) 
{
    if(self == null) {
        return new list<string>();
    }
    
    auto result = new list<string>.initialize();

    auto str = new buffer.initialize();

    for(int i=0; i<self.length(); i++) {
        if(self[i] == c) {
            result.push_back(string(str.buf));
            str.reset();
        }
        else {
            str.append_char(self[i]);
        }
    }
    if(str.length() != 0) {
        result.push_back(string(str.buf));
    }

    return result;
}

uniq string char*::xsprintf(char* self, char* msg, ...)
{
    return xsprintf(msg, self);
}

uniq string int::xsprintf(int self, char* msg, ...)
{
    return xsprintf(msg, self);
}


uniq string char*::printable(char* str)
{
    int len = str.length();
    string result = new char[len*2+1];

    int n = 0;
    for(int i=0; i<len; i++) {
        char c = str[i];

        if((c >= 0 && c < ' ') 
            || c == 127)
        {
            result[n++] = '^';
            result[n++] = c + 'A' - 1;
        }
        else {
            result[n++] = c;
        }
    }

    result[n] = '\0'

    return result;
}

uniq string char*::sub_plain(char* self, char* str, char* replace)
{
    if(str == null || replace == null) {
        return string(self);
    }

    auto result = new buffer.initialize();
    
    char* p = self;
    
    while(true) {
        char* p2 = strstr(p, str);
        
        if(p2 == null) {
            p2 = p;
            while(*p2) {
                p2++;
            }
            result.append(p, p2 - p);
            break;
        }
        
        result.append(p, p2 - p);
        result.append_str(replace);
        
        p = p2 + strlen(str);
    }

    return result.to_string();
}

//////////////////////////////
/// base library(path library)
//////////////////////////////
uniq string xbasename(char* path)
{
    if(path == null) {
        return string("");
    }
    char* p = path + strlen(path);
    
    while(p >= path) {
        if(*p == '/') {
            break;
        }
        else {
            p--;
        }
    }
    
    if(p < path) {
        return string(path);
    }
    else {
        return string(p+1);  
    }
    
    return string("");
}

uniq string xnoextname(char* path)
{
    if(path == null) {
        return string("");
    }
    string path2 = xbasename(path);
    
    char* p = path2 + strlen(path2);
    
    while(p >= path2) {
        if(*p == '.') {
            break;
        }
        else {
            p--;
        }
    }
    
    if(p < path2) {
        return string(path2);
    }
    else {
        return path2.substring(0, p - path2);
    }
    
    return string("");
}

uniq string xextname(char* path)
{
    if(path == null) {
        return string("");
    }
    char* p = path + strlen(path);
    
    while(p >= path) {
        if(*p == '.') {
            break;
        }
        else {
            p--;
        }
    }
    
    if(p < path) {
        return string(path);
    }
    else {
        return string(p+1);  
    }
    
    return string("");
}

//////////////////////////////
/// base library(to_string)
//////////////////////////////
uniq string bool::to_string(bool self)
{
    if(self) {
        return string("true");
    }
    else {
        return string("false");
    }
}

uniq string _Bool::to_string(bool self)
{
    if(self) {
        return string("true");
    }
    else {
        return string("false");
    }
}

uniq string char::to_string(char self)
{
    return xsprintf("%c", self);
}

uniq string short::to_string(short self)
{
    return xsprintf("%d", self);
}

uniq string int::to_string(int self)
{
    return xsprintf("%d", self);
}

uniq string long::to_string(long self)
{
    return xsprintf("%ld", self);
}

uniq string size_t::to_string(size_t self)
{
    return xsprintf("%ld", self);
}

uniq string float::to_string(float self)
{
    return xsprintf("%f", self);
}

uniq string double::to_string(double self)
{
    return xsprintf("%lf", self);
}

uniq string string::to_string(char* self)
{
    if(self == null) {
        return string("");
    }
    return string(self);
}

uniq string char*::to_string(char* self)
{
    if(self == null) {
        return string("");
    }
    return string(self);
}

//////////////////////////////
/// base library(compare)
//////////////////////////////
uniq int bool::compare(bool left, bool right)
{
    if(!left && right) {
        return -1;
    }
    else if(left && right) {
        return 0;
    }
    else if(!left && !right) {
        return 0;
    }
    else {
        return 1;
    }
    
    return 0;
}

uniq int _Bool::compare(bool left, bool right)
{
    if(!left && right) {
        return -1;
    }
    else if(left && right) {
        return 0;
    }
    else if(!left && !right) {
        return 0;
    }
    else {
        return 1;
    }
    
    return 0;
}

uniq int char::compare(char left, char right) 
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }
    
    return 0;
}

uniq int short::compare(short left, short right) 
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }
    
    return 0;
}

uniq int int::compare(int left, int right) 
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }
    
    return 0;
}

uniq int long::compare(long left, long right) 
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }
    
    return 0;
}

uniq int size_t::compare(size_t left, size_t right) 
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }
    
    return 0;
}

uniq int float::compare(float left, float right) 
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }
    
    return 0;
}

uniq int double::compare(double left, double right) 
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }
    
    return 0;
}

uniq int string::compare(char* left, char* right) 
{
    if(left == null && right == null) {
        return 0;
    }
    else if(left == null) {
        return -1;
    }
    else if(right == null) {
        return 1;
    }
    
    return strcmp(left,right);
}

uniq int char*::compare(char* left, char* right) 
{
    if(left == null && right == null) {
        return 0;
    }
    else if(left == null) {
        return -1;
    }
    else if(right == null) {
        return 1;
    }
    
    return strcmp(left,right);
}

//////////////////////////////
/// base library(STDOUT, STDIN)
//////////////////////////////
uniq string char*::puts(char* self)
{
    if(self == null) {
        return string("");
    }
    puts(self);
    
    return string(self);
}

uniq string char*::print(char* self)
{
    if(self == null) {
        return string("");
    }
    printf("%s", self);
    
    return string(self);
}

uniq string char*::printf(char* self, ...)
{
    if(self == null) {
        return string("");
    }
    char* msg2;

#ifdef __RISCV__
    char msg2[128];
    
    va_list` args;
    va_start(args, self);
    int len = snprintf(msg2, 128, self, args);
    va_end(args);
#else
    va_list` args;
    va_start(args, self);
    vasprintf(&msg2,self,args);
    va_end(args);
#endif
    
    printf("%s", msg2);

    free(msg2);
    
    return string(self);
}

uniq int int::printf(int self, char* msg)
{
    printf(msg, self);
    
    return self;
}

//////////////////////////////
/// base library(assert)
//////////////////////////////
#if !defined(__MINUX__) && !defined(__BARE_METAL__) && !defined(__PICO__)
#undef assert

uniq record int assert(int exp) version 2
{
    if(exp) {
    }
    else {
        puts("assert failure");
        stackframe();
        exit(2);
    }
}
#endif

uniq void int::times(int self, void* parent, void (*block)(void* parent, int it))
{
    for(int i = 0; i < self; i++) {
        block(parent, i);
    }
}

/*
 *
 * Mini regex-module inspired by Rob Pike's regex code described in:
 *
 * http://www.cs.princeton.edu/courses/archive/spr09/cos333/beautiful.html
 *
 *
 *
 * Supports:
 * ---------
 *   '.'        Dot, matches any character
 *   '^'        Start anchor, matches beginning of string
 *   '$'        End anchor, matches end of string
 *   '*'        Asterisk, match zero or more (greedy)
 *   '+'        Plus, match one or more (greedy)
 *   '?'        Question, match zero or one (non-greedy)
 *   '[abc]'    Character class, match if one of {'a', 'b', 'c'}
 *   '[^abc]'   Inverted class, match if NOT one of {'a', 'b', 'c'} -- NOTE: feature is currently broken!
 *   '[a-zA-Z]' Character ranges, the character set of the ranges { a-z | A-Z }
 *   '\s'       Whitespace, \t \f \r \n \v and spaces
 *   '\S'       Non-whitespace
 *   '\w'       Alphanumeric, [a-zA-Z0-9_]
 *   '\W'       Non-alphanumeric
 *   '\d'       Digits, [0-9]
 *   '\D'       Non-digits
 *   '()'       Grouping, allowing quantifiers on sub-expressions and capturing
 *
 *
 */


#ifndef RE_DOT_MATCHES_NEWLINE
// Define to 0 if you DON'T want '.' to match '\r' + '\n' 
#define RE_DOT_MATCHES_NEWLINE 0
#endif

#ifndef xisdigit
#define xisdigit isdigit
#endif

#ifndef xisalpha
#define xisalpha isalpha
#endif

#ifndef xisspace
#define xisspace isspace
#endif

// Typedef'd pointer to get abstract datatype. 
struct re_program;
typedef struct re_program* re_t;


typedef struct re_capture
{
  int start;
  int length;
} re_capture;


// Definitions:

#define MAX_REGEXP_OBJECTS   64   // Max number of regex symbols in expression, incl. groups. 
#define MAX_CHAR_CLASS_LEN   40   // Max length of character-class buffer.                   
#define MAX_CAPTURE_SLOTS    MAX_REGEXP_OBJECTS

enum
{
  RE_UNUSED,
  RE_DOT,
  RE_BEGIN,
  RE_END,
  RE_QUESTIONMARK,
  RE_STAR,
  RE_PLUS,
  RE_CHAR,
  RE_CHAR_CLASS,
  RE_INV_CHAR_CLASS,
  RE_DIGIT,
  RE_NOT_DIGIT,
  RE_ALPHA,
  RE_NOT_ALPHA,
  RE_WHITESPACE,
  RE_NOT_WHITESPACE,
  RE_GROUP,
  RE_GROUP_END
};


typedef struct regex_t regex_t;

struct regex_t
{
  unsigned char type;   // RE_CHAR, RE_STAR, RE_GROUP, etc. 
  union
  {
    unsigned char  ch;      // Literal character                
    unsigned char* ccl;     // Pointer to characters in a class  
    struct
    {
      regex_t* first;       // First token inside the group      
      regex_t* last;        // Sentinel token terminating group  
      int      id;          // Capture index (1-based)          
    } group;
  } u;
  regex_t* next;            // Linked list pointer for sequence 
};


typedef struct re_program
{
  regex_t*       start;
  int            group_count;
} regex_program_t;


typedef struct
{
  regex_t*        pool;
  int             pool_capacity;
  int             pool_size;
  unsigned char*  ccl_buf;
  int             ccl_capacity;
  int             ccl_idx;
  int             group_count;
} compiler_state;


typedef struct
{
  const char* base;
  re_capture* captures;
  int         capture_capacity;   // Slots provided by caller 
  int         total_groups;       // Groups present in pattern
} match_context;



// Public functions: 
uniq int re_matchp(re_t pattern, const char* text, int* matchlength, re_capture* captures, int max_captures)
{
  *matchlength = 0;
  if (pattern == 0)
  {
    return -1;
  }

  regex_program_t* program = (regex_program_t*) pattern;
  regex_t* start = program->start;
  if (start == 0)
  {
    return -1;
  }

  match_context ctx;
  ctx.base = text;
  ctx.captures = (captures != 0 && max_captures > 0) ? captures : 0;
  ctx.capture_capacity = (captures != 0 && max_captures > 0) ? max_captures : 0;
  if (ctx.capture_capacity > MAX_CAPTURE_SLOTS)
  {
    ctx.capture_capacity = MAX_CAPTURE_SLOTS;
  }
  ctx.total_groups = program->group_count;

  if (ctx.captures != 0)
  {
    clear_captures(&ctx);
  }

  if (start->type == RE_BEGIN)
  {
    const char* end = matchpattern(start->next, text, &ctx);
    if (end != 0)
    {
      *matchlength = (int)(end - text);
      if (ctx.captures != 0)
      {
        // Groups already recorded relative to ctx.base 
      }
      return 0;
    }
    return -1;
  }
  else
  {
    const char* cursor = text;
    while (1)
    {
      if (ctx.captures != 0)
      {
        clear_captures(&ctx);
      }
      const char* end = matchpattern(start, cursor, &ctx);
      if (end != 0)
      {
        if (*cursor == '\0' && cursor != text)
        {
          return -1; // Preserve legacy behaviour
        }
        *matchlength = (int)(end - cursor);
        return (int)(cursor - text);
      }

      if (*cursor == '\0')
      {
        break;
      }
      cursor += 1;
    }
  }

  return -1;
}

uniq int re_match(const char* pattern, const char* text, int* matchlength)
{
  return re_matchp(re_compile(pattern), text, matchlength, (re_capture*)0, 0);
}

uniq re_t re_compile(const char* pattern)
{
  static regex_t        re_compiled[MAX_REGEXP_OBJECTS];
  static unsigned char  ccl_buf[MAX_CHAR_CLASS_LEN];
  static regex_program_t program;

  compiler_state state;
  state.pool = re_compiled;
  state.pool_capacity = MAX_REGEXP_OBJECTS;
  state.pool_size = 0;
  state.ccl_buf = ccl_buf;
  state.ccl_capacity = MAX_CHAR_CLASS_LEN;
  state.ccl_idx = 1; // leave first slot unused to mimic original behaviour 
  state.group_count = 0;

  if (state.ccl_capacity > 0)
  {
    state.ccl_buf[0] = 0;
  }

  int pos = 0;
  regex_t* head = compile_sequence(&state, pattern, &pos, 0);
  if ((head == 0) || (pattern[pos] != '\0'))
  {
    return NULL;
  }

  program.start = head;
  program.group_count = state.group_count;
  return (re_t) &program;
}


uniq void re_print(re_t pattern)
{
  if (pattern == 0)
  {
    return;
  }

  regex_program_t* program = (regex_program_t*) pattern;
  if (program->start == 0)
  {
    return;
  }

  re_print_internal(program->start, 0);
}


// Private helper implementations 
uniq void clear_captures(match_context* ctx)
{
  if ((ctx->captures == 0) || (ctx->capture_capacity <= 0))
  {
    return;
  }

  for (int i = 0; i < ctx->capture_capacity; ++i)
  {
    ctx->captures[i].start = -1;
    ctx->captures[i].length = 0;
  }
}

uniq void snapshot_captures(const match_context* ctx, re_capture* buffer_)
{
  if ((ctx->captures == 0) || (ctx->capture_capacity <= 0))
  {
    return;
  }

  memcpy(buffer_, ctx->captures, sizeof(re_capture) * ctx->capture_capacity);
}

uniq void restore_captures(match_context* ctx, const re_capture* buffer_)
{
  if ((ctx->captures == 0) || (ctx->capture_capacity <= 0))
  {
    return;
  }

  memcpy(ctx->captures, buffer_, sizeof(re_capture) * ctx->capture_capacity);
}


uniq regex_t* new_token(compiler_state* st)
{
  if (st->pool_size >= st->pool_capacity)
  {
    return NULL;
  }

  regex_t* token = &st->pool[st->pool_size++];
  token->type = RE_UNUSED;
  token->u.ccl = 0;
  token->next = 0;
  token->u.group.first = 0;
  token->u.group.last = 0;
  token->u.group.id = 0;
  return token;
}

uniq int append_token(regex_t** head, regex_t** tail, regex_t* token)
{
  if (token == 0)
  {
    return 0;
  }

  if (*head == 0)
  {
    *head = token;
  }
  else
  {
    (*tail)->next = token;
  }
  *tail = token;
  return 1;
}

uniq regex_t* compile_sequence(compiler_state* st, const char* pattern, int* pos, int in_group)
{
  regex_t* head = (regex_t*)0;
  regex_t* tail = (regex_t*)0;

  while (pattern[*pos] != '\0')
  {
    char c = pattern[*pos];

    if (in_group && (c == ')'))
    {
      break;
    }

    regex_t* token = (regex_t*)0;

    switch (c)
    {
      case '^':
      {
        token = new_token(st);
        if (token == 0) return NULL;
        token->type = RE_BEGIN;
        (*pos)++;
      } break;

      case '$':
      {
        token = new_token(st);
        if (token == 0) return NULL;
        token->type = RE_END;
        (*pos)++;
      } break;

      case '.':
      {
        token = new_token(st);
        if (token == 0) return NULL;
        token->type = RE_DOT;
        (*pos)++;
      } break;

      case '*':
      {
        token = new_token(st);
        if (token == 0) return NULL;
        token->type = RE_STAR;
        (*pos)++;
      } break;

      case '+':
      {
        token = new_token(st);
        if (token == 0) return NULL;
        token->type = RE_PLUS;
        (*pos)++;
      } break;

      case '?':
      {
        token = new_token(st);
        if (token == 0) return NULL;
        token->type = RE_QUESTIONMARK;
        (*pos)++;
      } break;

      case '\\':
      {
        (*pos)++;
        if (pattern[*pos] == '\0')
        {
          return NULL;
        }

        token = new_token(st);
        if (token == 0) return NULL;

        switch (pattern[*pos])
        {
          case 'd': token->type = RE_DIGIT;          break;
          case 'D': token->type = RE_NOT_DIGIT;      break;
          case 'w': token->type = RE_ALPHA;          break;
          case 'W': token->type = RE_NOT_ALPHA;      break;
          case 's': token->type = RE_WHITESPACE;     break;
          case 'S': token->type = RE_NOT_WHITESPACE; break;
          default:
          {
            token->type = RE_CHAR;
            token->u.ch = (unsigned char)pattern[*pos];
          } break;
        }
        (*pos)++;
      } break;

      case '[':
      {
        int buf_begin = st->ccl_idx;
        int negated = 0;
        (*pos)++;

        if (pattern[*pos] == '^')
        {
          negated = 1;
          (*pos)++;
          if (pattern[*pos] == '\0')
          {
            return NULL;
          }
        }

        if (pattern[*pos] == '\0')
        {
          return NULL;
        }

        while ((pattern[*pos] != '\0') && (pattern[*pos] != ']'))
        {
          if (pattern[*pos] == '\\')
          {
            if (st->ccl_idx >= (st->ccl_capacity - 1))
            {
              return NULL;
            }
            st->ccl_buf[st->ccl_idx++] = '\\';
            (*pos)++;
            if (pattern[*pos] == '\0')
            {
              return NULL;
            }
          }

          if (st->ccl_idx >= st->ccl_capacity)
          {
            return NULL;
          }
          st->ccl_buf[st->ccl_idx++] = (unsigned char)pattern[*pos];
          (*pos)++;
        }

        if (pattern[*pos] != ']')
        {
          return NULL;
        }

        if (st->ccl_idx >= st->ccl_capacity)
        {
          return NULL;
        }
        st->ccl_buf[st->ccl_idx++] = 0;

        token = new_token(st);
        if (token == 0) return NULL;
        token->type = negated ? RE_INV_CHAR_CLASS : RE_CHAR_CLASS;
        token->u.ccl = &st->ccl_buf[buf_begin];

        (*pos)++;
      } break;

      case '(':
      {
        (*pos)++;
        regex_t* inner = compile_sequence(st, pattern, pos, 1);
        if (inner == 0)
        {
          return NULL;
        }
        if (pattern[*pos] != ')')
        {
          return NULL;
        }

        regex_t* tail = inner;
        while ((tail != 0) && (tail->type != RE_UNUSED))
        {
          tail = tail->next;
        }
        if (tail == 0)
        {
          return NULL;
        }

        token = new_token(st);
        if (token == 0) return NULL;
        token->type = RE_GROUP;
        token->u.group.first = inner;
        token->u.group.last = tail;
        token->u.group.id = ++st->group_count;

        tail->type = RE_GROUP_END;
        tail->u.group.first = token;

        (*pos)++;
      } break;

      case ')':
      {
        token = new_token(st);
        if (token == 0) return NULL;
        token->type = RE_CHAR;
        token->u.ch = (unsigned char)c;
        (*pos)++;
      } break;

      default:
      {
        token = new_token(st);
        if (token == 0) return NULL;
        token->type = RE_CHAR;
        token->u.ch = (unsigned char)c;
        (*pos)++;
      } break;
    }

    if (!append_token(&head, &tail, token))
    {
      return NULL;
    }
  }

  regex_t* sentinel = new_token(st);
  if (sentinel == 0)
  {
    return NULL;
  }
  sentinel->type = RE_UNUSED;
  sentinel->next = 0;

  if (head == 0)
  {
    head = sentinel;
  }
  else
  {
    tail->next = sentinel;
  }

  return head;
}

uniq const char* matchpattern(regex_t* pattern, const char* text, match_context* ctx)
{
  if (pattern == 0)
  {
    return text;
  }

  if (pattern->type == RE_UNUSED)
  {
    return text;
  }

  re_capture snapshot[MAX_CAPTURE_SLOTS];
  snapshot_captures(ctx, snapshot);

  regex_t* current = pattern;
  const char* cursor = text;

  while (current != 0 && current->type != RE_UNUSED)
  {
    regex_t* next = current->next;

    if (current->type == RE_GROUP_END)
    {
      regex_t* owner = current->u.group.first;
      if ((owner != 0) && (owner->u.group.id > 0) && (ctx->captures != 0))
      {
        int idx = owner->u.group.id - 1;
        if (idx < ctx->capture_capacity)
        {
          int start = ctx->captures[idx].start;
          if (start >= 0)
          {
            ctx->captures[idx].length = (int)(cursor - ctx->base) - start;
            if (ctx->captures[idx].length < 0)
            {
              ctx->captures[idx].length = 0;
            }
          }
        }
      }
      current = current->next;
      continue;
    }

    if ((next != 0) && (next->type == RE_QUESTIONMARK))
    {
      const char* result = matchquestion(current, next->next, cursor, ctx);
      if (result != 0)
      {
        return result;
      }
      restore_captures(ctx, snapshot);
      return NULL;
    }
    else if ((next != 0) && (next->type == RE_STAR))
    {
      const char* result = matchstar(current, next->next, cursor, ctx);
      if (result != 0)
      {
        return result;
      }
      restore_captures(ctx, snapshot);
      return NULL;
    }
    else if ((next != 0) && (next->type == RE_PLUS))
    {
      const char* result = matchplus(current, next->next, cursor, ctx);
      if (result != 0)
      {
        return result;
      }
      restore_captures(ctx, snapshot);
      return NULL;
    }
    else if (current->type == RE_GROUP)
    {
      const char* result = matchgroup(current, next, cursor, ctx);
      if (result != 0)
      {
        return result;
      }
      restore_captures(ctx, snapshot);
      return NULL;
    }
    else if (current->type == RE_END)
    {
      if (*cursor != '\0')
      {
        restore_captures(ctx, snapshot);
        return NULL;
      }
      current = current->next;
    }
    else
    {
      const char* after = matchtoken(current, cursor, ctx);
      if (after == 0)
      {
        restore_captures(ctx, snapshot);
        return NULL;
      }
      cursor = after;
      current = current->next;
    }
  }

  return cursor;
}

uniq const char* matchgroup(regex_t* token, regex_t* rest, const char* text, match_context* ctx)
{
  re_capture snapshot_entry[MAX_CAPTURE_SLOTS];
  snapshot_captures(ctx, snapshot_entry);

  regex_t* end_token = token->u.group.last;
  regex_t* saved_next = end_token != 0 ? end_token->next : 0;
  if (end_token != 0)
  {
    end_token->next = rest;
  }

  if (token->u.group.id > 0 && ctx->captures != 0)
  {
    int idx = token->u.group.id - 1;
    if (idx < ctx->capture_capacity)
    {
      ctx->captures[idx].start = (int)(text - ctx->base);
      ctx->captures[idx].length = 0;
    }
  }

  const char* result = matchpattern(token->u.group.first, text, ctx);

  if (end_token != 0)
  {
    end_token->next = saved_next;
  }

  if (result == 0)
  {
    restore_captures(ctx, snapshot_entry);
  }

  return result;
}

uniq const char* matchstar(regex_t* token, regex_t* rest, const char* text, match_context* ctx)
{
  re_capture snapshot_entry[MAX_CAPTURE_SLOTS];
  snapshot_captures(ctx, snapshot_entry);

  const char* consume = matchtoken(token, text, ctx);
  while ((consume != 0) && (consume != text))
  {
    re_capture snapshot_after_token[MAX_CAPTURE_SLOTS];
    snapshot_captures(ctx, snapshot_after_token);

    const char* recursive = matchstar(token, rest, consume, ctx);
    if (recursive != 0)
    {
      return recursive;
    }

    restore_captures(ctx, snapshot_after_token);
    consume = matchtoken(token, consume, ctx);
  }

  restore_captures(ctx, snapshot_entry);
  return matchpattern(rest, text, ctx);
}

uniq const char* matchplus(regex_t* token, regex_t* rest, const char* text, match_context* ctx)
{
  re_capture snapshot_entry[MAX_CAPTURE_SLOTS];
  snapshot_captures(ctx, snapshot_entry);

  const char* first = matchtoken(token, text, ctx);
  if ((first == 0) || (first == text))
  {
    restore_captures(ctx, snapshot_entry);
    return NULL;
  }

  const char* result = matchstar(token, rest, first, ctx);
  if (result != 0)
  {
    return result;
  }

  restore_captures(ctx, snapshot_entry);
  return NULL;
}

uniq const char* matchquestion(regex_t* token, regex_t* rest, const char* text, match_context* ctx)
{
  re_capture snapshot_entry[MAX_CAPTURE_SLOTS];
  snapshot_captures(ctx, snapshot_entry);

  const char* skipped = matchpattern(rest, text, ctx);
  if (skipped != 0)
  {
    return skipped;
  }

  restore_captures(ctx, snapshot_entry);

  const char* consumed = matchtoken(token, text, ctx);
  if ((consumed == 0) || (consumed == text))
  {
    restore_captures(ctx, snapshot_entry);
    return NULL;
  }

  const char* with = matchpattern(rest, consumed, ctx);
  if (with != 0)
  {
    return with;
  }

  restore_captures(ctx, snapshot_entry);
  return NULL;
}

uniq const char* matchtoken(regex_t* token, const char* text, match_context* ctx)
{
  switch (token->type)
  {
    case RE_DOT:
      return (*text != '\0' && matchdot(*text)) ? text + 1 : 0;

    case RE_CHAR:
      return (*text != '\0' && token->u.ch == (unsigned char)*text) ? text + 1 : 0;

    case RE_CHAR_CLASS:
      return (*text != '\0' && matchcharclass(*text, (const char*)token->u.ccl)) ? text + 1 : 0;

    case RE_INV_CHAR_CLASS:
      return (*text != '\0' && !matchcharclass(*text, (const char*)token->u.ccl)) ? text + 1 : 0;

    case RE_DIGIT:
      return (*text != '\0' && matchdigit(*text)) ? text + 1 : 0;

    case RE_NOT_DIGIT:
      return (*text != '\0' && !matchdigit(*text)) ? text + 1 : 0;

    case RE_ALPHA:
      return (*text != '\0' && matchalphanum(*text)) ? text + 1 : 0;

    case RE_NOT_ALPHA:
      return (*text != '\0' && !matchalphanum(*text)) ? text + 1 : 0;

    case RE_WHITESPACE:
      return (*text != '\0' && matchwhitespace(*text)) ? text + 1 : 0;

    case RE_NOT_WHITESPACE:
      return (*text != '\0' && !matchwhitespace(*text)) ? text + 1 : 0;

    case RE_GROUP:
      return matchgroup(token, (regex_t*)0, text, ctx);

    case RE_BEGIN:
      return (text == ctx->base) ? text : 0;

    case RE_END:
      return (*text == '\0') ? text : 0;

    default:
      break;
  }

  return (const char*)0;
}


uniq int matchdigit(char c)
{
  return xisdigit((unsigned char)c);
}
uniq int matchalpha(char c)
{
  return xisalpha((unsigned char)c);
}
uniq int matchwhitespace(char c)
{
  return xisspace((unsigned char)c);
}
uniq int matchalphanum(char c)
{
  return ((c == '_') || matchalpha(c) || matchdigit(c));
}
uniq int matchrange(char c, const char* str)
{
  return (    (c != '-')
           && (str[0] != '\0')
           && (str[0] != '-')
           && (str[1] == '-')
           && (str[2] != '\0')
           && (    (c >= str[0])
                && (c <= str[2])));
}
uniq int matchdot(char c)
{
#if defined(RE_DOT_MATCHES_NEWLINE) && (RE_DOT_MATCHES_NEWLINE == 1)
  (void)c;
  return 1;
#else
  return c != '\n' && c != '\r';
#endif
}
uniq int ismetachar(char c)
{
  return ((c == 's') || (c == 'S') || (c == 'w') || (c == 'W') || (c == 'd') || (c == 'D'));
}

uniq int matchmetachar(char c, const char* str)
{
  switch (str[0])
  {
    case 'd': return  matchdigit(c);
    case 'D': return !matchdigit(c);
    case 'w': return  matchalphanum(c);
    case 'W': return !matchalphanum(c);
    case 's': return  matchwhitespace(c);
    case 'S': return !matchwhitespace(c);
    default:  return (c == str[0]);
  }
}

uniq int matchcharclass(char c, const char* str)
{
  do
  {
    if (matchrange(c, str))
    {
      return 1;
    }
    else if (str[0] == '\\')
    {
      str += 1;
      if (matchmetachar(c, str))
      {
        return 1;
      }
      else if ((c == str[0]) && !ismetachar(c))
      {
        return 1;
      }
    }
    else if (c == str[0])
    {
      if (c == '-')
      {
        return ((str[-1] == '\0') || (str[1] == '\0'));
      }
      else
      {
        return 1;
      }
    }
  }
  while (*str++ != '\0');

  return 0;
}

uniq void re_print_internal(regex_t* pattern, int depth)
{
  const char* types[] =
  {
    "RE_UNUSED", "RE_DOT", "RE_BEGIN", "RE_END", "RE_QUESTIONMARK", "RE_STAR", "RE_PLUS", "RE_CHAR",
    "RE_CHAR_CLASS", "RE_INV_CHAR_CLASS", "RE_DIGIT", "RE_NOT_DIGIT", "RE_ALPHA", "RE_NOT_ALPHA",
    "RE_WHITESPACE", "RE_NOT_WHITESPACE", "RE_GROUP", "RE_GROUP_END"
  };

  while (pattern != 0 && pattern->type != RE_UNUSED)
  {
    for (int i = 0; i < depth; ++i)
    {
      putchar(' ');
    }
    printf("type: %s", types[pattern->type]);

    if ((pattern->type == RE_CHAR_CLASS) || (pattern->type == RE_INV_CHAR_CLASS))
    {
      printf(" [");
      const unsigned char* ccl = pattern->u.ccl;
      while (*ccl != '\0' && *ccl != ']')
      {
        printf("%c", *ccl);
        ++ccl;
      }
      printf("]");
    }
    else if (pattern->type == RE_CHAR)
    {
      printf(" '%c'", pattern->u.ch);
    }
    else if (pattern->type == RE_GROUP)
    {
      printf(" id=%d\n", pattern->u.group.id);
      re_print_internal(pattern->u.group.first, depth + 2);
      pattern = pattern->next;
      continue;
    }

    printf("\n");
    pattern = pattern->next;
  }
}

uniq int re_get_group_count(re_t pattern)
{
  if (pattern == 0)
  {
    return 0;
  }

  regex_program_t* program = (regex_program_t*) pattern;
  return program->group_count;
}

#ifndef _XOPEN_SOURCE
#define _XOPEN_SOURCE
#endif

uniq string string::lower_case(char* str)
{
    string result = string(str);
    for(int i=0; i<strlen(str); i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            result[i] = str[i] - 'A' + 'a';
        }
    }
    
    return result;
}

uniq string string::upper_case(char* str)
{
    string result = string(str);
    for(int i=0; i<strlen(str); i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            result[i] = str[i] - 'a' + 'A';
        }
    }
    
    return result;
}

uniq int char*::index_regex(char* self, char* reg, int default_value)
{
    if(reg == null) {
        return default_value;
    }
    
    re_t re = re_compile(reg);
    
    if(re == NULL) {
        return default_value;
    }
    
    int result = default_value;
    
    int offset = 0;

    int n = 0;
    
    int result = default_value;

    while(true) {
        int matchlength = 0;
        int max_captures = 8;
        re_capture captures[max_captures];
        int regex_result = re_matchp(re, self, &matchlength, captures, max_captures);

        /// match and no group strings ///
        if(regex_result >= 0) 
        {
            result = regex_result;
            break;
        }
        /// no match ///
        {
            break;
        }
    }

    return result;
}

uniq int char*::rindex(char* str, char* search_str, int default_value)
{
    int len = strlen(search_str);
    char* p = str + strlen(str) - len;

    while(p >= str) {
        if(strncmp(p, search_str, len) == 0) {
            return p - str;
        }

        p--;
    }

    return default_value;
}

uniq int char*::rindex_regex(char* self, char* reg, int default_value)
{
    if(reg == null) {
        return default_value;
    }
    
    re_t re = re_compile(reg);
    
    if(re == NULL) {
        return default_value;
    }
    
    int result = default_value;
    
    int offset = 0;

    int n = 0;
    
    string self2 = self.reverse();

    int result = default_value;

    while(true) {
        int matchlength = 0;
        int max_captures = 8;
        re_capture captures[max_captures];
        int regex_result = re_matchp(re, self2, &matchlength, captures, max_captures);

        /// match and no group strings ///
        if(regex_result >= 0) 
        {
            result = strlen(self) -matchlength;
            break;
        }
        /// no match ///
        {
            break;
        }
    }

    return result;
}

uniq string char*::strip(char* self)
{
    string result = string(self);
    
    int len = strlen(self);
    
    if(self[len-1] == '\n') {
        result[len-1] = '\0';
    }
    else if(self[len-1] == '\r') {
        result[len-1] = '\0';
    }
    else if(len > 2 && self[len-2] == '\r' && self[len-1] == '\n') {
        result[len-2] = '\0';
    }
    
    return result;
}

uniq int char*::index(char* str, char* search_str, int default_value)
{
    char* head = strstr(str, search_str);

    if(head == null) {
        return default_value;
    }

    return head - str;
}

uniq string string::chomp(char* str)
{
    string result = string(str);
    
    if(result[result.length()-1] == '\n') {
        return result.substring(0, -2);
    }
    
    return result;
}

#if !defined(__BARE_METAL__) && !defined(__PICO__)
uniq string xrealpath(char* path)
{
    if(path == null) {
        return string("");
    }
    char* result = realpath(path, null);

    string result2 = string(result);

    free(result);

    return result2;
}
#endif


uniq string char*::replace(char* self, int index, char c)
{
    int len = strlen(self);

    if(strcmp(self, "") == 0) {
        return string(self);
    }
    
    if(index < 0) {
       index += len;
    }

    if(index >= len) {
        index = len-1;
    }

    if(index < 0) {
        index = 0;
    }
    
    self[index] = c;
    
    return string(self);
}

uniq string char*::multiply(char* str, int n)
{
    int len = strlen(str) * n + 1;

    char*% result = new char[len];

    result[0] = '\0';

    for(int i=0; i<n; i++) {
        strncat(result, str, len);
    }

    return result;
}

uniq list<string>*% char*::split_str(char* self, char* str) 
{
    auto result = new list<string>.initialize();

    auto buf = new buffer.initialize();

    for(int i=0; i<self.length(); i++) {
        if(strstr(self + i, str) == self + i) {
            result.push_back(string(buf.buf));
            buf.reset();
            i += strlen(str)-1;
        }
        else {
            buf.append_char(self[i]);
        }
    }
    if(buf.length() != 0) {
        result.push_back(string(buf.buf));
    }

    return result;
}

uniq int string::rindex(char* str, char* search_str, int default_value=-1) 
{
    return char*::rindex(str, search_str, default_value);
}

uniq int string::rindex_regex(char* self, char* reg, int default_value=-1)
{
    return char*::rindex_regex(self, reg, default_value);
}

uniq string string::strip(char* self)
{
    return char*::strip(self);
}

uniq int string::index(char* str, char* search_str, int default_value=-1)
{
    return char*::index(str, search_str, default_value);
}

uniq int string::index_regex(char* self, char* reg, int default_value=-1)
{
    return char*::index_regex(self, reg, default_value);
}

uniq string string::replace(char* self, int index, char c)
{
    return char*::replace(self, index, c);
}

uniq string string::multiply(char* str, int n)
{
    return char*::multiply(str, n);
}

uniq bool char*::match(char* self, char* reg)
{
    if(reg == null) {
        return false;
    }
    
    re_t re = re_compile(reg);
    
    if(re == NULL) {
        return false;
    }
    
    int offset = 0;

    int n = 0;
    
    int matchlength = 0;
    int max_captures = 8;
    re_capture captures[max_captures];
    int regex_result = re_matchp(re, self, &matchlength, captures, max_captures);

    /// match and no group strings ///
    if(regex_result >= 0)
    {
        return true;
    }
    /// no match ///
    else
    {
        return false;
    }
}

uniq list<string>*% char*::scan(char* self, char* reg)
{
    if(reg == null || reg == null) {
        return new list<string>();
    }
    auto result = new list<string>();
    
    re_t re = re_compile(reg);
    
    if(re == NULL) {
        return new list<string>();
    }
    
    int offset = 0;

    int n = 0;
    
    int group_count = re_get_group_count(re);

    while(true) {
        int matchlength = 0;
        int max_captures = 8;
        re_capture captures[max_captures];
        int regex_result = re_matchp(re, self + offset, &matchlength, captures, max_captures);

        /// match and no group strings ///
        if(regex_result >= 0 && group_count == 0)
        {
            string str = self.substring(offset + regex_result, offset + regex_result + matchlength);

            result.add(str);
            
            if(matchlength == 0) {
                offset++;
            }
            else {
                offset = offset + regex_result + matchlength;
            }
        }
        /// group strings ///
        else if(regex_result >= 0 && group_count > 0) {
            for(int i=0; i<group_count; i++) {
                re_capture cp = captures[i];
                auto match_string = (self + offset).substring(cp.start, cp.start + cp.length);
                result.push_back(match_string);
            }
            
            if(matchlength == 0) {
                offset++;
            }
            else {
                offset = offset + regex_result + matchlength;
            }
        }
        /// no match ///
        else {
            break;
        }
    }

    return result;
}

uniq list<string>*% char*::split(char* self, char* reg)
{
    if(reg == null || reg == null) {
        return new list<string>();
    }
    
    auto result = new list<string>();
    
    re_t re = re_compile(reg);
    
    if(re == NULL) {
        return new list<string>();
    }
    
    int offset = 0;

    int n = 0;
    
    int group_count = re_get_group_count(re);

    while(true) {
        int matchlength = 0;
        int max_captures = 8;
        re_capture captures[max_captures];
        int regex_result = re_matchp(re, self + offset, &matchlength, captures, max_captures);

        /// match and no group strings ///
        if(regex_result >= 0 && group_count == 0)
        {
            string str = self.substring(offset, offset + regex_result);

            result.add(str);
            
            if(matchlength == 0) {
                offset++;
            }
            else {
                offset = offset + regex_result + matchlength;
            }
        }
        /// no match ///
        else
        {
            break;
        }
    }

    if(offset < self.length()) {
        string str = self.substring(offset, -1);
        result.push_back(str);
    }

    return result;
}

uniq string string::sub(char* self, char* reg, char* replace)
{
    return char*::sub(self, reg, replace);
}

uniq list<string>*% string::split_str(char* self, char* str)
{
    return char*::split_str(self, str);
}

uniq list<string>*% string::scan(char* self, char* reg)
{
    return char*::scan(self, reg);
}

uniq list<string>*% string::split(char* self, char* reg)
{
    return char*::split(self, reg);
}

uniq bool string::match(char* self, char* reg)
{
    return char*::match(self, reg);
}

uniq string char*::sub(char* self, char* reg, char* replace)
{
    if(reg == null || reg == null) {
        return string("");
    }
    
    re_t re = re_compile(reg);
    
    if(re == NULL) {
        return string("");
    }
    
    int offset = 0;

    int n = 0;
    
    auto result = new buffer.initialize();
    
    int group_count = re_get_group_count(re);

    while(true) {
        int matchlength = 0;
        int max_captures = 8;
        re_capture captures[max_captures];
        int regex_result = re_matchp(re, self + offset, &matchlength, captures, max_captures);

        /// match and no group strings ///
        if(regex_result >= 0 && group_count == 0)
        {
            string str = self.substring(offset, offset + regex_result);

            result.append_str(str);
            result.append_str(replace);
            
            if(matchlength == 0) {
                offset++;
            }
            else {
                offset = offset + regex_result + matchlength;
            }
        }
        /// no match ///
        else {
            string str = self.substring(offset, -1);
            result.append_str(str);
            break;
        }
    }

    return result.to_string();
}

uniq string char*::sub_block(char* self, char* reg, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    if(reg == null || reg == null) {
        return string("");
    }
    
    auto result = new buffer();
    
    re_t re = re_compile(reg);
    
    if(re == NULL) {
        return string("");
    }
    
    int offset = 0;

    int n = 0;
    
    int group_count = re_get_group_count(re);

    while(true) {
        int matchlength = 0;
        int max_captures = 8;
        re_capture captures[max_captures];
        int regex_result = re_matchp(re, self + offset, &matchlength, captures, max_captures);

        /// match and no group strings ///
        if(regex_result >= 0 && group_count == 0)
        {
            string str = self.substring(offset, offset + regex_result);

            result.append_str(str);
            
            list<string>*% group_strings = new list<string>.initialize();
            
            string match_string = self.substring(offset + regex_result, offset + regex_result + matchlength);
            
            string block_result = block(parent, match_string, group_strings);
            
            result.append_str(block_result);
            
            if(matchlength == 0) {
                offset++;
            }
            else {
                offset = offset + regex_result + matchlength;
            }
        }

        /// group strings ///
        else if(regex_result >= 0 && group_count > 0) {
            string str = self.substring(offset, offset + regex_result);

            result.append_str(str);

            list<string>*% group_strings = new list<string>.initialize();

            for(int i=0; i<group_count; i++) {
                re_capture cp = captures[i];
                auto match_string = (self + offset).substring(cp.start, cp.start + cp.length);
                group_strings.push_back(match_string);
            }
            
            string match_string = self.substring(offset + regex_result, offset + regex_result + matchlength);
            
            string block_result = block(parent, match_string, group_strings);
            
            result.append_str(block_result);
            
            if(matchlength == 0) {
                offset++;
            }
            else {
                offset = offset + regex_result + matchlength;
            }
        }
        /// no match ///
        else {
            string str = self.substring(offset, -1);
            result.append_str(str);
            break;
        }
    }
    return result.to_string();
}

uniq list<string>*% char*::scan_block(char* self, char* reg, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    if(reg == null || reg == null) {
        return new list<string>();
    }
    auto result = new list<string>();
    
    re_t re = re_compile(reg);
    
    if(re == NULL) {
        return new list<string>();
    }
    
    int offset = 0;

    int n = 0;
    
    int group_count = re_get_group_count(re);

    while(true) {
        int matchlength = 0;
        int max_captures = 8;
        re_capture captures[max_captures];
        int regex_result = re_matchp(re, self + offset, &matchlength, captures, max_captures);

        /// match and no group strings ///
        if(regex_result >= 0 && group_count == 0)
        {
            list<string>*% group_strings = new list<string>.initialize();
            
            string match_string = self.substring(offset + regex_result, offset + regex_result + matchlength);
            
            string block_result = block(parent, match_string, group_strings);
            
            result.add(block_result);
            
            if(matchlength == 0) {
                offset++;
            }
            else {
                offset = offset + regex_result + matchlength;
            }
        }
        /// group strings ///
        else if(regex_result >= 0 && group_count > 0) {
            list<string>*% group_strings = new list<string>.initialize();

            for(int i=0; i<group_count; i++) {
                re_capture cp = captures[i];
                auto match_string = (self + offset).substring(cp.start, cp.start + cp.length);
                group_strings.push_back(match_string);
            }
            
            string match_string = self.substring(offset + regex_result, offset + regex_result + matchlength);
            
            string block_result = block(parent, match_string, group_strings);
            
            result.add(block_result);
            
            if(matchlength == 0) {
                offset++;
            }
            else {
                offset = offset + regex_result + matchlength;
            }
        }
        /// no match ///
        else {
            break;
        }
    }

    return result;
}

uniq string string::sub_block(char* self, char* reg, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    return char*::sub_block(self, reg, parent, block);
}

#if defined(__LINUX__) || defined(__ANDROID__) || defined(__RASPBERRY_PI__) || defined(__MAC__)

#ifndef _XOPEN_SOURCE
#define _XOPEN_SOURCE
#endif

#include <wchar.h>
#include <libgen.h>

typedef wchar_t*% wstring;

uniq wstring __builtin_wstring(char* str)
{
    if(str == null) {
        return null;
    }
    int len = strlen(str);

    wstring wstr = new wchar_t[len+1];

    int ret = mbstowcs(wstr, str, len+1);
    wstr[ret] = '\0';

    if(ret < 0) {
        wstr[0] = 0;
    }

    return wstr;
}

uniq int wchar_t*::length(wchar_t* str)
{
    return wcslen(str);
}

uniq int wstring::length(wchar_t* str)
{
    return wchar_t*::length(str);
}






uniq string string::lower_case(char* str)
{
    string result = string(str);
    for(int i=0; i<strlen(str); i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            result[i] = str[i] - 'A' + 'a';
        }
    }
    
    return result;
}

uniq string string::upper_case(char* str)
{
    string result = string(str);
    for(int i=0; i<strlen(str); i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            result[i] = str[i] - 'a' + 'A';
        }
    }
    
    return result;
}

uniq wstring wchar_t*::substring(wchar_t* str, int head, int tail)
{
    if(str == null) {
        return wstring("");
    }

    int len = wcslen(str);

    if(head < 0) {
        head += len;
    }
    if(tail < 0) {
        tail += len + 1;
    }

    if(head > tail) {
        return wstring("");
    }

    if(head < 0) {
        head = 0;
    }

    if(tail >= len) {
        tail = len;
    }

    if(head == tail) {
        return wstring("");
    }

    if(tail-head+1 < 1) {
        return wstring("");
    }

    wstring result = new wchar_t[tail-head+1];

    memcpy(result, str + head, sizeof(wchar_t)*(tail-head));
    result[tail-head] = '\0';

    return result;
}

uniq int char*::index_count(char* str, char* search_str, int count, int default_value)
{
    int n = 0;
    int len = strlen(str);
    for(int i=0; i<len; i++) {
        int len2 = strlen(search_str);
        int j;
        for(j=0; j<len2; j++) {
            if(str[i+j] != search_str[j]) {
                break;
            }
        }
        
        if(j == len2) {
            n++;
            
            if(n == count) {
                return i;
            }
        }
    }
    
    return default_value;
}


uniq int char*::rindex(char* str, char* search_str, int default_value)
{
    int len = strlen(search_str);
    char* p = str + strlen(str) - len;

    while(p >= str) {
        if(strncmp(p, search_str, len) == 0) {
            return p - str;
        }

        p--;
    }

    return default_value;
}


uniq int char*::rindex_count(char* str, char* search_str, int count, int default_value)
{
    int len = strlen(search_str);
    char* p = str + strlen(str) - len;
    
    int n = 0;

    while(p >= str) {
        if(strncmp(p, search_str, len) == 0) {
            n++;
            if(n == count) {
                return p - str;
            }
        }

        p--;
    }

    return default_value;
}







uniq string char*::strip(char* self)
{
    string result = string(self);
    
    int len = strlen(self);
    
    if(self[len-1] == '\n') {
        result[len-1] = '\0';
    }
    else if(self[len-1] == '\r') {
        result[len-1] = '\0';
    }
    else if(len > 2 && self[len-2] == '\r' && self[len-1] == '\n') {
        result[len-2] = '\0';
    }
    
    return result;
}

uniq string wchar_t*::to_string(wchar_t* wstr)
{
    int len = MB_LEN_MAX*(wcslen(wstr)+1);

    string result = new char[len];

    if(wcstombs(result, wstr, len) < 0) 
    {
        strncpy(result, "", len);
    }

    return result;
}

uniq wstring char*::to_wstring(char* str)
{
    return wstring(str);
}

uniq wstring wchar_t*::delete(wchar_t* str, int head, int tail) 
{
    int len = wcslen(str);

    if(len == 0) {
        return str.to_string().to_wstring();
    }
    
    if(head < 0) {
       head += len;
    }
    
    if(tail < 0) {
       tail += len + 1;
    }

    if(head < 0) {
        head = 0;
    }

    if(tail < 0) {
        return str.to_string().to_wstring();
    }

    if(tail >= len) {
        tail = len;
    }
    
    wstring sub_str = str.substring(tail, -1);

    memcpy(str + head, sub_str, sizeof(wchar_t)*(sub_str.length()+1));

    return str.to_string().to_wstring();
}

uniq int wchar_t*::index(wchar_t* str, wchar_t* search_str, int default_value)
{
    wchar_t* head = wcsstr(str, search_str);

    if(head == null) {
        return default_value;
    }

    return head - str;
}

uniq int wchar_t*::rindex(wchar_t* str, wchar_t* search_str, int default_value)
{
    int len = wcslen(search_str);

    wchar_t* p = str + wcslen(str) - len;

    while(p >= str) {
        int len2 = wcslen(p);
        bool result = true;
        int i;
        for(i=0; i<len && i < len2; i++) {
            if(p[i] != search_str[i]) {
                result = false;
            }
        }
        if(result) {
            return (p - str);
        }

        p--;
    }

    return default_value;
}

uniq wstring wchar_t*::reverse(wchar_t* str) 
{
    int len = wcslen(str);
    wstring result = new wchar_t[len + 1];

    for(int i=0; i<len; i++) {
        result[i] = str[len-i-1];
    }

    result[len] = '\0';

    return result;
}

uniq wstring wchar_t*::multiply(wchar_t* str, int n)
{
    int len = wcslen(str) * n + 1;

    wstring result = new wchar_t[len];

    result[0] = '\0';

    for(int i=0; i<n; i++) {
        wcscat(result, str);
    }

    return result;
}

uniq wstring wchar_t*::printable(wchar_t* str)
{
    int len = str.length();
    wstring result = new wchar_t[len*2+1];

    int n = 0;
    for(int i=0; i<len; i++) {
        wchar_t c = str[i];

        if((c >= 0 && c < ' ') 
            || c == 127)
        {
            result[n++] = '^';
            result[n++] = c + 'A' - 1;
        }
        else {
            result[n++] = c;
        }
    }

    result[n] = '\0'

    return result;
}


uniq int wchar_t*::compare(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right);
}

uniq int wstring::compare(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right);
}


uniq bool wchar_t*::equals(wchar_t left, wchar_t right)
{
    return left == right;
}


uniq wstring wchar_t*::operator_mult(wchar_t* str, int n)
{
    return wchar_t*::multiply(str, n);
}

uniq wstring wstring::operator_mult(wchar_t* str, int n)
{
    return wchar_t*::multiply(str, n);
}

uniq bool wchar_t*::operator_equals(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right) == 0;
}

uniq bool wstring::operator_equals(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right) == 0;
}

uniq bool wchar_t*::operator_not_equals(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right) != 0;
}

uniq bool wstring::operator_not_equals(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right) != 0;
}


uniq wstring wchar_t*::operator_add(wchar_t* left, wchar_t* right)
{
    wchar_t*% result = new wchar_t[wcslen(left) + wcslen(right) + 1];
    
    wcscpy(result, left);
    wcscat(result, right);
    
    return result;
}

uniq wstring wstring::operator_add(wchar_t* left, wchar_t* right)
{
    wchar_t*% result = new wchar_t[wcslen(left) + wcslen(right) + 1];
    
    wcscpy(result, left);
    wcscat(result, right);
    
    return result;
}

uniq int char*::index(char* str, char* search_str, int default_value)
{
    char* head = strstr(str, search_str);

    if(head == null) {
        return default_value;
    }

    return head - str;
}




uniq string char*::replace(char* self, int index, char c)
{
    int len = strlen(self);

    if(strcmp(self, "") == 0) {
        return string(self);
    }
    
    if(index < 0) {
       index += len;
    }

    if(index >= len) {
        index = len-1;
    }

    if(index < 0) {
        index = 0;
    }
    
    self[index] = c;
    
    return string(self);
}

uniq string char*::multiply(char* str, int n)
{
    int len = strlen(str) * n + 1;

    char*% result = new char[len];

    result[0] = '\0';

    for(int i=0; i<n; i++) {
        strcat(result, str);
    }

    return result;
}




uniq list<string>*% char*::split_str(char* self, char* str) 
{
    auto result = new list<string>.initialize();

    auto buf = new buffer.initialize();

    for(int i=0; i<self.length(); i++) {
        if(strstr(self + i, str) == self + i) {
            result.push_back(string(buf.buf));
            buf.reset();
            i += strlen(str)-1;
        }
        else {
            buf.append_char(self[i]);
        }
    }
    if(buf.length() != 0) {
        result.push_back(string(buf.buf));
    }

    return result;
}









uniq unsigned int wchar_t*::get_hash_key(wchar_t* value)
{
    int result = 0;
    wchar_t* p = value;
    while(*p) {
        result += (*p);
        p++;
    }
    return result;
}

uniq bool wchar_t*::equals(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right) == 0;
}

uniq bool wstring::equals(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right) == 0;
}


uniq bool wchar_t::operator_equals(wchar_t left, wchar_t right)
{
    return left == right;
}

uniq bool wchar_t::operator_not_equals(wchar_t left, wchar_t right)
{
    return left != right;
}

uniq unsigned int wchar_t::get_hash_key(wchar_t value)
{
    return value;
}

uniq bool wchar_t::equals(wchar_t left, wchar_t right)
{
    return left == right;
}

uniq string wchar_t::to_string(wchar_t wc)
{
    return xsprintf("%ls", wc);
}

uniq string string::chomp(char* str)
{
    string result = string(str);
    
    if(result[result.length()-1] == '\n') {
        return result.substring(0, -2);
    }
    
    return result;
}

uniq string xrealpath(char* path)
{
    if(path == null) {
        return string("");
    }
    char* result = realpath(path, null);

    string result2 = string(result);

    free(result);

    return result2;
}

uniq string xdirname(char* path)
{
    if(path == null) {
        return string("");
    }
    return string(dirname(string(path)));
}

uniq size_t xwcslen(wchar_t* wstr)
{
    wchar_t* p = wstr;
    
    size_t len = 0;
    while(*p) {
        p++;
        len++;
    }
    
    return len;
}

#ifdef __DEBIAN__
#define wcslen(o) xwcslen(o)
#endif

uniq wstring wstring::substring(wchar_t* str, int head, int tail) 
{
    return wchar_t*::substring(str, head, tail);
}

uniq int string::index_count(char* str, char* search_str, int count=1, int default_value=-1)
{
    return char*::index_count(str, search_str, count, default_value);
}


uniq int string::rindex(char* str, char* search_str, int default_value=-1) 
{
    return char*::rindex(str, search_str, default_value);
}


uniq int string::rindex_count(char* str, char* search_str, int count=1, int default_value=-1)
{
    return char*::rindex_count(str, search_str, count, default_value);
}






uniq string string::strip(char* self)
{
    return char*::strip(self);
}

uniq wstring string::to_wstring(char* str)
{
    return char*::to_wstring(str);
}

uniq string wstring::to_string(wchar_t* wstr)
{
    return wchar_t*::to_string(wstr);
}

uniq wstring int::to_wstring(int self)
{
    return xsprintf("%d", self).to_wstring();
}

uniq wstring wstring::delete(wchar_t* str, int head, int tail)
{
    return wchar_t*::delete(str, head, tail);
}

uniq int wstring::index(wchar_t* str, wchar_t* search_str, int default_value=1)
{
    return wchar_t*::index(str, search_str, default_value);
}

uniq int wstring::rindex(wchar_t* str, wchar_t* search_str, int default_value=-1)
{
    return wchar_t*::rindex(str, search_str, default_value);
}

uniq wstring wstring::reverse(wchar_t* str)
{
    return wchar_t*::reverse(str);
}

uniq wstring wstring::multiply(wchar_t* str, int n)
{
    return wchar_t*::multiply(str, n);
}

uniq wstring wstring::printable(wchar_t* str)
{
    return wchar_t*::printable(str);
}

uniq unsigned int wstring::get_hash_key(wchar_t* value)
{
    return wchar_t*::get_hash_key(value);
}


uniq int string::index(char* str, char* search_str, int default_value=-1)
{
    return char*::index(str, search_str, default_value);
}


uniq string string::replace(char* self, int index, char c)
{
    return char*::replace(self, index, c);
}

uniq string string::multiply(char* str, int n)
{
    return char*::multiply(str, n);
}



uniq list<string>*% string::split_str(char* self, char* str)
{
    return char*::split_str(self, str);
}

uniq wstring string::to_wstring(char* str)
{
    return char*::to_wstring(str);
}

uniq string char*::chomp(char* str)
{
    return string::chomp(str);
}

uniq bool wchar_t*::equals(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right) == 0;
}

uniq bool wchar_t*::operator_equals(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right) == 0;
}

uniq bool wchar_t*::operator_not_equals(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right) != 0;
}

#endif

//////////////////////////////
/// base library(IO-FILE)
//////////////////////////////
#if !defined(__MINUX__) && !defined(__BARE_METAL__) && !defined(__PICO__)
uniq string FILE*::read(FILE* f)
{
    if(f == null) {
        return string("");
    }
    buffer*% buf = new buffer.initialize();
    
    while(1) {
        char buf2[BUFSIZ];
        
        int size = fread(buf2, 1, BUFSIZ, f);
        
        buf.append(buf2, size);

        if(size < BUFSIZ) {
            break;
        }
    }
    
    return buf.to_string();
}

uniq int FILE*::write(FILE* f, char* str)
{
    if(f == null || str == null) {
        return -1;
    }
    
    return fwrite(str, strlen(str), 1, f);
}

uniq int FILE*::fclose(FILE* f) 
{
    if(f == null) {
        return -1;
    }
    
    int result = fclose(f);
    
    if(result < 0) {
        return result;
    }
    
    return result;
}

uniq FILE* FILE*::fprintf(FILE* f, const char* msg, ...)
{
    if(f == null || msg == null) {
        return f;
    }
    char msg2[1024*2*2*2];

    va_list` args;
    va_start(args, msg);
    vsnprintf(msg2, 1024*2*2*2, msg, args);
    va_end(args);

    int result = fprintf(f, "%s", msg2);
    
    if(result < 0) {
        return f;
    }
    
    return f;
}

uniq int char*::write(char* self, char* file_name, bool append=false) 
{
    if(self == null || file_name == null) {
        return -1;
    }
    
    FILE* f;
    if(append) {
       f = fopen(file_name, "a");
    }
    else {
       f = fopen(file_name, "w");
    }
    
    if(f == NULL) {
        return -1;
    }
    
    int result = fwrite(self, strlen(self), 1, f);
    
    if(result < 0) {
        return result;
    }
    
    int result2 = fclose(f)
    
    if(result2 < 0) {
        return result2;
    }
    
    return result;
}

uniq string char*::read(char* file_name) 
{
    if(file_name == null) {
        return string("");
    }
    
    FILE* f = fopen(file_name, "r");
    
    if(f == NULL) {
        return string("");
    }
    
    buffer*% buf = new buffer.initialize();
    
    while(1) {
        char buf2[BUFSIZ];
        
        int size = fread(buf2, 1, BUFSIZ, f);
        
        buf.append(buf2, size);

        if(size < BUFSIZ) {
            break;
        }
    }
    
    string result = buf.to_string();
    
    int result2 = fclose(f)
    
    if(result2 < 0) {
        return string("");
    }
    
    return result;
}

uniq list<string>*% FILE*::readlines(FILE* f)
{
    list<string>*% result = new list<string>.initialize();
    
    if(f == null) {
        return result;
    }
    
    while(1) {
        char buf[BUFSIZ];
        
        if(fgets(buf, BUFSIZ, f) == NULL) {
            break;
        }
        
        result.push_back(string(buf));
    }
    
    return result;
}

uniq bool xiswalpha(wchar_t c)
{
    bool result = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    return result;
}

uniq bool xiswblank(wchar_t c)
{
    return c == ' ' || c == '\t';
}

uniq bool xiswdigit(wchar_t c)
{
    return (c >= '0' && c <= '9');
}

uniq bool xiswalnum(wchar_t c)
{
    return xiswalpha(c) || xiswdigit(c);
}

uniq bool xiswascii(wchar_t c)
{
    bool result = (c >= ' ' && c <= '~');
    return result;
}
#endif

#endif
