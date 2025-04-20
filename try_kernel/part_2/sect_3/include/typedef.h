#ifndef TYPEDEF_H
#define TYPEDEF_H
/* 
 *** Try Kernel
 *      データ型定義
*/

#include <stdint.h>

/* 符号付き整数 */
typedef int8_t              B;      /* 8 bit */
typedef int16_t             H;      /* 16 bit */
typedef int32_t             W;      /* 32 bit */
typedef int64_t             D;      /* 64 bit */

/* 符号無し整数 */
typedef uint8_t             UB;      /* 8 bit */
typedef uint16_t            UH;      /* 16 bit */
typedef uint32_t            UW;      /* 32 bit */
typedef uint64_t            UD;      /* 64 bit */

/* volatile 符号付き整数 */
typedef volatile int8_t     _B;      /* 8 bit */
typedef volatile int16_t    _H;      /* 16 bit */
typedef volatile int32_t    _W;      /* 32 bit */
typedef volatile int64_t    _D;      /* 64 bit */

/* volatole 符号無し整数 */
typedef volatile uint8_t    _UB;      /* 8 bit */
typedef volatile uint16_t   _UH;      /* 16 bit */
typedef volatile uint32_t   _UW;      /* 32 bit */
typedef volatile uint64_t   _UD;      /* 64 bit */

/* サイズ指定なし */
typedef int                 INT;    /* 符号付き整数 */
typedef unsigned int        UINT;   /* 符号無し整数 */

/* 特別な意味を持つ整数 */
typedef INT                 ID;     /* ID番号 */
typedef UW                  ATR;    /* 属性 */
typedef INT                 ER;     /* エラーコード */
typedef INT                 PRI;    /* 優先順位 */
typedef W                   TMO;    /* タイムアウト時間 */
typedef UW                  RELTIM; /* 相対時間 */
typedef W                   SZ;     /* サイズ */

typedef void                (*FP)();    /* 関数ポインタ */

#define NULL                (0)

typedef UINT                BOOL;
#define TRUE                (1)     /* True */
#define FALSE               (0)     /* False */

#endif  /* TYPEDEF_H */
