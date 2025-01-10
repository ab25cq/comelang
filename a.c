#ifndef __noreturn
#define __noreturn __attribute((noreturn))
#endif


void __noreturn __breakpoint();

void __noreturn panic_unsupported();

void __noreturn panic(const char *fmt, ...);
