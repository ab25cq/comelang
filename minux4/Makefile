ARCH = riscv64
CROSS = riscv64-unknown-elf
CFLAGS = -Wall -Werror -nostdlib -nostartfiles -ffreestanding -O2 -fno-pic -mcmodel=medany

all: kernel.elf

kernel.elf: entry.o main.o mmu.o link.ld
	$(CROSS)-ld -T link.ld -o kernel.elf entry.o main.o mmu.o

entry.o: entry.S
	$(CROSS)-as -o $@ $<

main.o: main.c
	$(CROSS)-gcc $(CFLAGS) -c -o $@ $<

mmu.o: mmu.c
	$(CROSS)-gcc $(CFLAGS) -c -o $@ $<

run: kernel.elf
	qemu-system-riscv64 -machine virt -nographic -kernel kernel.elf -bios none -d int

clean:
	rm -f *.o *.elf

