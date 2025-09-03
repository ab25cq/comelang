#ifndef SHIM_STDIO_H
#define SHIM_STDIO_H

/* Minimal shim stdio.h for preprocessing only */
#ifndef NULL
#define NULL ((void*)0)
#endif

int puts(const char *s);
int printf(const char *fmt, ...);

#endif /* SHIM_STDIO_H */

