#ifndef _COMMFUNC
#define _COMMFUNC

#include "v850es.h"

void uart0_init (void);
int uart0_test (void);
void uart0_put (unsigned char);
unsigned char uart0_get (void);

#endif

