#LIBC_PATH := $(shell riscv64-unknown-elf-gcc -print-libgcc-file-name)
#LIBC_DIR := $(shell dirname $(LIBC_PATH))

all: kernel.elf

kernel.elf:
	riscv64-unknown-elf-as -g -o start.o start.s
	riscv64-unknown-elf-gcc -nostdlib -c -g -O0 -ffreestanding -mcmodel=medany -o main.o main.c
	riscv64-unknown-elf-ld -g -nostdlib -T link.ld -o kernel.elf start.o main.o
#	riscv64-unknown-elf-objcopy -O binary kernel.elf kernel.bin

run: kernel.elf
	qemu-system-riscv64 -machine virt -bios none -kernel kernel.elf -m 128M -nographic

debug: kernel.elf
	qemu-system-riscv64 -machine virt -bios none -kernel kernel.elf -m 128M -nographic -S -gdb tcp::3777 &
	gdb-multiarch kernel.elf
	pkill -f qemu-system-riscv64

clean:
	rm -rf kernel.bin kernel.elf core riscv-gnu-toolchain
  
          
          

