// Simple growable arena allocator for lexer/parser temporaries
#ifndef GRAMMAR_ARENA_H
#define GRAMMAR_ARENA_H

#include <stddef.h>

typedef struct arena_block {
    struct arena_block* next;
    size_t used;
    size_t cap;
    unsigned char data[];
} arena_block_t;

typedef struct arena {
    arena_block_t* head;
    size_t default_cap; // default block size
} arena_t;

void arena_init(arena_t* a, size_t default_cap);
void arena_reset(arena_t* a); // free all blocks
void* arena_alloc(arena_t* a, size_t n, size_t align);
char* arena_strndup(arena_t* a, const char* s, size_t n);
char* arena_strdup(arena_t* a, const char* s);

#endif

