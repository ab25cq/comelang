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
static int imm(Node);
static void renameregs(void);
extern Interface sparcIR, solarisIR;
static void defsymbol2(Symbol);
static void export2(Symbol);
static void globalend(void);
static void global2(Symbol);
static void segment2(int);
static void progend2(void);

extern char *stabprefix;
extern void stabblock(int, int, Symbol*);
extern void stabend(Coordinate *, Symbol, Coordinate **, Symbol *, Symbol *);
extern void stabfend(Symbol, int);
extern void stabinit(char *, int, char *[]);
extern void stabline(Coordinate *);
extern void stabsym(Symbol);
extern void stabtype(Symbol);
static Symbol greg[32], gregw;
static Symbol *oreg = &greg[8], *ireg = &greg[24];
static Symbol freg[32], freg2[32];
static Symbol fregw, freg2w;

static int regvars;
static int retstruct;

static int pflag = 0;

static int cseg;

/*
generated at Tue Sep 27 04:30:14 2022
by $Id$
*/
static void _kids(NODEPTR_TYPE, int, NODEPTR_TYPE[]);
static void _label(NODEPTR_TYPE);
static int _rule(void*, int);

#define _stmt_NT 1
#define _reg_NT 2
#define _con_NT 3
#define _stk13_NT 4
#define _stk_NT 5
#define _con13_NT 6
#define _base_NT 7
#define _addr_NT 8
#define _addrl_NT 9
#define _spill_NT 10
#define _rc_NT 11
#define _rc5_NT 12
#define _addrg_NT 13
#define _call_NT 14
#define _rel_NT 15

static char *_ntname[] = {
	0,
	"stmt",
	"reg",
	"con",
	"stk13",
	"stk",
	"con13",
	"base",
	"addr",
	"addrl",
	"spill",
	"rc",
	"rc5",
	"addrg",
	"call",
	"rel",
	0
};

struct _state {
	short cost[16];
	struct {
		unsigned int _stmt:6;
		unsigned int _reg:7;
		unsigned int _con:4;
		unsigned int _stk13:2;
		unsigned int _stk:2;
		unsigned int _con13:3;
		unsigned int _base:3;
		unsigned int _addr:3;
		unsigned int _addrl:1;
		unsigned int _spill:1;
		unsigned int _rc:2;
		unsigned int _rc5:2;
		unsigned int _addrg:1;
		unsigned int _call:2;
		unsigned int _rel:4;
	} rule;
};

