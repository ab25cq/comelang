#LIBC_PATH := $(shell riscv64-unknown-elf-gcc -print-libgcc-file-name)
#LIBC_DIR := $(shell dirname $(LIBC_PATH))

all: kernel.elf

kernel.elf:
	riscv64-unknown-elf-as -g -o start.o start.S
	riscv64-unknown-elf-as -g -o swtch.o swtch.S
	riscv64-unknown-elf-as -g -o timervec.o timervec.S
	riscv64-unknown-elf-gcc -nostdlib -c -g -ffreestanding -mcmodel=medany -o main.o main.c
	riscv64-unknown-elf-gcc -nostdlib -g -O0 -T link.ld -Wl,-Map=map.txt -o kernel.elf start.o swtch.o timervec.o main.o



#	riscv64-unknown-elf-objcopy -O binary kernel.elf kernel.bin

run: kernel.elf
	qemu-system-riscv64 -machine virt -bios none -kernel kernel.elf -m 128M -nographic

debug: kernel.elf
	qemu-system-riscv64 -machine virt -bios none -kernel kernel.elf -m 128M -nographic -S -gdb tcp::3777 &
	gdb-multiarch kernel.elf
	pkill -f qemu-system-riscv64

clean:
	rm -rf kernel.bin kernel.elf core riscv-gnu-toolchain main.o start.o swtch.o timervec.o trampoline.o trampolin2.s
  
          
          

