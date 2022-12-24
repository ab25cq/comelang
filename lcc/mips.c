#define INTTMP 0x0100ff00
#define INTVAR 0x40ff0000
#define FLTTMP 0x000f0ff0
#define FLTVAR 0xfff00000

#define INTRET 0x00000004
#define FLTRET 0x00000003

#define readsreg(p) \
        (generic((p)->op)==INDIR && (p)->kids[0]->op==VREG+P)
#define setsrc(d) ((d) && (d)->x.regnode && \
        (d)->x.regnode->set == src->x.regnode->set && \
        (d)->x.regnode->mask&src->x.regnode->mask)

#define relink(a, b) ((b)->x.prev = (a), (a)->x.next = (b))

#include "c.h"
#define NODEPTR_TYPE Node
#define OP_LABEL(p) ((p)->op)
#define LEFT_CHILD(p) ((p)->kids[0])
#define RIGHT_CHILD(p) ((p)->kids[1])
#define STATE_LABEL(p) ((p)->x.state)
static void address(Symbol, Symbol, long);
static void blkfetch(int, int, int, int);
static void blkloop(int, int, int, int, int, int[]);
static void blkstore(int, int, int, int);
static void defaddress(Symbol);
static void defconst(int, int, Value);
static void defstring(int, char *);
static void defsymbol(Symbol);
static void doarg(Node);
static void emit2(Node);
static void export(Symbol);
static void clobber(Node);
static void function(Symbol, Symbol [], Symbol [], int);
static void global(Symbol);
static void import(Symbol);
static void local(Symbol);
static void progbeg(int, char **);
static void progend(void);
static void segment(int);
static void space(int);
static void target(Node);
static int      bitcount       (unsigned);
static Symbol   argreg         (int, int, int, int, int);

static Symbol ireg[32], freg2[32], d6;
static Symbol iregw, freg2w;
static int tmpregs[] = {3, 9, 10};
static Symbol blkreg;

static int gnum = 8;
static int pic;

static int cseg;
/*
generated at Tue Sep 27 04:30:13 2022
by $Id$
*/
static void _kids(NODEPTR_TYPE, int, NODEPTR_TYPE[]);
static void _label(NODEPTR_TYPE);
static int _rule(void*, int);

#define _stmt_NT 1
#define _reg_NT 2
#define _con_NT 3
#define _acon_NT 4
#define _addr_NT 5
#define _rc_NT 6
#define _rc5_NT 7
#define _ar_NT 8

static char *_ntname[] = {
	0,
	"stmt",
	"reg",
	"con",
	"acon",
	"addr",
	"rc",
	"rc5",
	"ar",
	0
};

struct _state {
	short cost[9];
	struct {
		unsigned int _stmt:7;
		unsigned int _reg:7;
		unsigned int _con:4;
		unsigned int _acon:2;
		unsigned int _addr:3;
		unsigned int _rc:2;
		unsigned int _rc5:2;
		unsigned int _ar:2;
	} rule;
};

static short _nts_0[] = { 0 };
static short _nts_1[] = { _reg_NT, 0 };
static short _nts_2[] = { _con_NT, 0 };
static short _nts_3[] = { _reg_NT, _acon_NT, 0 };
static short _nts_4[] = { _acon_NT, 0 };
static short _nts_5[] = { _addr_NT, 0 };
static short _nts_6[] = { _addr_NT, _reg_NT, 0 };
static short _nts_7[] = { _reg_NT, _reg_NT, 0 };
static short _nts_8[] = { _reg_NT, _rc_NT, 0 };
static short _nts_9[] = { _reg_NT, _rc5_NT, 0 };
static short _nts_10[] = { _ar_NT, 0 };

static short *_nts[] = {
	0,	/* 0 */
	_nts_0,	/* 1 */
	_nts_0,	/* 2 */
	_nts_0,	/* 3 */
	_nts_0,	/* 4 */
	_nts_0,	/* 5 */
	_nts_0,	/* 6 */
	_nts_0,	/* 7 */
	_nts_0,	/* 8 */
	_nts_0,	/* 9 */
	_nts_0,	/* 10 */
	_nts_0,	/* 11 */
	_nts_0,	/* 12 */
	_nts_1,	/* 13 */
	_nts_1,	/* 14 */
	_nts_1,	/* 15 */
	_nts_1,	/* 16 */
	_nts_1,	/* 17 */
	_nts_1,	/* 18 */
	_nts_1,	/* 19 */
	_nts_1,	/* 20 */
	_nts_1,	/* 21 */
	_nts_1,	/* 22 */
	_nts_1,	/* 23 */
	_nts_1,	/* 24 */
	_nts_0,	/* 25 */
	_nts_0,	/* 26 */
	_nts_0,	/* 27 */
	_nts_0,	/* 28 */
	_nts_0,	/* 29 */
	_nts_0,	/* 30 */
	_nts_0,	/* 31 */
	_nts_0,	/* 32 */
	_nts_0,	/* 33 */
	_nts_0,	/* 34 */
	_nts_1,	/* 35 */
	_nts_2,	/* 36 */
	_nts_0,	/* 37 */
	_nts_3,	/* 38 */
	_nts_3,	/* 39 */
	_nts_3,	/* 40 */
	_nts_4,	/* 41 */
	_nts_1,	/* 42 */
	_nts_0,	/* 43 */
	_nts_0,	/* 44 */
	_nts_5,	/* 45 */
	_nts_0,	/* 46 */
	_nts_0,	/* 47 */
	_nts_0,	/* 48 */
	_nts_0,	/* 49 */
	_nts_0,	/* 50 */
	_nts_0,	/* 51 */
	_nts_0,	/* 52 */
	_nts_6,	/* 53 */
	_nts_6,	/* 54 */
	_nts_6,	/* 55 */
	_nts_6,	/* 56 */
	_nts_6,	/* 57 */
	_nts_6,	/* 58 */
	_nts_6,	/* 59 */
	_nts_5,	/* 60 */
	_nts_5,	/* 61 */
	_nts_5,	/* 62 */
	_nts_5,	/* 63 */
	_nts_5,	/* 64 */
	_nts_5,	/* 65 */
	_nts_5,	/* 66 */
	_nts_5,	/* 67 */
	_nts_5,	/* 68 */
	_nts_5,	/* 69 */
	_nts_5,	/* 70 */
	_nts_5,	/* 71 */
	_nts_5,	/* 72 */
	_nts_5,	/* 73 */
	_nts_5,	/* 74 */
	_nts_6,	/* 75 */
	_nts_6,	/* 76 */
	_nts_7,	/* 77 */
	_nts_7,	/* 78 */
	_nts_7,	/* 79 */
	_nts_7,	/* 80 */
	_nts_7,	/* 81 */
	_nts_7,	/* 82 */
	_nts_2,	/* 83 */
	_nts_1,	/* 84 */
	_nts_8,	/* 85 */
	_nts_8,	/* 86 */
	_nts_8,	/* 87 */
	_nts_8,	/* 88 */
	_nts_8,	/* 89 */
	_nts_8,	/* 90 */
	_nts_8,	/* 91 */
	_nts_8,	/* 92 */
	_nts_8,	/* 93 */
	_nts_8,	/* 94 */
	_nts_8,	/* 95 */
	_nts_8,	/* 96 */
	_nts_0,	/* 97 */
	_nts_1,	/* 98 */
	_nts_9,	/* 99 */
	_nts_9,	/* 100 */
	_nts_9,	/* 101 */
	_nts_9,	/* 102 */
	_nts_1,	/* 103 */
	_nts_1,	/* 104 */
	_nts_1,	/* 105 */
	_nts_1,	/* 106 */
	_nts_1,	/* 107 */
	_nts_1,	/* 108 */
	_nts_1,	/* 109 */
	_nts_1,	/* 110 */
	_nts_1,	/* 111 */
	_nts_1,	/* 112 */
	_nts_7,	/* 113 */
	_nts_7,	/* 114 */
	_nts_7,	/* 115 */
	_nts_7,	/* 116 */
	_nts_7,	/* 117 */
	_nts_7,	/* 118 */
	_nts_7,	/* 119 */
	_nts_7,	/* 120 */
	_nts_1,	/* 121 */
	_nts_1,	/* 122 */
	_nts_1,	/* 123 */
	_nts_1,	/* 124 */
	_nts_1,	/* 125 */
	_nts_1,	/* 126 */
	_nts_1,	/* 127 */
	_nts_1,	/* 128 */
	_nts_1,	/* 129 */
	_nts_1,	/* 130 */
	_nts_1,	/* 131 */
	_nts_1,	/* 132 */
	_nts_1,	/* 133 */
	_nts_0,	/* 134 */
	_nts_4,	/* 135 */
	_nts_1,	/* 136 */
	_nts_1,	/* 137 */
	_nts_7,	/* 138 */
	_nts_7,	/* 139 */
	_nts_7,	/* 140 */
	_nts_7,	/* 141 */
	_nts_7,	/* 142 */
	_nts_7,	/* 143 */
	_nts_7,	/* 144 */
	_nts_7,	/* 145 */
	_nts_7,	/* 146 */
	_nts_7,	/* 147 */
	_nts_7,	/* 148 */
	_nts_7,	/* 149 */
	_nts_7,	/* 150 */
	_nts_7,	/* 151 */
	_nts_7,	/* 152 */
	_nts_7,	/* 153 */
	_nts_7,	/* 154 */
	_nts_7,	/* 155 */
	_nts_7,	/* 156 */
	_nts_7,	/* 157 */
	_nts_7,	/* 158 */
	_nts_7,	/* 159 */
	_nts_7,	/* 160 */
	_nts_7,	/* 161 */
	_nts_0,	/* 162 */
	_nts_10,	/* 163 */
	_nts_10,	/* 164 */
	_nts_10,	/* 165 */
	_nts_10,	/* 166 */
	_nts_10,	/* 167 */
	_nts_10,	/* 168 */
	_nts_1,	/* 169 */
	_nts_0,	/* 170 */
	_nts_1,	/* 171 */
	_nts_1,	/* 172 */
	_nts_1,	/* 173 */
	_nts_1,	/* 174 */
	_nts_1,	/* 175 */
	_nts_1,	/* 176 */
	_nts_1,	/* 177 */
	_nts_1,	/* 178 */
	_nts_1,	/* 179 */
	_nts_1,	/* 180 */
	_nts_1,	/* 181 */
	_nts_1,	/* 182 */
	_nts_7,	/* 183 */
};

