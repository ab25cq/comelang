#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <ctype.h>
#include <signal.h>

struct TCCState {
    int warn_write_strings;
    int warn_unsupported;
    int warn_error;
    int warn_none;
    int warn_implicit_function_declaration;
};

typedef struct FlagDef {
    uint16_t offset;
    uint16_t flags;
    const char *name;
} FlagDef;

#define offsetof(type, field) ((size_t) &((type *)0)->field)

int aaa()
{
    return 1;
}

static const FlagDef warning_defs[] = {
    { offsetof(TCCState, warn_unsupported), 0, "unsupported" },
    { offsetof(TCCState, warn_write_strings), 0, "write-strings" },
    { offsetof(TCCState, warn_error), 0, "error" },
    { offsetof(TCCState, warn_implicit_function_declaration), 1,
      "implicit-function-declaration" },
};

int main()
{
    struct sigaction sigact;
    sigact.sa_flags = 0x0040 | 0x0004;
    *(&sigact.sa_mask) = 0;
    
    return 0;
}
