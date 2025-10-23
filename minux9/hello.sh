riscv64-unknown-elf-gcc \
  -march=rv64gc -mabi=lp64 \
  -nostdlib -static \
  -T hello.ld \
  -o hello.elf hello.S

temu hello.cfg

