#include <stdint.h>

typedef int8_t              B;
typedef int16_t             H;
typedef int32_t             W;
typedef int64_t             D;

typedef uint8_t             UB;
typedef uint16_t            UH;
typedef uint32_t            UW;
typedef uint64_t            UD;

typedef volatile int8_t     _B;
typedef volatile int16_t    _H;
typedef volatile int32_t    _W;
typedef volatile int64_t    _D;

typedef volatile uint8_t    _UB;
typedef volatile uint16_t   _UH;
typedef volatile uint32_t   _UW;
typedef volatile uint64_t   _UD;

typedef int                 INT;
typedef unsigned int        UINT;

typedef INT                 ID;
typedef UW                  ATR;
typedef INT                 ER;
typedef INT                 PRI;
typedef W                   TMO;
typedef UW                  RELTIM;
typedef W                   SZ;

typedef void                (*FP)();

#define NULL                (0)

typedef UINT                BOOL;

#define TRUE                (1)
#define FALSE               (0)

const unsigned char boot2[]__attribute__((section(".boot2"))) = {
0x00, 0xb5, 0x32, 0x4b, 0x21, 0x20, 0x58, 0x60, 0x98, 0x68, 0x02, 0x21, 0x88, 0x43, 0x98, 0x60,
0xd8, 0x60, 0x18, 0x61, 0x58, 0x61, 0x2e, 0x4b, 0x00, 0x21, 0x99, 0x60, 0x02, 0x21, 0x59, 0x61,
0x01, 0x21, 0xf0, 0x22, 0x99, 0x50, 0x2b, 0x49, 0x19, 0x60, 0x01, 0x21, 0x99, 0x60, 0x35, 0x20,
0x00, 0xf0, 0x44, 0xf8, 0x02, 0x22, 0x90, 0x42, 0x14, 0xd0, 0x06, 0x21, 0x19, 0x66, 0x00, 0xf0,
0x34, 0xf8, 0x19, 0x6e, 0x01, 0x21, 0x19, 0x66, 0x00, 0x20, 0x18, 0x66, 0x1a, 0x66, 0x00, 0xf0,
0x2c, 0xf8, 0x19, 0x6e, 0x19, 0x6e, 0x19, 0x6e, 0x05, 0x20, 0x00, 0xf0, 0x2f, 0xf8, 0x01, 0x21,
0x08, 0x42, 0xf9, 0xd1, 0x00, 0x21, 0x99, 0x60, 0x1b, 0x49, 0x19, 0x60, 0x00, 0x21, 0x59, 0x60,
0x1a, 0x49, 0x1b, 0x48, 0x01, 0x60, 0x01, 0x21, 0x99, 0x60, 0xeb, 0x21, 0x19, 0x66, 0xa0, 0x21,
0x19, 0x66, 0x00, 0xf0, 0x12, 0xf8, 0x00, 0x21, 0x99, 0x60, 0x16, 0x49, 0x14, 0x48, 0x01, 0x60,
0x01, 0x21, 0x99, 0x60, 0x01, 0xbc, 0x00, 0x28, 0x00, 0xd0, 0x00, 0x47, 0x12, 0x48, 0x13, 0x49,
0x08, 0x60, 0x03, 0xc8, 0x80, 0xf3, 0x08, 0x88, 0x08, 0x47, 0x03, 0xb5, 0x99, 0x6a, 0x04, 0x20,
0x01, 0x42, 0xfb, 0xd0, 0x01, 0x20, 0x01, 0x42, 0xf8, 0xd1, 0x03, 0xbd, 0x02, 0xb5, 0x18, 0x66,
0x18, 0x66, 0xff, 0xf7, 0xf2, 0xff, 0x18, 0x6e, 0x18, 0x6e, 0x02, 0xbd, 0x00, 0x00, 0x02, 0x40,
0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x07, 0x00, 0x00, 0x03, 0x5f, 0x00, 0x21, 0x22, 0x00, 0x00,
0xf4, 0x00, 0x00, 0x18, 0x22, 0x20, 0x00, 0xa0, 0x00, 0x01, 0x00, 0x10, 0x08, 0xed, 0x00, 0xe0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x74, 0xb2, 0x4e, 0x7a,
};

