#include "ast.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

static char* sdup(const char* s) {
    size_t n = strlen(s);
    char* r = (char*)malloc(n+1);
    if(r) { memcpy(r, s, n+1); }
    return r;
}

AstCompound* ast_compound_new(void)
{
    AstCompound* n = (AstCompound*)calloc(1, sizeof(AstCompound));
    if(n) n->kind = AST_COMPOUND;
    return n;
}

AstFunction* ast_function_new(const char* name, long param_count, AstNode* body)
{
    AstFunction* f = (AstFunction*)calloc(1, sizeof(AstFunction));
    if(!f) return NULL;
    f->kind = AST_FUNCTION;
    f->name = name ? sdup(name) : NULL;
    f->param_count = param_count;
    f->body = body;
    return f;
}

static void print_indent(int n) {
    for(int i=0;i<n;i++) putchar(' ');
}

void ast_print(const AstNode* n, int indent)
{
    if(!n) { print_indent(indent); printf("(null)\n"); return; }
    switch(n->kind) {
    case AST_COMPOUND: {
        print_indent(indent); printf("Compound{}\n");
        break; }
    case AST_FUNCTION: {
        const AstFunction* f = (const AstFunction*)n;
        print_indent(indent);
        printf("Function name=%s params=%ld\n", f->name?f->name:"<anon>", f->param_count);
        ast_print(f->body, indent+2);
        break; }
    default:
        print_indent(indent); printf("<unknown kind %d>\n", (int)n->kind);
        break;
    }
}

/* simple global list */
typedef struct AstVec {
    AstNode** data;
    size_t len;
    size_t cap;
} AstVec;

static AstVec g_nodes;

static void vec_push(AstVec* v, AstNode* n) {
    if(v->len == v->cap) {
        size_t nc = v->cap ? v->cap*2 : 8;
        AstNode** nd = (AstNode**)realloc(v->data, nc*sizeof(*nd));
        if(!nd) return;
        v->data = nd;
        v->cap = nc;
    }
    v->data[v->len++] = n;
}

void ast_add(AstNode* n) {
    if(n) vec_push(&g_nodes, n);
}

void ast_dump(void) {
    for(size_t i=0;i<g_nodes.len;i++) {
        printf("[AST %zu]\n", i);
        ast_print(g_nodes.data[i], 2);
    }
}

static void ast_free_node(AstNode* n) {
    if(!n) return;
    switch(n->kind) {
    case AST_FUNCTION: {
        AstFunction* f = (AstFunction*)n;
        if(f->body) ast_free_node(f->body);
        free(f->name);
        free(f);
        break; }
    case AST_COMPOUND: {
        /* no children for now */
        free(n);
        break; }
    default:
        free(n);
        break;
    }
}

void ast_free_all(void) {
    for(size_t i=0;i<g_nodes.len;i++) {
        ast_free_node(g_nodes.data[i]);
    }
    free(g_nodes.data);
    g_nodes.data = NULL;
    g_nodes.len = g_nodes.cap = 0;
}
