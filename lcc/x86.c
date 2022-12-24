enum { EAX=0, ECX=1, EDX=2, EBX=3, ESI=6, EDI=7 };
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
extern int ckstack(Node, int);
extern int memop(Node);
extern int sametree(Node, Node);
static Symbol charreg[32], shortreg[32], intreg[32];
static Symbol fltreg[32];

static Symbol charregw, shortregw, intregw, fltregw;

static int cseg;

static Symbol quo, rem;

/*
generated at Tue Sep 27 04:30:15 2022
by $Id$
*/
static void _kids(NODEPTR_TYPE, int, NODEPTR_TYPE[]);
static void _label(NODEPTR_TYPE);
static int _rule(void*, int);

#define _stmt_NT 1
#define _reg_NT 2
#define _con_NT 3
#define _acon_NT 4
#define _base_NT 5
#define _index_NT 6
#define _con1_NT 7
#define _con2_NT 8
#define _con3_NT 9
#define _addr_NT 10
#define _mem_NT 11
#define _rc_NT 12
#define _mr_NT 13
#define _mrc0_NT 14
#define _mrc1_NT 15
#define _mrc3_NT 16
#define _con5_NT 17
#define _memf_NT 18
#define _flt_NT 19
#define _addrj_NT 20
#define _cmpf_NT 21

static char *_ntname[] = {
	0,
	"stmt",
	"reg",
	"con",
	"acon",
	"base",
	"index",
	"con1",
	"con2",
	"con3",
	"addr",
	"mem",
	"rc",
	"mr",
	"mrc0",
	"mrc1",
	"mrc3",
	"con5",
	"memf",
	"flt",
	"addrj",
	"cmpf",
	0
};

struct _state {
	short cost[22];
	struct {
		unsigned int _stmt:7;
		unsigned int _reg:7;
		unsigned int _con:4;
		unsigned int _acon:2;
		unsigned int _base:3;
		unsigned int _index:3;
		unsigned int _con1:2;
		unsigned int _con2:2;
		unsigned int _con3:2;
		unsigned int _addr:3;
		unsigned int _mem:3;
		unsigned int _rc:2;
		unsigned int _mr:2;
		unsigned int _mrc0:2;
		unsigned int _mrc1:2;
		unsigned int _mrc3:2;
		unsigned int _con5:1;
		unsigned int _memf:2;
		unsigned int _flt:2;
		unsigned int _addrj:2;
		unsigned int _cmpf:2;
	} rule;
};

