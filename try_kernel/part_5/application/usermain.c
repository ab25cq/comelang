#include <trykernel.h>
#include "app.h"

ID  dd_i2c0, dd_i2c1;   // I2Cデバイスディスクリプタ
ID  dd_adc;             // A/DCデバイスディスクリプタ
ID  flgid_1;            // イベントフラグID

/* センサーデータ */
UW  gsns_data;          // ジェスチャセンサーのデータ
UW  lsns_data;          // 光センサーのデータ

int usermain(void)
{
    /* イベントフラグの生成情報 */
    T_CFLG  cflg_1 = {
        .iflgptn = 0,
    };

    /* イベントフラグの生成 */
    flgid_1 = tk_cre_flg(&cflg_1);

    /* I/Oデバイスのオープン */
    dd_i2c0 = tk_opn_dev((UB*)"iica",TD_UPDATE);
    if(dd_i2c0 < 0) tm_putstring("Error I2C0\n");
    else tm_putstring("Open I2C0\n");

    dd_i2c1 = tk_opn_dev((UB*)"iicb",TD_UPDATE);
    if(dd_i2c1 < 0) tm_putstring("Error I2C1\n");
    else tm_putstring("Open I2C1\n");

    dd_adc = tk_opn_dev((UB*)"adca",TD_READ);
    if(dd_adc < 0) tm_putstring("Error ADC\n");
    else tm_putstring("Open ADC\n");

    /* ジェスチャセンサー制御タスクの生成・実行*/
    tskid_gsns = tk_cre_tsk(&ctsk_gsns);
    tk_sta_tsk(tskid_gsns, 0);

    /* 光センサー制御タスクの生成・実行 */
    tskid_lsns = tk_cre_tsk(&ctsk_lsns);
    tk_sta_tsk(tskid_lsns, 0);

    /* LCD制御タスクの生成・実行 */
    tskid_lcd = tk_cre_tsk(&ctsk_lcd);
    tk_sta_tsk(tskid_lcd, 0);

    tk_slp_tsk(TMO_FEVR);       // 初期タスクを待ち状態に
    return 0;
}