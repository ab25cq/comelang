/* 
 *** Try Kernel
 *      スケジューラ
*/
#include <trykernel.h>
#include <knldef.h>

TCB *ready_queue[CNF_MAX_TSKPRI];    // タスクのレディキュー
TCB *cur_task;                       // 実行中のタスク
TCB *sche_task;                      // 次に実行するタスク

UW  disp_running;                    // ディスパッチャ実行中

/* タスクのスケジューリング */
void scheduler(void)
{
    INT		i;

    for(i = 0; i < CNF_MAX_TSKPRI; i++) {
        if( ready_queue[i] != NULL) break;
    }

    if(i < CNF_MAX_TSKPRI) {
        sche_task = ready_queue[i];
    } else {
        sche_task = NULL;    // 実行できるタスクは無い
    }
    if(sche_task != cur_task && !disp_running) {
        dispatch();         // ディスパッチャを実行
    }
}