static short _nts_0[] = { 0 };
static short _nts_1[] = { _reg_NT, 0 };
static short _nts_2[] = { _con_NT, 0 };
static short _nts_3[] = { _reg_NT, _acon_NT, 0 };
static short _nts_4[] = { _reg_NT, _con1_NT, 0 };
static short _nts_5[] = { _reg_NT, _con2_NT, 0 };
static short _nts_6[] = { _reg_NT, _con3_NT, 0 };
static short _nts_7[] = { _base_NT, 0 };
static short _nts_8[] = { _index_NT, _base_NT, 0 };
static short _nts_9[] = { _index_NT, 0 };
static short _nts_10[] = { _addr_NT, 0 };
static short _nts_11[] = { _mem_NT, 0 };
static short _nts_12[] = { _rc_NT, 0 };
static short _nts_13[] = { _mrc0_NT, 0 };
static short _nts_14[] = { _reg_NT, _mrc1_NT, 0 };
static short _nts_15[] = { _addr_NT, _mem_NT, _con1_NT, 0 };
static short _nts_16[] = { _addr_NT, _mem_NT, _rc_NT, 0 };
static short _nts_17[] = { _addr_NT, _mem_NT, 0 };
static short _nts_18[] = { _reg_NT, _con5_NT, 0 };
static short _nts_19[] = { _addr_NT, _mem_NT, _con5_NT, 0 };
static short _nts_20[] = { _reg_NT, _reg_NT, 0 };
static short _nts_21[] = { _reg_NT, _mrc3_NT, 0 };
static short _nts_22[] = { _con_NT, _mr_NT, 0 };
static short _nts_23[] = { _reg_NT, _mr_NT, 0 };
static short _nts_24[] = { _addr_NT, _rc_NT, 0 };
static short _nts_25[] = { _mrc3_NT, 0 };
static short _nts_26[] = { _memf_NT, 0 };
static short _nts_27[] = { _addr_NT, _reg_NT, 0 };
static short _nts_28[] = { _reg_NT, _flt_NT, 0 };
static short _nts_29[] = { _addrj_NT, 0 };
static short _nts_30[] = { _mem_NT, _rc_NT, 0 };
static short _nts_31[] = { _cmpf_NT, _reg_NT, 0 };

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
	_nts_0,	/* 36 */
	_nts_2,	/* 37 */
	_nts_0,	/* 38 */
	_nts_1,	/* 39 */
	_nts_3,	/* 40 */
	_nts_3,	/* 41 */
	_nts_3,	/* 42 */
	_nts_0,	/* 43 */
	_nts_0,	/* 44 */
	_nts_1,	/* 45 */
	_nts_4,	/* 46 */
	_nts_5,	/* 47 */
	_nts_6,	/* 48 */
	_nts_0,	/* 49 */
	_nts_0,	/* 50 */
	_nts_0,	/* 51 */
	_nts_0,	/* 52 */
	_nts_0,	/* 53 */
	_nts_0,	/* 54 */
	_nts_4,	/* 55 */
	_nts_5,	/* 56 */
	_nts_6,	/* 57 */
	_nts_7,	/* 58 */
	_nts_8,	/* 59 */
	_nts_8,	/* 60 */
	_nts_8,	/* 61 */
	_nts_9,	/* 62 */
	_nts_10,	/* 63 */
	_nts_10,	/* 64 */
	_nts_10,	/* 65 */
	_nts_10,	/* 66 */
	_nts_10,	/* 67 */
	_nts_10,	/* 68 */
	_nts_10,	/* 69 */
	_nts_1,	/* 70 */
	_nts_2,	/* 71 */
	_nts_1,	/* 72 */
	_nts_11,	/* 73 */
	_nts_11,	/* 74 */
	_nts_12,	/* 75 */
	_nts_11,	/* 76 */
	_nts_12,	/* 77 */
	_nts_11,	/* 78 */
	_nts_12,	/* 79 */
	_nts_10,	/* 80 */
	_nts_13,	/* 81 */
	_nts_1,	/* 82 */
	_nts_1,	/* 83 */
	_nts_1,	/* 84 */
	_nts_1,	/* 85 */
	_nts_1,	/* 86 */
	_nts_1,	/* 87 */
	_nts_1,	/* 88 */
	_nts_14,	/* 89 */
	_nts_14,	/* 90 */
	_nts_14,	/* 91 */
	_nts_14,	/* 92 */
	_nts_14,	/* 93 */
	_nts_14,	/* 94 */
	_nts_14,	/* 95 */
	_nts_14,	/* 96 */
	_nts_14,	/* 97 */
	_nts_14,	/* 98 */
	_nts_14,	/* 99 */
	_nts_14,	/* 100 */
	_nts_15,	/* 101 */
	_nts_15,	/* 102 */
	_nts_15,	/* 103 */
	_nts_15,	/* 104 */
	_nts_15,	/* 105 */
	_nts_15,	/* 106 */
	_nts_16,	/* 107 */
	_nts_16,	/* 108 */
	_nts_16,	/* 109 */
	_nts_16,	/* 110 */
	_nts_16,	/* 111 */
	_nts_16,	/* 112 */
	_nts_16,	/* 113 */
	_nts_16,	/* 114 */
	_nts_16,	/* 115 */
	_nts_16,	/* 116 */
	_nts_1,	/* 117 */
	_nts_1,	/* 118 */
	_nts_1,	/* 119 */
	_nts_17,	/* 120 */
	_nts_17,	/* 121 */
	_nts_17,	/* 122 */
	_nts_18,	/* 123 */
	_nts_18,	/* 124 */
	_nts_18,	/* 125 */
	_nts_18,	/* 126 */
	_nts_19,	/* 127 */
	_nts_19,	/* 128 */
	_nts_19,	/* 129 */
	_nts_19,	/* 130 */
	_nts_0,	/* 131 */
	_nts_20,	/* 132 */
	_nts_20,	/* 133 */
	_nts_20,	/* 134 */
	_nts_20,	/* 135 */
	_nts_21,	/* 136 */
	_nts_22,	/* 137 */
	_nts_23,	/* 138 */
	_nts_20,	/* 139 */
	_nts_20,	/* 140 */
	_nts_20,	/* 141 */
	_nts_20,	/* 142 */
	_nts_1,	/* 143 */
	_nts_1,	/* 144 */
	_nts_10,	/* 145 */
	_nts_10,	/* 146 */
	_nts_10,	/* 147 */
	_nts_10,	/* 148 */
	_nts_1,	/* 149 */
	_nts_1,	/* 150 */
	_nts_1,	/* 151 */
	_nts_1,	/* 152 */
	_nts_1,	/* 153 */
	_nts_1,	/* 154 */
	_nts_1,	/* 155 */
	_nts_1,	/* 156 */
	_nts_24,	/* 157 */
	_nts_24,	/* 158 */
	_nts_24,	/* 159 */
	_nts_24,	/* 160 */
	_nts_24,	/* 161 */
	_nts_24,	/* 162 */
	_nts_24,	/* 163 */
	_nts_25,	/* 164 */
	_nts_25,	/* 165 */
	_nts_25,	/* 166 */
	_nts_20,	/* 167 */
	_nts_1,	/* 168 */
	_nts_10,	/* 169 */
	_nts_10,	/* 170 */
	_nts_10,	/* 171 */
	_nts_26,	/* 172 */
	_nts_27,	/* 173 */
	_nts_27,	/* 174 */
	_nts_27,	/* 175 */
	_nts_1,	/* 176 */
	_nts_1,	/* 177 */
	_nts_1,	/* 178 */
	_nts_1,	/* 179 */
	_nts_26,	/* 180 */
	_nts_1,	/* 181 */
	_nts_28,	/* 182 */
	_nts_28,	/* 183 */
	_nts_28,	/* 184 */
	_nts_28,	/* 185 */
	_nts_28,	/* 186 */
	_nts_28,	/* 187 */
	_nts_28,	/* 188 */
	_nts_28,	/* 189 */
	_nts_1,	/* 190 */
	_nts_1,	/* 191 */
	_nts_1,	/* 192 */
	_nts_10,	/* 193 */
	_nts_1,	/* 194 */
	_nts_1,	/* 195 */
	_nts_0,	/* 196 */
	_nts_1,	/* 197 */
	_nts_11,	/* 198 */
	_nts_29,	/* 199 */
	_nts_0,	/* 200 */
	_nts_30,	/* 201 */
	_nts_30,	/* 202 */
	_nts_30,	/* 203 */
	_nts_30,	/* 204 */
	_nts_30,	/* 205 */
	_nts_30,	/* 206 */
	_nts_30,	/* 207 */
	_nts_30,	/* 208 */
	_nts_30,	/* 209 */
	_nts_30,	/* 210 */
	_nts_14,	/* 211 */
	_nts_14,	/* 212 */
	_nts_14,	/* 213 */
	_nts_14,	/* 214 */
	_nts_14,	/* 215 */
	_nts_14,	/* 216 */
	_nts_14,	/* 217 */
	_nts_14,	/* 218 */
	_nts_14,	/* 219 */
	_nts_14,	/* 220 */
	_nts_14,	/* 221 */
	_nts_14,	/* 222 */
	_nts_26,	/* 223 */
	_nts_1,	/* 224 */
	_nts_31,	/* 225 */
	_nts_31,	/* 226 */
	_nts_31,	/* 227 */
	_nts_31,	/* 228 */
	_nts_31,	/* 229 */
	_nts_31,	/* 230 */
	_nts_31,	/* 231 */
	_nts_31,	/* 232 */
	_nts_31,	/* 233 */
	_nts_31,	/* 234 */
	_nts_31,	/* 235 */
	_nts_31,	/* 236 */
	_nts_29,	/* 237 */
	_nts_29,	/* 238 */
	_nts_29,	/* 239 */
	_nts_29,	/* 240 */
	_nts_29,	/* 241 */
	_nts_29,	/* 242 */
	_nts_29,	/* 243 */
	_nts_29,	/* 244 */
	_nts_1,	/* 245 */
	_nts_1,	/* 246 */
	_nts_1,	/* 247 */
	_nts_1,	/* 248 */
	_nts_1,	/* 249 */
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
/* 36 */	"(%a)",	/* acon: ADDRGP4 */
/* 37 */	"(%0)",	/* acon: con */
/* 38 */	"(%a)",	/* base: ADDRGP4 */
/* 39 */	"[%0]",	/* base: reg */
/* 40 */	"%1[%0]",	/* base: ADDI4(reg,acon) */
/* 41 */	"%1[%0]",	/* base: ADDP4(reg,acon) */
/* 42 */	"%1[%0]",	/* base: ADDU4(reg,acon) */
/* 43 */	"(%a)[ebp]",	/* base: ADDRFP4 */
/* 44 */	"(%a)[ebp]",	/* base: ADDRLP4 */
/* 45 */	"%0",	/* index: reg */
/* 46 */	"%0*2",	/* index: LSHI4(reg,con1) */
/* 47 */	"%0*4",	/* index: LSHI4(reg,con2) */
/* 48 */	"%0*8",	/* index: LSHI4(reg,con3) */
/* 49 */	"1",	/* con1: CNSTI4 */
/* 50 */	"1",	/* con1: CNSTU4 */
/* 51 */	"2",	/* con2: CNSTI4 */
/* 52 */	"2",	/* con2: CNSTU4 */
/* 53 */	"3",	/* con3: CNSTI4 */
/* 54 */	"3",	/* con3: CNSTU4 */
/* 55 */	"%0*2",	/* index: LSHU4(reg,con1) */
/* 56 */	"%0*4",	/* index: LSHU4(reg,con2) */
/* 57 */	"%0*8",	/* index: LSHU4(reg,con3) */
/* 58 */	"%0",	/* addr: base */
/* 59 */	"%1[%0]",	/* addr: ADDI4(index,base) */
/* 60 */	"%1[%0]",	/* addr: ADDP4(index,base) */
/* 61 */	"%1[%0]",	/* addr: ADDU4(index,base) */
/* 62 */	"[%0]",	/* addr: index */
/* 63 */	"byte ptr %0",	/* mem: INDIRI1(addr) */
/* 64 */	"word ptr %0",	/* mem: INDIRI2(addr) */
/* 65 */	"dword ptr %0",	/* mem: INDIRI4(addr) */
/* 66 */	"byte ptr %0",	/* mem: INDIRU1(addr) */
/* 67 */	"word ptr %0",	/* mem: INDIRU2(addr) */
/* 68 */	"dword ptr %0",	/* mem: INDIRU4(addr) */
/* 69 */	"dword ptr %0",	/* mem: INDIRP4(addr) */
/* 70 */	"%0",	/* rc: reg */
/* 71 */	"%0",	/* rc: con */
/* 72 */	"%0",	/* mr: reg */
/* 73 */	"%0",	/* mr: mem */
/* 74 */	"%0",	/* mrc0: mem */
/* 75 */	"%0",	/* mrc0: rc */
/* 76 */	"%0",	/* mrc1: mem */
/* 77 */	"%0",	/* mrc1: rc */
/* 78 */	"%0",	/* mrc3: mem */
/* 79 */	"%0",	/* mrc3: rc */
/* 80 */	"lea %c,%0\n",	/* reg: addr */
/* 81 */	"mov %c,%0\n",	/* reg: mrc0 */
/* 82 */	"# move\n",	/* reg: LOADI1(reg) */
/* 83 */	"# move\n",	/* reg: LOADI2(reg) */
/* 84 */	"# move\n",	/* reg: LOADI4(reg) */
/* 85 */	"# move\n",	/* reg: LOADU1(reg) */
/* 86 */	"# move\n",	/* reg: LOADU2(reg) */
/* 87 */	"# move\n",	/* reg: LOADU4(reg) */
/* 88 */	"# move\n",	/* reg: LOADP4(reg) */
/* 89 */	"?mov %c,%0\nadd %c,%1\n",	/* reg: ADDI4(reg,mrc1) */
/* 90 */	"?mov %c,%0\nadd %c,%1\n",	/* reg: ADDP4(reg,mrc1) */
/* 91 */	"?mov %c,%0\nadd %c,%1\n",	/* reg: ADDU4(reg,mrc1) */
/* 92 */	"?mov %c,%0\nsub %c,%1\n",	/* reg: SUBI4(reg,mrc1) */
/* 93 */	"?mov %c,%0\nsub %c,%1\n",	/* reg: SUBP4(reg,mrc1) */
/* 94 */	"?mov %c,%0\nsub %c,%1\n",	/* reg: SUBU4(reg,mrc1) */
/* 95 */	"?mov %c,%0\nand %c,%1\n",	/* reg: BANDI4(reg,mrc1) */
/* 96 */	"?mov %c,%0\nor %c,%1\n",	/* reg: BORI4(reg,mrc1) */
/* 97 */	"?mov %c,%0\nxor %c,%1\n",	/* reg: BXORI4(reg,mrc1) */
/* 98 */	"?mov %c,%0\nand %c,%1\n",	/* reg: BANDU4(reg,mrc1) */
/* 99 */	"?mov %c,%0\nor %c,%1\n",	/* reg: BORU4(reg,mrc1) */
/* 100 */	"?mov %c,%0\nxor %c,%1\n",	/* reg: BXORU4(reg,mrc1) */
/* 101 */	"inc %1\n",	/* stmt: ASGNI4(addr,ADDI4(mem,con1)) */
/* 102 */	"inc %1\n",	/* stmt: ASGNI4(addr,ADDU4(mem,con1)) */
/* 103 */	"inc %1\n",	/* stmt: ASGNP4(addr,ADDP4(mem,con1)) */
/* 104 */	"dec %1\n",	/* stmt: ASGNI4(addr,SUBI4(mem,con1)) */
/* 105 */	"dec %1\n",	/* stmt: ASGNI4(addr,SUBU4(mem,con1)) */
/* 106 */	"dec %1\n",	/* stmt: ASGNP4(addr,SUBP4(mem,con1)) */
/* 107 */	"add %1,%2\n",	/* stmt: ASGNI4(addr,ADDI4(mem,rc)) */
/* 108 */	"sub %1,%2\n",	/* stmt: ASGNI4(addr,SUBI4(mem,rc)) */
/* 109 */	"add %1,%2\n",	/* stmt: ASGNU4(addr,ADDU4(mem,rc)) */
/* 110 */	"sub %1,%2\n",	/* stmt: ASGNU4(addr,SUBU4(mem,rc)) */
/* 111 */	"and %1,%2\n",	/* stmt: ASGNI4(addr,BANDI4(mem,rc)) */
/* 112 */	"or %1,%2\n",	/* stmt: ASGNI4(addr,BORI4(mem,rc)) */
/* 113 */	"xor %1,%2\n",	/* stmt: ASGNI4(addr,BXORI4(mem,rc)) */
/* 114 */	"and %1,%2\n",	/* stmt: ASGNU4(addr,BANDU4(mem,rc)) */
/* 115 */	"or %1,%2\n",	/* stmt: ASGNU4(addr,BORU4(mem,rc)) */
/* 116 */	"xor %1,%2\n",	/* stmt: ASGNU4(addr,BXORU4(mem,rc)) */
/* 117 */	"?mov %c,%0\nnot %c\n",	/* reg: BCOMI4(reg) */
/* 118 */	"?mov %c,%0\nnot %c\n",	/* reg: BCOMU4(reg) */
/* 119 */	"?mov %c,%0\nneg %c\n",	/* reg: NEGI4(reg) */
/* 120 */	"not %1\n",	/* stmt: ASGNI4(addr,BCOMI4(mem)) */
/* 121 */	"not %1\n",	/* stmt: ASGNU4(addr,BCOMU4(mem)) */
/* 122 */	"neg %1\n",	/* stmt: ASGNI4(addr,NEGI4(mem)) */
/* 123 */	"?mov %c,%0\nsal %c,%1\n",	/* reg: LSHI4(reg,con5) */
/* 124 */	"?mov %c,%0\nshl %c,%1\n",	/* reg: LSHU4(reg,con5) */
/* 125 */	"?mov %c,%0\nsar %c,%1\n",	/* reg: RSHI4(reg,con5) */
/* 126 */	"?mov %c,%0\nshr %c,%1\n",	/* reg: RSHU4(reg,con5) */
/* 127 */	"sal %1,%2\n",	/* stmt: ASGNI4(addr,LSHI4(mem,con5)) */
/* 128 */	"shl %1,%2\n",	/* stmt: ASGNI4(addr,LSHU4(mem,con5)) */
/* 129 */	"sar %1,%2\n",	/* stmt: ASGNI4(addr,RSHI4(mem,con5)) */
/* 130 */	"shr %1,%2\n",	/* stmt: ASGNI4(addr,RSHU4(mem,con5)) */
/* 131 */	"%a",	/* con5: CNSTI4 */
/* 132 */	"?mov %c,%0\nmov ecx,%1\nsal %c,cl\n",	/* reg: LSHI4(reg,reg) */
/* 133 */	"?mov %c,%0\nmov ecx,%1\nshl %c,cl\n",	/* reg: LSHU4(reg,reg) */
/* 134 */	"?mov %c,%0\nmov ecx,%1\nsar %c,cl\n",	/* reg: RSHI4(reg,reg) */
/* 135 */	"?mov %c,%0\nmov ecx,%1\nshr %c,cl\n",	/* reg: RSHU4(reg,reg) */
/* 136 */	"?mov %c,%0\nimul %c,%1\n",	/* reg: MULI4(reg,mrc3) */
/* 137 */	"imul %c,%1,%0\n",	/* reg: MULI4(con,mr) */
/* 138 */	"mul %1\n",	/* reg: MULU4(reg,mr) */
/* 139 */	"xor edx,edx\ndiv %1\n",	/* reg: DIVU4(reg,reg) */
/* 140 */	"xor edx,edx\ndiv %1\n",	/* reg: MODU4(reg,reg) */
/* 141 */	"cdq\nidiv %1\n",	/* reg: DIVI4(reg,reg) */
/* 142 */	"cdq\nidiv %1\n",	/* reg: MODI4(reg,reg) */
/* 143 */	"mov %c,%0\n",	/* reg: CVPU4(reg) */
/* 144 */	"mov %c,%0\n",	/* reg: CVUP4(reg) */
/* 145 */	"movsx %c,byte ptr %0\n",	/* reg: CVII4(INDIRI1(addr)) */
/* 146 */	"movsx %c,word ptr %0\n",	/* reg: CVII4(INDIRI2(addr)) */
/* 147 */	"movzx %c,byte ptr %0\n",	/* reg: CVUU4(INDIRU1(addr)) */
/* 148 */	"movzx %c,word ptr %0\n",	/* reg: CVUU4(INDIRU2(addr)) */
/* 149 */	"# extend\n",	/* reg: CVII4(reg) */
/* 150 */	"# extend\n",	/* reg: CVIU4(reg) */
/* 151 */	"# extend\n",	/* reg: CVUI4(reg) */
/* 152 */	"# extend\n",	/* reg: CVUU4(reg) */
/* 153 */	"# truncate\n",	/* reg: CVII1(reg) */
/* 154 */	"# truncate\n",	/* reg: CVII2(reg) */
/* 155 */	"# truncate\n",	/* reg: CVUU1(reg) */
/* 156 */	"# truncate\n",	/* reg: CVUU2(reg) */
/* 157 */	"mov byte ptr %0,%1\n",	/* stmt: ASGNI1(addr,rc) */
/* 158 */	"mov word ptr %0,%1\n",	/* stmt: ASGNI2(addr,rc) */
/* 159 */	"mov dword ptr %0,%1\n",	/* stmt: ASGNI4(addr,rc) */
/* 160 */	"mov byte ptr %0,%1\n",	/* stmt: ASGNU1(addr,rc) */
/* 161 */	"mov word ptr %0,%1\n",	/* stmt: ASGNU2(addr,rc) */
/* 162 */	"mov dword ptr %0,%1\n",	/* stmt: ASGNU4(addr,rc) */
/* 163 */	"mov dword ptr %0,%1\n",	/* stmt: ASGNP4(addr,rc) */
/* 164 */	"push %0\n",	/* stmt: ARGI4(mrc3) */
/* 165 */	"push %0\n",	/* stmt: ARGU4(mrc3) */
/* 166 */	"push %0\n",	/* stmt: ARGP4(mrc3) */
/* 167 */	"mov ecx,%a\nrep movsb\n",	/* stmt: ASGNB(reg,INDIRB(reg)) */
/* 168 */	"# ARGB\n",	/* stmt: ARGB(INDIRB(reg)) */
/* 169 */	"qword ptr %0",	/* memf: INDIRF8(addr) */
/* 170 */	"dword ptr %0",	/* memf: INDIRF4(addr) */
/* 171 */	"dword ptr %0",	/* memf: CVFF8(INDIRF4(addr)) */
/* 172 */	"fld %0\n",	/* reg: memf */
/* 173 */	"fstp qword ptr %0\n",	/* stmt: ASGNF8(addr,reg) */
/* 174 */	"fstp dword ptr %0\n",	/* stmt: ASGNF4(addr,reg) */
/* 175 */	"fstp dword ptr %0\n",	/* stmt: ASGNF4(addr,CVFF4(reg)) */
/* 176 */	"sub esp,8\nfstp qword ptr [esp]\n",	/* stmt: ARGF8(reg) */
/* 177 */	"sub esp,4\nfstp dword ptr [esp]\n",	/* stmt: ARGF4(reg) */
/* 178 */	"fchs\n",	/* reg: NEGF8(reg) */
/* 179 */	"fchs\n",	/* reg: NEGF4(reg) */
/* 180 */	" %0",	/* flt: memf */
/* 181 */	"p st(1),st",	/* flt: reg */
/* 182 */	"fadd%1\n",	/* reg: ADDF8(reg,flt) */
/* 183 */	"fadd%1\n",	/* reg: ADDF4(reg,flt) */
/* 184 */	"fdiv%1\n",	/* reg: DIVF8(reg,flt) */
/* 185 */	"fdiv%1\n",	/* reg: DIVF4(reg,flt) */
/* 186 */	"fmul%1\n",	/* reg: MULF8(reg,flt) */
/* 187 */	"fmul%1\n",	/* reg: MULF4(reg,flt) */
/* 188 */	"fsub%1\n",	/* reg: SUBF8(reg,flt) */
/* 189 */	"fsub%1\n",	/* reg: SUBF4(reg,flt) */
/* 190 */	"# CVFF8\n",	/* reg: CVFF8(reg) */
/* 191 */	"sub esp,4\nfstp dword ptr 0[esp]\nfld dword ptr 0[esp]\nadd esp,4\n",	/* reg: CVFF4(reg) */
/* 192 */	"call __ftol\n",	/* reg: CVFI4(reg) */
/* 193 */	"fild dword ptr %0\n",	/* reg: CVIF8(INDIRI4(addr)) */
/* 194 */	"push %0\nfild dword ptr 0[esp]\nadd esp,4\n",	/* reg: CVIF4(reg) */
/* 195 */	"push %0\nfild dword ptr 0[esp]\nadd esp,4\n",	/* reg: CVIF8(reg) */
/* 196 */	"%a",	/* addrj: ADDRGP4 */
/* 197 */	"%0",	/* addrj: reg */
/* 198 */	"%0",	/* addrj: mem */
/* 199 */	"jmp %0\n",	/* stmt: JUMPV(addrj) */
/* 200 */	"%a:\n",	/* stmt: LABELV */
/* 201 */	"cmp %0,%1\nje %a\n",	/* stmt: EQI4(mem,rc) */
/* 202 */	"cmp %0,%1\njge %a\n",	/* stmt: GEI4(mem,rc) */
/* 203 */	"cmp %0,%1\njg %a\n",	/* stmt: GTI4(mem,rc) */
/* 204 */	"cmp %0,%1\njle %a\n",	/* stmt: LEI4(mem,rc) */
/* 205 */	"cmp %0,%1\njl %a\n",	/* stmt: LTI4(mem,rc) */
/* 206 */	"cmp %0,%1\njne %a\n",	/* stmt: NEI4(mem,rc) */
/* 207 */	"cmp %0,%1\njae %a\n",	/* stmt: GEU4(mem,rc) */
/* 208 */	"cmp %0,%1\nja  %a\n",	/* stmt: GTU4(mem,rc) */
/* 209 */	"cmp %0,%1\njbe %a\n",	/* stmt: LEU4(mem,rc) */
/* 210 */	"cmp %0,%1\njb  %a\n",	/* stmt: LTU4(mem,rc) */
/* 211 */	"cmp %0,%1\nje %a\n",	/* stmt: EQI4(reg,mrc1) */
/* 212 */	"cmp %0,%1\njge %a\n",	/* stmt: GEI4(reg,mrc1) */
/* 213 */	"cmp %0,%1\njg %a\n",	/* stmt: GTI4(reg,mrc1) */
/* 214 */	"cmp %0,%1\njle %a\n",	/* stmt: LEI4(reg,mrc1) */
/* 215 */	"cmp %0,%1\njl %a\n",	/* stmt: LTI4(reg,mrc1) */
/* 216 */	"cmp %0,%1\njne %a\n",	/* stmt: NEI4(reg,mrc1) */
/* 217 */	"cmp %0,%1\nje %a\n",	/* stmt: EQU4(reg,mrc1) */
/* 218 */	"cmp %0,%1\njae %a\n",	/* stmt: GEU4(reg,mrc1) */
/* 219 */	"cmp %0,%1\nja %a\n",	/* stmt: GTU4(reg,mrc1) */
/* 220 */	"cmp %0,%1\njbe %a\n",	/* stmt: LEU4(reg,mrc1) */
/* 221 */	"cmp %0,%1\njb %a\n",	/* stmt: LTU4(reg,mrc1) */
/* 222 */	"cmp %0,%1\njne %a\n",	/* stmt: NEU4(reg,mrc1) */
/* 223 */	" %0",	/* cmpf: memf */
/* 224 */	"p",	/* cmpf: reg */
/* 225 */	"fcomp%0\nfstsw ax\nsahf\njp %b\nje %a\n%b:\n",	/* stmt: EQF8(cmpf,reg) */
/* 226 */	"fcomp%0\nfstsw ax\nsahf\njp %a\njbe %a\n",	/* stmt: GEF8(cmpf,reg) */
/* 227 */	"fcomp%0\nfstsw ax\nsahf\njp %a\njb %a\n",	/* stmt: GTF8(cmpf,reg) */
/* 228 */	"fcomp%0\nfstsw ax\nsahf\njp %a\njae %a\n",	/* stmt: LEF8(cmpf,reg) */
/* 229 */	"fcomp%0\nfstsw ax\nsahf\njp %a\nja %a\n",	/* stmt: LTF8(cmpf,reg) */
/* 230 */	"fcomp%0\nfstsw ax\nsahf\njp %a\njne %a\n",	/* stmt: NEF8(cmpf,reg) */
/* 231 */	"fcomp%0\nfstsw ax\nsahf\njp %b\nje %a\n%b:\n",	/* stmt: EQF4(cmpf,reg) */
/* 232 */	"fcomp%0\nfstsw ax\nsahf\njp %a\njbe %a\n\n",	/* stmt: GEF4(cmpf,reg) */
/* 233 */	"fcomp%0\nfstsw ax\nsahf\njp %a\njb %a\n",	/* stmt: GTF4(cmpf,reg) */
/* 234 */	"fcomp%0\nfstsw ax\nsahf\njp %a\njae %a\n\n",	/* stmt: LEF4(cmpf,reg) */
/* 235 */	"fcomp%0\nfstsw ax\nsahf\njp %a\nja %a\n",	/* stmt: LTF4(cmpf,reg) */
/* 236 */	"fcomp%0\nfstsw ax\nsahf\njp %a\njne %a\n",	/* stmt: NEF4(cmpf,reg) */
/* 237 */	"call %0\nadd esp,%a\n",	/* reg: CALLI4(addrj) */
/* 238 */	"call %0\nadd esp,%a\n",	/* reg: CALLU4(addrj) */
/* 239 */	"call %0\nadd esp,%a\n",	/* reg: CALLP4(addrj) */
/* 240 */	"call %0\nadd esp,%a\n",	/* stmt: CALLV(addrj) */
/* 241 */	"call %0\nadd esp,%a\n",	/* reg: CALLF4(addrj) */
/* 242 */	"call %0\nadd esp,%a\n",	/* reg: CALLF8(addrj) */
/* 243 */	"call %0\nadd esp,%a\nfstp\n",	/* stmt: CALLF4(addrj) */
/* 244 */	"call %0\nadd esp,%a\nfstp\n",	/* stmt: CALLF8(addrj) */
/* 245 */	"# ret\n",	/* stmt: RETI4(reg) */
/* 246 */	"# ret\n",	/* stmt: RETU4(reg) */
/* 247 */	"# ret\n",	/* stmt: RETP4(reg) */
/* 248 */	"# ret\n",	/* stmt: RETF4(reg) */
/* 249 */	"# ret\n",	/* stmt: RETF8(reg) */
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
/* 36 */	0,	/* (%a) */
/* 37 */	0,	/* (%0) */
/* 38 */	0,	/* (%a) */
/* 39 */	0,	/* [%0] */
/* 40 */	0,	/* %1[%0] */
/* 41 */	0,	/* %1[%0] */
/* 42 */	0,	/* %1[%0] */
/* 43 */	0,	/* (%a)[ebp] */
/* 44 */	0,	/* (%a)[ebp] */
/* 45 */	0,	/* %0 */
/* 46 */	0,	/* %0*2 */
/* 47 */	0,	/* %0*4 */
/* 48 */	0,	/* %0*8 */
/* 49 */	0,	/* 1 */
/* 50 */	0,	/* 1 */
/* 51 */	0,	/* 2 */
/* 52 */	0,	/* 2 */
/* 53 */	0,	/* 3 */
/* 54 */	0,	/* 3 */
/* 55 */	0,	/* %0*2 */
/* 56 */	0,	/* %0*4 */
/* 57 */	0,	/* %0*8 */
/* 58 */	0,	/* %0 */
/* 59 */	0,	/* %1[%0] */
/* 60 */	0,	/* %1[%0] */
/* 61 */	0,	/* %1[%0] */
/* 62 */	0,	/* [%0] */
/* 63 */	0,	/* byte ptr %0 */
/* 64 */	0,	/* word ptr %0 */
/* 65 */	0,	/* dword ptr %0 */
/* 66 */	0,	/* byte ptr %0 */
/* 67 */	0,	/* word ptr %0 */
/* 68 */	0,	/* dword ptr %0 */
/* 69 */	0,	/* dword ptr %0 */
/* 70 */	0,	/* %0 */
/* 71 */	0,	/* %0 */
/* 72 */	0,	/* %0 */
/* 73 */	0,	/* %0 */
/* 74 */	0,	/* %0 */
/* 75 */	0,	/* %0 */
/* 76 */	0,	/* %0 */
/* 77 */	0,	/* %0 */
/* 78 */	0,	/* %0 */
/* 79 */	0,	/* %0 */
/* 80 */	1,	/* lea %c,%0\n */
/* 81 */	1,	/* mov %c,%0\n */
/* 82 */	1,	/* # move\n */
/* 83 */	1,	/* # move\n */
/* 84 */	1,	/* # move\n */
/* 85 */	1,	/* # move\n */
/* 86 */	1,	/* # move\n */
/* 87 */	1,	/* # move\n */
/* 88 */	1,	/* # move\n */
/* 89 */	1,	/* ?mov %c,%0\nadd %c,%1\n */
/* 90 */	1,	/* ?mov %c,%0\nadd %c,%1\n */
/* 91 */	1,	/* ?mov %c,%0\nadd %c,%1\n */
/* 92 */	1,	/* ?mov %c,%0\nsub %c,%1\n */
/* 93 */	1,	/* ?mov %c,%0\nsub %c,%1\n */
/* 94 */	1,	/* ?mov %c,%0\nsub %c,%1\n */
/* 95 */	1,	/* ?mov %c,%0\nand %c,%1\n */
/* 96 */	1,	/* ?mov %c,%0\nor %c,%1\n */
/* 97 */	1,	/* ?mov %c,%0\nxor %c,%1\n */
/* 98 */	1,	/* ?mov %c,%0\nand %c,%1\n */
/* 99 */	1,	/* ?mov %c,%0\nor %c,%1\n */
/* 100 */	1,	/* ?mov %c,%0\nxor %c,%1\n */
/* 101 */	1,	/* inc %1\n */
/* 102 */	1,	/* inc %1\n */
/* 103 */	1,	/* inc %1\n */
/* 104 */	1,	/* dec %1\n */
/* 105 */	1,	/* dec %1\n */
/* 106 */	1,	/* dec %1\n */
/* 107 */	1,	/* add %1,%2\n */
/* 108 */	1,	/* sub %1,%2\n */
/* 109 */	1,	/* add %1,%2\n */
/* 110 */	1,	/* sub %1,%2\n */
/* 111 */	1,	/* and %1,%2\n */
/* 112 */	1,	/* or %1,%2\n */
/* 113 */	1,	/* xor %1,%2\n */
/* 114 */	1,	/* and %1,%2\n */
/* 115 */	1,	/* or %1,%2\n */
/* 116 */	1,	/* xor %1,%2\n */
/* 117 */	1,	/* ?mov %c,%0\nnot %c\n */
/* 118 */	1,	/* ?mov %c,%0\nnot %c\n */
/* 119 */	1,	/* ?mov %c,%0\nneg %c\n */
/* 120 */	1,	/* not %1\n */
/* 121 */	1,	/* not %1\n */
/* 122 */	1,	/* neg %1\n */
/* 123 */	1,	/* ?mov %c,%0\nsal %c,%1\n */
/* 124 */	1,	/* ?mov %c,%0\nshl %c,%1\n */
/* 125 */	1,	/* ?mov %c,%0\nsar %c,%1\n */
/* 126 */	1,	/* ?mov %c,%0\nshr %c,%1\n */
/* 127 */	1,	/* sal %1,%2\n */
/* 128 */	1,	/* shl %1,%2\n */
/* 129 */	1,	/* sar %1,%2\n */
/* 130 */	1,	/* shr %1,%2\n */
/* 131 */	0,	/* %a */
/* 132 */	1,	/* ?mov %c,%0\nmov ecx,%1\nsal %c,cl\n */
/* 133 */	1,	/* ?mov %c,%0\nmov ecx,%1\nshl %c,cl\n */
/* 134 */	1,	/* ?mov %c,%0\nmov ecx,%1\nsar %c,cl\n */
/* 135 */	1,	/* ?mov %c,%0\nmov ecx,%1\nshr %c,cl\n */
/* 136 */	1,	/* ?mov %c,%0\nimul %c,%1\n */
/* 137 */	1,	/* imul %c,%1,%0\n */
/* 138 */	1,	/* mul %1\n */
/* 139 */	1,	/* xor edx,edx\ndiv %1\n */
/* 140 */	1,	/* xor edx,edx\ndiv %1\n */
/* 141 */	1,	/* cdq\nidiv %1\n */
/* 142 */	1,	/* cdq\nidiv %1\n */
/* 143 */	1,	/* mov %c,%0\n */
/* 144 */	1,	/* mov %c,%0\n */
/* 145 */	1,	/* movsx %c,byte ptr %0\n */
/* 146 */	1,	/* movsx %c,word ptr %0\n */
/* 147 */	1,	/* movzx %c,byte ptr %0\n */
/* 148 */	1,	/* movzx %c,word ptr %0\n */
/* 149 */	1,	/* # extend\n */
/* 150 */	1,	/* # extend\n */
/* 151 */	1,	/* # extend\n */
/* 152 */	1,	/* # extend\n */
/* 153 */	1,	/* # truncate\n */
/* 154 */	1,	/* # truncate\n */
/* 155 */	1,	/* # truncate\n */
/* 156 */	1,	/* # truncate\n */
/* 157 */	1,	/* mov byte ptr %0,%1\n */
/* 158 */	1,	/* mov word ptr %0,%1\n */
/* 159 */	1,	/* mov dword ptr %0,%1\n */
/* 160 */	1,	/* mov byte ptr %0,%1\n */
/* 161 */	1,	/* mov word ptr %0,%1\n */
/* 162 */	1,	/* mov dword ptr %0,%1\n */
/* 163 */	1,	/* mov dword ptr %0,%1\n */
/* 164 */	1,	/* push %0\n */
/* 165 */	1,	/* push %0\n */
/* 166 */	1,	/* push %0\n */
/* 167 */	1,	/* mov ecx,%a\nrep movsb\n */
/* 168 */	1,	/* # ARGB\n */
/* 169 */	0,	/* qword ptr %0 */
/* 170 */	0,	/* dword ptr %0 */
/* 171 */	0,	/* dword ptr %0 */
/* 172 */	1,	/* fld %0\n */
/* 173 */	1,	/* fstp qword ptr %0\n */
/* 174 */	1,	/* fstp dword ptr %0\n */
/* 175 */	1,	/* fstp dword ptr %0\n */
/* 176 */	1,	/* sub esp,8\nfstp qword ptr [esp]\n */
/* 177 */	1,	/* sub esp,4\nfstp dword ptr [esp]\n */
/* 178 */	1,	/* fchs\n */
/* 179 */	1,	/* fchs\n */
/* 180 */	0,	/*  %0 */
/* 181 */	0,	/* p st(1),st */
/* 182 */	1,	/* fadd%1\n */
/* 183 */	1,	/* fadd%1\n */
/* 184 */	1,	/* fdiv%1\n */
/* 185 */	1,	/* fdiv%1\n */
/* 186 */	1,	/* fmul%1\n */
/* 187 */	1,	/* fmul%1\n */
/* 188 */	1,	/* fsub%1\n */
/* 189 */	1,	/* fsub%1\n */
/* 190 */	1,	/* # CVFF8\n */
/* 191 */	1,	/* sub esp,4\nfstp dword ptr 0[esp]\nfld dword ptr 0[esp]\nadd esp,4\n */
/* 192 */	1,	/* call __ftol\n */
/* 193 */	1,	/* fild dword ptr %0\n */
/* 194 */	1,	/* push %0\nfild dword ptr 0[esp]\nadd esp,4\n */
/* 195 */	1,	/* push %0\nfild dword ptr 0[esp]\nadd esp,4\n */
/* 196 */	0,	/* %a */
/* 197 */	0,	/* %0 */
/* 198 */	0,	/* %0 */
/* 199 */	1,	/* jmp %0\n */
/* 200 */	1,	/* %a:\n */
/* 201 */	1,	/* cmp %0,%1\nje %a\n */
/* 202 */	1,	/* cmp %0,%1\njge %a\n */
/* 203 */	1,	/* cmp %0,%1\njg %a\n */
/* 204 */	1,	/* cmp %0,%1\njle %a\n */
/* 205 */	1,	/* cmp %0,%1\njl %a\n */
/* 206 */	1,	/* cmp %0,%1\njne %a\n */
/* 207 */	1,	/* cmp %0,%1\njae %a\n */
/* 208 */	1,	/* cmp %0,%1\nja  %a\n */
/* 209 */	1,	/* cmp %0,%1\njbe %a\n */
/* 210 */	1,	/* cmp %0,%1\njb  %a\n */
/* 211 */	1,	/* cmp %0,%1\nje %a\n */
/* 212 */	1,	/* cmp %0,%1\njge %a\n */
/* 213 */	1,	/* cmp %0,%1\njg %a\n */
/* 214 */	1,	/* cmp %0,%1\njle %a\n */
/* 215 */	1,	/* cmp %0,%1\njl %a\n */
/* 216 */	1,	/* cmp %0,%1\njne %a\n */
/* 217 */	1,	/* cmp %0,%1\nje %a\n */
/* 218 */	1,	/* cmp %0,%1\njae %a\n */
/* 219 */	1,	/* cmp %0,%1\nja %a\n */
/* 220 */	1,	/* cmp %0,%1\njbe %a\n */
/* 221 */	1,	/* cmp %0,%1\njb %a\n */
/* 222 */	1,	/* cmp %0,%1\njne %a\n */
/* 223 */	0,	/*  %0 */
/* 224 */	0,	/* p */
/* 225 */	1,	/* fcomp%0\nfstsw ax\nsahf\njp %b\nje %a\n%b:\n */
/* 226 */	1,	/* fcomp%0\nfstsw ax\nsahf\njp %a\njbe %a\n */
/* 227 */	1,	/* fcomp%0\nfstsw ax\nsahf\njp %a\njb %a\n */
/* 228 */	1,	/* fcomp%0\nfstsw ax\nsahf\njp %a\njae %a\n */
/* 229 */	1,	/* fcomp%0\nfstsw ax\nsahf\njp %a\nja %a\n */
/* 230 */	1,	/* fcomp%0\nfstsw ax\nsahf\njp %a\njne %a\n */
/* 231 */	1,	/* fcomp%0\nfstsw ax\nsahf\njp %b\nje %a\n%b:\n */
/* 232 */	1,	/* fcomp%0\nfstsw ax\nsahf\njp %a\njbe %a\n\n */
/* 233 */	1,	/* fcomp%0\nfstsw ax\nsahf\njp %a\njb %a\n */
/* 234 */	1,	/* fcomp%0\nfstsw ax\nsahf\njp %a\njae %a\n\n */
/* 235 */	1,	/* fcomp%0\nfstsw ax\nsahf\njp %a\nja %a\n */
/* 236 */	1,	/* fcomp%0\nfstsw ax\nsahf\njp %a\njne %a\n */
/* 237 */	1,	/* call %0\nadd esp,%a\n */
/* 238 */	1,	/* call %0\nadd esp,%a\n */
/* 239 */	1,	/* call %0\nadd esp,%a\n */
/* 240 */	1,	/* call %0\nadd esp,%a\n */
/* 241 */	1,	/* call %0\nadd esp,%a\n */
/* 242 */	1,	/* call %0\nadd esp,%a\n */
/* 243 */	1,	/* call %0\nadd esp,%a\nfstp\n */
/* 244 */	1,	/* call %0\nadd esp,%a\nfstp\n */
/* 245 */	1,	/* # ret\n */
/* 246 */	1,	/* # ret\n */
/* 247 */	1,	/* # ret\n */
/* 248 */	1,	/* # ret\n */
/* 249 */	1,	/* # ret\n */
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
/* 36 */	"acon: ADDRGP4",
/* 37 */	"acon: con",
/* 38 */	"base: ADDRGP4",
/* 39 */	"base: reg",
/* 40 */	"base: ADDI4(reg,acon)",
/* 41 */	"base: ADDP4(reg,acon)",
/* 42 */	"base: ADDU4(reg,acon)",
/* 43 */	"base: ADDRFP4",
/* 44 */	"base: ADDRLP4",
/* 45 */	"index: reg",
/* 46 */	"index: LSHI4(reg,con1)",
/* 47 */	"index: LSHI4(reg,con2)",
/* 48 */	"index: LSHI4(reg,con3)",
/* 49 */	"con1: CNSTI4",
/* 50 */	"con1: CNSTU4",
/* 51 */	"con2: CNSTI4",
/* 52 */	"con2: CNSTU4",
/* 53 */	"con3: CNSTI4",
/* 54 */	"con3: CNSTU4",
/* 55 */	"index: LSHU4(reg,con1)",
/* 56 */	"index: LSHU4(reg,con2)",
/* 57 */	"index: LSHU4(reg,con3)",
/* 58 */	"addr: base",
/* 59 */	"addr: ADDI4(index,base)",
/* 60 */	"addr: ADDP4(index,base)",
/* 61 */	"addr: ADDU4(index,base)",
/* 62 */	"addr: index",
/* 63 */	"mem: INDIRI1(addr)",
/* 64 */	"mem: INDIRI2(addr)",
/* 65 */	"mem: INDIRI4(addr)",
/* 66 */	"mem: INDIRU1(addr)",
/* 67 */	"mem: INDIRU2(addr)",
/* 68 */	"mem: INDIRU4(addr)",
/* 69 */	"mem: INDIRP4(addr)",
/* 70 */	"rc: reg",
/* 71 */	"rc: con",
/* 72 */	"mr: reg",
/* 73 */	"mr: mem",
/* 74 */	"mrc0: mem",
/* 75 */	"mrc0: rc",
/* 76 */	"mrc1: mem",
/* 77 */	"mrc1: rc",
/* 78 */	"mrc3: mem",
/* 79 */	"mrc3: rc",
/* 80 */	"reg: addr",
/* 81 */	"reg: mrc0",
/* 82 */	"reg: LOADI1(reg)",
/* 83 */	"reg: LOADI2(reg)",
/* 84 */	"reg: LOADI4(reg)",
/* 85 */	"reg: LOADU1(reg)",
/* 86 */	"reg: LOADU2(reg)",
/* 87 */	"reg: LOADU4(reg)",
/* 88 */	"reg: LOADP4(reg)",
/* 89 */	"reg: ADDI4(reg,mrc1)",
/* 90 */	"reg: ADDP4(reg,mrc1)",
/* 91 */	"reg: ADDU4(reg,mrc1)",
/* 92 */	"reg: SUBI4(reg,mrc1)",
/* 93 */	"reg: SUBP4(reg,mrc1)",
/* 94 */	"reg: SUBU4(reg,mrc1)",
/* 95 */	"reg: BANDI4(reg,mrc1)",
/* 96 */	"reg: BORI4(reg,mrc1)",
/* 97 */	"reg: BXORI4(reg,mrc1)",
/* 98 */	"reg: BANDU4(reg,mrc1)",
/* 99 */	"reg: BORU4(reg,mrc1)",
/* 100 */	"reg: BXORU4(reg,mrc1)",
/* 101 */	"stmt: ASGNI4(addr,ADDI4(mem,con1))",
/* 102 */	"stmt: ASGNI4(addr,ADDU4(mem,con1))",
/* 103 */	"stmt: ASGNP4(addr,ADDP4(mem,con1))",
/* 104 */	"stmt: ASGNI4(addr,SUBI4(mem,con1))",
/* 105 */	"stmt: ASGNI4(addr,SUBU4(mem,con1))",
/* 106 */	"stmt: ASGNP4(addr,SUBP4(mem,con1))",
/* 107 */	"stmt: ASGNI4(addr,ADDI4(mem,rc))",
/* 108 */	"stmt: ASGNI4(addr,SUBI4(mem,rc))",
/* 109 */	"stmt: ASGNU4(addr,ADDU4(mem,rc))",
/* 110 */	"stmt: ASGNU4(addr,SUBU4(mem,rc))",
/* 111 */	"stmt: ASGNI4(addr,BANDI4(mem,rc))",
/* 112 */	"stmt: ASGNI4(addr,BORI4(mem,rc))",
/* 113 */	"stmt: ASGNI4(addr,BXORI4(mem,rc))",
/* 114 */	"stmt: ASGNU4(addr,BANDU4(mem,rc))",
/* 115 */	"stmt: ASGNU4(addr,BORU4(mem,rc))",
/* 116 */	"stmt: ASGNU4(addr,BXORU4(mem,rc))",
/* 117 */	"reg: BCOMI4(reg)",
/* 118 */	"reg: BCOMU4(reg)",
/* 119 */	"reg: NEGI4(reg)",
/* 120 */	"stmt: ASGNI4(addr,BCOMI4(mem))",
/* 121 */	"stmt: ASGNU4(addr,BCOMU4(mem))",
/* 122 */	"stmt: ASGNI4(addr,NEGI4(mem))",
/* 123 */	"reg: LSHI4(reg,con5)",
/* 124 */	"reg: LSHU4(reg,con5)",
/* 125 */	"reg: RSHI4(reg,con5)",
/* 126 */	"reg: RSHU4(reg,con5)",
/* 127 */	"stmt: ASGNI4(addr,LSHI4(mem,con5))",
/* 128 */	"stmt: ASGNI4(addr,LSHU4(mem,con5))",
/* 129 */	"stmt: ASGNI4(addr,RSHI4(mem,con5))",
/* 130 */	"stmt: ASGNI4(addr,RSHU4(mem,con5))",
/* 131 */	"con5: CNSTI4",
/* 132 */	"reg: LSHI4(reg,reg)",
/* 133 */	"reg: LSHU4(reg,reg)",
/* 134 */	"reg: RSHI4(reg,reg)",
/* 135 */	"reg: RSHU4(reg,reg)",
/* 136 */	"reg: MULI4(reg,mrc3)",
/* 137 */	"reg: MULI4(con,mr)",
/* 138 */	"reg: MULU4(reg,mr)",
/* 139 */	"reg: DIVU4(reg,reg)",
/* 140 */	"reg: MODU4(reg,reg)",
/* 141 */	"reg: DIVI4(reg,reg)",
/* 142 */	"reg: MODI4(reg,reg)",
/* 143 */	"reg: CVPU4(reg)",
/* 144 */	"reg: CVUP4(reg)",
/* 145 */	"reg: CVII4(INDIRI1(addr))",
/* 146 */	"reg: CVII4(INDIRI2(addr))",
/* 147 */	"reg: CVUU4(INDIRU1(addr))",
/* 148 */	"reg: CVUU4(INDIRU2(addr))",
/* 149 */	"reg: CVII4(reg)",
/* 150 */	"reg: CVIU4(reg)",
/* 151 */	"reg: CVUI4(reg)",
/* 152 */	"reg: CVUU4(reg)",
/* 153 */	"reg: CVII1(reg)",
/* 154 */	"reg: CVII2(reg)",
/* 155 */	"reg: CVUU1(reg)",
/* 156 */	"reg: CVUU2(reg)",
/* 157 */	"stmt: ASGNI1(addr,rc)",
/* 158 */	"stmt: ASGNI2(addr,rc)",
/* 159 */	"stmt: ASGNI4(addr,rc)",
/* 160 */	"stmt: ASGNU1(addr,rc)",
/* 161 */	"stmt: ASGNU2(addr,rc)",
/* 162 */	"stmt: ASGNU4(addr,rc)",
/* 163 */	"stmt: ASGNP4(addr,rc)",
/* 164 */	"stmt: ARGI4(mrc3)",
/* 165 */	"stmt: ARGU4(mrc3)",
/* 166 */	"stmt: ARGP4(mrc3)",
/* 167 */	"stmt: ASGNB(reg,INDIRB(reg))",
/* 168 */	"stmt: ARGB(INDIRB(reg))",
/* 169 */	"memf: INDIRF8(addr)",
/* 170 */	"memf: INDIRF4(addr)",
/* 171 */	"memf: CVFF8(INDIRF4(addr))",
/* 172 */	"reg: memf",
/* 173 */	"stmt: ASGNF8(addr,reg)",
/* 174 */	"stmt: ASGNF4(addr,reg)",
/* 175 */	"stmt: ASGNF4(addr,CVFF4(reg))",
/* 176 */	"stmt: ARGF8(reg)",
/* 177 */	"stmt: ARGF4(reg)",
/* 178 */	"reg: NEGF8(reg)",
/* 179 */	"reg: NEGF4(reg)",
/* 180 */	"flt: memf",
/* 181 */	"flt: reg",
/* 182 */	"reg: ADDF8(reg,flt)",
/* 183 */	"reg: ADDF4(reg,flt)",
/* 184 */	"reg: DIVF8(reg,flt)",
/* 185 */	"reg: DIVF4(reg,flt)",
/* 186 */	"reg: MULF8(reg,flt)",
/* 187 */	"reg: MULF4(reg,flt)",
/* 188 */	"reg: SUBF8(reg,flt)",
/* 189 */	"reg: SUBF4(reg,flt)",
/* 190 */	"reg: CVFF8(reg)",
/* 191 */	"reg: CVFF4(reg)",
/* 192 */	"reg: CVFI4(reg)",
/* 193 */	"reg: CVIF8(INDIRI4(addr))",
/* 194 */	"reg: CVIF4(reg)",
/* 195 */	"reg: CVIF8(reg)",
/* 196 */	"addrj: ADDRGP4",
/* 197 */	"addrj: reg",
/* 198 */	"addrj: mem",
/* 199 */	"stmt: JUMPV(addrj)",
/* 200 */	"stmt: LABELV",
/* 201 */	"stmt: EQI4(mem,rc)",
/* 202 */	"stmt: GEI4(mem,rc)",
/* 203 */	"stmt: GTI4(mem,rc)",
/* 204 */	"stmt: LEI4(mem,rc)",
/* 205 */	"stmt: LTI4(mem,rc)",
/* 206 */	"stmt: NEI4(mem,rc)",
/* 207 */	"stmt: GEU4(mem,rc)",
/* 208 */	"stmt: GTU4(mem,rc)",
/* 209 */	"stmt: LEU4(mem,rc)",
/* 210 */	"stmt: LTU4(mem,rc)",
/* 211 */	"stmt: EQI4(reg,mrc1)",
/* 212 */	"stmt: GEI4(reg,mrc1)",
/* 213 */	"stmt: GTI4(reg,mrc1)",
/* 214 */	"stmt: LEI4(reg,mrc1)",
/* 215 */	"stmt: LTI4(reg,mrc1)",
/* 216 */	"stmt: NEI4(reg,mrc1)",
/* 217 */	"stmt: EQU4(reg,mrc1)",
/* 218 */	"stmt: GEU4(reg,mrc1)",
/* 219 */	"stmt: GTU4(reg,mrc1)",
/* 220 */	"stmt: LEU4(reg,mrc1)",
/* 221 */	"stmt: LTU4(reg,mrc1)",
/* 222 */	"stmt: NEU4(reg,mrc1)",
/* 223 */	"cmpf: memf",
/* 224 */	"cmpf: reg",
/* 225 */	"stmt: EQF8(cmpf,reg)",
/* 226 */	"stmt: GEF8(cmpf,reg)",
/* 227 */	"stmt: GTF8(cmpf,reg)",
/* 228 */	"stmt: LEF8(cmpf,reg)",
/* 229 */	"stmt: LTF8(cmpf,reg)",
/* 230 */	"stmt: NEF8(cmpf,reg)",
/* 231 */	"stmt: EQF4(cmpf,reg)",
/* 232 */	"stmt: GEF4(cmpf,reg)",
/* 233 */	"stmt: GTF4(cmpf,reg)",
/* 234 */	"stmt: LEF4(cmpf,reg)",
/* 235 */	"stmt: LTF4(cmpf,reg)",
/* 236 */	"stmt: NEF4(cmpf,reg)",
/* 237 */	"reg: CALLI4(addrj)",
/* 238 */	"reg: CALLU4(addrj)",
/* 239 */	"reg: CALLP4(addrj)",
/* 240 */	"stmt: CALLV(addrj)",
/* 241 */	"reg: CALLF4(addrj)",
/* 242 */	"reg: CALLF8(addrj)",
/* 243 */	"stmt: CALLF4(addrj)",
/* 244 */	"stmt: CALLF8(addrj)",
/* 245 */	"stmt: RETI4(reg)",
/* 246 */	"stmt: RETU4(reg)",
/* 247 */	"stmt: RETP4(reg)",
/* 248 */	"stmt: RETF4(reg)",
/* 249 */	"stmt: RETF8(reg)",
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
	120,
	121,
	122,
	127,
	128,
	129,
	130,
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
	173,
	174,
	175,
	176,
	177,
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
	225,
	226,
	227,
	228,
	229,
	230,
	231,
	232,
	233,
	234,
	235,
	236,
	240,
	243,
	244,
	245,
	246,
	247,
	248,
	249,
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
	92,
	93,
	94,
	95,
	96,
	97,
	98,
	99,
	100,
	117,
	118,
	119,
	123,
	124,
	125,
	126,
	132,
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
	172,
	178,
	179,
	182,
	183,
	184,
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
	237,
	238,
	239,
	241,
	242,
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

