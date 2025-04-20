/* 
 *** Try Kernel
 *      タスク管理
*/
#include <trykernel.h>
#include <knldef.h>

TCB	tcb_tbl[CNF_MAX_TSKID];         /* タスク管理ブロック (TCB) */

/* タスク生成API */
ID tk_cre_tsk( const T_CTSK *pk_ctsk )
{
    UINT    intsts;
    ID      tskid;
    INT     i;

    /* 引数チェック */
    if((pk_ctsk->tskatr & ~TA_RNG3) != (TA_HLNG|TA_USERBUF)) return E_RSATR;
    if(pk_ctsk->itskpri <= 0 || pk_ctsk->itskpri > CNF_MAX_TSKPRI) return E_PAR;
    if(pk_ctsk->stksz == 0) return E_PAR;

    DI(intsts);     // 割込み禁止

    for(i = 0; i < CNF_MAX_TSKID; i++) {    // 未使用のTCBを検索
        if(tcb_tbl[i].state == TS_NONEXIST) break; 
    }
    /* TCBの初期化 */
    if(i < CNF_MAX_TSKID) {
        tcb_tbl[i].state    = TS_DORMANT;
        tcb_tbl[i].pre      = NULL;
        tcb_tbl[i].next     = NULL;

        tcb_tbl[i].tskadr   = pk_ctsk->task;
        tcb_tbl[i].itskpri  = pk_ctsk->itskpri;
        tcb_tbl[i].stksz    = pk_ctsk->stksz;
        tcb_tbl[i].stkadr   = pk_ctsk->bufptr;

        tskid = i+1;
    } else {
        tskid = (ID)E_LIMIT;    // タスクが既に最大数
    }

    EI(intsts);      // 割込み許可
    return tskid;
}

/* タスク実行API */
ER tk_sta_tsk( ID tskid, INT stacd )
{
    TCB     *tcb;
    UINT    intsts;
    ER      err = E_OK;

    /* 引数チェック */
    if(tskid <= 0 || tskid > CNF_MAX_TSKID) return E_ID;
    DI(intsts);     // 割込み禁止

    tcb = &tcb_tbl[tskid-1];
    if(tcb->state == TS_DORMANT) {  // タスクを実行できる状態に変更
        tcb->state = TS_READY;
        tcb->context = make_context(tcb->stkadr, tcb->stksz, tcb->tskadr);
        tqueue_add_entry(&ready_queue[tcb->itskpri], tcb);
        scheduler();                // スケジューラを実行
    } else {
        err = E_OBJ;  // タスクを実行できない（休止状態ではない）
    }

    EI(intsts);     // 割込み許可
    return err;
}

/* タスクの動作終了API */
void tk_ext_tsk( void )
{
    UINT	intsts;

    DI(intsts);     // 割込み禁止

    cur_task->state	= TS_DORMANT;    // タスクを休止状態へ
    tqueue_remove_top(&ready_queue[cur_task->itskpri]);

    scheduler();                    // スケジューラを実行
    EI(intsts);     // 割込み許可
}

