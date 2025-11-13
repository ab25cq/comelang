// Demonstrates GCC labels as values (computed goto)
#include <stdio.h>
#include <stdlib.h>

static int run_program(char *ops) {
    int acc = 0;
    for (char *p = ops; *p; ++p) {
        static void *dispatch[] = {&&op_add, &&op_sub, &&op_end};
        // map: '+'->0, '-'->1, other->2
        int idx = (*p == '+') ? 0 : (*p == '-') ? 1 : 2;
        goto *dispatch[idx];

op_add:
        acc += 1; continue;
op_sub:
        acc -= 1; continue;
op_end:
        break;
    }
    return acc;
}

int main(void) {
    printf("[labels] '++-+' => %d\n", run_program("++-+"));
    printf("[labels] '+x-' => %d\n", run_program("+x-"));
    return 0;
}
