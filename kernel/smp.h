// SMP-friendly memory ordering helpers
// - Portable atomic fences + arch fences for performance tuning

#ifndef COMELANG_KERNEL_SMP_H
#define COMELANG_KERNEL_SMP_H

#include "kutil.h"

// Portable atomic fences (compiler-supported)
#define K_FENCE_ACQUIRE()   __atomic_thread_fence(__ATOMIC_ACQUIRE)
#define K_FENCE_RELEASE()   __atomic_thread_fence(__ATOMIC_RELEASE)
#define K_FENCE_ACQ_REL()   __atomic_thread_fence(__ATOMIC_ACQ_REL)
#define K_FENCE_SEQ_CST()   __atomic_thread_fence(__ATOMIC_SEQ_CST)

// Arch-level heavy fences as aliases (map to arch helpers where possible)
static K_FORCE_INLINE void k_smp_mb(void)  { k_mb(); }
static K_FORCE_INLINE void k_smp_rmb(void) { k_rmb(); }
static K_FORCE_INLINE void k_smp_wmb(void) { k_wmb(); }

// Typical patterns
#define K_PUBLISH(ptr, val)  do { (ptr) = (val); K_FENCE_RELEASE(); } while(0)
#define K_CONSUME(ptr)       (K_FENCE_ACQUIRE(), (ptr))

#endif // COMELANG_KERNEL_SMP_H

