// AArch64 4KB granule translation table bits (short form)

#ifndef COMELANG_KERNEL_MM_PT_AARCH64_H
#define COMELANG_KERNEL_MM_PT_AARCH64_H

#include <stdint.h>

// Descriptor types
#define A64_DESC_INVALID  0x0ULL
#define A64_DESC_BLOCK    0x1ULL  // L1/L2
#define A64_DESC_TABLE    0x3ULL  // next-level table
#define A64_DESC_PAGE     0x3ULL  // L3 (same encoding as table)

// Common attributes
#define A64_PTE_AF        (1ULL << 10) // accessed
#define A64_PTE_NG        (1ULL << 11) // not global
#define A64_PTE_SH_NS     (0ULL << 8)
#define A64_PTE_SH_OS     (2ULL << 8)
#define A64_PTE_SH_IS     (3ULL << 8)
#define A64_PTE_AP_RW_EL0 (0ULL << 6)  // RW at EL0/1
#define A64_PTE_AP_RW_EL1 (1ULL << 6)  // RW at EL1 only
#define A64_PTE_AP_RO_EL0 (2ULL << 6)  // RO at EL0/1
#define A64_PTE_AP_RO_EL1 (3ULL << 6)  // RO at EL1 only
#define A64_PTE_UXN       (1ULL << 54)
#define A64_PTE_PXN       (1ULL << 53)

// AttrIndx for MAIR
#define A64_PTE_ATTRIDX(idx)  ((uint64_t)(idx) << 2)

#define A64_PTE_ADDR_MASK  0x0000FFFFFFFFF000ULL

static inline uint64_t a64_desc_block(uint64_t pa, uint64_t attr)
{ return (pa & A64_PTE_ADDR_MASK) | A64_DESC_BLOCK | attr; }
static inline uint64_t a64_desc_table(uint64_t pa)
{ return (pa & A64_PTE_ADDR_MASK) | A64_DESC_TABLE; }
static inline uint64_t a64_desc_page(uint64_t pa, uint64_t attr)
{ return (pa & A64_PTE_ADDR_MASK) | A64_DESC_PAGE | attr; }

#endif // COMELANG_KERNEL_MM_PT_AARCH64_H