static short _nts_0[] = { 0 };
static short _nts_1[] = { _reg_NT, 0 };
static short _nts_2[] = { _stk13_NT, 0 };
static short _nts_3[] = { _reg_NT, _con13_NT, 0 };
static short _nts_4[] = { _con13_NT, 0 };
static short _nts_5[] = { _base_NT, 0 };
static short _nts_6[] = { _reg_NT, _reg_NT, 0 };
static short _nts_7[] = { _stk_NT, 0 };
static short _nts_8[] = { _addr_NT, 0 };
static short _nts_9[] = { _addr_NT, _reg_NT, 0 };
static short _nts_10[] = { _addrl_NT, 0 };
static short _nts_11[] = { _addrl_NT, _reg_NT, 0 };
static short _nts_12[] = { _base_NT, _reg_NT, 0 };
static short _nts_13[] = { _spill_NT, _reg_NT, 0 };
static short _nts_14[] = { _con_NT, 0 };
static short _nts_15[] = { _reg_NT, _rc_NT, 0 };
static short _nts_16[] = { _reg_NT, _rc5_NT, 0 };
static short _nts_17[] = { _addrg_NT, 0 };
static short _nts_18[] = { _call_NT, 0 };
static short _nts_19[] = { _call_NT, _reg_NT, 0 };
static short _nts_20[] = { _rc_NT, _reg_NT, 0 };
static short _nts_21[] = { _rel_NT, 0 };

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
	_nts_0,	/* 37 */
	_nts_0,	/* 38 */
	_nts_2,	/* 39 */
	_nts_0,	/* 40 */
	_nts_0,	/* 41 */
	_nts_0,	/* 42 */
	_nts_0,	/* 43 */
	_nts_0,	/* 44 */
	_nts_0,	/* 45 */
	_nts_0,	/* 46 */
	_nts_0,	/* 47 */
	_nts_0,	/* 48 */
	_nts_0,	/* 49 */
	_nts_0,	/* 50 */
	_nts_3,	/* 51 */
	_nts_3,	/* 52 */
	_nts_3,	/* 53 */
	_nts_1,	/* 54 */
	_nts_4,	/* 55 */
	_nts_2,	/* 56 */
	_nts_5,	/* 57 */
	_nts_6,	/* 58 */
	_nts_6,	/* 59 */
	_nts_6,	/* 60 */
	_nts_7,	/* 61 */
	_nts_8,	/* 62 */
	_nts_8,	/* 63 */
	_nts_8,	/* 64 */
	_nts_8,	/* 65 */
	_nts_8,	/* 66 */
	_nts_8,	/* 67 */
	_nts_8,	/* 68 */
	_nts_8,	/* 69 */
	_nts_9,	/* 70 */
	_nts_9,	/* 71 */
	_nts_9,	/* 72 */
	_nts_9,	/* 73 */
	_nts_9,	/* 74 */
	_nts_9,	/* 75 */
	_nts_9,	/* 76 */
	_nts_9,	/* 77 */
	_nts_0,	/* 78 */
	_nts_10,	/* 79 */
	_nts_11,	/* 80 */
	_nts_5,	/* 81 */
	_nts_12,	/* 82 */
	_nts_0,	/* 83 */
	_nts_13,	/* 84 */
	_nts_13,	/* 85 */
	_nts_13,	/* 86 */
	_nts_13,	/* 87 */
	_nts_13,	/* 88 */
	_nts_13,	/* 89 */
	_nts_13,	/* 90 */
	_nts_13,	/* 91 */
	_nts_13,	/* 92 */
	_nts_8,	/* 93 */
	_nts_8,	/* 94 */
	_nts_8,	/* 95 */
	_nts_8,	/* 96 */
	_nts_8,	/* 97 */
	_nts_8,	/* 98 */
	_nts_1,	/* 99 */
	_nts_1,	/* 100 */
	_nts_1,	/* 101 */
	_nts_1,	/* 102 */
	_nts_1,	/* 103 */
	_nts_1,	/* 104 */
	_nts_1,	/* 105 */
	_nts_0,	/* 106 */
	_nts_0,	/* 107 */
	_nts_0,	/* 108 */
	_nts_0,	/* 109 */
	_nts_0,	/* 110 */
	_nts_0,	/* 111 */
	_nts_0,	/* 112 */
	_nts_14,	/* 113 */
	_nts_4,	/* 114 */
	_nts_1,	/* 115 */
	_nts_15,	/* 116 */
	_nts_15,	/* 117 */
	_nts_15,	/* 118 */
	_nts_15,	/* 119 */
	_nts_15,	/* 120 */
	_nts_15,	/* 121 */
	_nts_15,	/* 122 */
	_nts_15,	/* 123 */
	_nts_15,	/* 124 */
	_nts_15,	/* 125 */
	_nts_15,	/* 126 */
	_nts_15,	/* 127 */
	_nts_0,	/* 128 */
	_nts_1,	/* 129 */
	_nts_16,	/* 130 */
	_nts_16,	/* 131 */
	_nts_16,	/* 132 */
	_nts_16,	/* 133 */
	_nts_15,	/* 134 */
	_nts_15,	/* 135 */
	_nts_15,	/* 136 */
	_nts_15,	/* 137 */
	_nts_15,	/* 138 */
	_nts_15,	/* 139 */
	_nts_1,	/* 140 */
	_nts_1,	/* 141 */
	_nts_1,	/* 142 */
	_nts_1,	/* 143 */
	_nts_1,	/* 144 */
	_nts_1,	/* 145 */
	_nts_1,	/* 146 */
	_nts_1,	/* 147 */
	_nts_1,	/* 148 */
	_nts_0,	/* 149 */
	_nts_17,	/* 150 */
	_nts_8,	/* 151 */
	_nts_0,	/* 152 */
	_nts_15,	/* 153 */
	_nts_15,	/* 154 */
	_nts_15,	/* 155 */
	_nts_15,	/* 156 */
	_nts_15,	/* 157 */
	_nts_15,	/* 158 */
	_nts_15,	/* 159 */
	_nts_15,	/* 160 */
	_nts_15,	/* 161 */
	_nts_15,	/* 162 */
	_nts_15,	/* 163 */
	_nts_15,	/* 164 */
	_nts_0,	/* 165 */
	_nts_8,	/* 166 */
	_nts_18,	/* 167 */
	_nts_18,	/* 168 */
	_nts_18,	/* 169 */
	_nts_18,	/* 170 */
	_nts_18,	/* 171 */
	_nts_18,	/* 172 */
	_nts_19,	/* 173 */
	_nts_1,	/* 174 */
	_nts_1,	/* 175 */
	_nts_1,	/* 176 */
	_nts_1,	/* 177 */
	_nts_1,	/* 178 */
	_nts_1,	/* 179 */
	_nts_1,	/* 180 */
	_nts_1,	/* 181 */
	_nts_1,	/* 182 */
	_nts_1,	/* 183 */
	_nts_15,	/* 184 */
	_nts_15,	/* 185 */
	_nts_15,	/* 186 */
	_nts_15,	/* 187 */
	_nts_20,	/* 188 */
	_nts_20,	/* 189 */
	_nts_6,	/* 190 */
	_nts_6,	/* 191 */
	_nts_6,	/* 192 */
	_nts_6,	/* 193 */
	_nts_6,	/* 194 */
	_nts_6,	/* 195 */
	_nts_6,	/* 196 */
	_nts_6,	/* 197 */
	_nts_1,	/* 198 */
	_nts_1,	/* 199 */
	_nts_1,	/* 200 */
	_nts_1,	/* 201 */
	_nts_1,	/* 202 */
	_nts_1,	/* 203 */
	_nts_1,	/* 204 */
	_nts_1,	/* 205 */
	_nts_6,	/* 206 */
	_nts_6,	/* 207 */
	_nts_6,	/* 208 */
	_nts_6,	/* 209 */
	_nts_6,	/* 210 */
	_nts_6,	/* 211 */
	_nts_6,	/* 212 */
	_nts_6,	/* 213 */
	_nts_6,	/* 214 */
	_nts_6,	/* 215 */
	_nts_6,	/* 216 */
	_nts_6,	/* 217 */
	_nts_21,	/* 218 */
	_nts_1,	/* 219 */
	_nts_1,	/* 220 */
	_nts_6,	/* 221 */
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
/* 36 */	"set %a,%%%c\n",	/* reg: ADDRGP4 */
/* 37 */	"%a",	/* stk13: ADDRFP4 */
/* 38 */	"%a",	/* stk13: ADDRLP4 */
/* 39 */	"add %0,%%fp,%%%c\n",	/* reg: stk13 */
/* 40 */	"set %a,%%%c\n",	/* stk: ADDRFP4 */
/* 41 */	"set %a,%%%c\n",	/* stk: ADDRLP4 */
/* 42 */	"set %a,%%%c\nadd %%%c,%%fp,%%%c\n",	/* reg: ADDRFP4 */
/* 43 */	"set %a,%%%c\nadd %%%c,%%fp,%%%c\n",	/* reg: ADDRLP4 */
/* 44 */	"%a",	/* con13: CNSTI1 */
/* 45 */	"%a",	/* con13: CNSTI2 */
/* 46 */	"%a",	/* con13: CNSTI4 */
/* 47 */	"%a",	/* con13: CNSTU1 */
/* 48 */	"%a",	/* con13: CNSTU2 */
/* 49 */	"%a",	/* con13: CNSTU4 */
/* 50 */	"%a",	/* con13: CNSTP4 */
/* 51 */	"%%%0+%1",	/* base: ADDI4(reg,con13) */
/* 52 */	"%%%0+%1",	/* base: ADDP4(reg,con13) */
/* 53 */	"%%%0+%1",	/* base: ADDU4(reg,con13) */
/* 54 */	"%%%0",	/* base: reg */
/* 55 */	"%0",	/* base: con13 */
/* 56 */	"%%fp+%0",	/* base: stk13 */
/* 57 */	"%0",	/* addr: base */
/* 58 */	"%%%0+%%%1",	/* addr: ADDI4(reg,reg) */
/* 59 */	"%%%0+%%%1",	/* addr: ADDP4(reg,reg) */
/* 60 */	"%%%0+%%%1",	/* addr: ADDU4(reg,reg) */
/* 61 */	"%%fp+%%%0",	/* addr: stk */
/* 62 */	"ldsb [%0],%%%c\n",	/* reg: INDIRI1(addr) */
/* 63 */	"ldsh [%0],%%%c\n",	/* reg: INDIRI2(addr) */
/* 64 */	"ld [%0],%%%c\n",	/* reg: INDIRI4(addr) */
/* 65 */	"ldub [%0],%%%c\n",	/* reg: INDIRU1(addr) */
/* 66 */	"lduh [%0],%%%c\n",	/* reg: INDIRU2(addr) */
/* 67 */	"ld [%0],%%%c\n",	/* reg: INDIRU4(addr) */
/* 68 */	"ld [%0],%%%c\n",	/* reg: INDIRP4(addr) */
/* 69 */	"ld [%0],%%f%c\n",	/* reg: INDIRF4(addr) */
/* 70 */	"stb %%%1,[%0]\n",	/* stmt: ASGNI1(addr,reg) */
/* 71 */	"sth %%%1,[%0]\n",	/* stmt: ASGNI2(addr,reg) */
/* 72 */	"st %%%1,[%0]\n",	/* stmt: ASGNI4(addr,reg) */
/* 73 */	"stb %%%1,[%0]\n",	/* stmt: ASGNU1(addr,reg) */
/* 74 */	"sth %%%1,[%0]\n",	/* stmt: ASGNU2(addr,reg) */
/* 75 */	"st %%%1,[%0]\n",	/* stmt: ASGNU4(addr,reg) */
/* 76 */	"st %%%1,[%0]\n",	/* stmt: ASGNP4(addr,reg) */
/* 77 */	"st %%f%1,[%0]\n",	/* stmt: ASGNF4(addr,reg) */
/* 78 */	"%%%fp+%a",	/* addrl: ADDRLP4 */
/* 79 */	"ldd [%0],%%f%c\n",	/* reg: INDIRF8(addrl) */
/* 80 */	"std %%f%1,[%0]\n",	/* stmt: ASGNF8(addrl,reg) */
/* 81 */	"# ld2 [%0],%%f%c\n",	/* reg: INDIRF8(base) */
/* 82 */	"# st2 %%f%1,[%0]\n",	/* stmt: ASGNF8(base,reg) */
/* 83 */	"%a",	/* spill: ADDRLP4 */
/* 84 */	"set %0,%%g1\nstb %%%1,[%%fp+%%g1]\n",	/* stmt: ASGNI1(spill,reg) */
/* 85 */	"set %0,%%g1\nsth %%%1,[%%fp+%%g1]\n",	/* stmt: ASGNI2(spill,reg) */
/* 86 */	"set %0,%%g1\nst %%%1,[%%fp+%%g1]\n",	/* stmt: ASGNI4(spill,reg) */
/* 87 */	"set %0,%%g1\nstb %%%1,[%%fp+%%g1]\n",	/* stmt: ASGNU1(spill,reg) */
/* 88 */	"set %0,%%g1\nsth %%%1,[%%fp+%%g1]\n",	/* stmt: ASGNU2(spill,reg) */
/* 89 */	"set %0,%%g1\nst %%%1,[%%fp+%%g1]\n",	/* stmt: ASGNU4(spill,reg) */
/* 90 */	"set %0,%%g1\nst %%%1,[%%fp+%%g1]\n",	/* stmt: ASGNP4(spill,reg) */
/* 91 */	"set %0,%%g1\nst %%f%1,[%%fp+%%g1]\n",	/* stmt: ASGNF4(spill,reg) */
/* 92 */	"set %0,%%g1\nstd %%f%1,[%%fp+%%g1]\n",	/* stmt: ASGNF8(spill,reg) */
/* 93 */	"ldsb [%0],%%%c\n",	/* reg: CVII4(INDIRI1(addr)) */
/* 94 */	"ldsh [%0],%%%c\n",	/* reg: CVII4(INDIRI2(addr)) */
/* 95 */	"ldub [%0],%%%c\n",	/* reg: CVUU4(INDIRU1(addr)) */
/* 96 */	"lduh [%0],%%%c\n",	/* reg: CVUU4(INDIRU2(addr)) */
/* 97 */	"ldub [%0],%%%c\n",	/* reg: CVUI4(INDIRU1(addr)) */
/* 98 */	"lduh [%0],%%%c\n",	/* reg: CVUI4(INDIRU2(addr)) */
/* 99 */	"mov %%%0,%%%c\n",	/* reg: LOADI1(reg) */
/* 100 */	"mov %%%0,%%%c\n",	/* reg: LOADI2(reg) */
/* 101 */	"mov %%%0,%%%c\n",	/* reg: LOADI4(reg) */
/* 102 */	"mov %%%0,%%%c\n",	/* reg: LOADP4(reg) */
/* 103 */	"mov %%%0,%%%c\n",	/* reg: LOADU1(reg) */
/* 104 */	"mov %%%0,%%%c\n",	/* reg: LOADU2(reg) */
/* 105 */	"mov %%%0,%%%c\n",	/* reg: LOADU4(reg) */
/* 106 */	"# reg\n",	/* reg: CNSTI1 */
/* 107 */	"# reg\n",	/* reg: CNSTI2 */
/* 108 */	"# reg\n",	/* reg: CNSTI4 */
/* 109 */	"# reg\n",	/* reg: CNSTP4 */
/* 110 */	"# reg\n",	/* reg: CNSTU1 */
/* 111 */	"# reg\n",	/* reg: CNSTU2 */
/* 112 */	"# reg\n",	/* reg: CNSTU4 */
/* 113 */	"set %0,%%%c\n",	/* reg: con */
/* 114 */	"%0",	/* rc: con13 */
/* 115 */	"%%%0",	/* rc: reg */
/* 116 */	"add %%%0,%1,%%%c\n",	/* reg: ADDI4(reg,rc) */
/* 117 */	"add %%%0,%1,%%%c\n",	/* reg: ADDP4(reg,rc) */
/* 118 */	"add %%%0,%1,%%%c\n",	/* reg: ADDU4(reg,rc) */
/* 119 */	"and %%%0,%1,%%%c\n",	/* reg: BANDI4(reg,rc) */
/* 120 */	"or %%%0,%1,%%%c\n",	/* reg: BORI4(reg,rc) */
/* 121 */	"xor %%%0,%1,%%%c\n",	/* reg: BXORI4(reg,rc) */
/* 122 */	"and %%%0,%1,%%%c\n",	/* reg: BANDU4(reg,rc) */
/* 123 */	"or %%%0,%1,%%%c\n",	/* reg: BORU4(reg,rc) */
/* 124 */	"xor %%%0,%1,%%%c\n",	/* reg: BXORU4(reg,rc) */
/* 125 */	"sub %%%0,%1,%%%c\n",	/* reg: SUBI4(reg,rc) */
/* 126 */	"sub %%%0,%1,%%%c\n",	/* reg: SUBP4(reg,rc) */
/* 127 */	"sub %%%0,%1,%%%c\n",	/* reg: SUBU4(reg,rc) */
/* 128 */	"%a",	/* rc5: CNSTI4 */
/* 129 */	"%%%0",	/* rc5: reg */
/* 130 */	"sll %%%0,%1,%%%c\n",	/* reg: LSHI4(reg,rc5) */
/* 131 */	"sll %%%0,%1,%%%c\n",	/* reg: LSHU4(reg,rc5) */
/* 132 */	"sra %%%0,%1,%%%c\n",	/* reg: RSHI4(reg,rc5) */
/* 133 */	"srl %%%0,%1,%%%c\n",	/* reg: RSHU4(reg,rc5) */
/* 134 */	"andn %%%0,%1,%%%c\n",	/* reg: BANDI4(reg,BCOMI4(rc)) */
/* 135 */	"orn %%%0,%1,%%%c\n",	/* reg: BORI4(reg,BCOMI4(rc)) */
/* 136 */	"xnor %%%0,%1,%%%c\n",	/* reg: BXORI4(reg,BCOMI4(rc)) */
/* 137 */	"andn %%%0,%1,%%%c\n",	/* reg: BANDU4(reg,BCOMU4(rc)) */
/* 138 */	"orn %%%0,%1,%%%c\n",	/* reg: BORU4(reg,BCOMU4(rc)) */
/* 139 */	"xnor %%%0,%1,%%%c\n",	/* reg: BXORU4(reg,BCOMU4(rc)) */
/* 140 */	"neg %%%0,%%%c\n",	/* reg: NEGI4(reg) */
/* 141 */	"not %%%0,%%%c\n",	/* reg: BCOMI4(reg) */
/* 142 */	"not %%%0,%%%c\n",	/* reg: BCOMU4(reg) */
/* 143 */	"sll %%%0,8*(4-%a),%%%c; sra %%%c,8*(4-%a),%%%c\n",	/* reg: CVII4(reg) */
/* 144 */	"sll %%%0,8*(4-%a),%%%c; srl %%%c,8*(4-%a),%%%c\n",	/* reg: CVUU4(reg) */
/* 145 */	"and %%%0,0xff,%%%c\n",	/* reg: CVUU4(reg) */
/* 146 */	"set 0xffff,%%g1; and %%%0,%%g1,%%%c\n",	/* reg: CVUU4(reg) */
/* 147 */	"and %%%0,0xff,%%%c\n",	/* reg: CVUI4(reg) */
/* 148 */	"set 0xffff,%%g1; and %%%0,%%g1,%%%c\n",	/* reg: CVUI4(reg) */
/* 149 */	"%a",	/* addrg: ADDRGP4 */
/* 150 */	"ba %0; nop\n",	/* stmt: JUMPV(addrg) */
/* 151 */	"jmp %0; nop\n",	/* stmt: JUMPV(addr) */
/* 152 */	"%a:\n",	/* stmt: LABELV */
/* 153 */	"cmp %%%0,%1; be %a; nop\n",	/* stmt: EQI4(reg,rc) */
/* 154 */	"cmp %%%0,%1; be %a; nop\n",	/* stmt: EQU4(reg,rc) */
/* 155 */	"cmp %%%0,%1; bge %a; nop\n",	/* stmt: GEI4(reg,rc) */
/* 156 */	"cmp %%%0,%1; bgeu %a; nop\n",	/* stmt: GEU4(reg,rc) */
/* 157 */	"cmp %%%0,%1; bg %a; nop\n",	/* stmt: GTI4(reg,rc) */
/* 158 */	"cmp %%%0,%1; bgu %a; nop\n",	/* stmt: GTU4(reg,rc) */
/* 159 */	"cmp %%%0,%1; ble %a; nop\n",	/* stmt: LEI4(reg,rc) */
/* 160 */	"cmp %%%0,%1; bleu %a; nop\n",	/* stmt: LEU4(reg,rc) */
/* 161 */	"cmp %%%0,%1; bl %a; nop\n",	/* stmt: LTI4(reg,rc) */
/* 162 */	"cmp %%%0,%1; blu %a; nop\n",	/* stmt: LTU4(reg,rc) */
/* 163 */	"cmp %%%0,%1; bne %a; nop\n",	/* stmt: NEI4(reg,rc) */
/* 164 */	"cmp %%%0,%1; bne %a; nop\n",	/* stmt: NEU4(reg,rc) */
/* 165 */	"%a",	/* call: ADDRGP4 */
/* 166 */	"%0",	/* call: addr */
/* 167 */	"call %0; nop\n",	/* reg: CALLF8(call) */
/* 168 */	"call %0; nop\n",	/* reg: CALLF4(call) */
/* 169 */	"call %0; nop\n",	/* reg: CALLI4(call) */
/* 170 */	"call %0; nop\n",	/* reg: CALLP4(call) */
/* 171 */	"call %0; nop\n",	/* reg: CALLU4(call) */
/* 172 */	"call %0; nop\n",	/* stmt: CALLV(call) */
/* 173 */	"call %0; st %%%1,[%%sp+64]; unimp %b&0xfff\n",	/* stmt: CALLB(call,reg) */
/* 174 */	"# ret\n",	/* stmt: RETF8(reg) */
/* 175 */	"# ret\n",	/* stmt: RETF4(reg) */
/* 176 */	"# ret\n",	/* stmt: RETI4(reg) */
/* 177 */	"# ret\n",	/* stmt: RETU4(reg) */
/* 178 */	"# ret\n",	/* stmt: RETP4(reg) */
/* 179 */	"st %%%0,[%%sp+4*%c+68]\n",	/* stmt: ARGI4(reg) */
/* 180 */	"st %%%0,[%%sp+4*%c+68]\n",	/* stmt: ARGU4(reg) */
/* 181 */	"st %%%0,[%%sp+4*%c+68]\n",	/* stmt: ARGP4(reg) */
/* 182 */	"# ARGF4\n",	/* stmt: ARGF4(reg) */
/* 183 */	"# ARGF8\n",	/* stmt: ARGF8(reg) */
/* 184 */	"sra %%%0,31,%%g1; wr %%g0,%%g1,%%y; nop; nop; nop; sdiv %%%0,%1,%%%c\n",	/* reg: DIVI4(reg,rc) */
/* 185 */	"wr %%g0,%%g0,%%y; nop; nop; nop; udiv %%%0,%1,%%%c\n",	/* reg: DIVU4(reg,rc) */
/* 186 */	"sra %%%0,31,%%g1; wr %%g0,%%g1,%%y; nop; nop; nop; sdiv %%%0,%1,%%g1\n; smul %%g1,%1,%%g1; sub %%%0,%%g1,%%%c\n",	/* reg: MODI4(reg,rc) */
/* 187 */	"wr %%g0,%%g0,%%y; nop; nop; nop; udiv %%%0,%1,%%g1\n; umul %%g1,%1,%%g1; sub %%%0,%%g1,%%%c\n",	/* reg: MODU4(reg,rc) */
/* 188 */	"smul %%%1,%0,%%%c\n",	/* reg: MULI4(rc,reg) */
/* 189 */	"umul %%%1,%0,%%%c\n",	/* reg: MULU4(rc,reg) */
/* 190 */	"faddd %%f%0,%%f%1,%%f%c\n",	/* reg: ADDF8(reg,reg) */
/* 191 */	"fadds %%f%0,%%f%1,%%f%c\n",	/* reg: ADDF4(reg,reg) */
/* 192 */	"fdivd %%f%0,%%f%1,%%f%c\n",	/* reg: DIVF8(reg,reg) */
/* 193 */	"fdivs %%f%0,%%f%1,%%f%c\n",	/* reg: DIVF4(reg,reg) */
/* 194 */	"fmuld %%f%0,%%f%1,%%f%c\n",	/* reg: MULF8(reg,reg) */
/* 195 */	"fmuls %%f%0,%%f%1,%%f%c\n",	/* reg: MULF4(reg,reg) */
/* 196 */	"fsubd %%f%0,%%f%1,%%f%c\n",	/* reg: SUBF8(reg,reg) */
/* 197 */	"fsubs %%f%0,%%f%1,%%f%c\n",	/* reg: SUBF4(reg,reg) */
/* 198 */	"fnegs %%f%0,%%f%c\n",	/* reg: NEGF4(reg) */
/* 199 */	"fmovs %%f%0,%%f%c\n",	/* reg: LOADF4(reg) */
/* 200 */	"fdtos %%f%0,%%f%c\n",	/* reg: CVFF4(reg) */
/* 201 */	"fstod %%f%0,%%f%c\n",	/* reg: CVFF8(reg) */
/* 202 */	"fstoi %%f%0,%%f0; st %%f0,[%%sp+64]; ld [%%sp+64],%%%c\n",	/* reg: CVFI4(reg) */
/* 203 */	"fdtoi %%f%0,%%f0; st %%f0,[%%sp+64]; ld [%%sp+64],%%%c\n",	/* reg: CVFI4(reg) */
/* 204 */	"st %%%0,[%%sp+64]; ld [%%sp+64],%%f%c; fitos %%f%c,%%f%c\n",	/* reg: CVIF4(reg) */
/* 205 */	"st %%%0,[%%sp+64]; ld [%%sp+64],%%f%c; fitod %%f%c,%%f%c\n",	/* reg: CVIF8(reg) */
/* 206 */	"fcmpd %%f%0,%%f%1; nop; fbe",	/* rel: EQF8(reg,reg) */
/* 207 */	"fcmps %%f%0,%%f%1; nop; fbe",	/* rel: EQF4(reg,reg) */
/* 208 */	"fcmpd %%f%0,%%f%1; nop; fbuge",	/* rel: GEF8(reg,reg) */
/* 209 */	"fcmps %%f%0,%%f%1; nop; fbuge",	/* rel: GEF4(reg,reg) */
/* 210 */	"fcmpd %%f%0,%%f%1; nop; fbug",	/* rel: GTF8(reg,reg) */
/* 211 */	"fcmps %%f%0,%%f%1; nop; fbug",	/* rel: GTF4(reg,reg) */
/* 212 */	"fcmpd %%f%0,%%f%1; nop; fbule",	/* rel: LEF8(reg,reg) */
/* 213 */	"fcmps %%f%0,%%f%1; nop; fbule",	/* rel: LEF4(reg,reg) */
/* 214 */	"fcmpd %%f%0,%%f%1; nop; fbul",	/* rel: LTF8(reg,reg) */
/* 215 */	"fcmps %%f%0,%%f%1; nop; fbul",	/* rel: LTF4(reg,reg) */
/* 216 */	"fcmpd %%f%0,%%f%1; nop; fbne",	/* rel: NEF8(reg,reg) */
/* 217 */	"fcmps %%f%0,%%f%1; nop; fbne",	/* rel: NEF4(reg,reg) */
/* 218 */	"%0 %a; nop\n",	/* stmt: rel */
/* 219 */	"# LOADD\n",	/* reg: LOADF8(reg) */
/* 220 */	"# NEGD\n",	/* reg: NEGF8(reg) */
/* 221 */	"# ASGNB\n",	/* stmt: ASGNB(reg,INDIRB(reg)) */
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
/* 36 */	1,	/* set %a,%%%c\n */
/* 37 */	0,	/* %a */
/* 38 */	0,	/* %a */
/* 39 */	1,	/* add %0,%%fp,%%%c\n */
/* 40 */	1,	/* set %a,%%%c\n */
/* 41 */	1,	/* set %a,%%%c\n */
/* 42 */	1,	/* set %a,%%%c\nadd %%%c,%%fp,%%%c\n */
/* 43 */	1,	/* set %a,%%%c\nadd %%%c,%%fp,%%%c\n */
/* 44 */	0,	/* %a */
/* 45 */	0,	/* %a */
/* 46 */	0,	/* %a */
/* 47 */	0,	/* %a */
/* 48 */	0,	/* %a */
/* 49 */	0,	/* %a */
/* 50 */	0,	/* %a */
/* 51 */	0,	/* %%%0+%1 */
/* 52 */	0,	/* %%%0+%1 */
/* 53 */	0,	/* %%%0+%1 */
/* 54 */	0,	/* %%%0 */
/* 55 */	0,	/* %0 */
/* 56 */	0,	/* %%fp+%0 */
/* 57 */	0,	/* %0 */
/* 58 */	0,	/* %%%0+%%%1 */
/* 59 */	0,	/* %%%0+%%%1 */
/* 60 */	0,	/* %%%0+%%%1 */
/* 61 */	0,	/* %%fp+%%%0 */
/* 62 */	1,	/* ldsb [%0],%%%c\n */
/* 63 */	1,	/* ldsh [%0],%%%c\n */
/* 64 */	1,	/* ld [%0],%%%c\n */
/* 65 */	1,	/* ldub [%0],%%%c\n */
/* 66 */	1,	/* lduh [%0],%%%c\n */
/* 67 */	1,	/* ld [%0],%%%c\n */
/* 68 */	1,	/* ld [%0],%%%c\n */
/* 69 */	1,	/* ld [%0],%%f%c\n */
/* 70 */	1,	/* stb %%%1,[%0]\n */
/* 71 */	1,	/* sth %%%1,[%0]\n */
/* 72 */	1,	/* st %%%1,[%0]\n */
/* 73 */	1,	/* stb %%%1,[%0]\n */
/* 74 */	1,	/* sth %%%1,[%0]\n */
/* 75 */	1,	/* st %%%1,[%0]\n */
/* 76 */	1,	/* st %%%1,[%0]\n */
/* 77 */	1,	/* st %%f%1,[%0]\n */
/* 78 */	0,	/* %%%fp+%a */
/* 79 */	1,	/* ldd [%0],%%f%c\n */
/* 80 */	1,	/* std %%f%1,[%0]\n */
/* 81 */	1,	/* # ld2 [%0],%%f%c\n */
/* 82 */	1,	/* # st2 %%f%1,[%0]\n */
/* 83 */	0,	/* %a */
/* 84 */	1,	/* set %0,%%g1\nstb %%%1,[%%fp+%%g1]\n */
/* 85 */	1,	/* set %0,%%g1\nsth %%%1,[%%fp+%%g1]\n */
/* 86 */	1,	/* set %0,%%g1\nst %%%1,[%%fp+%%g1]\n */
/* 87 */	1,	/* set %0,%%g1\nstb %%%1,[%%fp+%%g1]\n */
/* 88 */	1,	/* set %0,%%g1\nsth %%%1,[%%fp+%%g1]\n */
/* 89 */	1,	/* set %0,%%g1\nst %%%1,[%%fp+%%g1]\n */
/* 90 */	1,	/* set %0,%%g1\nst %%%1,[%%fp+%%g1]\n */
/* 91 */	1,	/* set %0,%%g1\nst %%f%1,[%%fp+%%g1]\n */
/* 92 */	1,	/* set %0,%%g1\nstd %%f%1,[%%fp+%%g1]\n */
/* 93 */	1,	/* ldsb [%0],%%%c\n */
/* 94 */	1,	/* ldsh [%0],%%%c\n */
/* 95 */	1,	/* ldub [%0],%%%c\n */
/* 96 */	1,	/* lduh [%0],%%%c\n */
/* 97 */	1,	/* ldub [%0],%%%c\n */
/* 98 */	1,	/* lduh [%0],%%%c\n */
/* 99 */	1,	/* mov %%%0,%%%c\n */
/* 100 */	1,	/* mov %%%0,%%%c\n */
/* 101 */	1,	/* mov %%%0,%%%c\n */
/* 102 */	1,	/* mov %%%0,%%%c\n */
/* 103 */	1,	/* mov %%%0,%%%c\n */
/* 104 */	1,	/* mov %%%0,%%%c\n */
/* 105 */	1,	/* mov %%%0,%%%c\n */
/* 106 */	1,	/* # reg\n */
/* 107 */	1,	/* # reg\n */
/* 108 */	1,	/* # reg\n */
/* 109 */	1,	/* # reg\n */
/* 110 */	1,	/* # reg\n */
/* 111 */	1,	/* # reg\n */
/* 112 */	1,	/* # reg\n */
/* 113 */	1,	/* set %0,%%%c\n */
/* 114 */	0,	/* %0 */
/* 115 */	0,	/* %%%0 */
/* 116 */	1,	/* add %%%0,%1,%%%c\n */
/* 117 */	1,	/* add %%%0,%1,%%%c\n */
/* 118 */	1,	/* add %%%0,%1,%%%c\n */
/* 119 */	1,	/* and %%%0,%1,%%%c\n */
/* 120 */	1,	/* or %%%0,%1,%%%c\n */
/* 121 */	1,	/* xor %%%0,%1,%%%c\n */
/* 122 */	1,	/* and %%%0,%1,%%%c\n */
/* 123 */	1,	/* or %%%0,%1,%%%c\n */
/* 124 */	1,	/* xor %%%0,%1,%%%c\n */
/* 125 */	1,	/* sub %%%0,%1,%%%c\n */
/* 126 */	1,	/* sub %%%0,%1,%%%c\n */
/* 127 */	1,	/* sub %%%0,%1,%%%c\n */
/* 128 */	0,	/* %a */
/* 129 */	0,	/* %%%0 */
/* 130 */	1,	/* sll %%%0,%1,%%%c\n */
/* 131 */	1,	/* sll %%%0,%1,%%%c\n */
/* 132 */	1,	/* sra %%%0,%1,%%%c\n */
/* 133 */	1,	/* srl %%%0,%1,%%%c\n */
/* 134 */	1,	/* andn %%%0,%1,%%%c\n */
/* 135 */	1,	/* orn %%%0,%1,%%%c\n */
/* 136 */	1,	/* xnor %%%0,%1,%%%c\n */
/* 137 */	1,	/* andn %%%0,%1,%%%c\n */
/* 138 */	1,	/* orn %%%0,%1,%%%c\n */
/* 139 */	1,	/* xnor %%%0,%1,%%%c\n */
/* 140 */	1,	/* neg %%%0,%%%c\n */
/* 141 */	1,	/* not %%%0,%%%c\n */
/* 142 */	1,	/* not %%%0,%%%c\n */
/* 143 */	1,	/* sll %%%0,8*(4-%a),%%%c; sra %%%c,8*(4-%a),%%%c\n */
/* 144 */	1,	/* sll %%%0,8*(4-%a),%%%c; srl %%%c,8*(4-%a),%%%c\n */
/* 145 */	1,	/* and %%%0,0xff,%%%c\n */
/* 146 */	1,	/* set 0xffff,%%g1; and %%%0,%%g1,%%%c\n */
/* 147 */	1,	/* and %%%0,0xff,%%%c\n */
/* 148 */	1,	/* set 0xffff,%%g1; and %%%0,%%g1,%%%c\n */
/* 149 */	0,	/* %a */
/* 150 */	1,	/* ba %0; nop\n */
/* 151 */	1,	/* jmp %0; nop\n */
/* 152 */	1,	/* %a:\n */
/* 153 */	1,	/* cmp %%%0,%1; be %a; nop\n */
/* 154 */	1,	/* cmp %%%0,%1; be %a; nop\n */
/* 155 */	1,	/* cmp %%%0,%1; bge %a; nop\n */
/* 156 */	1,	/* cmp %%%0,%1; bgeu %a; nop\n */
/* 157 */	1,	/* cmp %%%0,%1; bg %a; nop\n */
/* 158 */	1,	/* cmp %%%0,%1; bgu %a; nop\n */
/* 159 */	1,	/* cmp %%%0,%1; ble %a; nop\n */
/* 160 */	1,	/* cmp %%%0,%1; bleu %a; nop\n */
/* 161 */	1,	/* cmp %%%0,%1; bl %a; nop\n */
/* 162 */	1,	/* cmp %%%0,%1; blu %a; nop\n */
/* 163 */	1,	/* cmp %%%0,%1; bne %a; nop\n */
/* 164 */	1,	/* cmp %%%0,%1; bne %a; nop\n */
/* 165 */	0,	/* %a */
/* 166 */	0,	/* %0 */
/* 167 */	1,	/* call %0; nop\n */
/* 168 */	1,	/* call %0; nop\n */
/* 169 */	1,	/* call %0; nop\n */
/* 170 */	1,	/* call %0; nop\n */
/* 171 */	1,	/* call %0; nop\n */
/* 172 */	1,	/* call %0; nop\n */
/* 173 */	1,	/* call %0; st %%%1,[%%sp+64]; unimp %b&0xfff\n */
/* 174 */	1,	/* # ret\n */
/* 175 */	1,	/* # ret\n */
/* 176 */	1,	/* # ret\n */
/* 177 */	1,	/* # ret\n */
/* 178 */	1,	/* # ret\n */
/* 179 */	1,	/* st %%%0,[%%sp+4*%c+68]\n */
/* 180 */	1,	/* st %%%0,[%%sp+4*%c+68]\n */
/* 181 */	1,	/* st %%%0,[%%sp+4*%c+68]\n */
/* 182 */	1,	/* # ARGF4\n */
/* 183 */	1,	/* # ARGF8\n */
/* 184 */	1,	/* sra %%%0,31,%%g1; wr %%g0,%%g1,%%y; nop; nop; nop; sdiv %%%0,%1,%%%c\n */
/* 185 */	1,	/* wr %%g0,%%g0,%%y; nop; nop; nop; udiv %%%0,%1,%%%c\n */
/* 186 */	1,	/* sra %%%0,31,%%g1; wr %%g0,%%g1,%%y; nop; nop; nop; sdiv %%%0,%1,%%g1\n; smul %%g1,%1,%%g1; sub %%%0,%%g1,%%%c\n */
/* 187 */	1,	/* wr %%g0,%%g0,%%y; nop; nop; nop; udiv %%%0,%1,%%g1\n; umul %%g1,%1,%%g1; sub %%%0,%%g1,%%%c\n */
/* 188 */	1,	/* smul %%%1,%0,%%%c\n */
/* 189 */	1,	/* umul %%%1,%0,%%%c\n */
/* 190 */	1,	/* faddd %%f%0,%%f%1,%%f%c\n */
/* 191 */	1,	/* fadds %%f%0,%%f%1,%%f%c\n */
/* 192 */	1,	/* fdivd %%f%0,%%f%1,%%f%c\n */
/* 193 */	1,	/* fdivs %%f%0,%%f%1,%%f%c\n */
/* 194 */	1,	/* fmuld %%f%0,%%f%1,%%f%c\n */
/* 195 */	1,	/* fmuls %%f%0,%%f%1,%%f%c\n */
/* 196 */	1,	/* fsubd %%f%0,%%f%1,%%f%c\n */
/* 197 */	1,	/* fsubs %%f%0,%%f%1,%%f%c\n */
/* 198 */	1,	/* fnegs %%f%0,%%f%c\n */
/* 199 */	1,	/* fmovs %%f%0,%%f%c\n */
/* 200 */	1,	/* fdtos %%f%0,%%f%c\n */
/* 201 */	1,	/* fstod %%f%0,%%f%c\n */
/* 202 */	1,	/* fstoi %%f%0,%%f0; st %%f0,[%%sp+64]; ld [%%sp+64],%%%c\n */
/* 203 */	1,	/* fdtoi %%f%0,%%f0; st %%f0,[%%sp+64]; ld [%%sp+64],%%%c\n */
/* 204 */	1,	/* st %%%0,[%%sp+64]; ld [%%sp+64],%%f%c; fitos %%f%c,%%f%c\n */
/* 205 */	1,	/* st %%%0,[%%sp+64]; ld [%%sp+64],%%f%c; fitod %%f%c,%%f%c\n */
/* 206 */	0,	/* fcmpd %%f%0,%%f%1; nop; fbe */
/* 207 */	0,	/* fcmps %%f%0,%%f%1; nop; fbe */
/* 208 */	0,	/* fcmpd %%f%0,%%f%1; nop; fbuge */
/* 209 */	0,	/* fcmps %%f%0,%%f%1; nop; fbuge */
/* 210 */	0,	/* fcmpd %%f%0,%%f%1; nop; fbug */
/* 211 */	0,	/* fcmps %%f%0,%%f%1; nop; fbug */
/* 212 */	0,	/* fcmpd %%f%0,%%f%1; nop; fbule */
/* 213 */	0,	/* fcmps %%f%0,%%f%1; nop; fbule */
/* 214 */	0,	/* fcmpd %%f%0,%%f%1; nop; fbul */
/* 215 */	0,	/* fcmps %%f%0,%%f%1; nop; fbul */
/* 216 */	0,	/* fcmpd %%f%0,%%f%1; nop; fbne */
/* 217 */	0,	/* fcmps %%f%0,%%f%1; nop; fbne */
/* 218 */	1,	/* %0 %a; nop\n */
/* 219 */	1,	/* # LOADD\n */
/* 220 */	1,	/* # NEGD\n */
/* 221 */	1,	/* # ASGNB\n */
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
/* 36 */	"reg: ADDRGP4",
/* 37 */	"stk13: ADDRFP4",
/* 38 */	"stk13: ADDRLP4",
/* 39 */	"reg: stk13",
/* 40 */	"stk: ADDRFP4",
/* 41 */	"stk: ADDRLP4",
/* 42 */	"reg: ADDRFP4",
/* 43 */	"reg: ADDRLP4",
/* 44 */	"con13: CNSTI1",
/* 45 */	"con13: CNSTI2",
/* 46 */	"con13: CNSTI4",
/* 47 */	"con13: CNSTU1",
/* 48 */	"con13: CNSTU2",
/* 49 */	"con13: CNSTU4",
/* 50 */	"con13: CNSTP4",
/* 51 */	"base: ADDI4(reg,con13)",
/* 52 */	"base: ADDP4(reg,con13)",
/* 53 */	"base: ADDU4(reg,con13)",
/* 54 */	"base: reg",
/* 55 */	"base: con13",
/* 56 */	"base: stk13",
/* 57 */	"addr: base",
/* 58 */	"addr: ADDI4(reg,reg)",
/* 59 */	"addr: ADDP4(reg,reg)",
/* 60 */	"addr: ADDU4(reg,reg)",
/* 61 */	"addr: stk",
/* 62 */	"reg: INDIRI1(addr)",
/* 63 */	"reg: INDIRI2(addr)",
/* 64 */	"reg: INDIRI4(addr)",
/* 65 */	"reg: INDIRU1(addr)",
/* 66 */	"reg: INDIRU2(addr)",
/* 67 */	"reg: INDIRU4(addr)",
/* 68 */	"reg: INDIRP4(addr)",
/* 69 */	"reg: INDIRF4(addr)",
/* 70 */	"stmt: ASGNI1(addr,reg)",
/* 71 */	"stmt: ASGNI2(addr,reg)",
/* 72 */	"stmt: ASGNI4(addr,reg)",
/* 73 */	"stmt: ASGNU1(addr,reg)",
/* 74 */	"stmt: ASGNU2(addr,reg)",
/* 75 */	"stmt: ASGNU4(addr,reg)",
/* 76 */	"stmt: ASGNP4(addr,reg)",
/* 77 */	"stmt: ASGNF4(addr,reg)",
/* 78 */	"addrl: ADDRLP4",
/* 79 */	"reg: INDIRF8(addrl)",
/* 80 */	"stmt: ASGNF8(addrl,reg)",
/* 81 */	"reg: INDIRF8(base)",
/* 82 */	"stmt: ASGNF8(base,reg)",
/* 83 */	"spill: ADDRLP4",
/* 84 */	"stmt: ASGNI1(spill,reg)",
/* 85 */	"stmt: ASGNI2(spill,reg)",
/* 86 */	"stmt: ASGNI4(spill,reg)",
/* 87 */	"stmt: ASGNU1(spill,reg)",
/* 88 */	"stmt: ASGNU2(spill,reg)",
/* 89 */	"stmt: ASGNU4(spill,reg)",
/* 90 */	"stmt: ASGNP4(spill,reg)",
/* 91 */	"stmt: ASGNF4(spill,reg)",
/* 92 */	"stmt: ASGNF8(spill,reg)",
/* 93 */	"reg: CVII4(INDIRI1(addr))",
/* 94 */	"reg: CVII4(INDIRI2(addr))",
/* 95 */	"reg: CVUU4(INDIRU1(addr))",
/* 96 */	"reg: CVUU4(INDIRU2(addr))",
/* 97 */	"reg: CVUI4(INDIRU1(addr))",
/* 98 */	"reg: CVUI4(INDIRU2(addr))",
/* 99 */	"reg: LOADI1(reg)",
/* 100 */	"reg: LOADI2(reg)",
/* 101 */	"reg: LOADI4(reg)",
/* 102 */	"reg: LOADP4(reg)",
/* 103 */	"reg: LOADU1(reg)",
/* 104 */	"reg: LOADU2(reg)",
/* 105 */	"reg: LOADU4(reg)",
/* 106 */	"reg: CNSTI1",
/* 107 */	"reg: CNSTI2",
/* 108 */	"reg: CNSTI4",
/* 109 */	"reg: CNSTP4",
/* 110 */	"reg: CNSTU1",
/* 111 */	"reg: CNSTU2",
/* 112 */	"reg: CNSTU4",
/* 113 */	"reg: con",
/* 114 */	"rc: con13",
/* 115 */	"rc: reg",
/* 116 */	"reg: ADDI4(reg,rc)",
/* 117 */	"reg: ADDP4(reg,rc)",
/* 118 */	"reg: ADDU4(reg,rc)",
/* 119 */	"reg: BANDI4(reg,rc)",
/* 120 */	"reg: BORI4(reg,rc)",
/* 121 */	"reg: BXORI4(reg,rc)",
/* 122 */	"reg: BANDU4(reg,rc)",
/* 123 */	"reg: BORU4(reg,rc)",
/* 124 */	"reg: BXORU4(reg,rc)",
/* 125 */	"reg: SUBI4(reg,rc)",
/* 126 */	"reg: SUBP4(reg,rc)",
/* 127 */	"reg: SUBU4(reg,rc)",
/* 128 */	"rc5: CNSTI4",
/* 129 */	"rc5: reg",
/* 130 */	"reg: LSHI4(reg,rc5)",
/* 131 */	"reg: LSHU4(reg,rc5)",
/* 132 */	"reg: RSHI4(reg,rc5)",
/* 133 */	"reg: RSHU4(reg,rc5)",
/* 134 */	"reg: BANDI4(reg,BCOMI4(rc))",
/* 135 */	"reg: BORI4(reg,BCOMI4(rc))",
/* 136 */	"reg: BXORI4(reg,BCOMI4(rc))",
/* 137 */	"reg: BANDU4(reg,BCOMU4(rc))",
/* 138 */	"reg: BORU4(reg,BCOMU4(rc))",
/* 139 */	"reg: BXORU4(reg,BCOMU4(rc))",
/* 140 */	"reg: NEGI4(reg)",
/* 141 */	"reg: BCOMI4(reg)",
/* 142 */	"reg: BCOMU4(reg)",
/* 143 */	"reg: CVII4(reg)",
/* 144 */	"reg: CVUU4(reg)",
/* 145 */	"reg: CVUU4(reg)",
/* 146 */	"reg: CVUU4(reg)",
/* 147 */	"reg: CVUI4(reg)",
/* 148 */	"reg: CVUI4(reg)",
/* 149 */	"addrg: ADDRGP4",
/* 150 */	"stmt: JUMPV(addrg)",
/* 151 */	"stmt: JUMPV(addr)",
/* 152 */	"stmt: LABELV",
/* 153 */	"stmt: EQI4(reg,rc)",
/* 154 */	"stmt: EQU4(reg,rc)",
/* 155 */	"stmt: GEI4(reg,rc)",
/* 156 */	"stmt: GEU4(reg,rc)",
/* 157 */	"stmt: GTI4(reg,rc)",
/* 158 */	"stmt: GTU4(reg,rc)",
/* 159 */	"stmt: LEI4(reg,rc)",
/* 160 */	"stmt: LEU4(reg,rc)",
/* 161 */	"stmt: LTI4(reg,rc)",
/* 162 */	"stmt: LTU4(reg,rc)",
/* 163 */	"stmt: NEI4(reg,rc)",
/* 164 */	"stmt: NEU4(reg,rc)",
/* 165 */	"call: ADDRGP4",
/* 166 */	"call: addr",
/* 167 */	"reg: CALLF8(call)",
/* 168 */	"reg: CALLF4(call)",
/* 169 */	"reg: CALLI4(call)",
/* 170 */	"reg: CALLP4(call)",
/* 171 */	"reg: CALLU4(call)",
/* 172 */	"stmt: CALLV(call)",
/* 173 */	"stmt: CALLB(call,reg)",
/* 174 */	"stmt: RETF8(reg)",
/* 175 */	"stmt: RETF4(reg)",
/* 176 */	"stmt: RETI4(reg)",
/* 177 */	"stmt: RETU4(reg)",
/* 178 */	"stmt: RETP4(reg)",
/* 179 */	"stmt: ARGI4(reg)",
/* 180 */	"stmt: ARGU4(reg)",
/* 181 */	"stmt: ARGP4(reg)",
/* 182 */	"stmt: ARGF4(reg)",
/* 183 */	"stmt: ARGF8(reg)",
/* 184 */	"reg: DIVI4(reg,rc)",
/* 185 */	"reg: DIVU4(reg,rc)",
/* 186 */	"reg: MODI4(reg,rc)",
/* 187 */	"reg: MODU4(reg,rc)",
/* 188 */	"reg: MULI4(rc,reg)",
/* 189 */	"reg: MULU4(rc,reg)",
/* 190 */	"reg: ADDF8(reg,reg)",
/* 191 */	"reg: ADDF4(reg,reg)",
/* 192 */	"reg: DIVF8(reg,reg)",
/* 193 */	"reg: DIVF4(reg,reg)",
/* 194 */	"reg: MULF8(reg,reg)",
/* 195 */	"reg: MULF4(reg,reg)",
/* 196 */	"reg: SUBF8(reg,reg)",
/* 197 */	"reg: SUBF4(reg,reg)",
/* 198 */	"reg: NEGF4(reg)",
/* 199 */	"reg: LOADF4(reg)",
/* 200 */	"reg: CVFF4(reg)",
/* 201 */	"reg: CVFF8(reg)",
/* 202 */	"reg: CVFI4(reg)",
/* 203 */	"reg: CVFI4(reg)",
/* 204 */	"reg: CVIF4(reg)",
/* 205 */	"reg: CVIF8(reg)",
/* 206 */	"rel: EQF8(reg,reg)",
/* 207 */	"rel: EQF4(reg,reg)",
/* 208 */	"rel: GEF8(reg,reg)",
/* 209 */	"rel: GEF4(reg,reg)",
/* 210 */	"rel: GTF8(reg,reg)",
/* 211 */	"rel: GTF4(reg,reg)",
/* 212 */	"rel: LEF8(reg,reg)",
/* 213 */	"rel: LEF4(reg,reg)",
/* 214 */	"rel: LTF8(reg,reg)",
/* 215 */	"rel: LTF4(reg,reg)",
/* 216 */	"rel: NEF8(reg,reg)",
/* 217 */	"rel: NEF4(reg,reg)",
/* 218 */	"stmt: rel",
/* 219 */	"reg: LOADF8(reg)",
/* 220 */	"reg: NEGF8(reg)",
/* 221 */	"stmt: ASGNB(reg,INDIRB(reg))",
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
	70,
	71,
	72,
	73,
	74,
	75,
	76,
	77,
	80,
	82,
	84,
	85,
	86,
	87,
	88,
	89,
	90,
	91,
	92,
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
	218,
	221,
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
	36,
	39,
	42,
	43,
	62,
	63,
	64,
	65,
	66,
	67,
	68,
	69,
	79,
	81,
	93,
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
	106,
	107,
	108,
	109,
	110,
	111,
	112,
	113,
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
	130,
	131,
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
	167,
	168,
	169,
	170,
	171,
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
	219,
	220,
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