static char *_templates[] = {
/* 0 */	0,
/* 1 */	"# read register\n",	/* reg: INDIRI1(VREGP) */
/* 2 */	"# read register\n",	/* reg: INDIRU1(VREGP) */
/* 3 */	"# read register\n",	/* reg: INDIRI2(VREGP) */
/* 4 */	"# read register\n",	/* reg: INDIRU2(VREGP) */
/* 5 */	"# read register\n",	/* reg: INDIRF4(VREGP) */
/* 6 */	"# read register\n",	/* reg: INDIRI4(VREGP) */
/* 7 */	"# read register\n",	/* reg: INDIRP4(VREGP) */
/* 8 */	"# read register\n",	/* reg: INDIRU4(VREGP) */
/* 9 */	"# read register\n",	/* reg: INDIRF8(VREGP) */
/* 10 */	"# read register\n",	/* reg: INDIRI8(VREGP) */
/* 11 */	"# read register\n",	/* reg: INDIRP8(VREGP) */
/* 12 */	"# read register\n",	/* reg: INDIRU8(VREGP) */
/* 13 */	"# write register\n",	/* stmt: ASGNI1(VREGP,reg) */
/* 14 */	"# write register\n",	/* stmt: ASGNU1(VREGP,reg) */
/* 15 */	"# write register\n",	/* stmt: ASGNI2(VREGP,reg) */
/* 16 */	"# write register\n",	/* stmt: ASGNU2(VREGP,reg) */
/* 17 */	"# write register\n",	/* stmt: ASGNF4(VREGP,reg) */
/* 18 */	"# write register\n",	/* stmt: ASGNI4(VREGP,reg) */
/* 19 */	"# write register\n",	/* stmt: ASGNP4(VREGP,reg) */
/* 20 */	"# write register\n",	/* stmt: ASGNU4(VREGP,reg) */
/* 21 */	"# write register\n",	/* stmt: ASGNF8(VREGP,reg) */
/* 22 */	"# write register\n",	/* stmt: ASGNI8(VREGP,reg) */
/* 23 */	"# write register\n",	/* stmt: ASGNP8(VREGP,reg) */
/* 24 */	"# write register\n",	/* stmt: ASGNU8(VREGP,reg) */
/* 25 */	"%a",	/* con: CNSTI1 */
/* 26 */	"%a",	/* con: CNSTU1 */
/* 27 */	"%a",	/* con: CNSTI2 */
/* 28 */	"%a",	/* con: CNSTU2 */
/* 29 */	"%a",	/* con: CNSTI4 */
/* 30 */	"%a",	/* con: CNSTU4 */
/* 31 */	"%a",	/* con: CNSTP4 */
/* 32 */	"%a",	/* con: CNSTI8 */
/* 33 */	"%a",	/* con: CNSTU8 */
/* 34 */	"%a",	/* con: CNSTP8 */
/* 35 */	"",	/* stmt: reg */
/* 36 */	"%0",	/* acon: con */
/* 37 */	"%a",	/* acon: ADDRGP4 */
/* 38 */	"%1($%0)",	/* addr: ADDI4(reg,acon) */
/* 39 */	"%1($%0)",	/* addr: ADDU4(reg,acon) */
/* 40 */	"%1($%0)",	/* addr: ADDP4(reg,acon) */
/* 41 */	"%0",	/* addr: acon */
/* 42 */	"($%0)",	/* addr: reg */
/* 43 */	"%a+%F($sp)",	/* addr: ADDRFP4 */
/* 44 */	"%a+%F($sp)",	/* addr: ADDRLP4 */
/* 45 */	"la $%c,%0\n",	/* reg: addr */
/* 46 */	"# reg\n",	/* reg: CNSTI1 */
/* 47 */	"# reg\n",	/* reg: CNSTI2 */
/* 48 */	"# reg\n",	/* reg: CNSTI4 */
/* 49 */	"# reg\n",	/* reg: CNSTU1 */
/* 50 */	"# reg\n",	/* reg: CNSTU2 */
/* 51 */	"# reg\n",	/* reg: CNSTU4 */
/* 52 */	"# reg\n",	/* reg: CNSTP4 */
/* 53 */	"sb $%1,%0\n",	/* stmt: ASGNI1(addr,reg) */
/* 54 */	"sb $%1,%0\n",	/* stmt: ASGNU1(addr,reg) */
/* 55 */	"sh $%1,%0\n",	/* stmt: ASGNI2(addr,reg) */
/* 56 */	"sh $%1,%0\n",	/* stmt: ASGNU2(addr,reg) */
/* 57 */	"sw $%1,%0\n",	/* stmt: ASGNI4(addr,reg) */
/* 58 */	"sw $%1,%0\n",	/* stmt: ASGNU4(addr,reg) */
/* 59 */	"sw $%1,%0\n",	/* stmt: ASGNP4(addr,reg) */
/* 60 */	"lb $%c,%0\n",	/* reg: INDIRI1(addr) */
/* 61 */	"lbu $%c,%0\n",	/* reg: INDIRU1(addr) */
/* 62 */	"lh $%c,%0\n",	/* reg: INDIRI2(addr) */
/* 63 */	"lhu $%c,%0\n",	/* reg: INDIRU2(addr) */
/* 64 */	"lw $%c,%0\n",	/* reg: INDIRI4(addr) */
/* 65 */	"lw $%c,%0\n",	/* reg: INDIRU4(addr) */
/* 66 */	"lw $%c,%0\n",	/* reg: INDIRP4(addr) */
/* 67 */	"lb $%c,%0\n",	/* reg: CVII4(INDIRI1(addr)) */
/* 68 */	"lh $%c,%0\n",	/* reg: CVII4(INDIRI2(addr)) */
/* 69 */	"lbu $%c,%0\n",	/* reg: CVUU4(INDIRU1(addr)) */
/* 70 */	"lhu $%c,%0\n",	/* reg: CVUU4(INDIRU2(addr)) */
/* 71 */	"lbu $%c,%0\n",	/* reg: CVUI4(INDIRU1(addr)) */
/* 72 */	"lhu $%c,%0\n",	/* reg: CVUI4(INDIRU2(addr)) */
/* 73 */	"l.s $f%c,%0\n",	/* reg: INDIRF4(addr) */
/* 74 */	"l.d $f%c,%0\n",	/* reg: INDIRF8(addr) */
/* 75 */	"s.s $f%1,%0\n",	/* stmt: ASGNF4(addr,reg) */
/* 76 */	"s.d $f%1,%0\n",	/* stmt: ASGNF8(addr,reg) */
/* 77 */	"div $%c,$%0,$%1\n",	/* reg: DIVI4(reg,reg) */
/* 78 */	"divu $%c,$%0,$%1\n",	/* reg: DIVU4(reg,reg) */
/* 79 */	"rem $%c,$%0,$%1\n",	/* reg: MODI4(reg,reg) */
/* 80 */	"remu $%c,$%0,$%1\n",	/* reg: MODU4(reg,reg) */
/* 81 */	"mul $%c,$%0,$%1\n",	/* reg: MULI4(reg,reg) */
/* 82 */	"mul $%c,$%0,$%1\n",	/* reg: MULU4(reg,reg) */
/* 83 */	"%0",	/* rc: con */
/* 84 */	"$%0",	/* rc: reg */
/* 85 */	"addu $%c,$%0,%1\n",	/* reg: ADDI4(reg,rc) */
/* 86 */	"addu $%c,$%0,%1\n",	/* reg: ADDP4(reg,rc) */
/* 87 */	"addu $%c,$%0,%1\n",	/* reg: ADDU4(reg,rc) */
/* 88 */	"and $%c,$%0,%1\n",	/* reg: BANDI4(reg,rc) */
/* 89 */	"or $%c,$%0,%1\n",	/* reg: BORI4(reg,rc) */
/* 90 */	"xor $%c,$%0,%1\n",	/* reg: BXORI4(reg,rc) */
/* 91 */	"and $%c,$%0,%1\n",	/* reg: BANDU4(reg,rc) */
/* 92 */	"or $%c,$%0,%1\n",	/* reg: BORU4(reg,rc) */
/* 93 */	"xor $%c,$%0,%1\n",	/* reg: BXORU4(reg,rc) */
/* 94 */	"subu $%c,$%0,%1\n",	/* reg: SUBI4(reg,rc) */
/* 95 */	"subu $%c,$%0,%1\n",	/* reg: SUBP4(reg,rc) */
/* 96 */	"subu $%c,$%0,%1\n",	/* reg: SUBU4(reg,rc) */
/* 97 */	"%a",	/* rc5: CNSTI4 */
/* 98 */	"$%0",	/* rc5: reg */
/* 99 */	"sll $%c,$%0,%1\n",	/* reg: LSHI4(reg,rc5) */
/* 100 */	"sll $%c,$%0,%1\n",	/* reg: LSHU4(reg,rc5) */
/* 101 */	"sra $%c,$%0,%1\n",	/* reg: RSHI4(reg,rc5) */
/* 102 */	"srl $%c,$%0,%1\n",	/* reg: RSHU4(reg,rc5) */
/* 103 */	"not $%c,$%0\n",	/* reg: BCOMI4(reg) */
/* 104 */	"not $%c,$%0\n",	/* reg: BCOMU4(reg) */
/* 105 */	"negu $%c,$%0\n",	/* reg: NEGI4(reg) */
/* 106 */	"move $%c,$%0\n",	/* reg: LOADI1(reg) */
/* 107 */	"move $%c,$%0\n",	/* reg: LOADU1(reg) */
/* 108 */	"move $%c,$%0\n",	/* reg: LOADI2(reg) */
/* 109 */	"move $%c,$%0\n",	/* reg: LOADU2(reg) */
/* 110 */	"move $%c,$%0\n",	/* reg: LOADI4(reg) */
/* 111 */	"move $%c,$%0\n",	/* reg: LOADP4(reg) */
/* 112 */	"move $%c,$%0\n",	/* reg: LOADU4(reg) */
/* 113 */	"add.s $f%c,$f%0,$f%1\n",	/* reg: ADDF4(reg,reg) */
/* 114 */	"add.d $f%c,$f%0,$f%1\n",	/* reg: ADDF8(reg,reg) */
/* 115 */	"div.s $f%c,$f%0,$f%1\n",	/* reg: DIVF4(reg,reg) */
/* 116 */	"div.d $f%c,$f%0,$f%1\n",	/* reg: DIVF8(reg,reg) */
/* 117 */	"mul.s $f%c,$f%0,$f%1\n",	/* reg: MULF4(reg,reg) */
/* 118 */	"mul.d $f%c,$f%0,$f%1\n",	/* reg: MULF8(reg,reg) */
/* 119 */	"sub.s $f%c,$f%0,$f%1\n",	/* reg: SUBF4(reg,reg) */
/* 120 */	"sub.d $f%c,$f%0,$f%1\n",	/* reg: SUBF8(reg,reg) */
/* 121 */	"mov.s $f%c,$f%0\n",	/* reg: LOADF4(reg) */
/* 122 */	"mov.d $f%c,$f%0\n",	/* reg: LOADF8(reg) */
/* 123 */	"neg.s $f%c,$f%0\n",	/* reg: NEGF4(reg) */
/* 124 */	"neg.d $f%c,$f%0\n",	/* reg: NEGF8(reg) */
/* 125 */	"sll $%c,$%0,8*(4-%a); sra $%c,$%c,8*(4-%a)\n",	/* reg: CVII4(reg) */
/* 126 */	"and $%c,$%0,(1<<(8*%a))-1\n",	/* reg: CVUI4(reg) */
/* 127 */	"and $%c,$%0,(1<<(8*%a))-1\n",	/* reg: CVUU4(reg) */
/* 128 */	"cvt.s.d $f%c,$f%0\n",	/* reg: CVFF4(reg) */
/* 129 */	"cvt.d.s $f%c,$f%0\n",	/* reg: CVFF8(reg) */
/* 130 */	"mtc1 $%0,$f%c; cvt.s.w $f%c,$f%c\n",	/* reg: CVIF4(reg) */
/* 131 */	"mtc1 $%0,$f%c; cvt.d.w $f%c,$f%c\n",	/* reg: CVIF8(reg) */
/* 132 */	"trunc.w.s $f2,$f%0,$%c; mfc1 $%c,$f2\n",	/* reg: CVFI4(reg) */
/* 133 */	"trunc.w.d $f2,$f%0,$%c; mfc1 $%c,$f2\n",	/* reg: CVFI4(reg) */
/* 134 */	"%a:\n",	/* stmt: LABELV */
/* 135 */	"b %0\n",	/* stmt: JUMPV(acon) */
/* 136 */	".cpadd $%0\nj $%0\n",	/* stmt: JUMPV(reg) */
/* 137 */	"j $%0\n",	/* stmt: JUMPV(reg) */
/* 138 */	"beq $%0,$%1,%a\n",	/* stmt: EQI4(reg,reg) */
/* 139 */	"beq $%0,$%1,%a\n",	/* stmt: EQU4(reg,reg) */
/* 140 */	"bge $%0,$%1,%a\n",	/* stmt: GEI4(reg,reg) */
/* 141 */	"bgeu $%0,$%1,%a\n",	/* stmt: GEU4(reg,reg) */
/* 142 */	"bgt $%0,$%1,%a\n",	/* stmt: GTI4(reg,reg) */
/* 143 */	"bgtu $%0,$%1,%a\n",	/* stmt: GTU4(reg,reg) */
/* 144 */	"ble $%0,$%1,%a\n",	/* stmt: LEI4(reg,reg) */
/* 145 */	"bleu $%0,$%1,%a\n",	/* stmt: LEU4(reg,reg) */
/* 146 */	"blt $%0,$%1,%a\n",	/* stmt: LTI4(reg,reg) */
/* 147 */	"bltu $%0,$%1,%a\n",	/* stmt: LTU4(reg,reg) */
/* 148 */	"bne $%0,$%1,%a\n",	/* stmt: NEI4(reg,reg) */
/* 149 */	"bne $%0,$%1,%a\n",	/* stmt: NEU4(reg,reg) */
/* 150 */	"c.eq.s $f%0,$f%1; bc1t %a\n",	/* stmt: EQF4(reg,reg) */
/* 151 */	"c.eq.d $f%0,$f%1; bc1t %a\n",	/* stmt: EQF8(reg,reg) */
/* 152 */	"c.ule.s $f%0,$f%1; bc1t %a\n",	/* stmt: LEF4(reg,reg) */
/* 153 */	"c.ule.d $f%0,$f%1; bc1t %a\n",	/* stmt: LEF8(reg,reg) */
/* 154 */	"c.ult.s $f%0,$f%1; bc1t %a\n",	/* stmt: LTF4(reg,reg) */
/* 155 */	"c.ult.d $f%0,$f%1; bc1t %a\n",	/* stmt: LTF8(reg,reg) */
/* 156 */	"c.lt.s $f%0,$f%1; bc1f %a\n",	/* stmt: GEF4(reg,reg) */
/* 157 */	"c.lt.d $f%0,$f%1; bc1f %a\n",	/* stmt: GEF8(reg,reg) */
/* 158 */	"c.le.s $f%0,$f%1; bc1f %a\n",	/* stmt: GTF4(reg,reg) */
/* 159 */	"c.le.d $f%0,$f%1; bc1f %a\n",	/* stmt: GTF8(reg,reg) */
/* 160 */	"c.eq.s $f%0,$f%1; bc1f %a\n",	/* stmt: NEF4(reg,reg) */
/* 161 */	"c.eq.d $f%0,$f%1; bc1f %a\n",	/* stmt: NEF8(reg,reg) */
/* 162 */	"%a",	/* ar: ADDRGP4 */
/* 163 */	"jal %0\n",	/* reg: CALLF4(ar) */
/* 164 */	"jal %0\n",	/* reg: CALLF8(ar) */
/* 165 */	"jal %0\n",	/* reg: CALLI4(ar) */
/* 166 */	"jal %0\n",	/* reg: CALLP4(ar) */
/* 167 */	"jal %0\n",	/* reg: CALLU4(ar) */
/* 168 */	"jal %0\n",	/* stmt: CALLV(ar) */
/* 169 */	"$%0",	/* ar: reg */
/* 170 */	"%a",	/* ar: CNSTP4 */
/* 171 */	"# ret\n",	/* stmt: RETF4(reg) */
/* 172 */	"# ret\n",	/* stmt: RETF8(reg) */
/* 173 */	"# ret\n",	/* stmt: RETI4(reg) */
/* 174 */	"# ret\n",	/* stmt: RETU4(reg) */
/* 175 */	"# ret\n",	/* stmt: RETP4(reg) */
/* 176 */	"# ret\n",	/* stmt: RETV(reg) */
/* 177 */	"# arg\n",	/* stmt: ARGF4(reg) */
/* 178 */	"# arg\n",	/* stmt: ARGF8(reg) */
/* 179 */	"# arg\n",	/* stmt: ARGI4(reg) */
/* 180 */	"# arg\n",	/* stmt: ARGP4(reg) */
/* 181 */	"# arg\n",	/* stmt: ARGU4(reg) */
/* 182 */	"# argb %0\n",	/* stmt: ARGB(INDIRB(reg)) */
/* 183 */	"# asgnb %0 %1\n",	/* stmt: ASGNB(reg,INDIRB(reg)) */
};

