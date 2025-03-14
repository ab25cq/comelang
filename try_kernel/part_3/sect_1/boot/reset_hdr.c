/* 
 *** Try Kernel
 *      リセットハンドラ
*/

#include <typedef.h>
#include <sysdef.h>
#include <syslib.h>
#include <knldef.h>

/* メモリセクションのアドレス変数 */
extern const void *__data_org;
extern const void *__data_start;
extern const void *__data_end;
extern const void *__bss_start;
extern const void *__bss_end;

/*** クロックの初期化 ***/

#define XOSC_STARTUP_DELAY	((XOSC_KHz + 128) / 256)

/* PLLの初期化 */
static void init_pll(UW pll, UINT refdiv, UINT vco_freq, UINT post_div1, UINT post_div2)
{
    UW  ref_mhz, fbdiv, pdiv;
    UW  pll_reset;

    ref_mhz = XOSC_MHz / refdiv;
    fbdiv   = vco_freq / (ref_mhz * MHz);
    pdiv    = (post_div1 << PLL_PRIM_POSTDIV1_LSB)|(post_div2 << PLL_PRIM_POSTDIV2_LSB);

    pll_reset = (pll==PLL_USB_BASE)? (1<<13): (1<<12);
    set_w(RESETS_RESET, pll_reset);
    clr_w(RESETS_RESET, pll_reset);

    out_w(pll+PLL_CS, refdiv);
    out_w(pll+PLL_FBDIV_INT, fbdiv);

    clr_w(pll+PLL_PWR, (PLL_PWR_PD | PLL_PWR_VCOPD));
    while (!(in_w(pll+PLL_CS) & PLL_CS_LOCK)) ;

    out_w(pll+PLL_PRIM, pdiv);
    clr_w(pll+PLL_PWR, PLL_PWR_POSTDIVPD);
}

/* 周辺クロックの設定 */
static void clock_config(UINT clock_kind, UW auxsrc, UW src_freq, UW freq)
{
    UW  clock;
    UW  div;

    if (freq > src_freq) return;

    clock = CLOCKS_BASE + (clock_kind * 0xC);

    div = (UW)(((UD)src_freq << 8) / freq);
    if (div > in_w(clock+CLK_x_DIV)) out_w(clock+CLK_x_DIV, div);
    clr_w(clock+CLK_x_CTRL, CLK_CTRL_ENABLE);

    out_w(clock+CLK_x_CTRL, (in_w(clock+CLK_x_CTRL) & ~CLK_SYS_CTRL_AUXSRC) | (auxsrc << 5));
    set_w(clock+CLK_x_CTRL, CLK_CTRL_ENABLE);
    out_w(clock+CLK_x_DIV, div);
}

/* クロックの初期化 */
static void init_clock(void)
{
    UW  div;

    out_w(CLK_SYS_RESUS_CTRL, 0);

    /* XOSCの設定 */
    out_w(XOSC_CTRL, XOSC_CTRL_FRANG_1_15MHZ);
    out_w(XOSC_STARTUP, XOSC_STARTUP_DELAY);
    set_w(XOSC_CTRL, XOSC_CTRL_ENABLE);
    while((in_w(XOSC_STATUS) & XOSC_STATUS_STABLE)==0);

    clr_w(CLK_SYS+CLK_x_CTRL, CLK_SYS_CTRL_SRC);
    while(in_w(CLK_SYS+CLK_x_SELECTED) != 0x1);
    clr_w(CLK_REF+CLK_x_CTRL, CLK_REF_CTRL_SRC);
    while(in_w(CLK_REF+CLK_x_SELECTED) != 0x1);

    /* PLLの設定 */
    init_pll(PLL_SYS_BASE, 1, 1500 * MHz, 6, 2);    // PLL SYS 125MHz
    init_pll(PLL_USB_BASE, 1, 480 * MHz, 5, 2);     // PLL USB 48MHz

    /* CLK_REFの設定 */
    div = (UW)(((UD)(12*MHz) << 8) / (12*MHz));
    if (div > in_w(CLK_REF+CLK_x_DIV)) {
        out_w(CLK_REF+CLK_x_DIV, div);
    }
    clr_w(CLK_REF+CLK_x_CTRL, CLK_CTRL_ENABLE);
    out_w(CLK_REF+CLK_x_CTRL, (in_w(CLK_REF+CLK_x_CTRL) & ~CLK_SYS_CTRL_AUXSRC));
    out_w(CLK_REF+CLK_x_CTRL, (in_w(CLK_REF+CLK_x_CTRL) & ~CLK_REF_CTRL_SRC) | 2 );
    while(!(in_w(CLK_REF+CLK_x_SELECTED)&(1<<2)));

    set_w(CLK_REF+CLK_x_CTRL, CLK_CTRL_ENABLE);
    out_w(CLK_REF+CLK_x_DIV, div);

    /* CLK SYSの設定 */
    div = (UW)(((UD)(125*MHz) << 8) / (125*MHz));
    if (div > in_w(CLK_SYS+CLK_x_DIV)) {
        out_w(CLK_SYS+CLK_x_DIV, div);
    }
    clr_w(CLK_SYS+CLK_x_CTRL, CLK_REF_CTRL_SRC);
    while(!(in_w(CLK_SYS+CLK_x_SELECTED) & 0x1));

    out_w(CLK_SYS+CLK_x_CTRL, (in_w(CLK_SYS+CLK_x_CTRL) & CLK_SYS_CTRL_AUXSRC));
    out_w(CLK_SYS+CLK_x_CTRL, (in_w(CLK_SYS+CLK_x_CTRL) & CLK_REF_CTRL_SRC) | 1 );
    while(!(in_w(CLK_SYS+CLK_x_SELECTED)&(1<<1)));

    set_w(CLK_SYS+CLK_x_CTRL, CLK_CTRL_ENABLE);
    out_w(CLK_SYS+CLK_x_DIV, div);

    /* CLK_USBの設定 */
    clock_config(CLK_KIND_USB, 0, 48 * MHz, 48 * MHz);

    /* CLK_ADCの設定 */
    clock_config(CLK_KIND_ADC, 0, 48 * MHz, 48 * MHz);

    /* CLK_RTCの設定 */
    clock_config(CLK_KIND_RTC, 0, 48 * MHz, 46875);

    /* CLK PERIの設定 */
    clock_config(CLK_KIND_PERI, 0, 125 * MHz, 125 * MHz);
}

