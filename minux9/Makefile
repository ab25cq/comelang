CCPREFIX=riscv64-unknown-elf-
CFLAGS=-march=rv64gc -mabi=lp64
CHILD_CFLAGS=-I. -fno-omit-frame-pointer #-momit-leaf-frame-pointer #-mstack-alignment=16

all: kernel.elf

kernel.elf:
	$(CCPREFIX)as -g $(CFLAGS) -o entry.o entry.S
	$(CCPREFIX)as -g $(CFLAGS) -o trap.o trap.S
	$(CCPREFIX)as -g $(CFLAGS) -o userret.o userret.S
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -g -ffreestanding -mcmodel=medany -o start.o start.c
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -g -ffreestanding -mcmodel=medany -o fs.o fs.c
	$(CCPREFIX)gcc $(CFLAGS) -S -nostdlib -c -g -ffreestanding -mcmodel=medany -o fs.S fs.c
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -g -ffreestanding -mcmodel=medany -o trap_c.o trap.c
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -g -ffreestanding -mcmodel=medany -o plic.o plic.c

	$(CCPREFIX)gcc -O0 -nostdlib -static -o cat -g cat.c -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,main -o cat cat.c $(CHILD_CFLAGS)
	xxd -i cat > cat.h  

	$(CCPREFIX)gcc -O0 -nostdlib -static -o echo -g echo.c -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,main -o echo echo.c $(CHILD_CFLAGS)
	xxd -i echo > echo.h  

#	comelang -S -bare grep.c
#	$(CCPREFIX)gcc -Tuser.ld -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,main -o grep grep.c.c $(CHILD_CFLAGS)
	$(CCPREFIX)gcc -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,main -o grep grep.c $(CHILD_CFLAGS)

	$(CCPREFIX)gcc -nostdlib -O0 -static -o hello3.elf -g hello3.c -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,main -o hello3.elf hello3.c $(CHILD_CFLAGS)

	$(CCPREFIX)gcc -nostdlib -O0 -static -o hello4.elf -g hello4.c -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,main -o hello4.elf hello4.c $(CHILD_CFLAGS)

	$(CCPREFIX)gcc -I. -nostdlib -S -O0 -static -o msh.S -g msh.c -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc -I. -nostdlib -O0 -static -o msh.elf -I. -g msh.c -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,main -o msh.elf msh.c $(CHILD_CFLAGS)
	xxd -i msh.elf > msh.h  

	dd if=/dev/zero of=fs.img bs=1k count=512
	dd if=cat of=fs.img bs=512 seek=0 conv=notrunc
	dd if=echo of=fs.img bs=512 seek=0 conv=notrunc
	dd if=grep of=fs.img bs=512 seek=128 conv=notrunc
	gcc -o mkfs mkfs.c
	./mkfs fs.img

#	comelang -S -bare main.c
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -O0 -g -ffreestanding -mcmodel=medany -std=gnu11 -o main.o main.c
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -g -O0 -T link.ld -Wl,-Map=map.txt -mcmodel=medany -o kernel.elf entry.o start.o userret.o trap.o fs.o plic.o trap_c.o main.o 

	$(CCPREFIX)objcopy -O binary kernel.elf kernel.bin

#QEMU_OPTION=-machine virt -bios none -nographic -m 512M -kernel kernel.elf -nic none
QEMU_OPTION=-machine virt -bios none -nographic -m 512M -kernel kernel.elf -drive file=fs.img,if=none,format=raw,id=hd0 -device virtio-blk-device,drive=hd0 -nic none

run: kernel.elf
#	./temu kernel.cfg
	qemu-system-riscv64 $(QEMU_OPTION)

log: kernel.elf
	qemu-system-riscv64 $(QEMU_OPTION) -d in_asm,exec,cpu,int -D qemu.log 

debug: kernel.elf
	qemu-system-riscv64 $(QEMU_OPTION) -S -gdb tcp::3777 & 
	gdb-multiarch kernel.elf
	pkill -f qemu

debug-mac: kernel.elf
	qemu-system-riscv64 $(QEMU_OPTION) -S -gdb tcp::3777 & 
	gdb kernel.elf
	pkill -f qemu

clean:
	rm -rf kernel.bin kernel.elf core riscv-gnu-toolchain main.o start.o timervec.o trampoline.o trampolin2.s aaa aa aaaa xpack-riscv-none-elf-gcc-13.2.0-1 *.o qemu.log *.elf mkfs mkfs riscv-isa-sim/ riscv-pk fs.img *.bin cat grep echo