static short _decode_base[] = {
	0,
	38,
	39,
	40,
	41,
	42,
	43,
	44,
};

static short _decode_index[] = {
	0,
	45,
	46,
	47,
	48,
	55,
	56,
	57,
};

static short _decode_con1[] = {
	0,
	49,
	50,
};

static short _decode_con2[] = {
	0,
	51,
	52,
};

static short _decode_con3[] = {
	0,
	53,
	54,
};

static short _decode_addr[] = {
	0,
	58,
	59,
	60,
	61,
	62,
};

static short _decode_mem[] = {
	0,
	63,
	64,
	65,
	66,
	67,
	68,
	69,
};

static short _decode_rc[] = {
	0,
	70,
	71,
};

static short _decode_mr[] = {
	0,
	72,
	73,
};

static short _decode_mrc0[] = {
	0,
	74,
	75,
};

static short _decode_mrc1[] = {
	0,
	76,
	77,
};

static short _decode_mrc3[] = {
	0,
	78,
	79,
};

static short _decode_con5[] = {
	0,
	131,
};

static short _decode_memf[] = {
	0,
	169,
	170,
	171,
};

static short _decode_flt[] = {
	0,
	180,
	181,
};

static short _decode_addrj[] = {
	0,
	196,
	197,
	198,
};

