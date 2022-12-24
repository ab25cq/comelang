#ifndef XFUNC_H
#define XFUNC_H 1

#define ALLOC
#define MANAGED

#define BOOL int
#define TRUE 1
#define FALSE 0

extern char* xstrncpy(char* des, char* src, size_t size);
extern char* xstrncat(char* des, char* str, size_t size);
ALLOC extern void* xmalloc(size_t size);
ALLOC extern char* xstrdup(char* str);
ALLOC extern void* xrealloc(void* ptr, size_t size);
ALLOC extern void* xcalloc(size_t count, size_t size);

#endif
