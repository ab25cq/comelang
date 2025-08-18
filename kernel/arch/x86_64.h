// x86_64 arch helpers for freestanding kernels
// - IDT/GDT loaders, interrupts on/off, ISR declarations

#ifndef COMELANG_KERNEL_ARCH_X86_64_H
#define COMELANG_KERNEL_ARCH_X86_64_H

#include "../kutil.h"
#include <stdint.h>

#ifdef __x86_64__

struct x86_interrupt_frame {
    uint64_t rip;
    uint64_t cs;
    uint64_t rflags;
    uint64_t rsp;
    uint64_t ss;
};

// Interrupt on/off
static K_FORCE_INLINE void x86_irq_enable(void) { __asm__ __volatile__("sti" ::: "memory"); }
static K_FORCE_INLINE void x86_irq_disable(void){ __asm__ __volatile__("cli" ::: "memory"); }

// Load IDT/GDT from pointer ({size, base})
static K_FORCE_INLINE void x86_lidt(const void* desc) { __asm__ __volatile__("lidt (%0)" :: "r"(desc) : "memory"); }
static K_FORCE_INLINE void x86_lgdt(const void* desc) { __asm__ __volatile__("lgdt (%0)" :: "r"(desc) : "memory"); }

// Interrupt service routine declarations (GCC/Clang)
#define X86_ISR(name) \
    __attribute__((interrupt)) void name(struct x86_interrupt_frame* frame)

#define X86_ISR_ERR(name) \
    __attribute__((interrupt)) void name(struct x86_interrupt_frame* frame, uint64_t error_code)

// Example:
// X86_ISR(timer_isr) { /* ack PIC/APIC; EOI; ... */ }
// X86_ISR_ERR(page_fault) { /* handle fault */ }

#endif // __x86_64__

#endif // COMELANG_KERNEL_ARCH_X86_64_H