static short _decode_stk13[] = {
	0,
	37,
	38,
};

static short _decode_stk[] = {
	0,
	40,
	41,
};

static short _decode_con13[] = {
	0,
	44,
	45,
	46,
	47,
	48,
	49,
	50,
};

static short _decode_base[] = {
	0,
	51,
	52,
	53,
	54,
	55,
	56,
};

static short _decode_addr[] = {
	0,
	57,
	58,
	59,
	60,
	61,
};

static short _decode_addrl[] = {
	0,
	78,
};

static short _decode_spill[] = {
	0,
	83,
};

static short _decode_rc[] = {
	0,
	114,
	115,
};

static short _decode_rc5[] = {
	0,
	128,
	129,
};

static short _decode_addrg[] = {
	0,
	149,
};

static short _decode_call[] = {
	0,
	165,
	166,
};

static short _decode_rel[] = {
	0,
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
};

static int _rule(void *state, int goalnt) {
	if (goalnt < 1 || goalnt > 15)
		fatal("_rule", "Bad goal nonterminal %d\n", goalnt);
	if (!state)
		return 0;
	switch (goalnt) {
	case _stmt_NT:	return _decode_stmt[((struct _state *)state)->rule._stmt];
	case _reg_NT:	return _decode_reg[((struct _state *)state)->rule._reg];
	case _con_NT:	return _decode_con[((struct _state *)state)->rule._con];
	case _stk13_NT:	return _decode_stk13[((struct _state *)state)->rule._stk13];
	case _stk_NT:	return _decode_stk[((struct _state *)state)->rule._stk];
	case _con13_NT:	return _decode_con13[((struct _state *)state)->rule._con13];
	case _base_NT:	return _decode_base[((struct _state *)state)->rule._base];
	case _addr_NT:	return _decode_addr[((struct _state *)state)->rule._addr];
	case _addrl_NT:	return _decode_addrl[((struct _state *)state)->rule._addrl];
	case _spill_NT:	return _decode_spill[((struct _state *)state)->rule._spill];
	case _rc_NT:	return _decode_rc[((struct _state *)state)->rule._rc];
	case _rc5_NT:	return _decode_rc5[((struct _state *)state)->rule._rc5];
	case _addrg_NT:	return _decode_addrg[((struct _state *)state)->rule._addrg];
	case _call_NT:	return _decode_call[((struct _state *)state)->rule._call];
	case _rel_NT:	return _decode_rel[((struct _state *)state)->rule._rel];
	default:
		fatal("_rule", "Bad goal nonterminal %d\n", goalnt);
		return 0;
	}
}

