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

AstCompound* ast_compound_new_with(AstNode** items, long count)
{
    AstCompound* n = ast_compound_new();
    if(!n) return NULL;
    n->items = items;
    n->count = count;
    return n;
}

AstFunction* ast_function_new(const char* name, const char* return_type, int flags, AstParam* params, long param_count, AstNode* body)
{
    AstFunction* f = (AstFunction*)calloc(1, sizeof(AstFunction));
    if(!f) return NULL;
    f->kind = AST_FUNCTION;
    f->name = name ? sdup(name) : NULL;
    f->return_type = return_type ? sdup(return_type) : NULL;
    f->flags = flags;
    f->params = params; /* take ownership of array (and its strings) */
    f->param_count = param_count;
    f->body = body;
    return f;
}

AstNode* ast_return_new(AstNode* expr)
{
    typedef struct AstReturn { AstKind kind; AstNode* expr; } AstReturn;
    AstReturn* r = (AstReturn*)calloc(1, sizeof(AstReturn));
    if(!r) return NULL;
    r->kind = AST_RETURN;
    r->expr = expr;
    return (AstNode*)r;
}

AstNode* ast_expr_int_new(long value)
{
    typedef struct AstExprInt { AstKind kind; long value; } AstExprInt;
    AstExprInt* e = (AstExprInt*)calloc(1, sizeof(AstExprInt));
    if(!e) return NULL;
    e->kind = AST_EXPR_INT;
    e->value = value;
    return (AstNode*)e;
}

AstNode* ast_expr_call_new(AstNode* callee, AstNode** args, long argc)
{
    typedef struct AstExprCall { AstKind kind; AstNode* callee; AstNode** args; long argc; } AstExprCall;
    AstExprCall* e = (AstExprCall*)calloc(1, sizeof(AstExprCall));
    if(!e) return NULL;
    e->kind = AST_EXPR_CALL;
    e->callee = callee;
    e->args = args;
    e->argc = argc;
    return (AstNode*)e;
}

AstNode* ast_expr_assign_new(const char* op, AstNode* lhs, AstNode* rhs)
{
    typedef struct AstExprAssign { AstKind kind; char* op; AstNode* lhs; AstNode* rhs; } AstExprAssign;
    AstExprAssign* e = (AstExprAssign*)calloc(1, sizeof(AstExprAssign));
    if(!e) return NULL;
    e->kind = AST_EXPR_ASSIGN;
    e->op = op ? sdup(op) : NULL;
    e->lhs = lhs;
    e->rhs = rhs;
    return (AstNode*)e;
}

AstNode* ast_expr_float_new(double value)
{
    typedef struct AstExprFloat { AstKind kind; double value; } AstExprFloat;
    AstExprFloat* e = (AstExprFloat*)calloc(1, sizeof(AstExprFloat));
    if(!e) return NULL;
    e->kind = AST_EXPR_FLOAT;
    e->value = value;
    return (AstNode*)e;
}

AstNode* ast_expr_char_new(const char* text)
{
    typedef struct AstExprChar { AstKind kind; char* text; } AstExprChar;
    AstExprChar* e = (AstExprChar*)calloc(1, sizeof(AstExprChar));
    if(!e) return NULL;
    e->kind = AST_EXPR_CHAR;
    e->text = text ? sdup(text) : NULL;
    return (AstNode*)e;
}

AstNode* ast_expr_string_new(const char* text)
{
    typedef struct AstExprString { AstKind kind; char* text; } AstExprString;
    AstExprString* e = (AstExprString*)calloc(1, sizeof(AstExprString));
    if(!e) return NULL;
    e->kind = AST_EXPR_STRING;
    e->text = text ? sdup(text) : NULL;
    return (AstNode*)e;
}

AstNode* ast_typedef_new(const char* type_name, const char* alias_name)
{
    typedef struct AstTypedef { AstKind kind; char* type_name; char* alias_name; } AstTypedef;
    AstTypedef* t = (AstTypedef*)calloc(1, sizeof(AstTypedef));
    if(!t) return NULL;
    t->kind = AST_TYPEDEF;
    t->type_name = type_name ? sdup(type_name) : NULL;
    t->alias_name = alias_name ? sdup(alias_name) : NULL;
    return (AstNode*)t;
}

