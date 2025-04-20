// mmu.h
#pragma once

#include <stdint.h>

#define PGSIZE 4096
#define PGSHIFT 12
#define PTE_V (1L << 0)
#define PTE_R (1L << 1)
#define PTE_W (1L << 2)
#define PTE_X (1L << 3)
#define PTE_U (1L << 4)

#define SATP_SV39 (8L << 60)

static inline void w_satp(uint64_t x) {
    asm volatile("csrw satp, %0" : : "r"(x));
}

static inline void sfence_vma() {
    asm volatile("sfence.vma");
}

void init_mmu();

#define MAKE_SATP(pagetable) (SATP_SV39 | (((uint64_t)(pagetable)) >> 12))

