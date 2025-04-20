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

/* タスク起床待ちAPI */
ER tk_slp_tsk( TMO tmout )
{
    UINT    intsts;
    ER      err = E_OK;

    DI(intsts);     // 割込みの禁止
    if ( cur_task->wupcnt > 0 ) {    // 起床要求有り
        cur_task->wupcnt--;
	} else {                        // 起床要求無し
        tqueue_remove_top(&ready_queue[cur_task->itskpri]);  // タスクをレディキューから外す

        /* TCBの各種情報を変更する */
        cur_task->state   = TS_WAIT;                // タスクの状態を待ち状態に変更
        cur_task->waifct  = TWFCT_SLP;              // 待ち要因を設定
        cur_task->waitim  = (tmout==TMO_FEVR)?tmout:(tmout+TIMER_PERIOD);   // 待ち時間を設定
        cur_task->waierr = &err;

        tqueue_add_entry(&wait_queue, cur_task);    // タスクをウェイトキューに繋ぐ
        scheduler();                                // スケジューラの実行
    }
    EI(intsts);     // 割込みの許可
    return err;
}

/* タスクの起床 API */
ER tk_wup_tsk( ID tskid )
{
    TCB	    *tcb;
    UINT    intsts;
    ER      err = E_OK;

    if(tskid <= 0 || tskid > CNF_MAX_TSKID) return E_ID;    /* ID番号チェック */

    DI(intsts);     // 割込みの禁止
    tcb = &tcb_tbl[tskid-1];
    if((tcb->state == TS_WAIT) && (tcb->waifct == TWFCT_SLP)) { // tk_slp_tskで待ち状態か？

        tqueue_remove_entry(&wait_queue, tcb);                  // タスクをウェイトキューから外す

        /* TCBの各種情報を変更する */
        tcb->state	= TS_READY;
        tcb->waifct	= TWFCT_NON;

        tqueue_add_entry(&ready_queue[tcb->itskpri], tcb);      // タスクをレディキューに繋ぐ
        scheduler();                                            // スケジューラの実行
    } else if(tcb->state == TS_READY || tcb->state == TS_WAIT) {    // 実行できる状態の場合
        tcb->wupcnt++;      // 起床要求数を増やす
    } else {
        err = E_OBJ;       // 起床できるタスクの状態ではない
    }

    EI(intsts);     // 割込みの許可
    return err;
}
