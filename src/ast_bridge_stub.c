#include <stdio.h>
#include "common2.h"

void cb_start_translation_unit(void)
{
    // placeholder: initialize state or AST root
}

void cb_finish_translation_unit(void)
{
    // placeholder: finalize state or hand off AST
}

void cb_on_function_simple(const char* name, long param_count)
{
    // placeholder: in a real bridge, construct a comelang AST node.
    // For now, just log to stderr (quiet by default; enable via env if needed)
    (void)name; (void)param_count;
    // fprintf(stderr, "fn %s(%ld params)\n", name, param_count);
}

// Opaque node helpers (stubs)
struct sNode* cb_ident(const char* name)           { (void)name; return NULL; }

struct sNode* cb_int_literal(const char* text, struct sInfo* info)
{
    (void)text; (void)info;
    return NULL; /* Stub: link ast_bridge_comelang.c with comelang to enable real node */
}
void* cb_float_literal(const char* text)           { (void)text; return NULL; }
void* cb_char_literal(const char* text)            { (void)text; return NULL; }
struct sNode* cb_string_literal(const char* text)  { (void)text; return NULL; }

void* cb_unary(const char* op, void* expr)         { (void)op; (void)expr; return NULL; }
void* cb_binary(const char* op, void* lhs, void* rhs){ (void)op; (void)lhs; (void)rhs; return NULL; }
void* cb_assign(const char* op, void* lhs, void* rhs){ (void)op; (void)lhs; (void)rhs; return NULL; }
void* cb_conditional(void* c, void* t, void* e)    { (void)c; (void)t; (void)e; return NULL; }

void* cb_call(void* callee, void* args)            { (void)callee; (void)args; return NULL; }
void* cb_index(void* base, void* index)            { (void)base; (void)index; return NULL; }
void* cb_member(void* base, const char* n, int a)  { (void)base; (void)n; (void)a; return NULL; }

void* cb_list_new(void)                            { return NULL; }
void* cb_list_append(void* list, void* elem)       { (void)list; (void)elem; return NULL; }

void* cb_stmt_empty(void)                          { return NULL; }
void* cb_expr_stmt(void* expr)                     { (void)expr; return NULL; }
void* cb_stmt_return(void* expr)                   { (void)expr; return NULL; }
void* cb_compound(void* list)                      { (void)list; return NULL; }
void* cb_decl(void* specs, void* inits)            { (void)specs; (void)inits; return NULL; }

void* cb_function_simple(const char* name, long pc, void* body)
{ (void)name; (void)pc; (void)body; return NULL; }
