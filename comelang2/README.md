Overview

- Outputs `grammar/parser.c`, `grammar/parser.h`, and `grammar/lexer.c` via Flex + Bison.
- Targets C17 baseline, GCC/Clang extensions, and GNU extended inline asm.
- This step only generates sources. No build/link integration is performed here.

Usage

- Run `make parser` at repo root to (re)generate the files.
- Requires `flex` and `bison` to be installed and on PATH.

Files

- `comelang.y`: Bison grammar (skeleton). Produces `parser.c` and `parser.h`.
- `comelang.l`: Flex lexer (skeleton). Produces `lexer.c`.

Notes

- The grammar accepts C17, many GCC/Clang extensions, and inline asm (GNU extended form).
- Preprocessor lines are currently skipped in the lexer; integrate with your pipeline/cpp as desired.

Examples

- Simple asm
  - `asm("nop");`
  - `asm volatile ("wfi");`

- Extended asm (outputs/inputs/clobbers)
  - `asm volatile ("add %0, %1, %2" : "=r"(out) : "r"(a), "r"(b) : "cc");`

- Extended asm with symbolic names
  - `asm ("add %[d], %[a], %[b]" : [d]"=r"(dst) : [a]"r"(lhs), [b]"r"(rhs));`

- asm goto
  - `asm goto ("b %l0" ::: : target); target:;`

- Statement expression (GCC)
  - `int x = ({ int t = 1; t + 2; });`

- Attributes for kernel/embedded
  - `__attribute__((naked)) void isr(void) { asm("...\n"); }`
  - `__attribute__((section(".init"), aligned(4096), used)) static const char k[] = "...";`
