
#ifndef KNLDEF_H
#define KNLDEF_H
/*
 *** Try Kernel
 *      カーネル内部共通定義
 */

/* グローバル関数 */
extern void Reset_Handler(void);        // リセットハンドラ
extern void dispatch_entry(void);       // ディスパッチャ

/* ディスパッチャの呼出し */
#define SCB_ICSR        0xE000ED04      // 割込み制御ステートレジスタのアドレス
#define ICSR_PENDSVSET  (1<<28)         // PendSV set-pending ビット
static inline void dispatch( void )
{
    out_w(SCB_ICSR, ICSR_PENDSVSET);    // PendSV例外を発生
}

extern void scheduler(void);            // スケジューラ

extern void *make_context( UW *sp, UINT ssize, void (*fp)());   // タスクコンテキストの作成

/* OSメイン関数 */
extern int main(void);

#endif  /* KNLDEF_H */