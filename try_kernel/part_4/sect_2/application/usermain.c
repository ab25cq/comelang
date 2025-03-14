#include <trykernel.h>

/* イベントフラグ生成情報 */
ID  flgid;
T_CFLG  cflg = {
    .flgatr     = TA_TFIFO | TA_WMUL,    // イベントフラグ属性
    .iflgptn    = 0,                    // イベントフラグ初期値
};

/* ボタン検出タスク生成情報 */
UW  tskstk_btn[1024/sizeof(UW)];    // ボタン検出タスクのスタック
ID  tskid_btn;                      // ボタン検出タスクのID番号
void task_btn(INT stacd, void *exinf);
T_CTSK  ctsk_btn = {
    .tskatr     = TA_HLNG | TA_RNG3 | TA_USERBUF,   // タスク属性
    .task       = task_btn,
    .itskpri    = 10,
    .stksz      = 1024,
    .bufptr     = tskstk_btn,
};

/* LED制御タスク1生成情報 */
UW  tskstk_led1[1024/sizeof(UW)];   // LED制御タスク1のスタック
ID  tskid_led1;                     // LED制御タスク1のID番号
void task_led1(INT stacd, void *exinf);
T_CTSK  ctsk_led1 = {
    .tskatr     = TA_HLNG | TA_RNG3 | TA_USERBUF,   // タスク属性
    .task       = task_led1,
    .itskpri    = 10,
    .stksz      = 1024,
    .bufptr     = tskstk_led1,
};

/* LED制御タスク2生成情報 */
UW  tskstk_led2[1024/sizeof(UW)];   // LED制御タスク2のスタック
ID  tskid_led2;                     // LED制御タスク2のID番号
void task_led2(INT stacd, void *exinf);
T_CTSK  ctsk_led2 = {
    .tskatr     = TA_HLNG | TA_RNG3 | TA_USERBUF,   // タスク属性
    .task       = task_led2,
    .itskpri    = 10,
    .stksz      = 1024,
    .bufptr     = tskstk_led2,
};

/* ボタン検出タスクの実行関数 */
void task_btn(INT stacd, void *exinf)
{
    UW      btn, btn0, diff;

    /* GP13をスイッチ入力に設定 */
    out_w(GPIO(13),(in_w(GPIO(13)) | GPIO_PUE) & ~GPIO_PDE);    // Pull-Up設定
    out_w(GPIO_OE_CLR, (1<<13));                                // 出力無効
    out_w(GPIO_CTRL(13), 5);                                    // SIO機能に設定

    /* GP14をスイッチ入力に設定 */
    out_w(GPIO(14), (in_w(GPIO(14)) | GPIO_PUE) & ~GPIO_PDE);   // Pull-Up設定
    out_w(GPIO_OE_CLR, (1<<14));                                // 出力無効
    out_w(GPIO_CTRL(14), 5);                                    // IO機能に設定

    btn0 = in_w(GPIO_IN ) & ((1<<14)|(1<<13));      // スイッチ読込み(初期値)
    while(1) {
        btn = in_w(GPIO_IN) & ((1<<14)|(1<<13));   // スイッチ読込み
        if((diff = btn ^ btn0) != 0) {
            if((diff & (1<<13)) && !(btn & (1<<13))) {
                tm_putstring("BTN-1 ON\n");
                tk_set_flg(flgid, (1<<1));    // イベントフラグのセット
            }
            if((diff & (1<<14)) && !(btn & (1<<14))) {
                tm_putstring("BTN-0 ON\n");
                tk_set_flg(flgid, (1<<0));    // イベントフラグのセット
            }
            btn0 = btn;
        }
        tk_dly_tsk(100);                // 0.1秒待ち
    }
}

/* LED制御タスク1の実行関数 */
void task_led1(INT stacd, void *exinf)
{
    UINT flgptn;

    while(1) {
        tk_wai_flg(flgid, (1<<0), TWF_ANDW | TWF_BITCLR, &flgptn, TMO_FEVR);    // フラグ待ち
        for(INT i = 0; i <3; i++) {
            out_w(GPIO_OUT_SET, (1<<25));   // LEDの点灯
            tk_dly_tsk(500);                // 0.5秒待ち
            out_w(GPIO_OUT_CLR, (1<<25));   // LEDの消灯
            tk_dly_tsk(500);                // 0.5秒待ち
        }
    }
}

/* LED制御タスク2の実行関数 */
void task_led2(INT stacd, void *exinf)
{
    UINT flgptn;

    while(1) {
        tk_wai_flg(flgid, (1<<1), TWF_ANDW | TWF_BITCLR, &flgptn, TMO_FEVR);    // フラグ待ち
        for(INT i = 0; i <5; i++) {
            out_w(GPIO_OUT_SET, (1<<25));   // LEDの点灯
            tk_dly_tsk(100);                // 0.1秒待ち
            out_w(GPIO_OUT_CLR, (1<<25));   // LEDの消灯
            tk_dly_tsk(100);                // 0.1秒待ち
        }
    }
}

int usermain(void)
{
    /* イベントフラグの生成*/
    flgid = tk_cre_flg(&cflg);

    /* ボタン検出タスクの生成、実行 */
    tskid_btn = tk_cre_tsk(&ctsk_btn);
    tk_sta_tsk(tskid_btn, 0);

    /* LED制御タスク1の生成、実行 */
    tskid_led1 = tk_cre_tsk(&ctsk_led1);
    tk_sta_tsk(tskid_led1, 0);

    /* LED制御タスク2の生成、実行 */
    tskid_led2 = tk_cre_tsk(&ctsk_led2);
    tk_sta_tsk(tskid_led2, 0);

    return 0;
}
