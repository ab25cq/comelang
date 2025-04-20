/* 
 *** Try Kernel
 *      タスク付属同期機能
*/

#include <trykernel.h>
#include <knldef.h>

/* タスクの実行遅延 API */
ER tk_dly_tsk( RELTIM dlytim )
{
    UINT    intsts;
    ER      err = E_OK;

    DI(intsts);     // 割込みの禁止
    if(dlytim > 0) {
        tqueue_remove_top(&ready_queue[cur_task->itskpri]); // タスクをレディキューから外す

        /* TCBの各種情報を変更する */
        cur_task->state   = TS_WAIT;                // タスクの状態を待ち状態に変更
        cur_task->waifct  = TWFCT_DLY;              // 待ち要因を設定
        cur_task->waitim  = dlytim + TIMER_PERIOD;  // 待ち時間を設定
        cur_task->waierr = &err;                   // 待ち解除時のエラーコード

        tqueue_add_entry(&wait_queue, cur_task);    // タスクをウェイトキューに繋ぐ
        scheduler();                                // スケジューラの実行
    }
    EI(intsts);     // 割込みの許可
    return err;
}