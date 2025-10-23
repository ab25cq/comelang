CCPREFIX=riscv64-unknown-elf-
#CFLAGS=-march=rv64gc -mabi=lp64
#CHILD_CFLAGS=-I. -fno-omit-frame-pointer #-momit-leaf-frame-pointer #-mstack-alignment=16
CFLAGS_AS=-march=rv64gc -mabi=lp64
CFLAGS=-march=rv64gc -mabi=lp64 -msmall-data-limit=0 -fno-pic -fno-pie -Wl,-no-pie
CHILD_CFLAGS=-ffreestanding -fno-stack-protector -fno-builtin -fno-pic -fno-pie -nostdlib -mcmodel=medany -static -nostartfiles  -Wl,-e,_start -Wl,-no-pie -msmall-data-limit=0 -march=rv64gc -mabi=lp64 -Tuser.ld -Wno-incompatible-pointer-types minux.o

all: kernel.elf 

crt0.o: crt0.S
	# build minimal userland crt0 that calls exit(main())
	$(CCPREFIX)gcc $(CFLAGS) -c -o crt0.o crt0.S

minux.o: minux.c
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -g -ffreestanding -mcmodel=medany -o minux.o minux.c

kernel.elf: minux.o crt0.o cc
	$(CCPREFIX)as -g $(CFLAGS_AS) -o entry.o entry.S
	$(CCPREFIX)as -g $(CFLAGS_AS) -o trap.o trap.S
	$(CCPREFIX)as -g $(CFLAGS_AS) -o userret.o userret.S
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -g -ffreestanding -mcmodel=medany -o start.o start.c
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -g -ffreestanding -mcmodel=medany -o fs.o fs.c
	$(CCPREFIX)gcc $(CFLAGS) -S -nostdlib -c -g -ffreestanding -mcmodel=medany -o fs.S fs.c
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -g -ffreestanding -mcmodel=medany -o trap_c.o trap.c
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -g -ffreestanding -mcmodel=medany -o plic.o plic.c

	# build minimal userland crt0 that calls exit(main())
	$(CCPREFIX)gcc $(CFLAGS) -c -o crt0.o crt0.S

	$(CCPREFIX)gcc $(CFLAGS) -O0 -nostdlib -static -o cat -g cat.c -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -O0 -nostdlib -static -o sleep -g sleep.c -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -O0 -nostdlib -static -o test -g test.c -mcmodel=medany $(CHILD_CFLAGS)
#	$(CCPREFIX)gcc $(CFLAGS) -ffreestanding -fno-stack-protector -fno-builtin -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o comelang  crt0.o comelang.c.c $(CHILD_CFLAGS) -lgcc -fno-omit-frame-pointer 
	$(CCPREFIX)gcc $(CFLAGS) -ffreestanding -fno-stack-protector -fno-builtin -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o cpp  crt0.o cpp.c $(CHILD_CFLAGS) -lgcc -fno-omit-frame-pointer 
	$(CCPREFIX)gcc $(CFLAGS) -O0 -nostdlib -static -o uname -g uname.c -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o cat crt0.o cat.c $(CHILD_CFLAGS)
#	$(CCPREFIX)gcc -S $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o b.s b.c

#	$(CCPREFIX)gcc $(CFLAGS) -O0 -nostdlib -static -o cc -g cc.c -mcmodel=medany $(CHILD_CFLAGS)
#	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o cc crt0.o cc.c $(CHILD_CFLAGS)

	$(CCPREFIX)gcc $(CFLAGS) -O0 -nostdlib -static -o hello -g hello.c -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o hello crt0.o hello.c $(CHILD_CFLAGS)

	$(CCPREFIX)gcc $(CFLAGS) -O0 -nostdlib -static -o echo -g echo.c -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o echo crt0.o echo.c $(CHILD_CFLAGS)