static void _closure_reg(NODEPTR_TYPE, int);
static void _closure_con(NODEPTR_TYPE, int);
static void _closure_stk13(NODEPTR_TYPE, int);
static void _closure_stk(NODEPTR_TYPE, int);
static void _closure_con13(NODEPTR_TYPE, int);
static void _closure_base(NODEPTR_TYPE, int);
static void _closure_addr(NODEPTR_TYPE, int);
static void _closure_rel(NODEPTR_TYPE, int);

static void _closure_reg(NODEPTR_TYPE a, int c) {
	struct _state *p = STATE_LABEL(a);
	if (c + 0 < p->cost[_rc5_NT]) {
		p->cost[_rc5_NT] = c + 0;
		p->rule._rc5 = 2;
	}
	if (c + 0 < p->cost[_rc_NT]) {
		p->cost[_rc_NT] = c + 0;
		p->rule._rc = 2;
	}
	if (c + 0 < p->cost[_base_NT]) {
		p->cost[_base_NT] = c + 0;
		p->rule._base = 4;
		_closure_base(a, c + 0);
	}
	if (c + 0 < p->cost[_stmt_NT]) {
		p->cost[_stmt_NT] = c + 0;
		p->rule._stmt = 13;
	}
}

static void _closure_con(NODEPTR_TYPE a, int c) {
	struct _state *p = STATE_LABEL(a);
	if (c + 1 < p->cost[_reg_NT]) {
		p->cost[_reg_NT] = c + 1;
		p->rule._reg = 47;
		_closure_reg(a, c + 1);
	}
}

static void _closure_stk13(NODEPTR_TYPE a, int c) {
	struct _state *p = STATE_LABEL(a);
	if (c + 0 < p->cost[_base_NT]) {
		p->cost[_base_NT] = c + 0;
		p->rule._base = 6;
		_closure_base(a, c + 0);
	}
	if (c + 1 < p->cost[_reg_NT]) {
		p->cost[_reg_NT] = c + 1;
		p->rule._reg = 14;
		_closure_reg(a, c + 1);
	}
}

static void _closure_stk(NODEPTR_TYPE a, int c) {
	struct _state *p = STATE_LABEL(a);
	if (c + 0 < p->cost[_addr_NT]) {
		p->cost[_addr_NT] = c + 0;
		p->rule._addr = 5;
		_closure_addr(a, c + 0);
	}
}