AstNode* ast_decl_new(const char* type_name, const char* name, AstNode* init)
{
    typedef struct AstDecl { AstKind kind; char* type_name; char* name; AstNode* init; } AstDecl;
    AstDecl* d = (AstDecl*)calloc(1, sizeof(AstDecl));
    if(!d) return NULL;
    d->kind = AST_DECL;
    d->type_name = type_name ? sdup(type_name) : NULL;
    d->name = name ? sdup(name) : NULL;
    d->init = init;
    return (AstNode*)d;
}

AstNode* ast_init_list_new(AstNode** items, long count)
{
    typedef struct AstInitList { AstKind kind; AstNode** items; long count; } AstInitList;
    AstInitList* il = (AstInitList*)calloc(1, sizeof(AstInitList));
    if(!il) return NULL;
    il->kind = AST_INIT_LIST;
    il->items = items;
    il->count = count;
    return (AstNode*)il;
}

AstNode* ast_init_desig_field_new(const char* name, AstNode* value)
{
    typedef struct AstInitDesigField { AstKind kind; char* name; AstNode* value; } AstInitDesigField;
    AstInitDesigField* n = (AstInitDesigField*)calloc(1, sizeof(AstInitDesigField));
    if(!n) return NULL;
    n->kind = AST_INIT_DESIG_FIELD;
    n->name = name ? sdup(name) : NULL;
    n->value = value;
    return (AstNode*)n;
}

AstNode* ast_init_desig_index_new(AstNode* index_expr, AstNode* value)
{
    typedef struct AstInitDesigIndex { AstKind kind; AstNode* index_expr; AstNode* value; } AstInitDesigIndex;
    AstInitDesigIndex* n = (AstInitDesigIndex*)calloc(1, sizeof(AstInitDesigIndex));
    if(!n) return NULL;
    n->kind = AST_INIT_DESIG_INDEX;
    n->index_expr = index_expr;
    n->value = value;
    return (AstNode*)n;
}

AstNode* ast_desig_field_new(const char* name)
{
    typedef struct AstDesigField { AstKind kind; char* name; } AstDesigField;
    AstDesigField* d = (AstDesigField*)calloc(1, sizeof(AstDesigField));
    if(!d) return NULL;
    d->kind = AST_DESIG_FIELD;
    d->name = name ? sdup(name) : NULL;
    return (AstNode*)d;
}

AstNode* ast_desig_index_new(AstNode* index_expr)
{
    typedef struct AstDesigIndex { AstKind kind; AstNode* index_expr; } AstDesigIndex;
    AstDesigIndex* d = (AstDesigIndex*)calloc(1, sizeof(AstDesigIndex));
    if(!d) return NULL;
    d->kind = AST_DESIG_INDEX;
    d->index_expr = index_expr;
    return (AstNode*)d;
}

AstNode* ast_desig_range_new(AstNode* first, AstNode* last)
{
    typedef struct AstDesigRange { AstKind kind; AstNode* first; AstNode* last; } AstDesigRange;
    AstDesigRange* d = (AstDesigRange*)calloc(1, sizeof(AstDesigRange));
    if(!d) return NULL;
    d->kind = AST_DESIG_RANGE;
    d->first = first;
    d->last = last;
    return (AstNode*)d;
}

AstNode* ast_init_desig_chain_new(AstNode** elems, long count, AstNode* value)
{
    typedef struct AstInitDesigChain { AstKind kind; AstNode** elems; long count; AstNode* value; } AstInitDesigChain;
    AstInitDesigChain* c = (AstInitDesigChain*)calloc(1, sizeof(AstInitDesigChain));
    if(!c) return NULL;
    c->kind = AST_INIT_DESIG;
    c->elems = elems;
    c->count = count;
    c->value = value;
    return (AstNode*)c;
}