static char _isinstruction[] = {
/* 0 */	0,
/* 1 */	1,	/* # read register\n */
/* 2 */	1,	/* # read register\n */
/* 3 */	1,	/* # read register\n */
/* 4 */	1,	/* # read register\n */
/* 5 */	1,	/* # read register\n */
/* 6 */	1,	/* # read register\n */
/* 7 */	1,	/* # read register\n */
/* 8 */	1,	/* # read register\n */
/* 9 */	1,	/* # read register\n */
/* 10 */	1,	/* # read register\n */
/* 11 */	1,	/* # read register\n */
/* 12 */	1,	/* # read register\n */
/* 13 */	1,	/* # write register\n */
/* 14 */	1,	/* # write register\n */
/* 15 */	1,	/* # write register\n */
/* 16 */	1,	/* # write register\n */
/* 17 */	1,	/* # write register\n */
/* 18 */	1,	/* # write register\n */
/* 19 */	1,	/* # write register\n */
/* 20 */	1,	/* # write register\n */
/* 21 */	1,	/* # write register\n */
/* 22 */	1,	/* # write register\n */
/* 23 */	1,	/* # write register\n */
/* 24 */	1,	/* # write register\n */
/* 25 */	0,	/* %a */
/* 26 */	0,	/* %a */
/* 27 */	0,	/* %a */
/* 28 */	0,	/* %a */
/* 29 */	0,	/* %a */
/* 30 */	0,	/* %a */
/* 31 */	0,	/* %a */
/* 32 */	0,	/* %a */
/* 33 */	0,	/* %a */
/* 34 */	0,	/* %a */
/* 35 */	0,	/*  */
/* 36 */	0,	/* %0 */
/* 37 */	0,	/* %a */
/* 38 */	0,	/* %1($%0) */
/* 39 */	0,	/* %1($%0) */
/* 40 */	0,	/* %1($%0) */
/* 41 */	0,	/* %0 */
/* 42 */	0,	/* ($%0) */
/* 43 */	0,	/* %a+%F($sp) */
/* 44 */	0,	/* %a+%F($sp) */
/* 45 */	1,	/* la $%c,%0\n */
/* 46 */	1,	/* # reg\n */
/* 47 */	1,	/* # reg\n */
/* 48 */	1,	/* # reg\n */
/* 49 */	1,	/* # reg\n */
/* 50 */	1,	/* # reg\n */
/* 51 */	1,	/* # reg\n */
/* 52 */	1,	/* # reg\n */
/* 53 */	1,	/* sb $%1,%0\n */
/* 54 */	1,	/* sb $%1,%0\n */
/* 55 */	1,	/* sh $%1,%0\n */
/* 56 */	1,	/* sh $%1,%0\n */
/* 57 */	1,	/* sw $%1,%0\n */
/* 58 */	1,	/* sw $%1,%0\n */
/* 59 */	1,	/* sw $%1,%0\n */
/* 60 */	1,	/* lb $%c,%0\n */
/* 61 */	1,	/* lbu $%c,%0\n */
/* 62 */	1,	/* lh $%c,%0\n */
/* 63 */	1,	/* lhu $%c,%0\n */
/* 64 */	1,	/* lw $%c,%0\n */
/* 65 */	1,	/* lw $%c,%0\n */
/* 66 */	1,	/* lw $%c,%0\n */
/* 67 */	1,	/* lb $%c,%0\n */
/* 68 */	1,	/* lh $%c,%0\n */
/* 69 */	1,	/* lbu $%c,%0\n */
/* 70 */	1,	/* lhu $%c,%0\n */
/* 71 */	1,	/* lbu $%c,%0\n */
/* 72 */	1,	/* lhu $%c,%0\n */
/* 73 */	1,	/* l.s $f%c,%0\n */
/* 74 */	1,	/* l.d $f%c,%0\n */
/* 75 */	1,	/* s.s $f%1,%0\n */
/* 76 */	1,	/* s.d $f%1,%0\n */
/* 77 */	1,	/* div $%c,$%0,$%1\n */
/* 78 */	1,	/* divu $%c,$%0,$%1\n */
/* 79 */	1,	/* rem $%c,$%0,$%1\n */
/* 80 */	1,	/* remu $%c,$%0,$%1\n */
/* 81 */	1,	/* mul $%c,$%0,$%1\n */
/* 82 */	1,	/* mul $%c,$%0,$%1\n */
/* 83 */	0,	/* %0 */
/* 84 */	0,	/* $%0 */
/* 85 */	1,	/* addu $%c,$%0,%1\n */
/* 86 */	1,	/* addu $%c,$%0,%1\n */
/* 87 */	1,	/* addu $%c,$%0,%1\n */
/* 88 */	1,	/* and $%c,$%0,%1\n */
/* 89 */	1,	/* or $%c,$%0,%1\n */
/* 90 */	1,	/* xor $%c,$%0,%1\n */
/* 91 */	1,	/* and $%c,$%0,%1\n */
/* 92 */	1,	/* or $%c,$%0,%1\n */
/* 93 */	1,	/* xor $%c,$%0,%1\n */
/* 94 */	1,	/* subu $%c,$%0,%1\n */
/* 95 */	1,	/* subu $%c,$%0,%1\n */
/* 96 */	1,	/* subu $%c,$%0,%1\n */
/* 97 */	0,	/* %a */
/* 98 */	0,	/* $%0 */
/* 99 */	1,	/* sll $%c,$%0,%1\n */
/* 100 */	1,	/* sll $%c,$%0,%1\n */
/* 101 */	1,	/* sra $%c,$%0,%1\n */
/* 102 */	1,	/* srl $%c,$%0,%1\n */
/* 103 */	1,	/* not $%c,$%0\n */
/* 104 */	1,	/* not $%c,$%0\n */
/* 105 */	1,	/* negu $%c,$%0\n */
/* 106 */	1,	/* move $%c,$%0\n */
/* 107 */	1,	/* move $%c,$%0\n */
/* 108 */	1,	/* move $%c,$%0\n */
/* 109 */	1,	/* move $%c,$%0\n */
/* 110 */	1,	/* move $%c,$%0\n */
/* 111 */	1,	/* move $%c,$%0\n */
/* 112 */	1,	/* move $%c,$%0\n */
/* 113 */	1,	/* add.s $f%c,$f%0,$f%1\n */
/* 114 */	1,	/* add.d $f%c,$f%0,$f%1\n */
/* 115 */	1,	/* div.s $f%c,$f%0,$f%1\n */
/* 116 */	1,	/* div.d $f%c,$f%0,$f%1\n */
/* 117 */	1,	/* mul.s $f%c,$f%0,$f%1\n */
/* 118 */	1,	/* mul.d $f%c,$f%0,$f%1\n */
/* 119 */	1,	/* sub.s $f%c,$f%0,$f%1\n */
/* 120 */	1,	/* sub.d $f%c,$f%0,$f%1\n */
/* 121 */	1,	/* mov.s $f%c,$f%0\n */
/* 122 */	1,	/* mov.d $f%c,$f%0\n */
/* 123 */	1,	/* neg.s $f%c,$f%0\n */
/* 124 */	1,	/* neg.d $f%c,$f%0\n */
/* 125 */	1,	/* sll $%c,$%0,8*(4-%a); sra $%c,$%c,8*(4-%a)\n */
/* 126 */	1,	/* and $%c,$%0,(1<<(8*%a))-1\n */
/* 127 */	1,	/* and $%c,$%0,(1<<(8*%a))-1\n */
/* 128 */	1,	/* cvt.s.d $f%c,$f%0\n */
/* 129 */	1,	/* cvt.d.s $f%c,$f%0\n */
/* 130 */	1,	/* mtc1 $%0,$f%c; cvt.s.w $f%c,$f%c\n */
/* 131 */	1,	/* mtc1 $%0,$f%c; cvt.d.w $f%c,$f%c\n */
/* 132 */	1,	/* trunc.w.s $f2,$f%0,$%c; mfc1 $%c,$f2\n */
/* 133 */	1,	/* trunc.w.d $f2,$f%0,$%c; mfc1 $%c,$f2\n */
/* 134 */	1,	/* %a:\n */
/* 135 */	1,	/* b %0\n */
/* 136 */	1,	/* .cpadd $%0\nj $%0\n */
/* 137 */	1,	/* j $%0\n */
/* 138 */	1,	/* beq $%0,$%1,%a\n */
/* 139 */	1,	/* beq $%0,$%1,%a\n */
/* 140 */	1,	/* bge $%0,$%1,%a\n */
/* 141 */	1,	/* bgeu $%0,$%1,%a\n */
/* 142 */	1,	/* bgt $%0,$%1,%a\n */
/* 143 */	1,	/* bgtu $%0,$%1,%a\n */
/* 144 */	1,	/* ble $%0,$%1,%a\n */
/* 145 */	1,	/* bleu $%0,$%1,%a\n */
/* 146 */	1,	/* blt $%0,$%1,%a\n */
/* 147 */	1,	/* bltu $%0,$%1,%a\n */
/* 148 */	1,	/* bne $%0,$%1,%a\n */
/* 149 */	1,	/* bne $%0,$%1,%a\n */
/* 150 */	1,	/* c.eq.s $f%0,$f%1; bc1t %a\n */
/* 151 */	1,	/* c.eq.d $f%0,$f%1; bc1t %a\n */
/* 152 */	1,	/* c.ule.s $f%0,$f%1; bc1t %a\n */
/* 153 */	1,	/* c.ule.d $f%0,$f%1; bc1t %a\n */
/* 154 */	1,	/* c.ult.s $f%0,$f%1; bc1t %a\n */
/* 155 */	1,	/* c.ult.d $f%0,$f%1; bc1t %a\n */
/* 156 */	1,	/* c.lt.s $f%0,$f%1; bc1f %a\n */
/* 157 */	1,	/* c.lt.d $f%0,$f%1; bc1f %a\n */
/* 158 */	1,	/* c.le.s $f%0,$f%1; bc1f %a\n */
/* 159 */	1,	/* c.le.d $f%0,$f%1; bc1f %a\n */
/* 160 */	1,	/* c.eq.s $f%0,$f%1; bc1f %a\n */
/* 161 */	1,	/* c.eq.d $f%0,$f%1; bc1f %a\n */
/* 162 */	0,	/* %a */
/* 163 */	1,	/* jal %0\n */
/* 164 */	1,	/* jal %0\n */
/* 165 */	1,	/* jal %0\n */
/* 166 */	1,	/* jal %0\n */
/* 167 */	1,	/* jal %0\n */
/* 168 */	1,	/* jal %0\n */
/* 169 */	0,	/* $%0 */
/* 170 */	0,	/* %a */
/* 171 */	1,	/* # ret\n */
/* 172 */	1,	/* # ret\n */
/* 173 */	1,	/* # ret\n */
/* 174 */	1,	/* # ret\n */
/* 175 */	1,	/* # ret\n */
/* 176 */	1,	/* # ret\n */
/* 177 */	1,	/* # arg\n */
/* 178 */	1,	/* # arg\n */
/* 179 */	1,	/* # arg\n */
/* 180 */	1,	/* # arg\n */
/* 181 */	1,	/* # arg\n */
/* 182 */	1,	/* # argb %0\n */
/* 183 */	1,	/* # asgnb %0 %1\n */
};

static char *_string[] = {
/* 0 */	0,
/* 1 */	"reg: INDIRI1(VREGP)",
/* 2 */	"reg: INDIRU1(VREGP)",
/* 3 */	"reg: INDIRI2(VREGP)",
/* 4 */	"reg: INDIRU2(VREGP)",
/* 5 */	"reg: INDIRF4(VREGP)",
/* 6 */	"reg: INDIRI4(VREGP)",
/* 7 */	"reg: INDIRP4(VREGP)",
/* 8 */	"reg: INDIRU4(VREGP)",
/* 9 */	"reg: INDIRF8(VREGP)",
/* 10 */	"reg: INDIRI8(VREGP)",
/* 11 */	"reg: INDIRP8(VREGP)",
/* 12 */	"reg: INDIRU8(VREGP)",
/* 13 */	"stmt: ASGNI1(VREGP,reg)",
/* 14 */	"stmt: ASGNU1(VREGP,reg)",
/* 15 */	"stmt: ASGNI2(VREGP,reg)",
/* 16 */	"stmt: ASGNU2(VREGP,reg)",
/* 17 */	"stmt: ASGNF4(VREGP,reg)",
/* 18 */	"stmt: ASGNI4(VREGP,reg)",
/* 19 */	"stmt: ASGNP4(VREGP,reg)",
/* 20 */	"stmt: ASGNU4(VREGP,reg)",
/* 21 */	"stmt: ASGNF8(VREGP,reg)",
/* 22 */	"stmt: ASGNI8(VREGP,reg)",
/* 23 */	"stmt: ASGNP8(VREGP,reg)",
/* 24 */	"stmt: ASGNU8(VREGP,reg)",
/* 25 */	"con: CNSTI1",
/* 26 */	"con: CNSTU1",
/* 27 */	"con: CNSTI2",
/* 28 */	"con: CNSTU2",
/* 29 */	"con: CNSTI4",
/* 30 */	"con: CNSTU4",
/* 31 */	"con: CNSTP4",
/* 32 */	"con: CNSTI8",
/* 33 */	"con: CNSTU8",
/* 34 */	"con: CNSTP8",
/* 35 */	"stmt: reg",
/* 36 */	"acon: con",
/* 37 */	"acon: ADDRGP4",
/* 38 */	"addr: ADDI4(reg,acon)",
/* 39 */	"addr: ADDU4(reg,acon)",
/* 40 */	"addr: ADDP4(reg,acon)",
/* 41 */	"addr: acon",
/* 42 */	"addr: reg",
/* 43 */	"addr: ADDRFP4",
/* 44 */	"addr: ADDRLP4",
/* 45 */	"reg: addr",
/* 46 */	"reg: CNSTI1",
/* 47 */	"reg: CNSTI2",
/* 48 */	"reg: CNSTI4",
/* 49 */	"reg: CNSTU1",
/* 50 */	"reg: CNSTU2",
/* 51 */	"reg: CNSTU4",
/* 52 */	"reg: CNSTP4",
/* 53 */	"stmt: ASGNI1(addr,reg)",
/* 54 */	"stmt: ASGNU1(addr,reg)",
/* 55 */	"stmt: ASGNI2(addr,reg)",
/* 56 */	"stmt: ASGNU2(addr,reg)",
/* 57 */	"stmt: ASGNI4(addr,reg)",
/* 58 */	"stmt: ASGNU4(addr,reg)",
/* 59 */	"stmt: ASGNP4(addr,reg)",
/* 60 */	"reg: INDIRI1(addr)",
/* 61 */	"reg: INDIRU1(addr)",
/* 62 */	"reg: INDIRI2(addr)",
/* 63 */	"reg: INDIRU2(addr)",
/* 64 */	"reg: INDIRI4(addr)",
/* 65 */	"reg: INDIRU4(addr)",
/* 66 */	"reg: INDIRP4(addr)",
/* 67 */	"reg: CVII4(INDIRI1(addr))",
/* 68 */	"reg: CVII4(INDIRI2(addr))",
/* 69 */	"reg: CVUU4(INDIRU1(addr))",
/* 70 */	"reg: CVUU4(INDIRU2(addr))",
/* 71 */	"reg: CVUI4(INDIRU1(addr))",
/* 72 */	"reg: CVUI4(INDIRU2(addr))",
/* 73 */	"reg: INDIRF4(addr)",
/* 74 */	"reg: INDIRF8(addr)",
/* 75 */	"stmt: ASGNF4(addr,reg)",
/* 76 */	"stmt: ASGNF8(addr,reg)",
/* 77 */	"reg: DIVI4(reg,reg)",
/* 78 */	"reg: DIVU4(reg,reg)",
/* 79 */	"reg: MODI4(reg,reg)",
/* 80 */	"reg: MODU4(reg,reg)",
/* 81 */	"reg: MULI4(reg,reg)",
/* 82 */	"reg: MULU4(reg,reg)",
/* 83 */	"rc: con",
/* 84 */	"rc: reg",
/* 85 */	"reg: ADDI4(reg,rc)",
/* 86 */	"reg: ADDP4(reg,rc)",
/* 87 */	"reg: ADDU4(reg,rc)",
/* 88 */	"reg: BANDI4(reg,rc)",
/* 89 */	"reg: BORI4(reg,rc)",
/* 90 */	"reg: BXORI4(reg,rc)",
/* 91 */	"reg: BANDU4(reg,rc)",
/* 92 */	"reg: BORU4(reg,rc)",
/* 93 */	"reg: BXORU4(reg,rc)",
/* 94 */	"reg: SUBI4(reg,rc)",
/* 95 */	"reg: SUBP4(reg,rc)",
/* 96 */	"reg: SUBU4(reg,rc)",
/* 97 */	"rc5: CNSTI4",
/* 98 */	"rc5: reg",
/* 99 */	"reg: LSHI4(reg,rc5)",
/* 100 */	"reg: LSHU4(reg,rc5)",
/* 101 */	"reg: RSHI4(reg,rc5)",
/* 102 */	"reg: RSHU4(reg,rc5)",
/* 103 */	"reg: BCOMI4(reg)",
/* 104 */	"reg: BCOMU4(reg)",
/* 105 */	"reg: NEGI4(reg)",
/* 106 */	"reg: LOADI1(reg)",
/* 107 */	"reg: LOADU1(reg)",
/* 108 */	"reg: LOADI2(reg)",
/* 109 */	"reg: LOADU2(reg)",
/* 110 */	"reg: LOADI4(reg)",
/* 111 */	"reg: LOADP4(reg)",
/* 112 */	"reg: LOADU4(reg)",
/* 113 */	"reg: ADDF4(reg,reg)",
/* 114 */	"reg: ADDF8(reg,reg)",
/* 115 */	"reg: DIVF4(reg,reg)",
/* 116 */	"reg: DIVF8(reg,reg)",
/* 117 */	"reg: MULF4(reg,reg)",
/* 118 */	"reg: MULF8(reg,reg)",
/* 119 */	"reg: SUBF4(reg,reg)",
/* 120 */	"reg: SUBF8(reg,reg)",
/* 121 */	"reg: LOADF4(reg)",
/* 122 */	"reg: LOADF8(reg)",
/* 123 */	"reg: NEGF4(reg)",
/* 124 */	"reg: NEGF8(reg)",
/* 125 */	"reg: CVII4(reg)",
/* 126 */	"reg: CVUI4(reg)",
/* 127 */	"reg: CVUU4(reg)",
/* 128 */	"reg: CVFF4(reg)",
/* 129 */	"reg: CVFF8(reg)",
/* 130 */	"reg: CVIF4(reg)",
/* 131 */	"reg: CVIF8(reg)",
/* 132 */	"reg: CVFI4(reg)",
/* 133 */	"reg: CVFI4(reg)",
/* 134 */	"stmt: LABELV",
/* 135 */	"stmt: JUMPV(acon)",
/* 136 */	"stmt: JUMPV(reg)",
/* 137 */	"stmt: JUMPV(reg)",
/* 138 */	"stmt: EQI4(reg,reg)",
/* 139 */	"stmt: EQU4(reg,reg)",
/* 140 */	"stmt: GEI4(reg,reg)",
/* 141 */	"stmt: GEU4(reg,reg)",
/* 142 */	"stmt: GTI4(reg,reg)",
/* 143 */	"stmt: GTU4(reg,reg)",
/* 144 */	"stmt: LEI4(reg,reg)",
/* 145 */	"stmt: LEU4(reg,reg)",
/* 146 */	"stmt: LTI4(reg,reg)",
/* 147 */	"stmt: LTU4(reg,reg)",
/* 148 */	"stmt: NEI4(reg,reg)",
/* 149 */	"stmt: NEU4(reg,reg)",
/* 150 */	"stmt: EQF4(reg,reg)",
/* 151 */	"stmt: EQF8(reg,reg)",
/* 152 */	"stmt: LEF4(reg,reg)",
/* 153 */	"stmt: LEF8(reg,reg)",
/* 154 */	"stmt: LTF4(reg,reg)",
/* 155 */	"stmt: LTF8(reg,reg)",
/* 156 */	"stmt: GEF4(reg,reg)",
/* 157 */	"stmt: GEF8(reg,reg)",
/* 158 */	"stmt: GTF4(reg,reg)",
/* 159 */	"stmt: GTF8(reg,reg)",
/* 160 */	"stmt: NEF4(reg,reg)",
/* 161 */	"stmt: NEF8(reg,reg)",
/* 162 */	"ar: ADDRGP4",
/* 163 */	"reg: CALLF4(ar)",
/* 164 */	"reg: CALLF8(ar)",
/* 165 */	"reg: CALLI4(ar)",
/* 166 */	"reg: CALLP4(ar)",
/* 167 */	"reg: CALLU4(ar)",
/* 168 */	"stmt: CALLV(ar)",
/* 169 */	"ar: reg",
/* 170 */	"ar: CNSTP4",
/* 171 */	"stmt: RETF4(reg)",
/* 172 */	"stmt: RETF8(reg)",
/* 173 */	"stmt: RETI4(reg)",
/* 174 */	"stmt: RETU4(reg)",
/* 175 */	"stmt: RETP4(reg)",
/* 176 */	"stmt: RETV(reg)",
/* 177 */	"stmt: ARGF4(reg)",
/* 178 */	"stmt: ARGF8(reg)",
/* 179 */	"stmt: ARGI4(reg)",
/* 180 */	"stmt: ARGP4(reg)",
/* 181 */	"stmt: ARGU4(reg)",
/* 182 */	"stmt: ARGB(INDIRB(reg))",
/* 183 */	"stmt: ASGNB(reg,INDIRB(reg))",
};

