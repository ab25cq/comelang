#ifndef APIDEF_H
#define APIDEF_H
/* 
 *** Try Kernel
 *      API定義 
*/

/* タイムアウト時間 */
#define TMO_POL             (0)         // タイムアウト時間 0
#define TMO_FEVR            (-1)        // 無限待ち

/*タスク生成情報 */
typedef struct {
    ATR     tskatr;     // タスク属性
    FP      task;       // タスク起動アドレス
    PRI     itskpri;    // タスク優先度
    SZ      stksz;	    // スタックサイズ
    void    *bufptr;    // スタックのバッファポインタ
} T_CTSK;

/* タスク属性 */
#define TA_HLNG         0x0000001
#define TA_USERBUF      0x0000020
#define TA_RNG0         0x0000000
#define TA_RNG1         0x0000100
#define TA_RNG2         0x0000200
#define TA_RNG3         0x0000300

/* タスクの待ち属性 */
#define TA_TFIFO        0x00000000          // 待ちタスクをFIFO順で管理
#define TA_TPRI         0x00000001          // 待ちタスクを優先度順で管理
#define TA_FIRST        0x00000000          // 待ち行列先頭のタスクを優先
#define TA_CNT          0x00000002          // 要求数の少ないタスクを優先
#define TA_WSGL         0x00000000          // 複数タスクの待ちを許さない
#define TA_WMUL         0x00000008          // 複数タスクの待ちを許す

/* タスク管理API */
ID tk_cre_tsk( const T_CTSK *pk_ctsk );
ER tk_sta_tsk( ID tskid, INT stacd );
void tk_ext_tsk( void );

/* タスク付属同期API */
ER tk_dly_tsk( RELTIM dlytim );
ER tk_slp_tsk( TMO tmout );
ER tk_wup_tsk( ID tskid );

/* イベントフラグ生成情報 */
typedef	struct t_cflg {
    ATR     flgatr;     // イベントフラグ属性
    UINT    iflgptn;    // イベントフラグ初期値
} T_CFLG;

/* イベントフラグ API */
ID tk_cre_flg( const T_CFLG *pk_cflg );
ER tk_set_flg( ID flgid, UINT setptn );
ER tk_clr_flg( ID flgid, UINT clrptn );

#define TWF_ANDW    0x00000000U     // AND待ち
#define TWF_ORW     0x00000001U     // OR待ち
#define TWF_CLR     0x00000010U     // 全ビットのクリア
#define TWF_BITCLR  0x00000020U     // 条件ビットのみクリア

ER tk_wai_flg( ID flgid, UINT waiptn, UINT wfmode, UINT *p_flgptn, TMO tmout );

#endif  /* APIDEF_H */