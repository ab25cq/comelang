#include <trykernel.h>
#include "dev_adc.h"
#include "adc_sysdep.h"

/*----------------------------------------------------------------------
 * デバイス制御データ
*/
typedef struct {
    ID      semid;      /* セマフォID */
    UW      init;       /* 初期化フラグ */
    UINT    omode;      /* オープンモード */
} T_ADC_LLDCB;
static T_ADC_LLDCB	ll_devcb;

/*----------------------------------------------------------------------
 * デバイス初期化
 */
static void adc_init(void)
{
    set_w(RESETS_RESET, RESETS_RESET_ADC);
    clr_w(RESETS_RESET, RESETS_RESET_ADC);
    while((in_w(RESETS_RESET_DONE)&(RESETS_RESET_ADC))==0);

/* アナログ入力端子初期化 */
    /* P26 : ADC0 */
    out_w(GPIO_CTRL(26),GPIO_CTRL_FUNCSEL_NULL);
    clr_w(GPIO(26), GPIO_IE|GPIO_PUE|GPIO_PDE);

    /* P27 : ADC1 */
//    out_w(GPIO_CTRL(27),GPIO_CTRL_FUNCSEL_NULL);
//    clr_w(GPIO(27), GPIO_IE|GPIO_PUE|GPIO_PDE);

    /* P28 : ADC2 */
//    out_w(GPIO_CTRL(28),GPIO_CTRL_FUNCSEL_NULL);
//    clr_w(GPIO(28), GPIO_IE|GPIO_PUE|GPIO_PDE);

//   out_w(GPIO_CTRL(29),GPIO_CTRL_FUNCSEL_NULL);
//   clr_w(GPIO(29), GPIO_IE|GPIO_PUE|GPIO_PDE);

    /* A/DC有効 */
    set_w(ADC_CS, ADC_CS_EN);
    while(!(in_w(ADC_CS)&ADC_CS_READY));
}

/*----------------------------------------------------------------------
 * デバイスオープン関数
 */
ER dev_adc_open(UW unit, UINT omode)
{
    T_CSEM  csem = {
        .isemcnt    = 1,
        .maxsem     = 1,
    };
    ER  err;

    if(omode & TD_WRITE) return E_PAR;     // オープンモードが書込みは不可

    if(ll_devcb.init == FALSE) {
        err = tk_cre_sem(&csem);       // 排他制御用のセマフォ生成
        if(err < E_OK) return err;

        adc_init();
        ll_devcb.semid = (ID)err;
        ll_devcb.omode = omode;
        ll_devcb.init = TRUE;

        out_w(ADC_DIV, ADC_DIV_INI);                        // クロック設定
        out_w(ADC_FCS, 1<<ADC_FCS_THRESH_POS | ADC_FCS_EN); // FIFO設定
    }
    return E_OK;
}

/*----------------------------------------------------------------------
 * デバイスリード関数
 */
ER dev_adc_read(UW unit, UW ch, UW *buf, SZ size, SZ *asize)
{
    ER  err;

    if(ch<0 || ch>(ADC_CH_NUM-1)) return E_PAR;
    if(size != 1) return E_PAR;

    err = tk_wai_sem( ll_devcb.semid, 1, TMO_FEVR); // 排他の開始
    if(err < E_OK) return err;

    while((in_w(ADC_CS)&ADC_CS_READY)==0);          // ADCのレディ待ち

    out_w(ADC_CS, ch<<ADC_CS_AINSEL_POS|ADC_CS_EN);
    set_w(ADC_CS, ADC_CS_STRAT_ONCE);               // AD変換の開始

    while((in_w(ADC_CS)&ADC_CS_READY)==0);          // AD変換の終了待ち

    *buf = in_w(ADC_FIFO) & 0x0FFF;                 // 変換値の取得
    if(asize != NULL) *asize = size;

    tk_sig_sem( ll_devcb.semid, 1);                 // 排他の終了
    return E_OK;
}
