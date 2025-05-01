CCPREFIX=riscv-none-elf-
#CCPREFIX=riscv64-unknown-elf-
CFLAGS=-march=rv64gc -mabi=lp64
#CFLAGS=

all: kernel.elf

kernel.elf:
	$(CCPREFIX)as -g $(CFLAGS) -o start.o start.S
	$(CCPREFIX)as -g $(CFLAGS) -o swtch.o swtch.S
	$(CCPREFIX)as -g $(CFLAGS) -o timervec.o timervec.S
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -g -ffreestanding -mcmodel=medany -o main.o main.c
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -g -O0 -T link.ld -Wl,-Map=map.txt -o kernel.elf start.o swtch.o timervec.o main.o



#	$(CCPREFIX)objcopy -O binary kernel.elf kernel.bin

run: kernel.elf
	qemu-system-riscv64 -machine virt -bios none -kernel kernel.elf -m 128M -nographic

debug: kernel.elf
	qemu-system-riscv64 -machine virt -bios none -kernel kernel.elf -m 128M -nographic -S -gdb tcp::3777 &
	gdb-multiarch kernel.elf
	pkill -f qemu-system-riscv64

clean:
	rm -rf kernel.bin kernel.elf core riscv-gnu-toolchain main.o start.o swtch.o timervec.o trampoline.o trampolin2.s aaa aa aaaa xpack-riscv-none-elf-gcc-13.2.0-1
  
          
          

