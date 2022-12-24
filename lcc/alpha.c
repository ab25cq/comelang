#define INTTMP ((0xff<<1)|(1<<22)|(1<<25)|(1<<27))
#define INTVAR (0x3f<<9)
#define FLTTMP ((0x3f<<10)|(0x1ff<<22))
#define FLTVAR (0xff<<2)

#define INTRET 0x00000001
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
static Symbol ireg[32], freg[32];
static Symbol iregw, fregw;

static int tmpregs[] = {4, 2, 3};
static Symbol blkreg;

static int cseg;

static char *currentfile;

/*
generated at Tue Sep 27 04:30:11 2022
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
#define _rc6_NT 7
#define _ar_NT 8

static char *_ntname[] = {
	0,
	"stmt",
	"reg",
	"con",
	"acon",
	"addr",
	"rc",
	"rc6",
	"ar",
	0
};

struct _state {
	short cost[9];
	struct {
		unsigned int _stmt:7;
		unsigned int _reg:8;
		unsigned int _con:4;
		unsigned int _acon:2;
		unsigned int _addr:4;
		unsigned int _rc:2;
		unsigned int _rc6:2;
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
static short _nts_7[] = { _reg_NT, _rc_NT, 0 };
static short _nts_8[] = { _reg_NT, _rc6_NT, 0 };
static short _nts_9[] = { _reg_NT, _reg_NT, 0 };
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
	_nts_3,	/* 41 */
	_nts_4,	/* 42 */
	_nts_1,	/* 43 */
	_nts_0,	/* 44 */
	_nts_0,	/* 45 */
	_nts_5,	/* 46 */
	_nts_0,	/* 47 */
	_nts_0,	/* 48 */
	_nts_0,	/* 49 */
	_nts_0,	/* 50 */
	_nts_0,	/* 51 */
	_nts_0,	/* 52 */
	_nts_0,	/* 53 */
	_nts_0,	/* 54 */
	_nts_0,	/* 55 */
	_nts_6,	/* 56 */
	_nts_6,	/* 57 */
	_nts_6,	/* 58 */
	_nts_6,	/* 59 */
	_nts_6,	/* 60 */
	_nts_6,	/* 61 */
	_nts_6,	/* 62 */
	_nts_6,	/* 63 */
	_nts_6,	/* 64 */
	_nts_1,	/* 65 */
	_nts_1,	/* 66 */
	_nts_5,	/* 67 */
	_nts_5,	/* 68 */
	_nts_5,	/* 69 */
	_nts_1,	/* 70 */
	_nts_1,	/* 71 */
	_nts_5,	/* 72 */
	_nts_5,	/* 73 */
	_nts_1,	/* 74 */
	_nts_1,	/* 75 */
	_nts_1,	/* 76 */
	_nts_1,	/* 77 */
	_nts_5,	/* 78 */
	_nts_1,	/* 79 */
	_nts_1,	/* 80 */
	_nts_1,	/* 81 */
	_nts_1,	/* 82 */
	_nts_5,	/* 83 */
	_nts_1,	/* 84 */
	_nts_1,	/* 85 */
	_nts_1,	/* 86 */
	_nts_1,	/* 87 */
	_nts_5,	/* 88 */
	_nts_1,	/* 89 */
	_nts_5,	/* 90 */
	_nts_5,	/* 91 */
	_nts_6,	/* 92 */
	_nts_6,	/* 93 */
	_nts_7,	/* 94 */
	_nts_7,	/* 95 */
	_nts_7,	/* 96 */
	_nts_7,	/* 97 */
	_nts_7,	/* 98 */
	_nts_7,	/* 99 */
	_nts_7,	/* 100 */
	_nts_7,	/* 101 */
	_nts_7,	/* 102 */
	_nts_7,	/* 103 */
	_nts_7,	/* 104 */
	_nts_7,	/* 105 */
	_nts_2,	/* 106 */
	_nts_1,	/* 107 */
	_nts_7,	/* 108 */
	_nts_7,	/* 109 */
	_nts_7,	/* 110 */
	_nts_7,	/* 111 */
	_nts_7,	/* 112 */
	_nts_7,	/* 113 */
	_nts_7,	/* 114 */
	_nts_7,	/* 115 */
	_nts_7,	/* 116 */
	_nts_7,	/* 117 */
	_nts_7,	/* 118 */
	_nts_7,	/* 119 */
	_nts_7,	/* 120 */
	_nts_7,	/* 121 */
	_nts_7,	/* 122 */
	_nts_7,	/* 123 */
	_nts_7,	/* 124 */
	_nts_7,	/* 125 */
	_nts_7,	/* 126 */
	_nts_7,	/* 127 */
	_nts_7,	/* 128 */
	_nts_7,	/* 129 */
	_nts_0,	/* 130 */
	_nts_0,	/* 131 */
	_nts_1,	/* 132 */
	_nts_8,	/* 133 */
	_nts_8,	/* 134 */
	_nts_8,	/* 135 */
	_nts_8,	/* 136 */
	_nts_8,	/* 137 */
	_nts_8,	/* 138 */
	_nts_8,	/* 139 */
	_nts_8,	/* 140 */
	_nts_1,	/* 141 */
	_nts_1,	/* 142 */
	_nts_1,	/* 143 */
	_nts_1,	/* 144 */
	_nts_1,	/* 145 */
	_nts_1,	/* 146 */
	_nts_1,	/* 147 */
	_nts_1,	/* 148 */
	_nts_1,	/* 149 */
	_nts_1,	/* 150 */
	_nts_1,	/* 151 */
	_nts_1,	/* 152 */
	_nts_1,	/* 153 */
	_nts_1,	/* 154 */
	_nts_1,	/* 155 */
	_nts_9,	/* 156 */
	_nts_9,	/* 157 */
	_nts_9,	/* 158 */
	_nts_9,	/* 159 */
	_nts_9,	/* 160 */
	_nts_9,	/* 161 */
	_nts_9,	/* 162 */
	_nts_9,	/* 163 */
	_nts_1,	/* 164 */
	_nts_1,	/* 165 */
	_nts_1,	/* 166 */
	_nts_1,	/* 167 */
	_nts_1,	/* 168 */
	_nts_1,	/* 169 */
	_nts_1,	/* 170 */
	_nts_1,	/* 171 */
	_nts_1,	/* 172 */
	_nts_1,	/* 173 */
	_nts_1,	/* 174 */
	_nts_1,	/* 175 */
	_nts_1,	/* 176 */
	_nts_1,	/* 177 */
	_nts_1,	/* 178 */
	_nts_5,	/* 179 */
	_nts_5,	/* 180 */
	_nts_5,	/* 181 */
	_nts_5,	/* 182 */
	_nts_1,	/* 183 */
	_nts_1,	/* 184 */
	_nts_0,	/* 185 */
	_nts_4,	/* 186 */
	_nts_1,	/* 187 */
	_nts_8,	/* 188 */
	_nts_8,	/* 189 */
	_nts_8,	/* 190 */
	_nts_8,	/* 191 */
	_nts_8,	/* 192 */
	_nts_8,	/* 193 */
	_nts_8,	/* 194 */
	_nts_8,	/* 195 */
	_nts_8,	/* 196 */
	_nts_8,	/* 197 */
	_nts_8,	/* 198 */
	_nts_8,	/* 199 */
	_nts_8,	/* 200 */
	_nts_8,	/* 201 */
	_nts_8,	/* 202 */
	_nts_8,	/* 203 */
	_nts_8,	/* 204 */
	_nts_8,	/* 205 */
	_nts_8,	/* 206 */
	_nts_8,	/* 207 */
	_nts_8,	/* 208 */
	_nts_8,	/* 209 */
	_nts_8,	/* 210 */
	_nts_8,	/* 211 */
	_nts_9,	/* 212 */
	_nts_9,	/* 213 */
	_nts_9,	/* 214 */
	_nts_9,	/* 215 */
	_nts_9,	/* 216 */
	_nts_9,	/* 217 */
	_nts_9,	/* 218 */
	_nts_9,	/* 219 */
	_nts_9,	/* 220 */
	_nts_9,	/* 221 */
	_nts_9,	/* 222 */
	_nts_9,	/* 223 */
	_nts_0,	/* 224 */
	_nts_1,	/* 225 */
	_nts_10,	/* 226 */
	_nts_10,	/* 227 */
	_nts_10,	/* 228 */
	_nts_10,	/* 229 */
	_nts_10,	/* 230 */
	_nts_10,	/* 231 */
	_nts_10,	/* 232 */
	_nts_10,	/* 233 */
	_nts_1,	/* 234 */
	_nts_1,	/* 235 */
	_nts_1,	/* 236 */
	_nts_1,	/* 237 */
	_nts_1,	/* 238 */
	_nts_1,	/* 239 */
	_nts_1,	/* 240 */
	_nts_1,	/* 241 */
	_nts_1,	/* 242 */
	_nts_1,	/* 243 */
	_nts_1,	/* 244 */
	_nts_1,	/* 245 */
	_nts_1,	/* 246 */
	_nts_1,	/* 247 */
	_nts_1,	/* 248 */
	_nts_1,	/* 249 */
	_nts_9,	/* 250 */
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
/* 37 */	"%a",	/* acon: ADDRGP8 */
/* 38 */	"%1($%0)",	/* addr: ADDI4(reg,acon) */
/* 39 */	"%1($%0)",	/* addr: ADDI8(reg,acon) */
/* 40 */	"%1($%0)",	/* addr: ADDU8(reg,acon) */
/* 41 */	"%1($%0)",	/* addr: ADDP8(reg,acon) */
/* 42 */	"%0",	/* addr: acon */
/* 43 */	"($%0)",	/* addr: reg */
/* 44 */	"%a+%F($sp)",	/* addr: ADDRFP8 */
/* 45 */	"%a+%F($sp)",	/* addr: ADDRLP8 */
/* 46 */	"lda $%c,%0\n",	/* reg: addr */
/* 47 */	"# reg\n",	/* reg: CNSTI1 */
/* 48 */	"# reg\n",	/* reg: CNSTI2 */
/* 49 */	"# reg\n",	/* reg: CNSTI4 */
/* 50 */	"# reg\n",	/* reg: CNSTI8 */
/* 51 */	"# reg\n",	/* reg: CNSTU1 */
/* 52 */	"# reg\n",	/* reg: CNSTU2 */
/* 53 */	"# reg\n",	/* reg: CNSTU4 */
/* 54 */	"# reg\n",	/* reg: CNSTU8 */
/* 55 */	"# reg\n",	/* reg: CNSTP8 */
/* 56 */	"stb $%1,%0\n",	/* stmt: ASGNI1(addr,reg) */
/* 57 */	"stb $%1,%0\n",	/* stmt: ASGNU1(addr,reg) */
/* 58 */	"stw $%1,%0\n",	/* stmt: ASGNI2(addr,reg) */
/* 59 */	"stw $%1,%0\n",	/* stmt: ASGNU2(addr,reg) */
/* 60 */	"stl $%1,%0\n",	/* stmt: ASGNI4(addr,reg) */
/* 61 */	"stl $%1,%0\n",	/* stmt: ASGNU4(addr,reg) */
/* 62 */	"stq $%1,%0\n",	/* stmt: ASGNI8(addr,reg) */
/* 63 */	"stq $%1,%0\n",	/* stmt: ASGNU8(addr,reg) */
/* 64 */	"stq $%1,%0\n",	/* stmt: ASGNP8(addr,reg) */
/* 65 */	"ldb $%c,($%0)\n",	/* reg: INDIRI1(reg) */
/* 66 */	"ldw $%c,($%0)\n",	/* reg: INDIRI2(reg) */
/* 67 */	"ldl $%c,%0\n",	/* reg: INDIRI4(addr) */
/* 68 */	"ldq $%c,%0\n",	/* reg: INDIRI8(addr) */
/* 69 */	"ldq $%c,%0\n",	/* reg: INDIRP8(addr) */
/* 70 */	"ldbu $%c,($%0)\n",	/* reg: INDIRU1(reg) */
/* 71 */	"ldwu $%c,($%0)\n",	/* reg: INDIRU2(reg) */
/* 72 */	"ldl $%c,%0\nzap $%c,240,$%c\n",	/* reg: INDIRU4(addr) */
/* 73 */	"ldq $%c,%0\n",	/* reg: INDIRU8(addr) */
/* 74 */	"ldb $%c,($%0)\n",	/* reg: CVII4(INDIRI1(reg)) */
/* 75 */	"ldb $%c,($%0)\n",	/* reg: CVII8(INDIRI1(reg)) */
/* 76 */	"ldw $%c,($%0)\n",	/* reg: CVII4(INDIRI2(reg)) */
/* 77 */	"ldw $%c,($%0)\n",	/* reg: CVII8(INDIRI2(reg)) */
/* 78 */	"ldl $%c,%0\n",	/* reg: CVII8(INDIRI4(addr)) */
/* 79 */	"ldbu $%c,($%0)\n",	/* reg: CVUU4(INDIRU1(reg)) */
/* 80 */	"ldbu $%c,($%0)\n",	/* reg: CVUU8(INDIRU1(reg)) */
/* 81 */	"ldwu $%c,($%0)\n",	/* reg: CVUU4(INDIRU2(reg)) */
/* 82 */	"ldwu $%c,($%0)\n",	/* reg: CVUU8(INDIRU2(reg)) */
/* 83 */	"ldl $%c,%0\nzap $%c,240,$%c\n",	/* reg: CVUU8(INDIRU4(addr)) */
/* 84 */	"ldbu $%c,($%0)\n",	/* reg: CVUI4(INDIRU1(reg)) */
/* 85 */	"ldbu $%c,($%0)\n",	/* reg: CVUI8(INDIRU1(reg)) */
/* 86 */	"ldwu $%c,($%0)\n",	/* reg: CVUI4(INDIRU2(reg)) */
/* 87 */	"ldwu $%c,($%0)\n",	/* reg: CVUI8(INDIRU2(reg)) */
/* 88 */	"ldl $%c,%0\nzap $%c,240,$%c\n",	/* reg: CVUI8(INDIRU4(addr)) */
/* 89 */	"mov $%0,$%c\n",	/* reg: CVIU8(reg) */
/* 90 */	"lds $f%c,%0\n",	/* reg: INDIRF4(addr) */
/* 91 */	"ldt $f%c,%0\n",	/* reg: INDIRF8(addr) */
/* 92 */	"sts $f%1,%0\n",	/* stmt: ASGNF4(addr,reg) */
/* 93 */	"stt $f%1,%0\n",	/* stmt: ASGNF8(addr,reg) */
/* 94 */	"mull $%0,%1,$%c\n",	/* reg: MULI4(reg,rc) */
/* 95 */	"mulq $%0,%1,$%c\n",	/* reg: MULI8(reg,rc) */
/* 96 */	"mull $%0,%1,$%c\nzap $%c,240,$%c\n",	/* reg: MULU4(reg,rc) */
/* 97 */	"mulq $%0,%1,$%c\n",	/* reg: MULU8(reg,rc) */
/* 98 */	"divl $%0,%1,$%c\n",	/* reg: DIVI4(reg,rc) */
/* 99 */	"divq $%0,%1,$%c\n",	/* reg: DIVI8(reg,rc) */
/* 100 */	"divlu $%0,%1,$%c\n",	/* reg: DIVU4(reg,rc) */
/* 101 */	"divqu $%0,%1,$%c\n",	/* reg: DIVU8(reg,rc) */
/* 102 */	"reml $%0,%1,$%c\n",	/* reg: MODI4(reg,rc) */
/* 103 */	"remq $%0,%1,$%c\n",	/* reg: MODI8(reg,rc) */
/* 104 */	"remlu $%0,%1,$%c\n",	/* reg: MODU4(reg,rc) */
/* 105 */	"remqu $%0,%1,$%c\n",	/* reg: MODU8(reg,rc) */
/* 106 */	"%0",	/* rc: con */
/* 107 */	"$%0",	/* rc: reg */
/* 108 */	"addl $%0,%1,$%c\n",	/* reg: ADDI4(reg,rc) */
/* 109 */	"addq $%0,%1,$%c\n",	/* reg: ADDI8(reg,rc) */
/* 110 */	"addq $%0,%1,$%c\n",	/* reg: ADDP8(reg,rc) */
/* 111 */	"addl $%0,%1,$%c\nzap $%c,240,$%c\n",	/* reg: ADDU4(reg,rc) */
/* 112 */	"addq $%0,%1,$%c\n",	/* reg: ADDU8(reg,rc) */
/* 113 */	"subl $%0,%1,$%c\n",	/* reg: SUBI4(reg,rc) */
/* 114 */	"subq $%0,%1,$%c\n",	/* reg: SUBI8(reg,rc) */
/* 115 */	"subq $%0,%1,$%c\n",	/* reg: SUBP8(reg,rc) */
/* 116 */	"subl $%0,%1,$%c\nzap $%c,240,$%c\n",	/* reg: SUBU4(reg,rc) */
/* 117 */	"subq $%0,%1,$%c\n",	/* reg: SUBU8(reg,rc) */
/* 118 */	"and $%0,%1,$%c\naddl $%c,0,$%c\n",	/* reg: BANDI4(reg,rc) */
/* 119 */	"and $%0,%1,$%c\n",	/* reg: BANDI8(reg,rc) */
/* 120 */	"and $%0,%1,$%c\n",	/* reg: BANDU4(reg,rc) */
/* 121 */	"and $%0,%1,$%c\n",	/* reg: BANDU8(reg,rc) */
/* 122 */	"or $%0,%1,$%c\naddl $%c,0,$%c\n",	/* reg: BORI4(reg,rc) */
/* 123 */	"or $%0,%1,$%c\n",	/* reg: BORI8(reg,rc) */
/* 124 */	"or $%0,%1,$%c\n",	/* reg: BORU4(reg,rc) */
/* 125 */	"or $%0,%1,$%c\n",	/* reg: BORU8(reg,rc) */
/* 126 */	"xor $%0,%1,$%c\naddl $%c,0,$%c\n",	/* reg: BXORI4(reg,rc) */
/* 127 */	"xor $%0,%1,$%c\n",	/* reg: BXORI8(reg,rc) */
/* 128 */	"xor $%0,%1,$%c\n",	/* reg: BXORU4(reg,rc) */
/* 129 */	"xor $%0,%1,$%c\n",	/* reg: BXORU8(reg,rc) */
/* 130 */	"%a",	/* rc6: CNSTI4 */
/* 131 */	"%a",	/* rc6: CNSTI8 */
/* 132 */	"$%0",	/* rc6: reg */
/* 133 */	"sll $%0,%1,$%c\naddl $%c,0,$%c\n",	/* reg: LSHI4(reg,rc6) */
/* 134 */	"sll $%0,%1,$%c\n",	/* reg: LSHI8(reg,rc6) */
/* 135 */	"sll $%0,%1,$%c\nzap $%c,240,$%c\n",	/* reg: LSHU4(reg,rc6) */
/* 136 */	"sll $%0,%1,$%c\n",	/* reg: LSHU8(reg,rc6) */
/* 137 */	"sra $%0,%1,$%c\naddl $%c,0,$%c\n",	/* reg: RSHI4(reg,rc6) */
/* 138 */	"sra $%0,%1,$%c\n",	/* reg: RSHI8(reg,rc6) */
/* 139 */	"srl $%0,%1,$%c\n",	/* reg: RSHU4(reg,rc6) */
/* 140 */	"srl $%0,%1,$%c\n",	/* reg: RSHU8(reg,rc6) */
/* 141 */	"not $%0,$%c\naddl $%c,0,$%c\n",	/* reg: BCOMI4(reg) */
/* 142 */	"not $%0,$%c\nzap $%c,240,$%c\n",	/* reg: BCOMU4(reg) */
/* 143 */	"not $%0,$%c\n",	/* reg: BCOMI8(reg) */
/* 144 */	"not $%0,$%c\n",	/* reg: BCOMU8(reg) */
/* 145 */	"negl $%0,$%c\n",	/* reg: NEGI4(reg) */
/* 146 */	"negq $%0,$%c\n",	/* reg: NEGI8(reg) */
/* 147 */	"mov $%0,$%c\n",	/* reg: LOADI1(reg) */
/* 148 */	"mov $%0,$%c\n",	/* reg: LOADI2(reg) */
/* 149 */	"mov $%0,$%c\n",	/* reg: LOADI4(reg) */
/* 150 */	"mov $%0,$%c\n",	/* reg: LOADI8(reg) */
/* 151 */	"mov $%0,$%c\n",	/* reg: LOADP8(reg) */
/* 152 */	"mov $%0,$%c\n",	/* reg: LOADU1(reg) */
/* 153 */	"mov $%0,$%c\n",	/* reg: LOADU2(reg) */
/* 154 */	"mov $%0,$%c\n",	/* reg: LOADU4(reg) */
/* 155 */	"mov $%0,$%c\n",	/* reg: LOADU8(reg) */
/* 156 */	"adds $f%0,$f%1,$f%c\n",	/* reg: ADDF4(reg,reg) */
/* 157 */	"addt $f%0,$f%1,$f%c\n",	/* reg: ADDF8(reg,reg) */
/* 158 */	"divs $f%0,$f%1,$f%c\n",	/* reg: DIVF4(reg,reg) */
/* 159 */	"divt $f%0,$f%1,$f%c\n",	/* reg: DIVF8(reg,reg) */
/* 160 */	"muls $f%0,$f%1,$f%c\n",	/* reg: MULF4(reg,reg) */
/* 161 */	"mult $f%0,$f%1,$f%c\n",	/* reg: MULF8(reg,reg) */
/* 162 */	"subs $f%0,$f%1,$f%c\n",	/* reg: SUBF4(reg,reg) */
/* 163 */	"subt $f%0,$f%1,$f%c\n",	/* reg: SUBF8(reg,reg) */
/* 164 */	"fmov $f%0,$f%c\n",	/* reg: LOADF4(reg) */
/* 165 */	"fmov $f%0,$f%c\n",	/* reg: LOADF8(reg) */
/* 166 */	"negs $f%0,$f%c\n",	/* reg: NEGF4(reg) */
/* 167 */	"negt $f%0,$f%c\n",	/* reg: NEGF8(reg) */
/* 168 */	"sll $%0,8*(8-%a),$%c\nsra $%c,8*(8-%a),$%c\n",	/* reg: CVII4(reg) */
/* 169 */	"sll $%0,8*(8-%a),$%c\nsra $%c,8*(8-%a),$%c\n",	/* reg: CVII8(reg) */
/* 170 */	"and $%0,(1<<(8*%a))-1,$%c\n",	/* reg: CVUI4(reg) */
/* 171 */	"and $%0,(1<<(8*%a))-1,$%c\n",	/* reg: CVUI8(reg) */
/* 172 */	"and $%0,(1<<(8*%a))-1,$%c\n",	/* reg: CVUU4(reg) */
/* 173 */	"and $%0,(1<<(8*%a))-1,$%c\n",	/* reg: CVUU8(reg) */
/* 174 */	"and $%0,(1<<(8*%a))-1,$%c\n",	/* reg: CVUP8(reg) */
/* 175 */	"cvtts $f%0,$f%c\n",	/* reg: CVFF4(reg) */
/* 176 */	"cvtst $f%0,$f%c\n",	/* reg: CVFF8(reg) */
/* 177 */	"stq $%0,-56+%F($sp)\nldt $%f%c,-56+%F($sp)\ncvtqs $f%c,$f%c\n",	/* reg: CVIF4(reg) */
/* 178 */	"stq $%0,-56+%F($sp)\nldt $%f%c,-56+%F($sp)\ncvtqt $f%c,$f%c\n",	/* reg: CVIF8(reg) */
/* 179 */	"lds $f%c,%0\ncvtlq $f%c,$f%c\ncvtqs $f%c,$f%c\n",	/* reg: CVIF4(INDIRI4(addr)) */
/* 180 */	"ldt $f%c,%0\ncvtqs $f%c,$f%c\n",	/* reg: CVIF4(INDIRI8(addr)) */
/* 181 */	"lds $f%c,%0\ncvtlq $f%c,$f%c\ncvtqt $f%c,$f%c\n",	/* reg: CVIF8(INDIRI4(addr)) */
/* 182 */	"ldt $f%c,%0\ncvtqt $f%c,$f%c\n",	/* reg: CVIF8(INDIRI8(addr)) */
/* 183 */	"cvttqc $f%0,$f1\ncvtql $f1,$f1\nsts $f1,-56+%F($sp)\nldl $%c,-56+%F($sp)\n",	/* reg: CVFI4(reg) */
/* 184 */	"cvttqc $f%0,$f1\nstt $f1,-56+%F($sp)\nldq $%c,-56+%F($sp)\n",	/* reg: CVFI8(reg) */
/* 185 */	"%a:\n",	/* stmt: LABELV */
/* 186 */	"br %0\n",	/* stmt: JUMPV(acon) */
/* 187 */	"jmp ($%0)\n",	/* stmt: JUMPV(reg) */
/* 188 */	"cmpeq $%0,%1,$23\nbne $23,%a\n",	/* stmt: EQI4(reg,rc6) */
/* 189 */	"cmpeq $%0,%1,$23\nbne $23,%a\n",	/* stmt: EQU4(reg,rc6) */
/* 190 */	"cmpeq $%0,%1,$23\nbne $23,%a\n",	/* stmt: EQI8(reg,rc6) */
/* 191 */	"cmpeq $%0,%1,$23\nbne $23,%a\n",	/* stmt: EQU8(reg,rc6) */
/* 192 */	"cmpeq $%0,%1,$23\nbeq $23,%a\n",	/* stmt: NEI4(reg,rc6) */
/* 193 */	"cmpeq $%0,%1,$23\nbeq $23,%a\n",	/* stmt: NEU4(reg,rc6) */
/* 194 */	"cmpeq $%0,%1,$23\nbeq $23,%a\n",	/* stmt: NEI8(reg,rc6) */
/* 195 */	"cmpeq $%0,%1,$23\nbeq $23,%a\n",	/* stmt: NEU8(reg,rc6) */
/* 196 */	"cmplt $%0,%1,$23\nbeq $23,%a\n",	/* stmt: GEI4(reg,rc6) */
/* 197 */	"cmplt $%0,%1,$23\nbeq $23,%a\n",	/* stmt: GEI8(reg,rc6) */
/* 198 */	"cmpult $%0,%1,$23\nbeq $23,%a\n",	/* stmt: GEU4(reg,rc6) */
/* 199 */	"cmpult $%0,%1,$23\nbeq $23,%a\n",	/* stmt: GEU8(reg,rc6) */
/* 200 */	"cmple $%0,%1,$23\nbeq $23,%a\n",	/* stmt: GTI4(reg,rc6) */
/* 201 */	"cmple $%0,%1,$23\nbeq $23,%a\n",	/* stmt: GTI8(reg,rc6) */
/* 202 */	"cmpule $%0,%1,$23\nbeq $23,%a\n",	/* stmt: GTU4(reg,rc6) */
/* 203 */	"cmpule $%0,%1,$23\nbeq $23,%a\n",	/* stmt: GTU8(reg,rc6) */
/* 204 */	"cmple $%0,%1,$23\nbne $23,%a\n",	/* stmt: LEI4(reg,rc6) */
/* 205 */	"cmple $%0,%1,$23\nbne $23,%a\n",	/* stmt: LEI8(reg,rc6) */
/* 206 */	"cmpule $%0,%1,$23\nbne $23,%a\n",	/* stmt: LEU4(reg,rc6) */
/* 207 */	"cmpule $%0,%1,$23\nbne $23,%a\n",	/* stmt: LEU8(reg,rc6) */
/* 208 */	"cmplt $%0,%1,$23\nbne $23,%a\n",	/* stmt: LTI4(reg,rc6) */
/* 209 */	"cmplt $%0,%1,$23\nbne $23,%a\n",	/* stmt: LTI8(reg,rc6) */
/* 210 */	"cmpult $%0,%1,$23\nbne $23,%a\n",	/* stmt: LTU4(reg,rc6) */
/* 211 */	"cmpult $%0,%1,$23\nbne $23,%a\n",	/* stmt: LTU8(reg,rc6) */
/* 212 */	"cmpteq $f%0,$f%1,$f1\nfbne $f1,%a\n",	/* stmt: EQF4(reg,reg) */
/* 213 */	"cmpteq $f%0,$f%1,$f1\nfbne $f1,%a\n",	/* stmt: EQF8(reg,reg) */
/* 214 */	"cmptle $f%0,$f%1,$f1\nfbne $f1,%a\n",	/* stmt: LEF4(reg,reg) */
/* 215 */	"cmptle $f%0,$f%1,$f1\nfbne $f1,%a\n",	/* stmt: LEF8(reg,reg) */
/* 216 */	"cmptlt $f%0,$f%1,$f1\nfbne $f1,%a\n",	/* stmt: LTF4(reg,reg) */
/* 217 */	"cmptlt $f%0,$f%1,$f1\nfbne $f1,%a\n",	/* stmt: LTF8(reg,reg) */
/* 218 */	"cmpteq $f%0,$f%1,$f1\nfbeq $f1,%a\n",	/* stmt: NEF4(reg,reg) */
/* 219 */	"cmpteq $f%0,$f%1,$f1\nfbeq $f1,%a\n",	/* stmt: NEF8(reg,reg) */
/* 220 */	"cmptlt $f%0,$f%1,$f1\nfbeq $f1,%a\n",	/* stmt: GEF4(reg,reg) */
/* 221 */	"cmptlt $f%0,$f%1,$f1\nfbeq $f1,%a\n",	/* stmt: GEF8(reg,reg) */
/* 222 */	"cmptle $f%0,$f%1,$f1\nfbeq $f1,%a\n",	/* stmt: GTF4(reg,reg) */
/* 223 */	"cmptle $f%0,$f%1,$f1\nfbeq $f1,%a\n",	/* stmt: GTF8(reg,reg) */
/* 224 */	"%a",	/* ar: ADDRGP8 */
/* 225 */	"($%0)",	/* ar: reg */
/* 226 */	"jsr $26,%0\nldgp $gp,0($26)\n",	/* reg: CALLF4(ar) */
/* 227 */	"jsr $26,%0\nldgp $gp,0($26)\n",	/* reg: CALLF8(ar) */
/* 228 */	"jsr $26,%0\nldgp $gp,0($26)\n",	/* reg: CALLI4(ar) */
/* 229 */	"jsr $26,%0\nldgp $gp,0($26)\n",	/* reg: CALLI8(ar) */
/* 230 */	"jsr $26,%0\nldgp $gp,0($26)\n",	/* reg: CALLP8(ar) */
/* 231 */	"jsr $26,%0\nldgp $gp,0($26)\n",	/* reg: CALLU4(ar) */
/* 232 */	"jsr $26,%0\nldgp $gp,0($26)\n",	/* reg: CALLU8(ar) */
/* 233 */	"jsr $26,%0\nldgp $gp,0($26)\n",	/* stmt: CALLV(ar) */
/* 234 */	"# ret\n",	/* stmt: RETF4(reg) */
/* 235 */	"# ret\n",	/* stmt: RETF8(reg) */
/* 236 */	"# ret\n",	/* stmt: RETI4(reg) */
/* 237 */	"# ret\n",	/* stmt: RETU4(reg) */
/* 238 */	"# ret\n",	/* stmt: RETI8(reg) */
/* 239 */	"# ret\n",	/* stmt: RETU8(reg) */
/* 240 */	"# ret\n",	/* stmt: RETP8(reg) */
/* 241 */	"# ret\n",	/* stmt: RETV(reg) */
/* 242 */	"# arg\n",	/* stmt: ARGF4(reg) */
/* 243 */	"# arg\n",	/* stmt: ARGF8(reg) */
/* 244 */	"# arg\n",	/* stmt: ARGI4(reg) */
/* 245 */	"# arg\n",	/* stmt: ARGI8(reg) */
/* 246 */	"# arg\n",	/* stmt: ARGP8(reg) */
/* 247 */	"# arg\n",	/* stmt: ARGU4(reg) */
/* 248 */	"# arg\n",	/* stmt: ARGU8(reg) */
/* 249 */	"# argb %0\n",	/* stmt: ARGB(INDIRB(reg)) */
/* 250 */	"# asgnb %0 %1\n",	/* stmt: ASGNB(reg,INDIRB(reg)) */
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
/* 41 */	0,	/* %1($%0) */
/* 42 */	0,	/* %0 */
/* 43 */	0,	/* ($%0) */
/* 44 */	0,	/* %a+%F($sp) */
/* 45 */	0,	/* %a+%F($sp) */
/* 46 */	1,	/* lda $%c,%0\n */
/* 47 */	1,	/* # reg\n */
/* 48 */	1,	/* # reg\n */
/* 49 */	1,	/* # reg\n */
/* 50 */	1,	/* # reg\n */
/* 51 */	1,	/* # reg\n */
/* 52 */	1,	/* # reg\n */
/* 53 */	1,	/* # reg\n */
/* 54 */	1,	/* # reg\n */
/* 55 */	1,	/* # reg\n */
/* 56 */	1,	/* stb $%1,%0\n */
/* 57 */	1,	/* stb $%1,%0\n */
/* 58 */	1,	/* stw $%1,%0\n */
/* 59 */	1,	/* stw $%1,%0\n */
/* 60 */	1,	/* stl $%1,%0\n */
/* 61 */	1,	/* stl $%1,%0\n */
/* 62 */	1,	/* stq $%1,%0\n */
/* 63 */	1,	/* stq $%1,%0\n */
/* 64 */	1,	/* stq $%1,%0\n */
/* 65 */	1,	/* ldb $%c,($%0)\n */
/* 66 */	1,	/* ldw $%c,($%0)\n */
/* 67 */	1,	/* ldl $%c,%0\n */
/* 68 */	1,	/* ldq $%c,%0\n */
/* 69 */	1,	/* ldq $%c,%0\n */
/* 70 */	1,	/* ldbu $%c,($%0)\n */
/* 71 */	1,	/* ldwu $%c,($%0)\n */
/* 72 */	1,	/* ldl $%c,%0\nzap $%c,240,$%c\n */
/* 73 */	1,	/* ldq $%c,%0\n */
/* 74 */	1,	/* ldb $%c,($%0)\n */
/* 75 */	1,	/* ldb $%c,($%0)\n */
/* 76 */	1,	/* ldw $%c,($%0)\n */
/* 77 */	1,	/* ldw $%c,($%0)\n */
/* 78 */	1,	/* ldl $%c,%0\n */
/* 79 */	1,	/* ldbu $%c,($%0)\n */
/* 80 */	1,	/* ldbu $%c,($%0)\n */
/* 81 */	1,	/* ldwu $%c,($%0)\n */
/* 82 */	1,	/* ldwu $%c,($%0)\n */
/* 83 */	1,	/* ldl $%c,%0\nzap $%c,240,$%c\n */
/* 84 */	1,	/* ldbu $%c,($%0)\n */
/* 85 */	1,	/* ldbu $%c,($%0)\n */
/* 86 */	1,	/* ldwu $%c,($%0)\n */
/* 87 */	1,	/* ldwu $%c,($%0)\n */
/* 88 */	1,	/* ldl $%c,%0\nzap $%c,240,$%c\n */
/* 89 */	1,	/* mov $%0,$%c\n */
/* 90 */	1,	/* lds $f%c,%0\n */
/* 91 */	1,	/* ldt $f%c,%0\n */
/* 92 */	1,	/* sts $f%1,%0\n */
/* 93 */	1,	/* stt $f%1,%0\n */
/* 94 */	1,	/* mull $%0,%1,$%c\n */
/* 95 */	1,	/* mulq $%0,%1,$%c\n */
/* 96 */	1,	/* mull $%0,%1,$%c\nzap $%c,240,$%c\n */
/* 97 */	1,	/* mulq $%0,%1,$%c\n */
/* 98 */	1,	/* divl $%0,%1,$%c\n */
/* 99 */	1,	/* divq $%0,%1,$%c\n */
/* 100 */	1,	/* divlu $%0,%1,$%c\n */
/* 101 */	1,	/* divqu $%0,%1,$%c\n */
/* 102 */	1,	/* reml $%0,%1,$%c\n */
/* 103 */	1,	/* remq $%0,%1,$%c\n */
/* 104 */	1,	/* remlu $%0,%1,$%c\n */
/* 105 */	1,	/* remqu $%0,%1,$%c\n */
/* 106 */	0,	/* %0 */
/* 107 */	0,	/* $%0 */
/* 108 */	1,	/* addl $%0,%1,$%c\n */
/* 109 */	1,	/* addq $%0,%1,$%c\n */
/* 110 */	1,	/* addq $%0,%1,$%c\n */
/* 111 */	1,	/* addl $%0,%1,$%c\nzap $%c,240,$%c\n */
/* 112 */	1,	/* addq $%0,%1,$%c\n */
/* 113 */	1,	/* subl $%0,%1,$%c\n */
/* 114 */	1,	/* subq $%0,%1,$%c\n */
/* 115 */	1,	/* subq $%0,%1,$%c\n */
/* 116 */	1,	/* subl $%0,%1,$%c\nzap $%c,240,$%c\n */
/* 117 */	1,	/* subq $%0,%1,$%c\n */
/* 118 */	1,	/* and $%0,%1,$%c\naddl $%c,0,$%c\n */
/* 119 */	1,	/* and $%0,%1,$%c\n */
/* 120 */	1,	/* and $%0,%1,$%c\n */
/* 121 */	1,	/* and $%0,%1,$%c\n */
/* 122 */	1,	/* or $%0,%1,$%c\naddl $%c,0,$%c\n */
/* 123 */	1,	/* or $%0,%1,$%c\n */
/* 124 */	1,	/* or $%0,%1,$%c\n */
/* 125 */	1,	/* or $%0,%1,$%c\n */
/* 126 */	1,	/* xor $%0,%1,$%c\naddl $%c,0,$%c\n */
/* 127 */	1,	/* xor $%0,%1,$%c\n */
/* 128 */	1,	/* xor $%0,%1,$%c\n */
/* 129 */	1,	/* xor $%0,%1,$%c\n */
/* 130 */	0,	/* %a */
/* 131 */	0,	/* %a */
/* 132 */	0,	/* $%0 */
/* 133 */	1,	/* sll $%0,%1,$%c\naddl $%c,0,$%c\n */
/* 134 */	1,	/* sll $%0,%1,$%c\n */
/* 135 */	1,	/* sll $%0,%1,$%c\nzap $%c,240,$%c\n */
/* 136 */	1,	/* sll $%0,%1,$%c\n */
/* 137 */	1,	/* sra $%0,%1,$%c\naddl $%c,0,$%c\n */
/* 138 */	1,	/* sra $%0,%1,$%c\n */
/* 139 */	1,	/* srl $%0,%1,$%c\n */
/* 140 */	1,	/* srl $%0,%1,$%c\n */
/* 141 */	1,	/* not $%0,$%c\naddl $%c,0,$%c\n */
/* 142 */	1,	/* not $%0,$%c\nzap $%c,240,$%c\n */
/* 143 */	1,	/* not $%0,$%c\n */
/* 144 */	1,	/* not $%0,$%c\n */
/* 145 */	1,	/* negl $%0,$%c\n */
/* 146 */	1,	/* negq $%0,$%c\n */
/* 147 */	1,	/* mov $%0,$%c\n */
/* 148 */	1,	/* mov $%0,$%c\n */
/* 149 */	1,	/* mov $%0,$%c\n */
/* 150 */	1,	/* mov $%0,$%c\n */
/* 151 */	1,	/* mov $%0,$%c\n */
/* 152 */	1,	/* mov $%0,$%c\n */
/* 153 */	1,	/* mov $%0,$%c\n */
/* 154 */	1,	/* mov $%0,$%c\n */
/* 155 */	1,	/* mov $%0,$%c\n */
/* 156 */	1,	/* adds $f%0,$f%1,$f%c\n */
/* 157 */	1,	/* addt $f%0,$f%1,$f%c\n */
/* 158 */	1,	/* divs $f%0,$f%1,$f%c\n */
/* 159 */	1,	/* divt $f%0,$f%1,$f%c\n */
/* 160 */	1,	/* muls $f%0,$f%1,$f%c\n */
/* 161 */	1,	/* mult $f%0,$f%1,$f%c\n */
/* 162 */	1,	/* subs $f%0,$f%1,$f%c\n */
/* 163 */	1,	/* subt $f%0,$f%1,$f%c\n */
/* 164 */	1,	/* fmov $f%0,$f%c\n */
/* 165 */	1,	/* fmov $f%0,$f%c\n */
/* 166 */	1,	/* negs $f%0,$f%c\n */
/* 167 */	1,	/* negt $f%0,$f%c\n */
/* 168 */	1,	/* sll $%0,8*(8-%a),$%c\nsra $%c,8*(8-%a),$%c\n */
/* 169 */	1,	/* sll $%0,8*(8-%a),$%c\nsra $%c,8*(8-%a),$%c\n */
/* 170 */	1,	/* and $%0,(1<<(8*%a))-1,$%c\n */
/* 171 */	1,	/* and $%0,(1<<(8*%a))-1,$%c\n */
/* 172 */	1,	/* and $%0,(1<<(8*%a))-1,$%c\n */
/* 173 */	1,	/* and $%0,(1<<(8*%a))-1,$%c\n */
/* 174 */	1,	/* and $%0,(1<<(8*%a))-1,$%c\n */
/* 175 */	1,	/* cvtts $f%0,$f%c\n */
/* 176 */	1,	/* cvtst $f%0,$f%c\n */
/* 177 */	1,	/* stq $%0,-56+%F($sp)\nldt $%f%c,-56+%F($sp)\ncvtqs $f%c,$f%c\n */
/* 178 */	1,	/* stq $%0,-56+%F($sp)\nldt $%f%c,-56+%F($sp)\ncvtqt $f%c,$f%c\n */
/* 179 */	1,	/* lds $f%c,%0\ncvtlq $f%c,$f%c\ncvtqs $f%c,$f%c\n */
/* 180 */	1,	/* ldt $f%c,%0\ncvtqs $f%c,$f%c\n */
/* 181 */	1,	/* lds $f%c,%0\ncvtlq $f%c,$f%c\ncvtqt $f%c,$f%c\n */
/* 182 */	1,	/* ldt $f%c,%0\ncvtqt $f%c,$f%c\n */
/* 183 */	1,	/* cvttqc $f%0,$f1\ncvtql $f1,$f1\nsts $f1,-56+%F($sp)\nldl $%c,-56+%F($sp)\n */
/* 184 */	1,	/* cvttqc $f%0,$f1\nstt $f1,-56+%F($sp)\nldq $%c,-56+%F($sp)\n */
/* 185 */	1,	/* %a:\n */
/* 186 */	1,	/* br %0\n */
/* 187 */	1,	/* jmp ($%0)\n */
/* 188 */	1,	/* cmpeq $%0,%1,$23\nbne $23,%a\n */
/* 189 */	1,	/* cmpeq $%0,%1,$23\nbne $23,%a\n */
/* 190 */	1,	/* cmpeq $%0,%1,$23\nbne $23,%a\n */
/* 191 */	1,	/* cmpeq $%0,%1,$23\nbne $23,%a\n */
/* 192 */	1,	/* cmpeq $%0,%1,$23\nbeq $23,%a\n */
/* 193 */	1,	/* cmpeq $%0,%1,$23\nbeq $23,%a\n */
/* 194 */	1,	/* cmpeq $%0,%1,$23\nbeq $23,%a\n */
/* 195 */	1,	/* cmpeq $%0,%1,$23\nbeq $23,%a\n */
/* 196 */	1,	/* cmplt $%0,%1,$23\nbeq $23,%a\n */
/* 197 */	1,	/* cmplt $%0,%1,$23\nbeq $23,%a\n */
/* 198 */	1,	/* cmpult $%0,%1,$23\nbeq $23,%a\n */
/* 199 */	1,	/* cmpult $%0,%1,$23\nbeq $23,%a\n */
/* 200 */	1,	/* cmple $%0,%1,$23\nbeq $23,%a\n */
/* 201 */	1,	/* cmple $%0,%1,$23\nbeq $23,%a\n */
/* 202 */	1,	/* cmpule $%0,%1,$23\nbeq $23,%a\n */
/* 203 */	1,	/* cmpule $%0,%1,$23\nbeq $23,%a\n */
/* 204 */	1,	/* cmple $%0,%1,$23\nbne $23,%a\n */
/* 205 */	1,	/* cmple $%0,%1,$23\nbne $23,%a\n */
/* 206 */	1,	/* cmpule $%0,%1,$23\nbne $23,%a\n */
/* 207 */	1,	/* cmpule $%0,%1,$23\nbne $23,%a\n */
/* 208 */	1,	/* cmplt $%0,%1,$23\nbne $23,%a\n */
/* 209 */	1,	/* cmplt $%0,%1,$23\nbne $23,%a\n */
/* 210 */	1,	/* cmpult $%0,%1,$23\nbne $23,%a\n */
/* 211 */	1,	/* cmpult $%0,%1,$23\nbne $23,%a\n */
/* 212 */	1,	/* cmpteq $f%0,$f%1,$f1\nfbne $f1,%a\n */
/* 213 */	1,	/* cmpteq $f%0,$f%1,$f1\nfbne $f1,%a\n */
/* 214 */	1,	/* cmptle $f%0,$f%1,$f1\nfbne $f1,%a\n */
/* 215 */	1,	/* cmptle $f%0,$f%1,$f1\nfbne $f1,%a\n */
/* 216 */	1,	/* cmptlt $f%0,$f%1,$f1\nfbne $f1,%a\n */
/* 217 */	1,	/* cmptlt $f%0,$f%1,$f1\nfbne $f1,%a\n */
/* 218 */	1,	/* cmpteq $f%0,$f%1,$f1\nfbeq $f1,%a\n */
/* 219 */	1,	/* cmpteq $f%0,$f%1,$f1\nfbeq $f1,%a\n */
/* 220 */	1,	/* cmptlt $f%0,$f%1,$f1\nfbeq $f1,%a\n */
/* 221 */	1,	/* cmptlt $f%0,$f%1,$f1\nfbeq $f1,%a\n */
/* 222 */	1,	/* cmptle $f%0,$f%1,$f1\nfbeq $f1,%a\n */
/* 223 */	1,	/* cmptle $f%0,$f%1,$f1\nfbeq $f1,%a\n */
/* 224 */	0,	/* %a */
/* 225 */	0,	/* ($%0) */
/* 226 */	1,	/* jsr $26,%0\nldgp $gp,0($26)\n */
/* 227 */	1,	/* jsr $26,%0\nldgp $gp,0($26)\n */
/* 228 */	1,	/* jsr $26,%0\nldgp $gp,0($26)\n */
/* 229 */	1,	/* jsr $26,%0\nldgp $gp,0($26)\n */
/* 230 */	1,	/* jsr $26,%0\nldgp $gp,0($26)\n */
/* 231 */	1,	/* jsr $26,%0\nldgp $gp,0($26)\n */
/* 232 */	1,	/* jsr $26,%0\nldgp $gp,0($26)\n */
/* 233 */	1,	/* jsr $26,%0\nldgp $gp,0($26)\n */
/* 234 */	1,	/* # ret\n */
/* 235 */	1,	/* # ret\n */
/* 236 */	1,	/* # ret\n */
/* 237 */	1,	/* # ret\n */
/* 238 */	1,	/* # ret\n */
/* 239 */	1,	/* # ret\n */
/* 240 */	1,	/* # ret\n */
/* 241 */	1,	/* # ret\n */
/* 242 */	1,	/* # arg\n */
/* 243 */	1,	/* # arg\n */
/* 244 */	1,	/* # arg\n */
/* 245 */	1,	/* # arg\n */
/* 246 */	1,	/* # arg\n */
/* 247 */	1,	/* # arg\n */
/* 248 */	1,	/* # arg\n */
/* 249 */	1,	/* # argb %0\n */
/* 250 */	1,	/* # asgnb %0 %1\n */
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
/* 37 */	"acon: ADDRGP8",
/* 38 */	"addr: ADDI4(reg,acon)",
/* 39 */	"addr: ADDI8(reg,acon)",
/* 40 */	"addr: ADDU8(reg,acon)",
/* 41 */	"addr: ADDP8(reg,acon)",
/* 42 */	"addr: acon",
/* 43 */	"addr: reg",
/* 44 */	"addr: ADDRFP8",
/* 45 */	"addr: ADDRLP8",
/* 46 */	"reg: addr",
/* 47 */	"reg: CNSTI1",
/* 48 */	"reg: CNSTI2",
/* 49 */	"reg: CNSTI4",
/* 50 */	"reg: CNSTI8",
/* 51 */	"reg: CNSTU1",
/* 52 */	"reg: CNSTU2",
/* 53 */	"reg: CNSTU4",
/* 54 */	"reg: CNSTU8",
/* 55 */	"reg: CNSTP8",
/* 56 */	"stmt: ASGNI1(addr,reg)",
/* 57 */	"stmt: ASGNU1(addr,reg)",
/* 58 */	"stmt: ASGNI2(addr,reg)",
/* 59 */	"stmt: ASGNU2(addr,reg)",
/* 60 */	"stmt: ASGNI4(addr,reg)",
/* 61 */	"stmt: ASGNU4(addr,reg)",
/* 62 */	"stmt: ASGNI8(addr,reg)",
/* 63 */	"stmt: ASGNU8(addr,reg)",
/* 64 */	"stmt: ASGNP8(addr,reg)",
/* 65 */	"reg: INDIRI1(reg)",
/* 66 */	"reg: INDIRI2(reg)",
/* 67 */	"reg: INDIRI4(addr)",
/* 68 */	"reg: INDIRI8(addr)",
/* 69 */	"reg: INDIRP8(addr)",
/* 70 */	"reg: INDIRU1(reg)",
/* 71 */	"reg: INDIRU2(reg)",
/* 72 */	"reg: INDIRU4(addr)",
/* 73 */	"reg: INDIRU8(addr)",
/* 74 */	"reg: CVII4(INDIRI1(reg))",
/* 75 */	"reg: CVII8(INDIRI1(reg))",
/* 76 */	"reg: CVII4(INDIRI2(reg))",
/* 77 */	"reg: CVII8(INDIRI2(reg))",
/* 78 */	"reg: CVII8(INDIRI4(addr))",
/* 79 */	"reg: CVUU4(INDIRU1(reg))",
/* 80 */	"reg: CVUU8(INDIRU1(reg))",
/* 81 */	"reg: CVUU4(INDIRU2(reg))",
/* 82 */	"reg: CVUU8(INDIRU2(reg))",
/* 83 */	"reg: CVUU8(INDIRU4(addr))",
/* 84 */	"reg: CVUI4(INDIRU1(reg))",
/* 85 */	"reg: CVUI8(INDIRU1(reg))",
/* 86 */	"reg: CVUI4(INDIRU2(reg))",
/* 87 */	"reg: CVUI8(INDIRU2(reg))",
/* 88 */	"reg: CVUI8(INDIRU4(addr))",
/* 89 */	"reg: CVIU8(reg)",
/* 90 */	"reg: INDIRF4(addr)",
/* 91 */	"reg: INDIRF8(addr)",
/* 92 */	"stmt: ASGNF4(addr,reg)",
/* 93 */	"stmt: ASGNF8(addr,reg)",
/* 94 */	"reg: MULI4(reg,rc)",
/* 95 */	"reg: MULI8(reg,rc)",
/* 96 */	"reg: MULU4(reg,rc)",
/* 97 */	"reg: MULU8(reg,rc)",
/* 98 */	"reg: DIVI4(reg,rc)",
/* 99 */	"reg: DIVI8(reg,rc)",
/* 100 */	"reg: DIVU4(reg,rc)",
/* 101 */	"reg: DIVU8(reg,rc)",
/* 102 */	"reg: MODI4(reg,rc)",
/* 103 */	"reg: MODI8(reg,rc)",
/* 104 */	"reg: MODU4(reg,rc)",
/* 105 */	"reg: MODU8(reg,rc)",
/* 106 */	"rc: con",
/* 107 */	"rc: reg",
/* 108 */	"reg: ADDI4(reg,rc)",
/* 109 */	"reg: ADDI8(reg,rc)",
/* 110 */	"reg: ADDP8(reg,rc)",
/* 111 */	"reg: ADDU4(reg,rc)",
/* 112 */	"reg: ADDU8(reg,rc)",
/* 113 */	"reg: SUBI4(reg,rc)",
/* 114 */	"reg: SUBI8(reg,rc)",
/* 115 */	"reg: SUBP8(reg,rc)",
/* 116 */	"reg: SUBU4(reg,rc)",
/* 117 */	"reg: SUBU8(reg,rc)",
/* 118 */	"reg: BANDI4(reg,rc)",
/* 119 */	"reg: BANDI8(reg,rc)",
/* 120 */	"reg: BANDU4(reg,rc)",
/* 121 */	"reg: BANDU8(reg,rc)",
/* 122 */	"reg: BORI4(reg,rc)",
/* 123 */	"reg: BORI8(reg,rc)",
/* 124 */	"reg: BORU4(reg,rc)",
/* 125 */	"reg: BORU8(reg,rc)",
/* 126 */	"reg: BXORI4(reg,rc)",
/* 127 */	"reg: BXORI8(reg,rc)",
/* 128 */	"reg: BXORU4(reg,rc)",
/* 129 */	"reg: BXORU8(reg,rc)",
/* 130 */	"rc6: CNSTI4",
/* 131 */	"rc6: CNSTI8",
/* 132 */	"rc6: reg",
/* 133 */	"reg: LSHI4(reg,rc6)",
/* 134 */	"reg: LSHI8(reg,rc6)",
/* 135 */	"reg: LSHU4(reg,rc6)",
/* 136 */	"reg: LSHU8(reg,rc6)",
/* 137 */	"reg: RSHI4(reg,rc6)",
/* 138 */	"reg: RSHI8(reg,rc6)",
/* 139 */	"reg: RSHU4(reg,rc6)",
/* 140 */	"reg: RSHU8(reg,rc6)",
/* 141 */	"reg: BCOMI4(reg)",
/* 142 */	"reg: BCOMU4(reg)",
/* 143 */	"reg: BCOMI8(reg)",
/* 144 */	"reg: BCOMU8(reg)",
/* 145 */	"reg: NEGI4(reg)",
/* 146 */	"reg: NEGI8(reg)",
/* 147 */	"reg: LOADI1(reg)",
/* 148 */	"reg: LOADI2(reg)",
/* 149 */	"reg: LOADI4(reg)",
/* 150 */	"reg: LOADI8(reg)",
/* 151 */	"reg: LOADP8(reg)",
/* 152 */	"reg: LOADU1(reg)",
/* 153 */	"reg: LOADU2(reg)",
/* 154 */	"reg: LOADU4(reg)",
/* 155 */	"reg: LOADU8(reg)",
/* 156 */	"reg: ADDF4(reg,reg)",
/* 157 */	"reg: ADDF8(reg,reg)",
/* 158 */	"reg: DIVF4(reg,reg)",
/* 159 */	"reg: DIVF8(reg,reg)",
/* 160 */	"reg: MULF4(reg,reg)",
/* 161 */	"reg: MULF8(reg,reg)",
/* 162 */	"reg: SUBF4(reg,reg)",
/* 163 */	"reg: SUBF8(reg,reg)",
/* 164 */	"reg: LOADF4(reg)",
/* 165 */	"reg: LOADF8(reg)",
/* 166 */	"reg: NEGF4(reg)",
/* 167 */	"reg: NEGF8(reg)",
/* 168 */	"reg: CVII4(reg)",
/* 169 */	"reg: CVII8(reg)",
/* 170 */	"reg: CVUI4(reg)",
/* 171 */	"reg: CVUI8(reg)",
/* 172 */	"reg: CVUU4(reg)",
/* 173 */	"reg: CVUU8(reg)",
/* 174 */	"reg: CVUP8(reg)",
/* 175 */	"reg: CVFF4(reg)",
/* 176 */	"reg: CVFF8(reg)",
/* 177 */	"reg: CVIF4(reg)",
/* 178 */	"reg: CVIF8(reg)",
/* 179 */	"reg: CVIF4(INDIRI4(addr))",
/* 180 */	"reg: CVIF4(INDIRI8(addr))",
/* 181 */	"reg: CVIF8(INDIRI4(addr))",
/* 182 */	"reg: CVIF8(INDIRI8(addr))",
/* 183 */	"reg: CVFI4(reg)",
/* 184 */	"reg: CVFI8(reg)",
/* 185 */	"stmt: LABELV",
/* 186 */	"stmt: JUMPV(acon)",
/* 187 */	"stmt: JUMPV(reg)",
/* 188 */	"stmt: EQI4(reg,rc6)",
/* 189 */	"stmt: EQU4(reg,rc6)",
/* 190 */	"stmt: EQI8(reg,rc6)",
/* 191 */	"stmt: EQU8(reg,rc6)",
/* 192 */	"stmt: NEI4(reg,rc6)",
/* 193 */	"stmt: NEU4(reg,rc6)",
/* 194 */	"stmt: NEI8(reg,rc6)",
/* 195 */	"stmt: NEU8(reg,rc6)",
/* 196 */	"stmt: GEI4(reg,rc6)",
/* 197 */	"stmt: GEI8(reg,rc6)",
/* 198 */	"stmt: GEU4(reg,rc6)",
/* 199 */	"stmt: GEU8(reg,rc6)",
/* 200 */	"stmt: GTI4(reg,rc6)",
/* 201 */	"stmt: GTI8(reg,rc6)",
/* 202 */	"stmt: GTU4(reg,rc6)",
/* 203 */	"stmt: GTU8(reg,rc6)",
/* 204 */	"stmt: LEI4(reg,rc6)",
/* 205 */	"stmt: LEI8(reg,rc6)",
/* 206 */	"stmt: LEU4(reg,rc6)",
/* 207 */	"stmt: LEU8(reg,rc6)",
/* 208 */	"stmt: LTI4(reg,rc6)",
/* 209 */	"stmt: LTI8(reg,rc6)",
/* 210 */	"stmt: LTU4(reg,rc6)",
/* 211 */	"stmt: LTU8(reg,rc6)",
/* 212 */	"stmt: EQF4(reg,reg)",
/* 213 */	"stmt: EQF8(reg,reg)",
/* 214 */	"stmt: LEF4(reg,reg)",
/* 215 */	"stmt: LEF8(reg,reg)",
/* 216 */	"stmt: LTF4(reg,reg)",
/* 217 */	"stmt: LTF8(reg,reg)",
/* 218 */	"stmt: NEF4(reg,reg)",
/* 219 */	"stmt: NEF8(reg,reg)",
/* 220 */	"stmt: GEF4(reg,reg)",
/* 221 */	"stmt: GEF8(reg,reg)",
/* 222 */	"stmt: GTF4(reg,reg)",
/* 223 */	"stmt: GTF8(reg,reg)",
/* 224 */	"ar: ADDRGP8",
/* 225 */	"ar: reg",
/* 226 */	"reg: CALLF4(ar)",
/* 227 */	"reg: CALLF8(ar)",
/* 228 */	"reg: CALLI4(ar)",
/* 229 */	"reg: CALLI8(ar)",
/* 230 */	"reg: CALLP8(ar)",
/* 231 */	"reg: CALLU4(ar)",
/* 232 */	"reg: CALLU8(ar)",
/* 233 */	"stmt: CALLV(ar)",
/* 234 */	"stmt: RETF4(reg)",
/* 235 */	"stmt: RETF8(reg)",
/* 236 */	"stmt: RETI4(reg)",
/* 237 */	"stmt: RETU4(reg)",
/* 238 */	"stmt: RETI8(reg)",
/* 239 */	"stmt: RETU8(reg)",
/* 240 */	"stmt: RETP8(reg)",
/* 241 */	"stmt: RETV(reg)",
/* 242 */	"stmt: ARGF4(reg)",
/* 243 */	"stmt: ARGF8(reg)",
/* 244 */	"stmt: ARGI4(reg)",
/* 245 */	"stmt: ARGI8(reg)",
/* 246 */	"stmt: ARGP8(reg)",
/* 247 */	"stmt: ARGU4(reg)",
/* 248 */	"stmt: ARGU8(reg)",
/* 249 */	"stmt: ARGB(INDIRB(reg))",
/* 250 */	"stmt: ASGNB(reg,INDIRB(reg))",
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
	56,
	57,
	58,
	59,
	60,
	61,
	62,
	63,
	64,
	92,
	93,
	185,
	186,
	187,
	188,
	189,
	190,
	191,
	192,
	193,
	194,
	195,
	196,
	197,
	198,
	199,
	200,
	201,
	202,
	203,
	204,
	205,
	206,
	207,
	208,
	209,
	210,
	211,
	212,
	213,
	214,
	215,
	216,
	217,
	218,
	219,
	220,
	221,
	222,
	223,
	233,
	234,
	235,
	236,
	237,
	238,
	239,
	240,
	241,
	242,
	243,
	244,
	245,
	246,
	247,
	248,
	249,
	250,
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
	46,
	47,
	48,
	49,
	50,
	51,
	52,
	53,
	54,
	55,
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
	75,
	76,
	77,
	78,
	79,
	80,
	81,
	82,
	83,
	84,
	85,
	86,
	87,
	88,
	89,
	90,
	91,
	94,
	95,
	96,
	97,
	98,
	99,
	100,
	101,
	102,
	103,
	104,
	105,
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
	133,
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
	162,
	163,
	164,
	165,
	166,
	167,
	168,
	169,
	170,
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
	184,
	226,
	227,
	228,
	229,
	230,
	231,
	232,
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
	45,
};

