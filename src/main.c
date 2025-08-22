#include <stdio.h>
#include <stdlib.h>
#include "ast.h"

extern int yyparse(void);
extern FILE* yyin;
extern int yylineno;

extern int yydebug;                                                     

static void usage(const char* prog)
{
    fprintf(stderr, "usage: %s <source.c>\n", prog);
}

int main(int argc, char** argv)
{
yydebug = 1;
    if(argc < 2) {
        usage(argv[0]);
        return 2;
    }
    const char* path = argv[1];
    FILE* f = fopen(path, "r");
    if(!f) {
        perror(path);
        return 1;
    }
    yyin = f;
    yylineno = 1;
    int rc = yyparse();
    fclose(f);
    if(rc != 0) {
        fprintf(stderr, "parse failed with code %d\n", rc);
        return 3;
    }
    printf("parsed OK: %s\n", path);
    ast_validate();
    ast_dump();
    ast_free_all();
    return 0;
}
