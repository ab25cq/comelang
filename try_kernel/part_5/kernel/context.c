/* 
 *** Try Kernel
 *      コンテキスト管理
*/

#include <typedef.h>
#include <sysdef.h>
#include <syslib.h>
#include <knldef.h>

/* スタック上の実行コンテキスト情報 */
typedef struct {
    UW	r_[8];      /* R4-R11 レジスタの値（例外処理により退避） */
    UW	r[4];       /* R0-R3 レジスタの値*/
    UW	ip;	        /* R12 レジスタの値*/
    UW	lr;         /* lr レジスタの値 */
    UW	pc;         /* pc レジスタの値 */
    UW	xpsr;       /* xpsr レジスタの値 */
} StackFrame;

/* 初期実行コンテキストの作成 */
void *make_context( UW *sp, UINT ssize, void (*fp)())
{
    StackFrame	*sfp;

    /* スタック上の実行コンテクスト情報へのポインタをsfpに設定 */
    sfp = (StackFrame*)((UW)sp + ssize);
    sfp--;

    /* 実行コンテキスト情報の初期化 */
    sfp->xpsr       = 0x01000000;
    sfp->pc         = (UW)fp & ~0x00000001UL;

    return (void*)sfp;
}
