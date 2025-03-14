/* 
 *** Try Kernel
 *      システムタイマ
*/

#include <trykernel.h>
#include <knldef.h>

TCB *wait_queue;    /* 時間待ち状態のタスクの待ち行列(ウェイトキュー) */

/* システムタイマ割込みハンドラ */
void systimer_handler(void)
{
    TCB     *tcb, *next;

    for( tcb = wait_queue; tcb != NULL; tcb = next) {
        next = tcb->next;
        if(tcb->waitim == TMO_FEVR) {
            continue;
        } else if(tcb->waitim > TIMER_PERIOD) {
            tcb->waitim -= TIMER_PERIOD;  // 待ち時間から経過時間を減じる。
        } else {                          // 待ち時間が経過したタスクを実行できる状態に戻す
            tqueue_remove_entry( &wait_queue, tcb);             // タスクをウェイトキューから外す

            if(tcb->waifct == TWFCT_DLY) {
                *tcb->waierr = E_OK;         // tk_dly_tskからの復帰はエラー無し
            } else {
                *tcb->waierr = E_TMOUT;      // タイムアウト・エラー
            }

            tcb->state      = TS_READY;
            tcb->waifct     = TWFCT_NON;
            tqueue_add_entry( &ready_queue[tcb->itskpri], tcb); // タスクをレディキューにつなぐ
        }
    }
    scheduler();        // スケジューラを実行する
}