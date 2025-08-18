// Kernel/embedded utility macros and helpers for GCC/Clang
// - Attributes, sections, barriers, and arch-specific intrinsics
// - Header-only, pure C (C99+). Use in freestanding builds.

#ifndef COMELANG_KERNEL_KUTIL_H
#define COMELANG_KERNEL_KUTIL_H

#if !defined(__GNUC__) && !defined(__clang__)
#error "kutil.h requires GCC or Clang-compatible compiler"
#endif

#include <stdint.h>
#include <stddef.h>

// Attribute/section helpers
#define K_SECTION(name)          __attribute__((section(name)))
#define K_ALIGNED(x)             __attribute__((aligned(x)))
#define K_PACKED                 __attribute__((packed))
#define K_NAKED                  __attribute__((naked))
#define K_USED                   __attribute__((used))
#define K_WEAK                   __attribute__((weak))
#define K_NOINLINE               __attribute__((noinline))
#define K_FORCE_INLINE           inline __attribute__((always_inline))
#define K_HOT                    __attribute__((hot))
#define K_COLD                   __attribute__((cold))
#define K_PURE                   __attribute__((pure))
#define K_CONSTFUNC              __attribute__((const))
#define K_RETURNS_NONNULL        __attribute__((returns_nonnull))

#if defined(__has_attribute)
#  if __has_attribute(fallthrough)
#    define K_FALLTHROUGH        __attribute__((fallthrough))
#  else
#    define K_FALLTHROUGH        do {} while (0)
#  endif
#else
#  define K_FALLTHROUGH          do {} while (0)
#endif

// Compiler and memory barriers
#define K_COMPILER_BARRIER()     __asm__ __volatile__("" ::: "memory")

// Generic MMIO helpers
static K_FORCE_INLINE uint8_t  mmio_read8 (volatile const void* addr)  { return *(volatile const uint8_t*)addr; }
static K_FORCE_INLINE uint16_t mmio_read16(volatile const void* addr)  { return *(volatile const uint16_t*)addr; }
static K_FORCE_INLINE uint32_t mmio_read32(volatile const void* addr)  { return *(volatile const uint32_t*)addr; }
static K_FORCE_INLINE uint64_t mmio_read64(volatile const void* addr)  { return *(volatile const uint64_t*)addr; }
static K_FORCE_INLINE void mmio_write8 (volatile void* addr, uint8_t  v) { *(volatile uint8_t*)addr  = v; }
static K_FORCE_INLINE void mmio_write16(volatile void* addr, uint16_t v) { *(volatile uint16_t*)addr = v; }
static K_FORCE_INLINE void mmio_write32(volatile void* addr, uint32_t v) { *(volatile uint32_t*)addr = v; }
static K_FORCE_INLINE void mmio_write64(volatile void* addr, uint64_t v) { *(volatile uint64_t*)addr = v; }

// Architecture-specific helpers
#if defined(__x86_64__) || defined(_M_X64)

static K_FORCE_INLINE void k_mb(void)   { __asm__ __volatile__("mfence" ::: "memory"); }
static K_FORCE_INLINE void k_rmb(void)  { __asm__ __volatile__("lfence" ::: "memory"); }
static K_FORCE_INLINE void k_wmb(void)  { __asm__ __volatile__("sfence" ::: "memory"); }
static K_FORCE_INLINE void k_pause(void){ __asm__ __volatile__("pause"); }

static K_FORCE_INLINE void k_cli(void)  { __asm__ __volatile__("cli" ::: "memory"); }
static K_FORCE_INLINE void k_sti(void)  { __asm__ __volatile__("sti" ::: "memory"); }

static K_FORCE_INLINE uint64_t k_rdtsc(void)
{
    uint32_t lo, hi;
    __asm__ __volatile__("rdtsc" : "=a"(lo), "=d"(hi));
    return ((uint64_t)hi << 32) | lo;
}

static K_FORCE_INLINE void k_cpuid(uint32_t leaf, uint32_t subleaf,
                                   uint32_t* eax, uint32_t* ebx,
                                   uint32_t* ecx, uint32_t* edx)
{
    uint32_t a, b, c, d;
    __asm__ __volatile__("cpuid" : "=a"(a), "=b"(b), "=c"(c), "=d"(d) : "a"(leaf), "c"(subleaf));
    if(eax) *eax = a; if(ebx) *ebx = b; if(ecx) *ecx = c; if(edx) *edx = d;
}

