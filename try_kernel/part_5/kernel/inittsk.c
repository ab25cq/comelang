/* 
 *** Try Kernel
 *      初期タスク
*/
#include <trykernel.h>
#include <knldef.h>

void initsk(INT stacd, void *exinf);                // 初期タスクの実行プログラム
UW  tskstk_ini[256/sizeof(UW)];                     // 初期タスクのスタック
ID  tskid_ini;                                      // 初期タスクのID番号

T_CTSK  ctsk_ini = {
    .tskatr     = TA_HLNG | TA_RNG0 | TA_USERBUF,   // タスク属性
    .task       = initsk,                           // タスクの実行関数
    .itskpri    = 1,                                // タスク優先度
    .stksz      = sizeof(tskstk_ini),               // スタックサイズ
    .bufptr     = tskstk_ini,                       // スタックへのポインタ
};

void initsk(INT stacd, void *exinf)
{
    tm_com_init();                                  // シリアル通信の初期化
    tm_putstring("Strat Try Kernel\n");

    usermain();
    tk_ext_tsk();
}

int main(void)
{
    tskid_ini = tk_cre_tsk(&ctsk_ini);              // 初期タスク生成
    tk_sta_tsk(tskid_ini, 0);                       // 初期タスク実行

     while(1);      // ここは実行されない
}