/*
 *    LCD制御タスク
*/

#include <trykernel.h>
#include "app.h"

void task_lcd(INT stacd, void *exinf);              // タスクの実行関数
UW  tskstk_lcd[1024/sizeof(UW)];                    // タスクのスタック領域
ID  tskid_lcd;                                      // タスクID

/* タスク生成情報 */
T_CTSK  ctsk_lcd = {
    .tskatr     = TA_HLNG | TA_RNG3 | TA_USERBUF,   // タスク属性
    .task       = task_lcd,                         // タスクの実行関数
    .itskpri    = 10,                               // タスク優先度
    .stksz      = sizeof(tskstk_lcd),              // スタックサイズ
    .bufptr     = tskstk_lcd,                       // スタックへのポインタ
};

#define	I2C_ADDR_RGB	(0x62)          // LCDバックライトのスレーブアドレス
#define	I2C_ADDR_TEXT	(0x3E)          // LCDテキストのスレーブアドレス

/* バックライトの設定 */
static void set_bklight(UB r, UB g, UB b)
{
    UB	data[2];

    data[0] = 0; data[1] = 0;
    tk_swri_dev(dd_i2c1, I2C_ADDR_RGB, data, sizeof(data), NULL);
    data[0] = 1; data[1] = 0;
    tk_swri_dev(dd_i2c1, I2C_ADDR_RGB, data, sizeof(data), NULL);
    data[0] = 0x08; data[1] = 0xAA;
    tk_swri_dev(dd_i2c1, I2C_ADDR_RGB, data, sizeof(data), NULL);

    data[0] = 4; data[1] = r;
    tk_swri_dev(dd_i2c1, I2C_ADDR_RGB, data, sizeof(data), NULL);
    data[0] = 3; data[1] = g;
    tk_swri_dev(dd_i2c1, I2C_ADDR_RGB, data, sizeof(data), NULL);
    data[0] = 2; data[1] = b;
    tk_swri_dev(dd_i2c1, I2C_ADDR_RGB, data, sizeof(data), NULL);
}

/* LCDへのコマンド送信 */
static void send_cmd(UB cmd)
{
    UB	data[2];

    data[0] = 0x80; data[1] = cmd;
    tk_swri_dev(dd_i2c1, I2C_ADDR_TEXT, data, sizeof(data), NULL);
}

/* LCDの初期化 */
static void init_lcd(void)
{
    send_cmd(0x01);         // 表示消去
    tk_dly_tsk(500);

    send_cmd(0x08|0x04);    // 表示オン, カーソル無し
    send_cmd(0x28);         // 2行
    tk_dly_tsk(500);

    set_bklight(255, 255, 255);
}

/* LCDの文字列表示 */
static void disp_text(UB *text)
{
    UB	ch;
    UB	data[2];

    while((ch = *text++) != 0) {
        if(ch == '\n') {
            send_cmd(0xC0);
            if(ch == '\n') continue;
        }
        data[0] = 0x40; data[1] = ch;
        tk_swri_dev(dd_i2c1, I2C_ADDR_TEXT, data, sizeof(data), NULL);
    }
}

/* タスクの実行関数*/
void task_lcd(INT stacd, void *exinf)
{
    UINT    flgptn;

    init_lcd();                             // LCD初期化
    disp_text((UB*)"Try Kernel\n");

    while(1) {
        tk_wai_flg(flgid_1, FLG_ALL, TWF_ORW | TWF_BITCLR, &flgptn, TMO_FEVR);  // フラグのセット待ち
        
        /* ジェスチャセンサーのデータ表示 */
        if(flgptn & FLG_GSNS) {
            if(gsns_data & GSNS_RIGHT) {
                disp_text((UB*)"RIGHT   \n");
            } else if(gsns_data & GSNS_LEFT) {
                disp_text((UB*)"LEFT    \n");
            } else if(gsns_data & GSNS_UP) {
                disp_text((UB*)"UP      \n");
            } else if(gsns_data & GSNS_DOWN) {
                disp_text((UB*)"DOWN    \n");
            } else if(gsns_data & GSNS_FORWARD) {
                disp_text((UB*)"FORWARD \n");
            } else if(gsns_data & GSNS_BACKWARD) {
                disp_text((UB*)"BACKWARD\n");
            }
        }

        /* 光センサーによるバックライト調整 */
        if(flgptn & FLG_LSNS) {
            if(lsns_data <= 1000) {
                set_bklight(255, 255, 255);
            } else if(lsns_data <= 2000) {
                set_bklight( 128, 128, 128);
            } else {
                set_bklight( 50, 50, 50);
            }
        }
    }
}