extern void Reset_Handler(void);

extern int main(void);


#define SRAM_START              (0x20000000)
#define SRAM_SIZE               (256*1024)

#define INITIAL_SP              (SRAM_START + SRAM_SIZE)

#define CLOCKS_BASE             0x40008000
#define CLK_GPOUT0              (CLOCKS_BASE+0x00)
#define CLK_GPOUT1              (CLOCKS_BASE+0x0C)
#define CLK_GPOUT2              (CLOCKS_BASE+0x18)
#define CLK_GPOUT3              (CLOCKS_BASE+0x24)
#define CLK_REF                 (CLOCKS_BASE+0x30)
#define CLK_SYS                 (CLOCKS_BASE+0x3C)
#define CLK_PERI                (CLOCKS_BASE+0x48)
#define CLK_USB                 (CLOCKS_BASE+0x54)
#define CLK_ADC                 (CLOCKS_BASE+0x60)
#define CLK_RTC                 (CLOCKS_BASE+0x6C)
#define CLK_SYS_RESUS_CTRL      (CLOCKS_BASE+0x78)
#define CLK_SYS_RESUS_STATUS    (CLOCKS_BASE+0x7C)

#define CLK_x_CTRL              (0x00)
#define CLK_x_DIV               (0x04)
#define CLK_x_SELECTED          (0x08)

#define CLK_SYS_CTRL_AUXSRC     (0x000000e0)
#define CLK_SYS_CTRL_SRC        (0x00000001)
#define CLK_REF_CTRL_SRC        (0x00000003)
#define CLK_CTRL_ENABLE         (0x00000800)

#define CLK_SYS_CTRL_SRC_AUX (0x1)

#define CLK_KIND_GPOUT0         0
#define CLK_KIND_GPOUT1         1
#define CLK_KIND_GPOUT2         2
#define CLK_KIND_GPOUT3         3
#define CLK_KIND_REF            4
#define CLK_KIND_SYS            5
#define CLK_KIND_PERI           6
#define CLK_KIND_USB            7
#define CLK_KIND_ADC            8
#define CLK_KIND_RTC            9

#define RESETS_BASE             0x4000C000
#define RESETS_RESET            (RESETS_BASE+0x0)
#define RESETS_WDSEL            (RESETS_BASE+0x4)
#define RESETS_RESET_DONE       (RESETS_BASE+0x8)

#define RESETS_RESET_ADC        (0x00000001)
#define RESETS_RESET_I2C0       (0x00000008)
#define RESETS_RESET_I2C1       (0x00000010)

#define IO_BANK0_BASE           0x40014000
#define GPIO_CTRL(n)            (IO_BANK0_BASE+0x04+(n*8))

#define GPIO_CTRL_FUNCSEL_I2C   3
#define GPIO_CTRL_FUNCSEL_NULL  31

#define PADS_BANK0_BASE         0x4001c000
#define GPIO(n)                 (PADS_BANK0_BASE+0x4+(n*4))

#define GPIO_OD                 (1<<7)
#define GPIO_IE                 (1<<6)
#define GPIO_DRIVE_2MA          (0<<4)
#define GPIO_DRIVE_4MA          (1<<4)
#define GPIO_DRIVE_8MA          (2<<4)
#define GPIO_DRIVE_12MA         (3<<4)
#define GPIO_PUE                (1<<3)
#define GPIO_PDE                (1<<2)
#define GPIO_SHEMITT            (1<<1)
#define GPIO_SLEWDAST           (1<<0)

/* Crystal Oscillator(XOSC) */
#define XOSC_BASE               0x40024000
#define XOSC_CTRL               (XOSC_BASE+0x00)
#define XOSC_STATUS             (XOSC_BASE+0x04)
#define XOSC_STARTUP            (XOSC_BASE+0x0C)

#define XOSC_CTRL_ENABLE        (0x00FAB000)
#define XOSC_CTRL_DISABLE       (0x00D1E000)
#define XOSC_CTRL_FRANG_1_15MHZ (0x00000AA0)

