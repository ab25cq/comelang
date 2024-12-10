#ifndef _STDDEF_H_
#define _STDDEF_H_

/* Define NULL if not already defined */
#ifndef NULL
#define NULL ((void *)0)
#endif

/* Define size_t as an unsigned integer type */
typedef unsigned long size_t;

/* Define ptrdiff_t as a signed integer type for pointer differences */
typedef long ptrdiff_t;

/* Define wchar_t as a wide character type */
#ifndef __cplusplus
typedef unsigned short wchar_t;
#endif

/* Offset of a member in a struct */
#define offsetof(type, member) ((size_t) &(((type *)0)->member))

#endif /* _STDDEF_H_ */