static short _decode_cmpf[] = {
	0,
	223,
	224,
};

static int _rule(void *state, int goalnt) {
	if (goalnt < 1 || goalnt > 21)
		fatal("_rule", "Bad goal nonterminal %d\n", goalnt);
	if (!state)
		return 0;
	switch (goalnt) {
	case _stmt_NT:	return _decode_stmt[((struct _state *)state)->rule._stmt];
	case _reg_NT:	return _decode_reg[((struct _state *)state)->rule._reg];
	case _con_NT:	return _decode_con[((struct _state *)state)->rule._con];
	case _acon_NT:	return _decode_acon[((struct _state *)state)->rule._acon];
	case _base_NT:	return _decode_base[((struct _state *)state)->rule._base];
	case _index_NT:	return _decode_index[((struct _state *)state)->rule._index];
	case _con1_NT:	return _decode_con1[((struct _state *)state)->rule._con1];
	case _con2_NT:	return _decode_con2[((struct _state *)state)->rule._con2];
	case _con3_NT:	return _decode_con3[((struct _state *)state)->rule._con3];
	case _addr_NT:	return _decode_addr[((struct _state *)state)->rule._addr];
	case _mem_NT:	return _decode_mem[((struct _state *)state)->rule._mem];
	case _rc_NT:	return _decode_rc[((struct _state *)state)->rule._rc];
	case _mr_NT:	return _decode_mr[((struct _state *)state)->rule._mr];
	case _mrc0_NT:	return _decode_mrc0[((struct _state *)state)->rule._mrc0];
	case _mrc1_NT:	return _decode_mrc1[((struct _state *)state)->rule._mrc1];
	case _mrc3_NT:	return _decode_mrc3[((struct _state *)state)->rule._mrc3];
	case _con5_NT:	return _decode_con5[((struct _state *)state)->rule._con5];
	case _memf_NT:	return _decode_memf[((struct _state *)state)->rule._memf];
	case _flt_NT:	return _decode_flt[((struct _state *)state)->rule._flt];
	case _addrj_NT:	return _decode_addrj[((struct _state *)state)->rule._addrj];
	case _cmpf_NT:	return _decode_cmpf[((struct _state *)state)->rule._cmpf];
	default:
		fatal("_rule", "Bad goal nonterminal %d\n", goalnt);
		return 0;
	}
}

static void _closure_reg(NODEPTR_TYPE, int);
static void _closure_con(NODEPTR_TYPE, int);
static void _closure_base(NODEPTR_TYPE, int);
static void _closure_index(NODEPTR_TYPE, int);
static void _closure_addr(NODEPTR_TYPE, int);
static void _closure_mem(NODEPTR_TYPE, int);
static void _closure_rc(NODEPTR_TYPE, int);
static void _closure_mrc0(NODEPTR_TYPE, int);
static void _closure_memf(NODEPTR_TYPE, int);

static void _closure_reg(NODEPTR_TYPE a, int c) {
	struct _state *p = STATE_LABEL(a);
	if (c + 0 < p->cost[_cmpf_NT]) {
		p->cost[_cmpf_NT] = c + 0;
		p->rule._cmpf = 2;
	}
	if (c + 2 < p->cost[_addrj_NT]) {
		p->cost[_addrj_NT] = c + 2;
		p->rule._addrj = 2;
	}
	if (c + 0 < p->cost[_flt_NT]) {
		p->cost[_flt_NT] = c + 0;
		p->rule._flt = 2;
	}
	if (c + 0 < p->cost[_mr_NT]) {
		p->cost[_mr_NT] = c + 0;
		p->rule._mr = 1;
	}
	if (c + 0 < p->cost[_rc_NT]) {
		p->cost[_rc_NT] = c + 0;
		p->rule._rc = 1;
		_closure_rc(a, c + 0);
	}
	if (c + 0 < p->cost[_index_NT]) {
		p->cost[_index_NT] = c + 0;
		p->rule._index = 1;
		_closure_index(a, c + 0);
	}
	if (c + 0 < p->cost[_base_NT]) {
		p->cost[_base_NT] = c + 0;
		p->rule._base = 2;
		_closure_base(a, c + 0);
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
		p->rule._rc = 2;
		_closure_rc(a, c + 0);
	}
	if (c + 0 < p->cost[_acon_NT]) {
		p->cost[_acon_NT] = c + 0;
		p->rule._acon = 2;
	}
}

static void _closure_base(NODEPTR_TYPE a, int c) {
	struct _state *p = STATE_LABEL(a);
	if (c + 0 < p->cost[_addr_NT]) {
		p->cost[_addr_NT] = c + 0;
		p->rule._addr = 1;
		_closure_addr(a, c + 0);
	}
}

