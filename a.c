#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct CTy CTy;

struct CTy {
    int t;
    int size;
    int align;
    int incomplete;
    union {
        struct {
            CTy *rtype;
            int *params;
            int  isvararg;
        } Func;
        struct {
            int   isunion;
            char *name;
            int  *members;
            int  *exports;
        } Struct;
        struct {
            int  *members;
        } Enum;
        struct {
            CTy *subty;
        } Ptr;
        struct {
            CTy *subty;
            int  dim;
        } Arr;
        struct {
            int issigned;
            int type;
        } Prim;
    };
};

CTy *
newtype(int type)
{
    CTy *t;

    t = malloc(sizeof(CTy));
    t->t = type;
    return t;
}

#define CFUNC 1
#define CPTR 2

CTy *
mkptr(CTy *t)
{
    CTy *p;

    p = newtype(CPTR);
    p->Ptr.subty = t;
    p->size = 8;
    p->align = 8;
    return p;
}

static CTy *
declarator(CTy *basety, char **name, void *init) 
{
    CTy *t;

    basety = mkptr(basety);
    t = basety;
    return t;
}

static CTy *
declaratortail(CTy *basety)
{
    CTy    *t, *newt;
    
    t = basety;
    newt = newtype(CFUNC);
    newt->Func.rtype = basety;
printf("newt->Func.rtype %p\n", basety);
    newt->Func.params = NULL;
    t = newt;
        
    return t;
}

static CTy *
directdeclarator(CTy *basety, char **name) 
{
    CTy *ty, *stub;

    *name = 0;
    stub = malloc(sizeof(CTy));
    *stub = *basety;
    ty = declarator(stub, name, 0);
    *stub = *declaratortail(basety);
    return ty;
}

int main()
{
    struct CTy t1;
    char name[1024];
    struct CTy* t = directdeclarator(&t1, &name);
printf("l->Ptr.subty.Func.rtype %p\n", t->Ptr.subty->Func.rtype);
    
    return 0;
}

