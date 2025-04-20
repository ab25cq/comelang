#include <trykernel.h>

/* 時間待ち関数 */
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
    tm_com_init();                      /* デバッグ出力の初期化 */

    tm_putstring("hello,world\n");      /* デバッグ出力 */

    while(1) {
        out_w(GPIO_OUT_XOR, (1<<25));   /* LEDの表示反転 */
        delay_ms(500);                  /* 0.5秒待ち */
    }
    return 0;
}