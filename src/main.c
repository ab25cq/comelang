#include "common.h"
#include "common2.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yyparse(void);
extern FILE* yyin;
extern int yydebug;

static arena_t g_arena_inst;
arena_t* g_arena = &g_arena_inst;
struct sInfo* gInfo = NULL;

static const char* env_or(const char* key, const char* def)
{
    const char* v = getenv(key);
    return v && *v ? v : def;
}

int main(int argc, char** argv)
{
    if(argc < 2) {
        fprintf(stderr, "usage: comelang2 <source.c> [-- just pass to CC]\n");
        return 2;
    }

    const char* src = argv[1];
    FILE* f = fopen(src, "r");
    if(!f) {
        perror(src);
        return 1;
    }
    yyin = f;
    arena_init(g_arena, 1<<16);
    cb_start_translation_unit();

    yydebug = getenv("YYDEBUG") ? 1 : 0;
    int rc = yyparse();
    fclose(f);

    if(rc != 0) {
        fprintf(stderr, "[warn] parse failed (%d), falling back to direct CC\n", rc);
    }
    cb_finish_translation_unit();
    arena_reset(g_arena);

    // Simple pass-through compile with system CC after successful parse
    const char* cc = env_or("CC", "clang");
    const char* out = env_or("OUT", "a");

    char cmd[4096];
    snprintf(cmd, sizeof(cmd), "%s -std=c17 -o %s %s", cc, out, src);
    int s = system(cmd);
    if(s != 0) {
        fprintf(stderr, "CC failed: %s\n", cmd);
        return 4;
    }
    return 0;
}