static short _decode_stmt[] = {
	0,
	13,
	14,
	15,
	16,
	17,
	18,
	19,
	20,
	21,
	22,
	23,
	24,
	35,
	53,
	54,
	55,
	56,
	57,
	58,
	59,
	75,
	76,
	134,
	135,
	136,
	137,
	138,
	139,
	140,
	141,
	142,
	143,
	144,
	145,
	146,
	147,
	148,
	149,
	150,
	151,
	152,
	153,
	154,
	155,
	156,
	157,
	158,
	159,
	160,
	161,
	168,
	171,
	172,
	173,
	174,
	175,
	176,
	177,
	178,
	179,
	180,
	181,
	182,
	183,
};

static short _decode_reg[] = {
	0,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	11,
	12,
	45,
	46,
	47,
	48,
	49,
	50,
	51,
	52,
	60,
	61,
	62,
	63,
	64,
	65,
	66,
	67,
	68,
	69,
	70,
	71,
	72,
	73,
	74,
	77,
	78,
	79,
	80,
	81,
	82,
	85,
	86,
	87,
	88,
	89,
	90,
	91,
	92,
	93,
	94,
	95,
	96,
	99,
	100,
	101,
	102,
	103,
	104,
	105,
	106,
	107,
	108,
	109,
	110,
	111,
	112,
	113,
	114,
	115,
	116,
	117,
	118,
	119,
	120,
	121,
	122,
	123,
	124,
	125,
	126,
	127,
	128,
	129,
	130,
	131,
	132,
	133,
	163,
	164,
	165,
	166,
	167,
};

static short _decode_con[] = {
	0,
	25,
	26,
	27,
	28,
	29,
	30,
	31,
	32,
	33,
	34,
};

static short _decode_acon[] = {
	0,
	36,
	37,
};

static short _decode_addr[] = {
	0,
	38,
	39,
	40,
	41,
	42,
	43,
	44,
};

static short _decode_rc[] = {
	0,
	83,
	84,
};

static short _decode_rc5[] = {
	0,
	97,
	98,
};

static short _decode_ar[] = {
	0,
	162,
	169,
	170,
};

static int _rule(void *state, int goalnt) {
	if (goalnt < 1 || goalnt > 8)
		fatal("_rule", "Bad goal nonterminal %d\n", goalnt);
	if (!state)
		return 0;
	switch (goalnt) {
	case _stmt_NT:	return _decode_stmt[((struct _state *)state)->rule._stmt];
	case _reg_NT:	return _decode_reg[((struct _state *)state)->rule._reg];
	case _con_NT:	return _decode_con[((struct _state *)state)->rule._con];
	case _acon_NT:	return _decode_acon[((struct _state *)state)->rule._acon];
	case _addr_NT:	return _decode_addr[((struct _state *)state)->rule._addr];
	case _rc_NT:	return _decode_rc[((struct _state *)state)->rule._rc];
	case _rc5_NT:	return _decode_rc5[((struct _state *)state)->rule._rc5];
	case _ar_NT:	return _decode_ar[((struct _state *)state)->rule._ar];
	default:
		fatal("_rule", "Bad goal nonterminal %d\n", goalnt);
		return 0;
	}
}

static void _closure_reg(NODEPTR_TYPE, int);
static void _closure_con(NODEPTR_TYPE, int);
static void _closure_acon(NODEPTR_TYPE, int);
static void _closure_addr(NODEPTR_TYPE, int);

static void _closure_reg(NODEPTR_TYPE a, int c) {
	struct _state *p = STATE_LABEL(a);
	if (c + 0 < p->cost[_ar_NT]) {
		p->cost[_ar_NT] = c + 0;
		p->rule._ar = 2;
	}
	if (c + 0 < p->cost[_rc5_NT]) {
		p->cost[_rc5_NT] = c + 0;
		p->rule._rc5 = 2;
	}
	if (c + 0 < p->cost[_rc_NT]) {
		p->cost[_rc_NT] = c + 0;
		p->rule._rc = 2;
	}
	if (c + 0 < p->cost[_addr_NT]) {
		p->cost[_addr_NT] = c + 0;
		p->rule._addr = 5;
		_closure_addr(a, c + 0);
	}
	if (c + 0 < p->cost[_stmt_NT]) {
		p->cost[_stmt_NT] = c + 0;
		p->rule._stmt = 13;
	}
}

static void _closure_con(NODEPTR_TYPE a, int c) {
	struct _state *p = STATE_LABEL(a);
	if (c + 0 < p->cost[_rc_NT]) {
		p->cost[_rc_NT] = c + 0;
		p->rule._rc = 1;
	}
	if (c + 0 < p->cost[_acon_NT]) {
		p->cost[_acon_NT] = c + 0;
		p->rule._acon = 1;
		_closure_acon(a, c + 0);
	}
}

static void _closure_acon(NODEPTR_TYPE a, int c) {
	struct _state *p = STATE_LABEL(a);
	if (c + 0 < p->cost[_addr_NT]) {
		p->cost[_addr_NT] = c + 0;
		p->rule._addr = 4;
		_closure_addr(a, c + 0);
	}
}

static void _closure_addr(NODEPTR_TYPE a, int c) {
	struct _state *p = STATE_LABEL(a);
	if (c + 1 < p->cost[_reg_NT]) {
		p->cost[_reg_NT] = c + 1;
		p->rule._reg = 13;
		_closure_reg(a, c + 1);
	}
}

