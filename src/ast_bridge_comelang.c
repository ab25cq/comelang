#include <stdlib.h>

/* Forward decls from comelang */
struct sNode;
struct sInfo;
extern struct sNode* create_int_node(int value, struct sInfo* info);

/* Real bridge implementation for comelang AST
 * NOTE: Not linked by default in comelang2. Define your build to link this
 * file with comelang objects, or replace the stub implementation. */

struct sNode* cb_int_literal(const char* text, struct sInfo* info)
{
    char* endp = NULL;
    long v = strtol(text, &endp, 0); /* auto-detect base (0x, 0b, 0) */
    (void)endp; /* ignore trailing suffixes for now */
    return create_int_node((int)v, info);
}