#define XOSC_STATUS_STABLE      (0x80000000)

/* PLL */
#define PLL_SYS_BASE            (0x40028000)
#define PLL_USB_BASE            (0x4002C000)

#define PLL_CS                  (0x00)
#define PLL_PWR                 (0x04)
#define PLL_FBDIV_INT           (0x08)
#define PLL_PRIM                (0x0C)

#define PLL_CS_LOCK             (1<<31)
#define PLL_PWR_PD              (1<<0)
#define PLL_PWR_VCOPD           (1<<5)
#define PLL_PWR_POSTDIVPD       (1<<3)
#define PLL_PRIM_POSTDIV1_LSB   (16)
#define PLL_PRIM_POSTDIV2_LSB   (12)

/* UART */
#define UART0_BASE              0x40034000
#define UART1_BASE              0x40038000

#define UARTx_DR                (0x000)
#define UARTx_FR                (0x018)
#define UARTx_IBRD              (0x024)
#define UARTx_FBRD              (0x028)
#define UARTx_LCR_H             (0x02C)
#define UARTx_CR                (0x030)

#define UART_CR_RXE             (1<<9)
#define UART_CR_TXE             (1<<8)
#define UART_CR_EN              (1<<0)
#define UART_FR_TXFF            (1<<5)

/* IOPORT レジスタ */
#define SIO_BASE                0xD0000000
#define GPIO_IN                 (SIO_BASE+0x04)
#define GPIO_OUT                (SIO_BASE+0x10)
#define GPIO_OUT_SET            (SIO_BASE+0x14)
#define GPIO_OUT_CLR            (SIO_BASE+0x18)
#define GPIO_OUT_XOR            (SIO_BASE+0x1C)
#define GPIO_OE_SET             (SIO_BASE+0x24)
#define GPIO_OE_CLR             (SIO_BASE+0x28)
#define GPIO_OE_XOR             (SIO_BASE+0x2C)

/* SysTick レジスタ */
#define SYST_CSR                (0xE000E010)
#define SYST_RVR                (0xE000E014)
#define SYST_CVR                (0xE000E018)

#define SYST_CSR_COUNTFLAG      (1<<16)
#define SYST_CSR_CLKSOURCE      (1<<2)
#define SYST_CSR_TICKINT        (1<<1)
#define SYST_CSR_ENABLE         (1<<0)

/* クロック周波数 */
#define CLOCK_XOSC              (12000000UL)
#define CLOCK_REF               (CLOCK_XOSC)
#define CLOCK_PERI              (CLOCK_SYS)

#define XOSC_MHz                (12)
#define XOSC_KHz                (XOSC_MHz*1000)

#define TMCLK_MHz               (125)
#define TMCLK_KHz               (TMCLK_MHz*1000)
#define TIMER_PERIOD            (10)

#define KHz                     (1000)
#define MHz                     (KHz*1000)

/* NVIC レジスタ */
#define SCB_SHPR3               (0xE000ED20)

#define INTLEVEL_0              (0x00)
#define INTLEVEL_1              (0x40)
#define INTLEVEL_2              (0x80)
#define INTLEVEL_3              (0xC0)

#define SYSLIB_H


static inline UW in_w(UW adr)
{
    return *(_UW*)adr;
}

static inline void out_w(UW adr, UW data)
{
    *(_UW*)adr = data;
}

#define OP_CLR      0x3000
static inline void clr_w(UW adr, UW data)
{
    *(_UW*)(adr + OP_CLR) = data;
}

#define OP_SET       0x2000
static inline void set_w(UW adr, UW data)
{
    *(_UW*)(adr + OP_SET) = data;
}

#define OP_XOR      0x1000
static inline void xset_w(UW adr, UW data)
{
    *(_UW*)(adr + OP_XOR) = data;
}

static inline void set_primask( INT pm )
{
    __asm__ volatile("msr primask, %0":: "r"(pm));
}