static void _label(NODEPTR_TYPE a) {
	int c;
	struct _state *p;

	if (!a)
		fatal("_label", "Null tree\n", 0);
	STATE_LABEL(a) = p = allocate(sizeof *p, FUNC);
	p->rule._stmt = 0;
	p->cost[1] =
	p->cost[2] =
	p->cost[3] =
	p->cost[4] =
	p->cost[5] =
	p->cost[6] =
	p->cost[7] =
	p->cost[8] =
		0x7fff;
	switch (OP_LABEL(a)) {
	case 41: /* ARGB */
		_label(LEFT_CHILD(a));
		if (	/* stmt: ARGB(INDIRB(reg)) */
			LEFT_CHILD(a)->op == 73 /* INDIRB */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_reg_NT] + 1;
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 63;
			}
		}
		break;
	case 57: /* ASGNB */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		if (	/* stmt: ASGNB(reg,INDIRB(reg)) */
			RIGHT_CHILD(a)->op == 73 /* INDIRB */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_reg_NT] + 1;
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 64;
			}
		}
		break;
	case 73: /* INDIRB */
		_label(LEFT_CHILD(a));
		break;
	case 216: /* CALLV */
		_label(LEFT_CHILD(a));
		/* stmt: CALLV(ar) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_ar_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 51;
		}
		break;
	case 217: /* CALLB */
		break;
	case 233: /* LOADB */
		break;
	case 248: /* RETV */
		_label(LEFT_CHILD(a));
		/* stmt: RETV(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 57;
		}
		break;
	case 584: /* JUMPV */
		_label(LEFT_CHILD(a));
		/* stmt: JUMPV(acon) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_acon_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 24;
		}
		/* stmt: JUMPV(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + (!pic);
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 25;
		}
		/* stmt: JUMPV(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + (pic);
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 26;
		}
		break;
	case 600: /* LABELV */
		/* stmt: LABELV */
		if (0 + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = 0 + 0;
			p->rule._stmt = 23;
		}
		break;
	case 711: /* VREGP */
		break;
	case 1045: /* CNSTI1 */
		/* con: CNSTI1 */
		if (0 + 0 < p->cost[_con_NT]) {
			p->cost[_con_NT] = 0 + 0;
			p->rule._con = 1;
			_closure_con(a, 0 + 0);
		}
		/* reg: CNSTI1 */
		c = (range(a, 0, 0));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 14;
			_closure_reg(a, c + 0);
		}
		break;
	case 1046: /* CNSTU1 */
		/* con: CNSTU1 */
		if (0 + 0 < p->cost[_con_NT]) {
			p->cost[_con_NT] = 0 + 0;
			p->rule._con = 2;
			_closure_con(a, 0 + 0);
		}
		/* reg: CNSTU1 */
		c = (range(a, 0, 0));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 17;
			_closure_reg(a, c + 0);
		}
		break;
	case 1077: /* ASGNI1 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		if (	/* stmt: ASGNI1(VREGP,reg) */
			LEFT_CHILD(a)->op == 711 /* VREGP */
		) {
			c = ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 1;
			}
		}
		/* stmt: ASGNI1(addr,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 14;
		}
		break;
	case 1078: /* ASGNU1 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		if (	/* stmt: ASGNU1(VREGP,reg) */
			LEFT_CHILD(a)->op == 711 /* VREGP */
		) {
			c = ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 2;
			}
		}
		/* stmt: ASGNU1(addr,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 15;
		}
		break;
	case 1093: /* INDIRI1 */
		_label(LEFT_CHILD(a));
		if (	/* reg: INDIRI1(VREGP) */
			LEFT_CHILD(a)->op == 711 /* VREGP */
		) {
			if (mayrecalc(a)) {
				struct _state *q = a->syms[RX]->u.t.cse->x.state;
				if (q->cost[_stmt_NT] == 0) {
					p->cost[_stmt_NT] = 0;
					p->rule._stmt = q->rule._stmt;
				}
				if (q->cost[_reg_NT] == 0) {
					p->cost[_reg_NT] = 0;
					p->rule._reg = q->rule._reg;
				}
				if (q->cost[_con_NT] == 0) {
					p->cost[_con_NT] = 0;
					p->rule._con = q->rule._con;
				}
				if (q->cost[_acon_NT] == 0) {
					p->cost[_acon_NT] = 0;
					p->rule._acon = q->rule._acon;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_rc5_NT] == 0) {
					p->cost[_rc5_NT] = 0;
					p->rule._rc5 = q->rule._rc5;
				}
				if (q->cost[_ar_NT] == 0) {
					p->cost[_ar_NT] = 0;
					p->rule._ar = q->rule._ar;
				}
			}
			c = 0;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 1;
				_closure_reg(a, c + 0);
			}
		}
		/* reg: INDIRI1(addr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 21;
			_closure_reg(a, c + 0);
		}
		break;
	case 1094: /* INDIRU1 */
		_label(LEFT_CHILD(a));
		if (	/* reg: INDIRU1(VREGP) */
			LEFT_CHILD(a)->op == 711 /* VREGP */
		) {
			if (mayrecalc(a)) {
				struct _state *q = a->syms[RX]->u.t.cse->x.state;
				if (q->cost[_stmt_NT] == 0) {
					p->cost[_stmt_NT] = 0;
					p->rule._stmt = q->rule._stmt;
				}
				if (q->cost[_reg_NT] == 0) {
					p->cost[_reg_NT] = 0;
					p->rule._reg = q->rule._reg;
				}
				if (q->cost[_con_NT] == 0) {
					p->cost[_con_NT] = 0;
					p->rule._con = q->rule._con;
				}
				if (q->cost[_acon_NT] == 0) {
					p->cost[_acon_NT] = 0;
					p->rule._acon = q->rule._acon;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_rc5_NT] == 0) {
					p->cost[_rc5_NT] = 0;
					p->rule._rc5 = q->rule._rc5;
				}
				if (q->cost[_ar_NT] == 0) {
					p->cost[_ar_NT] = 0;
					p->rule._ar = q->rule._ar;
				}
			}
			c = 0;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 2;
				_closure_reg(a, c + 0);
			}
		}
		/* reg: INDIRU1(addr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 22;
			_closure_reg(a, c + 0);
		}
		break;
	case 1157: /* CVII1 */
		break;
	case 1158: /* CVIU1 */
		break;
	case 1205: /* CVUI1 */
		break;
	case 1206: /* CVUU1 */
		break;
	case 1253: /* LOADI1 */
		_label(LEFT_CHILD(a));
		/* reg: LOADI1(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + (move(a));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 61;
			_closure_reg(a, c + 0);
		}
		break;
	case 1254: /* LOADU1 */
		_label(LEFT_CHILD(a));
		/* reg: LOADU1(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + (move(a));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 62;
			_closure_reg(a, c + 0);
		}
		break;
	case 2069: /* CNSTI2 */
		/* con: CNSTI2 */
		if (0 + 0 < p->cost[_con_NT]) {
			p->cost[_con_NT] = 0 + 0;
			p->rule._con = 3;
			_closure_con(a, 0 + 0);
		}
		/* reg: CNSTI2 */
		c = (range(a, 0, 0));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 15;
			_closure_reg(a, c + 0);
		}
		break;
	case 2070: /* CNSTU2 */
		/* con: CNSTU2 */
		if (0 + 0 < p->cost[_con_NT]) {
			p->cost[_con_NT] = 0 + 0;
			p->rule._con = 4;
			_closure_con(a, 0 + 0);
		}
		/* reg: CNSTU2 */
		c = (range(a, 0, 0));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 18;
			_closure_reg(a, c + 0);
		}
		break;
	case 2101: /* ASGNI2 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		if (	/* stmt: ASGNI2(VREGP,reg) */
			LEFT_CHILD(a)->op == 711 /* VREGP */
		) {
			c = ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 3;
			}
		}
		/* stmt: ASGNI2(addr,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 16;
		}
		break;
	case 2102: /* ASGNU2 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		if (	/* stmt: ASGNU2(VREGP,reg) */
			LEFT_CHILD(a)->op == 711 /* VREGP */
		) {
			c = ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 4;
			}
		}
		/* stmt: ASGNU2(addr,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 17;
		}
		break;
	case 2117: /* INDIRI2 */
		_label(LEFT_CHILD(a));
		if (	/* reg: INDIRI2(VREGP) */
			LEFT_CHILD(a)->op == 711 /* VREGP */
		) {
			if (mayrecalc(a)) {
				struct _state *q = a->syms[RX]->u.t.cse->x.state;
				if (q->cost[_stmt_NT] == 0) {
					p->cost[_stmt_NT] = 0;
					p->rule._stmt = q->rule._stmt;
				}
				if (q->cost[_reg_NT] == 0) {
					p->cost[_reg_NT] = 0;
					p->rule._reg = q->rule._reg;
				}
				if (q->cost[_con_NT] == 0) {
					p->cost[_con_NT] = 0;
					p->rule._con = q->rule._con;
				}
				if (q->cost[_acon_NT] == 0) {
					p->cost[_acon_NT] = 0;
					p->rule._acon = q->rule._acon;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_rc5_NT] == 0) {
					p->cost[_rc5_NT] = 0;
					p->rule._rc5 = q->rule._rc5;
				}
				if (q->cost[_ar_NT] == 0) {
					p->cost[_ar_NT] = 0;
					p->rule._ar = q->rule._ar;
				}
			}
			c = 0;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 3;
				_closure_reg(a, c + 0);
			}
		}
		/* reg: INDIRI2(addr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 23;
			_closure_reg(a, c + 0);
		}
		break;
	case 2118: /* INDIRU2 */
		_label(LEFT_CHILD(a));
		if (	/* reg: INDIRU2(VREGP) */
			LEFT_CHILD(a)->op == 711 /* VREGP */
		) {
			if (mayrecalc(a)) {
				struct _state *q = a->syms[RX]->u.t.cse->x.state;
				if (q->cost[_stmt_NT] == 0) {
					p->cost[_stmt_NT] = 0;
					p->rule._stmt = q->rule._stmt;
				}
				if (q->cost[_reg_NT] == 0) {
					p->cost[_reg_NT] = 0;
					p->rule._reg = q->rule._reg;
				}
				if (q->cost[_con_NT] == 0) {
					p->cost[_con_NT] = 0;
					p->rule._con = q->rule._con;
				}
				if (q->cost[_acon_NT] == 0) {
					p->cost[_acon_NT] = 0;
					p->rule._acon = q->rule._acon;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_rc5_NT] == 0) {
					p->cost[_rc5_NT] = 0;
					p->rule._rc5 = q->rule._rc5;
				}
				if (q->cost[_ar_NT] == 0) {
					p->cost[_ar_NT] = 0;
					p->rule._ar = q->rule._ar;
				}
			}
			c = 0;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 4;
				_closure_reg(a, c + 0);
			}
		}
		/* reg: INDIRU2(addr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 24;
			_closure_reg(a, c + 0);
		}
		break;
	case 2181: /* CVII2 */
		break;
	case 2182: /* CVIU2 */
		break;
	case 2229: /* CVUI2 */
		break;
	case 2230: /* CVUU2 */
		break;
	case 2277: /* LOADI2 */
		_label(LEFT_CHILD(a));
		/* reg: LOADI2(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + (move(a));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 63;
			_closure_reg(a, c + 0);
		}
		break;
	case 2278: /* LOADU2 */
		_label(LEFT_CHILD(a));
		/* reg: LOADU2(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + (move(a));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 64;
			_closure_reg(a, c + 0);
		}
		break;
	case 4113: /* CNSTF4 */
		break;
	case 4117: /* CNSTI4 */
		/* con: CNSTI4 */
		if (0 + 0 < p->cost[_con_NT]) {
			p->cost[_con_NT] = 0 + 0;
			p->rule._con = 5;
			_closure_con(a, 0 + 0);
		}
		/* reg: CNSTI4 */
		c = (range(a, 0, 0));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 16;
			_closure_reg(a, c + 0);
		}
		/* rc5: CNSTI4 */
		c = (range(a,0,31));
		if (c + 0 < p->cost[_rc5_NT]) {
			p->cost[_rc5_NT] = c + 0;
			p->rule._rc5 = 1;
		}
		break;
	case 4118: /* CNSTU4 */
		/* con: CNSTU4 */
		if (0 + 0 < p->cost[_con_NT]) {
			p->cost[_con_NT] = 0 + 0;
			p->rule._con = 6;
			_closure_con(a, 0 + 0);
		}
		/* reg: CNSTU4 */
		c = (range(a, 0, 0));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 19;
			_closure_reg(a, c + 0);
		}
		break;
	case 4119: /* CNSTP4 */
		/* con: CNSTP4 */
		if (0 + 0 < p->cost[_con_NT]) {
			p->cost[_con_NT] = 0 + 0;
			p->rule._con = 7;
			_closure_con(a, 0 + 0);
		}
		/* reg: CNSTP4 */
		c = (range(a, 0, 0));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 20;
			_closure_reg(a, c + 0);
		}
		/* ar: CNSTP4 */
		c = (range(a, 0, 0x0fffffff));
		if (c + 0 < p->cost[_ar_NT]) {
			p->cost[_ar_NT] = c + 0;
			p->rule._ar = 3;
		}
		break;
	case 4129: /* ARGF4 */
		_label(LEFT_CHILD(a));
		/* stmt: ARGF4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 58;
		}
		break;
	case 4133: /* ARGI4 */
		_label(LEFT_CHILD(a));
		/* stmt: ARGI4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 60;
		}
		break;
	case 4134: /* ARGU4 */
		_label(LEFT_CHILD(a));
		/* stmt: ARGU4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 62;
		}
		break;
	case 4135: /* ARGP4 */
		_label(LEFT_CHILD(a));
		/* stmt: ARGP4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 61;
		}
		break;
	case 4145: /* ASGNF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		if (	/* stmt: ASGNF4(VREGP,reg) */
			LEFT_CHILD(a)->op == 711 /* VREGP */
		) {
			c = ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 5;
			}
		}
		/* stmt: ASGNF4(addr,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 21;
		}
		break;
	case 4149: /* ASGNI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		if (	/* stmt: ASGNI4(VREGP,reg) */
			LEFT_CHILD(a)->op == 711 /* VREGP */
		) {
			c = ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 6;
			}
		}
		/* stmt: ASGNI4(addr,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 18;
		}
		break;
	case 4150: /* ASGNU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		if (	/* stmt: ASGNU4(VREGP,reg) */
			LEFT_CHILD(a)->op == 711 /* VREGP */
		) {
			c = ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 8;
			}
		}
		/* stmt: ASGNU4(addr,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 19;
		}
		break;
	case 4151: /* ASGNP4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		if (	/* stmt: ASGNP4(VREGP,reg) */
			LEFT_CHILD(a)->op == 711 /* VREGP */
		) {
			c = ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 7;
			}
		}
		/* stmt: ASGNP4(addr,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 20;
		}
		break;
	case 4161: /* INDIRF4 */
		_label(LEFT_CHILD(a));
		if (	/* reg: INDIRF4(VREGP) */
			LEFT_CHILD(a)->op == 711 /* VREGP */
		) {
			if (mayrecalc(a)) {
				struct _state *q = a->syms[RX]->u.t.cse->x.state;
				if (q->cost[_stmt_NT] == 0) {
					p->cost[_stmt_NT] = 0;
					p->rule._stmt = q->rule._stmt;
				}
				if (q->cost[_reg_NT] == 0) {
					p->cost[_reg_NT] = 0;
					p->rule._reg = q->rule._reg;
				}
				if (q->cost[_con_NT] == 0) {
					p->cost[_con_NT] = 0;
					p->rule._con = q->rule._con;
				}
				if (q->cost[_acon_NT] == 0) {
					p->cost[_acon_NT] = 0;
					p->rule._acon = q->rule._acon;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_rc5_NT] == 0) {
					p->cost[_rc5_NT] = 0;
					p->rule._rc5 = q->rule._rc5;
				}
				if (q->cost[_ar_NT] == 0) {
					p->cost[_ar_NT] = 0;
					p->rule._ar = q->rule._ar;
				}
			}
			c = 0;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 5;
				_closure_reg(a, c + 0);
			}
		}
		/* reg: INDIRF4(addr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 34;
			_closure_reg(a, c + 0);
		}
		break;
	case 4165: /* INDIRI4 */
		_label(LEFT_CHILD(a));
		if (	/* reg: INDIRI4(VREGP) */
			LEFT_CHILD(a)->op == 711 /* VREGP */
		) {
			if (mayrecalc(a)) {
				struct _state *q = a->syms[RX]->u.t.cse->x.state;
				if (q->cost[_stmt_NT] == 0) {
					p->cost[_stmt_NT] = 0;
					p->rule._stmt = q->rule._stmt;
				}
				if (q->cost[_reg_NT] == 0) {
					p->cost[_reg_NT] = 0;
					p->rule._reg = q->rule._reg;
				}
				if (q->cost[_con_NT] == 0) {
					p->cost[_con_NT] = 0;
					p->rule._con = q->rule._con;
				}
				if (q->cost[_acon_NT] == 0) {
					p->cost[_acon_NT] = 0;
					p->rule._acon = q->rule._acon;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_rc5_NT] == 0) {
					p->cost[_rc5_NT] = 0;
					p->rule._rc5 = q->rule._rc5;
				}
				if (q->cost[_ar_NT] == 0) {
					p->cost[_ar_NT] = 0;
					p->rule._ar = q->rule._ar;
				}
			}
			c = 0;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 6;
				_closure_reg(a, c + 0);
			}
		}
		/* reg: INDIRI4(addr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 25;
			_closure_reg(a, c + 0);
		}
		break;
	case 4166: /* INDIRU4 */
		_label(LEFT_CHILD(a));
		if (	/* reg: INDIRU4(VREGP) */
			LEFT_CHILD(a)->op == 711 /* VREGP */
		) {
			if (mayrecalc(a)) {
				struct _state *q = a->syms[RX]->u.t.cse->x.state;
				if (q->cost[_stmt_NT] == 0) {
					p->cost[_stmt_NT] = 0;
					p->rule._stmt = q->rule._stmt;
				}
				if (q->cost[_reg_NT] == 0) {
					p->cost[_reg_NT] = 0;
					p->rule._reg = q->rule._reg;
				}
				if (q->cost[_con_NT] == 0) {
					p->cost[_con_NT] = 0;
					p->rule._con = q->rule._con;
				}
				if (q->cost[_acon_NT] == 0) {
					p->cost[_acon_NT] = 0;
					p->rule._acon = q->rule._acon;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_rc5_NT] == 0) {
					p->cost[_rc5_NT] = 0;
					p->rule._rc5 = q->rule._rc5;
				}
				if (q->cost[_ar_NT] == 0) {
					p->cost[_ar_NT] = 0;
					p->rule._ar = q->rule._ar;
				}
			}
			c = 0;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 8;
				_closure_reg(a, c + 0);
			}
		}
		/* reg: INDIRU4(addr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 26;
			_closure_reg(a, c + 0);
		}
		break;
	case 4167: /* INDIRP4 */
		_label(LEFT_CHILD(a));
		if (	/* reg: INDIRP4(VREGP) */
			LEFT_CHILD(a)->op == 711 /* VREGP */
		) {
			if (mayrecalc(a)) {
				struct _state *q = a->syms[RX]->u.t.cse->x.state;
				if (q->cost[_stmt_NT] == 0) {
					p->cost[_stmt_NT] = 0;
					p->rule._stmt = q->rule._stmt;
				}
				if (q->cost[_reg_NT] == 0) {
					p->cost[_reg_NT] = 0;
					p->rule._reg = q->rule._reg;
				}
				if (q->cost[_con_NT] == 0) {
					p->cost[_con_NT] = 0;
					p->rule._con = q->rule._con;
				}
				if (q->cost[_acon_NT] == 0) {
					p->cost[_acon_NT] = 0;
					p->rule._acon = q->rule._acon;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_rc5_NT] == 0) {
					p->cost[_rc5_NT] = 0;
					p->rule._rc5 = q->rule._rc5;
				}
				if (q->cost[_ar_NT] == 0) {
					p->cost[_ar_NT] = 0;
					p->rule._ar = q->rule._ar;
				}
			}
			c = 0;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 7;
				_closure_reg(a, c + 0);
			}
		}
		/* reg: INDIRP4(addr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 27;
			_closure_reg(a, c + 0);
		}
		break;
	case 4209: /* CVFF4 */
		_label(LEFT_CHILD(a));
		/* reg: CVFF4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 83;
			_closure_reg(a, c + 0);
		}
		break;
	case 4213: /* CVFI4 */
		_label(LEFT_CHILD(a));
		/* reg: CVFI4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((a->syms[0]->u.c.v.i==4?2:LBURG_MAX));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 87;
			_closure_reg(a, c + 0);
		}
		/* reg: CVFI4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((a->syms[0]->u.c.v.i==8?2:LBURG_MAX));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 88;
			_closure_reg(a, c + 0);
		}
		break;
	case 4225: /* CVIF4 */
		_label(LEFT_CHILD(a));
		/* reg: CVIF4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 85;
			_closure_reg(a, c + 0);
		}
		break;
	case 4229: /* CVII4 */
		_label(LEFT_CHILD(a));
		if (	/* reg: CVII4(INDIRI1(addr)) */
			LEFT_CHILD(a)->op == 1093 /* INDIRI1 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_addr_NT] + 1;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 28;
				_closure_reg(a, c + 0);
			}
		}
		if (	/* reg: CVII4(INDIRI2(addr)) */
			LEFT_CHILD(a)->op == 2117 /* INDIRI2 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_addr_NT] + 1;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 29;
				_closure_reg(a, c + 0);
			}
		}
		/* reg: CVII4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 80;
			_closure_reg(a, c + 0);
		}
		break;
	case 4230: /* CVIU4 */
		break;
	case 4246: /* CVPU4 */
		break;
	case 4247: /* CVPP4 */
		break;
	case 4277: /* CVUI4 */
		_label(LEFT_CHILD(a));
		if (	/* reg: CVUI4(INDIRU1(addr)) */
			LEFT_CHILD(a)->op == 1094 /* INDIRU1 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_addr_NT] + 1;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 32;
				_closure_reg(a, c + 0);
			}
		}
		if (	/* reg: CVUI4(INDIRU2(addr)) */
			LEFT_CHILD(a)->op == 2118 /* INDIRU2 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_addr_NT] + 1;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 33;
				_closure_reg(a, c + 0);
			}
		}
		/* reg: CVUI4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 81;
			_closure_reg(a, c + 0);
		}
		break;
	case 4278: /* CVUU4 */
		_label(LEFT_CHILD(a));
		if (	/* reg: CVUU4(INDIRU1(addr)) */
			LEFT_CHILD(a)->op == 1094 /* INDIRU1 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_addr_NT] + 1;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 30;
				_closure_reg(a, c + 0);
			}
		}
		if (	/* reg: CVUU4(INDIRU2(addr)) */
			LEFT_CHILD(a)->op == 2118 /* INDIRU2 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_addr_NT] + 1;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 31;
				_closure_reg(a, c + 0);
			}
		}
		/* reg: CVUU4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 82;
			_closure_reg(a, c + 0);
		}
		break;
	case 4279: /* CVUP4 */
		break;
	case 4289: /* NEGF4 */
		_label(LEFT_CHILD(a));
		/* reg: NEGF4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 78;
			_closure_reg(a, c + 0);
		}
		break;
	case 4293: /* NEGI4 */
		_label(LEFT_CHILD(a));
		/* reg: NEGI4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 60;
			_closure_reg(a, c + 0);
		}
		break;
	case 4305: /* CALLF4 */
		_label(LEFT_CHILD(a));
		/* reg: CALLF4(ar) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_ar_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 89;
			_closure_reg(a, c + 0);
		}
		break;
	case 4309: /* CALLI4 */
		_label(LEFT_CHILD(a));
		/* reg: CALLI4(ar) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_ar_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 91;
			_closure_reg(a, c + 0);
		}
		break;
	case 4310: /* CALLU4 */
		_label(LEFT_CHILD(a));
		/* reg: CALLU4(ar) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_ar_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 93;
			_closure_reg(a, c + 0);
		}
		break;
	case 4311: /* CALLP4 */
		_label(LEFT_CHILD(a));
		/* reg: CALLP4(ar) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_ar_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 92;
			_closure_reg(a, c + 0);
		}
		break;
	case 4321: /* LOADF4 */
		_label(LEFT_CHILD(a));
		/* reg: LOADF4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + (move(a));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 76;
			_closure_reg(a, c + 0);
		}
		break;
	case 4325: /* LOADI4 */
		_label(LEFT_CHILD(a));
		/* reg: LOADI4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + (move(a));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 65;
			_closure_reg(a, c + 0);
		}
		break;
	case 4326: /* LOADU4 */
		_label(LEFT_CHILD(a));
		/* reg: LOADU4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + (move(a));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 67;
			_closure_reg(a, c + 0);
		}
		break;
	case 4327: /* LOADP4 */
		_label(LEFT_CHILD(a));
		/* reg: LOADP4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + (move(a));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 66;
			_closure_reg(a, c + 0);
		}
		break;
	case 4337: /* RETF4 */
		_label(LEFT_CHILD(a));
		/* stmt: RETF4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 52;
		}
		break;
	case 4341: /* RETI4 */
		_label(LEFT_CHILD(a));
		/* stmt: RETI4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 54;
		}
		break;
	case 4342: /* RETU4 */
		_label(LEFT_CHILD(a));
		/* stmt: RETU4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 55;
		}
		break;
	case 4343: /* RETP4 */
		_label(LEFT_CHILD(a));
		/* stmt: RETP4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 56;
		}
		break;
	case 4359: /* ADDRGP4 */
		/* acon: ADDRGP4 */
		if (0 + 0 < p->cost[_acon_NT]) {
			p->cost[_acon_NT] = 0 + 0;
			p->rule._acon = 2;
			_closure_acon(a, 0 + 0);
		}
		/* ar: ADDRGP4 */
		if (0 + 0 < p->cost[_ar_NT]) {
			p->cost[_ar_NT] = 0 + 0;
			p->rule._ar = 1;
		}
		break;
	case 4375: /* ADDRFP4 */
		/* addr: ADDRFP4 */
		if (0 + 0 < p->cost[_addr_NT]) {
			p->cost[_addr_NT] = 0 + 0;
			p->rule._addr = 6;
			_closure_addr(a, 0 + 0);
		}
		break;
	case 4391: /* ADDRLP4 */
		/* addr: ADDRLP4 */
		if (0 + 0 < p->cost[_addr_NT]) {
			p->cost[_addr_NT] = 0 + 0;
			p->rule._addr = 7;
			_closure_addr(a, 0 + 0);
		}
		break;
	case 4401: /* ADDF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: ADDF4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 68;
			_closure_reg(a, c + 0);
		}
		break;
	case 4405: /* ADDI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* addr: ADDI4(reg,acon) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_acon_NT] + 0;
		if (c + 0 < p->cost[_addr_NT]) {
			p->cost[_addr_NT] = c + 0;
			p->rule._addr = 1;
			_closure_addr(a, c + 0);
		}
		/* reg: ADDI4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 42;
			_closure_reg(a, c + 0);
		}
		break;
	case 4406: /* ADDU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* addr: ADDU4(reg,acon) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_acon_NT] + 0;
		if (c + 0 < p->cost[_addr_NT]) {
			p->cost[_addr_NT] = c + 0;
			p->rule._addr = 2;
			_closure_addr(a, c + 0);
		}
		/* reg: ADDU4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 44;
			_closure_reg(a, c + 0);
		}
		break;
	case 4407: /* ADDP4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* addr: ADDP4(reg,acon) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_acon_NT] + 0;
		if (c + 0 < p->cost[_addr_NT]) {
			p->cost[_addr_NT] = c + 0;
			p->rule._addr = 3;
			_closure_addr(a, c + 0);
		}
		/* reg: ADDP4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 43;
			_closure_reg(a, c + 0);
		}
		break;
	case 4417: /* SUBF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: SUBF4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 74;
			_closure_reg(a, c + 0);
		}
		break;
	case 4421: /* SUBI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: SUBI4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 51;
			_closure_reg(a, c + 0);
		}
		break;
	case 4422: /* SUBU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: SUBU4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 53;
			_closure_reg(a, c + 0);
		}
		break;
	case 4423: /* SUBP4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: SUBP4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 52;
			_closure_reg(a, c + 0);
		}
		break;
	case 4437: /* LSHI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: LSHI4(reg,rc5) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc5_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 54;
			_closure_reg(a, c + 0);
		}
		break;
	case 4438: /* LSHU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: LSHU4(reg,rc5) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc5_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 55;
			_closure_reg(a, c + 0);
		}
		break;
	case 4453: /* MODI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: MODI4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 38;
			_closure_reg(a, c + 0);
		}
		break;
	case 4454: /* MODU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: MODU4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 39;
			_closure_reg(a, c + 0);
		}
		break;
	case 4469: /* RSHI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: RSHI4(reg,rc5) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc5_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 56;
			_closure_reg(a, c + 0);
		}
		break;
	case 4470: /* RSHU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: RSHU4(reg,rc5) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc5_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 57;
			_closure_reg(a, c + 0);
		}
		break;
	case 4485: /* BANDI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: BANDI4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 45;
			_closure_reg(a, c + 0);
		}
		break;
	case 4486: /* BANDU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: BANDU4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 48;
			_closure_reg(a, c + 0);
		}
		break;
	case 4501: /* BCOMI4 */
		_label(LEFT_CHILD(a));
		/* reg: BCOMI4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 58;
			_closure_reg(a, c + 0);
		}
		break;
	case 4502: /* BCOMU4 */
		_label(LEFT_CHILD(a));
		/* reg: BCOMU4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 59;
			_closure_reg(a, c + 0);
		}
		break;
	case 4517: /* BORI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: BORI4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 46;
			_closure_reg(a, c + 0);
		}
		break;
	case 4518: /* BORU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: BORU4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 49;
			_closure_reg(a, c + 0);
		}
		break;
	case 4533: /* BXORI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: BXORI4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 47;
			_closure_reg(a, c + 0);
		}
		break;
	case 4534: /* BXORU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: BXORU4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 50;
			_closure_reg(a, c + 0);
		}
		break;
	case 4545: /* DIVF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: DIVF4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 70;
			_closure_reg(a, c + 0);
		}
		break;
	case 4549: /* DIVI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: DIVI4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 36;
			_closure_reg(a, c + 0);
		}
		break;
	case 4550: /* DIVU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: DIVU4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 37;
			_closure_reg(a, c + 0);
		}
		break;
	case 4561: /* MULF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: MULF4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 72;
			_closure_reg(a, c + 0);
		}
		break;
	case 4565: /* MULI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: MULI4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 40;
			_closure_reg(a, c + 0);
		}
		break;
	case 4566: /* MULU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: MULU4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 41;
			_closure_reg(a, c + 0);
		}
		break;
	case 4577: /* EQF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: EQF4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 39;
		}
		break;
	case 4581: /* EQI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: EQI4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 27;
		}
		break;
	case 4582: /* EQU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: EQU4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 28;
		}
		break;
	case 4593: /* GEF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GEF4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 45;
		}
		break;
	case 4597: /* GEI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GEI4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 29;
		}
		break;
	case 4598: /* GEU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GEU4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 30;
		}
		break;
	case 4609: /* GTF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GTF4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 47;
		}
		break;
	case 4613: /* GTI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GTI4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 31;
		}
		break;
	case 4614: /* GTU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GTU4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 32;
		}
		break;
	case 4625: /* LEF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LEF4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 41;
		}
		break;
	case 4629: /* LEI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LEI4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 33;
		}
		break;
	case 4630: /* LEU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LEU4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 34;
		}
		break;
	case 4641: /* LTF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LTF4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 43;
		}
		break;
	case 4645: /* LTI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LTI4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 35;
		}
		break;
	case 4646: /* LTU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LTU4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 36;
		}
		break;
	case 4657: /* NEF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: NEF4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 49;
		}
		break;
	case 4661: /* NEI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: NEI4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 37;
		}
		break;
	case 4662: /* NEU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: NEU4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 38;
		}
		break;
	case 8209: /* CNSTF8 */
		break;
	case 8213: /* CNSTI8 */
		/* con: CNSTI8 */
		if (0 + 0 < p->cost[_con_NT]) {
			p->cost[_con_NT] = 0 + 0;
			p->rule._con = 8;
			_closure_con(a, 0 + 0);
		}
		break;
	case 8214: /* CNSTU8 */
		/* con: CNSTU8 */
		if (0 + 0 < p->cost[_con_NT]) {
			p->cost[_con_NT] = 0 + 0;
			p->rule._con = 9;
			_closure_con(a, 0 + 0);
		}
		break;
	case 8215: /* CNSTP8 */
		/* con: CNSTP8 */
		if (0 + 0 < p->cost[_con_NT]) {
			p->cost[_con_NT] = 0 + 0;
			p->rule._con = 10;
			_closure_con(a, 0 + 0);
		}
		break;
	case 8225: /* ARGF8 */
		_label(LEFT_CHILD(a));
		/* stmt: ARGF8(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 59;
		}
		break;
	case 8229: /* ARGI8 */
		break;
	case 8230: /* ARGU8 */
		break;
	case 8231: /* ARGP8 */
		break;
	case 8241: /* ASGNF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		if (	/* stmt: ASGNF8(VREGP,reg) */
			LEFT_CHILD(a)->op == 711 /* VREGP */
		) {
			c = ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 9;
			}
		}
		/* stmt: ASGNF8(addr,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 22;
		}
		break;
	case 8245: /* ASGNI8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		if (	/* stmt: ASGNI8(VREGP,reg) */
			LEFT_CHILD(a)->op == 711 /* VREGP */
		) {
			c = ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 10;
			}
		}
		break;
	case 8246: /* ASGNU8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		if (	/* stmt: ASGNU8(VREGP,reg) */
			LEFT_CHILD(a)->op == 711 /* VREGP */
		) {
			c = ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 12;
			}
		}
		break;
	case 8247: /* ASGNP8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		if (	/* stmt: ASGNP8(VREGP,reg) */
			LEFT_CHILD(a)->op == 711 /* VREGP */
		) {
			c = ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 11;
			}
		}
		break;
	case 8257: /* INDIRF8 */
		_label(LEFT_CHILD(a));
		if (	/* reg: INDIRF8(VREGP) */
			LEFT_CHILD(a)->op == 711 /* VREGP */
		) {
			if (mayrecalc(a)) {
				struct _state *q = a->syms[RX]->u.t.cse->x.state;
				if (q->cost[_stmt_NT] == 0) {
					p->cost[_stmt_NT] = 0;
					p->rule._stmt = q->rule._stmt;
				}
				if (q->cost[_reg_NT] == 0) {
					p->cost[_reg_NT] = 0;
					p->rule._reg = q->rule._reg;
				}
				if (q->cost[_con_NT] == 0) {
					p->cost[_con_NT] = 0;
					p->rule._con = q->rule._con;
				}
				if (q->cost[_acon_NT] == 0) {
					p->cost[_acon_NT] = 0;
					p->rule._acon = q->rule._acon;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_rc5_NT] == 0) {
					p->cost[_rc5_NT] = 0;
					p->rule._rc5 = q->rule._rc5;
				}
				if (q->cost[_ar_NT] == 0) {
					p->cost[_ar_NT] = 0;
					p->rule._ar = q->rule._ar;
				}
			}
			c = 0;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 9;
				_closure_reg(a, c + 0);
			}
		}
		/* reg: INDIRF8(addr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 35;
			_closure_reg(a, c + 0);
		}
		break;
	case 8261: /* INDIRI8 */
		_label(LEFT_CHILD(a));
		if (	/* reg: INDIRI8(VREGP) */
			LEFT_CHILD(a)->op == 711 /* VREGP */
		) {
			if (mayrecalc(a)) {
				struct _state *q = a->syms[RX]->u.t.cse->x.state;
				if (q->cost[_stmt_NT] == 0) {
					p->cost[_stmt_NT] = 0;
					p->rule._stmt = q->rule._stmt;
				}
				if (q->cost[_reg_NT] == 0) {
					p->cost[_reg_NT] = 0;
					p->rule._reg = q->rule._reg;
				}
				if (q->cost[_con_NT] == 0) {
					p->cost[_con_NT] = 0;
					p->rule._con = q->rule._con;
				}
				if (q->cost[_acon_NT] == 0) {
					p->cost[_acon_NT] = 0;
					p->rule._acon = q->rule._acon;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_rc5_NT] == 0) {
					p->cost[_rc5_NT] = 0;
					p->rule._rc5 = q->rule._rc5;
				}
				if (q->cost[_ar_NT] == 0) {
					p->cost[_ar_NT] = 0;
					p->rule._ar = q->rule._ar;
				}
			}
			c = 0;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 10;
				_closure_reg(a, c + 0);
			}
		}
		break;
	case 8262: /* INDIRU8 */
		_label(LEFT_CHILD(a));
		if (	/* reg: INDIRU8(VREGP) */
			LEFT_CHILD(a)->op == 711 /* VREGP */
		) {
			if (mayrecalc(a)) {
				struct _state *q = a->syms[RX]->u.t.cse->x.state;
				if (q->cost[_stmt_NT] == 0) {
					p->cost[_stmt_NT] = 0;
					p->rule._stmt = q->rule._stmt;
				}
				if (q->cost[_reg_NT] == 0) {
					p->cost[_reg_NT] = 0;
					p->rule._reg = q->rule._reg;
				}
				if (q->cost[_con_NT] == 0) {
					p->cost[_con_NT] = 0;
					p->rule._con = q->rule._con;
				}
				if (q->cost[_acon_NT] == 0) {
					p->cost[_acon_NT] = 0;
					p->rule._acon = q->rule._acon;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_rc5_NT] == 0) {
					p->cost[_rc5_NT] = 0;
					p->rule._rc5 = q->rule._rc5;
				}
				if (q->cost[_ar_NT] == 0) {
					p->cost[_ar_NT] = 0;
					p->rule._ar = q->rule._ar;
				}
			}
			c = 0;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 12;
				_closure_reg(a, c + 0);
			}
		}
		break;
	case 8263: /* INDIRP8 */
		_label(LEFT_CHILD(a));
		if (	/* reg: INDIRP8(VREGP) */
			LEFT_CHILD(a)->op == 711 /* VREGP */
		) {
			if (mayrecalc(a)) {
				struct _state *q = a->syms[RX]->u.t.cse->x.state;
				if (q->cost[_stmt_NT] == 0) {
					p->cost[_stmt_NT] = 0;
					p->rule._stmt = q->rule._stmt;
				}
				if (q->cost[_reg_NT] == 0) {
					p->cost[_reg_NT] = 0;
					p->rule._reg = q->rule._reg;
				}
				if (q->cost[_con_NT] == 0) {
					p->cost[_con_NT] = 0;
					p->rule._con = q->rule._con;
				}
				if (q->cost[_acon_NT] == 0) {
					p->cost[_acon_NT] = 0;
					p->rule._acon = q->rule._acon;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_rc5_NT] == 0) {
					p->cost[_rc5_NT] = 0;
					p->rule._rc5 = q->rule._rc5;
				}
				if (q->cost[_ar_NT] == 0) {
					p->cost[_ar_NT] = 0;
					p->rule._ar = q->rule._ar;
				}
			}
			c = 0;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 11;
				_closure_reg(a, c + 0);
			}
		}
		break;
	case 8305: /* CVFF8 */
		_label(LEFT_CHILD(a));
		/* reg: CVFF8(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 84;
			_closure_reg(a, c + 0);
		}
		break;
	case 8309: /* CVFI8 */
		break;
	case 8321: /* CVIF8 */
		_label(LEFT_CHILD(a));
		/* reg: CVIF8(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 86;
			_closure_reg(a, c + 0);
		}
		break;
	case 8325: /* CVII8 */
		break;
	case 8326: /* CVIU8 */
		break;
	case 8342: /* CVPU8 */
		break;
	case 8343: /* CVPP8 */
		break;
	case 8373: /* CVUI8 */
		break;
	case 8374: /* CVUU8 */
		break;
	case 8375: /* CVUP8 */
		break;
	case 8385: /* NEGF8 */
		_label(LEFT_CHILD(a));
		/* reg: NEGF8(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 79;
			_closure_reg(a, c + 0);
		}
		break;
	case 8389: /* NEGI8 */
		break;
	case 8401: /* CALLF8 */
		_label(LEFT_CHILD(a));
		/* reg: CALLF8(ar) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_ar_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 90;
			_closure_reg(a, c + 0);
		}
		break;
	case 8405: /* CALLI8 */
		break;
	case 8406: /* CALLU8 */
		break;
	case 8407: /* CALLP8 */
		break;
	case 8417: /* LOADF8 */
		_label(LEFT_CHILD(a));
		/* reg: LOADF8(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + (move(a));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 77;
			_closure_reg(a, c + 0);
		}
		break;
	case 8421: /* LOADI8 */
		break;
	case 8422: /* LOADU8 */
		break;
	case 8423: /* LOADP8 */
		break;
	case 8433: /* RETF8 */
		_label(LEFT_CHILD(a));
		/* stmt: RETF8(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 53;
		}
		break;
	case 8437: /* RETI8 */
		break;
	case 8438: /* RETU8 */
		break;
	case 8439: /* RETP8 */
		break;
	case 8455: /* ADDRGP8 */
		break;
	case 8471: /* ADDRFP8 */
		break;
	case 8487: /* ADDRLP8 */
		break;
	case 8497: /* ADDF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: ADDF8(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 69;
			_closure_reg(a, c + 0);
		}
		break;
	case 8501: /* ADDI8 */
		break;
	case 8502: /* ADDU8 */
		break;
	case 8503: /* ADDP8 */
		break;
	case 8513: /* SUBF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: SUBF8(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 75;
			_closure_reg(a, c + 0);
		}
		break;
	case 8517: /* SUBI8 */
		break;
	case 8518: /* SUBU8 */
		break;
	case 8519: /* SUBP8 */
		break;
	case 8533: /* LSHI8 */
		break;
	case 8534: /* LSHU8 */
		break;
	case 8549: /* MODI8 */
		break;
	case 8550: /* MODU8 */
		break;
	case 8565: /* RSHI8 */
		break;
	case 8566: /* RSHU8 */
		break;
	case 8581: /* BANDI8 */
		break;
	case 8582: /* BANDU8 */
		break;
	case 8597: /* BCOMI8 */
		break;
	case 8598: /* BCOMU8 */
		break;
	case 8613: /* BORI8 */
		break;
	case 8614: /* BORU8 */
		break;
	case 8629: /* BXORI8 */
		break;
	case 8630: /* BXORU8 */
		break;
	case 8641: /* DIVF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: DIVF8(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 71;
			_closure_reg(a, c + 0);
		}
		break;
	case 8645: /* DIVI8 */
		break;
	case 8646: /* DIVU8 */
		break;
	case 8657: /* MULF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: MULF8(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 73;
			_closure_reg(a, c + 0);
		}
		break;
	case 8661: /* MULI8 */
		break;
	case 8662: /* MULU8 */
		break;
	case 8673: /* EQF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: EQF8(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 40;
		}
		break;
	case 8677: /* EQI8 */
		break;
	case 8678: /* EQU8 */
		break;
	case 8689: /* GEF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GEF8(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 46;
		}
		break;
	case 8693: /* GEI8 */
		break;
	case 8694: /* GEU8 */
		break;
	case 8705: /* GTF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GTF8(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 48;
		}
		break;
	case 8709: /* GTI8 */
		break;
	case 8710: /* GTU8 */
		break;
	case 8721: /* LEF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LEF8(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 42;
		}
		break;
	case 8725: /* LEI8 */
		break;
	case 8726: /* LEU8 */
		break;
	case 8737: /* LTF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LTF8(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 44;
		}
		break;
	case 8741: /* LTI8 */
		break;
	case 8742: /* LTU8 */
		break;
	case 8753: /* NEF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: NEF8(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 50;
		}
		break;
	case 8757: /* NEI8 */
		break;
	case 8758: /* NEU8 */
		break;
	case 16401: /* CNSTF16 */
		break;
	case 16417: /* ARGF16 */
		break;
	case 16433: /* ASGNF16 */
		break;
	case 16449: /* INDIRF16 */
		break;
	case 16497: /* CVFF16 */
		break;
	case 16513: /* CVIF16 */
		break;
	case 16535: /* CVPP16 */
		break;
	case 16567: /* CVUP16 */
		break;
	case 16577: /* NEGF16 */
		break;
	case 16593: /* CALLF16 */
		break;
	case 16609: /* LOADF16 */
		break;
	case 16625: /* RETF16 */
		break;
	case 16689: /* ADDF16 */
		break;
	case 16705: /* SUBF16 */
		break;
	case 16833: /* DIVF16 */
		break;
	case 16849: /* MULF16 */
		break;
	case 16865: /* EQF16 */
		break;
	case 16885: /* GEI16 */
		break;
	case 16897: /* GTF16 */
		break;
	case 16913: /* LEF16 */
		break;
	case 16929: /* LTF16 */
		break;
	case 16945: /* NEF16 */
		break;
	default:
		fatal("_label", "Bad terminal %d\n", OP_LABEL(a));
	}
}

