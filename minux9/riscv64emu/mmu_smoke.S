.section .text
.globl _start
_start:
    # t0 = &rootpt (physical address; loader wrote it at this VA=PA)
    la      t0, rootpt

    # Build 1GiB identity map for VA range 0x8000_0000..0xBFFF_FFFF
    # SV39 L2 leaf: index 2 (bits 38..30 of 0x8000_0000 is 2)
    # PTE: PPN2 = (0x8000_0000 >> 30), PPN1=PPN0=0, RWX=1, V=1
    li      t1, 0x80000000         # phys base
    srli    t1, t1, 30             # PPN2
    slli    t1, t1, 28             # shift into PPN2 field (bits 28..)
    li      t2, 0xF                # V|R|W|X = 0b1111
    or      t1, t1, t2             # t1 = PTE value
    sd      t1, 16(t0)             # rootpt[2] = t1 (2*8 = 16)

    # satp = MODE=Sv39(8) | PPN(rootpt>>12)
    srli    t3, t0, 12
    li      t4, 8
    slli    t4, t4, 60
    or      t3, t3, t4
    csrw    satp, t3
    sfence.vma x0, x0

    # Test: store/load at mapped VA 0x8000_1000
    li      t5, 0x80001000
    li      t6, 0x5a
    sb      t6, 0(t5)
    lb      a0, 0(t5)
    li      t6, 0x5a
    beq     a0, t6, 1f
    li      a0, 1                 # fail -> return 1
    j       2f
1:
    li      a0, 42                # success -> return 42
2:
    ecall                         # emulator halts and returns a0

.section .bss
.align 12
.globl rootpt
rootpt:
    .zero 4096                    # 4KiB root page table (zero-initialized)

