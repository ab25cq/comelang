/******     ----- MBR-bootloader for MBR-embedding -----     ******/


/*

	whatever the circumsance, this code MUST fit in 446 bytes


*/


typedef unsigned long UInt32;
typedef unsigned short UInt16;
typedef unsigned char UInt8;

typedef struct{

	UInt8 status;
	UInt8 start_CHS[3];
	UInt8 type;
	UInt8 end_CHS[3];
	UInt32 start_LBA;
	UInt32 len_LBA;

}Part;

#define FF_base		((volatile UInt8*)0x40100000)

#define FFTHR(base)	(base[0x00])
#define FFIER(base)	(base[0x04])
#define FFFCR(base)	(base[0x08])
#define FFLCR(base)	(base[0x0C])
#define FFMCR(base)	(base[0x10])
#define FFLSR(base)	(base[0x14])


static inline void uartInit(void){

	volatile UInt8* base = FF_base;

	FFMCR(base) = 0x00;		//disable loopback
	FFLCR(base) = 0x03;		//8n1 mode, DLAB off
	FFFCR(base) = 0x00;		//fifos off
	FFIER(base) = 0x60;		//unit on, NRZI on, all interrupts off
}

static void printc(char c){

	volatile UInt8* base = FF_base;

	while(!(FFLSR(base) & 0x20));	//wait for a spot in transmit buffer
	FFTHR(base) = c;
}

static void puts(const char* str){

	char c;

	while((c = *str++) != 0) printc(c);
}

static void err_msg(const char* err){	//should not return

	puts("MBRboot: failed to ");
	puts(err);

	while(1);
}

static UInt32 read32(const void* p){ // FUNC: read 32-bit val aligned to 16 boundary

	const UInt16* ptr = p;

	return ((UInt32)(ptr[0])) | (((UInt32)(ptr[1])) << 16);
}

static asm UInt32 doOp(UInt32 val, UInt32 subop, UInt32 index, UInt32 op){

	dcd 0xBBBB469c	// FUNC: { mov r12,r3; hypercall; }
	bx  lr
}

static asm void __call_via_r0(){ bx  r0 }
static asm void __call_via_r1(){ bx  r1 }
static asm void __call_via_r2(){ bx  r2 }
static asm void __call_via_r3(){ bx  r3 }
static asm void __call_via_r4(){ bx  r4 }
static asm void __call_via_r5(){ bx  r5 }
static asm void __call_via_r6(){ bx  r6 }
static asm void __call_via_r7(){ bx  r7 }

static void mbrBoot(UInt32 base){

	Part* p;
	UInt32 i, t, x;
	UInt32 *code;
	void* code_ptr;

	uartInit();

	p = (Part*)(base + 446);

	for(i = 0; i < 4; i++, p++){

		if(p->status == 0x80) goto found;		//small size optimization that compiler will not do for us
	}
	err_msg("find an active partition");

found:

	i = read32(&p->len_LBA);
	t = read32(&p->start_LBA);

	code = (void*)(0xA0000000 + doOp(0,0,0,3) - 512 * i);	//end of ram
	code_ptr = code + 128;	//one sector later is where code starts:)

	while(i--){

		if(!doOp(1, t++, 0, 4)) err_msg("read sector");
		for(x = 0; x < 128; x++) *code++ = doOp(0, x, 0, 5);
	}

	((void (*)(void))code_ptr)();
}

asm void __CodeRelocEnd__(void);


asm void __ARMlet_Startup__(){

	mov  r0, #0xE9		//this is here to make the first few bytes look like an x86 jump - a requirement for mbr

	ldr  r0, =__CodeRelocEnd__ + 510	//a small stack (512 bytes of it, after that we overwrite ourselves)
	add  r0, pc
	mov  sp, r0

	mov  r0, pc
	sub  r0, #12
	mov  r10, r0

	bl   mbrBoot
}