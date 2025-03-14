
#ifndef KNLDEF_H
#define KNLDEF_H
/*
 * Try Kernel
 *      カーネル内部共通定義
 */

/* タスク状態 */
typedef enum {
    TS_NONEXIST = 0,    // 未登録
    TS_READY    = 1,    // 実行状態 or 実行可能状態
    TS_WAIT     = 2,    // 待ち状態
    TS_DORMANT  = 8     // 休止状態
} TSTAT;

/* タスクの待ち要因 */
typedef enum {
    TWFCT_NON   = 0,    // 無し
    TWFCT_DLY   = 1,    // tk_dly_tskによる時間待ち
    TWFCT_SLP   = 2,    // tk_slp_tskによる起床待ち
} TWFCT;

/* TCB(Task Control Block)定義 */
typedef struct st_tcb {
    void    *context;           // コンテキスト情報へのポインタ

    /* タスクキュー用ポインタ */
    struct st_tcb   *pre;       // 一つ前の要素
    struct st_tcb   *next;      // 一つ後の要素

    /* タスク情報 */
    TSTAT   state;              // タスク状態
    FP      tskadr;             // 実行開始アドレス
    PRI     itskpri;            // 実行優先度
    void    *stkadr;            // スタックのアドレス
    SZ      stksz;              // スタックのサイズ
    INT     wupcnt;             // 起床要求数

    /* 時間待ち情報 */
    TWFCT   waifct;             // 待ち要因
    RELTIM  waitim;             // 待ち時間
    ER      *waierr;            // 待ち解除のエラーコード
} TCB;

extern TCB	tcb_tbl[];          // TCBテーブル
extern TCB	*ready_queue[];     // タスクの実行待ち行列（優先度毎）
extern TCB	*cur_task;          // 実行中のタスク
extern TCB	*sche_task;         // 次に実行するタスク
extern TCB  *wait_queue;        // タスクの時間待ち行列

/* グローバル関数 */
extern void Reset_Handler(void);        // リセットハンドラ
extern void dispatch_entry(void);       // ディスパッチャ
extern void systimer_handler(void);     // システムタイマ割込みハンドラ

/* ディスパッチャの呼出し */
#define SCB_ICSR        0xE000ED04      // 割込み制御ステートレジスタのアドレス
#define ICSR_PENDSVSET  (1<<28)         // PendSV set-pending ビット
static inline void dispatch( void )
{
    out_w(SCB_ICSR, ICSR_PENDSVSET);    // PendSV例外を発生
}

extern void scheduler(void);            // スケジューラ

extern void *make_context( UW *sp, UINT ssize, void (*fp)());   // タスクコンテキストの作成

/* タスクの待ち行列操作関数 */
extern void tqueue_add_entry(TCB **queue, TCB *tcb);        // エントリ追加関数
extern void tqueue_remove_top(TCB **queue);                 // 先頭エントリ削除関数
extern void tqueue_remove_entry(TCB **queue, TCB *tcb);     // エントリ削除関数

/* OSメイン関数 */
extern int main(void);

/* ユーザメイン関数 */
extern int usermain(void);

#endif  /* KNLDEF_H */