static void _closure_con13(NODEPTR_TYPE a, int c) {
	struct _state *p = STATE_LABEL(a);
	if (c + 0 < p->cost[_rc_NT]) {
		p->cost[_rc_NT] = c + 0;
		p->rule._rc = 1;
	}
	if (c + 0 < p->cost[_base_NT]) {
		p->cost[_base_NT] = c + 0;
		p->rule._base = 5;
		_closure_base(a, c + 0);
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

static void _closure_addr(NODEPTR_TYPE a, int c) {
	struct _state *p = STATE_LABEL(a);
	if (c + 0 < p->cost[_call_NT]) {
		p->cost[_call_NT] = c + 0;
		p->rule._call = 2;
	}
}

static void _closure_rel(NODEPTR_TYPE a, int c) {
	struct _state *p = STATE_LABEL(a);
	if (c + 4 < p->cost[_stmt_NT]) {
		p->cost[_stmt_NT] = c + 4;
		p->rule._stmt = 60;
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
		0x7fff;
	switch (OP_LABEL(a)) {
	case 41: /* ARGB */
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
				p->rule._stmt = 61;
			}
		}
		break;
	case 73: /* INDIRB */
		_label(LEFT_CHILD(a));
		break;
	case 216: /* CALLV */
		_label(LEFT_CHILD(a));
		/* stmt: CALLV(call) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_call_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 48;
		}
		break;
	case 217: /* CALLB */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: CALLB(call,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_call_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 3;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 49;
		}
		break;
	case 233: /* LOADB */
		break;
	case 248: /* RETV */
		break;
	case 584: /* JUMPV */
		_label(LEFT_CHILD(a));
		/* stmt: JUMPV(addrg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addrg_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 33;
		}
		/* stmt: JUMPV(addr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 34;
		}
		break;
	case 600: /* LABELV */
		/* stmt: LABELV */
		if (0 + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = 0 + 0;
			p->rule._stmt = 35;
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
		/* con13: CNSTI1 */
		c = (imm(a));
		if (c + 0 < p->cost[_con13_NT]) {
			p->cost[_con13_NT] = c + 0;
			p->rule._con13 = 1;
			_closure_con13(a, c + 0);
		}
		/* reg: CNSTI1 */
		c = (range(a, 0, 0));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 40;
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
		/* con13: CNSTU1 */
		c = (imm(a));
		if (c + 0 < p->cost[_con13_NT]) {
			p->cost[_con13_NT] = c + 0;
			p->rule._con13 = 4;
			_closure_con13(a, c + 0);
		}
		/* reg: CNSTU1 */
		c = (range(a, 0, 0));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 44;
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
		/* stmt: ASGNI1(spill,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_spill_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 24;
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
			p->rule._stmt = 17;
		}
		/* stmt: ASGNU1(spill,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_spill_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 27;
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
				if (q->cost[_stk13_NT] == 0) {
					p->cost[_stk13_NT] = 0;
					p->rule._stk13 = q->rule._stk13;
				}
				if (q->cost[_stk_NT] == 0) {
					p->cost[_stk_NT] = 0;
					p->rule._stk = q->rule._stk;
				}
				if (q->cost[_con13_NT] == 0) {
					p->cost[_con13_NT] = 0;
					p->rule._con13 = q->rule._con13;
				}
				if (q->cost[_base_NT] == 0) {
					p->cost[_base_NT] = 0;
					p->rule._base = q->rule._base;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_addrl_NT] == 0) {
					p->cost[_addrl_NT] = 0;
					p->rule._addrl = q->rule._addrl;
				}
				if (q->cost[_spill_NT] == 0) {
					p->cost[_spill_NT] = 0;
					p->rule._spill = q->rule._spill;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_rc5_NT] == 0) {
					p->cost[_rc5_NT] = 0;
					p->rule._rc5 = q->rule._rc5;
				}
				if (q->cost[_addrg_NT] == 0) {
					p->cost[_addrg_NT] = 0;
					p->rule._addrg = q->rule._addrg;
				}
				if (q->cost[_call_NT] == 0) {
					p->cost[_call_NT] = 0;
					p->rule._call = q->rule._call;
				}
				if (q->cost[_rel_NT] == 0) {
					p->cost[_rel_NT] = 0;
					p->rule._rel = q->rule._rel;
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
			p->rule._reg = 17;
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
				if (q->cost[_stk13_NT] == 0) {
					p->cost[_stk13_NT] = 0;
					p->rule._stk13 = q->rule._stk13;
				}
				if (q->cost[_stk_NT] == 0) {
					p->cost[_stk_NT] = 0;
					p->rule._stk = q->rule._stk;
				}
				if (q->cost[_con13_NT] == 0) {
					p->cost[_con13_NT] = 0;
					p->rule._con13 = q->rule._con13;
				}
				if (q->cost[_base_NT] == 0) {
					p->cost[_base_NT] = 0;
					p->rule._base = q->rule._base;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_addrl_NT] == 0) {
					p->cost[_addrl_NT] = 0;
					p->rule._addrl = q->rule._addrl;
				}
				if (q->cost[_spill_NT] == 0) {
					p->cost[_spill_NT] = 0;
					p->rule._spill = q->rule._spill;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_rc5_NT] == 0) {
					p->cost[_rc5_NT] = 0;
					p->rule._rc5 = q->rule._rc5;
				}
				if (q->cost[_addrg_NT] == 0) {
					p->cost[_addrg_NT] = 0;
					p->rule._addrg = q->rule._addrg;
				}
				if (q->cost[_call_NT] == 0) {
					p->cost[_call_NT] = 0;
					p->rule._call = q->rule._call;
				}
				if (q->cost[_rel_NT] == 0) {
					p->cost[_rel_NT] = 0;
					p->rule._rel = q->rule._rel;
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
			p->rule._reg = 20;
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
			p->rule._reg = 33;
			_closure_reg(a, c + 0);
		}
		break;
	case 1254: /* LOADU1 */
		_label(LEFT_CHILD(a));
		/* reg: LOADU1(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + (move(a));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 37;
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
		/* con13: CNSTI2 */
		c = (imm(a));
		if (c + 0 < p->cost[_con13_NT]) {
			p->cost[_con13_NT] = c + 0;
			p->rule._con13 = 2;
			_closure_con13(a, c + 0);
		}
		/* reg: CNSTI2 */
		c = (range(a, 0, 0));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 41;
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
		/* con13: CNSTU2 */
		c = (imm(a));
		if (c + 0 < p->cost[_con13_NT]) {
			p->cost[_con13_NT] = c + 0;
			p->rule._con13 = 5;
			_closure_con13(a, c + 0);
		}
		/* reg: CNSTU2 */
		c = (range(a, 0, 0));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 45;
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
			p->rule._stmt = 15;
		}
		/* stmt: ASGNI2(spill,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_spill_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 25;
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
			p->rule._stmt = 18;
		}
		/* stmt: ASGNU2(spill,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_spill_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 28;
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
				if (q->cost[_stk13_NT] == 0) {
					p->cost[_stk13_NT] = 0;
					p->rule._stk13 = q->rule._stk13;
				}
				if (q->cost[_stk_NT] == 0) {
					p->cost[_stk_NT] = 0;
					p->rule._stk = q->rule._stk;
				}
				if (q->cost[_con13_NT] == 0) {
					p->cost[_con13_NT] = 0;
					p->rule._con13 = q->rule._con13;
				}
				if (q->cost[_base_NT] == 0) {
					p->cost[_base_NT] = 0;
					p->rule._base = q->rule._base;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_addrl_NT] == 0) {
					p->cost[_addrl_NT] = 0;
					p->rule._addrl = q->rule._addrl;
				}
				if (q->cost[_spill_NT] == 0) {
					p->cost[_spill_NT] = 0;
					p->rule._spill = q->rule._spill;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_rc5_NT] == 0) {
					p->cost[_rc5_NT] = 0;
					p->rule._rc5 = q->rule._rc5;
				}
				if (q->cost[_addrg_NT] == 0) {
					p->cost[_addrg_NT] = 0;
					p->rule._addrg = q->rule._addrg;
				}
				if (q->cost[_call_NT] == 0) {
					p->cost[_call_NT] = 0;
					p->rule._call = q->rule._call;
				}
				if (q->cost[_rel_NT] == 0) {
					p->cost[_rel_NT] = 0;
					p->rule._rel = q->rule._rel;
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
			p->rule._reg = 18;
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
				if (q->cost[_stk13_NT] == 0) {
					p->cost[_stk13_NT] = 0;
					p->rule._stk13 = q->rule._stk13;
				}
				if (q->cost[_stk_NT] == 0) {
					p->cost[_stk_NT] = 0;
					p->rule._stk = q->rule._stk;
				}
				if (q->cost[_con13_NT] == 0) {
					p->cost[_con13_NT] = 0;
					p->rule._con13 = q->rule._con13;
				}
				if (q->cost[_base_NT] == 0) {
					p->cost[_base_NT] = 0;
					p->rule._base = q->rule._base;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_addrl_NT] == 0) {
					p->cost[_addrl_NT] = 0;
					p->rule._addrl = q->rule._addrl;
				}
				if (q->cost[_spill_NT] == 0) {
					p->cost[_spill_NT] = 0;
					p->rule._spill = q->rule._spill;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_rc5_NT] == 0) {
					p->cost[_rc5_NT] = 0;
					p->rule._rc5 = q->rule._rc5;
				}
				if (q->cost[_addrg_NT] == 0) {
					p->cost[_addrg_NT] = 0;
					p->rule._addrg = q->rule._addrg;
				}
				if (q->cost[_call_NT] == 0) {
					p->cost[_call_NT] = 0;
					p->rule._call = q->rule._call;
				}
				if (q->cost[_rel_NT] == 0) {
					p->cost[_rel_NT] = 0;
					p->rule._rel = q->rule._rel;
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
			p->rule._reg = 21;
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
			p->rule._reg = 34;
			_closure_reg(a, c + 0);
		}
		break;
	case 2278: /* LOADU2 */
		_label(LEFT_CHILD(a));
		/* reg: LOADU2(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + (move(a));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 38;
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
		/* con13: CNSTI4 */
		c = (imm(a));
		if (c + 0 < p->cost[_con13_NT]) {
			p->cost[_con13_NT] = c + 0;
			p->rule._con13 = 3;
			_closure_con13(a, c + 0);
		}
		/* reg: CNSTI4 */
		c = (range(a, 0, 0));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 42;
			_closure_reg(a, c + 0);
		}
		/* rc5: CNSTI4 */
		c = (range(a, 0, 31));
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
		/* con13: CNSTU4 */
		c = (imm(a));
		if (c + 0 < p->cost[_con13_NT]) {
			p->cost[_con13_NT] = c + 0;
			p->rule._con13 = 6;
			_closure_con13(a, c + 0);
		}
		/* reg: CNSTU4 */
		c = (range(a, 0, 0));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 46;
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
		/* con13: CNSTP4 */
		c = (imm(a));
		if (c + 0 < p->cost[_con13_NT]) {
			p->cost[_con13_NT] = c + 0;
			p->rule._con13 = 7;
			_closure_con13(a, c + 0);
		}
		/* reg: CNSTP4 */
		c = (range(a, 0, 0));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 43;
			_closure_reg(a, c + 0);
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
			p->rule._stmt = 55;
		}
		break;
	case 4134: /* ARGU4 */
		_label(LEFT_CHILD(a));
		/* stmt: ARGU4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 56;
		}
		break;
	case 4135: /* ARGP4 */
		_label(LEFT_CHILD(a));
		/* stmt: ARGP4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 57;
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
		/* stmt: ASGNF4(spill,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_spill_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 31;
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
			p->rule._stmt = 16;
		}
		/* stmt: ASGNI4(spill,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_spill_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 26;
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
		/* stmt: ASGNU4(spill,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_spill_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 29;
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
		/* stmt: ASGNP4(spill,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_spill_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 30;
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
				if (q->cost[_stk13_NT] == 0) {
					p->cost[_stk13_NT] = 0;
					p->rule._stk13 = q->rule._stk13;
				}
				if (q->cost[_stk_NT] == 0) {
					p->cost[_stk_NT] = 0;
					p->rule._stk = q->rule._stk;
				}
				if (q->cost[_con13_NT] == 0) {
					p->cost[_con13_NT] = 0;
					p->rule._con13 = q->rule._con13;
				}
				if (q->cost[_base_NT] == 0) {
					p->cost[_base_NT] = 0;
					p->rule._base = q->rule._base;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_addrl_NT] == 0) {
					p->cost[_addrl_NT] = 0;
					p->rule._addrl = q->rule._addrl;
				}
				if (q->cost[_spill_NT] == 0) {
					p->cost[_spill_NT] = 0;
					p->rule._spill = q->rule._spill;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_rc5_NT] == 0) {
					p->cost[_rc5_NT] = 0;
					p->rule._rc5 = q->rule._rc5;
				}
				if (q->cost[_addrg_NT] == 0) {
					p->cost[_addrg_NT] = 0;
					p->rule._addrg = q->rule._addrg;
				}
				if (q->cost[_call_NT] == 0) {
					p->cost[_call_NT] = 0;
					p->rule._call = q->rule._call;
				}
				if (q->cost[_rel_NT] == 0) {
					p->cost[_rel_NT] = 0;
					p->rule._rel = q->rule._rel;
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
			p->rule._reg = 24;
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
				if (q->cost[_stk13_NT] == 0) {
					p->cost[_stk13_NT] = 0;
					p->rule._stk13 = q->rule._stk13;
				}
				if (q->cost[_stk_NT] == 0) {
					p->cost[_stk_NT] = 0;
					p->rule._stk = q->rule._stk;
				}
				if (q->cost[_con13_NT] == 0) {
					p->cost[_con13_NT] = 0;
					p->rule._con13 = q->rule._con13;
				}
				if (q->cost[_base_NT] == 0) {
					p->cost[_base_NT] = 0;
					p->rule._base = q->rule._base;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_addrl_NT] == 0) {
					p->cost[_addrl_NT] = 0;
					p->rule._addrl = q->rule._addrl;
				}
				if (q->cost[_spill_NT] == 0) {
					p->cost[_spill_NT] = 0;
					p->rule._spill = q->rule._spill;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_rc5_NT] == 0) {
					p->cost[_rc5_NT] = 0;
					p->rule._rc5 = q->rule._rc5;
				}
				if (q->cost[_addrg_NT] == 0) {
					p->cost[_addrg_NT] = 0;
					p->rule._addrg = q->rule._addrg;
				}
				if (q->cost[_call_NT] == 0) {
					p->cost[_call_NT] = 0;
					p->rule._call = q->rule._call;
				}
				if (q->cost[_rel_NT] == 0) {
					p->cost[_rel_NT] = 0;
					p->rule._rel = q->rule._rel;
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
			p->rule._reg = 19;
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
				if (q->cost[_stk13_NT] == 0) {
					p->cost[_stk13_NT] = 0;
					p->rule._stk13 = q->rule._stk13;
				}
				if (q->cost[_stk_NT] == 0) {
					p->cost[_stk_NT] = 0;
					p->rule._stk = q->rule._stk;
				}
				if (q->cost[_con13_NT] == 0) {
					p->cost[_con13_NT] = 0;
					p->rule._con13 = q->rule._con13;
				}
				if (q->cost[_base_NT] == 0) {
					p->cost[_base_NT] = 0;
					p->rule._base = q->rule._base;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_addrl_NT] == 0) {
					p->cost[_addrl_NT] = 0;
					p->rule._addrl = q->rule._addrl;
				}
				if (q->cost[_spill_NT] == 0) {
					p->cost[_spill_NT] = 0;
					p->rule._spill = q->rule._spill;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_rc5_NT] == 0) {
					p->cost[_rc5_NT] = 0;
					p->rule._rc5 = q->rule._rc5;
				}
				if (q->cost[_addrg_NT] == 0) {
					p->cost[_addrg_NT] = 0;
					p->rule._addrg = q->rule._addrg;
				}
				if (q->cost[_call_NT] == 0) {
					p->cost[_call_NT] = 0;
					p->rule._call = q->rule._call;
				}
				if (q->cost[_rel_NT] == 0) {
					p->cost[_rel_NT] = 0;
					p->rule._rel = q->rule._rel;
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
			p->rule._reg = 22;
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
				if (q->cost[_stk13_NT] == 0) {
					p->cost[_stk13_NT] = 0;
					p->rule._stk13 = q->rule._stk13;
				}
				if (q->cost[_stk_NT] == 0) {
					p->cost[_stk_NT] = 0;
					p->rule._stk = q->rule._stk;
				}
				if (q->cost[_con13_NT] == 0) {
					p->cost[_con13_NT] = 0;
					p->rule._con13 = q->rule._con13;
				}
				if (q->cost[_base_NT] == 0) {
					p->cost[_base_NT] = 0;
					p->rule._base = q->rule._base;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_addrl_NT] == 0) {
					p->cost[_addrl_NT] = 0;
					p->rule._addrl = q->rule._addrl;
				}
				if (q->cost[_spill_NT] == 0) {
					p->cost[_spill_NT] = 0;
					p->rule._spill = q->rule._spill;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_rc5_NT] == 0) {
					p->cost[_rc5_NT] = 0;
					p->rule._rc5 = q->rule._rc5;
				}
				if (q->cost[_addrg_NT] == 0) {
					p->cost[_addrg_NT] = 0;
					p->rule._addrg = q->rule._addrg;
				}
				if (q->cost[_call_NT] == 0) {
					p->cost[_call_NT] = 0;
					p->rule._call = q->rule._call;
				}
				if (q->cost[_rel_NT] == 0) {
					p->cost[_rel_NT] = 0;
					p->rule._rel = q->rule._rel;
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
			p->rule._reg = 23;
			_closure_reg(a, c + 0);
		}
		break;
	case 4209: /* CVFF4 */
		_label(LEFT_CHILD(a));
		/* reg: CVFF4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 100;
			_closure_reg(a, c + 0);
		}
		break;
	case 4213: /* CVFI4 */
		_label(LEFT_CHILD(a));
		/* reg: CVFI4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((a->syms[0]->u.c.v.i==4?3:LBURG_MAX));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 102;
			_closure_reg(a, c + 0);
		}
		/* reg: CVFI4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((a->syms[0]->u.c.v.i==8?3:LBURG_MAX));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 103;
			_closure_reg(a, c + 0);
		}
		break;
	case 4225: /* CVIF4 */
		_label(LEFT_CHILD(a));
		/* reg: CVIF4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 3;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 104;
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
				p->rule._reg = 27;
				_closure_reg(a, c + 0);
			}
		}
		if (	/* reg: CVII4(INDIRI2(addr)) */
			LEFT_CHILD(a)->op == 2117 /* INDIRI2 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_addr_NT] + 1;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 28;
				_closure_reg(a, c + 0);
			}
		}
		/* reg: CVII4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 73;
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
				p->rule._reg = 31;
				_closure_reg(a, c + 0);
			}
		}
		if (	/* reg: CVUI4(INDIRU2(addr)) */
			LEFT_CHILD(a)->op == 2118 /* INDIRU2 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_addr_NT] + 1;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 32;
				_closure_reg(a, c + 0);
			}
		}
		/* reg: CVUI4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((a->syms[0]->u.c.v.i == 1 ? 1 : LBURG_MAX));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 77;
			_closure_reg(a, c + 0);
		}
		/* reg: CVUI4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 78;
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
				p->rule._reg = 29;
				_closure_reg(a, c + 0);
			}
		}
		if (	/* reg: CVUU4(INDIRU2(addr)) */
			LEFT_CHILD(a)->op == 2118 /* INDIRU2 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_addr_NT] + 1;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 30;
				_closure_reg(a, c + 0);
			}
		}
		/* reg: CVUU4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 74;
			_closure_reg(a, c + 0);
		}
		/* reg: CVUU4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((a->syms[0]->u.c.v.i == 1 ? 1 : LBURG_MAX));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 75;
			_closure_reg(a, c + 0);
		}
		/* reg: CVUU4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 76;
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
			p->rule._reg = 98;
			_closure_reg(a, c + 0);
		}
		break;
	case 4293: /* NEGI4 */
		_label(LEFT_CHILD(a));
		/* reg: NEGI4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 70;
			_closure_reg(a, c + 0);
		}
		break;
	case 4305: /* CALLF4 */
		_label(LEFT_CHILD(a));
		/* reg: CALLF4(call) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_call_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 80;
			_closure_reg(a, c + 0);
		}
		break;
	case 4309: /* CALLI4 */
		_label(LEFT_CHILD(a));
		/* reg: CALLI4(call) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_call_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 81;
			_closure_reg(a, c + 0);
		}
		break;
	case 4310: /* CALLU4 */
		_label(LEFT_CHILD(a));
		/* reg: CALLU4(call) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_call_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 83;
			_closure_reg(a, c + 0);
		}
		break;
	case 4311: /* CALLP4 */
		_label(LEFT_CHILD(a));
		/* reg: CALLP4(call) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_call_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 82;
			_closure_reg(a, c + 0);
		}
		break;
	case 4321: /* LOADF4 */
		_label(LEFT_CHILD(a));
		/* reg: LOADF4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 99;
			_closure_reg(a, c + 0);
		}
		break;
	case 4325: /* LOADI4 */
		_label(LEFT_CHILD(a));
		/* reg: LOADI4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + (move(a));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 35;
			_closure_reg(a, c + 0);
		}
		break;
	case 4326: /* LOADU4 */
		_label(LEFT_CHILD(a));
		/* reg: LOADU4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + (move(a));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 39;
			_closure_reg(a, c + 0);
		}
		break;
	case 4327: /* LOADP4 */
		_label(LEFT_CHILD(a));
		/* reg: LOADP4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + (move(a));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 36;
			_closure_reg(a, c + 0);
		}
		break;
	case 4337: /* RETF4 */
		_label(LEFT_CHILD(a));
		/* stmt: RETF4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 51;
		}
		break;
	case 4341: /* RETI4 */
		_label(LEFT_CHILD(a));
		/* stmt: RETI4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 52;
		}
		break;
	case 4342: /* RETU4 */
		_label(LEFT_CHILD(a));
		/* stmt: RETU4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 53;
		}
		break;
	case 4343: /* RETP4 */
		_label(LEFT_CHILD(a));
		/* stmt: RETP4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 54;
		}
		break;
	case 4359: /* ADDRGP4 */
		/* reg: ADDRGP4 */
		if (1 + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = 1 + 0;
			p->rule._reg = 13;
			_closure_reg(a, 1 + 0);
		}
		/* addrg: ADDRGP4 */
		if (0 + 0 < p->cost[_addrg_NT]) {
			p->cost[_addrg_NT] = 0 + 0;
			p->rule._addrg = 1;
		}
		/* call: ADDRGP4 */
		if (0 + 0 < p->cost[_call_NT]) {
			p->cost[_call_NT] = 0 + 0;
			p->rule._call = 1;
		}
		break;
	case 4375: /* ADDRFP4 */
		/* stk13: ADDRFP4 */
		c = (imm(a));
		if (c + 0 < p->cost[_stk13_NT]) {
			p->cost[_stk13_NT] = c + 0;
			p->rule._stk13 = 1;
			_closure_stk13(a, c + 0);
		}
		/* stk: ADDRFP4 */
		if (2 + 0 < p->cost[_stk_NT]) {
			p->cost[_stk_NT] = 2 + 0;
			p->rule._stk = 1;
			_closure_stk(a, 2 + 0);
		}
		/* reg: ADDRFP4 */
		if (3 + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = 3 + 0;
			p->rule._reg = 15;
			_closure_reg(a, 3 + 0);
		}
		break;
	case 4391: /* ADDRLP4 */
		/* stk13: ADDRLP4 */
		c = (imm(a));
		if (c + 0 < p->cost[_stk13_NT]) {
			p->cost[_stk13_NT] = c + 0;
			p->rule._stk13 = 2;
			_closure_stk13(a, c + 0);
		}
		/* stk: ADDRLP4 */
		if (2 + 0 < p->cost[_stk_NT]) {
			p->cost[_stk_NT] = 2 + 0;
			p->rule._stk = 2;
			_closure_stk(a, 2 + 0);
		}
		/* reg: ADDRLP4 */
		if (3 + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = 3 + 0;
			p->rule._reg = 16;
			_closure_reg(a, 3 + 0);
		}
		/* addrl: ADDRLP4 */
		c = (imm(a));
		if (c + 0 < p->cost[_addrl_NT]) {
			p->cost[_addrl_NT] = c + 0;
			p->rule._addrl = 1;
		}
		/* spill: ADDRLP4 */
		c = (!imm(a));
		if (c + 0 < p->cost[_spill_NT]) {
			p->cost[_spill_NT] = c + 0;
			p->rule._spill = 1;
		}
		break;
	case 4401: /* ADDF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: ADDF4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 91;
			_closure_reg(a, c + 0);
		}
		break;
	case 4405: /* ADDI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* base: ADDI4(reg,con13) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_con13_NT] + 0;
		if (c + 0 < p->cost[_base_NT]) {
			p->cost[_base_NT] = c + 0;
			p->rule._base = 1;
			_closure_base(a, c + 0);
		}
		/* addr: ADDI4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_addr_NT]) {
			p->cost[_addr_NT] = c + 0;
			p->rule._addr = 2;
			_closure_addr(a, c + 0);
		}
		/* reg: ADDI4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 48;
			_closure_reg(a, c + 0);
		}
		break;
	case 4406: /* ADDU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* base: ADDU4(reg,con13) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_con13_NT] + 0;
		if (c + 0 < p->cost[_base_NT]) {
			p->cost[_base_NT] = c + 0;
			p->rule._base = 3;
			_closure_base(a, c + 0);
		}
		/* addr: ADDU4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_addr_NT]) {
			p->cost[_addr_NT] = c + 0;
			p->rule._addr = 4;
			_closure_addr(a, c + 0);
		}
		/* reg: ADDU4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 50;
			_closure_reg(a, c + 0);
		}
		break;
	case 4407: /* ADDP4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* base: ADDP4(reg,con13) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_con13_NT] + 0;
		if (c + 0 < p->cost[_base_NT]) {
			p->cost[_base_NT] = c + 0;
			p->rule._base = 2;
			_closure_base(a, c + 0);
		}
		/* addr: ADDP4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_addr_NT]) {
			p->cost[_addr_NT] = c + 0;
			p->rule._addr = 3;
			_closure_addr(a, c + 0);
		}
		/* reg: ADDP4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 49;
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
			p->rule._reg = 97;
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
			p->rule._reg = 57;
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
			p->rule._reg = 59;
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
			p->rule._reg = 58;
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
			p->rule._reg = 60;
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
			p->rule._reg = 61;
			_closure_reg(a, c + 0);
		}
		break;
	case 4453: /* MODI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: MODI4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 8;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 86;
			_closure_reg(a, c + 0);
		}
		break;
	case 4454: /* MODU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: MODU4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 7;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 87;
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
			p->rule._reg = 62;
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
			p->rule._reg = 63;
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
			p->rule._reg = 51;
			_closure_reg(a, c + 0);
		}
		if (	/* reg: BANDI4(reg,BCOMI4(rc)) */
			RIGHT_CHILD(a)->op == 4501 /* BCOMI4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_rc_NT] + 1;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 64;
				_closure_reg(a, c + 0);
			}
		}
		break;
	case 4486: /* BANDU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: BANDU4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 54;
			_closure_reg(a, c + 0);
		}
		if (	/* reg: BANDU4(reg,BCOMU4(rc)) */
			RIGHT_CHILD(a)->op == 4502 /* BCOMU4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_rc_NT] + 1;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 67;
				_closure_reg(a, c + 0);
			}
		}
		break;
	case 4501: /* BCOMI4 */
		_label(LEFT_CHILD(a));
		/* reg: BCOMI4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 71;
			_closure_reg(a, c + 0);
		}
		break;
	case 4502: /* BCOMU4 */
		_label(LEFT_CHILD(a));
		/* reg: BCOMU4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 72;
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
			p->rule._reg = 52;
			_closure_reg(a, c + 0);
		}
		if (	/* reg: BORI4(reg,BCOMI4(rc)) */
			RIGHT_CHILD(a)->op == 4501 /* BCOMI4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_rc_NT] + 1;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 65;
				_closure_reg(a, c + 0);
			}
		}
		break;
	case 4518: /* BORU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: BORU4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 55;
			_closure_reg(a, c + 0);
		}
		if (	/* reg: BORU4(reg,BCOMU4(rc)) */
			RIGHT_CHILD(a)->op == 4502 /* BCOMU4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_rc_NT] + 1;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 68;
				_closure_reg(a, c + 0);
			}
		}
		break;
	case 4533: /* BXORI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: BXORI4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 53;
			_closure_reg(a, c + 0);
		}
		if (	/* reg: BXORI4(reg,BCOMI4(rc)) */
			RIGHT_CHILD(a)->op == 4501 /* BCOMI4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_rc_NT] + 1;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 66;
				_closure_reg(a, c + 0);
			}
		}
		break;
	case 4534: /* BXORU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: BXORU4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 56;
			_closure_reg(a, c + 0);
		}
		if (	/* reg: BXORU4(reg,BCOMU4(rc)) */
			RIGHT_CHILD(a)->op == 4502 /* BCOMU4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_rc_NT] + 1;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 69;
				_closure_reg(a, c + 0);
			}
		}
		break;
	case 4545: /* DIVF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: DIVF4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 93;
			_closure_reg(a, c + 0);
		}
		break;
	case 4549: /* DIVI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: DIVI4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 6;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 84;
			_closure_reg(a, c + 0);
		}
		break;
	case 4550: /* DIVU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: DIVU4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 5;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 85;
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
			p->rule._reg = 95;
			_closure_reg(a, c + 0);
		}
		break;
	case 4565: /* MULI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: MULI4(rc,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_rc_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 88;
			_closure_reg(a, c + 0);
		}
		break;
	case 4566: /* MULU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: MULU4(rc,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_rc_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 89;
			_closure_reg(a, c + 0);
		}
		break;
	case 4577: /* EQF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* rel: EQF4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_rel_NT]) {
			p->cost[_rel_NT] = c + 0;
			p->rule._rel = 2;
			_closure_rel(a, c + 0);
		}
		break;
	case 4581: /* EQI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: EQI4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 3;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 36;
		}
		break;
	case 4582: /* EQU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: EQU4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 3;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 37;
		}
		break;
	case 4593: /* GEF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* rel: GEF4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_rel_NT]) {
			p->cost[_rel_NT] = c + 0;
			p->rule._rel = 4;
			_closure_rel(a, c + 0);
		}
		break;
	case 4597: /* GEI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GEI4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 3;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 38;
		}
		break;
	case 4598: /* GEU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GEU4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 3;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 39;
		}
		break;
	case 4609: /* GTF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* rel: GTF4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_rel_NT]) {
			p->cost[_rel_NT] = c + 0;
			p->rule._rel = 6;
			_closure_rel(a, c + 0);
		}
		break;
	case 4613: /* GTI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GTI4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 3;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 40;
		}
		break;
	case 4614: /* GTU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GTU4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 3;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 41;
		}
		break;
	case 4625: /* LEF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* rel: LEF4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_rel_NT]) {
			p->cost[_rel_NT] = c + 0;
			p->rule._rel = 8;
			_closure_rel(a, c + 0);
		}
		break;
	case 4629: /* LEI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LEI4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 3;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 42;
		}
		break;
	case 4630: /* LEU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LEU4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 3;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 43;
		}
		break;
	case 4641: /* LTF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* rel: LTF4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_rel_NT]) {
			p->cost[_rel_NT] = c + 0;
			p->rule._rel = 10;
			_closure_rel(a, c + 0);
		}
		break;
	case 4645: /* LTI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LTI4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 3;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 44;
		}
		break;
	case 4646: /* LTU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LTU4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 3;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 45;
		}
		break;
	case 4657: /* NEF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* rel: NEF4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_rel_NT]) {
			p->cost[_rel_NT] = c + 0;
			p->rule._rel = 12;
			_closure_rel(a, c + 0);
		}
		break;
	case 4661: /* NEI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: NEI4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 3;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 46;
		}
		break;
	case 4662: /* NEU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: NEU4(reg,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 3;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 47;
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
		/* stmt: ASGNF8(addrl,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addrl_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 22;
		}
		/* stmt: ASGNF8(base,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_base_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 23;
		}
		/* stmt: ASGNF8(spill,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_spill_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 32;
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
				if (q->cost[_stk13_NT] == 0) {
					p->cost[_stk13_NT] = 0;
					p->rule._stk13 = q->rule._stk13;
				}
				if (q->cost[_stk_NT] == 0) {
					p->cost[_stk_NT] = 0;
					p->rule._stk = q->rule._stk;
				}
				if (q->cost[_con13_NT] == 0) {
					p->cost[_con13_NT] = 0;
					p->rule._con13 = q->rule._con13;
				}
				if (q->cost[_base_NT] == 0) {
					p->cost[_base_NT] = 0;
					p->rule._base = q->rule._base;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_addrl_NT] == 0) {
					p->cost[_addrl_NT] = 0;
					p->rule._addrl = q->rule._addrl;
				}
				if (q->cost[_spill_NT] == 0) {
					p->cost[_spill_NT] = 0;
					p->rule._spill = q->rule._spill;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_rc5_NT] == 0) {
					p->cost[_rc5_NT] = 0;
					p->rule._rc5 = q->rule._rc5;
				}
				if (q->cost[_addrg_NT] == 0) {
					p->cost[_addrg_NT] = 0;
					p->rule._addrg = q->rule._addrg;
				}
				if (q->cost[_call_NT] == 0) {
					p->cost[_call_NT] = 0;
					p->rule._call = q->rule._call;
				}
				if (q->cost[_rel_NT] == 0) {
					p->cost[_rel_NT] = 0;
					p->rule._rel = q->rule._rel;
				}
			}
			c = 0;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 9;
				_closure_reg(a, c + 0);
			}
		}
		/* reg: INDIRF8(addrl) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addrl_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 25;
			_closure_reg(a, c + 0);
		}
		/* reg: INDIRF8(base) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_base_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 26;
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
				if (q->cost[_stk13_NT] == 0) {
					p->cost[_stk13_NT] = 0;
					p->rule._stk13 = q->rule._stk13;
				}
				if (q->cost[_stk_NT] == 0) {
					p->cost[_stk_NT] = 0;
					p->rule._stk = q->rule._stk;
				}
				if (q->cost[_con13_NT] == 0) {
					p->cost[_con13_NT] = 0;
					p->rule._con13 = q->rule._con13;
				}
				if (q->cost[_base_NT] == 0) {
					p->cost[_base_NT] = 0;
					p->rule._base = q->rule._base;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_addrl_NT] == 0) {
					p->cost[_addrl_NT] = 0;
					p->rule._addrl = q->rule._addrl;
				}
				if (q->cost[_spill_NT] == 0) {
					p->cost[_spill_NT] = 0;
					p->rule._spill = q->rule._spill;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_rc5_NT] == 0) {
					p->cost[_rc5_NT] = 0;
					p->rule._rc5 = q->rule._rc5;
				}
				if (q->cost[_addrg_NT] == 0) {
					p->cost[_addrg_NT] = 0;
					p->rule._addrg = q->rule._addrg;
				}
				if (q->cost[_call_NT] == 0) {
					p->cost[_call_NT] = 0;
					p->rule._call = q->rule._call;
				}
				if (q->cost[_rel_NT] == 0) {
					p->cost[_rel_NT] = 0;
					p->rule._rel = q->rule._rel;
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
				if (q->cost[_stk13_NT] == 0) {
					p->cost[_stk13_NT] = 0;
					p->rule._stk13 = q->rule._stk13;
				}
				if (q->cost[_stk_NT] == 0) {
					p->cost[_stk_NT] = 0;
					p->rule._stk = q->rule._stk;
				}
				if (q->cost[_con13_NT] == 0) {
					p->cost[_con13_NT] = 0;
					p->rule._con13 = q->rule._con13;
				}
				if (q->cost[_base_NT] == 0) {
					p->cost[_base_NT] = 0;
					p->rule._base = q->rule._base;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_addrl_NT] == 0) {
					p->cost[_addrl_NT] = 0;
					p->rule._addrl = q->rule._addrl;
				}
				if (q->cost[_spill_NT] == 0) {
					p->cost[_spill_NT] = 0;
					p->rule._spill = q->rule._spill;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_rc5_NT] == 0) {
					p->cost[_rc5_NT] = 0;
					p->rule._rc5 = q->rule._rc5;
				}
				if (q->cost[_addrg_NT] == 0) {
					p->cost[_addrg_NT] = 0;
					p->rule._addrg = q->rule._addrg;
				}
				if (q->cost[_call_NT] == 0) {
					p->cost[_call_NT] = 0;
					p->rule._call = q->rule._call;
				}
				if (q->cost[_rel_NT] == 0) {
					p->cost[_rel_NT] = 0;
					p->rule._rel = q->rule._rel;
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
				if (q->cost[_stk13_NT] == 0) {
					p->cost[_stk13_NT] = 0;
					p->rule._stk13 = q->rule._stk13;
				}
				if (q->cost[_stk_NT] == 0) {
					p->cost[_stk_NT] = 0;
					p->rule._stk = q->rule._stk;
				}
				if (q->cost[_con13_NT] == 0) {
					p->cost[_con13_NT] = 0;
					p->rule._con13 = q->rule._con13;
				}
				if (q->cost[_base_NT] == 0) {
					p->cost[_base_NT] = 0;
					p->rule._base = q->rule._base;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_addrl_NT] == 0) {
					p->cost[_addrl_NT] = 0;
					p->rule._addrl = q->rule._addrl;
				}
				if (q->cost[_spill_NT] == 0) {
					p->cost[_spill_NT] = 0;
					p->rule._spill = q->rule._spill;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_rc5_NT] == 0) {
					p->cost[_rc5_NT] = 0;
					p->rule._rc5 = q->rule._rc5;
				}
				if (q->cost[_addrg_NT] == 0) {
					p->cost[_addrg_NT] = 0;
					p->rule._addrg = q->rule._addrg;
				}
				if (q->cost[_call_NT] == 0) {
					p->cost[_call_NT] = 0;
					p->rule._call = q->rule._call;
				}
				if (q->cost[_rel_NT] == 0) {
					p->cost[_rel_NT] = 0;
					p->rule._rel = q->rule._rel;
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
			p->rule._reg = 101;
			_closure_reg(a, c + 0);
		}
		break;
	case 8309: /* CVFI8 */
		break;
	case 8321: /* CVIF8 */
		_label(LEFT_CHILD(a));
		/* reg: CVIF8(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 3;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 105;
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
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 107;
			_closure_reg(a, c + 0);
		}
		break;
	case 8389: /* NEGI8 */
		break;
	case 8401: /* CALLF8 */
		_label(LEFT_CHILD(a));
		/* reg: CALLF8(call) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_call_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 79;
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
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 106;
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
			p->rule._stmt = 50;
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
			p->rule._reg = 90;
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
			p->rule._reg = 96;
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
			p->rule._reg = 92;
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
			p->rule._reg = 94;
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
		/* rel: EQF8(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_rel_NT]) {
			p->cost[_rel_NT] = c + 0;
			p->rule._rel = 1;
			_closure_rel(a, c + 0);
		}
		break;
	case 8677: /* EQI8 */
		break;
	case 8678: /* EQU8 */
		break;
	case 8689: /* GEF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* rel: GEF8(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_rel_NT]) {
			p->cost[_rel_NT] = c + 0;
			p->rule._rel = 3;
			_closure_rel(a, c + 0);
		}
		break;
	case 8693: /* GEI8 */
		break;
	case 8694: /* GEU8 */
		break;
	case 8705: /* GTF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* rel: GTF8(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_rel_NT]) {
			p->cost[_rel_NT] = c + 0;
			p->rule._rel = 5;
			_closure_rel(a, c + 0);
		}
		break;
	case 8709: /* GTI8 */
		break;
	case 8710: /* GTU8 */
		break;
	case 8721: /* LEF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* rel: LEF8(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_rel_NT]) {
			p->cost[_rel_NT] = c + 0;
			p->rule._rel = 7;
			_closure_rel(a, c + 0);
		}
		break;
	case 8725: /* LEI8 */
		break;
	case 8726: /* LEU8 */
		break;
	case 8737: /* LTF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* rel: LTF8(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_rel_NT]) {
			p->cost[_rel_NT] = c + 0;
			p->rule._rel = 9;
			_closure_rel(a, c + 0);
		}
		break;
	case 8741: /* LTI8 */
		break;
	case 8742: /* LTU8 */
		break;
	case 8753: /* NEF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* rel: NEF8(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_rel_NT]) {
			p->cost[_rel_NT] = c + 0;
			p->rule._rel = 11;
			_closure_rel(a, c + 0);
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
	case 165: /* call: ADDRGP4 */
	case 152: /* stmt: LABELV */
	case 149: /* addrg: ADDRGP4 */
	case 128: /* rc5: CNSTI4 */
	case 112: /* reg: CNSTU4 */
	case 111: /* reg: CNSTU2 */
	case 110: /* reg: CNSTU1 */
	case 109: /* reg: CNSTP4 */
	case 108: /* reg: CNSTI4 */
	case 107: /* reg: CNSTI2 */
	case 106: /* reg: CNSTI1 */
	case 83: /* spill: ADDRLP4 */
	case 78: /* addrl: ADDRLP4 */
	case 50: /* con13: CNSTP4 */
	case 49: /* con13: CNSTU4 */
	case 48: /* con13: CNSTU2 */
	case 47: /* con13: CNSTU1 */
	case 46: /* con13: CNSTI4 */
	case 45: /* con13: CNSTI2 */
	case 44: /* con13: CNSTI1 */
	case 43: /* reg: ADDRLP4 */
	case 42: /* reg: ADDRFP4 */
	case 41: /* stk: ADDRLP4 */
	case 40: /* stk: ADDRFP4 */
	case 38: /* stk13: ADDRLP4 */
	case 37: /* stk13: ADDRFP4 */
	case 36: /* reg: ADDRGP4 */
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
	case 218: /* stmt: rel */
	case 166: /* call: addr */
	case 129: /* rc5: reg */
	case 115: /* rc: reg */
	case 114: /* rc: con13 */
	case 113: /* reg: con */
	case 61: /* addr: stk */
	case 57: /* addr: base */
	case 56: /* base: stk13 */
	case 55: /* base: con13 */
	case 54: /* base: reg */
	case 39: /* reg: stk13 */
	case 35: /* stmt: reg */
		kids[0] = p;
		break;
	case 217: /* rel: NEF4(reg,reg) */
	case 216: /* rel: NEF8(reg,reg) */
	case 215: /* rel: LTF4(reg,reg) */
	case 214: /* rel: LTF8(reg,reg) */
	case 213: /* rel: LEF4(reg,reg) */
	case 212: /* rel: LEF8(reg,reg) */
	case 211: /* rel: GTF4(reg,reg) */
	case 210: /* rel: GTF8(reg,reg) */
	case 209: /* rel: GEF4(reg,reg) */
	case 208: /* rel: GEF8(reg,reg) */
	case 207: /* rel: EQF4(reg,reg) */
	case 206: /* rel: EQF8(reg,reg) */
	case 197: /* reg: SUBF4(reg,reg) */
	case 196: /* reg: SUBF8(reg,reg) */
	case 195: /* reg: MULF4(reg,reg) */
	case 194: /* reg: MULF8(reg,reg) */
	case 193: /* reg: DIVF4(reg,reg) */
	case 192: /* reg: DIVF8(reg,reg) */
	case 191: /* reg: ADDF4(reg,reg) */
	case 190: /* reg: ADDF8(reg,reg) */
	case 189: /* reg: MULU4(rc,reg) */
	case 188: /* reg: MULI4(rc,reg) */
	case 187: /* reg: MODU4(reg,rc) */
	case 186: /* reg: MODI4(reg,rc) */
	case 185: /* reg: DIVU4(reg,rc) */
	case 184: /* reg: DIVI4(reg,rc) */
	case 173: /* stmt: CALLB(call,reg) */
	case 164: /* stmt: NEU4(reg,rc) */
	case 163: /* stmt: NEI4(reg,rc) */
	case 162: /* stmt: LTU4(reg,rc) */
	case 161: /* stmt: LTI4(reg,rc) */
	case 160: /* stmt: LEU4(reg,rc) */
	case 159: /* stmt: LEI4(reg,rc) */
	case 158: /* stmt: GTU4(reg,rc) */
	case 157: /* stmt: GTI4(reg,rc) */
	case 156: /* stmt: GEU4(reg,rc) */
	case 155: /* stmt: GEI4(reg,rc) */
	case 154: /* stmt: EQU4(reg,rc) */
	case 153: /* stmt: EQI4(reg,rc) */
	case 133: /* reg: RSHU4(reg,rc5) */
	case 132: /* reg: RSHI4(reg,rc5) */
	case 131: /* reg: LSHU4(reg,rc5) */
	case 130: /* reg: LSHI4(reg,rc5) */
	case 127: /* reg: SUBU4(reg,rc) */
	case 126: /* reg: SUBP4(reg,rc) */
	case 125: /* reg: SUBI4(reg,rc) */
	case 124: /* reg: BXORU4(reg,rc) */
	case 123: /* reg: BORU4(reg,rc) */
	case 122: /* reg: BANDU4(reg,rc) */
	case 121: /* reg: BXORI4(reg,rc) */
	case 120: /* reg: BORI4(reg,rc) */
	case 119: /* reg: BANDI4(reg,rc) */
	case 118: /* reg: ADDU4(reg,rc) */
	case 117: /* reg: ADDP4(reg,rc) */
	case 116: /* reg: ADDI4(reg,rc) */
	case 92: /* stmt: ASGNF8(spill,reg) */
	case 91: /* stmt: ASGNF4(spill,reg) */
	case 90: /* stmt: ASGNP4(spill,reg) */
	case 89: /* stmt: ASGNU4(spill,reg) */
	case 88: /* stmt: ASGNU2(spill,reg) */
	case 87: /* stmt: ASGNU1(spill,reg) */
	case 86: /* stmt: ASGNI4(spill,reg) */
	case 85: /* stmt: ASGNI2(spill,reg) */
	case 84: /* stmt: ASGNI1(spill,reg) */
	case 82: /* stmt: ASGNF8(base,reg) */
	case 80: /* stmt: ASGNF8(addrl,reg) */
	case 77: /* stmt: ASGNF4(addr,reg) */
	case 76: /* stmt: ASGNP4(addr,reg) */
	case 75: /* stmt: ASGNU4(addr,reg) */
	case 74: /* stmt: ASGNU2(addr,reg) */
	case 73: /* stmt: ASGNU1(addr,reg) */
	case 72: /* stmt: ASGNI4(addr,reg) */
	case 71: /* stmt: ASGNI2(addr,reg) */
	case 70: /* stmt: ASGNI1(addr,reg) */
	case 60: /* addr: ADDU4(reg,reg) */
	case 59: /* addr: ADDP4(reg,reg) */
	case 58: /* addr: ADDI4(reg,reg) */
	case 53: /* base: ADDU4(reg,con13) */
	case 52: /* base: ADDP4(reg,con13) */
	case 51: /* base: ADDI4(reg,con13) */
		kids[0] = LEFT_CHILD(p);
		kids[1] = RIGHT_CHILD(p);
		break;
	case 220: /* reg: NEGF8(reg) */
	case 219: /* reg: LOADF8(reg) */
	case 205: /* reg: CVIF8(reg) */
	case 204: /* reg: CVIF4(reg) */
	case 203: /* reg: CVFI4(reg) */
	case 202: /* reg: CVFI4(reg) */
	case 201: /* reg: CVFF8(reg) */
	case 200: /* reg: CVFF4(reg) */
	case 199: /* reg: LOADF4(reg) */
	case 198: /* reg: NEGF4(reg) */
	case 183: /* stmt: ARGF8(reg) */
	case 182: /* stmt: ARGF4(reg) */
	case 181: /* stmt: ARGP4(reg) */
	case 180: /* stmt: ARGU4(reg) */
	case 179: /* stmt: ARGI4(reg) */
	case 178: /* stmt: RETP4(reg) */
	case 177: /* stmt: RETU4(reg) */
	case 176: /* stmt: RETI4(reg) */
	case 175: /* stmt: RETF4(reg) */
	case 174: /* stmt: RETF8(reg) */
	case 172: /* stmt: CALLV(call) */
	case 171: /* reg: CALLU4(call) */
	case 170: /* reg: CALLP4(call) */
	case 169: /* reg: CALLI4(call) */
	case 168: /* reg: CALLF4(call) */
	case 167: /* reg: CALLF8(call) */
	case 151: /* stmt: JUMPV(addr) */
	case 150: /* stmt: JUMPV(addrg) */
	case 148: /* reg: CVUI4(reg) */
	case 147: /* reg: CVUI4(reg) */
	case 146: /* reg: CVUU4(reg) */
	case 145: /* reg: CVUU4(reg) */
	case 144: /* reg: CVUU4(reg) */
	case 143: /* reg: CVII4(reg) */
	case 142: /* reg: BCOMU4(reg) */
	case 141: /* reg: BCOMI4(reg) */
	case 140: /* reg: NEGI4(reg) */
	case 105: /* reg: LOADU4(reg) */
	case 104: /* reg: LOADU2(reg) */
	case 103: /* reg: LOADU1(reg) */
	case 102: /* reg: LOADP4(reg) */
	case 101: /* reg: LOADI4(reg) */
	case 100: /* reg: LOADI2(reg) */
	case 99: /* reg: LOADI1(reg) */
	case 81: /* reg: INDIRF8(base) */
	case 79: /* reg: INDIRF8(addrl) */
	case 69: /* reg: INDIRF4(addr) */
	case 68: /* reg: INDIRP4(addr) */
	case 67: /* reg: INDIRU4(addr) */
	case 66: /* reg: INDIRU2(addr) */
	case 65: /* reg: INDIRU1(addr) */
	case 64: /* reg: INDIRI4(addr) */
	case 63: /* reg: INDIRI2(addr) */
	case 62: /* reg: INDIRI1(addr) */
		kids[0] = LEFT_CHILD(p);
		break;
	case 98: /* reg: CVUI4(INDIRU2(addr)) */
	case 97: /* reg: CVUI4(INDIRU1(addr)) */
	case 96: /* reg: CVUU4(INDIRU2(addr)) */
	case 95: /* reg: CVUU4(INDIRU1(addr)) */
	case 94: /* reg: CVII4(INDIRI2(addr)) */
	case 93: /* reg: CVII4(INDIRI1(addr)) */
		kids[0] = LEFT_CHILD(LEFT_CHILD(p));
		break;
	case 221: /* stmt: ASGNB(reg,INDIRB(reg)) */
	case 139: /* reg: BXORU4(reg,BCOMU4(rc)) */
	case 138: /* reg: BORU4(reg,BCOMU4(rc)) */
	case 137: /* reg: BANDU4(reg,BCOMU4(rc)) */
	case 136: /* reg: BXORI4(reg,BCOMI4(rc)) */
	case 135: /* reg: BORI4(reg,BCOMI4(rc)) */
	case 134: /* reg: BANDI4(reg,BCOMI4(rc)) */
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
        for (i = 0; i < argc; i++)
                if (strcmp(argv[i], "-p") == 0 || strcmp(argv[i], "-pg") == 0)
                        pflag = 1;
        if (IR == &solarisIR)
                stabprefix = ".LL";
        else
                stabprefix = "L";
        for (i = 0; i < 8; i++) {
                greg[i +  0] = mkreg(stringf("g%d", i), i +  0, 1, IREG);
                greg[i +  8] = mkreg(stringf("o%d", i), i +  8, 1, IREG);
                greg[i + 16] = mkreg(stringf("l%d", i), i + 16, 1, IREG);
                greg[i + 24] = mkreg(stringf("i%d", i), i + 24, 1, IREG);
        }
        gregw = mkwildcard(greg);
        for (i = 0; i < 32; i++)
                freg[i]  = mkreg("%d", i, 1, FREG);
        for (i = 0; i < 31; i += 2)
                freg2[i] = mkreg("%d", i, 3, FREG);
        fregw = mkwildcard(freg);
        freg2w = mkwildcard(freg2);
        tmask[IREG] = 0x3fff3e00;
        vmask[IREG] = 0x3ff00000;
        tmask[FREG]  = ~(unsigned)0;
        vmask[FREG]  = 0;
}
static Symbol rmap(int opk) {
        switch (optype(opk)) {
        case I: case U: case P: case B:
                return gregw;
        case F:
                return opsize(opk) == 4 ? fregw : freg2w;
        default:
                return 0;
        }
}
static void target(Node p) {
        assert(p);
        switch (specific(p->op)) {
        case CNST+I: case CNST+U: case CNST+P:
                if (range(p, 0, 0) == 0) {
                        setreg(p, greg[0]);
                        p->x.registered = 1;
                }
                break;
        case CALL+B:
                assert(p->syms[1] && p->syms[1]->type && isfunc(p->syms[1]->type));
                p->syms[1] = intconst(freturn(p->syms[1]->type)->size);
                break;
        case CALL+F: setreg(p, opsize(p->op)==4?freg[0]:freg2[0]);     break;
        case CALL+I: case CALL+P: case CALL+U:
        case CALL+V: setreg(p, oreg[0]);      break;
        case RET+F:  rtarget(p, 0, opsize(p->op)==4?freg[0]:freg2[0]);  break;
        case RET+I: case RET+P: case RET+U:
                rtarget(p, 0, ireg[0]);
                p->kids[0]->x.registered = 1;
                break;
        case ARG+I: case ARG+P: case ARG+U:
                if (p->syms[RX]->u.c.v.i < 6) {
                        rtarget(p, 0, oreg[p->syms[RX]->u.c.v.i]);
                        p->op = LOAD+opkind(p->op);
                        setreg(p, oreg[p->syms[RX]->u.c.v.i]);
                }
                break;
        }
}
static void clobber(Node p) {
        assert(p);
        switch (specific(p->op)) {
        case CALL+B: case CALL+F: case CALL+I:
                spill(~(unsigned)3, FREG, p);
                break;
        case CALL+V:
                spill(oreg[0]->x.regnode->mask, IREG, p);
                spill(~(unsigned)3, FREG, p);
                break;
        case ARG+F:
                if (opsize(p->op) == 4 && p->syms[2]->u.c.v.i <= 6)
                        spill((1<<(p->syms[2]->u.c.v.i + 8)), IREG, p);
                else if (opsize(p->op) == 8 && p->syms[2]->u.c.v.i <= 5)
                        spill((3<<(p->syms[2]->u.c.v.i + 8))&0xff00, IREG, p);
                break;
        }
}
static int imm(Node p) {
        return range(p, -4096, 4091);
}
static void doarg(Node p) {
        assert(p && p->syms[0] && p->op != ARG+B);
        p->syms[RX] = intconst(mkactual(4,
                p->syms[0]->u.c.v.i)/4);
}
static void emit2(Node p) {
        switch (p->op) {
        case INDIR+F+sizeop(8):
                if (generic(p->kids[0]->op) != VREG) {
                        int dst = getregnum(p);
                        print("ld ["); emitasm(p->kids[0], _base_NT); print(  "],%%f%d; ", dst);
                        print("ld ["); emitasm(p->kids[0], _base_NT); print("+4],%%f%d\n", dst+1);
                }
                break;
        case ASGN+F+sizeop(8):
                if (generic(p->kids[0]->op) != VREG) {
                        int src = getregnum(p->kids[1]);
                        print("st %%f%d,[", src);   emitasm(p->kids[0], _base_NT); print("]; ");
                        print("st %%f%d,[", src+1); emitasm(p->kids[0], _base_NT); print("+4]\n");
                }
                break;
        case ARG+F+sizeop(4): {
                int n = p->syms[RX]->u.c.v.i;
                print("st %%f%d,[%%sp+4*%d+68]\n",
                        getregnum(p->x.kids[0]), n);
                if (n <= 5)
                        print("ld [%%sp+4*%d+68],%%o%d\n", n, n);
                break;
        }
        case ARG+F+sizeop(8): {
                int n = p->syms[RX]->u.c.v.i;
                int src = getregnum(p->x.kids[0]);
                print("st %%f%d,[%%sp+4*%d+68]\n", src, n);
                print("st %%f%d,[%%sp+4*%d+68]\n", src+1, n+1);
                if (n <= 5)
                        print("ld [%%sp+4*%d+68],%%o%d\n", n, n);
                if (n <= 4)
                        print("ld [%%sp+4*%d+68],%%o%d\n", n+1, n+1);
                break;
        }
        case LOAD+F+sizeop(8): {
                int dst = getregnum(p);
                int src = getregnum(p->x.kids[0]);
                print("fmovs %%f%d,%%f%d; ", src,   dst);
                print("fmovs %%f%d,%%f%d\n", src+1, dst+1);
                break;
        }
        case NEG+F+sizeop(8): {
                int dst = getregnum(p);
                int src = getregnum(p->x.kids[0]);
                print("fnegs %%f%d,%%f%d; ", src,   dst);
                print("fmovs %%f%d,%%f%d\n", src+1, dst+1);
                break;
        }
        case ASGN+B: {
                static int tmpregs[] = { 1, 2, 3 };
                dalign = salign = p->syms[1]->u.c.v.i;
                blkcopy(getregnum(p->x.kids[0]), 0,
                        getregnum(p->x.kids[1]), 0,
                        p->syms[0]->u.c.v.i, tmpregs);
                break;
        }
        }
}
static void local(Symbol p) {
        if (retstruct) {
                assert(p == retv);
                p->x.name = stringd(4*16);
                p->x.offset = 4*16;
                p->sclass = AUTO;
                retstruct = 0;
                return;
        }
        if (isscalar(p->type) && !p->addressed && !isfloat(p->type))
                p->sclass = REGISTER;
        if (askregvar(p, rmap(ttob(p->type))) == 0)
                mkauto(p);
        else if (p->scope > LOCAL)
                regvars++;
}
static void function(Symbol f, Symbol caller[], Symbol callee[], int ncalls) {
        int autos = 0, i, leaf, reg, varargs;

        if (IR == &solarisIR)
                globalend();
        regvars = 0;
        for (i = 0; callee[i]; i++)
                ;
        varargs = variadic(f->type)
                || i > 0 && strcmp(callee[i-1]->name,
                        "__builtin_va_alist") == 0;
        usedmask[0] = usedmask[1] = 0;
        freemask[0] = freemask[1] = ~(unsigned)0;
        for (i = 0; i < 8; i++)
                ireg[i]->x.regnode->vbl = NULL;
        offset = 68;
        maxargoffset = 24;
        reg = 0;
        for (i = 0; callee[i]; i++) {
                Symbol p = callee[i], q = caller[i];
                int size = roundup(q->type->size, 4);
                assert(q);
                if (isfloat(p->type) || reg >= 6) {
                        p->x.offset = q->x.offset = offset;
                        p->x.name = q->x.name = stringd(offset);
                        p->sclass = q->sclass = AUTO;
                        autos++;
                }
                else if (p->addressed || varargs) {
                        p->x.offset = offset;
                        p->x.name = stringd(p->x.offset);
                        p->sclass = AUTO;
                        q->sclass = REGISTER;
                        askregvar(q, ireg[reg]);
                        assert(q->x.regnode);
                        autos++;
                }
                else {
                        p->sclass = q->sclass = REGISTER;
                        askregvar(p, ireg[reg]);
                        assert(p->x.regnode);
                        q->x.name = p->x.name;
                }
                offset += size;
                reg += isstruct(p->type) ? 1 : size/4;
        }
        assert(caller[i] == 0);
        offset = maxoffset = 0;
        retstruct = isstruct(freturn(f->type));
        gencode(caller, callee);
        maxargoffset = roundup(maxargoffset, 4);
        framesize = roundup(maxoffset + maxargoffset + 4*(16+1), 8);
        assert(!varargs || autos);
        leaf = (!ncalls
                && !maxoffset && !autos && !regvars
                && !isstruct(freturn(f->type))
                && !(usedmask[IREG]&0x00ffff01)
                && !(usedmask[FREG]&~(unsigned)3)
                && !pflag && !glevel);
        print(".align 4\n%s:\n", f->x.name);
        if (leaf) {
                for (i = 0; caller[i] && callee[i]; i++) {
                        Symbol p = caller[i], q = callee[i];
                        if (p->sclass == REGISTER && q->sclass == REGISTER) {
                                assert(q->x.regnode);
                                assert(q->x.regnode->set == IREG);
                                assert(q->x.regnode->number >= 24);
                                assert(q->x.regnode->number <= 31);
                                p->x.name = greg[q->x.regnode->number - 16]->x.name;
                        }
                }
                renameregs();
        } else if (framesize <= 4095)
                print("save %%sp,%d,%%sp\n", -framesize);
        else
                print("set %d,%%g1; save %%sp,%%g1,%%sp\n", -framesize);
        if (varargs)
                for (; reg < 6; reg++)
                        print("st %%i%d,[%%fp+%d]\n", reg, 4*reg + 68);
        else {
                offset = 4*(16 + 1);
                reg = 0;
                for (i = 0; caller[i]; i++) {
                        Symbol p = caller[i];
                        if (isfloat(p->type) && p->type->size == 8 && reg <= 4) {
                                print("st %%r%d,[%%fp+%d]\n",
                                        ireg[reg++]->x.regnode->number, offset);
                                print("st %%r%d,[%%fp+%d]\n",
                                        ireg[reg++]->x.regnode->number, offset + 4);
                        } else if (isfloat(p->type) && p->type->size == 4 && reg <= 5)
                                print("st %%r%d,[%%fp+%d]\n",
                                        ireg[reg++]->x.regnode->number, offset);
                        else
                                reg++;
                        offset += roundup(p->type->size, 4);
                }
        }
        if (pflag) {
                int lab = genlabel(1);
                print("set L%d,%%o0; call mcount; nop\n", lab);
                print(".seg \"data\"\n.align 4; L%d:.word 0\n.seg \"text\"\n", lab);
        }
        emitcode();
        if (isstruct(freturn(f->type)))
                print("jmp %%i7+12; restore\n");
        else if (!leaf)
                print("ret; restore\n");
        else {
                renameregs();
                print("retl; nop\n");
        }
        if (IR == &solarisIR) {
                print(".type %s,#function\n", f->x.name);
                print(".size %s,.-%s\n", f->x.name, f->x.name);
        }
}
#define exch(x, y, t) (((t) = x), ((x) = (y)), ((y) = (t)))