#	comelang -S -bare grep.c
#	$(CCPREFIX)gcc -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o grep grep.c.c $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o grep crt0.o grep.c $(CHILD_CFLAGS)

	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o readelf crt0.o readelf.c $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o objdump crt0.o objdump.c $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o hexdump crt0.o hexdump.c $(CHILD_CFLAGS)

	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -O0 -static -o hello3.elf -g hello3.c -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o hello3.elf crt0.o hello3.c $(CHILD_CFLAGS)

	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -O0 -static -o hello4.elf -g hello4.c -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o hello4.elf crt0.o hello4.c $(CHILD_CFLAGS)


	$(CCPREFIX)gcc $(CFLAGS) -O0 -nostdlib -static -o ls -g ls.c -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o ls crt0.o ls.c $(CHILD_CFLAGS)

	# mkdir user program
	$(CCPREFIX)gcc $(CFLAGS) -O0 -nostdlib -static -o mkdir -g mkdir.c -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o mkdir crt0.o mkdir.c $(CHILD_CFLAGS)

	# rmdir user program
	$(CCPREFIX)gcc $(CFLAGS) -O0 -nostdlib -static -o rmdir -g rmdir.c -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o rmdir crt0.o rmdir.c $(CHILD_CFLAGS)

	$(CCPREFIX)gcc $(CFLAGS) -O0 -nostdlib -static -o pwd -g pwd.c -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o pwd crt0.o pwd.c $(CHILD_CFLAGS)

	# touch user program
	$(CCPREFIX)gcc $(CFLAGS) -O0 -nostdlib -static -o touch -g touch.c -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o touch crt0.o touch.c $(CHILD_CFLAGS)

	# more user program
	$(CCPREFIX)gcc $(CFLAGS) -O0 -nostdlib -static -o more -g more.c -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o more crt0.o more.c $(CHILD_CFLAGS)

	# vi user program (very minimal)
	$(CCPREFIX)gcc $(CFLAGS) -O0 -nostdlib -static -o vi -g vi.c -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o vi crt0.o vi.c $(CHILD_CFLAGS)

	# in-OS assembler and linker
	$(CCPREFIX)gcc $(CFLAGS) -ffreestanding -fno-stack-protector -fno-builtin -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o as  crt0.o as.c $(CHILD_CFLAGS) -lgcc -fno-omit-frame-pointer 
	$(CCPREFIX)gcc $(CFLAGS) -ffreestanding -fno-stack-protector -fno-builtin -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o ld crt0.o ld.c $(CHILD_CFLAGS) -lgcc -fno-omit-frame-pointer
	$(CCPREFIX)gcc $(CFLAGS) -ffreestanding -fno-stack-protector -fno-builtin -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o ld2 crt0.o ld2.c $(CHILD_CFLAGS) -lgcc -fno-omit-frame-pointer

	# minimal in-OS C compiler: cc
#	$(CCPREFIX)gcc $(CFLAGS) -O0 -nostdlib -static -o cc -g cc.c -mcmodel=medany $(CHILD_CFLAGS)
#	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o cc crt0.o cc.c $(CHILD_CFLAGS)


	$(CCPREFIX)gcc $(CFLAGS) -I. -nostdlib -S -O0 -static -o sh.S -g sh.c -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -I. -nostdlib -O0 -static -o sh.elf -I. -g sh.c -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o sh.elf crt0.o sh.c $(CHILD_CFLAGS)
	cp sh.elf sh
	xxd -i sh.elf > sh.h  

	gcc -o mkfs mkfs.c
	./mkfs fs.img

	dd if=/dev/zero of=fs.img bs=1k count=512
	dd if=hello of=fs.img bs=512 seek=0 conv=notrunc
	dd if=cat of=fs.img bs=512 seek=0 conv=notrunc
	dd if=echo of=fs.img bs=512 seek=0 conv=notrunc
	dd if=grep of=fs.img bs=512 seek=128 conv=notrunc
	gcc -o mkfs mkfs.c
	./mkfs fs.img

	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -O0 -g -ffreestanding -mcmodel=medany -std=gnu11 -o main.o main.c
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -O0 -g -ffreestanding -mcmodel=medany -std=gnu11 -o libc.o libc.c
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -O0 -g -ffreestanding -mcmodel=medany -std=gnu11 -o syscall.o syscall.c
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -g -O0 -T kernel.ld -Wl,-Map=map.txt -mcmodel=medany -o kernel.elf entry.o start.o userret.o trap.o fs.o plic.o trap_c.o main.o libc.o syscall.o

	$(CCPREFIX)objcopy -O binary kernel.elf kernel.bin

#QEMU_OPTION=-machine virt -bios none -nographic -m 512M -kernel kernel.elf -nic none
QEMU_OPTION=-machine virt -bios none -nographic -m 1024M -kernel kernel.elf -drive file=fs.img,if=none,format=raw,id=hd0 -device virtio-blk-device,drive=hd0 -nic none

run: kernel.elf 
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
	rm -rf kernel.bin kernel.elf core riscv-gnu-toolchain main.o start.o timervec.o trampoline.o trampolin2.s aaa aa aaaa xpack-riscv-none-elf-gcc-13.2.0-1 *.o qemu.log *.elf mkfs mkfs riscv-isa-sim/ riscv-pk fs.img *.bin cat grep echo login pwd ls mkdir rmdir more vi toycc toyvm cc hello as ld qemu-run.log minux.o readelf objdump hexdump comelang cpp sh test uname ld2

# Always (re)build the filesystem image so updated userland like pwd is included

cc: crt0.o
	$(CCPREFIX)gcc $(CFLAGS) -ffreestanding -fno-stack-protector -fno-builtin -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o cc \
		crt0.o cc.c $(CHILD_CFLAGS) -DCC_S_ONLY -lgcc -fno-omit-frame-pointer 
#	cc-codegen.c cc-parse.c cc-preprocess.c \
#		cc-tokenize.c cc-type.c cc-hashmap.c cc-string.c \
#		cc-unicode.c 
