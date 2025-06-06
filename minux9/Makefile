#CCPREFIX=riscv-none-elf-
CCPREFIX=riscv64-unknown-elf-
#CFLAGS=-march=rv64gc -mabi=lp64
CFLAGS=-march=rv64gc_zifencei -mabi=lp64d

all: kernel.elf

kernel.elf:
	$(CCPREFIX)as -g $(CFLAGS) -o start.o start.S
	$(CCPREFIX)as -g $(CFLAGS) -o swtch.o swtch.S
	$(CCPREFIX)as -g $(CFLAGS) -o trap.o trap.S
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -g -ffreestanding -mcmodel=medany -o trap_c.o trap.c
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -g -ffreestanding -mcmodel=medany -o uart.o uart.c
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -g -ffreestanding -mcmodel=medany -o plic.o plic.c
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -g -ffreestanding -mcmodel=medany -o fs.o fs.c
#	comelang -riscv -c -g -s main.c
	cp main.c main.c.c
	riscv64-unknown-elf-gcc -nostdlib -static -T hello.ld -o hello.elf hello.c
	xxd -i hello.elf > userprog.h  
	riscv64-unknown-elf-gcc -nostdlib -static -T hello2.ld -o hello2.elf hello2.c
	xxd -i hello2.elf > userprog2.h  
#	dd if=/dev/zero of=fs.img bs=1k count=512
#	dd if=hello.elf of=fs.img bs=512 seek=0 conv=notrunc
#	dd if=hello2.elf of=fs.img bs=512 seek=128 conv=notrunc
	gcc -o mkfs mkfs.c
	./mkfs fs.img

	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -O0 -g -ffreestanding -mcmodel=medany -o main.o main.c.c
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -g -O0 -T link.ld -Wl,-Map=map.txt  -mcmodel=medany -o kernel.elf start.o swtch.o trap.o trap_c.o uart.o plic.o fs.o main.o



#	$(CCPREFIX)objcopy -O binary kernel.elf kernel.bin

QEMU_OPTION=-machine virt -bios none -nographic -m 512M -kernel kernel.elf -drive file=fs.img,if=none,format=raw,id=hd0 -device virtio-blk-device,drive=hd0 -nic none

run: kernel.elf
	qemu-system-riscv64 $(QEMU_OPTION)

log: kernel.elf
	qemu-system-riscv64 $(QEMU_OPTION) -d in_asm,exec,cpu,int -D qemu.log 

debug: kernel.elf
	qemu-system-riscv64 $(QEMU_OPTION) -S -gdb tcp::3777 & 
	gdb-multiarch kernel.elf
	pkill -f qemu-system-riscv64

debug-mac: kernel.elf
	qemu-system-riscv64 $(QEMU_OPTION) -S -gdb tcp::3777 &
	gdb kernel.elf
	pkill -f qemu-system-riscv64

clean:
	rm -rf kernel.bin kernel.elf core riscv-gnu-toolchain main.o start.o swtch.o timervec.o trampoline.o trampolin2.s aaa aa aaaa xpack-riscv-none-elf-gcc-13.2.0-1 *.o qemu.log hello.elf hello2.elf *.elf