static void renameregs(void) {
        int i;

        for (i = 0; i < 8; i++) {
                char *ptmp;
                int itmp;
                if (ireg[i]->x.regnode->vbl)
                        ireg[i]->x.regnode->vbl->x.name = oreg[i]->x.name;
                exch(ireg[i]->x.name, oreg[i]->x.name, ptmp);
                exch(ireg[i]->x.regnode->number,
                        oreg[i]->x.regnode->number, itmp);
        }
}
static void defconst(int suffix, int size, Value v) {
        if (suffix == F && size == 4) {
                float f = v.d;
                print(".word 0x%x\n", *(unsigned *)&f);
        } else if (suffix == F && size == 8) {
                double d = v.d;
                unsigned *p = (unsigned *)&d;
                print(".word 0x%x\n.word 0x%x\n", p[swap], p[!swap]);
        } else if (suffix == P)
                print(".word 0x%x\n", (unsigned)v.p);
        else if (size == 1)
                print(".byte 0x%x\n", (unsigned)((unsigned char)(suffix == I ? v.i : v.u)));
        else if (size == 2)
                print(".half 0x%x\n", (unsigned)((unsigned short)(suffix == I ? v.i : v.u)));
        else if (size == 4)
                print(".word 0x%x\n", (unsigned)(suffix == I ? v.i : v.u));
        else assert(0);
}