static inline UW get_primask( void )
{
    UW  pm;
    __asm__ volatile("mrs %0, primask": "=r"(pm));
    return pm;
}

#define DI(intsts) (intsts=get_primask(), set_primask(1))

#define EI(intsts) (set_primask(intsts))




extern const void *__data_org;
extern const void *__data_start;
extern const void *__data_end;
extern const void *__bss_start;
extern const void *__bss_end;

#define XOSC_STARTUP_DELAY ((XOSC_KHz + 128) / 256)

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

static void init_clock(void)
{
    UW  div;

    out_w(CLK_SYS_RESUS_CTRL, 0);

    out_w(XOSC_CTRL, XOSC_CTRL_FRANG_1_15MHZ);
    out_w(XOSC_STARTUP, XOSC_STARTUP_DELAY);
    set_w(XOSC_CTRL, XOSC_CTRL_ENABLE);
    while((in_w(XOSC_STATUS) & XOSC_STATUS_STABLE)==0);

    clr_w(CLK_SYS+CLK_x_CTRL, CLK_SYS_CTRL_SRC);
    while(in_w(CLK_SYS+CLK_x_SELECTED) != 0x1);
    clr_w(CLK_REF+CLK_x_CTRL, CLK_REF_CTRL_SRC);
    while(in_w(CLK_REF+CLK_x_SELECTED) != 0x1);

    init_pll(PLL_SYS_BASE, 1, 1500 * MHz, 6, 2);    // PLL SYS 125MHz
    init_pll(PLL_USB_BASE, 1, 480 * MHz, 5, 2);     // PLL USB 48MHz

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

    div = (UW)(((UD)(125*MHz) << 8) / (125*MHz));
    if (div > in_w(CLK_SYS+CLK_x_DIV)) {
        out_w(CLK_SYS+CLK_x_DIV, div);
    }
    clr_w(CLK_SYS+CLK_x_CTRL, CLK_REF_CTRL_SRC);
    while(!(in_w(CLK_SYS+CLK_x_SELECTED) & 0x1));

    out_w(CLK_SYS+CLK_x_CTRL, (in_w(CLK_SYS+CLK_x_CTRL) & ~CLK_SYS_CTRL_AUXSRC));
    out_w(CLK_SYS+CLK_x_CTRL, (in_w(CLK_SYS+CLK_x_CTRL) & ~CLK_REF_CTRL_SRC) | 1 );
    while(!(in_w(CLK_SYS+CLK_x_SELECTED)&(1<<1)));

    set_w(CLK_SYS+CLK_x_CTRL, CLK_CTRL_ENABLE);
    out_w(CLK_SYS+CLK_x_DIV, div);

    clock_config(CLK_KIND_USB, 0, 48 * MHz, 48 * MHz);

    clock_config(CLK_KIND_ADC, 0, 48 * MHz, 48 * MHz);

    clock_config(CLK_KIND_RTC, 0, 48 * MHz, 46875);

    clock_config(CLK_KIND_PERI, 0, 125 * MHz, 125 * MHz);
}

static void init_peri(void)
{
    clr_w(RESETS_RESET, (1<<5));    /* IO_BANK0 */
    while((in_w(RESETS_RESET_DONE) & (1<<5))==0);

    clr_w(RESETS_RESET, (1<<8));    /* PADS_BANK0 */
    while((in_w(RESETS_RESET_DONE) & (1<<8))==0);

    clr_w(RESETS_RESET, (1<<22));
    while((in_w(RESETS_RESET_DONE) & (1<<22))==0);

    out_w(GPIO_OE_CLR, (1<<25));
    out_w(GPIO_OUT_CLR, (1<<25));
    out_w(GPIO_CTRL(25), 5);
    out_w(GPIO_OE_SET, (1<<25));

    out_w(GPIO_CTRL(0), 2);
    out_w(GPIO_CTRL(1), 2);

}

