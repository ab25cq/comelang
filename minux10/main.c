#include <stdint.h>

// UARTに出力するための簡易的な関数
void print_str(const char* s) {
    // 実際の環境ではUARTのベースアドレスに書き込む
    // 例: volatile char* uart = (char*)0x09000000;
    // while(*s) { *uart = *s++; }
}

void print_hex(uint64_t n) {
    char buf[17];
    char* p = buf + 16;
    *p = '\0';
    do {
        p--;
        uint64_t digit = n % 16;
        *p = (digit < 10) ? ('0' + digit) : ('a' + digit - 10);
        n /= 16;
    } while (p > buf && n > 0);
    print_str(p);
}


#define NUM_TASKS 3
#define STACK_SIZE 1024

// タスクコンテキストを保存する構造体
typedef struct {
    uint64_t sp; // スタックポインタ (x0-x30, elr, spsrが保存されている)
} TCB;

TCB tasks[NUM_TASKS];
uint64_t task_stacks[NUM_TASKS][STACK_SIZE];
int current_task = 0;

// コンテキストスイッチ関数のプロトタイプ宣言 (アセンブリで実装)
void switch_context(uint64_t* old_sp, uint64_t* new_sp);

// タスクのエントリポイント
void task_entry() {
    // この関数は、新しいタスクが最初に実行される場所
    // 実際のタスク関数を呼び出す
    // (今回は簡略化のため、各タスク関数内でループ)
}


void task1() {
    uint64_t count = 0;
    while (1) {
        print_str("Task 1, count: ");
        print_hex(count++);
        print_str("\n");
        for(volatile int i=0; i<1000000; i++); // 遅延
        yield();
    }
}

void task2() {
    uint64_t count = 0;
    while (1) {
        print_str("Task 2, count: ");
        print_hex(count++);
        print_str("\n");
        for(volatile int i=0; i<1000000; i++); // 遅延
        yield();
    }
}

// CPUを次のタスクに譲る
void yield() {
    int last_task = current_task;
    current_task = (current_task + 1) % NUM_TASKS;
    switch_context(&tasks[last_task].sp, &tasks[current_task].sp);
}

// タスクの初期化
void create_task(int task_id, void (*task_func)()) {
    // スタックの最も高いアドレスを取得
    uint64_t* stack_top = &task_stacks[task_id][STACK_SIZE];

    // SPSR_EL1 (実行状態)の初期値. EL1h (SP=SP_EL1, h=handler)
    stack_top[-1] = 0x5; // PSTATE.M = 0101 (EL1h)
    // ELR_EL1 (復帰先アドレス)
    stack_top[-2] = (uint64_t)task_func;
    // x30 (LR)
    stack_top[-3] = (uint64_t)task_entry;

    // x0-x29 は初期化不要 (0でよい)
    // スタックポインタをTCBに保存
    tasks[task_id].sp = (uint64_t)&stack_top[-33]; // 31個の汎用レジスタ + ELR + SPSR
}

int main() {
    // タスク1と2を作成
    create_task(1, task1);
    create_task(2, task2);

    // main自身もタスク0として動作
    uint64_t count = 0;
    while (1) {
        print_str("Main Task 0, count: ");
        print_hex(count++);
        print_str("\n");
        for(volatile int i=0; i<1000000; i++); // 遅延
        yield();
    }

    return 0;
}