static void defaddress(Symbol p) {
        print(".word %s\n", p->x.name);
}

static void defstring(int n, char *str) {
        char *s;

        for (s = str; s < str + n; s++)
                print(".byte %d\n", (*s)&0377);
}

static void address(Symbol q, Symbol p, long n) {
        if (p->scope == GLOBAL || p->sclass == STATIC || p->sclass == EXTERN)
                q->x.name = stringf("%s%s%D", p->x.name, n >= 0 ? "+" : "", n);
        else {
                assert(n <= INT_MAX && n >= INT_MIN);
                q->x.offset = p->x.offset + n;
                q->x.name = stringd(q->x.offset);
        }
}
static void export(Symbol p) {
        print(".global %s\n", p->x.name);
}
static void import(Symbol p) {}
static void defsymbol(Symbol p) {
        if (p->scope >= LOCAL && p->sclass == STATIC)
                p->x.name = stringf("%d", genlabel(1));
        else
                assert(p->scope != CONSTANTS || isint(p->type) || isptr(p->type)),
                p->x.name = p->name;
        if (p->scope >= LABELS)
                p->x.name = stringf(p->generated ? "L%s" : "_%s",
                        p->x.name);
}
static void segment(int n) {
        cseg = n;
        switch (n) {
        case CODE: print(".seg \"text\"\n"); break;
        case BSS:  print(".seg \"bss\"\n");  break;
        case DATA: print(".seg \"data\"\n"); break;
        case LIT:  print(".seg \"text\"\n"); break;
        }
}
static void space(int n) {
        if (cseg != BSS)
                print(".skip %d\n", n);
}
static void global(Symbol p) {
        print(".align %d\n", p->type->align);
        assert(p->u.seg);
        if (p->u.seg == BSS
        && (p->sclass == STATIC || Aflag >= 2))
                print(".reserve %s,%d\n", p->x.name, p->type->size);
        else if (p->u.seg == BSS)
                print(".common %s,%d\n",  p->x.name, p->type->size);
        else
                print("%s:\n", p->x.name);
}
static void blkfetch(int k, int off, int reg, int tmp) {
        assert(k == 1 || k == 2 || k == 4);
        assert(salign >= k);
        if (k == 1)
                print("ldub [%%r%d+%d],%%r%d\n", reg, off, tmp);
        else if (k == 2)
                print("lduh [%%r%d+%d],%%r%d\n", reg, off, tmp);
        else
                print("ld [%%r%d+%d],%%r%d\n",   reg, off, tmp);
}
static void blkstore(int k, int off, int reg, int tmp) {
        assert(k == 1 || k == 2 || k == 4);
        assert(dalign >= k);
        if (k == 1)
                print("stb %%r%d,[%%r%d+%d]\n", tmp, reg, off);
        else if (k == 2)
                print("sth %%r%d,[%%r%d+%d]\n", tmp, reg, off);
        else
                print("st %%r%d,[%%r%d+%d]\n",  tmp, reg, off);
}
static void blkloop(int dreg, int doff, int sreg, int soff, int size, int tmps[]) {
        if ((size&~7) < 4096) {
                print("add %%r%d,%d,%%r%d\n", sreg, size&~7, sreg);
                print("add %%r%d,%d,%%r%d\n", dreg, size&~7, tmps[2]);
        } else {
                print("set %d,%%r%d\n", size&~7, tmps[2]);
                print("add %%r%d,%%r%d,%%r%d\n", sreg, tmps[2], sreg);
                print("add %%r%d,%%r%d,%%r%d\n", dreg, tmps[2], tmps[2]);
        }
        blkcopy(tmps[2], doff, sreg, soff, size&7, tmps);
        print("1: dec 8,%%r%d\n", tmps[2]);
        blkcopy(tmps[2], doff, sreg, soff - 8, 8, tmps);
        print("cmp %%r%d,%%r%d; ", tmps[2], dreg);
        print("bgt 1b; ");
        print("dec 8,%%r%d\n", sreg);
}
static void defsymbol2(Symbol p) {
        if (p->scope >= LOCAL && p->sclass == STATIC)
                p->x.name = stringf(".%d", genlabel(1));
        else
                assert(p->scope != CONSTANTS || isint(p->type) || isptr(p->type)),
                p->x.name = p->name;
        if (p->scope >= LABELS)
                p->x.name = stringf(p->generated ? ".L%s" : "%s",
                        p->x.name);
}

