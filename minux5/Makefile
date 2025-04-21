all:
	riscv64-unknown-elf-gcc -nostdlib -static -fno-builtin --freestanding -T link.ld -o kernel.elf main.c
	riscv64-unknown-elf-objcopy -O binary kernel.elf kernel.bin

run:
	qemu-system-riscv64 -nographic -machine virt -m 128M -kernel kernel.elf -bios none

debug:
	qemu-system-riscv64 -nographic -machine virt -m 128M -kernel kernel.elf -bios none -S -gdb tcp::3777 &
	gdb-multiarch kernel.elf
	pkill -f qemu-system-riscv64

clean:
	rm kernel.bin kernel.elf core
          
          

