#ifndef COMMON_H
#define COMMON_H

/* Forward declaration of comelang compile context */
struct sInfo;

/* Global pointer to current compile context (set by the host) */
extern struct sInfo* gInfo;

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

// Global arena used by lexer/parser
extern arena_t* g_arena;

/* Forward declarations to avoid heavy includes here */
struct sNode;
struct sInfo;

// Called before parse
void cb_start_translation_unit(void);
// Called after parse
void cb_finish_translation_unit(void);

// Minimal hook to observe a simple function definition like:
//   <ret spec> IDENT '(' params_opt ')' compound
// name, param count, and body node
void cb_on_function_simple(const char* name, long param_count);

// Generic AST bridge API (opaque nodes)
struct sNode* cb_ident(const char* name);
struct sNode* cb_int_literal(const char* text, struct sInfo* info);
void* cb_float_literal(const char* text);
void* cb_char_literal(const char* text);
struct sNode* cb_string_literal(const char* text);

void* cb_unary(const char* op, void* expr);
void* cb_binary(const char* op, void* lhs, void* rhs);
void* cb_assign(const char* op, void* lhs, void* rhs);
void* cb_conditional(void* cond, void* then_e, void* else_e);

void* cb_call(void* callee, void* args);
void* cb_index(void* base, void* index);
void* cb_member(void* base, const char* name, int arrow);

void* cb_list_new(void);
void* cb_list_append(void* list, void* elem);

void* cb_stmt_empty(void);
void* cb_expr_stmt(void* expr);
void* cb_stmt_return(void* expr);
void* cb_compound(void* list);
void* cb_decl(void* specifiers, void* init_declarators);

// Simple function form
void* cb_function_simple(const char* name, long param_count, void* body);

#endif