static Symbol prevg;

static void globalend(void) {
        if (prevg && prevg->type->size > 0)
                print(".size %s,%d\n", prevg->x.name, prevg->type->size);
        prevg = NULL;
}

static void export2(Symbol p) {
        globalend();
        print(".global %s\n", p->x.name);
}

static void progend2(void) {
        globalend();
}

static void global2(Symbol p) {
        globalend();
        assert(p->u.seg);
        if (!p->generated) {
                print(".type %s,#%s\n", p->x.name,
                        isfunc(p->type) ? "function" : "object");
                if (p->type->size > 0)
                        print(".size %s,%d\n", p->x.name, p->type->size);
                else
                        prevg = p;
        }
        if (p->u.seg == BSS && p->sclass == STATIC)
                print(".local %s\n.common %s,%d,%d\n", p->x.name, p->x.name,
                        p->type->size, p->type->align);
        else if (p->u.seg == BSS && Aflag >= 2)
                print(".align %d\n%s:.skip %d\n", p->type->align, p->x.name,
                        p->type->size);
        else if (p->u.seg == BSS)
                print(".common %s,%d,%d\n", p->x.name, p->type->size, p->type->align);
        else
                print(".align %d\n%s:\n", p->type->align, p->x.name);
}

static void segment2(int n) {
        cseg = n;
        switch (n) {
        case CODE: print(".section \".text\"\n");   break;
        case BSS:  print(".section \".bss\"\n");    break;
        case DATA: print(".section \".data\"\n");   break;
        case LIT:  print(".section \".rodata\"\n"); break;
        }
}
Interface sparcIR = {
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
        0,  /* little_endian */
        0,  /* mulops_calls */
        1,  /* wants_callb */
        0,  /* wants_argb */
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
        stabblock, 0, 0, stabinit, stabline, stabsym, stabtype,
        {
                1,  /* max_unaligned_load */
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

Interface solarisIR = {
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
        0,      /* mulops_calls */
        1,      /* wants_callb */
        0,      /* wants_argb */
        1,      /* left_to_right */
        0,      /* wants_dag */
        0,      /* unsigned_char */
        address,
        blockbeg,
        blockend,
        defaddress,
        defconst,
        defstring,
        defsymbol2,
        emit,
        export2,
        function,
        gen,
        global2,
        import,
        local,
        progbeg,
        progend2,
        segment2,
        space,
        stabblock, 0, 0, stabinit, stabline, stabsym, stabtype,
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
