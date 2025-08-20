#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "common2.h"

static arena_block_t* arena_new_block(size_t cap)
{
    arena_block_t* b = (arena_block_t*)malloc(sizeof(arena_block_t) + cap);
    if(!b) return NULL;
    b->next = NULL;
    b->used = 0;
    b->cap = cap;
    return b;
}

void arena_init(arena_t* a, size_t default_cap)
{
    a->head = NULL;
    a->default_cap = default_cap ? default_cap : (size_t)65536;
}

void arena_reset(arena_t* a)
{
    arena_block_t* b = a->head;
    while(b) {
        arena_block_t* n = b->next;
        free(b);
        b = n;
    }
    a->head = NULL;
}

void* arena_alloc(arena_t* a, size_t n, size_t align)
{
    if(align == 0) align = sizeof(void*);
    arena_block_t* b = a->head;
    if(!b) {
        size_t cap = n + align + a->default_cap;
        b = arena_new_block(cap);
        if(!b) return NULL;
        a->head = b;
    }
    // align pointer
    uintptr_t base = (uintptr_t)(b->data);
    uintptr_t cur = base + b->used;
    uintptr_t aligned = (cur + (align-1)) & ~(uintptr_t)(align-1);
    size_t new_used = (aligned - base) + n;
    if(new_used > b->cap) {
        // allocate new block
        size_t need = n + align;
        size_t cap = need > a->default_cap ? need : a->default_cap;
        arena_block_t* nb = arena_new_block(cap);
        if(!nb) return NULL;
        nb->next = b;
        a->head = nb;
        b = nb;
        base = (uintptr_t)(b->data);
        cur = base + b->used;
        aligned = (cur + (align-1)) & ~(uintptr_t)(align-1);
        new_used = (aligned - base) + n;
    }
    b->used = new_used;
    return (void*)aligned;
}

char* arena_strndup(arena_t* a, const char* s, size_t n)
{
    char* p = (char*)arena_alloc(a, n+1, 1);
    if(!p) return NULL;
    memcpy(p, s, n);
    p[n] = '\0';
    return p;
}

char* arena_strdup(arena_t* a, const char* s)
{
    return arena_strndup(a, s, strlen(s));
}

