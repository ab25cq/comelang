#CCPREFIX=riscv-none-elf-
CCPREFIX=riscv64-unknown-elf-
#CFLAGS=-march=rv64gc -mabi=lp64
CFLAGS=

all: kernel.elf

kernel.elf:
	$(CCPREFIX)as -g $(CFLAGS) -o start.o start.S
	$(CCPREFIX)as -g $(CFLAGS) -o swtch.o swtch.S
	$(CCPREFIX)as -g $(CFLAGS) -o trap.o trap.S
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -g -ffreestanding -mcmodel=medany -o trap_c.o trap.c
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -g -ffreestanding -mcmodel=medany -o uart.o uart.c
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -g -ffreestanding -mcmodel=medany -o plic.o plic.c
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -g -ffreestanding -mcmodel=medany -o mmu.o mmu.c
	comelang -riscv -c -g -s main.c
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -g -ffreestanding -mcmodel=medany -o main.o main.c.c
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -g -O0 -T link.ld -Wl,-Map=map.txt  -mcmodel=medany -o kernel.elf start.o swtch.o trap.o trap_c.o uart.o plic.o mmu.o main.o 



#	$(CCPREFIX)objcopy -O binary kernel.elf kernel.bin

run: kernel.elf
	qemu-system-riscv64 -machine virt -bios none -kernel kernel.elf -m 128M -nographic -serial mon:stdio > aaa

debug: kernel.elf
	qemu-system-riscv64 -machine virt -bios none -kernel kernel.elf -m 128M -nographic -S -gdb tcp::3777 &
	gdb-multiarch kernel.elf
	pkill -f qemu-system-riscv64

debug-mac: kernel.elf
	qemu-system-riscv64 -machine virt -bios none -kernel kernel.elf -m 128M -nographic -S -gdb tcp::3777 &
	gdb kernel.elf
	pkill -f qemu-system-riscv64

clean:
	rm -rf kernel.bin kernel.elf core riscv-gnu-toolchain main.o start.o swtch.o timervec.o trampoline.o trampolin2.s aaa aa aaaa xpack-riscv-none-elf-gcc-13.2.0-1
  
          
          