static void _kids(NODEPTR_TYPE p, int eruleno, NODEPTR_TYPE kids[]) {
	if (!p)
		fatal("_kids", "Null tree\n", 0);
	if (!kids)
		fatal("_kids", "Null kids\n", 0);
	switch (eruleno) {
	case 170: /* ar: CNSTP4 */
	case 162: /* ar: ADDRGP4 */
	case 134: /* stmt: LABELV */
	case 97: /* rc5: CNSTI4 */
	case 52: /* reg: CNSTP4 */
	case 51: /* reg: CNSTU4 */
	case 50: /* reg: CNSTU2 */
	case 49: /* reg: CNSTU1 */
	case 48: /* reg: CNSTI4 */
	case 47: /* reg: CNSTI2 */
	case 46: /* reg: CNSTI1 */
	case 44: /* addr: ADDRLP4 */
	case 43: /* addr: ADDRFP4 */
	case 37: /* acon: ADDRGP4 */
	case 34: /* con: CNSTP8 */
	case 33: /* con: CNSTU8 */
	case 32: /* con: CNSTI8 */
	case 31: /* con: CNSTP4 */
	case 30: /* con: CNSTU4 */
	case 29: /* con: CNSTI4 */
	case 28: /* con: CNSTU2 */
	case 27: /* con: CNSTI2 */
	case 26: /* con: CNSTU1 */
	case 25: /* con: CNSTI1 */
	case 12: /* reg: INDIRU8(VREGP) */
	case 11: /* reg: INDIRP8(VREGP) */
	case 10: /* reg: INDIRI8(VREGP) */
	case 9: /* reg: INDIRF8(VREGP) */
	case 8: /* reg: INDIRU4(VREGP) */
	case 7: /* reg: INDIRP4(VREGP) */
	case 6: /* reg: INDIRI4(VREGP) */
	case 5: /* reg: INDIRF4(VREGP) */
	case 4: /* reg: INDIRU2(VREGP) */
	case 3: /* reg: INDIRI2(VREGP) */
	case 2: /* reg: INDIRU1(VREGP) */
	case 1: /* reg: INDIRI1(VREGP) */
		break;
	case 24: /* stmt: ASGNU8(VREGP,reg) */
	case 23: /* stmt: ASGNP8(VREGP,reg) */
	case 22: /* stmt: ASGNI8(VREGP,reg) */
	case 21: /* stmt: ASGNF8(VREGP,reg) */
	case 20: /* stmt: ASGNU4(VREGP,reg) */
	case 19: /* stmt: ASGNP4(VREGP,reg) */
	case 18: /* stmt: ASGNI4(VREGP,reg) */
	case 17: /* stmt: ASGNF4(VREGP,reg) */
	case 16: /* stmt: ASGNU2(VREGP,reg) */
	case 15: /* stmt: ASGNI2(VREGP,reg) */
	case 14: /* stmt: ASGNU1(VREGP,reg) */
	case 13: /* stmt: ASGNI1(VREGP,reg) */
		kids[0] = RIGHT_CHILD(p);
		break;
	case 169: /* ar: reg */
	case 98: /* rc5: reg */
	case 84: /* rc: reg */
	case 83: /* rc: con */
	case 45: /* reg: addr */
	case 42: /* addr: reg */
	case 41: /* addr: acon */
	case 36: /* acon: con */
	case 35: /* stmt: reg */
		kids[0] = p;
		break;
	case 161: /* stmt: NEF8(reg,reg) */
	case 160: /* stmt: NEF4(reg,reg) */
	case 159: /* stmt: GTF8(reg,reg) */
	case 158: /* stmt: GTF4(reg,reg) */
	case 157: /* stmt: GEF8(reg,reg) */
	case 156: /* stmt: GEF4(reg,reg) */
	case 155: /* stmt: LTF8(reg,reg) */
	case 154: /* stmt: LTF4(reg,reg) */
	case 153: /* stmt: LEF8(reg,reg) */
	case 152: /* stmt: LEF4(reg,reg) */
	case 151: /* stmt: EQF8(reg,reg) */
	case 150: /* stmt: EQF4(reg,reg) */
	case 149: /* stmt: NEU4(reg,reg) */
	case 148: /* stmt: NEI4(reg,reg) */
	case 147: /* stmt: LTU4(reg,reg) */
	case 146: /* stmt: LTI4(reg,reg) */
	case 145: /* stmt: LEU4(reg,reg) */
	case 144: /* stmt: LEI4(reg,reg) */
	case 143: /* stmt: GTU4(reg,reg) */
	case 142: /* stmt: GTI4(reg,reg) */
	case 141: /* stmt: GEU4(reg,reg) */
	case 140: /* stmt: GEI4(reg,reg) */
	case 139: /* stmt: EQU4(reg,reg) */
	case 138: /* stmt: EQI4(reg,reg) */
	case 120: /* reg: SUBF8(reg,reg) */
	case 119: /* reg: SUBF4(reg,reg) */
	case 118: /* reg: MULF8(reg,reg) */
	case 117: /* reg: MULF4(reg,reg) */
	case 116: /* reg: DIVF8(reg,reg) */
	case 115: /* reg: DIVF4(reg,reg) */
	case 114: /* reg: ADDF8(reg,reg) */
	case 113: /* reg: ADDF4(reg,reg) */
	case 102: /* reg: RSHU4(reg,rc5) */
	case 101: /* reg: RSHI4(reg,rc5) */
	case 100: /* reg: LSHU4(reg,rc5) */
	case 99: /* reg: LSHI4(reg,rc5) */
	case 96: /* reg: SUBU4(reg,rc) */
	case 95: /* reg: SUBP4(reg,rc) */
	case 94: /* reg: SUBI4(reg,rc) */
	case 93: /* reg: BXORU4(reg,rc) */
	case 92: /* reg: BORU4(reg,rc) */
	case 91: /* reg: BANDU4(reg,rc) */
	case 90: /* reg: BXORI4(reg,rc) */
	case 89: /* reg: BORI4(reg,rc) */
	case 88: /* reg: BANDI4(reg,rc) */
	case 87: /* reg: ADDU4(reg,rc) */
	case 86: /* reg: ADDP4(reg,rc) */
	case 85: /* reg: ADDI4(reg,rc) */
	case 82: /* reg: MULU4(reg,reg) */
	case 81: /* reg: MULI4(reg,reg) */
	case 80: /* reg: MODU4(reg,reg) */
	case 79: /* reg: MODI4(reg,reg) */
	case 78: /* reg: DIVU4(reg,reg) */
	case 77: /* reg: DIVI4(reg,reg) */
	case 76: /* stmt: ASGNF8(addr,reg) */
	case 75: /* stmt: ASGNF4(addr,reg) */
	case 59: /* stmt: ASGNP4(addr,reg) */
	case 58: /* stmt: ASGNU4(addr,reg) */
	case 57: /* stmt: ASGNI4(addr,reg) */
	case 56: /* stmt: ASGNU2(addr,reg) */
	case 55: /* stmt: ASGNI2(addr,reg) */
	case 54: /* stmt: ASGNU1(addr,reg) */
	case 53: /* stmt: ASGNI1(addr,reg) */
	case 40: /* addr: ADDP4(reg,acon) */
	case 39: /* addr: ADDU4(reg,acon) */
	case 38: /* addr: ADDI4(reg,acon) */
		kids[0] = LEFT_CHILD(p);
		kids[1] = RIGHT_CHILD(p);
		break;
	case 181: /* stmt: ARGU4(reg) */
	case 180: /* stmt: ARGP4(reg) */
	case 179: /* stmt: ARGI4(reg) */
	case 178: /* stmt: ARGF8(reg) */
	case 177: /* stmt: ARGF4(reg) */
	case 176: /* stmt: RETV(reg) */
	case 175: /* stmt: RETP4(reg) */
	case 174: /* stmt: RETU4(reg) */
	case 173: /* stmt: RETI4(reg) */
	case 172: /* stmt: RETF8(reg) */
	case 171: /* stmt: RETF4(reg) */
	case 168: /* stmt: CALLV(ar) */
	case 167: /* reg: CALLU4(ar) */
	case 166: /* reg: CALLP4(ar) */
	case 165: /* reg: CALLI4(ar) */
	case 164: /* reg: CALLF8(ar) */
	case 163: /* reg: CALLF4(ar) */
	case 137: /* stmt: JUMPV(reg) */
	case 136: /* stmt: JUMPV(reg) */
	case 135: /* stmt: JUMPV(acon) */
	case 133: /* reg: CVFI4(reg) */
	case 132: /* reg: CVFI4(reg) */
	case 131: /* reg: CVIF8(reg) */
	case 130: /* reg: CVIF4(reg) */
	case 129: /* reg: CVFF8(reg) */
	case 128: /* reg: CVFF4(reg) */
	case 127: /* reg: CVUU4(reg) */
	case 126: /* reg: CVUI4(reg) */
	case 125: /* reg: CVII4(reg) */
	case 124: /* reg: NEGF8(reg) */
	case 123: /* reg: NEGF4(reg) */
	case 122: /* reg: LOADF8(reg) */
	case 121: /* reg: LOADF4(reg) */
	case 112: /* reg: LOADU4(reg) */
	case 111: /* reg: LOADP4(reg) */
	case 110: /* reg: LOADI4(reg) */
	case 109: /* reg: LOADU2(reg) */
	case 108: /* reg: LOADI2(reg) */
	case 107: /* reg: LOADU1(reg) */
	case 106: /* reg: LOADI1(reg) */
	case 105: /* reg: NEGI4(reg) */
	case 104: /* reg: BCOMU4(reg) */
	case 103: /* reg: BCOMI4(reg) */
	case 74: /* reg: INDIRF8(addr) */
	case 73: /* reg: INDIRF4(addr) */
	case 66: /* reg: INDIRP4(addr) */
	case 65: /* reg: INDIRU4(addr) */
	case 64: /* reg: INDIRI4(addr) */
	case 63: /* reg: INDIRU2(addr) */
	case 62: /* reg: INDIRI2(addr) */
	case 61: /* reg: INDIRU1(addr) */
	case 60: /* reg: INDIRI1(addr) */
		kids[0] = LEFT_CHILD(p);
		break;
	case 182: /* stmt: ARGB(INDIRB(reg)) */
	case 72: /* reg: CVUI4(INDIRU2(addr)) */
	case 71: /* reg: CVUI4(INDIRU1(addr)) */
	case 70: /* reg: CVUU4(INDIRU2(addr)) */
	case 69: /* reg: CVUU4(INDIRU1(addr)) */
	case 68: /* reg: CVII4(INDIRI2(addr)) */
	case 67: /* reg: CVII4(INDIRI1(addr)) */
		kids[0] = LEFT_CHILD(LEFT_CHILD(p));
		break;
	case 183: /* stmt: ASGNB(reg,INDIRB(reg)) */
		kids[0] = LEFT_CHILD(p);
		kids[1] = LEFT_CHILD(RIGHT_CHILD(p));
		break;
	default:
		fatal("_kids", "Bad rule number %d\n", eruleno);
	}
}

