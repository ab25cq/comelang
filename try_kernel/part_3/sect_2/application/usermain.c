#include <trykernel.h>

UW  tskstk_1[1024/sizeof(UW)];  // タスク1のスタック
ID  tskid_1;                    // タスク1のID番号

/* タスク1生成情報 */
void task_1(INT stacd, void *exinf);
T_CTSK  ctsk_1 = {
    .tskatr     = TA_HLNG | TA_RNG3 | TA_USERBUF,   // タスク属性
    .task       = task_1,
    .itskpri    = 10,
    .stksz      = 1024,
    .bufptr     = tskstk_1,
};

UW  tskstk_2[1024/sizeof(UW)];  // タスク2のスタック
ID  tskid_2;                    // タスク2のID番号

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
    tm_putstring("Start Task-1\n");
    tk_ext_tsk();
}

/* タスク2の実行関数 */
void task_2(INT stacd, void *exinf)
{
    tm_putstring("Start Task-2\n");
    tk_ext_tsk();
}

int usermain(void)
{
    tm_putstring("Start user-main\n");

    /* タスク1の生成、実行 */
    tskid_1 = tk_cre_tsk(&ctsk_1);
    tk_sta_tsk(tskid_1, 0);

    /* タスク2の生成、実行 */
    tskid_2 = tk_cre_tsk(&ctsk_2);
    tk_sta_tsk(tskid_2, 0);

    return 0;
}
