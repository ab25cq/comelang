#include <trykernel.h>
#include "device.h"

/* 文字列の比較 */
static BOOL nm_cmp(const UB *nm1, const UB *nm2)
{
    for(INT i = 0; i < DEVNM_LEN; i++, nm1++, nm2++) {
        if(*nm2 == 0) break;
        if (*nm1 != *nm2) return FALSE;
    }
    return (*nm1 == 0)? TRUE: FALSE;
}

/*
 * デバイスのオープンAPI
*/
ID tk_opn_dev( const UB *devnm, UINT omode)
{
    UINT    intsts;
    INT     i;
    ER      err;

    /* デバイスドライバの検索*/
    for(i = 0; i < DEV_NUM; i++) {
        if( nm_cmp(dev_tbl[i].devnm, devnm) == TRUE) break;
    }
    if(i >= DEV_NUM) return E_NOEXS;    // デバイスは存在しない

    DI(intsts);                         // 割込み禁止
    if(dev_tbl[i].opncnt == 0) {        // 最初のオープンのみオープン処理を実行
        err = (*dev_tbl[i].fn_opn)(dev_tbl[i].unit, omode);
        if(err == E_OK) {
            dev_tbl[i].opncnt++;
            dev_tbl[i].omode = omode;
            err = i;
        }
    }
    EI(intsts);                          // 割込み許可
    return err;
}

/*
 * デバイスの同期読込みAPI
*/
ER tk_srea_dev( ID dd, W start, void *buf, SZ size, SZ *asize)
{
    ER  err;

    /* エラーチェック */
    if(dd >= DEV_NUM) return E_ID;                          // ddが不正
    if(dev_tbl[dd].opncnt == 0) return E_ID;                // オープンされてない
    if((dev_tbl[dd].omode & TD_READ) == 0) return E_OACV;   // オープンモードが読込みでない

    /* デバイスドライバのリード処理を呼出す*/
    err = (*dev_tbl[dd].fn_srea)(dev_tbl[dd].unit, start, buf, size, asize);

    return err;
}

/*
 * デバイスの同期書込みAPI
*/
ER tk_swri_dev( ID dd, W start, const void *buf, SZ size, SZ *asize)
{
    ER  err;

    /* エラーチェック */
    if(dd >= DEV_NUM) return E_ID;                              // ddが不正
    if(dev_tbl[dd].opncnt == 0) return E_ID;                    // オープンされてない
    if((dev_tbl[dd].omode & TD_WRITE) == 0) return E_OACV;      // オープンモードが書込みでない

    /* デバイスドライバのリード処理を呼出す*/
    err = (*dev_tbl[dd].fn_swri)(dev_tbl[dd].unit, start, buf, size, asize);

    return err;
}