static void progend(void){}
static void progbeg(int argc, char *argv[]) {
        int i;

        {
                union {
                        char c;
                        int i;
                } u;
                u.i = 0;
                u.c = 1;
                swap = ((int)(u.i == 1)) != IR->little_endian;
        }
        print(".set reorder\n");
        pic = !IR->little_endian;
        parseflags(argc, argv);
        for (i = 0; i < argc; i++)
                if (strncmp(argv[i], "-G", 2) == 0)
                        gnum = atoi(argv[i] + 2);
                else if (strcmp(argv[i], "-pic=1") == 0
                ||       strcmp(argv[i], "-pic=0") == 0)
                        pic = argv[i][5]-'0';
        for (i = 0; i < 31; i += 2)
                freg2[i] = mkreg("%d", i, 3, FREG);
        for (i = 0; i < 32; i++)
                ireg[i]  = mkreg("%d", i, 1, IREG);
        ireg[29]->x.name = "sp";
        d6 = mkreg("6", 6, 3, IREG);
        freg2w = mkwildcard(freg2);
        iregw = mkwildcard(ireg);
        tmask[IREG] = INTTMP; tmask[FREG] = FLTTMP;
        vmask[IREG] = INTVAR; vmask[FREG] = FLTVAR;
        blkreg = mkreg("8", 8, 7, IREG);
}
static Symbol rmap(int opk) {
        switch (optype(opk)) {
        case I: case U: case P: case B:
                return iregw;
        case F:
                return freg2w;
        default:
                return 0;
        }
}
static void target(Node p) {
        assert(p);
        switch (specific(p->op)) {
        case CNST+I: case CNST+U: case CNST+P:
                if (range(p, 0, 0) == 0) {
                        setreg(p, ireg[0]);
                        p->x.registered = 1;
                }
                break;
        case CALL+V:
                rtarget(p, 0, ireg[25]);
                break;
        case CALL+F:
                rtarget(p, 0, ireg[25]);
                setreg(p, freg2[0]);
                break;
        case CALL+I: case CALL+P: case CALL+U:
                rtarget(p, 0, ireg[25]);
                setreg(p, ireg[2]);
                break;
        case RET+F:
                rtarget(p, 0, freg2[0]);
                break;
        case RET+I: case RET+U: case RET+P:
                rtarget(p, 0, ireg[2]);
                break;
        case ARG+F: case ARG+I: case ARG+P: case ARG+U: {
                static int ty0;
                int ty = optype(p->op);
                Symbol q;

                q = argreg(p->x.argno, p->syms[2]->u.c.v.i, ty, opsize(p->op), ty0);
                if (p->x.argno == 0)
                        ty0 = ty;
                if (q &&
                !(ty == F && q->x.regnode->set == IREG))
                        rtarget(p, 0, q);
                break;
                }
        case ASGN+B: rtarget(p->kids[1], 0, blkreg); break;
        case ARG+B:  rtarget(p->kids[0], 0, blkreg); break;
        }
}
static void clobber(Node p) {
        assert(p);
        switch (specific(p->op)) {
        case CALL+F:
                spill(INTTMP | INTRET, IREG, p);
                spill(FLTTMP,          FREG, p);
                break;
        case CALL+I: case CALL+P: case CALL+U:
                spill(INTTMP,          IREG, p);
                spill(FLTTMP | FLTRET, FREG, p);
                break;
        case CALL+V:
                spill(INTTMP | INTRET, IREG, p);
                spill(FLTTMP | FLTRET, FREG, p);
                break;
        }
}
static void emit2(Node p) {
        int dst, n, src, sz, ty;
        static int ty0;
        Symbol q;

        switch (specific(p->op)) {
        case ARG+F: case ARG+I: case ARG+P: case ARG+U:
                ty = optype(p->op);
                sz = opsize(p->op);
                if (p->x.argno == 0)
                        ty0 = ty;
                q = argreg(p->x.argno, p->syms[2]->u.c.v.i, ty, sz, ty0);
                src = getregnum(p->x.kids[0]);
                if (q == NULL && ty == F && sz == 4)
                        print("s.s $f%d,%d($sp)\n", src, p->syms[2]->u.c.v.i);
                else if (q == NULL && ty == F)
                        print("s.d $f%d,%d($sp)\n", src, p->syms[2]->u.c.v.i);
                else if (q == NULL)
                        print("sw $%d,%d($sp)\n", src, p->syms[2]->u.c.v.i);
                else if (ty == F && sz == 4 && q->x.regnode->set == IREG)
                        print("mfc1 $%d,$f%d\n", q->x.regnode->number, src);
                else if (ty == F && q->x.regnode->set == IREG)
                        print("mfc1.d $%d,$f%d\n", q->x.regnode->number, src);
                break;
        case ASGN+B:
                dalign = salign = p->syms[1]->u.c.v.i;
                blkcopy(getregnum(p->x.kids[0]), 0,
                        getregnum(p->x.kids[1]), 0,
                        p->syms[0]->u.c.v.i, tmpregs);
                break;
        case ARG+B:
                dalign = 4;
                salign = p->syms[1]->u.c.v.i;
                blkcopy(29, p->syms[2]->u.c.v.i,
                        getregnum(p->x.kids[0]), 0,
                        p->syms[0]->u.c.v.i, tmpregs);
                n   = p->syms[2]->u.c.v.i + p->syms[0]->u.c.v.i;
                dst = p->syms[2]->u.c.v.i;
                for ( ; dst <= 12 && dst < n; dst += 4)
                        print("lw $%d,%d($sp)\n", (dst/4)+4, dst);
                break;
        }
}
static Symbol argreg(int argno, int offset, int ty, int sz, int ty0) {
        assert((offset&3) == 0);
        if (offset > 12)
                return NULL;
        else if (argno == 0 && ty == F)
                return freg2[12];
        else if (argno == 1 && ty == F && ty0 == F)
                return freg2[14];
        else if (argno == 1 && ty == F && sz == 8)
                return d6;  /* Pair! */
        else
                return ireg[(offset/4) + 4];
}
static void doarg(Node p) {
        static int argno;
        int align;

        if (argoffset == 0)
                argno = 0;
        p->x.argno = argno++;
        align = p->syms[1]->u.c.v.i < 4 ? 4 : p->syms[1]->u.c.v.i;
        p->syms[2] = intconst(mkactual(align,
                p->syms[0]->u.c.v.i));
}
static void local(Symbol p) {
        if (askregvar(p, rmap(ttob(p->type))) == 0)
                mkauto(p);
}
static void function(Symbol f, Symbol caller[], Symbol callee[], int ncalls) {
        int i, saved, sizefsave, sizeisave, varargs;
        Symbol r, argregs[4];

        usedmask[0] = usedmask[1] = 0;
        freemask[0] = freemask[1] = ~(unsigned)0;
        offset = maxoffset = maxargoffset = 0;
        for (i = 0; callee[i]; i++)
                ;
        varargs = variadic(f->type)
                || i > 0 && strcmp(callee[i-1]->name, "va_alist") == 0;
        for (i = 0; callee[i]; i++) {
                Symbol p = callee[i];
                Symbol q = caller[i];
                assert(q);
                offset = roundup(offset, q->type->align);
                p->x.offset = q->x.offset = offset;
                p->x.name = q->x.name = stringd(offset);
                r = argreg(i, offset, optype(ttob(q->type)), q->type->size, optype(ttob(caller[0]->type)));
                if (i < 4)
                        argregs[i] = r;
                offset = roundup(offset + q->type->size, 4);
                if (varargs)
                        p->sclass = AUTO;
                else if (r && ncalls == 0 &&
                         !isstruct(q->type) && !p->addressed &&
                         !(isfloat(q->type) && r->x.regnode->set == IREG)
) {
                        p->sclass = q->sclass = REGISTER;
                        askregvar(p, r);
                        assert(p->x.regnode && p->x.regnode->vbl == p);
                        q->x = p->x;
                        q->type = p->type;
                }
                else if (askregvar(p, rmap(ttob(p->type)))
                         && r != NULL
                         && (isint(p->type) || p->type == q->type)) {
                        assert(q->sclass != REGISTER);
                        p->sclass = q->sclass = REGISTER;
                        q->type = p->type;
                }
        }
        assert(!caller[i]);
        offset = 0;
        gencode(caller, callee);
        if (ncalls)
                usedmask[IREG] |= ((unsigned)1)<<31;
        usedmask[IREG] &= 0xc0ff0000;
        usedmask[FREG] &= 0xfff00000;
        if (pic && ncalls)
                usedmask[IREG] |= 1<<25;
        maxargoffset = roundup(maxargoffset, usedmask[FREG] ? 8 : 4);
        if (ncalls && maxargoffset < 16)
                maxargoffset = 16;
        sizefsave = 4*bitcount(usedmask[FREG]);
        sizeisave = 4*bitcount(usedmask[IREG]);
        framesize = roundup(maxargoffset + sizefsave
                + sizeisave + maxoffset, 16);
        segment(CODE);
        print(".align 2\n");
        print(".ent %s\n", f->x.name);
        print("%s:\n", f->x.name);
        i = maxargoffset + sizefsave - framesize;
        print(".frame $sp,%d,$31\n", framesize);
        if (pic)
                print(".set noreorder\n.cpload $25\n.set reorder\n");
        if (framesize > 0)
                print("addu $sp,$sp,%d\n", -framesize);
        if (usedmask[FREG])
                print(".fmask 0x%x,%d\n", usedmask[FREG], i - 8);
        if (usedmask[IREG])
                print(".mask 0x%x,%d\n",  usedmask[IREG],
                        i + sizeisave - 4);
        saved = maxargoffset;
        for (i = 20; i <= 30; i += 2)
                if (usedmask[FREG]&(3<<i)) {
                        print("s.d $f%d,%d($sp)\n", i, saved);
                        saved += 8;
                }

        for (i = 16; i <= 31; i++)
                if (usedmask[IREG]&(1<<i)) {
                        if (i == 25)
                                print(".cprestore %d\n", saved);
                        else
                                print("sw $%d,%d($sp)\n", i, saved);
                        saved += 4;
                }
        for (i = 0; i < 4 && callee[i]; i++) {
                r = argregs[i];
                if (r && r->x.regnode != callee[i]->x.regnode) {
                        Symbol out = callee[i];
                        Symbol in  = caller[i];
                        int rn = r->x.regnode->number;
                        int rs = r->x.regnode->set;
                        int tyin = ttob(in->type);

                        assert(out && in && r && r->x.regnode);
                        assert(out->sclass != REGISTER || out->x.regnode);
                        if (out->sclass == REGISTER
                        && (isint(out->type) || out->type == in->type)) {
                                int outn = out->x.regnode->number;
                                if (rs == FREG && tyin == F+sizeop(8))
                                        print("mov.d $f%d,$f%d\n", outn, rn);
                                else if (rs == FREG && tyin == F+sizeop(4))
                                        print("mov.s $f%d,$f%d\n", outn, rn);
                                else if (rs == IREG && tyin == F+sizeop(8))
                                        print("mtc1.d $%d,$f%d\n", rn,   outn);
                                else if (rs == IREG && tyin == F+sizeop(4))
                                        print("mtc1 $%d,$f%d\n",   rn,   outn);
                                else
                                        print("move $%d,$%d\n",    outn, rn);
                        } else {
                                int off = in->x.offset + framesize;
                                if (rs == FREG && tyin == F+sizeop(8))
                                        print("s.d $f%d,%d($sp)\n", rn, off);
                                else if (rs == FREG && tyin == F+sizeop(4))
                                        print("s.s $f%d,%d($sp)\n", rn, off);
                                else {
                                        int i, n = (in->type->size + 3)/4;
                                        for (i = rn; i < rn+n && i <= 7; i++)
                                                print("sw $%d,%d($sp)\n", i, off + (i-rn)*4);
                                }
                        }
                }
        }
        if (varargs && callee[i-1]) {
                i = callee[i-1]->x.offset + callee[i-1]->type->size;
                for (i = roundup(i, 4)/4; i <= 3; i++)
                        print("sw $%d,%d($sp)\n", i + 4, framesize + 4*i);
                }
        emitcode();
        saved = maxargoffset;
        for (i = 20; i <= 30; i += 2)
                if (usedmask[FREG]&(3<<i)) {
                        print("l.d $f%d,%d($sp)\n", i, saved);
                        saved += 8;
                }
        for (i = 16; i <= 31; i++)
                if (usedmask[IREG]&(1<<i)) {
                        print("lw $%d,%d($sp)\n", i, saved);
                        saved += 4;
                }
        if (framesize > 0)
                print("addu $sp,$sp,%d\n", framesize);
        print("j $31\n");
        print(".end %s\n", f->x.name);
}
static void defconst(int suffix, int size, Value v) {
        if (suffix == F && size == 4) {
                float f = v.d;
                print(".word 0x%x\n", *(unsigned *)&f);
        }
        else if (suffix == F && size == 8) {
                double d = v.d;
                unsigned *p = (unsigned *)&d;
                print(".word 0x%x\n.word 0x%x\n", p[swap], p[!swap]);
        }
        else if (suffix == P)
                print(".word 0x%x\n", (unsigned)v.p);
        else if (size == 1)
                print(".byte 0x%x\n", (unsigned)((unsigned char)(suffix == I ? v.i : v.u)));
        else if (size == 2)
                print(".half 0x%x\n", (unsigned)((unsigned short)(suffix == I ? v.i : v.u)));
        else if (size == 4)
                print(".word 0x%x\n", (unsigned)(suffix == I ? v.i : v.u));
}
static void defaddress(Symbol p) {
        if (pic && p->scope == LABELS)
                print(".gpword %s\n", p->x.name);
        else
                print(".word %s\n", p->x.name);
}
static void defstring(int n, char *str) {
        char *s;

        for (s = str; s < str + n; s++)
                print(".byte %d\n", (*s)&0377);
}
static void export(Symbol p) {
        print(".globl %s\n", p->x.name);
}
static void import(Symbol p) {
        if (!isfunc(p->type))
                print(".extern %s %d\n", p->name, p->type->size);
}
static void defsymbol(Symbol p) {
        if (p->scope >= LOCAL && p->sclass == STATIC)
                p->x.name = stringf("L.%d", genlabel(1));
        else if (p->generated)
                p->x.name = stringf("L.%s", p->name);
        else
                assert(p->scope != CONSTANTS || isint(p->type) || isptr(p->type)),
                p->x.name = p->name;
}
static void address(Symbol q, Symbol p, long n) {
        if (p->scope == GLOBAL
        || p->sclass == STATIC || p->sclass == EXTERN)
                q->x.name = stringf("%s%s%D", p->x.name,
                        n >= 0 ? "+" : "", n);
        else {
                assert(n <= INT_MAX && n >= INT_MIN);
                q->x.offset = p->x.offset + n;
                q->x.name = stringd(q->x.offset);
        }
}
static void global(Symbol p) {
        if (p->u.seg == BSS) {
                if (p->sclass == STATIC || Aflag >= 2)
                        print(".lcomm %s,%d\n", p->x.name, p->type->size);
                else
                        print( ".comm %s,%d\n", p->x.name, p->type->size);
        } else {
                if (p->u.seg == DATA
                && (p->type->size == 0 || p->type->size > gnum))
                        print(".data\n");
                else if (p->u.seg == DATA)
                        print(".sdata\n");
                print(".align %c\n", ".01.2...3"[p->type->align]);
                print("%s:\n", p->x.name);
        }
}
static void segment(int n) {
        cseg = n;
        switch (n) {
        case CODE: print(".text\n");  break;
        case LIT:  print(".rdata\n"); break;
        }
}
static void space(int n) {
        if (cseg != BSS)
                print(".space %d\n", n);
}
static void blkloop(int dreg, int doff, int sreg, int soff, int size, int tmps[]) {
        int lab = genlabel(1);

        print("addu $%d,$%d,%d\n", sreg, sreg, size&~7);
        print("addu $%d,$%d,%d\n", tmps[2], dreg, size&~7);
        blkcopy(tmps[2], doff, sreg, soff, size&7, tmps);
        print("L.%d:\n", lab);
        print("addu $%d,$%d,%d\n", sreg, sreg, -8);
        print("addu $%d,$%d,%d\n", tmps[2], tmps[2], -8);
        blkcopy(tmps[2], doff, sreg, soff, 8, tmps);
        print("bltu $%d,$%d,L.%d\n", dreg, tmps[2], lab);
}
static void blkfetch(int size, int off, int reg, int tmp) {
        assert(size == 1 || size == 2 || size == 4);
        if (size == 1)
                print("lbu $%d,%d($%d)\n",  tmp, off, reg);
        else if (salign >= size && size == 2)
                print("lhu $%d,%d($%d)\n",  tmp, off, reg);
        else if (salign >= size)
                print("lw $%d,%d($%d)\n",   tmp, off, reg);
        else if (size == 2)
                print("ulhu $%d,%d($%d)\n", tmp, off, reg);
        else
                print("ulw $%d,%d($%d)\n",  tmp, off, reg);
}
static void blkstore(int size, int off, int reg, int tmp) {
        if (size == 1)
                print("sb $%d,%d($%d)\n",  tmp, off, reg);
        else if (dalign >= size && size == 2)
                print("sh $%d,%d($%d)\n",  tmp, off, reg);
        else if (dalign >= size)
                print("sw $%d,%d($%d)\n",  tmp, off, reg);
        else if (size == 2)
                print("ush $%d,%d($%d)\n", tmp, off, reg);
        else
                print("usw $%d,%d($%d)\n", tmp, off, reg);
}
static void stabinit(char *, int, char *[]);
static void stabline(Coordinate *);
static void stabsym(Symbol);

