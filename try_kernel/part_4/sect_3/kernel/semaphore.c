/* 
 *** Try Kernel
 *      セマフォ
*/

#include <trykernel.h>
#include <knldef.h>

SEMCB   semcb_tbl[CNF_MAX_SEMID];       /* セマフォ管理ブロック(SEMCB) */

/* セマフォの生成API */
ID tk_cre_sem( const T_CSEM *pk_csem )
{
    ID      semid;
    UINT    intsts;

    DI(intsts);     // 割込み禁止
    for(semid = 0; semcb_tbl[semid].state != KS_NONEXIST; semid++);

    if(semid < CNF_MAX_SEMID) {
        /* セマフォ管理情報の初期化 */
        semcb_tbl[semid].state  = KS_EXIST;
        semcb_tbl[semid].semcnt = pk_csem->isemcnt;
        semcb_tbl[semid].maxsem = pk_csem->maxsem;
        semid++;
    } else {
        semid = E_LIMIT;
    }
    EI(intsts);      // 割込み許可
    return semid;
}

/* セマフォの資源獲得API */
ER tk_wai_sem( ID semid, INT cnt, TMO tmout )
{
    SEMCB   *semcb;
    ER      err = E_OK;
    UINT    intsts;

    if(semid <= 0 || semid > CNF_MAX_SEMID) return E_ID;

    DI(intsts);     // 割込み禁止
    semcb = &semcb_tbl[--semid];
    if(semcb->state == KS_EXIST) {
        if(semcb->semcnt >= cnt) {          // 現在のセマフォの資源数 ≧ 要求する資源数
            semcb->semcnt -= cnt;
        } else if(tmout == TMO_POL) {       // 資源が足りなく、かつ、待ち時間0の場合
            err = E_TMOUT;
        } else {                            // 資源が足りなく、待ち状態に移行
            tqueue_remove_top(&ready_queue[cur_task->itskpri]);     // タスクをレディキューから外す

            /* TCBの各種情報を変更する */
            cur_task->state  = TS_WAIT;      // タスクの状態を待ち状態に変更
            cur_task->waifct = TWFCT_SEM;    // 待ち要因を設定
            cur_task->waiobj = semid;        // 待ちセマフォIDを設定
            cur_task->waitim = ((tmout == TMO_FEVR)? tmout: tmout + TIMER_PERIOD);    // 待ち時間を設定
            cur_task->waisem = cnt;
            cur_task->waierr = &err;

            tqueue_add_entry(&wait_queue, cur_task);                // タスクをウェイトキューに繋ぐ
            scheduler();                                            // スケジューラを実行
        }
    } else {
        err = E_NOEXS;      // 未登録のセマフォ
    }
    EI(intsts);     // 割込み許可
    return err;
}

/* セマフォの資源返却API */
ER tk_sig_sem( ID semid, INT cnt )
{
    SEMCB   *semcb;
    TCB     *tcb;
    ER      err = E_OK;
    UINT    intsts;

    if(semid <= 0 || semid > CNF_MAX_SEMID) return E_ID;

    DI(intsts);     // 割込み禁止
    semcb = &semcb_tbl[--semid];
    if(semcb->state == KS_EXIST) {
        semcb->semcnt += cnt;                                       // 資源の返却
        if(semcb->semcnt <= semcb->maxsem) {
            for( tcb = wait_queue; tcb != NULL; tcb = tcb->next) {  // レディキューのタスクを確認
                if((tcb->waifct == TWFCT_SEM)&&(tcb->waiobj == semid)) {
                    if( semcb->semcnt >= tcb->waisem) {             // 要求資源数を満たしていれば実行可能状態へ
                        semcb->semcnt -= tcb->waisem;
                        tqueue_remove_entry( &wait_queue, tcb);     // タスクをウェイトキューから外す

                        /* TCBの各種情報を変更する */
                        tcb->state	= TS_READY;
                        tcb->waifct	= TWFCT_NON;
                        tcb->waierr = &err;

                        tqueue_add_entry( &ready_queue[tcb->itskpri], tcb); // タスクをレディキューへつなぐ
                        scheduler();                                        // スケジューラを実行
                    } else {
                        break;
                    }
                }
            }
        } else {        // 資源数が最大値を超えた
            semcb->semcnt -= cnt;
            err = E_QOVR;
        }
    } else {
        err = E_NOEXS;  // 未登録のセマフォ
    }
    EI(intsts);     // 割込み許可
    return err;
}
