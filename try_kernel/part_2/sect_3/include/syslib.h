#ifndef SYSLIB_H
#define SYSLIB_H
/* 
 *** Try Kernel
 *      共通ライブラリ関数定義
 */

/* 32bitレジスタからの入力 */
static inline UW in_w(UW adr)
{
    return *(_UW*)adr;
}

/* 32bitレジスタへの出力 */
static inline void out_w(UW adr, UW data)
{
    *(_UW*)adr = data;
}

/* 32bitレジスタへの出力(ビットクリア) */
#define OP_CLR      0x3000
static inline void clr_w(UW adr, UW data)
{
    *(_UW*)(adr + OP_CLR) = data;
}

/* 32bitレジスタへの出力(ビットセット) */
#define OP_SET       0x2000
static inline void set_w(UW adr, UW data)
{
    *(_UW*)(adr + OP_SET) = data;
}

/* 32bitレジスタへの出力(ビット排他的論理和) */
#define OP_XOR      0x1000
static inline void xset_w(UW adr, UW data)
{
    *(_UW*)(adr + OP_XOR) = data;
}

/* PRIMASKレジスタ制御インライン関数 */
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

/* 割込み禁止マクロ */
#define DI(intsts) (intsts=get_primask(), set_primask(1))

/* 割込み許可マクロ */
#define EI(intsts) (set_primask(intsts))

#endif  /* STYLIB_H *
