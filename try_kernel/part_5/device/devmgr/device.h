#ifndef DEVICE_H
#define DEVICE_H

#include "typedef.h"
#include "error.h"

#define DEVNM_LEN   8
typedef struct
{
    UB      devnm[DEVNM_LEN];       // デバイス名
    UINT    unit;                   // ユニット番号
    UINT    omode;                  // オープンモード
    UINT    opncnt;                 // オープン数
    ER      (*fn_opn)();            // オープン関数
    ER      (*fn_srea)();           // リード関数
    ER      (*fn_swri)();           // ライト関数
} T_DEV_DEF;

#define DEV_NUM     3               /* 登録デバイス数*/
extern T_DEV_DEF   dev_tbl[];       /* デバイ登録で―ブル*/

#endif	/* DEVICE_H */
