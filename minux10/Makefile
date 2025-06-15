all:
	aarch64-none-elf-gcc -ffreestanding -O2 -g -c start.S -o start.o
	aarch64-none-elf-gcc -ffreestanding -O2 -g -c main.c  -o main.o
	aarch64-none-elf-gcc -ffreestanding -O2 -g -c swtch.S  -o swtch.o
	aarch64-none-elf-ld -T kernel.ld start.o swtch.o main.o -o kernel8.elf


run: all
	qemu-system-aarch64 -machine virt -cpu cortex-a53 -m 256M -nographic  -kernel kernel8.elf
            
debug: all
	qemu-system-aarch64 -machine virt -cpu cortex-a53 -m 256M -nographic  -kernel kernel8.elf -S -s &
	gdb-multiarch kernel8.elf

