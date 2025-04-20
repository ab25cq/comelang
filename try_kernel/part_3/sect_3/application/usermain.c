#include <trykernel.h>

UW  tskstk_1[1024/sizeof(UW)];  /* タスク1のスタック */
ID  tskid_1;                    /* タスク1のID番号 */

/* タスク1生成情報 */
void task_1(INT stacd, void *exinf);
T_CTSK  ctsk_1 = {
    .tskatr     = TA_HLNG | TA_RNG3 | TA_USERBUF,   // タスク属性
    .task       = task_1,
    .itskpri    = 10,
    .stksz      = 1024,
    .bufptr     = tskstk_1,
};

UW  tskstk_2[1024/sizeof(UW)];  /* タスク2のスタック */
ID  tskid_2;                    /* タスク2のID番号 */

/* タスク2生成情報 */
void task_2(INT stacd, void *exinf);
T_CTSK  ctsk_2 = {
    .tskatr     = TA_HLNG | TA_RNG3 | TA_USERBUF,   // タスク属性
    .task       = task_2,
    .itskpri    = 10,
    .stksz      = 1024,
    .bufptr     = tskstk_2,
};

/* タスク1の実行関数 */
void task_1(INT stacd, void *exinf)
{
    while(1) {
        out_w(GPIO_OUT_XOR, (1<<25));   // LEDの点灯
        tk_dly_tsk(500);                // 0.5秒待ち
    }
}

/* タスク2の実行関数 */
void task_2(INT stacd, void *exinf)
{
    while(1) {
        tm_putstring("hello\n");         // 文字出力
        tk_dly_tsk(1000);                // 1秒待ち
    }
}

int usermain(void)
{
    /* タスク1の生成、実行 */
    tskid_1 = tk_cre_tsk(&ctsk_1);
    tk_sta_tsk(tskid_1, 0);

    /* タスク2の生成、実行 */
    tskid_2 = tk_cre_tsk(&ctsk_2);
    tk_sta_tsk(tskid_2, 0);

    return 0;
}
