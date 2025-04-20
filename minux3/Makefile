
all:
	aarch64-none-elf-as -o boot.o boot.S
	aarch64-none-elf-gcc -ffreestanding -c main.c uart.c
	aarch64-none-elf-ld -Ttext=0x40000000 -o kernel.elf boot.o main.o uart.o
	aarch64-none-elf-objcopy -O binary kernel.elf kernel.img

clean:
	rm -rf *.o kernel.elf kernel.img

