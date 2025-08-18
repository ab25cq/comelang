// RISC-V Physical Memory Protection helpers (machine mode)

#ifndef COMELANG_KERNEL_MM_PMP_RISCV_H
#define COMELANG_KERNEL_MM_PMP_RISCV_H

#include <stdint.h>
#include "../kutil.h"

#ifdef __riscv

// PMP config bits
#define PMP_R    (1u << 0)
#define PMP_W    (1u << 1)
#define PMP_X    (1u << 2)
#define PMP_A_OFF  (0u << 3)
#define PMP_A_TOR  (1u << 3)
#define PMP_A_NA4  (2u << 3)
#define PMP_A_NAPOT (3u << 3)
#define PMP_L    (1u << 7)

// Write PMPADDRi (i: 0..15) and PMPCFGn (n: 0..3) via CSRs
static inline void pmp_write_addr(unsigned index, uintptr_t addr)
{
    switch(index) {
    case 0: K_CSR_WRITE(pmpaddr0, addr); break; case 1: K_CSR_WRITE(pmpaddr1, addr); break;
    case 2: K_CSR_WRITE(pmpaddr2, addr); break; case 3: K_CSR_WRITE(pmpaddr3, addr); break;
    case 4: K_CSR_WRITE(pmpaddr4, addr); break; case 5: K_CSR_WRITE(pmpaddr5, addr); break;
    case 6: K_CSR_WRITE(pmpaddr6, addr); break; case 7: K_CSR_WRITE(pmpaddr7, addr); break;
    case 8: K_CSR_WRITE(pmpaddr8, addr); break; case 9: K_CSR_WRITE(pmpaddr9, addr); break;
    case 10: K_CSR_WRITE(pmpaddr10, addr); break; case 11: K_CSR_WRITE(pmpaddr11, addr); break;
    case 12: K_CSR_WRITE(pmpaddr12, addr); break; case 13: K_CSR_WRITE(pmpaddr13, addr); break;
    case 14: K_CSR_WRITE(pmpaddr14, addr); break; case 15: K_CSR_WRITE(pmpaddr15, addr); break;
    default: break; }
}

static inline void pmp_write_cfg(unsigned group, uint32_t cfg)
{
    switch(group) {
    case 0: K_CSR_WRITE(pmpcfg0, cfg); break; case 1: K_CSR_WRITE(pmpcfg1, cfg); break;
    case 2: K_CSR_WRITE(pmpcfg2, cfg); break; case 3: K_CSR_WRITE(pmpcfg3, cfg); break;
    default: break; }
}

// Encode NAPOT address from base/size (size must be power of two, >= 8)
static inline uintptr_t pmp_napot_encode(uintptr_t base, uintptr_t size)
{
    uintptr_t n = (size / 2) - 1; // encode size bits
    return ((base >> 2) | (n >> 3));
}

#endif // __riscv

#endif // COMELANG_KERNEL_MM_PMP_RISCV_H

