/* This file is kept intentionally simple so our demo parser can parse it.
   The actual implementation lives in typedefs_impl.c. */

typedef struct TList { char** a; long n; long cap; } TList;

/* Declarations only; definitions are in typedefs_impl.c */
int typedef_is(const char* name);
void typedef_add(const char* name);
