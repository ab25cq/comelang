#include <trykernel.h>

/* ボタン検出タスク生成情報 */
UW  tskstk_btn[1024/sizeof(UW)];    /* ボタン検出タスクのスタック */
ID  tskid_btn;                      /* ボタン検出タスクのID番号 */
void task_btn(INT stacd, void *exinf);
T_CTSK  ctsk_btn = {
    .tskatr     = TA_HLNG | TA_RNG3 | TA_USERBUF,   // タスク属性
    .task       = task_btn,
    .itskpri    = 10,
    .stksz      = 1024,
    .bufptr     = tskstk_btn,
};

/* LED制御タスク生成情報 */
UW  tskstk_led[1024/sizeof(UW)];    /* LED制御タスクのスタック */
ID  tskid_led;                      /* LED制御タスクのID番号 */
void task_led(INT stacd, void *exinf);
T_CTSK  ctsk_led = {
    .tskatr     = TA_HLNG | TA_RNG3 | TA_USERBUF,   // タスク属性
    .task       = task_led,
    .itskpri    = 10,
    .stksz      = 1024,
    .bufptr     = tskstk_led,
};

/* ボタン検出タスクの実行関数 */
void task_btn(INT stacd, void *exinf)
{
    UW      btn, btn0;

    /* GP14をスイッチ入力に設定 */
    out_w(GPIO(14), (in_w(GPIO(14)) | GPIO_PUE) & ~GPIO_PDE);   /* Pull-Up設定 */
    out_w(GPIO_OE_CLR, (1<<14));                                /* 出力無効 */
    out_w(GPIO_CTRL(14), 5);                                    /* SIO機能に設定 */

    btn0 = in_w(GPIO_IN )& (1<<14);      /* スイッチ読込み(初期値) */
    while(1) {
        btn = in_w(GPIO_IN) & (1<<14);   /* スイッチ読込み */
        if(btn != btn0) {
            if(btn == 0) {
                tm_putstring("BTN ON\n");
                tk_wup_tsk(tskid_led);    /* タスクの起床 */
            }
            btn0 = btn;
        }
        tk_dly_tsk(100);                /* 0.1秒待ち */
    }
}

/* LED制御タスクの実行関数 */
void task_led(INT stacd, void *exinf)
{
    while(1) {
        tk_slp_tsk(TMO_FEVR);           /* 起床待ち */
        out_w(GPIO_OUT_SET, (1<<25));   /* LEDの点灯 */
        tk_dly_tsk(1000);               /* 1秒待ち */
        out_w(GPIO_OUT_CLR, (1<<25));   /* LEDの消灯 */
    }
}

int usermain(void)
{
    /* ボタン検出タスクの生成、実行 */
    tskid_btn = tk_cre_tsk(&ctsk_btn);
    tk_sta_tsk(tskid_btn, 0);

    /* LED制御タスクの生成、実行 */
    tskid_led = tk_cre_tsk(&ctsk_led);
    tk_sta_tsk(tskid_led, 0);

    return 0;
}