/*
static void init_section(void)
{
    _UW     *src, *top, *end;
    INT     i;

    src = (_UW*)&__data_start;;
    top = (_UW*)&__data_start;
    end = (_UW*)&__data_end;
    while(top != end) {
        *top++ = *src++;
    }

    for(i = ((int)&__bss_end - (int)&__bss_start)/sizeof(int); i > 0 ; i--) {
        *top++ = 0;
    }
}
*/
static void init_section(void)
{
    _UW *src, *dst, *end;

    // .data セクションの初期化
    src = (_UW *) &__data_org;
    dst = (_UW *) &__data_start;
    end = (_UW *) &__data_end;
    while (dst < end) {
        *dst++ = *src++;
    }

    // .bss セクションの初期化 (ゼロクリア)
    dst = (_UW *) &__bss_start;
    end = (_UW *) &__bss_end;
    while (dst < end) {
        *dst++ = 0;
    }
}


static void init_systim(void)
{
    out_w(SYST_CSR ,SYST_CSR_CLKSOURCE);
    out_w(SYST_RVR, (TIMER_PERIOD*TMCLK_KHz)-1);
    out_w(SYST_CVR, (TIMER_PERIOD*TMCLK_KHz)-1);
    out_w(SYST_CSR, SYST_CSR_CLKSOURCE | SYST_CSR_ENABLE);
}

void Reset_Handler(void)
{
    UINT    intsts;
    
    DI(intsts);

    out_w(SCB_SHPR3, (INTLEVEL_0<<24)|(INTLEVEL_3<<16));

    init_clock();
    init_peri();
    init_section();
    init_systim();

    EI(intsts);

    main();
    while(1);
}

void Default_Handler(void)
{
    while(1);
}

void (* const vector_tbl[])() __attribute__((section(".vector"))) = {
    (void(*)()) (INITIAL_SP),   // 0: Top of Stack
    Reset_Handler,              // 1: Reset
    Default_Handler,            // 2: NMI
    Default_Handler,            // 3: Hard Fault
    0,                          // 4: 未使用
    0,                          // 5: 未使用
    0,                          // 6: 未使用
    0,                          // 7: 未使用
    0,                          // 8: 未使用
    0,                          // 9: 未使用
    0,                          // 10: 未使用
    Default_Handler,            // 11: Svcall
    0,                          // 12: 未使用
    0,                          // 13: 未使用
    Default_Handler,            // 14: Pend SV
    Default_Handler,            // 15: Systick
    Default_Handler,            // IRQ 0 
    Default_Handler,            // IRQ 1 
    Default_Handler,            // IRQ 2 
    Default_Handler,            // IRQ 3 
    Default_Handler,            // IRQ 4 
    Default_Handler,            // IRQ 5 
    Default_Handler,            // IRQ 6 
    Default_Handler,            // IRQ 7 
    Default_Handler,            // IRQ 8 
    Default_Handler,            // IRQ 9 
    Default_Handler,            // IRQ 10
    Default_Handler,            // IRQ 11
    Default_Handler,            // IRQ 12
    Default_Handler,            // IRQ 13
    Default_Handler,            // IRQ 14
    Default_Handler,            // IRQ 15
    Default_Handler,            // IRQ 16
    Default_Handler,            // IRQ 17
    Default_Handler,            // IRQ 18
    Default_Handler,            // IRQ 19
    Default_Handler,            // IRQ 20
    Default_Handler,            // IRQ 21
    Default_Handler,            // IRQ 22
    Default_Handler,            // IRQ 23
    Default_Handler,            // IRQ 24
    Default_Handler,            // IRQ 25
    Default_Handler,            // IRQ 26
    Default_Handler,            // IRQ 27
    Default_Handler,            // IRQ 28
    Default_Handler,            // IRQ 29
    Default_Handler,            // IRQ 31
};

static void delay_ms( UINT ms)
{
    UINT cnt = ms/TIMER_PERIOD;

    while(cnt) {
        if((in_w(SYST_CSR) & SYST_CSR_COUNTFLAG)!=0) {  /* TIMER_PERIOD経過するとフラグがセット */
            cnt--;
        }
    }
}

int main(void)
{
    while(1) {
        out_w(GPIO_OUT_XOR, (1<<25));
        delay_ms(500);
    }
    return 0;
}