AstNode* ast_expr_index_new(AstNode* arr, AstNode* index)
{
    typedef struct AstExprIndex { AstKind kind; AstNode* arr; AstNode* index; } AstExprIndex;
    AstExprIndex* e = (AstExprIndex*)calloc(1, sizeof(AstExprIndex));
    if(!e) return NULL;
    e->kind = AST_EXPR_INDEX;
    e->arr = arr;
    e->index = index;
    return (AstNode*)e;
}

AstNode* ast_expr_member_new(AstNode* recv, const char* name, int is_arrow)
{
    typedef struct AstExprMember { AstKind kind; AstNode* recv; char* name; int is_arrow; } AstExprMember;
    AstExprMember* e = (AstExprMember*)calloc(1, sizeof(AstExprMember));
    if(!e) return NULL;
    e->kind = AST_EXPR_MEMBER;
    e->recv = recv;
    e->name = name ? sdup(name) : NULL;
    e->is_arrow = is_arrow ? 1 : 0;
    return (AstNode*)e;
}

AstNode* ast_expr_binary_new(const char* op, AstNode* lhs, AstNode* rhs)
{
    typedef struct AstExprBinary { AstKind kind; char* op; AstNode* lhs; AstNode* rhs; } AstExprBinary;
    AstExprBinary* e = (AstExprBinary*)calloc(1, sizeof(AstExprBinary));
    if(!e) return NULL;
    e->kind = AST_EXPR_BINARY;
    e->op = op ? sdup(op) : NULL;
    e->lhs = lhs;
    e->rhs = rhs;
    return (AstNode*)e;
}

AstNode* ast_expr_ident_new(const char* name)
{
    typedef struct AstExprIdent { AstKind kind; char* name; } AstExprIdent;
    AstExprIdent* e = (AstExprIdent*)calloc(1, sizeof(AstExprIdent));
    if(!e) return NULL;
    e->kind = AST_EXPR_IDENT;
    e->name = name ? sdup(name) : NULL;
    return (AstNode*)e;
}

AstNode* ast_expr_unary_new(const char* op, AstNode* expr, int is_postfix)
{
    typedef struct AstExprUnary { AstKind kind; char* op; AstNode* expr; int is_postfix; } AstExprUnary;
    AstExprUnary* e = (AstExprUnary*)calloc(1, sizeof(AstExprUnary));
    if(!e) return NULL;
    e->kind = AST_EXPR_UNARY;
    e->op = op ? sdup(op) : NULL;
    e->expr = expr;
    e->is_postfix = is_postfix ? 1 : 0;
    return (AstNode*)e;
}

static void print_indent(int n) {
    for(int i=0;i<n;i++) putchar(' ');
}