static short _decode_rc[] = {
	0,
	106,
	107,
};

static short _decode_rc6[] = {
	0,
	130,
	131,
	132,
};

static short _decode_ar[] = {
	0,
	224,
	225,
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
	case _rc6_NT:	return _decode_rc6[((struct _state *)state)->rule._rc6];
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
	if (c + 0 < p->cost[_rc6_NT]) {
		p->cost[_rc6_NT] = c + 0;
		p->rule._rc6 = 3;
	}
	if (c + 0 < p->cost[_rc_NT]) {
		p->cost[_rc_NT] = c + 0;
		p->rule._rc = 2;
	}
	if (c + 0 < p->cost[_addr_NT]) {
		p->cost[_addr_NT] = c + 0;
		p->rule._addr = 6;
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
		p->rule._addr = 5;
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
				p->rule._stmt = 80;
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
				p->rule._stmt = 81;
			}
		}
		break;
	case 73: /* INDIRB */
		_label(LEFT_CHILD(a));
		break;
	case 216: /* CALLV */
		_label(LEFT_CHILD(a));
		/* stmt: CALLV(ar) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_ar_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 64;
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
			p->rule._stmt = 72;
		}
		break;
	case 584: /* JUMPV */
		_label(LEFT_CHILD(a));
		/* stmt: JUMPV(acon) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_acon_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 26;
		}
		/* stmt: JUMPV(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 27;
		}
		break;
	case 600: /* LABELV */
		/* stmt: LABELV */
		if (0 + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = 0 + 0;
			p->rule._stmt = 25;
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
			p->rule._reg = 18;
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
				if (q->cost[_rc6_NT] == 0) {
					p->cost[_rc6_NT] = 0;
					p->rule._rc6 = q->rule._rc6;
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
		/* reg: INDIRI1(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 23;
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
				if (q->cost[_rc6_NT] == 0) {
					p->cost[_rc6_NT] = 0;
					p->rule._rc6 = q->rule._rc6;
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
		/* reg: INDIRU1(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 28;
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
			p->rule._reg = 98;
			_closure_reg(a, c + 0);
		}
		break;
	case 1254: /* LOADU1 */
		_label(LEFT_CHILD(a));
		/* reg: LOADU1(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + (move(a));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 103;
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
			p->rule._reg = 19;
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
				if (q->cost[_rc6_NT] == 0) {
					p->cost[_rc6_NT] = 0;
					p->rule._rc6 = q->rule._rc6;
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
		/* reg: INDIRI2(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 24;
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
				if (q->cost[_rc6_NT] == 0) {
					p->cost[_rc6_NT] = 0;
					p->rule._rc6 = q->rule._rc6;
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
		/* reg: INDIRU2(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 29;
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
			p->rule._reg = 99;
			_closure_reg(a, c + 0);
		}
		break;
	case 2278: /* LOADU2 */
		_label(LEFT_CHILD(a));
		/* reg: LOADU2(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + (move(a));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 104;
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
		/* rc6: CNSTI4 */
		c = (range(a,0,63));
		if (c + 0 < p->cost[_rc6_NT]) {
			p->cost[_rc6_NT] = c + 0;
			p->rule._rc6 = 1;
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
			p->rule._reg = 20;
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
		break;
	case 4129: /* ARGF4 */
		_label(LEFT_CHILD(a));
		/* stmt: ARGF4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 73;
		}
		break;
	case 4133: /* ARGI4 */
		_label(LEFT_CHILD(a));
		/* stmt: ARGI4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 75;
		}
		break;
	case 4134: /* ARGU4 */
		_label(LEFT_CHILD(a));
		/* stmt: ARGU4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 78;
		}
		break;
	case 4135: /* ARGP4 */
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
			p->rule._stmt = 23;
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
				if (q->cost[_rc6_NT] == 0) {
					p->cost[_rc6_NT] = 0;
					p->rule._rc6 = q->rule._rc6;
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
			p->rule._reg = 48;
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
				if (q->cost[_rc6_NT] == 0) {
					p->cost[_rc6_NT] = 0;
					p->rule._rc6 = q->rule._rc6;
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
				if (q->cost[_rc6_NT] == 0) {
					p->cost[_rc6_NT] = 0;
					p->rule._rc6 = q->rule._rc6;
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
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 30;
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
				if (q->cost[_rc6_NT] == 0) {
					p->cost[_rc6_NT] = 0;
					p->rule._rc6 = q->rule._rc6;
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
		break;
	case 4209: /* CVFF4 */
		_label(LEFT_CHILD(a));
		/* reg: CVFF4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 126;
			_closure_reg(a, c + 0);
		}
		break;
	case 4213: /* CVFI4 */
		_label(LEFT_CHILD(a));
		/* reg: CVFI4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 4;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 134;
			_closure_reg(a, c + 0);
		}
		break;
	case 4225: /* CVIF4 */
		_label(LEFT_CHILD(a));
		/* reg: CVIF4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 3;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 128;
			_closure_reg(a, c + 0);
		}
		if (	/* reg: CVIF4(INDIRI4(addr)) */
			LEFT_CHILD(a)->op == 4165 /* INDIRI4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_addr_NT] + 3;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 130;
				_closure_reg(a, c + 0);
			}
		}
		if (	/* reg: CVIF4(INDIRI8(addr)) */
			LEFT_CHILD(a)->op == 8261 /* INDIRI8 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_addr_NT] + 2;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 131;
				_closure_reg(a, c + 0);
			}
		}
		break;
	case 4229: /* CVII4 */
		_label(LEFT_CHILD(a));
		if (	/* reg: CVII4(INDIRI1(reg)) */
			LEFT_CHILD(a)->op == 1093 /* INDIRI1 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_reg_NT] + 1;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 32;
				_closure_reg(a, c + 0);
			}
		}
		if (	/* reg: CVII4(INDIRI2(reg)) */
			LEFT_CHILD(a)->op == 2117 /* INDIRI2 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_reg_NT] + 1;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 34;
				_closure_reg(a, c + 0);
			}
		}
		/* reg: CVII4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 119;
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
		if (	/* reg: CVUI4(INDIRU1(reg)) */
			LEFT_CHILD(a)->op == 1094 /* INDIRU1 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_reg_NT] + 1;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 42;
				_closure_reg(a, c + 0);
			}
		}
		if (	/* reg: CVUI4(INDIRU2(reg)) */
			LEFT_CHILD(a)->op == 2118 /* INDIRU2 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_reg_NT] + 1;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 44;
				_closure_reg(a, c + 0);
			}
		}
		/* reg: CVUI4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 121;
			_closure_reg(a, c + 0);
		}
		break;
	case 4278: /* CVUU4 */
		_label(LEFT_CHILD(a));
		if (	/* reg: CVUU4(INDIRU1(reg)) */
			LEFT_CHILD(a)->op == 1094 /* INDIRU1 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_reg_NT] + 1;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 37;
				_closure_reg(a, c + 0);
			}
		}
		if (	/* reg: CVUU4(INDIRU2(reg)) */
			LEFT_CHILD(a)->op == 2118 /* INDIRU2 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_reg_NT] + 1;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 39;
				_closure_reg(a, c + 0);
			}
		}
		/* reg: CVUU4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 123;
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
			p->rule._reg = 117;
			_closure_reg(a, c + 0);
		}
		break;
	case 4293: /* NEGI4 */
		_label(LEFT_CHILD(a));
		/* reg: NEGI4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 96;
			_closure_reg(a, c + 0);
		}
		break;
	case 4305: /* CALLF4 */
		_label(LEFT_CHILD(a));
		/* reg: CALLF4(ar) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_ar_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 136;
			_closure_reg(a, c + 0);
		}
		break;
	case 4309: /* CALLI4 */
		_label(LEFT_CHILD(a));
		/* reg: CALLI4(ar) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_ar_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 138;
			_closure_reg(a, c + 0);
		}
		break;
	case 4310: /* CALLU4 */
		_label(LEFT_CHILD(a));
		/* reg: CALLU4(ar) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_ar_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 141;
			_closure_reg(a, c + 0);
		}
		break;
	case 4311: /* CALLP4 */
		break;
	case 4321: /* LOADF4 */
		_label(LEFT_CHILD(a));
		/* reg: LOADF4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + (move(a));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 115;
			_closure_reg(a, c + 0);
		}
		break;
	case 4325: /* LOADI4 */
		_label(LEFT_CHILD(a));
		/* reg: LOADI4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + (move(a));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 100;
			_closure_reg(a, c + 0);
		}
		break;
	case 4326: /* LOADU4 */
		_label(LEFT_CHILD(a));
		/* reg: LOADU4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + (move(a));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 105;
			_closure_reg(a, c + 0);
		}
		break;
	case 4327: /* LOADP4 */
		break;
	case 4337: /* RETF4 */
		_label(LEFT_CHILD(a));
		/* stmt: RETF4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 65;
		}
		break;
	case 4341: /* RETI4 */
		_label(LEFT_CHILD(a));
		/* stmt: RETI4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 67;
		}
		break;
	case 4342: /* RETU4 */
		_label(LEFT_CHILD(a));
		/* stmt: RETU4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 68;
		}
		break;
	case 4343: /* RETP4 */
		break;
	case 4359: /* ADDRGP4 */
		break;
	case 4375: /* ADDRFP4 */
		break;
	case 4391: /* ADDRLP4 */
		break;
	case 4401: /* ADDF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: ADDF4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 107;
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
			p->rule._reg = 62;
			_closure_reg(a, c + 0);
		}
		break;
	case 4406: /* ADDU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: ADDU4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 65;
			_closure_reg(a, c + 0);
		}
		break;
	case 4407: /* ADDP4 */
		break;
	case 4417: /* SUBF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: SUBF4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 113;
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
			p->rule._reg = 67;
			_closure_reg(a, c + 0);
		}
		break;
	case 4422: /* SUBU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: SUBU4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 70;
			_closure_reg(a, c + 0);
		}
		break;
	case 4423: /* SUBP4 */
		break;
	case 4437: /* LSHI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: LSHI4(reg,rc6) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc6_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 84;
			_closure_reg(a, c + 0);
		}
		break;
	case 4438: /* LSHU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: LSHU4(reg,rc6) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc6_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 86;
			_closure_reg(a, c + 0);
		}
		break;
	case 4453: /* MODI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: MODI4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 58;
			_closure_reg(a, c + 0);
		}
		break;
	case 4454: /* MODU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: MODU4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 60;
			_closure_reg(a, c + 0);
		}
		break;
	case 4469: /* RSHI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: RSHI4(reg,rc6) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc6_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 88;
			_closure_reg(a, c + 0);
		}
		break;
	case 4470: /* RSHU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: RSHU4(reg,rc6) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc6_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 90;
			_closure_reg(a, c + 0);
		}
		break;
	case 4485: /* BANDI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: BANDI4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 72;
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
			p->rule._reg = 74;
			_closure_reg(a, c + 0);
		}
		break;
	case 4501: /* BCOMI4 */
		_label(LEFT_CHILD(a));
		/* reg: BCOMI4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 92;
			_closure_reg(a, c + 0);
		}
		break;
	case 4502: /* BCOMU4 */
		_label(LEFT_CHILD(a));
		/* reg: BCOMU4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 93;
			_closure_reg(a, c + 0);
		}
		break;
	case 4517: /* BORI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: BORI4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 76;
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
			p->rule._reg = 78;
			_closure_reg(a, c + 0);
		}
		break;
	case 4533: /* BXORI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: BXORI4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 80;
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
			p->rule._reg = 82;
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
			p->rule._reg = 109;
			_closure_reg(a, c + 0);
		}
		break;
	case 4549: /* DIVI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: DIVI4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 54;
			_closure_reg(a, c + 0);
		}
		break;
	case 4550: /* DIVU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: DIVU4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 56;
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
			p->rule._reg = 111;
			_closure_reg(a, c + 0);
		}
		break;
	case 4565: /* MULI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: MULI4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 50;
			_closure_reg(a, c + 0);
		}
		break;
	case 4566: /* MULU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: MULU4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 52;
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
			p->rule._stmt = 52;
		}
		break;
	case 4581: /* EQI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: EQI4(reg,rc6) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc6_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 28;
		}
		break;
	case 4582: /* EQU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: EQU4(reg,rc6) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc6_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 29;
		}
		break;
	case 4593: /* GEF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GEF4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 60;
		}
		break;
	case 4597: /* GEI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GEI4(reg,rc6) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc6_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 36;
		}
		break;
	case 4598: /* GEU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GEU4(reg,rc6) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc6_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 38;
		}
		break;
	case 4609: /* GTF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GTF4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 62;
		}
		break;
	case 4613: /* GTI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GTI4(reg,rc6) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc6_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 40;
		}
		break;
	case 4614: /* GTU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GTU4(reg,rc6) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc6_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 42;
		}
		break;
	case 4625: /* LEF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LEF4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 54;
		}
		break;
	case 4629: /* LEI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LEI4(reg,rc6) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc6_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 44;
		}
		break;
	case 4630: /* LEU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LEU4(reg,rc6) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc6_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 46;
		}
		break;
	case 4641: /* LTF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LTF4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 56;
		}
		break;
	case 4645: /* LTI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LTI4(reg,rc6) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc6_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 48;
		}
		break;
	case 4646: /* LTU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LTU4(reg,rc6) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc6_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 50;
		}
		break;
	case 4657: /* NEF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: NEF4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 58;
		}
		break;
	case 4661: /* NEI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: NEI4(reg,rc6) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc6_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 32;
		}
		break;
	case 4662: /* NEU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: NEU4(reg,rc6) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc6_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 33;
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
		/* reg: CNSTI8 */
		c = (range(a, 0, 0));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 17;
			_closure_reg(a, c + 0);
		}
		/* rc6: CNSTI8 */
		c = (range(a,0,63));
		if (c + 0 < p->cost[_rc6_NT]) {
			p->cost[_rc6_NT] = c + 0;
			p->rule._rc6 = 2;
		}
		break;
	case 8214: /* CNSTU8 */
		/* con: CNSTU8 */
		if (0 + 0 < p->cost[_con_NT]) {
			p->cost[_con_NT] = 0 + 0;
			p->rule._con = 9;
			_closure_con(a, 0 + 0);
		}
		/* reg: CNSTU8 */
		c = (range(a, 0, 0));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 21;
			_closure_reg(a, c + 0);
		}
		break;
	case 8215: /* CNSTP8 */
		/* con: CNSTP8 */
		if (0 + 0 < p->cost[_con_NT]) {
			p->cost[_con_NT] = 0 + 0;
			p->rule._con = 10;
			_closure_con(a, 0 + 0);
		}
		/* reg: CNSTP8 */
		c = (range(a, 0, 0));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 22;
			_closure_reg(a, c + 0);
		}
		break;
	case 8225: /* ARGF8 */
		_label(LEFT_CHILD(a));
		/* stmt: ARGF8(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 74;
		}
		break;
	case 8229: /* ARGI8 */
		_label(LEFT_CHILD(a));
		/* stmt: ARGI8(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 76;
		}
		break;
	case 8230: /* ARGU8 */
		_label(LEFT_CHILD(a));
		/* stmt: ARGU8(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 79;
		}
		break;
	case 8231: /* ARGP8 */
		_label(LEFT_CHILD(a));
		/* stmt: ARGP8(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 77;
		}
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
			p->rule._stmt = 24;
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
		/* stmt: ASGNI8(addr,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 20;
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
		/* stmt: ASGNU8(addr,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 21;
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
		/* stmt: ASGNP8(addr,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 22;
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
				if (q->cost[_rc6_NT] == 0) {
					p->cost[_rc6_NT] = 0;
					p->rule._rc6 = q->rule._rc6;
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
			p->rule._reg = 49;
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
				if (q->cost[_rc6_NT] == 0) {
					p->cost[_rc6_NT] = 0;
					p->rule._rc6 = q->rule._rc6;
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
		/* reg: INDIRI8(addr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 26;
			_closure_reg(a, c + 0);
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
				if (q->cost[_rc6_NT] == 0) {
					p->cost[_rc6_NT] = 0;
					p->rule._rc6 = q->rule._rc6;
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
		/* reg: INDIRU8(addr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 31;
			_closure_reg(a, c + 0);
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
				if (q->cost[_rc6_NT] == 0) {
					p->cost[_rc6_NT] = 0;
					p->rule._rc6 = q->rule._rc6;
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
		/* reg: INDIRP8(addr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 27;
			_closure_reg(a, c + 0);
		}
		break;
	case 8305: /* CVFF8 */
		_label(LEFT_CHILD(a));
		/* reg: CVFF8(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 127;
			_closure_reg(a, c + 0);
		}
		break;
	case 8309: /* CVFI8 */
		_label(LEFT_CHILD(a));
		/* reg: CVFI8(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 3;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 135;
			_closure_reg(a, c + 0);
		}
		break;
	case 8321: /* CVIF8 */
		_label(LEFT_CHILD(a));
		/* reg: CVIF8(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 3;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 129;
			_closure_reg(a, c + 0);
		}
		if (	/* reg: CVIF8(INDIRI4(addr)) */
			LEFT_CHILD(a)->op == 4165 /* INDIRI4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_addr_NT] + 3;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 132;
				_closure_reg(a, c + 0);
			}
		}
		if (	/* reg: CVIF8(INDIRI8(addr)) */
			LEFT_CHILD(a)->op == 8261 /* INDIRI8 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_addr_NT] + 2;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 133;
				_closure_reg(a, c + 0);
			}
		}
		break;
	case 8325: /* CVII8 */
		_label(LEFT_CHILD(a));
		if (	/* reg: CVII8(INDIRI1(reg)) */
			LEFT_CHILD(a)->op == 1093 /* INDIRI1 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_reg_NT] + 1;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 33;
				_closure_reg(a, c + 0);
			}
		}
		if (	/* reg: CVII8(INDIRI2(reg)) */
			LEFT_CHILD(a)->op == 2117 /* INDIRI2 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_reg_NT] + 1;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 35;
				_closure_reg(a, c + 0);
			}
		}
		if (	/* reg: CVII8(INDIRI4(addr)) */
			LEFT_CHILD(a)->op == 4165 /* INDIRI4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_addr_NT] + 1;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 36;
				_closure_reg(a, c + 0);
			}
		}
		/* reg: CVII8(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 120;
			_closure_reg(a, c + 0);
		}
		break;
	case 8326: /* CVIU8 */
		_label(LEFT_CHILD(a));
		/* reg: CVIU8(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + (move(a));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 47;
			_closure_reg(a, c + 0);
		}
		break;
	case 8342: /* CVPU8 */
		break;
	case 8343: /* CVPP8 */
		break;
	case 8373: /* CVUI8 */
		_label(LEFT_CHILD(a));
		if (	/* reg: CVUI8(INDIRU1(reg)) */
			LEFT_CHILD(a)->op == 1094 /* INDIRU1 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_reg_NT] + 1;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 43;
				_closure_reg(a, c + 0);
			}
		}
		if (	/* reg: CVUI8(INDIRU2(reg)) */
			LEFT_CHILD(a)->op == 2118 /* INDIRU2 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_reg_NT] + 1;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 45;
				_closure_reg(a, c + 0);
			}
		}
		if (	/* reg: CVUI8(INDIRU4(addr)) */
			LEFT_CHILD(a)->op == 4166 /* INDIRU4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_addr_NT] + 2;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 46;
				_closure_reg(a, c + 0);
			}
		}
		/* reg: CVUI8(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 122;
			_closure_reg(a, c + 0);
		}
		break;
	case 8374: /* CVUU8 */
		_label(LEFT_CHILD(a));
		if (	/* reg: CVUU8(INDIRU1(reg)) */
			LEFT_CHILD(a)->op == 1094 /* INDIRU1 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_reg_NT] + 1;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 38;
				_closure_reg(a, c + 0);
			}
		}
		if (	/* reg: CVUU8(INDIRU2(reg)) */
			LEFT_CHILD(a)->op == 2118 /* INDIRU2 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_reg_NT] + 1;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 40;
				_closure_reg(a, c + 0);
			}
		}
		if (	/* reg: CVUU8(INDIRU4(addr)) */
			LEFT_CHILD(a)->op == 4166 /* INDIRU4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_addr_NT] + 2;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 41;
				_closure_reg(a, c + 0);
			}
		}
		/* reg: CVUU8(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 124;
			_closure_reg(a, c + 0);
		}
		break;
	case 8375: /* CVUP8 */
		_label(LEFT_CHILD(a));
		/* reg: CVUP8(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 125;
			_closure_reg(a, c + 0);
		}
		break;
	case 8385: /* NEGF8 */
		_label(LEFT_CHILD(a));
		/* reg: NEGF8(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 118;
			_closure_reg(a, c + 0);
		}
		break;
	case 8389: /* NEGI8 */
		_label(LEFT_CHILD(a));
		/* reg: NEGI8(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 97;
			_closure_reg(a, c + 0);
		}
		break;
	case 8401: /* CALLF8 */
		_label(LEFT_CHILD(a));
		/* reg: CALLF8(ar) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_ar_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 137;
			_closure_reg(a, c + 0);
		}
		break;
	case 8405: /* CALLI8 */
		_label(LEFT_CHILD(a));
		/* reg: CALLI8(ar) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_ar_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 139;
			_closure_reg(a, c + 0);
		}
		break;
	case 8406: /* CALLU8 */
		_label(LEFT_CHILD(a));
		/* reg: CALLU8(ar) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_ar_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 142;
			_closure_reg(a, c + 0);
		}
		break;
	case 8407: /* CALLP8 */
		_label(LEFT_CHILD(a));
		/* reg: CALLP8(ar) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_ar_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 140;
			_closure_reg(a, c + 0);
		}
		break;
	case 8417: /* LOADF8 */
		_label(LEFT_CHILD(a));
		/* reg: LOADF8(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + (move(a));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 116;
			_closure_reg(a, c + 0);
		}
		break;
	case 8421: /* LOADI8 */
		_label(LEFT_CHILD(a));
		/* reg: LOADI8(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + (move(a));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 101;
			_closure_reg(a, c + 0);
		}
		break;
	case 8422: /* LOADU8 */
		_label(LEFT_CHILD(a));
		/* reg: LOADU8(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + (move(a));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 106;
			_closure_reg(a, c + 0);
		}
		break;
	case 8423: /* LOADP8 */
		_label(LEFT_CHILD(a));
		/* reg: LOADP8(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + (move(a));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 102;
			_closure_reg(a, c + 0);
		}
		break;
	case 8433: /* RETF8 */
		_label(LEFT_CHILD(a));
		/* stmt: RETF8(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 66;
		}
		break;
	case 8437: /* RETI8 */
		_label(LEFT_CHILD(a));
		/* stmt: RETI8(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 69;
		}
		break;
	case 8438: /* RETU8 */
		_label(LEFT_CHILD(a));
		/* stmt: RETU8(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 70;
		}
		break;
	case 8439: /* RETP8 */
		_label(LEFT_CHILD(a));
		/* stmt: RETP8(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 71;
		}
		break;
	case 8455: /* ADDRGP8 */
		/* acon: ADDRGP8 */
		if (0 + 0 < p->cost[_acon_NT]) {
			p->cost[_acon_NT] = 0 + 0;
			p->rule._acon = 2;
			_closure_acon(a, 0 + 0);
		}
		/* ar: ADDRGP8 */
		if (0 + 0 < p->cost[_ar_NT]) {
			p->cost[_ar_NT] = 0 + 0;
			p->rule._ar = 1;
		}
		break;
	case 8471: /* ADDRFP8 */
		/* addr: ADDRFP8 */
		if (0 + 0 < p->cost[_addr_NT]) {
			p->cost[_addr_NT] = 0 + 0;
			p->rule._addr = 7;
			_closure_addr(a, 0 + 0);
		}
		break;
	case 8487: /* ADDRLP8 */
		/* addr: ADDRLP8 */
		if (0 + 0 < p->cost[_addr_NT]) {
			p->cost[_addr_NT] = 0 + 0;
			p->rule._addr = 8;
			_closure_addr(a, 0 + 0);
		}
		break;
	case 8497: /* ADDF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: ADDF8(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 108;
			_closure_reg(a, c + 0);
		}
		break;
	case 8501: /* ADDI8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* addr: ADDI8(reg,acon) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_acon_NT] + 0;
		if (c + 0 < p->cost[_addr_NT]) {
			p->cost[_addr_NT] = c + 0;
			p->rule._addr = 2;
			_closure_addr(a, c + 0);
		}
		/* reg: ADDI8(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 63;
			_closure_reg(a, c + 0);
		}
		break;
	case 8502: /* ADDU8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* addr: ADDU8(reg,acon) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_acon_NT] + 0;
		if (c + 0 < p->cost[_addr_NT]) {
			p->cost[_addr_NT] = c + 0;
			p->rule._addr = 3;
			_closure_addr(a, c + 0);
		}
		/* reg: ADDU8(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 66;
			_closure_reg(a, c + 0);
		}
		break;
	case 8503: /* ADDP8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* addr: ADDP8(reg,acon) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_acon_NT] + 0;
		if (c + 0 < p->cost[_addr_NT]) {
			p->cost[_addr_NT] = c + 0;
			p->rule._addr = 4;
			_closure_addr(a, c + 0);
		}
		/* reg: ADDP8(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 64;
			_closure_reg(a, c + 0);
		}
		break;
	case 8513: /* SUBF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: SUBF8(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 114;
			_closure_reg(a, c + 0);
		}
		break;
	case 8517: /* SUBI8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: SUBI8(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 68;
			_closure_reg(a, c + 0);
		}
		break;
	case 8518: /* SUBU8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: SUBU8(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 71;
			_closure_reg(a, c + 0);
		}
		break;
	case 8519: /* SUBP8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: SUBP8(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 69;
			_closure_reg(a, c + 0);
		}
		break;
	case 8533: /* LSHI8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: LSHI8(reg,rc6) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc6_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 85;
			_closure_reg(a, c + 0);
		}
		break;
	case 8534: /* LSHU8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: LSHU8(reg,rc6) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc6_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 87;
			_closure_reg(a, c + 0);
		}
		break;
	case 8549: /* MODI8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: MODI8(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 59;
			_closure_reg(a, c + 0);
		}
		break;
	case 8550: /* MODU8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: MODU8(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 61;
			_closure_reg(a, c + 0);
		}
		break;
	case 8565: /* RSHI8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: RSHI8(reg,rc6) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc6_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 89;
			_closure_reg(a, c + 0);
		}
		break;
	case 8566: /* RSHU8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: RSHU8(reg,rc6) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc6_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 91;
			_closure_reg(a, c + 0);
		}
		break;
	case 8581: /* BANDI8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: BANDI8(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 73;
			_closure_reg(a, c + 0);
		}
		break;
	case 8582: /* BANDU8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: BANDU8(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 75;
			_closure_reg(a, c + 0);
		}
		break;
	case 8597: /* BCOMI8 */
		_label(LEFT_CHILD(a));
		/* reg: BCOMI8(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 94;
			_closure_reg(a, c + 0);
		}
		break;
	case 8598: /* BCOMU8 */
		_label(LEFT_CHILD(a));
		/* reg: BCOMU8(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 95;
			_closure_reg(a, c + 0);
		}
		break;
	case 8613: /* BORI8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: BORI8(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 77;
			_closure_reg(a, c + 0);
		}
		break;
	case 8614: /* BORU8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: BORU8(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 79;
			_closure_reg(a, c + 0);
		}
		break;
	case 8629: /* BXORI8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: BXORI8(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 81;
			_closure_reg(a, c + 0);
		}
		break;
	case 8630: /* BXORU8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: BXORU8(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 83;
			_closure_reg(a, c + 0);
		}
		break;
	case 8641: /* DIVF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: DIVF8(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 110;
			_closure_reg(a, c + 0);
		}
		break;
	case 8645: /* DIVI8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: DIVI8(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 55;
			_closure_reg(a, c + 0);
		}
		break;
	case 8646: /* DIVU8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: DIVU8(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 57;
			_closure_reg(a, c + 0);
		}
		break;
	case 8657: /* MULF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: MULF8(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 112;
			_closure_reg(a, c + 0);
		}
		break;
	case 8661: /* MULI8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: MULI8(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 51;
			_closure_reg(a, c + 0);
		}
		break;
	case 8662: /* MULU8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: MULU8(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 53;
			_closure_reg(a, c + 0);
		}
		break;
	case 8673: /* EQF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: EQF8(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 53;
		}
		break;
	case 8677: /* EQI8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: EQI8(reg,rc6) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc6_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 30;
		}
		break;
	case 8678: /* EQU8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: EQU8(reg,rc6) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc6_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 31;
		}
		break;
	case 8689: /* GEF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GEF8(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 61;
		}
		break;
	case 8693: /* GEI8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GEI8(reg,rc6) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc6_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 37;
		}
		break;
	case 8694: /* GEU8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GEU8(reg,rc6) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc6_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 39;
		}
		break;
	case 8705: /* GTF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GTF8(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 63;
		}
		break;
	case 8709: /* GTI8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GTI8(reg,rc6) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc6_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 41;
		}
		break;
	case 8710: /* GTU8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GTU8(reg,rc6) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc6_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 43;
		}
		break;
	case 8721: /* LEF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LEF8(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 55;
		}
		break;
	case 8725: /* LEI8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LEI8(reg,rc6) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc6_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 45;
		}
		break;
	case 8726: /* LEU8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LEU8(reg,rc6) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc6_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 47;
		}
		break;
	case 8737: /* LTF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LTF8(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 57;
		}
		break;
	case 8741: /* LTI8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LTI8(reg,rc6) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc6_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 49;
		}
		break;
	case 8742: /* LTU8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LTU8(reg,rc6) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc6_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 51;
		}
		break;
	case 8753: /* NEF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: NEF8(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 59;
		}
		break;
	case 8757: /* NEI8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: NEI8(reg,rc6) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc6_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 34;
		}
		break;
	case 8758: /* NEU8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: NEU8(reg,rc6) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc6_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 35;
		}
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
	case 224: /* ar: ADDRGP8 */
	case 185: /* stmt: LABELV */
	case 131: /* rc6: CNSTI8 */
	case 130: /* rc6: CNSTI4 */
	case 55: /* reg: CNSTP8 */
	case 54: /* reg: CNSTU8 */
	case 53: /* reg: CNSTU4 */
	case 52: /* reg: CNSTU2 */
	case 51: /* reg: CNSTU1 */
	case 50: /* reg: CNSTI8 */
	case 49: /* reg: CNSTI4 */
	case 48: /* reg: CNSTI2 */
	case 47: /* reg: CNSTI1 */
	case 45: /* addr: ADDRLP8 */
	case 44: /* addr: ADDRFP8 */
	case 37: /* acon: ADDRGP8 */
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
	case 225: /* ar: reg */
	case 132: /* rc6: reg */
	case 107: /* rc: reg */
	case 106: /* rc: con */
	case 46: /* reg: addr */
	case 43: /* addr: reg */
	case 42: /* addr: acon */
	case 36: /* acon: con */
	case 35: /* stmt: reg */
		kids[0] = p;
		break;
	case 223: /* stmt: GTF8(reg,reg) */
	case 222: /* stmt: GTF4(reg,reg) */
	case 221: /* stmt: GEF8(reg,reg) */
	case 220: /* stmt: GEF4(reg,reg) */
	case 219: /* stmt: NEF8(reg,reg) */
	case 218: /* stmt: NEF4(reg,reg) */
	case 217: /* stmt: LTF8(reg,reg) */
	case 216: /* stmt: LTF4(reg,reg) */
	case 215: /* stmt: LEF8(reg,reg) */
	case 214: /* stmt: LEF4(reg,reg) */
	case 213: /* stmt: EQF8(reg,reg) */
	case 212: /* stmt: EQF4(reg,reg) */
	case 211: /* stmt: LTU8(reg,rc6) */
	case 210: /* stmt: LTU4(reg,rc6) */
	case 209: /* stmt: LTI8(reg,rc6) */
	case 208: /* stmt: LTI4(reg,rc6) */
	case 207: /* stmt: LEU8(reg,rc6) */
	case 206: /* stmt: LEU4(reg,rc6) */
	case 205: /* stmt: LEI8(reg,rc6) */
	case 204: /* stmt: LEI4(reg,rc6) */
	case 203: /* stmt: GTU8(reg,rc6) */
	case 202: /* stmt: GTU4(reg,rc6) */
	case 201: /* stmt: GTI8(reg,rc6) */
	case 200: /* stmt: GTI4(reg,rc6) */
	case 199: /* stmt: GEU8(reg,rc6) */
	case 198: /* stmt: GEU4(reg,rc6) */
	case 197: /* stmt: GEI8(reg,rc6) */
	case 196: /* stmt: GEI4(reg,rc6) */
	case 195: /* stmt: NEU8(reg,rc6) */
	case 194: /* stmt: NEI8(reg,rc6) */
	case 193: /* stmt: NEU4(reg,rc6) */
	case 192: /* stmt: NEI4(reg,rc6) */
	case 191: /* stmt: EQU8(reg,rc6) */
	case 190: /* stmt: EQI8(reg,rc6) */
	case 189: /* stmt: EQU4(reg,rc6) */
	case 188: /* stmt: EQI4(reg,rc6) */
	case 163: /* reg: SUBF8(reg,reg) */
	case 162: /* reg: SUBF4(reg,reg) */
	case 161: /* reg: MULF8(reg,reg) */
	case 160: /* reg: MULF4(reg,reg) */
	case 159: /* reg: DIVF8(reg,reg) */
	case 158: /* reg: DIVF4(reg,reg) */
	case 157: /* reg: ADDF8(reg,reg) */
	case 156: /* reg: ADDF4(reg,reg) */
	case 140: /* reg: RSHU8(reg,rc6) */
	case 139: /* reg: RSHU4(reg,rc6) */
	case 138: /* reg: RSHI8(reg,rc6) */
	case 137: /* reg: RSHI4(reg,rc6) */
	case 136: /* reg: LSHU8(reg,rc6) */
	case 135: /* reg: LSHU4(reg,rc6) */
	case 134: /* reg: LSHI8(reg,rc6) */
	case 133: /* reg: LSHI4(reg,rc6) */
	case 129: /* reg: BXORU8(reg,rc) */
	case 128: /* reg: BXORU4(reg,rc) */
	case 127: /* reg: BXORI8(reg,rc) */
	case 126: /* reg: BXORI4(reg,rc) */
	case 125: /* reg: BORU8(reg,rc) */
	case 124: /* reg: BORU4(reg,rc) */
	case 123: /* reg: BORI8(reg,rc) */
	case 122: /* reg: BORI4(reg,rc) */
	case 121: /* reg: BANDU8(reg,rc) */
	case 120: /* reg: BANDU4(reg,rc) */
	case 119: /* reg: BANDI8(reg,rc) */
	case 118: /* reg: BANDI4(reg,rc) */
	case 117: /* reg: SUBU8(reg,rc) */
	case 116: /* reg: SUBU4(reg,rc) */
	case 115: /* reg: SUBP8(reg,rc) */
	case 114: /* reg: SUBI8(reg,rc) */
	case 113: /* reg: SUBI4(reg,rc) */
	case 112: /* reg: ADDU8(reg,rc) */
	case 111: /* reg: ADDU4(reg,rc) */
	case 110: /* reg: ADDP8(reg,rc) */
	case 109: /* reg: ADDI8(reg,rc) */
	case 108: /* reg: ADDI4(reg,rc) */
	case 105: /* reg: MODU8(reg,rc) */
	case 104: /* reg: MODU4(reg,rc) */
	case 103: /* reg: MODI8(reg,rc) */
	case 102: /* reg: MODI4(reg,rc) */
	case 101: /* reg: DIVU8(reg,rc) */
	case 100: /* reg: DIVU4(reg,rc) */
	case 99: /* reg: DIVI8(reg,rc) */
	case 98: /* reg: DIVI4(reg,rc) */
	case 97: /* reg: MULU8(reg,rc) */
	case 96: /* reg: MULU4(reg,rc) */
	case 95: /* reg: MULI8(reg,rc) */
	case 94: /* reg: MULI4(reg,rc) */
	case 93: /* stmt: ASGNF8(addr,reg) */
	case 92: /* stmt: ASGNF4(addr,reg) */
	case 64: /* stmt: ASGNP8(addr,reg) */
	case 63: /* stmt: ASGNU8(addr,reg) */
	case 62: /* stmt: ASGNI8(addr,reg) */
	case 61: /* stmt: ASGNU4(addr,reg) */
	case 60: /* stmt: ASGNI4(addr,reg) */
	case 59: /* stmt: ASGNU2(addr,reg) */
	case 58: /* stmt: ASGNI2(addr,reg) */
	case 57: /* stmt: ASGNU1(addr,reg) */
	case 56: /* stmt: ASGNI1(addr,reg) */
	case 41: /* addr: ADDP8(reg,acon) */
	case 40: /* addr: ADDU8(reg,acon) */
	case 39: /* addr: ADDI8(reg,acon) */
	case 38: /* addr: ADDI4(reg,acon) */
		kids[0] = LEFT_CHILD(p);
		kids[1] = RIGHT_CHILD(p);
		break;
	case 248: /* stmt: ARGU8(reg) */
	case 247: /* stmt: ARGU4(reg) */
	case 246: /* stmt: ARGP8(reg) */
	case 245: /* stmt: ARGI8(reg) */
	case 244: /* stmt: ARGI4(reg) */
	case 243: /* stmt: ARGF8(reg) */
	case 242: /* stmt: ARGF4(reg) */
	case 241: /* stmt: RETV(reg) */
	case 240: /* stmt: RETP8(reg) */
	case 239: /* stmt: RETU8(reg) */
	case 238: /* stmt: RETI8(reg) */
	case 237: /* stmt: RETU4(reg) */
	case 236: /* stmt: RETI4(reg) */
	case 235: /* stmt: RETF8(reg) */
	case 234: /* stmt: RETF4(reg) */
	case 233: /* stmt: CALLV(ar) */
	case 232: /* reg: CALLU8(ar) */
	case 231: /* reg: CALLU4(ar) */
	case 230: /* reg: CALLP8(ar) */
	case 229: /* reg: CALLI8(ar) */
	case 228: /* reg: CALLI4(ar) */
	case 227: /* reg: CALLF8(ar) */
	case 226: /* reg: CALLF4(ar) */
	case 187: /* stmt: JUMPV(reg) */
	case 186: /* stmt: JUMPV(acon) */
	case 184: /* reg: CVFI8(reg) */
	case 183: /* reg: CVFI4(reg) */
	case 178: /* reg: CVIF8(reg) */
	case 177: /* reg: CVIF4(reg) */
	case 176: /* reg: CVFF8(reg) */
	case 175: /* reg: CVFF4(reg) */
	case 174: /* reg: CVUP8(reg) */
	case 173: /* reg: CVUU8(reg) */
	case 172: /* reg: CVUU4(reg) */
	case 171: /* reg: CVUI8(reg) */
	case 170: /* reg: CVUI4(reg) */
	case 169: /* reg: CVII8(reg) */
	case 168: /* reg: CVII4(reg) */
	case 167: /* reg: NEGF8(reg) */
	case 166: /* reg: NEGF4(reg) */
	case 165: /* reg: LOADF8(reg) */
	case 164: /* reg: LOADF4(reg) */
	case 155: /* reg: LOADU8(reg) */
	case 154: /* reg: LOADU4(reg) */
	case 153: /* reg: LOADU2(reg) */
	case 152: /* reg: LOADU1(reg) */
	case 151: /* reg: LOADP8(reg) */
	case 150: /* reg: LOADI8(reg) */
	case 149: /* reg: LOADI4(reg) */
	case 148: /* reg: LOADI2(reg) */
	case 147: /* reg: LOADI1(reg) */
	case 146: /* reg: NEGI8(reg) */
	case 145: /* reg: NEGI4(reg) */
	case 144: /* reg: BCOMU8(reg) */
	case 143: /* reg: BCOMI8(reg) */
	case 142: /* reg: BCOMU4(reg) */
	case 141: /* reg: BCOMI4(reg) */
	case 91: /* reg: INDIRF8(addr) */
	case 90: /* reg: INDIRF4(addr) */
	case 89: /* reg: CVIU8(reg) */
	case 73: /* reg: INDIRU8(addr) */
	case 72: /* reg: INDIRU4(addr) */
	case 71: /* reg: INDIRU2(reg) */
	case 70: /* reg: INDIRU1(reg) */
	case 69: /* reg: INDIRP8(addr) */
	case 68: /* reg: INDIRI8(addr) */
	case 67: /* reg: INDIRI4(addr) */
	case 66: /* reg: INDIRI2(reg) */
	case 65: /* reg: INDIRI1(reg) */
		kids[0] = LEFT_CHILD(p);
		break;
	case 249: /* stmt: ARGB(INDIRB(reg)) */
	case 182: /* reg: CVIF8(INDIRI8(addr)) */
	case 181: /* reg: CVIF8(INDIRI4(addr)) */
	case 180: /* reg: CVIF4(INDIRI8(addr)) */
	case 179: /* reg: CVIF4(INDIRI4(addr)) */
	case 88: /* reg: CVUI8(INDIRU4(addr)) */
	case 87: /* reg: CVUI8(INDIRU2(reg)) */
	case 86: /* reg: CVUI4(INDIRU2(reg)) */
	case 85: /* reg: CVUI8(INDIRU1(reg)) */
	case 84: /* reg: CVUI4(INDIRU1(reg)) */
	case 83: /* reg: CVUU8(INDIRU4(addr)) */
	case 82: /* reg: CVUU8(INDIRU2(reg)) */
	case 81: /* reg: CVUU4(INDIRU2(reg)) */
	case 80: /* reg: CVUU8(INDIRU1(reg)) */
	case 79: /* reg: CVUU4(INDIRU1(reg)) */
	case 78: /* reg: CVII8(INDIRI4(addr)) */
	case 77: /* reg: CVII8(INDIRI2(reg)) */
	case 76: /* reg: CVII4(INDIRI2(reg)) */
	case 75: /* reg: CVII8(INDIRI1(reg)) */
	case 74: /* reg: CVII4(INDIRI1(reg)) */
		kids[0] = LEFT_CHILD(LEFT_CHILD(p));
		break;
	case 250: /* stmt: ASGNB(reg,INDIRB(reg)) */
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
        parseflags(argc, argv);

        for (i = 0; i < 32; i++)
                freg[i] = mkreg("%d", i, 1, FREG);
        for (i = 0; i < 32; i++)
                ireg[i]  = mkreg("%d", i, 1, IREG);
        ireg[29]->x.name = "gp";
        ireg[30]->x.name = "sp";
        fregw = mkwildcard(freg);
        iregw = mkwildcard(ireg);

        tmask[IREG] = INTTMP; tmask[FREG] = FLTTMP;
        vmask[IREG] = INTVAR; vmask[FREG] = FLTVAR;

        blkreg = mkreg("1", 1, 0xf, IREG);

}

static Symbol rmap(int opk) {
        switch (optype(opk)) {
        case I: case U: case P: case B:
                return iregw;
        case F:
                return fregw;
        default:
                return 0;
        }
}

static Symbol argreg(int offset, int ty) {
        if (offset >= 48)
                return NULL;
        else if (ty == F)
                return freg[(offset/8) + 16];
        else
                return ireg[(offset/8) + 16];
}

static void target(Node p) {
        assert(p);
        switch (specific(p->op)) {
        case CNST+I: case CNST+U: case CNST+P:
                if (range(p, 0, 0) == 0) {
                        setreg(p, ireg[31]);
                        p->x.registered = 1;
                }
                break;
        case CNST+F:
                if (p->syms[0]->u.c.v.d == 0) {
                        setreg(p, freg[31]);
                        p->x.registered = 1;
                }
                break;

        case CALL+V:
                rtarget(p, 0, ireg[27]);
                break;
        case CALL+F:
                rtarget(p, 0, ireg[27]);
                setreg(p, freg[0]);
                break;
        case CALL+I: case CALL+P: case CALL+U:
                rtarget(p, 0, ireg[27]);
                setreg(p, ireg[0]);
                break;
        case RET+F:
                rtarget(p, 0, freg[0]);
                break;
        case RET+I: case RET+U: case RET+P:
                rtarget(p, 0, ireg[0]);
                break;

        case ARG+F: case ARG+I: case ARG+P: case ARG+U: {
                Symbol q = argreg(p->syms[2]->u.c.v.i, optype(p->op));
                if (q)
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
        case ASGN+I: case ASGN+U:
                if (opsize(p->op) <= 2)
                        spill(1<<24, IREG, p);
                break;

        case DIV+I: case DIV+U: case MOD+I: case MOD+U:
                spill(((1<<27)|(3<<24))&~p->syms[RX]->x.regnode->mask, IREG, p);
                break;

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
                q = argreg(p->syms[2]->u.c.v.i, ty);
                src = getregnum(p->x.kids[0]);
                if (q)
                        break;
                else if (ty == F && sz == 4)
                        print("sts $f%d,%d($sp)\n", src, p->syms[2]->u.c.v.i - 48);
                else if (ty == F && sz == 8)
                        print("stt $f%d,%d($sp)\n", src, p->syms[2]->u.c.v.i - 48);
                else if (sz == 4)
                        print("stq $%d,%d($sp)\n", src, p->syms[2]->u.c.v.i - 48);
                else if (sz == 8)
                        print("stq $%d,%d($sp)\n", src, p->syms[2]->u.c.v.i - 48);
                else
                        assert(0);
                break;

        case ASGN+B:
                dalign = salign = p->syms[1]->u.c.v.i;
                blkcopy(getregnum(p->x.kids[0]), 0,
                        getregnum(p->x.kids[1]), 0,
                        p->syms[0]->u.c.v.i, tmpregs);
                break;


        case ARG+B: {
                int doff = p->syms[2]->u.c.v.i, soff = 0, sreg = getregnum(p->x.kids[0]);
                dalign = 8;
                salign = p->syms[1]->u.c.v.i;
                n = p->syms[0]->u.c.v.i;
                for ( ; doff <= 40 && n > 0; doff += 8) {
                        print("uldq $%d,%d($%d)\n", (doff/8)+16, soff, sreg);
                        soff += 8;
                        n -= 8;
                }
                if (n > 0)
                        blkcopy(30, doff - 48, sreg, soff, n, tmpregs);
                break;
                }

        }
}

static void doarg(Node p) {
        p->syms[2] = intconst(mkactual(8, roundup(p->syms[0]->u.c.v.i,8)));
}

static void local(Symbol p) {
        if (askregvar(p, rmap(ttob(p->type))) == 0)
                mkauto(p);
}

static int bitcount(unsigned mask) {
        unsigned i, n = 0;

        for (i = 1; i; i <<= 1)
                if (mask&i)
                        n++;
        return n;
}

static void function(Symbol f, Symbol caller[], Symbol callee[], int ncalls) {
        int i, sizeargs, saved, sizefsave, sizeisave, varargs;
        Symbol r, argregs[6];

        usedmask[0] = usedmask[1] = 0;
        freemask[0] = freemask[1] = ~(unsigned)0;
        maxargoffset = offset = maxoffset = 0;

        for (i = 0; callee[i]; i++)
                ;
        varargs = variadic(f->type)
                || i > 0 && strcmp(callee[i-1]->name, "va_alist") == 0;
        if (varargs)
                sizeargs = 2*48;
        else
                sizeargs = 48;

        for (i = 0; callee[i]; i++) {
                Symbol p = callee[i];
                Symbol q = caller[i];
                assert(q);
                if (isfloat(p->type) && varargs) {
                        p->x.offset = q->x.offset = offset - 2*48;
                        p->x.name = q->x.name = stringd(offset - 2*48);
                } else {
                        p->x.offset = q->x.offset = offset - 48;
                        p->x.name = q->x.name = stringd(offset - 48);
                }
                offset = roundup(offset, q->type->align);
                r = argreg(offset, optype(ttob(q->type)));
                if (i < 6)
                        argregs[i] = r;
                offset = roundup(offset + q->type->size, 8);
                if (varargs)
                        p->sclass = AUTO;
                else if (r && ncalls == 0 && !isstruct(q->type) && !p->addressed
) {
                        p->sclass = q->sclass = REGISTER;
                        askregvar(p, r);
                        assert(p->x.regnode && p->x.regnode->vbl == p);
                        q->x = p->x;
                        q->type = p->type;
                } else if (askregvar(p, rmap(ttob(p->type)))
                           && r != NULL /*
                           && (isint(p->type) || p->type == q->type) */
) {
                        assert(q->sclass != REGISTER);
                        p->sclass = q->sclass = REGISTER;
                        q->type = p->type;
                }

        }
        assert(!caller[i]);

        offset = sizeargs + 8;
        gencode(caller, callee);
        usedmask[IREG] &= ~(INTTMP|(0x3f<<16)|INTRET);
        usedmask[FREG] &= ~(FLTTMP|(0x3f<<16)|FLTRET);
        if (ncalls || usedmask[IREG] || usedmask[FREG])
                usedmask[IREG] |= 1<<26;
        sizefsave = 8*bitcount(usedmask[FREG]);
        sizeisave = 8*bitcount(usedmask[IREG]);
        if (maxargoffset > 48)
                maxargoffset -= 48;
        else
                maxargoffset = 0;
        if (maxoffset < sizeargs)
                maxoffset = sizeargs;
        framesize = roundup(maxargoffset + sizefsave + sizeisave + maxoffset, 16);
        segment(CODE);
        print(".ent %s\n", f->x.name);
        print("%s:\n", f->x.name);
        print("ldgp $gp,0($27)\n");
        i = maxargoffset + sizefsave - framesize;
        if (framesize > 0)
                print("lda $sp,%d($sp)\n", -framesize);
        if (usedmask[FREG])
                print(".fmask 0x%x,%d\n", usedmask[FREG], i - 8);
        if (usedmask[IREG])
                print(".mask 0x%x,%d\n",  usedmask[IREG], i + sizeisave - 8);
        print(".frame $sp,%d,$26,%d\n", framesize, sizeargs);

        saved = maxargoffset;
        for (i = 2; i <= 9; i++)
                if (usedmask[FREG]&(1<<i)) {
                        print("stt $f%d,%d($sp)\n", i, saved);
                        saved += 8;
                }

        for (i = 9; i <= 26; i++)
                if (usedmask[IREG]&(1<<i)) {
                        print("stq $%d,%d($sp)\n", i, saved);
                        saved += 8;
                }
        for (i = 0; i < 6 && callee[i]; i++) {
                r = argregs[i];
                if (r && r->x.regnode != callee[i]->x.regnode) {
                        Symbol out = callee[i];
                        Symbol in  = caller[i];
                        int rn = r->x.regnode->number;
                        int rs = r->x.regnode->set;
                        int tyin = ttob(in->type);

                        assert(out && in && r && r->x.regnode);
                        assert(out->sclass != REGISTER || out->x.regnode);
                        if (out->sclass == REGISTER) {
                                if (rs == FREG)
                                        print("fmov $f%d,$f%d\n", rn, out->x.regnode->number);
                                else
                                        print("mov $%d,$%d\n", rn, out->x.regnode->number);

                        } else {
                                int off = in->x.offset + framesize;
                                if (rs == FREG && tyin == F+sizeop(8))
                                        print("stt $f%d,%d($sp)\n", rn, off);
                                else if (rs == FREG && tyin == F+sizeop(4))
                                        print("sts $f%d,%d($sp)\n", rn, off);
                                else {
                                        int i, n = (in->type->size + 7)/8;
                                        for (i = rn; i < rn+n && i <= 21; i++)
                                                print("stq $%d,%d($sp)\n", i, off + (i-rn)*8);
                                }

                        }

                }
        }
        if (varargs && callee[i-1]) {
                i = callee[i-1]->x.offset + roundup(callee[i-1]->type->size, 8);
                for (i = (48+i)/8; i < 6; i++) {
                        print("stq $%d,%d($sp)\n",  i + 16, framesize -   48 + 8*i);
                        print("stt $f%d,%d($sp)\n", i + 16, framesize - 2*48 + 8*i);
                }
        }
        print(".prologue 1\n");

        emitcode();
        saved = maxargoffset;
        for (i = 2; i <= 9; i++)
                if (usedmask[FREG]&(1<<i)) {
                        print("ldt $f%d,%d($sp)\n", i, saved);
                        saved += 8;
                }
        for (i = 9; i <= 26; i++)
                if (usedmask[IREG]&(1<<i)) {
                        print("ldq $%d,%d($sp)\n", i, saved);
                        saved += 8;
                }
        if (framesize > 0)
                print("lda $sp,%d($sp)\n", framesize);
        print("ret\n");
        print(".end %s\n", f->x.name);

}

static void defconst(int suffix, int size, Value v) {
        if (suffix == F && size == 4) {
                float f = v.d;
                print(".long 0x%x\n", *(unsigned *)&f);
        } else if (suffix == F && size == 8) {
                double d = v.d;
                unsigned *p = (unsigned *)&d;
                print(".long 0x%x\n.long 0x%x\n", p[swap], p[!swap]);
        } else if (suffix == P)
                print(".quad 0x%X\n", v.p);
        else if (size == 1)
                print(".byte 0x%x\n", suffix == I ? v.i : v.u);
        else if (size == 2)
                print(".word 0x%x\n", suffix == I ? v.i&0xFFFF : v.u&0xFFFF);
        else if (size == 4)
                print(".long 0x%x\n", suffix == I ? v.i : v.u);
        else if (size == 8)
                print(".quad 0x%X\n", suffix == I ? v.i : v.u);

}

static void defaddress(Symbol p) {
        print(".quad %s\n", p->x.name);
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
        if (p->u.seg == DATA || p->u.seg == LIT) {
                assert(p->type->align <= 8);
                print(".align %c\n", ".01.2...3"[p->type->align]);
                print("%s:\n", p->x.name);
        } else if (p->sclass == STATIC || Aflag >= 2)
                print(".lcomm %s,%d\n", p->x.name, p->type->size);
        else
                print( ".comm %s,%d\n", p->x.name, p->type->size);
}

static void segment(int n) {
        cseg = n;
        switch (n) {
        case DATA: print(".sdata\n"); break;
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

        print("addq $%d,%d,$%d\n",   sreg, size&~7, sreg);
        print("addq $%d,%d,$%d\n",   dreg, size&~7, tmps[2]);
        blkcopy(tmps[2], doff, sreg, soff, size&7, tmps);
        print("L.%d:\n", lab);
        print("addq $%d,%d,$%d\n",    sreg, -8, sreg);
        print("addq $%d,%d,$%d\n", tmps[2], -8, tmps[2]);
        blkcopy(tmps[2], doff, sreg, soff, 8, tmps);
        print("cmpult $%d,$%d,$23\nbne $23,L.%d\n", dreg, tmps[2], lab);
}

static void blkfetch(int size, int off, int reg, int tmp) {
        assert(size == 1 || size == 2 || size == 4 || size == 8);
        if (size == 1)
                print("ldb $%d,%d($%d)\n",  tmp, off, reg);
        else if (size == 2)
                print("ldw $%d,%d($%d)\n",  tmp, off, reg);
        else if (salign >= size && size == 4)
                print("ldl $%d,%d($%d)\n",  tmp, off, reg);
        else if (salign >= size && size == 8)
                print("ldq $%d,%d($%d)\n",  tmp, off, reg);
        else if (size == 4)
                print("uldl $%d,%d($%d)\n", tmp, off, reg);
        else
                print("uldq $%d,%d($%d)\n", tmp, off, reg);
}

static void blkstore(int size, int off, int reg, int tmp) {
        assert(size == 1 || size == 2 || size == 4 || size == 8);
        if (size == 1)
                print("stb $%d,%d($%d)\n",  tmp, off, reg);
        else if (size == 2)
                print("stw $%d,%d($%d)\n",  tmp, off, reg);
        else if (dalign >= size && size == 4)
                print("stl $%d,%d($%d)\n",  tmp, off, reg);
        else if (dalign >= size && size == 8)
                print("stq $%d,%d($%d)\n",  tmp, off, reg);
        else if (size == 4)
                print("ustl $%d,%d($%d)\n", tmp, off, reg);
        else
                print("ustq $%d,%d($%d)\n", tmp, off, reg);
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
Interface alphaIR = {
        1, 1, 0,  /* char */
        2, 2, 0,  /* short */
        4, 4, 0,  /* int */
        8, 8, 0,  /* long */
        8, 8, 0,  /* long long */
        4, 4, 1,  /* float */
        8, 8, 1,  /* double */
        8, 8, 1,  /* long double */
        8, 8, 0,  /* T * */
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
                1,      /* max_unaligned_load */
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