static void _closure_index(NODEPTR_TYPE a, int c) {
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

static void _closure_mem(NODEPTR_TYPE a, int c) {
	struct _state *p = STATE_LABEL(a);
	if (c + 2 < p->cost[_addrj_NT]) {
		p->cost[_addrj_NT] = c + 2;
		p->rule._addrj = 3;
	}
	if (c + 3 < p->cost[_mrc3_NT]) {
		p->cost[_mrc3_NT] = c + 3;
		p->rule._mrc3 = 1;
	}
	if (c + 1 < p->cost[_mrc1_NT]) {
		p->cost[_mrc1_NT] = c + 1;
		p->rule._mrc1 = 1;
	}
	if (c + 0 < p->cost[_mrc0_NT]) {
		p->cost[_mrc0_NT] = c + 0;
		p->rule._mrc0 = 1;
		_closure_mrc0(a, c + 0);
	}
	if (c + 0 < p->cost[_mr_NT]) {
		p->cost[_mr_NT] = c + 0;
		p->rule._mr = 2;
	}
}

static void _closure_rc(NODEPTR_TYPE a, int c) {
	struct _state *p = STATE_LABEL(a);
	if (c + 0 < p->cost[_mrc3_NT]) {
		p->cost[_mrc3_NT] = c + 0;
		p->rule._mrc3 = 2;
	}
	if (c + 0 < p->cost[_mrc1_NT]) {
		p->cost[_mrc1_NT] = c + 0;
		p->rule._mrc1 = 2;
	}
	if (c + 0 < p->cost[_mrc0_NT]) {
		p->cost[_mrc0_NT] = c + 0;
		p->rule._mrc0 = 2;
		_closure_mrc0(a, c + 0);
	}
}

static void _closure_mrc0(NODEPTR_TYPE a, int c) {
	struct _state *p = STATE_LABEL(a);
	if (c + 1 < p->cost[_reg_NT]) {
		p->cost[_reg_NT] = c + 1;
		p->rule._reg = 14;
		_closure_reg(a, c + 1);
	}
}

static void _closure_memf(NODEPTR_TYPE a, int c) {
	struct _state *p = STATE_LABEL(a);
	if (c + 0 < p->cost[_cmpf_NT]) {
		p->cost[_cmpf_NT] = c + 0;
		p->rule._cmpf = 1;
	}
	if (c + 0 < p->cost[_flt_NT]) {
		p->cost[_flt_NT] = c + 0;
		p->rule._flt = 1;
	}
	if (c + 3 < p->cost[_reg_NT]) {
		p->cost[_reg_NT] = c + 3;
		p->rule._reg = 66;
		_closure_reg(a, c + 3);
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
	p->cost[9] =
	p->cost[10] =
	p->cost[11] =
	p->cost[12] =
	p->cost[13] =
	p->cost[14] =
	p->cost[15] =
	p->cost[16] =
	p->cost[17] =
	p->cost[18] =
	p->cost[19] =
	p->cost[20] =
	p->cost[21] =
		0x7fff;
	switch (OP_LABEL(a)) {
	case 41: /* ARGB */
		_label(LEFT_CHILD(a));
		if (	/* stmt: ARGB(INDIRB(reg)) */
			LEFT_CHILD(a)->op == 73 /* INDIRB */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_reg_NT] + 0;
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 48;
			}
		}
		break;
	case 57: /* ASGNB */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		if (	/* stmt: ASGNB(reg,INDIRB(reg)) */
			RIGHT_CHILD(a)->op == 73 /* INDIRB */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_reg_NT] + 0;
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 47;
			}
		}
		break;
	case 73: /* INDIRB */
		_label(LEFT_CHILD(a));
		break;
	case 216: /* CALLV */
		_label(LEFT_CHILD(a));
		/* stmt: CALLV(addrj) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addrj_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 90;
		}
		break;
	case 217: /* CALLB */
		break;
	case 233: /* LOADB */
		break;
	case 248: /* RETV */
		break;
	case 584: /* JUMPV */
		_label(LEFT_CHILD(a));
		/* stmt: JUMPV(addrj) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addrj_NT] + 3;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 54;
		}
		break;
	case 600: /* LABELV */
		/* stmt: LABELV */
		if (0 + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = 0 + 0;
			p->rule._stmt = 55;
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
		break;
	case 1046: /* CNSTU1 */
		/* con: CNSTU1 */
		if (0 + 0 < p->cost[_con_NT]) {
			p->cost[_con_NT] = 0 + 0;
			p->rule._con = 2;
			_closure_con(a, 0 + 0);
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
		/* stmt: ASGNI1(addr,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 37;
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
		/* stmt: ASGNU1(addr,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 40;
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
				if (q->cost[_base_NT] == 0) {
					p->cost[_base_NT] = 0;
					p->rule._base = q->rule._base;
				}
				if (q->cost[_index_NT] == 0) {
					p->cost[_index_NT] = 0;
					p->rule._index = q->rule._index;
				}
				if (q->cost[_con1_NT] == 0) {
					p->cost[_con1_NT] = 0;
					p->rule._con1 = q->rule._con1;
				}
				if (q->cost[_con2_NT] == 0) {
					p->cost[_con2_NT] = 0;
					p->rule._con2 = q->rule._con2;
				}
				if (q->cost[_con3_NT] == 0) {
					p->cost[_con3_NT] = 0;
					p->rule._con3 = q->rule._con3;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_mem_NT] == 0) {
					p->cost[_mem_NT] = 0;
					p->rule._mem = q->rule._mem;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_mr_NT] == 0) {
					p->cost[_mr_NT] = 0;
					p->rule._mr = q->rule._mr;
				}
				if (q->cost[_mrc0_NT] == 0) {
					p->cost[_mrc0_NT] = 0;
					p->rule._mrc0 = q->rule._mrc0;
				}
				if (q->cost[_mrc1_NT] == 0) {
					p->cost[_mrc1_NT] = 0;
					p->rule._mrc1 = q->rule._mrc1;
				}
				if (q->cost[_mrc3_NT] == 0) {
					p->cost[_mrc3_NT] = 0;
					p->rule._mrc3 = q->rule._mrc3;
				}
				if (q->cost[_con5_NT] == 0) {
					p->cost[_con5_NT] = 0;
					p->rule._con5 = q->rule._con5;
				}
				if (q->cost[_memf_NT] == 0) {
					p->cost[_memf_NT] = 0;
					p->rule._memf = q->rule._memf;
				}
				if (q->cost[_flt_NT] == 0) {
					p->cost[_flt_NT] = 0;
					p->rule._flt = q->rule._flt;
				}
				if (q->cost[_addrj_NT] == 0) {
					p->cost[_addrj_NT] = 0;
					p->rule._addrj = q->rule._addrj;
				}
				if (q->cost[_cmpf_NT] == 0) {
					p->cost[_cmpf_NT] = 0;
					p->rule._cmpf = q->rule._cmpf;
				}
			}
			c = 0;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 1;
				_closure_reg(a, c + 0);
			}
		}
		/* mem: INDIRI1(addr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + 0;
		if (c + 0 < p->cost[_mem_NT]) {
			p->cost[_mem_NT] = c + 0;
			p->rule._mem = 1;
			_closure_mem(a, c + 0);
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
				if (q->cost[_base_NT] == 0) {
					p->cost[_base_NT] = 0;
					p->rule._base = q->rule._base;
				}
				if (q->cost[_index_NT] == 0) {
					p->cost[_index_NT] = 0;
					p->rule._index = q->rule._index;
				}
				if (q->cost[_con1_NT] == 0) {
					p->cost[_con1_NT] = 0;
					p->rule._con1 = q->rule._con1;
				}
				if (q->cost[_con2_NT] == 0) {
					p->cost[_con2_NT] = 0;
					p->rule._con2 = q->rule._con2;
				}
				if (q->cost[_con3_NT] == 0) {
					p->cost[_con3_NT] = 0;
					p->rule._con3 = q->rule._con3;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_mem_NT] == 0) {
					p->cost[_mem_NT] = 0;
					p->rule._mem = q->rule._mem;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_mr_NT] == 0) {
					p->cost[_mr_NT] = 0;
					p->rule._mr = q->rule._mr;
				}
				if (q->cost[_mrc0_NT] == 0) {
					p->cost[_mrc0_NT] = 0;
					p->rule._mrc0 = q->rule._mrc0;
				}
				if (q->cost[_mrc1_NT] == 0) {
					p->cost[_mrc1_NT] = 0;
					p->rule._mrc1 = q->rule._mrc1;
				}
				if (q->cost[_mrc3_NT] == 0) {
					p->cost[_mrc3_NT] = 0;
					p->rule._mrc3 = q->rule._mrc3;
				}
				if (q->cost[_con5_NT] == 0) {
					p->cost[_con5_NT] = 0;
					p->rule._con5 = q->rule._con5;
				}
				if (q->cost[_memf_NT] == 0) {
					p->cost[_memf_NT] = 0;
					p->rule._memf = q->rule._memf;
				}
				if (q->cost[_flt_NT] == 0) {
					p->cost[_flt_NT] = 0;
					p->rule._flt = q->rule._flt;
				}
				if (q->cost[_addrj_NT] == 0) {
					p->cost[_addrj_NT] = 0;
					p->rule._addrj = q->rule._addrj;
				}
				if (q->cost[_cmpf_NT] == 0) {
					p->cost[_cmpf_NT] = 0;
					p->rule._cmpf = q->rule._cmpf;
				}
			}
			c = 0;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 2;
				_closure_reg(a, c + 0);
			}
		}
		/* mem: INDIRU1(addr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + 0;
		if (c + 0 < p->cost[_mem_NT]) {
			p->cost[_mem_NT] = c + 0;
			p->rule._mem = 4;
			_closure_mem(a, c + 0);
		}
		break;
	case 1157: /* CVII1 */
		_label(LEFT_CHILD(a));
		/* reg: CVII1(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 62;
			_closure_reg(a, c + 0);
		}
		break;
	case 1158: /* CVIU1 */
		break;
	case 1205: /* CVUI1 */
		break;
	case 1206: /* CVUU1 */
		_label(LEFT_CHILD(a));
		/* reg: CVUU1(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 64;
			_closure_reg(a, c + 0);
		}
		break;
	case 1253: /* LOADI1 */
		_label(LEFT_CHILD(a));
		/* reg: LOADI1(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 15;
			_closure_reg(a, c + 0);
		}
		break;
	case 1254: /* LOADU1 */
		_label(LEFT_CHILD(a));
		/* reg: LOADU1(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 18;
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
		break;
	case 2070: /* CNSTU2 */
		/* con: CNSTU2 */
		if (0 + 0 < p->cost[_con_NT]) {
			p->cost[_con_NT] = 0 + 0;
			p->rule._con = 4;
			_closure_con(a, 0 + 0);
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
		/* stmt: ASGNI2(addr,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 38;
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
		/* stmt: ASGNU2(addr,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 41;
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
				if (q->cost[_base_NT] == 0) {
					p->cost[_base_NT] = 0;
					p->rule._base = q->rule._base;
				}
				if (q->cost[_index_NT] == 0) {
					p->cost[_index_NT] = 0;
					p->rule._index = q->rule._index;
				}
				if (q->cost[_con1_NT] == 0) {
					p->cost[_con1_NT] = 0;
					p->rule._con1 = q->rule._con1;
				}
				if (q->cost[_con2_NT] == 0) {
					p->cost[_con2_NT] = 0;
					p->rule._con2 = q->rule._con2;
				}
				if (q->cost[_con3_NT] == 0) {
					p->cost[_con3_NT] = 0;
					p->rule._con3 = q->rule._con3;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_mem_NT] == 0) {
					p->cost[_mem_NT] = 0;
					p->rule._mem = q->rule._mem;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_mr_NT] == 0) {
					p->cost[_mr_NT] = 0;
					p->rule._mr = q->rule._mr;
				}
				if (q->cost[_mrc0_NT] == 0) {
					p->cost[_mrc0_NT] = 0;
					p->rule._mrc0 = q->rule._mrc0;
				}
				if (q->cost[_mrc1_NT] == 0) {
					p->cost[_mrc1_NT] = 0;
					p->rule._mrc1 = q->rule._mrc1;
				}
				if (q->cost[_mrc3_NT] == 0) {
					p->cost[_mrc3_NT] = 0;
					p->rule._mrc3 = q->rule._mrc3;
				}
				if (q->cost[_con5_NT] == 0) {
					p->cost[_con5_NT] = 0;
					p->rule._con5 = q->rule._con5;
				}
				if (q->cost[_memf_NT] == 0) {
					p->cost[_memf_NT] = 0;
					p->rule._memf = q->rule._memf;
				}
				if (q->cost[_flt_NT] == 0) {
					p->cost[_flt_NT] = 0;
					p->rule._flt = q->rule._flt;
				}
				if (q->cost[_addrj_NT] == 0) {
					p->cost[_addrj_NT] = 0;
					p->rule._addrj = q->rule._addrj;
				}
				if (q->cost[_cmpf_NT] == 0) {
					p->cost[_cmpf_NT] = 0;
					p->rule._cmpf = q->rule._cmpf;
				}
			}
			c = 0;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 3;
				_closure_reg(a, c + 0);
			}
		}
		/* mem: INDIRI2(addr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + 0;
		if (c + 0 < p->cost[_mem_NT]) {
			p->cost[_mem_NT] = c + 0;
			p->rule._mem = 2;
			_closure_mem(a, c + 0);
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
				if (q->cost[_base_NT] == 0) {
					p->cost[_base_NT] = 0;
					p->rule._base = q->rule._base;
				}
				if (q->cost[_index_NT] == 0) {
					p->cost[_index_NT] = 0;
					p->rule._index = q->rule._index;
				}
				if (q->cost[_con1_NT] == 0) {
					p->cost[_con1_NT] = 0;
					p->rule._con1 = q->rule._con1;
				}
				if (q->cost[_con2_NT] == 0) {
					p->cost[_con2_NT] = 0;
					p->rule._con2 = q->rule._con2;
				}
				if (q->cost[_con3_NT] == 0) {
					p->cost[_con3_NT] = 0;
					p->rule._con3 = q->rule._con3;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_mem_NT] == 0) {
					p->cost[_mem_NT] = 0;
					p->rule._mem = q->rule._mem;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_mr_NT] == 0) {
					p->cost[_mr_NT] = 0;
					p->rule._mr = q->rule._mr;
				}
				if (q->cost[_mrc0_NT] == 0) {
					p->cost[_mrc0_NT] = 0;
					p->rule._mrc0 = q->rule._mrc0;
				}
				if (q->cost[_mrc1_NT] == 0) {
					p->cost[_mrc1_NT] = 0;
					p->rule._mrc1 = q->rule._mrc1;
				}
				if (q->cost[_mrc3_NT] == 0) {
					p->cost[_mrc3_NT] = 0;
					p->rule._mrc3 = q->rule._mrc3;
				}
				if (q->cost[_con5_NT] == 0) {
					p->cost[_con5_NT] = 0;
					p->rule._con5 = q->rule._con5;
				}
				if (q->cost[_memf_NT] == 0) {
					p->cost[_memf_NT] = 0;
					p->rule._memf = q->rule._memf;
				}
				if (q->cost[_flt_NT] == 0) {
					p->cost[_flt_NT] = 0;
					p->rule._flt = q->rule._flt;
				}
				if (q->cost[_addrj_NT] == 0) {
					p->cost[_addrj_NT] = 0;
					p->rule._addrj = q->rule._addrj;
				}
				if (q->cost[_cmpf_NT] == 0) {
					p->cost[_cmpf_NT] = 0;
					p->rule._cmpf = q->rule._cmpf;
				}
			}
			c = 0;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 4;
				_closure_reg(a, c + 0);
			}
		}
		/* mem: INDIRU2(addr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + 0;
		if (c + 0 < p->cost[_mem_NT]) {
			p->cost[_mem_NT] = c + 0;
			p->rule._mem = 5;
			_closure_mem(a, c + 0);
		}
		break;
	case 2181: /* CVII2 */
		_label(LEFT_CHILD(a));
		/* reg: CVII2(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 63;
			_closure_reg(a, c + 0);
		}
		break;
	case 2182: /* CVIU2 */
		break;
	case 2229: /* CVUI2 */
		break;
	case 2230: /* CVUU2 */
		_label(LEFT_CHILD(a));
		/* reg: CVUU2(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 65;
			_closure_reg(a, c + 0);
		}
		break;
	case 2277: /* LOADI2 */
		_label(LEFT_CHILD(a));
		/* reg: LOADI2(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 16;
			_closure_reg(a, c + 0);
		}
		break;
	case 2278: /* LOADU2 */
		_label(LEFT_CHILD(a));
		/* reg: LOADU2(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 19;
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
		/* con1: CNSTI4 */
		c = (range(a, 1, 1));
		if (c + 0 < p->cost[_con1_NT]) {
			p->cost[_con1_NT] = c + 0;
			p->rule._con1 = 1;
		}
		/* con2: CNSTI4 */
		c = (range(a, 2, 2));
		if (c + 0 < p->cost[_con2_NT]) {
			p->cost[_con2_NT] = c + 0;
			p->rule._con2 = 1;
		}
		/* con3: CNSTI4 */
		c = (range(a, 3, 3));
		if (c + 0 < p->cost[_con3_NT]) {
			p->cost[_con3_NT] = c + 0;
			p->rule._con3 = 1;
		}
		/* con5: CNSTI4 */
		c = (range(a, 0, 31));
		if (c + 0 < p->cost[_con5_NT]) {
			p->cost[_con5_NT] = c + 0;
			p->rule._con5 = 1;
		}
		break;
	case 4118: /* CNSTU4 */
		/* con: CNSTU4 */
		if (0 + 0 < p->cost[_con_NT]) {
			p->cost[_con_NT] = 0 + 0;
			p->rule._con = 6;
			_closure_con(a, 0 + 0);
		}
		/* con1: CNSTU4 */
		c = (range(a, 1, 1));
		if (c + 0 < p->cost[_con1_NT]) {
			p->cost[_con1_NT] = c + 0;
			p->rule._con1 = 2;
		}
		/* con2: CNSTU4 */
		c = (range(a, 2, 2));
		if (c + 0 < p->cost[_con2_NT]) {
			p->cost[_con2_NT] = c + 0;
			p->rule._con2 = 2;
		}
		/* con3: CNSTU4 */
		c = (range(a, 3, 3));
		if (c + 0 < p->cost[_con3_NT]) {
			p->cost[_con3_NT] = c + 0;
			p->rule._con3 = 2;
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
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 53;
		}
		break;
	case 4133: /* ARGI4 */
		_label(LEFT_CHILD(a));
		/* stmt: ARGI4(mrc3) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_mrc3_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 44;
		}
		break;
	case 4134: /* ARGU4 */
		_label(LEFT_CHILD(a));
		/* stmt: ARGU4(mrc3) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_mrc3_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 45;
		}
		break;
	case 4135: /* ARGP4 */
		_label(LEFT_CHILD(a));
		/* stmt: ARGP4(mrc3) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_mrc3_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 46;
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
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 7;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 50;
		}
		if (	/* stmt: ASGNF4(addr,CVFF4(reg)) */
			RIGHT_CHILD(a)->op == 4209 /* CVFF4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_reg_NT] + 7;
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 51;
			}
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
		if (	/* stmt: ASGNI4(addr,ADDI4(mem,con1)) */
			RIGHT_CHILD(a)->op == 4405 /* ADDI4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_con1_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 14;
			}
		}
		if (	/* stmt: ASGNI4(addr,ADDU4(mem,con1)) */
			RIGHT_CHILD(a)->op == 4406 /* ADDU4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_con1_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 15;
			}
		}
		if (	/* stmt: ASGNI4(addr,SUBI4(mem,con1)) */
			RIGHT_CHILD(a)->op == 4421 /* SUBI4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_con1_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 17;
			}
		}
		if (	/* stmt: ASGNI4(addr,SUBU4(mem,con1)) */
			RIGHT_CHILD(a)->op == 4422 /* SUBU4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_con1_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 18;
			}
		}
		if (	/* stmt: ASGNI4(addr,ADDI4(mem,rc)) */
			RIGHT_CHILD(a)->op == 4405 /* ADDI4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_rc_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 20;
			}
		}
		if (	/* stmt: ASGNI4(addr,SUBI4(mem,rc)) */
			RIGHT_CHILD(a)->op == 4421 /* SUBI4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_rc_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 21;
			}
		}
		if (	/* stmt: ASGNI4(addr,BANDI4(mem,rc)) */
			RIGHT_CHILD(a)->op == 4485 /* BANDI4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_rc_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 24;
			}
		}
		if (	/* stmt: ASGNI4(addr,BORI4(mem,rc)) */
			RIGHT_CHILD(a)->op == 4517 /* BORI4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_rc_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 25;
			}
		}
		if (	/* stmt: ASGNI4(addr,BXORI4(mem,rc)) */
			RIGHT_CHILD(a)->op == 4533 /* BXORI4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_rc_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 26;
			}
		}
		if (	/* stmt: ASGNI4(addr,BCOMI4(mem)) */
			RIGHT_CHILD(a)->op == 4501 /* BCOMI4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 30;
			}
		}
		if (	/* stmt: ASGNI4(addr,NEGI4(mem)) */
			RIGHT_CHILD(a)->op == 4293 /* NEGI4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 32;
			}
		}
		if (	/* stmt: ASGNI4(addr,LSHI4(mem,con5)) */
			RIGHT_CHILD(a)->op == 4437 /* LSHI4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_con5_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 33;
			}
		}
		if (	/* stmt: ASGNI4(addr,LSHU4(mem,con5)) */
			RIGHT_CHILD(a)->op == 4438 /* LSHU4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_con5_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 34;
			}
		}
		if (	/* stmt: ASGNI4(addr,RSHI4(mem,con5)) */
			RIGHT_CHILD(a)->op == 4469 /* RSHI4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_con5_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 35;
			}
		}
		if (	/* stmt: ASGNI4(addr,RSHU4(mem,con5)) */
			RIGHT_CHILD(a)->op == 4470 /* RSHU4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_con5_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 36;
			}
		}
		/* stmt: ASGNI4(addr,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 39;
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
		if (	/* stmt: ASGNU4(addr,ADDU4(mem,rc)) */
			RIGHT_CHILD(a)->op == 4406 /* ADDU4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_rc_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 22;
			}
		}
		if (	/* stmt: ASGNU4(addr,SUBU4(mem,rc)) */
			RIGHT_CHILD(a)->op == 4422 /* SUBU4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_rc_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 23;
			}
		}
		if (	/* stmt: ASGNU4(addr,BANDU4(mem,rc)) */
			RIGHT_CHILD(a)->op == 4486 /* BANDU4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_rc_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 27;
			}
		}
		if (	/* stmt: ASGNU4(addr,BORU4(mem,rc)) */
			RIGHT_CHILD(a)->op == 4518 /* BORU4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_rc_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 28;
			}
		}
		if (	/* stmt: ASGNU4(addr,BXORU4(mem,rc)) */
			RIGHT_CHILD(a)->op == 4534 /* BXORU4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_rc_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 29;
			}
		}
		if (	/* stmt: ASGNU4(addr,BCOMU4(mem)) */
			RIGHT_CHILD(a)->op == 4502 /* BCOMU4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 31;
			}
		}
		/* stmt: ASGNU4(addr,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 42;
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
		if (	/* stmt: ASGNP4(addr,ADDP4(mem,con1)) */
			RIGHT_CHILD(a)->op == 4407 /* ADDP4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_con1_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 16;
			}
		}
		if (	/* stmt: ASGNP4(addr,SUBP4(mem,con1)) */
			RIGHT_CHILD(a)->op == 4423 /* SUBP4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_con1_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 19;
			}
		}
		/* stmt: ASGNP4(addr,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 43;
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
				if (q->cost[_base_NT] == 0) {
					p->cost[_base_NT] = 0;
					p->rule._base = q->rule._base;
				}
				if (q->cost[_index_NT] == 0) {
					p->cost[_index_NT] = 0;
					p->rule._index = q->rule._index;
				}
				if (q->cost[_con1_NT] == 0) {
					p->cost[_con1_NT] = 0;
					p->rule._con1 = q->rule._con1;
				}
				if (q->cost[_con2_NT] == 0) {
					p->cost[_con2_NT] = 0;
					p->rule._con2 = q->rule._con2;
				}
				if (q->cost[_con3_NT] == 0) {
					p->cost[_con3_NT] = 0;
					p->rule._con3 = q->rule._con3;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_mem_NT] == 0) {
					p->cost[_mem_NT] = 0;
					p->rule._mem = q->rule._mem;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_mr_NT] == 0) {
					p->cost[_mr_NT] = 0;
					p->rule._mr = q->rule._mr;
				}
				if (q->cost[_mrc0_NT] == 0) {
					p->cost[_mrc0_NT] = 0;
					p->rule._mrc0 = q->rule._mrc0;
				}
				if (q->cost[_mrc1_NT] == 0) {
					p->cost[_mrc1_NT] = 0;
					p->rule._mrc1 = q->rule._mrc1;
				}
				if (q->cost[_mrc3_NT] == 0) {
					p->cost[_mrc3_NT] = 0;
					p->rule._mrc3 = q->rule._mrc3;
				}
				if (q->cost[_con5_NT] == 0) {
					p->cost[_con5_NT] = 0;
					p->rule._con5 = q->rule._con5;
				}
				if (q->cost[_memf_NT] == 0) {
					p->cost[_memf_NT] = 0;
					p->rule._memf = q->rule._memf;
				}
				if (q->cost[_flt_NT] == 0) {
					p->cost[_flt_NT] = 0;
					p->rule._flt = q->rule._flt;
				}
				if (q->cost[_addrj_NT] == 0) {
					p->cost[_addrj_NT] = 0;
					p->rule._addrj = q->rule._addrj;
				}
				if (q->cost[_cmpf_NT] == 0) {
					p->cost[_cmpf_NT] = 0;
					p->rule._cmpf = q->rule._cmpf;
				}
			}
			c = 0;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 5;
				_closure_reg(a, c + 0);
			}
		}
		/* memf: INDIRF4(addr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + 0;
		if (c + 0 < p->cost[_memf_NT]) {
			p->cost[_memf_NT] = c + 0;
			p->rule._memf = 2;
			_closure_memf(a, c + 0);
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
				if (q->cost[_base_NT] == 0) {
					p->cost[_base_NT] = 0;
					p->rule._base = q->rule._base;
				}
				if (q->cost[_index_NT] == 0) {
					p->cost[_index_NT] = 0;
					p->rule._index = q->rule._index;
				}
				if (q->cost[_con1_NT] == 0) {
					p->cost[_con1_NT] = 0;
					p->rule._con1 = q->rule._con1;
				}
				if (q->cost[_con2_NT] == 0) {
					p->cost[_con2_NT] = 0;
					p->rule._con2 = q->rule._con2;
				}
				if (q->cost[_con3_NT] == 0) {
					p->cost[_con3_NT] = 0;
					p->rule._con3 = q->rule._con3;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_mem_NT] == 0) {
					p->cost[_mem_NT] = 0;
					p->rule._mem = q->rule._mem;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_mr_NT] == 0) {
					p->cost[_mr_NT] = 0;
					p->rule._mr = q->rule._mr;
				}
				if (q->cost[_mrc0_NT] == 0) {
					p->cost[_mrc0_NT] = 0;
					p->rule._mrc0 = q->rule._mrc0;
				}
				if (q->cost[_mrc1_NT] == 0) {
					p->cost[_mrc1_NT] = 0;
					p->rule._mrc1 = q->rule._mrc1;
				}
				if (q->cost[_mrc3_NT] == 0) {
					p->cost[_mrc3_NT] = 0;
					p->rule._mrc3 = q->rule._mrc3;
				}
				if (q->cost[_con5_NT] == 0) {
					p->cost[_con5_NT] = 0;
					p->rule._con5 = q->rule._con5;
				}
				if (q->cost[_memf_NT] == 0) {
					p->cost[_memf_NT] = 0;
					p->rule._memf = q->rule._memf;
				}
				if (q->cost[_flt_NT] == 0) {
					p->cost[_flt_NT] = 0;
					p->rule._flt = q->rule._flt;
				}
				if (q->cost[_addrj_NT] == 0) {
					p->cost[_addrj_NT] = 0;
					p->rule._addrj = q->rule._addrj;
				}
				if (q->cost[_cmpf_NT] == 0) {
					p->cost[_cmpf_NT] = 0;
					p->rule._cmpf = q->rule._cmpf;
				}
			}
			c = 0;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 6;
				_closure_reg(a, c + 0);
			}
		}
		/* mem: INDIRI4(addr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + 0;
		if (c + 0 < p->cost[_mem_NT]) {
			p->cost[_mem_NT] = c + 0;
			p->rule._mem = 3;
			_closure_mem(a, c + 0);
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
				if (q->cost[_base_NT] == 0) {
					p->cost[_base_NT] = 0;
					p->rule._base = q->rule._base;
				}
				if (q->cost[_index_NT] == 0) {
					p->cost[_index_NT] = 0;
					p->rule._index = q->rule._index;
				}
				if (q->cost[_con1_NT] == 0) {
					p->cost[_con1_NT] = 0;
					p->rule._con1 = q->rule._con1;
				}
				if (q->cost[_con2_NT] == 0) {
					p->cost[_con2_NT] = 0;
					p->rule._con2 = q->rule._con2;
				}
				if (q->cost[_con3_NT] == 0) {
					p->cost[_con3_NT] = 0;
					p->rule._con3 = q->rule._con3;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_mem_NT] == 0) {
					p->cost[_mem_NT] = 0;
					p->rule._mem = q->rule._mem;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_mr_NT] == 0) {
					p->cost[_mr_NT] = 0;
					p->rule._mr = q->rule._mr;
				}
				if (q->cost[_mrc0_NT] == 0) {
					p->cost[_mrc0_NT] = 0;
					p->rule._mrc0 = q->rule._mrc0;
				}
				if (q->cost[_mrc1_NT] == 0) {
					p->cost[_mrc1_NT] = 0;
					p->rule._mrc1 = q->rule._mrc1;
				}
				if (q->cost[_mrc3_NT] == 0) {
					p->cost[_mrc3_NT] = 0;
					p->rule._mrc3 = q->rule._mrc3;
				}
				if (q->cost[_con5_NT] == 0) {
					p->cost[_con5_NT] = 0;
					p->rule._con5 = q->rule._con5;
				}
				if (q->cost[_memf_NT] == 0) {
					p->cost[_memf_NT] = 0;
					p->rule._memf = q->rule._memf;
				}
				if (q->cost[_flt_NT] == 0) {
					p->cost[_flt_NT] = 0;
					p->rule._flt = q->rule._flt;
				}
				if (q->cost[_addrj_NT] == 0) {
					p->cost[_addrj_NT] = 0;
					p->rule._addrj = q->rule._addrj;
				}
				if (q->cost[_cmpf_NT] == 0) {
					p->cost[_cmpf_NT] = 0;
					p->rule._cmpf = q->rule._cmpf;
				}
			}
			c = 0;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 8;
				_closure_reg(a, c + 0);
			}
		}
		/* mem: INDIRU4(addr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + 0;
		if (c + 0 < p->cost[_mem_NT]) {
			p->cost[_mem_NT] = c + 0;
			p->rule._mem = 6;
			_closure_mem(a, c + 0);
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
				if (q->cost[_base_NT] == 0) {
					p->cost[_base_NT] = 0;
					p->rule._base = q->rule._base;
				}
				if (q->cost[_index_NT] == 0) {
					p->cost[_index_NT] = 0;
					p->rule._index = q->rule._index;
				}
				if (q->cost[_con1_NT] == 0) {
					p->cost[_con1_NT] = 0;
					p->rule._con1 = q->rule._con1;
				}
				if (q->cost[_con2_NT] == 0) {
					p->cost[_con2_NT] = 0;
					p->rule._con2 = q->rule._con2;
				}
				if (q->cost[_con3_NT] == 0) {
					p->cost[_con3_NT] = 0;
					p->rule._con3 = q->rule._con3;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_mem_NT] == 0) {
					p->cost[_mem_NT] = 0;
					p->rule._mem = q->rule._mem;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_mr_NT] == 0) {
					p->cost[_mr_NT] = 0;
					p->rule._mr = q->rule._mr;
				}
				if (q->cost[_mrc0_NT] == 0) {
					p->cost[_mrc0_NT] = 0;
					p->rule._mrc0 = q->rule._mrc0;
				}
				if (q->cost[_mrc1_NT] == 0) {
					p->cost[_mrc1_NT] = 0;
					p->rule._mrc1 = q->rule._mrc1;
				}
				if (q->cost[_mrc3_NT] == 0) {
					p->cost[_mrc3_NT] = 0;
					p->rule._mrc3 = q->rule._mrc3;
				}
				if (q->cost[_con5_NT] == 0) {
					p->cost[_con5_NT] = 0;
					p->rule._con5 = q->rule._con5;
				}
				if (q->cost[_memf_NT] == 0) {
					p->cost[_memf_NT] = 0;
					p->rule._memf = q->rule._memf;
				}
				if (q->cost[_flt_NT] == 0) {
					p->cost[_flt_NT] = 0;
					p->rule._flt = q->rule._flt;
				}
				if (q->cost[_addrj_NT] == 0) {
					p->cost[_addrj_NT] = 0;
					p->rule._addrj = q->rule._addrj;
				}
				if (q->cost[_cmpf_NT] == 0) {
					p->cost[_cmpf_NT] = 0;
					p->rule._cmpf = q->rule._cmpf;
				}
			}
			c = 0;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 7;
				_closure_reg(a, c + 0);
			}
		}
		/* mem: INDIRP4(addr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + 0;
		if (c + 0 < p->cost[_mem_NT]) {
			p->cost[_mem_NT] = c + 0;
			p->rule._mem = 7;
			_closure_mem(a, c + 0);
		}
		break;
	case 4209: /* CVFF4 */
		_label(LEFT_CHILD(a));
		/* reg: CVFF4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 12;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 78;
			_closure_reg(a, c + 0);
		}
		break;
	case 4213: /* CVFI4 */
		_label(LEFT_CHILD(a));
		/* reg: CVFI4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 31;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 79;
			_closure_reg(a, c + 0);
		}
		break;
	case 4225: /* CVIF4 */
		_label(LEFT_CHILD(a));
		/* reg: CVIF4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 12;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 81;
			_closure_reg(a, c + 0);
		}
		break;
	case 4229: /* CVII4 */
		_label(LEFT_CHILD(a));
		if (	/* reg: CVII4(INDIRI1(addr)) */
			LEFT_CHILD(a)->op == 1093 /* INDIRI1 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_addr_NT] + 3;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 54;
				_closure_reg(a, c + 0);
			}
		}
		if (	/* reg: CVII4(INDIRI2(addr)) */
			LEFT_CHILD(a)->op == 2117 /* INDIRI2 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_addr_NT] + 3;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 55;
				_closure_reg(a, c + 0);
			}
		}
		/* reg: CVII4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 3;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 58;
			_closure_reg(a, c + 0);
		}
		break;
	case 4230: /* CVIU4 */
		_label(LEFT_CHILD(a));
		/* reg: CVIU4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 3;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 59;
			_closure_reg(a, c + 0);
		}
		break;
	case 4246: /* CVPU4 */
		_label(LEFT_CHILD(a));
		/* reg: CVPU4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + (move(a));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 52;
			_closure_reg(a, c + 0);
		}
		break;
	case 4247: /* CVPP4 */
		break;
	case 4277: /* CVUI4 */
		_label(LEFT_CHILD(a));
		/* reg: CVUI4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 3;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 60;
			_closure_reg(a, c + 0);
		}
		break;
	case 4278: /* CVUU4 */
		_label(LEFT_CHILD(a));
		if (	/* reg: CVUU4(INDIRU1(addr)) */
			LEFT_CHILD(a)->op == 1094 /* INDIRU1 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_addr_NT] + 3;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 56;
				_closure_reg(a, c + 0);
			}
		}
		if (	/* reg: CVUU4(INDIRU2(addr)) */
			LEFT_CHILD(a)->op == 2118 /* INDIRU2 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_addr_NT] + 3;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 57;
				_closure_reg(a, c + 0);
			}
		}
		/* reg: CVUU4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 3;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 61;
			_closure_reg(a, c + 0);
		}
		break;
	case 4279: /* CVUP4 */
		_label(LEFT_CHILD(a));
		/* reg: CVUP4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + (move(a));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 53;
			_closure_reg(a, c + 0);
		}
		break;
	case 4289: /* NEGF4 */
		_label(LEFT_CHILD(a));
		/* reg: NEGF4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 68;
			_closure_reg(a, c + 0);
		}
		break;
	case 4293: /* NEGI4 */
		_label(LEFT_CHILD(a));
		/* reg: NEGI4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 36;
			_closure_reg(a, c + 0);
		}
		break;
	case 4305: /* CALLF4 */
		_label(LEFT_CHILD(a));
		/* reg: CALLF4(addrj) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addrj_NT] + 0;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 86;
			_closure_reg(a, c + 0);
		}
		/* stmt: CALLF4(addrj) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addrj_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 91;
		}
		break;
	case 4309: /* CALLI4 */
		_label(LEFT_CHILD(a));
		/* reg: CALLI4(addrj) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addrj_NT] + 0;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 83;
			_closure_reg(a, c + 0);
		}
		break;
	case 4310: /* CALLU4 */
		_label(LEFT_CHILD(a));
		/* reg: CALLU4(addrj) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addrj_NT] + 0;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 84;
			_closure_reg(a, c + 0);
		}
		break;
	case 4311: /* CALLP4 */
		_label(LEFT_CHILD(a));
		/* reg: CALLP4(addrj) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addrj_NT] + 0;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 85;
			_closure_reg(a, c + 0);
		}
		break;
	case 4321: /* LOADF4 */
		break;
	case 4325: /* LOADI4 */
		_label(LEFT_CHILD(a));
		/* reg: LOADI4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + (move(a));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 17;
			_closure_reg(a, c + 0);
		}
		break;
	case 4326: /* LOADU4 */
		_label(LEFT_CHILD(a));
		/* reg: LOADU4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + (move(a));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 20;
			_closure_reg(a, c + 0);
		}
		break;
	case 4327: /* LOADP4 */
		_label(LEFT_CHILD(a));
		/* reg: LOADP4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + (move(a));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 21;
			_closure_reg(a, c + 0);
		}
		break;
	case 4337: /* RETF4 */
		_label(LEFT_CHILD(a));
		/* stmt: RETF4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 96;
		}
		break;
	case 4341: /* RETI4 */
		_label(LEFT_CHILD(a));
		/* stmt: RETI4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 93;
		}
		break;
	case 4342: /* RETU4 */
		_label(LEFT_CHILD(a));
		/* stmt: RETU4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 94;
		}
		break;
	case 4343: /* RETP4 */
		_label(LEFT_CHILD(a));
		/* stmt: RETP4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 95;
		}
		break;
	case 4359: /* ADDRGP4 */
		/* acon: ADDRGP4 */
		if (0 + 0 < p->cost[_acon_NT]) {
			p->cost[_acon_NT] = 0 + 0;
			p->rule._acon = 1;
		}
		/* base: ADDRGP4 */
		if (0 + 0 < p->cost[_base_NT]) {
			p->cost[_base_NT] = 0 + 0;
			p->rule._base = 1;
			_closure_base(a, 0 + 0);
		}
		/* addrj: ADDRGP4 */
		if (0 + 0 < p->cost[_addrj_NT]) {
			p->cost[_addrj_NT] = 0 + 0;
			p->rule._addrj = 1;
		}
		break;
	case 4375: /* ADDRFP4 */
		/* base: ADDRFP4 */
		if (0 + 0 < p->cost[_base_NT]) {
			p->cost[_base_NT] = 0 + 0;
			p->rule._base = 6;
			_closure_base(a, 0 + 0);
		}
		break;
	case 4391: /* ADDRLP4 */
		/* base: ADDRLP4 */
		if (0 + 0 < p->cost[_base_NT]) {
			p->cost[_base_NT] = 0 + 0;
			p->rule._base = 7;
			_closure_base(a, 0 + 0);
		}
		break;
	case 4401: /* ADDF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: ADDF4(reg,flt) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_flt_NT] + 0;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 70;
			_closure_reg(a, c + 0);
		}
		break;
	case 4405: /* ADDI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* base: ADDI4(reg,acon) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_acon_NT] + 0;
		if (c + 0 < p->cost[_base_NT]) {
			p->cost[_base_NT] = c + 0;
			p->rule._base = 3;
			_closure_base(a, c + 0);
		}
		/* addr: ADDI4(index,base) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_index_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_base_NT] + 0;
		if (c + 0 < p->cost[_addr_NT]) {
			p->cost[_addr_NT] = c + 0;
			p->rule._addr = 2;
			_closure_addr(a, c + 0);
		}
		/* reg: ADDI4(reg,mrc1) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc1_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 22;
			_closure_reg(a, c + 0);
		}
		break;
	case 4406: /* ADDU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* base: ADDU4(reg,acon) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_acon_NT] + 0;
		if (c + 0 < p->cost[_base_NT]) {
			p->cost[_base_NT] = c + 0;
			p->rule._base = 5;
			_closure_base(a, c + 0);
		}
		/* addr: ADDU4(index,base) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_index_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_base_NT] + 0;
		if (c + 0 < p->cost[_addr_NT]) {
			p->cost[_addr_NT] = c + 0;
			p->rule._addr = 4;
			_closure_addr(a, c + 0);
		}
		/* reg: ADDU4(reg,mrc1) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc1_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 24;
			_closure_reg(a, c + 0);
		}
		break;
	case 4407: /* ADDP4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* base: ADDP4(reg,acon) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_acon_NT] + 0;
		if (c + 0 < p->cost[_base_NT]) {
			p->cost[_base_NT] = c + 0;
			p->rule._base = 4;
			_closure_base(a, c + 0);
		}
		/* addr: ADDP4(index,base) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_index_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_base_NT] + 0;
		if (c + 0 < p->cost[_addr_NT]) {
			p->cost[_addr_NT] = c + 0;
			p->rule._addr = 3;
			_closure_addr(a, c + 0);
		}
		/* reg: ADDP4(reg,mrc1) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc1_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 23;
			_closure_reg(a, c + 0);
		}
		break;
	case 4417: /* SUBF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: SUBF4(reg,flt) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_flt_NT] + 0;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 76;
			_closure_reg(a, c + 0);
		}
		break;
	case 4421: /* SUBI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: SUBI4(reg,mrc1) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc1_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 25;
			_closure_reg(a, c + 0);
		}
		break;
	case 4422: /* SUBU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: SUBU4(reg,mrc1) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc1_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 27;
			_closure_reg(a, c + 0);
		}
		break;
	case 4423: /* SUBP4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: SUBP4(reg,mrc1) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc1_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 26;
			_closure_reg(a, c + 0);
		}
		break;
	case 4437: /* LSHI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* index: LSHI4(reg,con1) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_con1_NT] + 0;
		if (c + 0 < p->cost[_index_NT]) {
			p->cost[_index_NT] = c + 0;
			p->rule._index = 2;
			_closure_index(a, c + 0);
		}
		/* index: LSHI4(reg,con2) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_con2_NT] + 0;
		if (c + 0 < p->cost[_index_NT]) {
			p->cost[_index_NT] = c + 0;
			p->rule._index = 3;
			_closure_index(a, c + 0);
		}
		/* index: LSHI4(reg,con3) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_con3_NT] + 0;
		if (c + 0 < p->cost[_index_NT]) {
			p->cost[_index_NT] = c + 0;
			p->rule._index = 4;
			_closure_index(a, c + 0);
		}
		/* reg: LSHI4(reg,con5) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_con5_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 37;
			_closure_reg(a, c + 0);
		}
		/* reg: LSHI4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 3;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 41;
			_closure_reg(a, c + 0);
		}
		break;
	case 4438: /* LSHU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* index: LSHU4(reg,con1) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_con1_NT] + 0;
		if (c + 0 < p->cost[_index_NT]) {
			p->cost[_index_NT] = c + 0;
			p->rule._index = 5;
			_closure_index(a, c + 0);
		}
		/* index: LSHU4(reg,con2) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_con2_NT] + 0;
		if (c + 0 < p->cost[_index_NT]) {
			p->cost[_index_NT] = c + 0;
			p->rule._index = 6;
			_closure_index(a, c + 0);
		}
		/* index: LSHU4(reg,con3) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_con3_NT] + 0;
		if (c + 0 < p->cost[_index_NT]) {
			p->cost[_index_NT] = c + 0;
			p->rule._index = 7;
			_closure_index(a, c + 0);
		}
		/* reg: LSHU4(reg,con5) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_con5_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 38;
			_closure_reg(a, c + 0);
		}
		/* reg: LSHU4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 42;
			_closure_reg(a, c + 0);
		}
		break;
	case 4453: /* MODI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: MODI4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 51;
			_closure_reg(a, c + 0);
		}
		break;
	case 4454: /* MODU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: MODU4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 49;
			_closure_reg(a, c + 0);
		}
		break;
	case 4469: /* RSHI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: RSHI4(reg,con5) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_con5_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 39;
			_closure_reg(a, c + 0);
		}
		/* reg: RSHI4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 43;
			_closure_reg(a, c + 0);
		}
		break;
	case 4470: /* RSHU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: RSHU4(reg,con5) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_con5_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 40;
			_closure_reg(a, c + 0);
		}
		/* reg: RSHU4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 44;
			_closure_reg(a, c + 0);
		}
		break;
	case 4485: /* BANDI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: BANDI4(reg,mrc1) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc1_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 28;
			_closure_reg(a, c + 0);
		}
		break;
	case 4486: /* BANDU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: BANDU4(reg,mrc1) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc1_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 31;
			_closure_reg(a, c + 0);
		}
		break;
	case 4501: /* BCOMI4 */
		_label(LEFT_CHILD(a));
		/* reg: BCOMI4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 34;
			_closure_reg(a, c + 0);
		}
		break;
	case 4502: /* BCOMU4 */
		_label(LEFT_CHILD(a));
		/* reg: BCOMU4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 35;
			_closure_reg(a, c + 0);
		}
		break;
	case 4517: /* BORI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: BORI4(reg,mrc1) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc1_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 29;
			_closure_reg(a, c + 0);
		}
		break;
	case 4518: /* BORU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: BORU4(reg,mrc1) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc1_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 32;
			_closure_reg(a, c + 0);
		}
		break;
	case 4533: /* BXORI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: BXORI4(reg,mrc1) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc1_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 30;
			_closure_reg(a, c + 0);
		}
		break;
	case 4534: /* BXORU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: BXORU4(reg,mrc1) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc1_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 33;
			_closure_reg(a, c + 0);
		}
		break;
	case 4545: /* DIVF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: DIVF4(reg,flt) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_flt_NT] + 0;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 72;
			_closure_reg(a, c + 0);
		}
		break;
	case 4549: /* DIVI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: DIVI4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 50;
			_closure_reg(a, c + 0);
		}
		break;
	case 4550: /* DIVU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: DIVU4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 48;
			_closure_reg(a, c + 0);
		}
		break;
	case 4561: /* MULF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: MULF4(reg,flt) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_flt_NT] + 0;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 74;
			_closure_reg(a, c + 0);
		}
		break;
	case 4565: /* MULI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: MULI4(reg,mrc3) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc3_NT] + 14;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 45;
			_closure_reg(a, c + 0);
		}
		/* reg: MULI4(con,mr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_con_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mr_NT] + 13;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 46;
			_closure_reg(a, c + 0);
		}
		break;
	case 4566: /* MULU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: MULU4(reg,mr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mr_NT] + 13;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 47;
			_closure_reg(a, c + 0);
		}
		break;
	case 4577: /* EQF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: EQF4(cmpf,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_cmpf_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 84;
		}
		break;
	case 4581: /* EQI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: EQI4(mem,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_mem_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 5;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 56;
		}
		/* stmt: EQI4(reg,mrc1) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc1_NT] + 4;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 66;
		}
		break;
	case 4582: /* EQU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: EQU4(reg,mrc1) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc1_NT] + 4;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 72;
		}
		break;
	case 4593: /* GEF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GEF4(cmpf,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_cmpf_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 85;
		}
		break;
	case 4597: /* GEI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GEI4(mem,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_mem_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 5;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 57;
		}
		/* stmt: GEI4(reg,mrc1) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc1_NT] + 4;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 67;
		}
		break;
	case 4598: /* GEU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GEU4(mem,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_mem_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 5;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 62;
		}
		/* stmt: GEU4(reg,mrc1) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc1_NT] + 4;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 73;
		}
		break;
	case 4609: /* GTF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GTF4(cmpf,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_cmpf_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 86;
		}
		break;
	case 4613: /* GTI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GTI4(mem,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_mem_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 5;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 58;
		}
		/* stmt: GTI4(reg,mrc1) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc1_NT] + 4;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 68;
		}
		break;
	case 4614: /* GTU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GTU4(mem,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_mem_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 5;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 63;
		}
		/* stmt: GTU4(reg,mrc1) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc1_NT] + 4;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 74;
		}
		break;
	case 4625: /* LEF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LEF4(cmpf,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_cmpf_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 87;
		}
		break;
	case 4629: /* LEI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LEI4(mem,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_mem_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 5;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 59;
		}
		/* stmt: LEI4(reg,mrc1) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc1_NT] + 4;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 69;
		}
		break;
	case 4630: /* LEU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LEU4(mem,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_mem_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 5;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 64;
		}
		/* stmt: LEU4(reg,mrc1) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc1_NT] + 4;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 75;
		}
		break;
	case 4641: /* LTF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LTF4(cmpf,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_cmpf_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 88;
		}
		break;
	case 4645: /* LTI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LTI4(mem,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_mem_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 5;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 60;
		}
		/* stmt: LTI4(reg,mrc1) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc1_NT] + 4;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 70;
		}
		break;
	case 4646: /* LTU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LTU4(mem,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_mem_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 5;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 65;
		}
		/* stmt: LTU4(reg,mrc1) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc1_NT] + 4;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 76;
		}
		break;
	case 4657: /* NEF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: NEF4(cmpf,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_cmpf_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 89;
		}
		break;
	case 4661: /* NEI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: NEI4(mem,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_mem_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 5;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 61;
		}
		/* stmt: NEI4(reg,mrc1) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc1_NT] + 4;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 71;
		}
		break;
	case 4662: /* NEU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: NEU4(reg,mrc1) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc1_NT] + 4;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 77;
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
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 52;
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
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 7;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 49;
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
				if (q->cost[_base_NT] == 0) {
					p->cost[_base_NT] = 0;
					p->rule._base = q->rule._base;
				}
				if (q->cost[_index_NT] == 0) {
					p->cost[_index_NT] = 0;
					p->rule._index = q->rule._index;
				}
				if (q->cost[_con1_NT] == 0) {
					p->cost[_con1_NT] = 0;
					p->rule._con1 = q->rule._con1;
				}
				if (q->cost[_con2_NT] == 0) {
					p->cost[_con2_NT] = 0;
					p->rule._con2 = q->rule._con2;
				}
				if (q->cost[_con3_NT] == 0) {
					p->cost[_con3_NT] = 0;
					p->rule._con3 = q->rule._con3;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_mem_NT] == 0) {
					p->cost[_mem_NT] = 0;
					p->rule._mem = q->rule._mem;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_mr_NT] == 0) {
					p->cost[_mr_NT] = 0;
					p->rule._mr = q->rule._mr;
				}
				if (q->cost[_mrc0_NT] == 0) {
					p->cost[_mrc0_NT] = 0;
					p->rule._mrc0 = q->rule._mrc0;
				}
				if (q->cost[_mrc1_NT] == 0) {
					p->cost[_mrc1_NT] = 0;
					p->rule._mrc1 = q->rule._mrc1;
				}
				if (q->cost[_mrc3_NT] == 0) {
					p->cost[_mrc3_NT] = 0;
					p->rule._mrc3 = q->rule._mrc3;
				}
				if (q->cost[_con5_NT] == 0) {
					p->cost[_con5_NT] = 0;
					p->rule._con5 = q->rule._con5;
				}
				if (q->cost[_memf_NT] == 0) {
					p->cost[_memf_NT] = 0;
					p->rule._memf = q->rule._memf;
				}
				if (q->cost[_flt_NT] == 0) {
					p->cost[_flt_NT] = 0;
					p->rule._flt = q->rule._flt;
				}
				if (q->cost[_addrj_NT] == 0) {
					p->cost[_addrj_NT] = 0;
					p->rule._addrj = q->rule._addrj;
				}
				if (q->cost[_cmpf_NT] == 0) {
					p->cost[_cmpf_NT] = 0;
					p->rule._cmpf = q->rule._cmpf;
				}
			}
			c = 0;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 9;
				_closure_reg(a, c + 0);
			}
		}
		/* memf: INDIRF8(addr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + 0;
		if (c + 0 < p->cost[_memf_NT]) {
			p->cost[_memf_NT] = c + 0;
			p->rule._memf = 1;
			_closure_memf(a, c + 0);
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
				if (q->cost[_base_NT] == 0) {
					p->cost[_base_NT] = 0;
					p->rule._base = q->rule._base;
				}
				if (q->cost[_index_NT] == 0) {
					p->cost[_index_NT] = 0;
					p->rule._index = q->rule._index;
				}
				if (q->cost[_con1_NT] == 0) {
					p->cost[_con1_NT] = 0;
					p->rule._con1 = q->rule._con1;
				}
				if (q->cost[_con2_NT] == 0) {
					p->cost[_con2_NT] = 0;
					p->rule._con2 = q->rule._con2;
				}
				if (q->cost[_con3_NT] == 0) {
					p->cost[_con3_NT] = 0;
					p->rule._con3 = q->rule._con3;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_mem_NT] == 0) {
					p->cost[_mem_NT] = 0;
					p->rule._mem = q->rule._mem;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_mr_NT] == 0) {
					p->cost[_mr_NT] = 0;
					p->rule._mr = q->rule._mr;
				}
				if (q->cost[_mrc0_NT] == 0) {
					p->cost[_mrc0_NT] = 0;
					p->rule._mrc0 = q->rule._mrc0;
				}
				if (q->cost[_mrc1_NT] == 0) {
					p->cost[_mrc1_NT] = 0;
					p->rule._mrc1 = q->rule._mrc1;
				}
				if (q->cost[_mrc3_NT] == 0) {
					p->cost[_mrc3_NT] = 0;
					p->rule._mrc3 = q->rule._mrc3;
				}
				if (q->cost[_con5_NT] == 0) {
					p->cost[_con5_NT] = 0;
					p->rule._con5 = q->rule._con5;
				}
				if (q->cost[_memf_NT] == 0) {
					p->cost[_memf_NT] = 0;
					p->rule._memf = q->rule._memf;
				}
				if (q->cost[_flt_NT] == 0) {
					p->cost[_flt_NT] = 0;
					p->rule._flt = q->rule._flt;
				}
				if (q->cost[_addrj_NT] == 0) {
					p->cost[_addrj_NT] = 0;
					p->rule._addrj = q->rule._addrj;
				}
				if (q->cost[_cmpf_NT] == 0) {
					p->cost[_cmpf_NT] = 0;
					p->rule._cmpf = q->rule._cmpf;
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
				if (q->cost[_base_NT] == 0) {
					p->cost[_base_NT] = 0;
					p->rule._base = q->rule._base;
				}
				if (q->cost[_index_NT] == 0) {
					p->cost[_index_NT] = 0;
					p->rule._index = q->rule._index;
				}
				if (q->cost[_con1_NT] == 0) {
					p->cost[_con1_NT] = 0;
					p->rule._con1 = q->rule._con1;
				}
				if (q->cost[_con2_NT] == 0) {
					p->cost[_con2_NT] = 0;
					p->rule._con2 = q->rule._con2;
				}
				if (q->cost[_con3_NT] == 0) {
					p->cost[_con3_NT] = 0;
					p->rule._con3 = q->rule._con3;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_mem_NT] == 0) {
					p->cost[_mem_NT] = 0;
					p->rule._mem = q->rule._mem;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_mr_NT] == 0) {
					p->cost[_mr_NT] = 0;
					p->rule._mr = q->rule._mr;
				}
				if (q->cost[_mrc0_NT] == 0) {
					p->cost[_mrc0_NT] = 0;
					p->rule._mrc0 = q->rule._mrc0;
				}
				if (q->cost[_mrc1_NT] == 0) {
					p->cost[_mrc1_NT] = 0;
					p->rule._mrc1 = q->rule._mrc1;
				}
				if (q->cost[_mrc3_NT] == 0) {
					p->cost[_mrc3_NT] = 0;
					p->rule._mrc3 = q->rule._mrc3;
				}
				if (q->cost[_con5_NT] == 0) {
					p->cost[_con5_NT] = 0;
					p->rule._con5 = q->rule._con5;
				}
				if (q->cost[_memf_NT] == 0) {
					p->cost[_memf_NT] = 0;
					p->rule._memf = q->rule._memf;
				}
				if (q->cost[_flt_NT] == 0) {
					p->cost[_flt_NT] = 0;
					p->rule._flt = q->rule._flt;
				}
				if (q->cost[_addrj_NT] == 0) {
					p->cost[_addrj_NT] = 0;
					p->rule._addrj = q->rule._addrj;
				}
				if (q->cost[_cmpf_NT] == 0) {
					p->cost[_cmpf_NT] = 0;
					p->rule._cmpf = q->rule._cmpf;
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
				if (q->cost[_base_NT] == 0) {
					p->cost[_base_NT] = 0;
					p->rule._base = q->rule._base;
				}
				if (q->cost[_index_NT] == 0) {
					p->cost[_index_NT] = 0;
					p->rule._index = q->rule._index;
				}
				if (q->cost[_con1_NT] == 0) {
					p->cost[_con1_NT] = 0;
					p->rule._con1 = q->rule._con1;
				}
				if (q->cost[_con2_NT] == 0) {
					p->cost[_con2_NT] = 0;
					p->rule._con2 = q->rule._con2;
				}
				if (q->cost[_con3_NT] == 0) {
					p->cost[_con3_NT] = 0;
					p->rule._con3 = q->rule._con3;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_mem_NT] == 0) {
					p->cost[_mem_NT] = 0;
					p->rule._mem = q->rule._mem;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_mr_NT] == 0) {
					p->cost[_mr_NT] = 0;
					p->rule._mr = q->rule._mr;
				}
				if (q->cost[_mrc0_NT] == 0) {
					p->cost[_mrc0_NT] = 0;
					p->rule._mrc0 = q->rule._mrc0;
				}
				if (q->cost[_mrc1_NT] == 0) {
					p->cost[_mrc1_NT] = 0;
					p->rule._mrc1 = q->rule._mrc1;
				}
				if (q->cost[_mrc3_NT] == 0) {
					p->cost[_mrc3_NT] = 0;
					p->rule._mrc3 = q->rule._mrc3;
				}
				if (q->cost[_con5_NT] == 0) {
					p->cost[_con5_NT] = 0;
					p->rule._con5 = q->rule._con5;
				}
				if (q->cost[_memf_NT] == 0) {
					p->cost[_memf_NT] = 0;
					p->rule._memf = q->rule._memf;
				}
				if (q->cost[_flt_NT] == 0) {
					p->cost[_flt_NT] = 0;
					p->rule._flt = q->rule._flt;
				}
				if (q->cost[_addrj_NT] == 0) {
					p->cost[_addrj_NT] = 0;
					p->rule._addrj = q->rule._addrj;
				}
				if (q->cost[_cmpf_NT] == 0) {
					p->cost[_cmpf_NT] = 0;
					p->rule._cmpf = q->rule._cmpf;
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
		if (	/* memf: CVFF8(INDIRF4(addr)) */
			LEFT_CHILD(a)->op == 4161 /* INDIRF4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_addr_NT] + 0;
			if (c + 0 < p->cost[_memf_NT]) {
				p->cost[_memf_NT] = c + 0;
				p->rule._memf = 3;
				_closure_memf(a, c + 0);
			}
		}
		/* reg: CVFF8(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 77;
			_closure_reg(a, c + 0);
		}
		break;
	case 8309: /* CVFI8 */
		break;
	case 8321: /* CVIF8 */
		_label(LEFT_CHILD(a));
		if (	/* reg: CVIF8(INDIRI4(addr)) */
			LEFT_CHILD(a)->op == 4165 /* INDIRI4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_addr_NT] + 10;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 80;
				_closure_reg(a, c + 0);
			}
		}
		/* reg: CVIF8(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 12;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 82;
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
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 67;
			_closure_reg(a, c + 0);
		}
		break;
	case 8389: /* NEGI8 */
		break;
	case 8401: /* CALLF8 */
		_label(LEFT_CHILD(a));
		/* reg: CALLF8(addrj) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addrj_NT] + 0;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 87;
			_closure_reg(a, c + 0);
		}
		/* stmt: CALLF8(addrj) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addrj_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 92;
		}
		break;
	case 8405: /* CALLI8 */
		break;
	case 8406: /* CALLU8 */
		break;
	case 8407: /* CALLP8 */
		break;
	case 8417: /* LOADF8 */
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
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 97;
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
		/* reg: ADDF8(reg,flt) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_flt_NT] + 0;
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
		/* reg: SUBF8(reg,flt) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_flt_NT] + 0;
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
		/* reg: DIVF8(reg,flt) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_flt_NT] + 0;
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
		/* reg: MULF8(reg,flt) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_flt_NT] + 0;
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
		/* stmt: EQF8(cmpf,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_cmpf_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 78;
		}
		break;
	case 8677: /* EQI8 */
		break;
	case 8678: /* EQU8 */
		break;
	case 8689: /* GEF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GEF8(cmpf,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_cmpf_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 79;
		}
		break;
	case 8693: /* GEI8 */
		break;
	case 8694: /* GEU8 */
		break;
	case 8705: /* GTF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GTF8(cmpf,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_cmpf_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 80;
		}
		break;
	case 8709: /* GTI8 */
		break;
	case 8710: /* GTU8 */
		break;
	case 8721: /* LEF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LEF8(cmpf,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_cmpf_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 81;
		}
		break;
	case 8725: /* LEI8 */
		break;
	case 8726: /* LEU8 */
		break;
	case 8737: /* LTF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LTF8(cmpf,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_cmpf_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 82;
		}
		break;
	case 8741: /* LTI8 */
		break;
	case 8742: /* LTU8 */
		break;
	case 8753: /* NEF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: NEF8(cmpf,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_cmpf_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 83;
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
	case 200: /* stmt: LABELV */
	case 196: /* addrj: ADDRGP4 */
	case 131: /* con5: CNSTI4 */
	case 54: /* con3: CNSTU4 */
	case 53: /* con3: CNSTI4 */
	case 52: /* con2: CNSTU4 */
	case 51: /* con2: CNSTI4 */
	case 50: /* con1: CNSTU4 */
	case 49: /* con1: CNSTI4 */
	case 44: /* base: ADDRLP4 */
	case 43: /* base: ADDRFP4 */
	case 38: /* base: ADDRGP4 */
	case 36: /* acon: ADDRGP4 */
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
	case 224: /* cmpf: reg */
	case 223: /* cmpf: memf */
	case 198: /* addrj: mem */
	case 197: /* addrj: reg */
	case 181: /* flt: reg */
	case 180: /* flt: memf */
	case 172: /* reg: memf */
	case 81: /* reg: mrc0 */
	case 80: /* reg: addr */
	case 79: /* mrc3: rc */
	case 78: /* mrc3: mem */
	case 77: /* mrc1: rc */
	case 76: /* mrc1: mem */
	case 75: /* mrc0: rc */
	case 74: /* mrc0: mem */
	case 73: /* mr: mem */
	case 72: /* mr: reg */
	case 71: /* rc: con */
	case 70: /* rc: reg */
	case 62: /* addr: index */
	case 58: /* addr: base */
	case 45: /* index: reg */
	case 39: /* base: reg */
	case 37: /* acon: con */
	case 35: /* stmt: reg */
		kids[0] = p;
		break;
	case 236: /* stmt: NEF4(cmpf,reg) */
	case 235: /* stmt: LTF4(cmpf,reg) */
	case 234: /* stmt: LEF4(cmpf,reg) */
	case 233: /* stmt: GTF4(cmpf,reg) */
	case 232: /* stmt: GEF4(cmpf,reg) */
	case 231: /* stmt: EQF4(cmpf,reg) */
	case 230: /* stmt: NEF8(cmpf,reg) */
	case 229: /* stmt: LTF8(cmpf,reg) */
	case 228: /* stmt: LEF8(cmpf,reg) */
	case 227: /* stmt: GTF8(cmpf,reg) */
	case 226: /* stmt: GEF8(cmpf,reg) */
	case 225: /* stmt: EQF8(cmpf,reg) */
	case 222: /* stmt: NEU4(reg,mrc1) */
	case 221: /* stmt: LTU4(reg,mrc1) */
	case 220: /* stmt: LEU4(reg,mrc1) */
	case 219: /* stmt: GTU4(reg,mrc1) */
	case 218: /* stmt: GEU4(reg,mrc1) */
	case 217: /* stmt: EQU4(reg,mrc1) */
	case 216: /* stmt: NEI4(reg,mrc1) */
	case 215: /* stmt: LTI4(reg,mrc1) */
	case 214: /* stmt: LEI4(reg,mrc1) */
	case 213: /* stmt: GTI4(reg,mrc1) */
	case 212: /* stmt: GEI4(reg,mrc1) */
	case 211: /* stmt: EQI4(reg,mrc1) */
	case 210: /* stmt: LTU4(mem,rc) */
	case 209: /* stmt: LEU4(mem,rc) */
	case 208: /* stmt: GTU4(mem,rc) */
	case 207: /* stmt: GEU4(mem,rc) */
	case 206: /* stmt: NEI4(mem,rc) */
	case 205: /* stmt: LTI4(mem,rc) */
	case 204: /* stmt: LEI4(mem,rc) */
	case 203: /* stmt: GTI4(mem,rc) */
	case 202: /* stmt: GEI4(mem,rc) */
	case 201: /* stmt: EQI4(mem,rc) */
	case 189: /* reg: SUBF4(reg,flt) */
	case 188: /* reg: SUBF8(reg,flt) */
	case 187: /* reg: MULF4(reg,flt) */
	case 186: /* reg: MULF8(reg,flt) */
	case 185: /* reg: DIVF4(reg,flt) */
	case 184: /* reg: DIVF8(reg,flt) */
	case 183: /* reg: ADDF4(reg,flt) */
	case 182: /* reg: ADDF8(reg,flt) */
	case 174: /* stmt: ASGNF4(addr,reg) */
	case 173: /* stmt: ASGNF8(addr,reg) */
	case 163: /* stmt: ASGNP4(addr,rc) */
	case 162: /* stmt: ASGNU4(addr,rc) */
	case 161: /* stmt: ASGNU2(addr,rc) */
	case 160: /* stmt: ASGNU1(addr,rc) */
	case 159: /* stmt: ASGNI4(addr,rc) */
	case 158: /* stmt: ASGNI2(addr,rc) */
	case 157: /* stmt: ASGNI1(addr,rc) */
	case 142: /* reg: MODI4(reg,reg) */
	case 141: /* reg: DIVI4(reg,reg) */
	case 140: /* reg: MODU4(reg,reg) */
	case 139: /* reg: DIVU4(reg,reg) */
	case 138: /* reg: MULU4(reg,mr) */
	case 137: /* reg: MULI4(con,mr) */
	case 136: /* reg: MULI4(reg,mrc3) */
	case 135: /* reg: RSHU4(reg,reg) */
	case 134: /* reg: RSHI4(reg,reg) */
	case 133: /* reg: LSHU4(reg,reg) */
	case 132: /* reg: LSHI4(reg,reg) */
	case 126: /* reg: RSHU4(reg,con5) */
	case 125: /* reg: RSHI4(reg,con5) */
	case 124: /* reg: LSHU4(reg,con5) */
	case 123: /* reg: LSHI4(reg,con5) */
	case 100: /* reg: BXORU4(reg,mrc1) */
	case 99: /* reg: BORU4(reg,mrc1) */
	case 98: /* reg: BANDU4(reg,mrc1) */
	case 97: /* reg: BXORI4(reg,mrc1) */
	case 96: /* reg: BORI4(reg,mrc1) */
	case 95: /* reg: BANDI4(reg,mrc1) */
	case 94: /* reg: SUBU4(reg,mrc1) */
	case 93: /* reg: SUBP4(reg,mrc1) */
	case 92: /* reg: SUBI4(reg,mrc1) */
	case 91: /* reg: ADDU4(reg,mrc1) */
	case 90: /* reg: ADDP4(reg,mrc1) */
	case 89: /* reg: ADDI4(reg,mrc1) */
	case 61: /* addr: ADDU4(index,base) */
	case 60: /* addr: ADDP4(index,base) */
	case 59: /* addr: ADDI4(index,base) */
	case 57: /* index: LSHU4(reg,con3) */
	case 56: /* index: LSHU4(reg,con2) */
	case 55: /* index: LSHU4(reg,con1) */
	case 48: /* index: LSHI4(reg,con3) */
	case 47: /* index: LSHI4(reg,con2) */
	case 46: /* index: LSHI4(reg,con1) */
	case 42: /* base: ADDU4(reg,acon) */
	case 41: /* base: ADDP4(reg,acon) */
	case 40: /* base: ADDI4(reg,acon) */
		kids[0] = LEFT_CHILD(p);
		kids[1] = RIGHT_CHILD(p);
		break;
	case 249: /* stmt: RETF8(reg) */
	case 248: /* stmt: RETF4(reg) */
	case 247: /* stmt: RETP4(reg) */
	case 246: /* stmt: RETU4(reg) */
	case 245: /* stmt: RETI4(reg) */
	case 244: /* stmt: CALLF8(addrj) */
	case 243: /* stmt: CALLF4(addrj) */
	case 242: /* reg: CALLF8(addrj) */
	case 241: /* reg: CALLF4(addrj) */
	case 240: /* stmt: CALLV(addrj) */
	case 239: /* reg: CALLP4(addrj) */
	case 238: /* reg: CALLU4(addrj) */
	case 237: /* reg: CALLI4(addrj) */
	case 199: /* stmt: JUMPV(addrj) */
	case 195: /* reg: CVIF8(reg) */
	case 194: /* reg: CVIF4(reg) */
	case 192: /* reg: CVFI4(reg) */
	case 191: /* reg: CVFF4(reg) */
	case 190: /* reg: CVFF8(reg) */
	case 179: /* reg: NEGF4(reg) */
	case 178: /* reg: NEGF8(reg) */
	case 177: /* stmt: ARGF4(reg) */
	case 176: /* stmt: ARGF8(reg) */
	case 170: /* memf: INDIRF4(addr) */
	case 169: /* memf: INDIRF8(addr) */
	case 166: /* stmt: ARGP4(mrc3) */
	case 165: /* stmt: ARGU4(mrc3) */
	case 164: /* stmt: ARGI4(mrc3) */
	case 156: /* reg: CVUU2(reg) */
	case 155: /* reg: CVUU1(reg) */
	case 154: /* reg: CVII2(reg) */
	case 153: /* reg: CVII1(reg) */
	case 152: /* reg: CVUU4(reg) */
	case 151: /* reg: CVUI4(reg) */
	case 150: /* reg: CVIU4(reg) */
	case 149: /* reg: CVII4(reg) */
	case 144: /* reg: CVUP4(reg) */
	case 143: /* reg: CVPU4(reg) */
	case 119: /* reg: NEGI4(reg) */
	case 118: /* reg: BCOMU4(reg) */
	case 117: /* reg: BCOMI4(reg) */
	case 88: /* reg: LOADP4(reg) */
	case 87: /* reg: LOADU4(reg) */
	case 86: /* reg: LOADU2(reg) */
	case 85: /* reg: LOADU1(reg) */
	case 84: /* reg: LOADI4(reg) */
	case 83: /* reg: LOADI2(reg) */
	case 82: /* reg: LOADI1(reg) */
	case 69: /* mem: INDIRP4(addr) */
	case 68: /* mem: INDIRU4(addr) */
	case 67: /* mem: INDIRU2(addr) */
	case 66: /* mem: INDIRU1(addr) */
	case 65: /* mem: INDIRI4(addr) */
	case 64: /* mem: INDIRI2(addr) */
	case 63: /* mem: INDIRI1(addr) */
		kids[0] = LEFT_CHILD(p);
		break;
	case 130: /* stmt: ASGNI4(addr,RSHU4(mem,con5)) */
	case 129: /* stmt: ASGNI4(addr,RSHI4(mem,con5)) */
	case 128: /* stmt: ASGNI4(addr,LSHU4(mem,con5)) */
	case 127: /* stmt: ASGNI4(addr,LSHI4(mem,con5)) */
	case 116: /* stmt: ASGNU4(addr,BXORU4(mem,rc)) */
	case 115: /* stmt: ASGNU4(addr,BORU4(mem,rc)) */
	case 114: /* stmt: ASGNU4(addr,BANDU4(mem,rc)) */
	case 113: /* stmt: ASGNI4(addr,BXORI4(mem,rc)) */
	case 112: /* stmt: ASGNI4(addr,BORI4(mem,rc)) */
	case 111: /* stmt: ASGNI4(addr,BANDI4(mem,rc)) */
	case 110: /* stmt: ASGNU4(addr,SUBU4(mem,rc)) */
	case 109: /* stmt: ASGNU4(addr,ADDU4(mem,rc)) */
	case 108: /* stmt: ASGNI4(addr,SUBI4(mem,rc)) */
	case 107: /* stmt: ASGNI4(addr,ADDI4(mem,rc)) */
	case 106: /* stmt: ASGNP4(addr,SUBP4(mem,con1)) */
	case 105: /* stmt: ASGNI4(addr,SUBU4(mem,con1)) */
	case 104: /* stmt: ASGNI4(addr,SUBI4(mem,con1)) */
	case 103: /* stmt: ASGNP4(addr,ADDP4(mem,con1)) */
	case 102: /* stmt: ASGNI4(addr,ADDU4(mem,con1)) */
	case 101: /* stmt: ASGNI4(addr,ADDI4(mem,con1)) */
		kids[0] = LEFT_CHILD(p);
		kids[1] = LEFT_CHILD(RIGHT_CHILD(p));
		kids[2] = RIGHT_CHILD(RIGHT_CHILD(p));
		break;
	case 175: /* stmt: ASGNF4(addr,CVFF4(reg)) */
	case 167: /* stmt: ASGNB(reg,INDIRB(reg)) */
	case 122: /* stmt: ASGNI4(addr,NEGI4(mem)) */
	case 121: /* stmt: ASGNU4(addr,BCOMU4(mem)) */
	case 120: /* stmt: ASGNI4(addr,BCOMI4(mem)) */
		kids[0] = LEFT_CHILD(p);
		kids[1] = LEFT_CHILD(RIGHT_CHILD(p));
		break;
	case 193: /* reg: CVIF8(INDIRI4(addr)) */
	case 171: /* memf: CVFF8(INDIRF4(addr)) */
	case 168: /* stmt: ARGB(INDIRB(reg)) */
	case 148: /* reg: CVUU4(INDIRU2(addr)) */
	case 147: /* reg: CVUU4(INDIRU1(addr)) */
	case 146: /* reg: CVII4(INDIRI2(addr)) */
	case 145: /* reg: CVII4(INDIRI1(addr)) */
		kids[0] = LEFT_CHILD(LEFT_CHILD(p));
		break;
	default:
		fatal("_kids", "Bad rule number %d\n", eruleno);
	}
}

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
        intreg[EAX] = mkreg("eax", EAX, 1, IREG);
        intreg[EDX] = mkreg("edx", EDX, 1, IREG);
        intreg[ECX] = mkreg("ecx", ECX, 1, IREG);
        intreg[EBX] = mkreg("ebx", EBX, 1, IREG);
        intreg[ESI] = mkreg("esi", ESI, 1, IREG);
        intreg[EDI] = mkreg("edi", EDI, 1, IREG);

        shortreg[EAX] = mkreg("ax", EAX, 1, IREG);
        shortreg[ECX] = mkreg("cx", ECX, 1, IREG);
        shortreg[EDX] = mkreg("dx", EDX, 1, IREG);
        shortreg[EBX] = mkreg("bx", EBX, 1, IREG);
        shortreg[ESI] = mkreg("si", ESI, 1, IREG);
        shortreg[EDI] = mkreg("di", EDI, 1, IREG);

        charreg[EAX]  = mkreg("al", EAX, 1, IREG);
        charreg[ECX]  = mkreg("cl", ECX, 1, IREG);
        charreg[EDX]  = mkreg("dl", EDX, 1, IREG);
        charreg[EBX]  = mkreg("bl", EBX, 1, IREG);
        for (i = 0; i < 8; i++)
                fltreg[i] = mkreg("%d", i, 0, FREG);
        charregw = mkwildcard(charreg);
        shortregw = mkwildcard(shortreg);
        intregw = mkwildcard(intreg);
        fltregw = mkwildcard(fltreg);

        tmask[IREG] = (1<<EDI) | (1<<ESI) | (1<<EBX)
                    | (1<<EDX) | (1<<ECX) | (1<<EAX);
        vmask[IREG] = 0;
        tmask[FREG] = 0xff;
        vmask[FREG] = 0;
        print(".486\n");
        print(".model flat\n");
        print("extrn __fltused:near\n");
        print("extrn __ftol:near\n");
        cseg = 0;
        quo = mkreg("eax", EAX, 1, IREG);
        quo->x.regnode->mask |= 1<<EDX;
        rem = mkreg("edx", EDX, 1, IREG);
        rem->x.regnode->mask |= 1<<EAX;
}
static Symbol rmap(int opk) {
        switch (optype(opk)) {
        case B: case P:
                return intregw;
        case I: case U:
                if (opsize(opk) == 1)
                        return charregw;
                else if (opsize(opk) == 2)
                        return shortregw;
                else
                        return intregw;
        case F:
                return fltregw;
        default:
                return 0;
        }
}
static void segment(int n) {
        if (n == cseg)
                return;
        if (cseg == CODE || cseg == LIT)
                print("_TEXT ends\n");
        else if (cseg == DATA || cseg == BSS)
                print("_DATA ends\n");
        cseg = n;
        if (cseg == CODE || cseg == LIT)
                print("_TEXT segment\n");
        else if (cseg == DATA || cseg == BSS)
                print("_DATA segment\n");
}
static void progend(void) {
        segment(0);
        print("end\n");
}
static void target(Node p) {
        assert(p);
        switch (specific(p->op)) {
        case MUL+U:
                setreg(p, quo);
                rtarget(p, 0, intreg[EAX]);
                break;
        case DIV+I: case DIV+U:
                setreg(p, quo);
                rtarget(p, 0, quo);
                break;
        case MOD+I: case MOD+U:
                setreg(p, rem);
                rtarget(p, 0, quo);
                break;
        case ASGN+B:
                rtarget(p, 0, intreg[EDI]);
                rtarget(p->kids[1], 0, intreg[ESI]);
                break;
        case ARG+B:
                rtarget(p->kids[0], 0, intreg[ESI]);
                break;
        case CVF+I:
                setreg(p, intreg[EAX]);
                break;
        case CALL+I: case CALL+U: case CALL+P: case CALL+V:
                setreg(p, intreg[EAX]);
                break;
        case RET+I: case RET+U: case RET+P:
                rtarget(p, 0, intreg[EAX]);
                break;
        }
}

static void clobber(Node p) {
        static int nstack = 0;

        assert(p);
        nstack = ckstack(p, nstack);
        switch (specific(p->op)) {
        case RSH+I: case RSH+U: case LSH+I: case LSH+U:
                if (generic(p->kids[1]->op) != CNST
                && !(   generic(p->kids[1]->op) == INDIR
                     && specific(p->kids[1]->kids[0]->op) == VREG+P
                     && p->kids[1]->syms[RX]->u.t.cse
                     && generic(p->kids[1]->syms[RX]->u.t.cse->op) == CNST
)) {
                        spill(1<<ECX, 1, p);
                }
                break;
        case ASGN+B: case ARG+B:
                spill(1<<ECX | 1<<ESI | 1<<EDI, IREG, p);
                break;
        case EQ+F: case LE+F: case GE+F: case LT+F: case GT+F: case NE+F:
                spill(1<<EAX, IREG, p);
                if (specific(p->op) == EQ+F)
                        p->syms[1] = findlabel(genlabel(1));
                break;
        case CALL+F:
                spill(1<<EDX | 1<<EAX | 1<<ECX, IREG, p);
                break;
        case CALL+I: case CALL+U: case CALL+P: case CALL+V:
                spill(1<<EDX | 1<<ECX, IREG, p);
                break;
        }
}
#define isfp(p) (optype((p)->op)==F)

int ckstack(Node p, int n) {
        int i;

        for (i = 0; i < NELEMS(p->x.kids) && p->x.kids[i]; i++)
                if (isfp(p->x.kids[i]))
                        n--;
        if (isfp(p) && p->count > 0)
                n++;
        if (n > 8)
                error("expression too complicated\n");
        debug(fprint(stderr, "(ckstack(%x)=%d)\n", p, n));
        assert(n >= 0);
        return n;
}
int memop(Node p) {
        assert(p);
        assert(generic(p->op) == ASGN);
        assert(p->kids[0]);
        assert(p->kids[1]);
        if (generic(p->kids[1]->kids[0]->op) == INDIR
        && sametree(p->kids[0], p->kids[1]->kids[0]->kids[0]))
                return 3;
        else
                return LBURG_MAX;
}
int sametree(Node p, Node q) {
        return p == NULL && q == NULL
        || p && q && p->op == q->op && p->syms[0] == q->syms[0]
                && sametree(p->kids[0], q->kids[0])
                && sametree(p->kids[1], q->kids[1]);
}
static void emit2(Node p) {
        int op = specific(p->op);
#define preg(f) ((f)[getregnum(p->x.kids[0])]->x.name)

        if (op == CVI+I && opsize(p->op) == 4 && opsize(p->x.kids[0]->op) == 1)
                print("movsx %s,%s\n", p->syms[RX]->x.name
, preg(charreg));
        else if (op == CVI+U && opsize(p->op) == 4 && opsize(p->x.kids[0]->op) == 1)
                print("movsx %s,%s\n", p->syms[RX]->x.name
, preg(charreg));
        else if (op == CVI+I && opsize(p->op) == 4 && opsize(p->x.kids[0]->op) == 2)
                print("movsx %s,%s\n", p->syms[RX]->x.name
, preg(shortreg));
        else if (op == CVI+U && opsize(p->op) == 4 && opsize(p->x.kids[0]->op) == 2)
                print("movsx %s,%s\n", p->syms[RX]->x.name
, preg(shortreg));

        else if (op == CVU+I && opsize(p->op) == 4 && opsize(p->x.kids[0]->op) == 1)
                print("movzx %s,%s\n", p->syms[RX]->x.name
, preg(charreg));
        else if (op == CVU+U && opsize(p->op) == 4 && opsize(p->x.kids[0]->op) == 1)
                print("movzx %s,%s\n", p->syms[RX]->x.name
, preg(charreg));
        else if (op == CVU+I && opsize(p->op) == 4 && opsize(p->x.kids[0]->op) == 2)
                print("movzx %s,%s\n", p->syms[RX]->x.name
, preg(shortreg));
        else if (op == CVU+U && opsize(p->op) == 4 && opsize(p->x.kids[0]->op) == 2)
                print("movzx %s,%s\n", p->syms[RX]->x.name
, preg(shortreg));
        else if (generic(op) == CVI || generic(op) == CVU || generic(op) == LOAD) {
                char *dst = intreg[getregnum(p)]->x.name;
                char *src = preg(intreg);
                assert(opsize(p->op) <= opsize(p->x.kids[0]->op));
                if (dst != src)
                        print("mov %s,%s\n", dst, src);
        }
        else if (op == ARG+B)
                print("sub esp,%d\nmov edi,esp\nmov ecx,%d\nrep movsb\n",
                        roundup(p->syms[0]->u.c.v.i, 4), p->syms[0]->u.c.v.i);
}

static void doarg(Node p) {
        assert(p && p->syms[0]);
        mkactual(4, p->syms[0]->u.c.v.i);
}
static void blkfetch(int k, int off, int reg, int tmp) {}
static void blkstore(int k, int off, int reg, int tmp) {}
static void blkloop(int dreg, int doff, int sreg, int soff,
        int size, int tmps[]) {}
static void local(Symbol p) {
        if (isfloat(p->type))
                p->sclass = AUTO;
        if (askregvar(p, (*IR->x.rmap)(ttob(p->type))) == 0) {
                assert(p->sclass == AUTO);
                offset = roundup(offset + p->type->size,
                        p->type->align < 4 ? 4 : p->type->align);
                p->x.offset = -offset;
                p->x.name = stringd(-offset);
        }
}
static void function(Symbol f, Symbol caller[], Symbol callee[], int n) {
        int i;

        print("%s:\n", f->x.name);
        print("push ebx\n");
        print("push esi\n");
        print("push edi\n");
        print("push ebp\n");
        print("mov ebp,esp\n");
        usedmask[0] = usedmask[1] = 0;
        freemask[0] = freemask[1] = ~(unsigned)0;
        offset = 16 + 4;
        for (i = 0; callee[i]; i++) {
                Symbol p = callee[i];
                Symbol q = caller[i];
                assert(q);
                p->x.offset = q->x.offset = offset;
                p->x.name = q->x.name = stringf("%d", p->x.offset);
                p->sclass = q->sclass = AUTO;
                offset += roundup(q->type->size, 4);
        }
        assert(caller[i] == 0);
        offset = maxoffset = 0;
        gencode(caller, callee);
        framesize = roundup(maxoffset, 4);
        if (framesize >= 4096)
                print("mov eax,%d\ncall __chkstk\n", framesize);
        else if (framesize > 0)
                print("sub esp,%d\n", framesize);
        emitcode();
        print("mov esp,ebp\n");
        print("pop ebp\n");
        print("pop edi\n");
        print("pop esi\n");
        print("pop ebx\n");
        print("ret\n");
        if (framesize >= 4096) {
                int oldseg = cseg;
                segment(0);
                print("extrn __chkstk:near\n");
                segment(oldseg);
        }
}
static void defsymbol(Symbol p) {
        if (p->scope >= LOCAL && p->sclass == STATIC)
                p->x.name = stringf("L%d", genlabel(1));
        else if (p->generated)
                p->x.name = stringf("L%s", p->name);
        else if (p->scope == GLOBAL || p->sclass == EXTERN)
                p->x.name = stringf("_%s", p->name);
        else if (p->scope == CONSTANTS
        && (isint(p->type) || isptr(p->type))
        && p->name[0] == '0' && p->name[1] == 'x')
                p->x.name = stringf("0%sH", &p->name[2]);
        else
                p->x.name = p->name;
}
static void address(Symbol q, Symbol p, long n) {
        if (p->scope == GLOBAL
        || p->sclass == STATIC || p->sclass == EXTERN)
                q->x.name = stringf("%s%s%D",
                        p->x.name, n >= 0 ? "+" : "", n);
        else {
                assert(n <= INT_MAX && n >= INT_MIN);
                q->x.offset = p->x.offset + n;
                q->x.name = stringd(q->x.offset);
        }
}
static void defconst(int suffix, int size, Value v) {
        if (suffix == I && size == 1)
                print("db %d\n",   v.u);
        else if (suffix == I && size == 2)
                print("dw %d\n",   v.i);
        else if (suffix == I && size == 4)
                print("dd %d\n",   v.i);
        else if (suffix == U && size == 1)
                print("db 0%xH\n", (unsigned)((unsigned char)v.u));
        else if (suffix == U && size == 2)
                print("dw 0%xH\n", (unsigned)((unsigned short)v.u));
        else if (suffix == U && size == 4)
                print("dd 0%xH\n", (unsigned)v.u);
        else if (suffix == P && size == 4)
                print("dd 0%xH\n", (unsigned)v.p);
        else if (suffix == F && size == 4) {
                float f = v.d;
                print("dd 0%xH\n", *(unsigned *)&f);
        }
        else if (suffix == F && size == 8) {
                double d = v.d;
                unsigned *p = (unsigned *)&d;
                print("dd 0%xH\ndd 0%xH\n", p[swap], p[!swap]);
        }
        else assert(0);
}
static void defaddress(Symbol p) {
        print("dd %s\n", p->x.name);
}
static void defstring(int n, char *str) {
        char *s;

        for (s = str; s < str + n; s++)
                print("db %d\n", (*s)&0377);
}
static void export(Symbol p) {
        print("public %s\n", p->x.name);
}
static void import(Symbol p) {
        int oldseg = cseg;

        if (p->ref > 0) {
                segment(0);
                print("extrn %s:near\n", p->x.name);
                segment(oldseg);
        }
}
static void global(Symbol p) {
        print("align %d\n",
                p->type->align > 4 ? 4 : p->type->align);
        print("%s label byte\n", p->x.name);
}
static void space(int n) {
        print("db %d dup (0)\n", n);
}
Interface x86IR = {
        1, 1, 0,  /* char */
        2, 2, 0,  /* short */
        4, 4, 0,  /* int */
        4, 4, 0,  /* long */
        4, 4, 0,  /* long long */
        4, 4, 1,  /* float */
        8, 4, 1,  /* double */
        8, 4, 1,  /* long double */
        4, 4, 0,  /* T * */
        0, 1, 0,  /* struct */
        1,        /* little_endian */
        0,        /* mulops_calls */
        0,        /* wants_callb */
        1,        /* wants_argb */
        0,        /* left_to_right */
        0,        /* wants_dag */
        0,        /* unsigned_char */
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
        0, 0, 0, 0, 0, 0, 0,
        {1, rmap,
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