void ast_print(const AstNode* n, int indent)
{
    if(!n) { print_indent(indent); printf("(null)\n"); return; }
    switch(n->kind) {
    case AST_COMPOUND: {
        const AstCompound* c = (const AstCompound*)n;
        print_indent(indent); printf("Compound{n=%ld}\n", c->count);
        for(long i=0;i<c->count;i++) {
            ast_print(c->items[i], indent+2);
        }
        break; }
    case AST_TYPEDEF: {
        typedef struct { AstKind kind; char* type_name; char* alias_name; } AstTypedef;
        const AstTypedef* t = (const AstTypedef*)n;
        print_indent(indent);
        printf("Typedef type=%s name=%s\n", t->type_name ? t->type_name : "<unknown>", t->alias_name ? t->alias_name : "<anon>");
        break; }
    case AST_FUNCTION: {
        const AstFunction* f = (const AstFunction*)n;
        print_indent(indent);
        printf("Function rtype=%s name=%s params=%ld\n",
               f->return_type?f->return_type:"<ret>",
               f->name?f->name:"<anon>", f->param_count);
        if(f->flags){
            print_indent(indent+2);
            printf("flags:");
            if(f->flags & ASTF_EXTERN) printf(" extern");
            if(f->flags & ASTF_STATIC) printf(" static");
            if(f->flags & ASTF_INLINE) printf(" inline");
            if(f->flags & ASTF_CONST) printf(" const");
            if(f->flags & ASTF_VOLATILE) printf(" volatile");
            if(f->flags & ASTF_RESTRICT) printf(" restrict");
            printf("\n");
        }
        for(long i=0;i<f->param_count;i++) {
            const AstParam* p = &f->params[i];
            print_indent(indent+2);
            printf("param[%ld]: type=%s name=%s\n", i,
                   p->type_name ? p->type_name : "<unknown>",
                   p->name ? p->name : "<anon>");
        }
        ast_print(f->body, indent+2);
        break; }
    case AST_RETURN: {
        print_indent(indent); printf("Return\n");
        const AstNode* expr = ((const AstNode* const*)((const char*)n + sizeof(AstKind)))[0];
        /* safer: cast to known struct layout */
        {
            typedef struct { AstKind kind; AstNode* expr; } AstReturn;
            const AstReturn* r = (const AstReturn*)n;
            if(r->expr) ast_print(r->expr, indent+2);
        }
        break; }
    case AST_EXPR_INT: {
        typedef struct { AstKind kind; long value; } AstExprInt;
        const AstExprInt* e = (const AstExprInt*)n;
        print_indent(indent); printf("Int(%ld)\n", e->value);
        break; }
    case AST_EXPR_BINARY: {
        typedef struct { AstKind kind; char* op; AstNode* lhs; AstNode* rhs; } AstExprBinary;
        const AstExprBinary* e = (const AstExprBinary*)n;
        print_indent(indent); printf("Binary(op=%s)\n", e->op ? e->op : "?");
        if(e->lhs) ast_print(e->lhs, indent+2);
        if(e->rhs) ast_print(e->rhs, indent+2);
        break; }
    case AST_EXPR_IDENT: {
        typedef struct { AstKind kind; char* name; } AstExprIdent;
        const AstExprIdent* e = (const AstExprIdent*)n;
        print_indent(indent); printf("Ident(%s)\n", e->name ? e->name : "<anon>");
        break; }
    case AST_DECL: {
        typedef struct { AstKind kind; char* type_name; char* name; AstNode* init; } AstDecl;
        const AstDecl* d = (const AstDecl*)n;
        print_indent(indent);
        printf("Decl type=%s name=%s\n", d->type_name?d->type_name:"<type>", d->name?d->name:"<anon>");
        if(d->init) { print_indent(indent+2); printf("init:\n"); ast_print(d->init, indent+4); }
        break; }
    case AST_EXPR_UNARY: {
        typedef struct { AstKind kind; char* op; AstNode* expr; int is_postfix; } AstExprUnary;
        const AstExprUnary* e = (const AstExprUnary*)n;
        print_indent(indent); printf("Unary(%s%s)\n", e->is_postfix?"post":"pre", e->op?e->op:"");
        if(e->expr) ast_print(e->expr, indent+2);
        break; }
    case AST_EXPR_CALL: {
        typedef struct { AstKind kind; AstNode* callee; AstNode** args; long argc; } AstExprCall;
        const AstExprCall* e = (const AstExprCall*)n;
        print_indent(indent); printf("Call(argc=%ld)\n", e->argc);
        if(e->callee) { print_indent(indent+2); printf("callee:\n"); ast_print(e->callee, indent+4); }
        for(long i=0;i<e->argc;i++) {
            print_indent(indent+2); printf("arg[%ld]:\n", i);
            ast_print(e->args[i], indent+4);
        }
        break; }
    case AST_EXPR_INDEX: {
        typedef struct { AstKind kind; AstNode* arr; AstNode* index; } AstExprIndex;
        const AstExprIndex* e = (const AstExprIndex*)n;
        print_indent(indent); printf("Index\n");
        if(e->arr) ast_print(e->arr, indent+2);
        if(e->index) ast_print(e->index, indent+2);
        break; }
    case AST_EXPR_MEMBER: {
        typedef struct { AstKind kind; AstNode* recv; char* name; int is_arrow; } AstExprMember;
        const AstExprMember* e = (const AstExprMember*)n;
        print_indent(indent); printf("Member(%s%s)\n", e->is_arrow?"->":".", e->name?e->name:"<anon>");
        if(e->recv) ast_print(e->recv, indent+2);
        break; }
    case AST_INIT_LIST: {
        typedef struct { AstKind kind; AstNode** items; long count; } AstInitList;
        const AstInitList* il = (const AstInitList*)n;
        print_indent(indent); printf("InitList{n=%ld}\n", il->count);
        for(long i=0;i<il->count;i++) ast_print(il->items[i], indent+2);
        break; }
    case AST_INIT_DESIG_FIELD: {
        typedef struct { AstKind kind; char* name; AstNode* value; } AstInitDesigField;
        const AstInitDesigField* d = (const AstInitDesigField*)n;
        print_indent(indent); printf("Designated(.%s)\n", d->name?d->name:"<field>");
        if(d->value) ast_print(d->value, indent+2);
        break; }
    case AST_INIT_DESIG_INDEX: {
        typedef struct { AstKind kind; AstNode* index_expr; AstNode* value; } AstInitDesigIndex;
        const AstInitDesigIndex* d = (const AstInitDesigIndex*)n;
        print_indent(indent); printf("Designated([index])\n");
        if(d->index_expr) { print_indent(indent+2); printf("index:\n"); ast_print(d->index_expr, indent+4); }
        if(d->value) { print_indent(indent+2); printf("value:\n"); ast_print(d->value, indent+4); }
        break; }
    case AST_DESIG_FIELD: {
        typedef struct { AstKind kind; char* name; } AstDesigField;
        const AstDesigField* e = (const AstDesigField*)n;
        print_indent(indent); printf(".\n");
        if(e->name) { print_indent(indent+2); printf("field=%s\n", e->name); }
        break; }
    case AST_DESIG_INDEX: {
        typedef struct { AstKind kind; AstNode* index_expr; } AstDesigIndex;
        const AstDesigIndex* e = (const AstDesigIndex*)n;
        print_indent(indent); printf("[index]\n");
        if(e->index_expr) ast_print(e->index_expr, indent+2);
        break; }
    case AST_DESIG_RANGE: {
        typedef struct { AstKind kind; AstNode* first; AstNode* last; } AstDesigRange;
        const AstDesigRange* e = (const AstDesigRange*)n;
        print_indent(indent); printf("[range]\n");
        if(e->first) { print_indent(indent+2); printf("first:\n"); ast_print(e->first, indent+4); }
        if(e->last) { print_indent(indent+2); printf("last:\n"); ast_print(e->last, indent+4); }
        break; }
    case AST_INIT_DESIG: {
        typedef struct { AstKind kind; AstNode** elems; long count; AstNode* value; } AstInitDesigChain;
        const AstInitDesigChain* c = (const AstInitDesigChain*)n;
        print_indent(indent); printf("DesignatedChain{n=%ld}\n", c->count);
        for(long i=0;i<c->count;i++) ast_print(c->elems[i], indent+2);
        if(c->value) { print_indent(indent+2); printf("value:\n"); ast_print(c->value, indent+4); }
        break; }
    case AST_EXPR_ASSIGN: {
        typedef struct { AstKind kind; char* op; AstNode* lhs; AstNode* rhs; } AstExprAssign;
        const AstExprAssign* e = (const AstExprAssign*)n;
        print_indent(indent); printf("Assign(op=%s)\n", e->op?e->op:"=");
        if(e->lhs) ast_print(e->lhs, indent+2);
        if(e->rhs) ast_print(e->rhs, indent+2);
        break; }
    case AST_EXPR_FLOAT: {
        typedef struct { AstKind kind; double value; } AstExprFloat;
        const AstExprFloat* e = (const AstExprFloat*)n;
        print_indent(indent); printf("Float(%g)\n", e->value);
        break; }
    case AST_EXPR_CHAR: {
        typedef struct { AstKind kind; char* text; } AstExprChar;
        const AstExprChar* e = (const AstExprChar*)n;
        print_indent(indent); printf("Char(%s)\n", e->text?e->text:"''");
        break; }
    case AST_EXPR_STRING: {
        typedef struct { AstKind kind; char* text; } AstExprString;
        const AstExprString* e = (const AstExprString*)n;
        print_indent(indent); printf("String(%s)\n", e->text?e->text:"\"\"");
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

/* ---------------- Validation (very simple) ---------------- */
static int parse_dims(const char* type, long* dims, int max_dims)
{
    int nd=0; const char* p=type;
    while(*p && nd<max_dims) {
        if(*p=='['){
            p++; long v=0; int any=0;
            while(*p>='0'&&*p<='9'){ any=1; v = v*10 + (*p-'0'); p++; }
            if(*p==']' && any) { dims[nd++]=v; p++; continue; }
        }
        p++;
    }
    return nd;
}

static int validate_init_rec(const AstNode* init, const long* dims, int ndims, int depth)
{
    if(ndims==0){
        if(!init) return 1;
        if(init->kind==AST_INIT_LIST){
            typedef struct { AstKind kind; AstNode** items; long count; } AstInitList;
            const AstInitList* il=(const AstInitList*)init;
            if(il->count>1) fprintf(stderr, "warn: scalar initialized with %ld elements\n", il->count);
        }
        return 1;
    }
    if(!init) return 1;
    if(init->kind==AST_INIT_LIST){
        typedef struct { AstKind kind; AstNode** items; long count; } AstInitList;
        const AstInitList* il=(const AstInitList*)init;
        if(dims[0]>0 && il->count>dims[0]){
            fprintf(stderr, "error: too many elements for array dimension %ld (got %ld)\n", dims[0], il->count);
            return 0;
        }
        int ok=1;
        for(long i=0;i<il->count;i++) ok &= validate_init_rec(il->items[i], dims+1, ndims-1, depth+1);
        return ok;
    }
    if(init->kind==AST_INIT_DESIG || init->kind==AST_INIT_DESIG_INDEX){
        if(init->kind==AST_INIT_DESIG){
            typedef struct { AstKind kind; AstNode** elems; long count; AstNode* value; } AstInitDesigChain;
            const AstInitDesigChain* ch=(const AstInitDesigChain*)init;
            int k=0; int ok=1; long dim0=dims[0];
            for(long i=0;i<ch->count;i++){
                const AstNode* e=ch->elems[i];
                if(e->kind==AST_DESIG_INDEX){
                    typedef struct { AstKind kind; AstNode* index_expr; } AstDesigIndex; const AstDesigIndex* di=(const AstDesigIndex*)e;
                    if(di->index_expr && di->index_expr->kind==AST_EXPR_INT){
                        typedef struct { AstKind kind; long value; } AstExprInt; const AstExprInt* iv=(const AstExprInt*)di->index_expr;
                        if(iv->value<0 || (dim0>0 && iv->value>=dim0)){
                            fprintf(stderr, "error: designated index %ld out of bounds of %ld\n", iv->value, dim0);
                            ok=0;
                        }
                    }
                    k++;
                } else if(e->kind==AST_DESIG_RANGE){
                    typedef struct { AstKind kind; AstNode* first; AstNode* last; } AstDesigRange; const AstDesigRange* dr=(const AstDesigRange*)e;
                    long a=-1,b=-1; if(dr->first && dr->first->kind==AST_EXPR_INT){ typedef struct { AstKind kind; long value; } AstExprInt; a=((const AstExprInt*)dr->first)->value; }
                    if(dr->last && dr->last->kind==AST_EXPR_INT){ typedef struct { AstKind kind; long value; } AstExprInt; b=((const AstExprInt*)dr->last)->value; }
                    if(a<0||b<0||a>b||(dim0>0 && b>=dim0)){
                        fprintf(stderr, "error: designated range invalid [%ld..%ld] for dim %ld\n", a,b,dim0);
                        ok=0;
                    }
                    k++;
                } else if(e->kind==AST_DESIG_FIELD){
                    /* struct field bounds unknown; skip */
                }
            }
            if(k>ndims){ fprintf(stderr, "error: too many array indices in designator\n"); ok=0; }
            ok &= validate_init_rec(ch->value, dims+k, ndims-k, depth+k);
            return ok;
        } else {
            typedef struct { AstKind kind; AstNode* index_expr; AstNode* value; } AstInitDesigIndex; const AstInitDesigIndex* di=(const AstInitDesigIndex*)init;
            long v=-1; if(di->index_expr && di->index_expr->kind==AST_EXPR_INT){ typedef struct { AstKind kind; long value; } AstExprInt; v=((const AstExprInt*)di->index_expr)->value; }
            if(v<0 || (dims[0]>0 && v>=dims[0])){ fprintf(stderr, "error: designated index %ld out of bounds of %ld\n", v, dims[0]); }
            return validate_init_rec(di->value, dims+1, ndims-1, depth+1);
        }
    }
    return 1;
}

void ast_validate(void)
{
    for(size_t i=0;i<g_nodes.len;i++){
        const AstNode* n=g_nodes.data[i];
        if(!n) continue;
        if(n->kind==AST_DECL){
            typedef struct { AstKind kind; char* type_name; char* name; AstNode* init; } AstDecl;
            const AstDecl* d=(const AstDecl*)n;
            long dims[8]={0}; int nd=parse_dims(d->type_name?d->type_name:"", dims, 8);
            if(nd>0){ (void)validate_init_rec(d->init, dims, nd, 0); }
            else { (void)validate_init_rec(d->init, dims, 0, 0); }
        }
    }
}

static void ast_free_node(AstNode* n) {
    if(!n) return;
    switch(n->kind) {
    case AST_FUNCTION: {
        AstFunction* f = (AstFunction*)n;
        if(f->body) ast_free_node(f->body);
        free(f->name);
        free(f->return_type);
        if(f->params) {
            for(long i=0;i<f->param_count;i++) {
                free(f->params[i].type_name);
                free(f->params[i].name);
            }
            free(f->params);
        }
        free(f);
        break; }
    case AST_COMPOUND: {
        AstCompound* c = (AstCompound*)n;
        if(c->items) {
            for(long i=0;i<c->count;i++) {
                ast_free_node(c->items[i]);
            }
            free(c->items);
        }
        free(c);
        break; }
    case AST_RETURN: {
        typedef struct AstReturn { AstKind kind; AstNode* expr; } AstReturn;
        AstReturn* r = (AstReturn*)n;
        if(r->expr) ast_free_node(r->expr);
        free(r);
        break; }
    case AST_EXPR_INT: {
        free(n);
        break; }
    case AST_EXPR_BINARY: {
        typedef struct AstExprBinary { AstKind kind; char* op; AstNode* lhs; AstNode* rhs; } AstExprBinary;
        AstExprBinary* e = (AstExprBinary*)n;
        if(e->lhs) ast_free_node(e->lhs);
        if(e->rhs) ast_free_node(e->rhs);
        free(e->op);
        free(e);
        break; }
    case AST_EXPR_IDENT: {
        typedef struct AstExprIdent { AstKind kind; char* name; } AstExprIdent;
        AstExprIdent* e = (AstExprIdent*)n;
        free(e->name);
        free(e);
        break; }
    case AST_EXPR_UNARY: {
        typedef struct AstExprUnary { AstKind kind; char* op; AstNode* expr; int is_postfix; } AstExprUnary;
        AstExprUnary* e = (AstExprUnary*)n;
        if(e->expr) ast_free_node(e->expr);
        free(e->op);
        free(e);
        break; }
    case AST_EXPR_CALL: {
        typedef struct AstExprCall { AstKind kind; AstNode* callee; AstNode** args; long argc; } AstExprCall;
        AstExprCall* e = (AstExprCall*)n;
        if(e->callee) ast_free_node(e->callee);
        if(e->args) {
            for(long i=0;i<e->argc;i++) if(e->args[i]) ast_free_node(e->args[i]);
            free(e->args);
        }
        free(e);
        break; }
    case AST_EXPR_INDEX: {
        typedef struct AstExprIndex { AstKind kind; AstNode* arr; AstNode* index; } AstExprIndex;
        AstExprIndex* e = (AstExprIndex*)n;
        if(e->arr) ast_free_node(e->arr);
        if(e->index) ast_free_node(e->index);
        free(e);
        break; }
    case AST_EXPR_MEMBER: {
        typedef struct AstExprMember { AstKind kind; AstNode* recv; char* name; int is_arrow; } AstExprMember;
        AstExprMember* e = (AstExprMember*)n;
        if(e->recv) ast_free_node(e->recv);
        free(e->name);
        free(e);
        break; }
    case AST_INIT_LIST: {
        typedef struct AstInitList { AstKind kind; AstNode** items; long count; } AstInitList;
        AstInitList* il = (AstInitList*)n;
        if(il->items) { for(long i=0;i<il->count;i++) if(il->items[i]) ast_free_node(il->items[i]); free(il->items); }
        free(il);
        break; }
    case AST_INIT_DESIG_FIELD: {
        typedef struct AstInitDesigField { AstKind kind; char* name; AstNode* value; } AstInitDesigField;
        AstInitDesigField* d = (AstInitDesigField*)n;
        free(d->name);
        if(d->value) ast_free_node(d->value);
        free(d);
        break; }
    case AST_INIT_DESIG_INDEX: {
        typedef struct AstInitDesigIndex { AstKind kind; AstNode* index_expr; AstNode* value; } AstInitDesigIndex;
        AstInitDesigIndex* d = (AstInitDesigIndex*)n;
        if(d->index_expr) ast_free_node(d->index_expr);
        if(d->value) ast_free_node(d->value);
        free(d);
        break; }
    case AST_DESIG_FIELD: {
        typedef struct AstDesigField { AstKind kind; char* name; } AstDesigField;
        AstDesigField* d = (AstDesigField*)n;
        free(d->name);
        free(d);
        break; }
    case AST_DESIG_INDEX: {
        typedef struct AstDesigIndex { AstKind kind; AstNode* index_expr; } AstDesigIndex;
        AstDesigIndex* d = (AstDesigIndex*)n;
        if(d->index_expr) ast_free_node(d->index_expr);
        free(d);
        break; }
    case AST_DESIG_RANGE: {
        typedef struct AstDesigRange { AstKind kind; AstNode* first; AstNode* last; } AstDesigRange;
        AstDesigRange* d = (AstDesigRange*)n;
        if(d->first) ast_free_node(d->first);
        if(d->last) ast_free_node(d->last);
        free(d);
        break; }
    case AST_INIT_DESIG: {
        typedef struct AstInitDesigChain { AstKind kind; AstNode** elems; long count; AstNode* value; } AstInitDesigChain;
        AstInitDesigChain* c = (AstInitDesigChain*)n;
        if(c->elems) { for(long i=0;i<c->count;i++) if(c->elems[i]) ast_free_node(c->elems[i]); free(c->elems); }
        if(c->value) ast_free_node(c->value);
        free(c);
        break; }
    case AST_EXPR_ASSIGN: {
        typedef struct AstExprAssign { AstKind kind; char* op; AstNode* lhs; AstNode* rhs; } AstExprAssign;
        AstExprAssign* e = (AstExprAssign*)n;
        if(e->lhs) ast_free_node(e->lhs);
        if(e->rhs) ast_free_node(e->rhs);
        free(e->op);
        free(e);
        break; }
    case AST_EXPR_FLOAT: {
        free(n);
        break; }
    case AST_EXPR_CHAR: {
        typedef struct AstExprChar { AstKind kind; char* text; } AstExprChar;
        AstExprChar* e = (AstExprChar*)n;
        free(e->text);
        free(e);
        break; }
    case AST_EXPR_STRING: {
        typedef struct AstExprString { AstKind kind; char* text; } AstExprString;
        AstExprString* e = (AstExprString*)n;
        free(e->text);
        free(e);
        break; }
    case AST_TYPEDEF: {
        typedef struct AstTypedef { AstKind kind; char* type_name; char* alias_name; } AstTypedef;
        AstTypedef* t = (AstTypedef*)n;
        free(t->type_name);
        free(t->alias_name);
        free(t);
        break; }
    case AST_DECL: {
        typedef struct AstDecl { AstKind kind; char* type_name; char* name; AstNode* init; } AstDecl;
        AstDecl* d = (AstDecl*)n;
        free(d->type_name);
        free(d->name);
        if(d->init) ast_free_node(d->init);
        free(d);
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
