CFLAGS = -Wall -O2 -ffreestanding -nostdlib -mcpu=cortex-a53 -g -Wl,-Ttext=0x40000000

all:
	aarch64-none-elf-gcc $(CFLAGS) -c start.S -o start.o
	aarch64-none-elf-gcc $(CFLAGS) -c main.c  -o main.o
	aarch64-none-elf-gcc $(CFLAGS) -c switch.S  -o switch.o
	aarch64-none-elf-ld -nostdlib -Ttext=0x40000000 -T linker.ld start.o switch.o main.o -o kernel.elf
	aarch64-none-elf-objcopy -O binary kernel.elf kernel.img

run: all
	qemu-system-aarch64 -M virt -cpu cortex-a53 -nographic -kernel kernel.img -nographic
            
debug: all
	qemu-system-aarch64 -machine virt -cpu cortex-a53 -m 256M -nographic  -kernel kernel.img -S -s &
	gdb kernel.elf

image: all

clean:
	rm -f *.o kernel.elf kernel8.elf kernel.img
