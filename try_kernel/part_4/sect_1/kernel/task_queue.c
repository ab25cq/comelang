/* 
 *** Try Kernel
 *      タスクの待ち行列操作関数
*/
#include <trykernel.h>
#include <knldef.h>

/* エントリ追加関数 */
void tqueue_add_entry(TCB **queue, TCB *tcb)
{
    TCB *queue_end;

    if(*queue == NULL) {    // キューは空なので先頭に追加
        *queue      = tcb;
        tcb->pre    = tcb;
	} else {                // キューの終端に追加
        queue_end       = (*queue)->pre;
        queue_end->next = tcb;
        tcb->pre        = queue_end;
        (*queue)->pre   = tcb;
    }
    tcb->next = NULL;
}

/* 先頭エントリ削除関数 */
void tqueue_remove_top(TCB **queue)
{
    TCB	*top;

    if(*queue == NULL) return;  // キューは空

    top = *queue;
    *queue = top->next;
    if(*queue != NULL) {
        (*queue)->pre = top->pre;
    }
}

/* 指定エントリ削除関数 */
void tqueue_remove_entry(TCB **queue, TCB *tcb)
{
    if(*queue == tcb) {     // 指定したエントリはキューの先頭
        tqueue_remove_top(queue);
    } else {                // キューの途中から指定エントリを削除
        (tcb->pre)->next = tcb->next;
        if(tcb->next != NULL) {
            (tcb->next)->pre = tcb->pre;
        } else {
            (*queue)->pre = tcb->pre;
        }
    }
}
