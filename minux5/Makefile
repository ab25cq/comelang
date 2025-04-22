all:
	riscv64-unknown-elf-as -g -o start.o start.s
	riscv64-unknown-elf-gcc -nostdlib -c -g -O0 -ffreestanding -o main.o main.c
	riscv64-unknown-elf-ld -nostdlib -T link.ld -o kernel.elf start.o main.o
#	riscv64-unknown-elf-objcopy -O binary kernel.elf kernel.bin

run:
	qemu-system-riscv64 -nographic -machine virt -m 128M -kernel kernel.elf -bios none

debug:
	qemu-system-riscv64 -nographic -machine virt -m 128M -bios kernel.elf -S -gdb tcp::3777 &
#	qemu-system-riscv64 -nographic -machine virt -m 128M -kernel kernel.elf -bios none -S -gdb tcp::3777 &
#	qemu-system-riscv64 -entry 0x80000000 -nographic -machine virt -m 128M -kernel kernel.elf -bios none -S -gdb tcp::3777 &
#	qemu-system-riscv32 -smp 1 -nographic -serial mon:stdio --no-reboot -m 128 -machine virt,aclint=on -bios none -kernel kernel.elf
	gdb-multiarch kernel.elf
	pkill -f qemu-system-riscv64

clean:
	rm -f kernel.bin kernel.elf core
          
          

