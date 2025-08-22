#include "typedefs.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct TList { char** a; long n; long cap; } TList;
static TList g;

static int name_eq(const char* a, const char* b){ return strcmp(a,b)==0; }

int typedef_is(const char* name)
{
    for(long i=0;i<g.n;i++) if(name_eq(g.a[i], name)) return 1;
    return 0;
}

void typedef_add(const char* name)
{
puts("typedef_add");
puts(name);
    if(!name) return;
    if(typedef_is(name)) return;
    if(g.n==g.cap){ long nc=g.cap?g.cap*2:16; char** na=(char**)realloc(g.a, sizeof(char*)*nc); if(!na) return; g.a=na; g.cap=nc; }
    g.a[g.n++] = strdup(name);
}

