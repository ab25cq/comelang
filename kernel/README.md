Kernel/Embedded Utilities

- `kernel/kutil.h` provides attribute macros, sections, fences/barriers, MMIO helpers, and inline asm-based intrinsics for x86_64, AArch64, and RISC-V.
- Header-only; include it from freestanding kernels or embedded projects.

Architecture Helpers

- `kernel/arch/x86_64.h`: IDT/GDT loaders, `X86_ISR`/`X86_ISR_ERR` (GCC `interrupt` attribute), IRQ on/off.
- `kernel/arch/aarch64.h`: `a64_set_vbar_el1`, DAIF mask helpers, `A64_VECTOR` macro for vector table.
- `kernel/arch/riscv.h`: `rv_set_stvec`, IRQ on/off via CSR, `RV_TRAP_ENTRY` macro.

Memory Management

- `kernel/mm/pt_x86_64.h`: x86_64 PTE bits and helpers.
- `kernel/mm/pt_aarch64.h`: AArch64 4K granule descriptor helpers.
- `kernel/mm/pmp_riscv.h`: RISC-V PMP config/address helpers.

SMP and Ordering

- `kernel/smp.h`: portable atomic fences + arch fences (publish/consume patterns).

Highlights

- Attributes: `K_SECTION`, `K_ALIGNED`, `K_PACKED`, `K_NAKED`, `K_USED`, `K_WEAK`, `K_NOINLINE`, `K_FORCE_INLINE`, `K_HOT`, `K_COLD`, `K_PURE`, `K_CONSTFUNC`, `K_RETURNS_NONNULL`, `K_FALLTHROUGH`.
- Barriers: `K_COMPILER_BARRIER`, `k_mb`, `k_rmb`, `k_wmb`, plus `k_isb` on AArch64.
- CPU chill: `k_pause` (x86), `k_yield` (AArch64), `k_wfi/wfe` (AArch64), `k_wfi` (RISC-V).
- Timestamps: `k_rdtsc` (x86), `k_cntvct` (AArch64), `k_rdcycle` (RISC-V).
- System register/CSR access: `K_SYSREG_READ/WRITE` (AArch64), `K_CSR_*` (RISC-V).
- MMIO accessors: `mmio_read{8,16,32,64}`, `mmio_write{8,16,32,64}`.

Examples

- Place in a section and keep symbol
  - `K_SECTION(".init") K_USED void arch_init(void) { /*...*/ }`

- Align and pack a structure
  - `struct K_ALIGNED(64) K_PACKED page { uint8_t data[4096]; };`

- Memory barrier and compiler barrier
  - `k_mb(); K_COMPILER_BARRIER();`

- Inline asm with clobbers
  - `asm volatile ("dsb sy" ::: "memory");`

- Read timer/cycle counter
  - `uint64_t t = k_rdtsc(); // x86`
  - `uint64_t v = k_cntvct(); // AArch64`
  - `uint64_t c = k_rdcycle(); // RISC-V`

- x86_64 ISR (interrupt attribute)
  - `#include "kernel/arch/x86_64.h"`
  - `X86_ISR(timer_isr) { /* ack EOI */ }`
  - `X86_ISR_ERR(page_fault) { /* use error_code */ }`

- AArch64 vector base and naked vector
  - `#include "kernel/arch/aarch64.h"`
  - `A64_VECTOR(reset_vector) { __asm__("b _start"); }`
  - `a64_set_vbar_el1(reset_vector);`

- RISC-V trap vector
  - `#include "kernel/arch/riscv.h"`
  - `RV_TRAP_ENTRY(trap) { __asm__("jr ra"); }`
  - `rv_set_stvec(trap);`

Notes

- Some helpers require privileged execution (e.g., AArch64 system registers, RISC-V CSR). Use only in the appropriate exception level/privileged mode.
- On unknown architectures, barriers degrade to compiler-only barriers.
