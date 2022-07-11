#include <palmos.h>
#include "printf.h"



#define FFTHR		*((volatile UInt8*)0x40100000)
#define FFIER		*((volatile UInt8*)0x40100004)
#define FFFCR		*((volatile UInt8*)0x40100008)
#define FFLCR		*((volatile UInt8*)0x4010000C)
#define FFMCR		*((volatile UInt8*)0x40100010)
#define FFLSR		*((volatile UInt8*)0x40100014)




void printc(char c){

	while(!(FFLSR & 0x20));	//wait for a spot in transmit buffer
	FFTHR = c;
}

void uartInit(void){

	FFMCR = 0x00;		//disable loopback
	FFLCR = 0x03;		//8n1 mode, DLAB off
	FFFCR = 0x00;		//fifos off
	FFIER = 0x60;		//unit on, NRZI on, all interrupts off
}

void printd(UInt32 v){

	int i;
	unsigned t;
	char x[8];

	for(i = 0; i < 8; i++){
		t = v & 0x0F;
		v >>= 4;
		x[7 - i] = t >= 10 ? (t + 'A' - 10) : (t + '0');
	}

	printc('0');
	printc('x');

	for(i = 0; i < 8; i++) printc(x[i]);
}


void puts(char* c){

	char t;

	while((t = *c++)) printc(t);
}

void __rt_div0(){
	puts("division by zero detected\r\n");
	while(1);
}

static Boolean printfWriteF(void* userData, char c){

	printc(c);
}

void printf(const char* fmt, ...){

	va_list vl;

	va_start(vl,fmt);
	cvsprintf(printfWriteF, NULL, fmt, vl);
	va_end(vl);
}


typedef UInt32 __u32;
typedef UInt16 __u16;
typedef UInt8 __u8;

#include "setup.h"

asm void __CodeRelocEnd__(void);

#pragma thumb off
asm UInt32 __hyper_get_mem_size(void){

	mov r12, #3
	DCD 0xF7BBBBBB
	bx  lr
}

asm void load_linux(UInt32 zero, UInt32 boardID, void* kernelArgs, void* kernel){

	MSR CPSR_c, #0x13
	BX R3
}

UInt64 _ull_mod(UInt64 num, UInt64 denom){

	return num - (num / denom) * denom;
}


#pragma thumb reset

void addTagRaw(UInt32** tagsP, UInt32 tagType, UInt32 words, const void* tagDataP){

	struct tag tag;
	UInt32 i;
	UInt32* tags = *tagsP;
	UInt32* tagP = (UInt32*)&tag;
	const UInt32* data = tagDataP;

	tag.hdr.tag = tagType;
	tag.hdr.size = tagType ? words + 2 : 0;

	for(i = 0; i < 2; i++) *tags++ = *tagP++;		//copy header
	for(; i < tag.hdr.size; i++) *tags++ = *data++;		//copy header

	*tagsP = tags;
}

static inline void addTag(UInt32** tagsP, UInt32 tagType, UInt32 words, struct tag* tag){

	addTagRaw(tagsP, tagType, words, &tag->u);
}

static void memmove(UInt32 d_, UInt32 s_, UInt32 words){

	Boolean forward;
	UInt32* d = (UInt32*)d_;
	UInt32* s = (UInt32*)s_;
	UInt32 i, sz = words * 4;

	if(d < s){	//copy forward

		forward = true;
	}
	else{		//copy backwards

		forward = false;
		d += words - 1;
		s += words - 1;
	}

	for(i = 0; i < words; i++){

		*d = *s;
		if((i & 0xFF) == 0 || i == words) printf("  %ld/%ld done (%ld%%)\r", i << 2, sz, (i << 2) * 100 / sz);

		if(forward){

			d++;
			s++;
		}
		else{

			d--;
			s--;
		}
	}
}