/*** ペリフェラルの有効化 ***/

static void init_peri(void)
{

    /* GPIOの有効化*/
    clr_w(RESETS_RESET, (1<<5));    /* IO_BANK0 */
    while((in_w(RESETS_RESET_DONE) & (1<<5))==0);

    clr_w(RESETS_RESET, (1<<8));    /* PADS_BANK0 */
    while((in_w(RESETS_RESET_DONE) & (1<<8))==0);

    /* UART0の有効化 */
    clr_w(RESETS_RESET, (1<<22));
    while((in_w(RESETS_RESET_DONE) & (1<<22))==0);

    /* 端子設定 */
    out_w(GPIO_OE_CLR, (1<<25));    /* P25端子出力無効 */
    out_w(GPIO_OUT_CLR, (1<<25));   /* P25端子出力クリア */
    out_w(GPIO_CTRL(25), 5);        /* P25端子 SIO */
    out_w(GPIO_OE_SET, (1<<25));    /* P25出力有効 */

    out_w(GPIO_CTRL(0), 2);         /* P0端子 UART0-TX */
    out_w(GPIO_CTRL(1), 2);         /* P1端子 UART0-RX */

}

/*** メモリ・セクションの初期化 ***/

static void init_section(void)
{
    _UW     *src, *top, *end;
    INT     i;

    /* dataセクションの初期化 (rodataからdataへコピー) */
    src = (_UW*)&__data_org;;
    top = (_UW*)&__data_start;
    end = (_UW*)&__data_end;
    while(top != end) {
        *top++ = *src++;
    }

    /* bssセクションの初期化 （0クリア） */
    for(i = ((int)&__bss_end - (int)&__bss_start)/sizeof(int); i > 0 ; i--) {
        *top++ = 0;
    }
}

/*** システムタイマの初期化 ***/

static void init_systim(void)
{
    out_w(SYST_CSR ,SYST_CSR_CLKSOURCE);                    /* SysTick動作停止 */
    out_w(SYST_RVR, (TIMER_PERIOD*TMCLK_KHz)-1);            /* リロード値設定 */
    out_w(SYST_CVR, (TIMER_PERIOD*TMCLK_KHz)-1);            /* カウント値設定 */
    out_w(SYST_CSR, SYST_CSR_CLKSOURCE | SYST_CSR_ENABLE);  /* SysTick動作開始 */
}

/*** リセットハンドラ ****/

void Reset_Handler(void)
{
    UINT    intsts;
    
    DI(intsts);     /* 割込みを無効化 */

    /* PendSVC例外とSysTick例外の優先度設定 */
    out_w(SCB_SHPR3, (INTLEVEL_0<<24)|(INTLEVEL_3<<16));

    init_clock();   /* クロックの初期化 */
    init_peri();    /* ペリフェラルの有効化 */
    init_section(); /* メモリの初期化 */
    init_systim();  /* システムタイマの初期化 */

    EI(intsts);     /* 割込みを有効化 */

    main();         /* main関数を実行 */
    while(1);
}
