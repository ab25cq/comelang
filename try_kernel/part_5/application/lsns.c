/*
 *    光センサー制御タスク
*/

#include <trykernel.h>
#include "app.h"

void task_lsns(INT stacd, void *exinf);             // タスクの実行関数
UW  tskstk_lsns[1024/sizeof(UW)];                   // タスクのスタック領域
ID  tskid_lsns;                                     // タスクID

/* タスク生成情報 */
T_CTSK  ctsk_lsns = {
    .tskatr     = TA_HLNG | TA_RNG3 | TA_USERBUF,
    .task       = task_lsns,                        // タスクの実行関数
    .itskpri    = 10,                               // タスク優先度
    .stksz      = sizeof(tskstk_lsns),              // スタックサイズ
    .bufptr     = tskstk_lsns,                      // スタックへのポインタ
};

/* タスクの実行関数*/
void task_lsns(INT stacd, void *exinf)
{
    W  data, pre_data, diff;
    SZ  asz;
    ER  err;

    lsns_data = pre_data = diff = 0;
    while(1) {
        err = tk_srea_dev(dd_adc, 0, &data, 1, &asz);   // センサーデータの取得
        if(err >= E_OK) {
            diff = pre_data - data;
            if( diff >= 300 || diff <= -300) {
                lsns_data = data;                   // グローバル変数の更新
                tk_set_flg(flgid_1, FLG_LSNS);      // イベントフラグのセット
                pre_data = data;
            }
        } else {
            tm_putstring("ERROR Read ADC\n");
        }
        tk_dly_tsk(500);                            // 0.5秒間待ち状態に
    }
}