void calculate(UInt32 elleSz, UInt32 kSz, UInt32 rdSz){		//load linux

	UInt32* ptr32;
	void* args_addr = (void*)0xA0000800;
	UInt32* args = (UInt32*)args_addr;
	UInt32 myBase = 0;
	struct tag tag;
	int numTags = 0;
	UInt32 initSz = 0, initAddr = 0, machine, initFromAddr;
	const static char cmdline[] = "console=ttyS0 init=/bin/startup video=pxafb:vmem:2M,mode:640x480-16,active";

	uartInit();

	asm(mov myBase, r10);

	printf("ELLE(emulated linux loader extreme) 0.1.0.1 running from 0x%08lx\r\n", myBase);

	//round to word
	ptr32 = (UInt32*)(elleSz + myBase);

	initSz = rdSz;
	rdSz = (rdSz + 3) &~ 3;	//arguably bad, but its better to copy more than less
	printf(" Linux kernel found (%ld bytes @ 0x%08lx)\r\n", kSz, ptr32);
	printf(" First bytes: 0x%02x 0x%02x 0x%02x 0x%02x\r\n", ((UInt8*)(ptr32))[0], ((UInt8*)(ptr32))[1], ((UInt8*)(ptr32))[2], ((UInt8*)(ptr32))[3]);
	if(rdSz){
		UInt32 i;

		initFromAddr = elleSz + kSz + myBase;

		printf(" Ramdisk found (%ld bytes @ 0x%08lx)\r\n", rdSz, initFromAddr);
		printf(" First bytes: 0x%02x 0x%02x 0x%02x 0x%02x\r\n", ((UInt8*)(initFromAddr))[0], ((UInt8*)(initFromAddr))[1], ((UInt8*)(initFromAddr))[2], ((UInt8*)(initFromAddr))[3]);
		initAddr = (0xA0000000 + __hyper_get_mem_size() - rdSz) &~ 3;
		printf(" Copying to 0x%08lx...\r\n", initAddr);

		memmove(initAddr, initFromAddr, rdSz / 4);
	}
	else initSz = 0;

	puts("\n Setting up ATAGs...\r\n");

	/* core atag must be first */
	puts("  CORE\r\n");
	tag.u.core.flags = 1;			//RO
	tag.u.core.pagesize = 4096;		//why not? :-)
	tag.u.core.rootdev = 0;			//none for now
	addTag(&args, ATAG_CORE, 3, &tag);

	/* memory atag mem can happen more than once, but we don't do that */
	puts("  MEM\r\n");
	tag.u.mem.size = __hyper_get_mem_size();
	tag.u.mem.start = 0xA0000000;
	addTag(&args, ATAG_MEM, 2, &tag);

	if(initSz){
		/* initrd, if any */
		puts("  INITRD2\r\n");
		tag.u.initrd.start = initAddr;
		tag.u.initrd.size = initSz;
		addTag(&args, ATAG_INITRD2, 2, &tag);
	}

	/* command line, ZERO TERMINATOR */
	if(cmdline && *cmdline){

		puts("  CMDLINE\r\n");
		addTagRaw(&args, ATAG_CMDLINE, (sizeof(cmdline) + 3) >> 2, cmdline);
	}

	/* list terminator */
	puts("  NONE\r\n");
	addTag(&args, ATAG_NONE, 0, &tag);

	printf("Calling kernel at 0x%08lx with tags at 0x%08lx (%d bytes of tags)\r\n", ptr32, args_addr, (UInt32)args-(UInt32)args_addr);

	machine = 844; // T|E2

	load_linux(0, machine, args_addr, ptr32);
}


#pragma thumb off

asm __ARMlet_Startup__(){

	SUB R10, PC, #8
	LDR SP,=0xA0000400

	LDR R0,[R10, #-512]
	LDR R1,[R10, #-508]
	LDR R2,[R10, #-504]

	BL  calculate
loop:
	B   loop
}

#pragma thumb reset
