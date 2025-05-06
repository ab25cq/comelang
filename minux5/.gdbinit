file kernel.elf
dir .
target remote localhost:3777
set architecture riscv:rv64
set disassemble-next-line on
layout asm
layout src
layout regs
list
define va2pa
  set $pte = walk(gProc[0]->pagetable, $arg0, 0)
  if $pte == 0
    printf "PTE not found for VA = 0x%lx\n", $arg0
  else
    set $pa = ((*$pte >> 10) << 12) | ($arg0 & 0xFFF)
    printf "VA 0x%lx -> PA 0x%lx\n", $arg0, $pa
    x/4gx $pa
  end
end