static char *currentfile;

static int bitcount(unsigned mask) {
        unsigned i, n = 0;

        for (i = 1; i; i <<= 1)
                if (mask&i)
                        n++;
        return n;
}

/* stabinit - initialize stab output */
static void stabinit(char *file, int argc, char *argv[]) {
        if (file) {
                print(".file 2,\"%s\"\n", file);
                currentfile = file;
        }
}

/* stabline - emit stab entry for source coordinate *cp */
static void stabline(Coordinate *cp) {
        if (cp->file && cp->file != currentfile) {
                print(".file 2,\"%s\"\n", cp->file);
                currentfile = cp->file;
        }
        print(".loc 2,%d\n", cp->y);
}

/* stabsym - output a stab entry for symbol p */
static void stabsym(Symbol p) {
        if (p == cfunc && IR->stabline)
                (*IR->stabline)(&p->src);
}
Interface mipsebIR = {
        1, 1, 0,  /* char */
        2, 2, 0,  /* short */
        4, 4, 0,  /* int */
        4, 4, 0,  /* long */
        4, 4, 0,  /* long long */
        4, 4, 1,  /* float */
        8, 8, 1,  /* double */
        8, 8, 1,  /* long double */
        4, 4, 0,  /* T * */
        0, 1, 0,  /* struct */
        0,      /* little_endian */
        0,  /* mulops_calls */
        0,  /* wants_callb */
        1,  /* wants_argb */
        1,  /* left_to_right */
        0,  /* wants_dag */
        0,  /* unsigned_char */
        address,
        blockbeg,
        blockend,
        defaddress,
        defconst,
        defstring,
        defsymbol,
        emit,
        export,
        function,
        gen,
        global,
        import,
        local,
        progbeg,
        progend,
        segment,
        space,
        0, 0, 0, stabinit, stabline, stabsym, 0,
        {
                4,      /* max_unaligned_load */
                rmap,
                blkfetch, blkstore, blkloop,
                _label,
                _rule,
                _nts,
                _kids,
                _string,
                _templates,
                _isinstruction,
                _ntname,
                emit2,
                doarg,
                target,
                clobber,

        }
}, mipselIR = {
        1, 1, 0,  /* char */
        2, 2, 0,  /* short */
        4, 4, 0,  /* int */
        4, 4, 0,  /* long */
        4, 4, 0,  /* long long */
        4, 4, 1,  /* float */
        8, 8, 1,  /* double */
        8, 8, 1,  /* long double */
        4, 4, 0,  /* T * */
        0, 1, 0,  /* struct */
        1,      /* little_endian */
        0,  /* mulops_calls */
        0,  /* wants_callb */
        1,  /* wants_argb */
        1,  /* left_to_right */
        0,  /* wants_dag */
        0,  /* unsigned_char */
        address,
        blockbeg,
        blockend,
        defaddress,
        defconst,
        defstring,
        defsymbol,
        emit,
        export,
        function,
        gen,
        global,
        import,
        local,
        progbeg,
        progend,
        segment,
        space,
        0, 0, 0, stabinit, stabline, stabsym, 0,
        {
                4,      /* max_unaligned_load */
                rmap,
                blkfetch, blkstore, blkloop,
                _label,
                _rule,
                _nts,
                _kids,
                _string,
                _templates,
                _isinstruction,
                _ntname,
                emit2,
                doarg,
                target,
                clobber,

        }
};
static char rcsid[] = "$Id$";
