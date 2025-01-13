/*-------------------------------*/
/* V850ES UART driver            */

#include "uart_v850es.h"


#define BUFFER_SIZE 128
#define BPS 		115200


static volatile int TxRun;
static volatile struct {
	int		ri, wi, ct;
	unsigned char	buff[BUFFER_SIZE];
} TxFifo, RxFifo;




#pragma interrupt INTUA0R ISR_uart0_rcvr
void ISR_uart0_rcvr (void)
{
	unsigned char d;
	int i;


	d = UA0RX;
	i = RxFifo.ct;
	if (i < BUFFER_SIZE) {
		RxFifo.ct = i + 1;
		i = RxFifo.wi;
		RxFifo.buff[i++] = d;
		RxFifo.wi = i % BUFFER_SIZE;
	}
}




#pragma interrupt INTUA0T ISR_uart0_xmit
void ISR_uart0_xmit (void)
{
	int i;


	i = TxFifo.ct;
	if (i) {
		TxFifo.ct = i - 1;
		i = TxFifo.ri;
		UA0TX = TxFifo.buff[i++];
		TxFifo.ri = i % BUFFER_SIZE;
	} else {
		TxRun = 0;
	}
}




int uart0_test (void)
{
	return RxFifo.ct;
}




unsigned char uart0_get (void)
{
	unsigned char d;
	int i;


	do; while (!RxFifo.ct);

	i = RxFifo.ri;
	d = RxFifo.buff[i++];
	RxFifo.ri = i % BUFFER_SIZE;
	__DI();
	RxFifo.ct--;
	__EI();

	return d;
}




void uart0_put (unsigned char d)
{
	int i;


	do; while (TxFifo.ct >= BUFFER_SIZE);

	i = TxFifo.wi;
	TxFifo.buff[i++] = d;
	TxFifo.wi = i % BUFFER_SIZE;
	__DI();
	TxFifo.ct++;
	if (!TxRun) {
		TxRun = 1;
		UA0TIF = 1;
	}
	__EI();
}




void uart0_init (void)
{
	UA0RMK = 1;
	UA0TMK = 1;

	/* Attach UARTA0 unit to I/O pin */
	P3L |= 0x01;
	PM3L &= ~0x01;
	PMC3L |= 0x03;

	/* Initialize UARTA0 */
	UA0CTL0 = 0x92;
	UA0CTL1 = 0;
	UA0CTL2 = SYSCLK / 2 / BPS;
	UA0CTL0 = 0xF2;

	/* Clear Tx/Rx FIFOs */
	TxFifo.ri = 0; TxFifo.wi = 0; TxFifo.ct = 0;
	RxFifo.ri = 0; RxFifo.wi = 0; RxFifo.ct = 0;
	TxRun = 0;

	/* Enable Tx/Rx interruptrs */
	UA0RMK = 0;
	UA0TMK = 0;
}


