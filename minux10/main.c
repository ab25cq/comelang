#include <stdint.h>
#define TASKS 2

struct ctx {
    uint64_t regs[31];
};

extern void switch_to(uint64_t *old_sp, uint64_t new_sp);

static struct ctx ctxs[TASKS];
static uint64_t stacks[TASKS][4096];
static int current = 0;

void task0(void) {
    while (1) { /* do something trivial */ }
}

void task1(void) {
    while (1) { /* do something trivial */ }
}

int main(void) {
    // 初期コンテキスト設定
    ctxs[0].regs[0] = (uint64_t)task0;
    ctxs[1].regs[0] = (uint64_t)task1;
    // スタックポインタを設定
    stacks[0][4095] = 0; // alignment
    stacks[1][4095] = 0;
    ctxs[0].regs[30] = (uint64_t)&stacks[0][4095];
    ctxs[1].regs[30] = (uint64_t)&stacks[1][4095];

    // 最初のタスクに切替え
    switch_to(&ctxs[0].regs[30], ctxs[0].regs[30]);

    // ここには戻ってこない
    while (1) {}
    return 0;
}

