// x86_64 4K page table bits (SV48/SV57 excluded; this is classic x86-64)

#ifndef COMELANG_KERNEL_MM_PT_X86_64_H
#define COMELANG_KERNEL_MM_PT_X86_64_H

#include <stdint.h>

#define X64_PAGE_SHIFT   12ULL
#define X64_PAGE_SIZE    (1ULL << X64_PAGE_SHIFT)

// Indices
#define X64_PML4_IDX(va)  ((((uint64_t)(va)) >> 39) & 0x1FF)
#define X64_PDPT_IDX(va)  ((((uint64_t)(va)) >> 30) & 0x1FF)
#define X64_PD_IDX(va)    ((((uint64_t)(va)) >> 21) & 0x1FF)
#define X64_PT_IDX(va)    ((((uint64_t)(va)) >> 12) & 0x1FF)

// PTE flags
#define X64_PTE_P   (1ULL << 0)  // present
#define X64_PTE_W   (1ULL << 1)  // writable
#define X64_PTE_U   (1ULL << 2)  // user
#define X64_PTE_PWT (1ULL << 3)  // write-through
#define X64_PTE_PCD (1ULL << 4)  // cache-disable
#define X64_PTE_A   (1ULL << 5)  // accessed
#define X64_PTE_D   (1ULL << 6)  // dirty (on PTE)
#define X64_PTE_PS  (1ULL << 7)  // page size (on PD/PT)
#define X64_PTE_G   (1ULL << 8)  // global
#define X64_PTE_XD  (1ULL << 63) // execute-disable (if NX enabled)

#define X64_PTE_ADDR_MASK 0x000FFFFFFFFFF000ULL

static inline uint64_t x64_pte_make(uint64_t pa, uint64_t flags)
{ return (pa & X64_PTE_ADDR_MASK) | flags; }

#endif // COMELANG_KERNEL_MM_PT_X86_64_H

