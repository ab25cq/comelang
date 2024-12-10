#ifndef _ASSERT_H_
#define _ASSERT_H_

#ifdef NDEBUG
#define assert(condition) ((void)0)
#else
#define assert(condition) \
    ((condition) ? (void)0 : __assert_fail(#condition, __FILE__, __LINE__, __func__))

static inline void __assert_fail(const char *condition, const char *file, int line, const char *func) {
    fprintf(stderr, "Assertion failed: (%s), function %s, file %s, line %d.\n",
            condition, func, file, line);
    abort();
}
#endif

#endif /* _ASSERT_H_ */

