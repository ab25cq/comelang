// AArch64 arch helpers for freestanding kernels
// - Vector base, DAIF masks, barriers, simple vector stubs

#ifndef COMELANG_KERNEL_ARCH_AARCH64_H
#define COMELANG_KERNEL_ARCH_AARCH64_H

#include "../kutil.h"
#include <stdint.h>

#ifdef __aarch64__

// Set vector base address (EL1)
static K_FORCE_INLINE void a64_set_vbar_el1(void* base)
{
    K_SYSREG_WRITE(VBAR_EL1, base);
    k_isb();
}

// Interrupt mask helpers (DAIF)
static K_FORCE_INLINE void a64_daif_set(uint64_t mask)
{
    __asm__ __volatile__("msr daifset, %0" :: "i"(0xF & mask) : "memory");
}
static K_FORCE_INLINE void a64_daif_clear(uint64_t mask)
{
    __asm__ __volatile__("msr daifclr, %0" :: "i"(0xF & mask) : "memory");
}

#define A64_DAIF_D 0x8
#define A64_DAIF_A 0x4
#define A64_DAIF_I 0x2
#define A64_DAIF_F 0x1

// Example naked vector entry (place in .vectors, 2KB aligned)
#define A64_VECTOR(name) \
    void name(void) K_NAKED K_SECTION(".vectors") K_ALIGNED(2048); \
    void name(void)

// Example usage: 
// A64_VECTOR(reset_vector) { __asm__ __volatile__("b _start"); }

#endif // __aarch64__

#endif // COMELANG_KERNEL_ARCH_AARCH64_H