#elif defined(__aarch64__)

static K_FORCE_INLINE void k_mb(void)   { __asm__ __volatile__("dmb ish" ::: "memory"); }
static K_FORCE_INLINE void k_rmb(void)  { __asm__ __volatile__("dmb ishld" ::: "memory"); }
static K_FORCE_INLINE void k_wmb(void)  { __asm__ __volatile__("dmb ishst" ::: "memory"); }
static K_FORCE_INLINE void k_isb(void)  { __asm__ __volatile__("isb" ::: "memory"); }
static K_FORCE_INLINE void k_yield(void){ __asm__ __volatile__("yield"); }
static K_FORCE_INLINE void k_wfi(void)  { __asm__ __volatile__("wfi" ::: "memory"); }
static K_FORCE_INLINE void k_wfe(void)  { __asm__ __volatile__("wfe" ::: "memory"); }

static K_FORCE_INLINE uint64_t k_cntvct(void)
{
    uint64_t v;
    __asm__ __volatile__("mrs %0, cntvct_el0" : "=r"(v));
    return v;
}

// System register access helpers (privilege dependent)
#define K_SYSREG_READ(name) \
    ({ uint64_t _v; __asm__ __volatile__("mrs %0, " #name : "=r"(_v)); _v; })
#define K_SYSREG_WRITE(name, val) \
    do { uint64_t _v = (uint64_t)(val); __asm__ __volatile__("msr " #name ", %0" :: "r"(_v) : "memory"); } while(0)

#elif defined(__riscv)

static K_FORCE_INLINE void k_mb(void)   { __asm__ __volatile__("fence iorw, iorw" ::: "memory"); }
static K_FORCE_INLINE void k_rmb(void)  { __asm__ __volatile__("fence ir, ir" ::: "memory"); }
static K_FORCE_INLINE void k_wmb(void)  { __asm__ __volatile__("fence ow, ow" ::: "memory"); }
static K_FORCE_INLINE void k_pause(void){ __asm__ __volatile__("nop"); }
static K_FORCE_INLINE void k_wfi(void)  { __asm__ __volatile__("wfi" ::: "memory"); }

static K_FORCE_INLINE uint64_t k_rdcycle(void)
{
    uint64_t v;
#if __riscv_xlen == 32
    uint32_t hi, lo, hi2;
    __asm__ __volatile__(
        "1: rdcycleh %0\n\t"
        "   rdcycle  %1\n\t"
        "   rdcycleh %2\n\t"
        "   bne %0, %2, 1b\n\t"
        : "=r"(hi), "=r"(lo), "=r"(hi2));
    v = ((uint64_t)hi << 32) | lo;
#else
    __asm__ __volatile__("rdcycle %0" : "=r"(v));
#endif
    return v;
}

#define K_CSR_READ(csr) \
    ({ uintptr_t _v; __asm__ __volatile__("csrr %0, " #csr : "=r"(_v)); _v; })
#define K_CSR_WRITE(csr, val) \
    do { uintptr_t _v = (uintptr_t)(val); __asm__ __volatile__("csrw " #csr ", %0" :: "r"(_v) : "memory"); } while(0)
#define K_CSR_SET(csr, val) \
    do { uintptr_t _v = (uintptr_t)(val); __asm__ __volatile__("csrs " #csr ", %0" :: "r"(_v) : "memory"); } while(0)
#define K_CSR_CLEAR(csr, val) \
    do { uintptr_t _v = (uintptr_t)(val); __asm__ __volatile__("csrc " #csr ", %0" :: "r"(_v) : "memory"); } while(0)

#else
// Fallback (unknown arch): provide compiler barrier only
static K_FORCE_INLINE void k_mb(void)  { K_COMPILER_BARRIER(); }
static K_FORCE_INLINE void k_rmb(void) { K_COMPILER_BARRIER(); }
static K_FORCE_INLINE void k_wmb(void) { K_COMPILER_BARRIER(); }
#endif

#endif // COMELANG_KERNEL_KUTIL_H

