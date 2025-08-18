// RISC-V arch helpers for freestanding kernels
// - stvec setup, CSR helpers via kutil.h, simple trap stubs

#ifndef COMELANG_KERNEL_ARCH_RISCV_H
#define COMELANG_KERNEL_ARCH_RISCV_H

#include "../kutil.h"
#include <stdint.h>

#ifdef __riscv

// Set trap vector base (direct mode)
static K_FORCE_INLINE void rv_set_stvec(void* base)
{
    uintptr_t val = ((uintptr_t)base) & ~0x3UL; // MODE=0 (direct)
    K_CSR_WRITE(stvec, val);
}

// Interrupt enable/disable (M-mode/S-mode depend)
static K_FORCE_INLINE void rv_irq_enable(void)  { K_CSR_SET(mstatus, 1 << 3 /* MIE */); }
static K_FORCE_INLINE void rv_irq_disable(void) { K_CSR_CLEAR(mstatus, 1 << 3 /* MIE */); }

// Example naked trap entry (place in .text.trap)
#define RV_TRAP_ENTRY(name) \
    void name(void) K_NAKED K_SECTION(".text.trap"); \
    void name(void)

// Example usage: 
// RV_TRAP_ENTRY(trap_vector) { __asm__ __volatile__("addi sp, sp, -128\n\t" /* save */ "jr ra"); }

#endif // __riscv

#endif // COMELANG_KERNEL_ARCH_RISCV_H

