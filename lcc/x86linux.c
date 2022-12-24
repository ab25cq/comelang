/* x86/linux lburg spec. Derived from x86.md by
Marcos Ramirez <marcos@inf.utfsm.cl>
Horst von Brand <vonbrand@sleipnir.valparaiso.cl>
Jacob Navia <jacob@jacob.remcomp.fr>
*/
enum { EAX=0, ECX=1, EDX=2, EBX=3, ESI=6, EDI=7 };
#include "c.h"
#define NODEPTR_TYPE Node
#define OP_LABEL(p) ((p)->op)
#define LEFT_CHILD(p) ((p)->kids[0])
#define RIGHT_CHILD(p) ((p)->kids[1])
#define STATE_LABEL(p) ((p)->x.state)
extern int ckstack(Node, int);
extern int memop(Node);
extern int sametree(Node, Node);
static Symbol charreg[32], shortreg[32], intreg[32];
static Symbol fltreg[32];

static Symbol charregw, shortregw, intregw, fltregw;

static int cseg;

static Symbol quo, rem;

extern char *stabprefix;
extern void stabblock(int, int, Symbol*);
extern void stabend(Coordinate *, Symbol, Coordinate **, Symbol *, Symbol *);
extern void stabfend(Symbol, int);
extern void stabinit(char *, int, char *[]);
extern void stabline(Coordinate *);
extern void stabsym(Symbol);
extern void stabtype(Symbol);

static int pflag = 0;
static char rcsid[] = "$Id$";

#define hasargs(p) (p->syms[0] && p->syms[0]->u.c.v.i > 0 ? 0 : LBURG_MAX)
/*
generated at Tue Sep 27 04:30:17 2022
by $Id$
*/
static void _kids(NODEPTR_TYPE, int, NODEPTR_TYPE[]);
static void _label(NODEPTR_TYPE);
static int _rule(void*, int);

#define _stmt_NT 1
#define _reg_NT 2
#define _freg_NT 3
#define _cnst_NT 4
#define _con_NT 5
#define _acon_NT 6
#define _baseaddr_NT 7
#define _base_NT 8
#define _index_NT 9
#define _con1_NT 10
#define _con2_NT 11
#define _con3_NT 12
#define _con0_NT 13
#define _addr_NT 14
#define _mem1_NT 15
#define _mem2_NT 16
#define _mem4_NT 17
#define _rc_NT 18
#define _mr_NT 19
#define _mr1_NT 20
#define _mr2_NT 21
#define _mrc_NT 22
#define _rc5_NT 23
#define _mrca_NT 24
#define _memf_NT 25
#define _flt_NT 26
#define _flt2_NT 27
#define _addrj_NT 28
#define _cmpf_NT 29

static char *_ntname[] = {
	0,
	"stmt",
	"reg",
	"freg",
	"cnst",
	"con",
	"acon",
	"baseaddr",
	"base",
	"index",
	"con1",
	"con2",
	"con3",
	"con0",
	"addr",
	"mem1",
	"mem2",
	"mem4",
	"rc",
	"mr",
	"mr1",
	"mr2",
	"mrc",
	"rc5",
	"mrca",
	"memf",
	"flt",
	"flt2",
	"addrj",
	"cmpf",
	0
};

struct _state {
	short cost[30];
	struct {
		unsigned int _stmt:7;
		unsigned int _reg:7;
		unsigned int _freg:6;
		unsigned int _cnst:4;
		unsigned int _con:1;
		unsigned int _acon:2;
		unsigned int _baseaddr:1;
		unsigned int _base:3;
		unsigned int _index:3;
		unsigned int _con1:2;
		unsigned int _con2:2;
		unsigned int _con3:2;
		unsigned int _con0:2;
		unsigned int _addr:4;
		unsigned int _mem1:2;
		unsigned int _mem2:2;
		unsigned int _mem4:2;
		unsigned int _rc:2;
		unsigned int _mr:2;
		unsigned int _mr1:2;
		unsigned int _mr2:2;
		unsigned int _mrc:3;
		unsigned int _rc5:2;
		unsigned int _mrca:3;
		unsigned int _memf:3;
		unsigned int _flt:2;
		unsigned int _flt2:2;
		unsigned int _addrj:2;
		unsigned int _cmpf:3;
	} rule;
};

static short _nts_0[] = { 0 };
static short _nts_1[] = { _reg_NT, 0 };
static short _nts_2[] = { _cnst_NT, 0 };
static short _nts_3[] = { _freg_NT, 0 };
static short _nts_4[] = { _reg_NT, _acon_NT, 0 };
static short _nts_5[] = { _reg_NT, _con1_NT, 0 };
static short _nts_6[] = { _reg_NT, _con2_NT, 0 };
static short _nts_7[] = { _reg_NT, _con3_NT, 0 };
static short _nts_8[] = { _base_NT, 0 };
static short _nts_9[] = { _baseaddr_NT, 0 };
static short _nts_10[] = { _index_NT, _baseaddr_NT, 0 };
static short _nts_11[] = { _reg_NT, _baseaddr_NT, 0 };
static short _nts_12[] = { _index_NT, _reg_NT, 0 };
static short _nts_13[] = { _index_NT, 0 };
static short _nts_14[] = { _addr_NT, 0 };
static short _nts_15[] = { _con_NT, 0 };
static short _nts_16[] = { _mem4_NT, 0 };
static short _nts_17[] = { _mem1_NT, 0 };
static short _nts_18[] = { _mem2_NT, 0 };
static short _nts_19[] = { _rc_NT, 0 };
static short _nts_20[] = { _mr_NT, 0 };
static short _nts_21[] = { _mr1_NT, 0 };
static short _nts_22[] = { _mr2_NT, 0 };
static short _nts_23[] = { _reg_NT, _mrc_NT, 0 };
static short _nts_24[] = { _addr_NT, _mem4_NT, _con1_NT, 0 };
static short _nts_25[] = { _addr_NT, _mem4_NT, _rc_NT, 0 };
static short _nts_26[] = { _addr_NT, _mem4_NT, 0 };
static short _nts_27[] = { _reg_NT, _rc5_NT, 0 };
static short _nts_28[] = { _addr_NT, _mem4_NT, _rc5_NT, 0 };
static short _nts_29[] = { _con_NT, _mr_NT, 0 };
static short _nts_30[] = { _reg_NT, _mr_NT, 0 };
static short _nts_31[] = { _reg_NT, _reg_NT, 0 };
static short _nts_32[] = { _addr_NT, _rc_NT, 0 };
static short _nts_33[] = { _mrca_NT, 0 };
static short _nts_34[] = { _memf_NT, 0 };
static short _nts_35[] = { _addr_NT, _freg_NT, 0 };
static short _nts_36[] = { _freg_NT, _flt_NT, 0 };
static short _nts_37[] = { _freg_NT, _flt2_NT, 0 };
static short _nts_38[] = { _addrj_NT, 0 };
static short _nts_39[] = { _mem4_NT, _rc_NT, 0 };
static short _nts_40[] = { _mr_NT, _con_NT, _con0_NT, 0 };
static short _nts_41[] = { _addr_NT, _con_NT, _con0_NT, 0 };
static short _nts_42[] = { _cmpf_NT, _freg_NT, 0 };
static short _nts_43[] = { _freg_NT, _addr_NT, 0 };

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
	_nts_2,	/* 35 */
	_nts_1,	/* 36 */
	_nts_3,	/* 37 */
	_nts_0,	/* 38 */
	_nts_0,	/* 39 */
	_nts_2,	/* 40 */
	_nts_0,	/* 41 */
	_nts_1,	/* 42 */
	_nts_4,	/* 43 */
	_nts_4,	/* 44 */
	_nts_4,	/* 45 */
	_nts_0,	/* 46 */
	_nts_0,	/* 47 */
	_nts_1,	/* 48 */
	_nts_5,	/* 49 */
	_nts_6,	/* 50 */
	_nts_7,	/* 51 */
	_nts_5,	/* 52 */
	_nts_6,	/* 53 */
	_nts_7,	/* 54 */
	_nts_0,	/* 55 */
	_nts_0,	/* 56 */
	_nts_0,	/* 57 */
	_nts_0,	/* 58 */
	_nts_0,	/* 59 */
	_nts_0,	/* 60 */
	_nts_0,	/* 61 */
	_nts_0,	/* 62 */
	_nts_8,	/* 63 */
	_nts_9,	/* 64 */
	_nts_10,	/* 65 */
	_nts_10,	/* 66 */
	_nts_10,	/* 67 */
	_nts_11,	/* 68 */
	_nts_11,	/* 69 */
	_nts_11,	/* 70 */
	_nts_12,	/* 71 */
	_nts_12,	/* 72 */
	_nts_12,	/* 73 */
	_nts_13,	/* 74 */
	_nts_14,	/* 75 */
	_nts_14,	/* 76 */
	_nts_14,	/* 77 */
	_nts_14,	/* 78 */
	_nts_14,	/* 79 */
	_nts_14,	/* 80 */
	_nts_14,	/* 81 */
	_nts_1,	/* 82 */
	_nts_15,	/* 83 */
	_nts_1,	/* 84 */
	_nts_16,	/* 85 */
	_nts_1,	/* 86 */
	_nts_17,	/* 87 */
	_nts_1,	/* 88 */
	_nts_18,	/* 89 */
	_nts_16,	/* 90 */
	_nts_17,	/* 91 */
	_nts_18,	/* 92 */
	_nts_19,	/* 93 */
	_nts_14,	/* 94 */
	_nts_20,	/* 95 */
	_nts_21,	/* 96 */
	_nts_22,	/* 97 */
	_nts_15,	/* 98 */
	_nts_1,	/* 99 */
	_nts_1,	/* 100 */
	_nts_1,	/* 101 */
	_nts_1,	/* 102 */
	_nts_1,	/* 103 */
	_nts_1,	/* 104 */
	_nts_1,	/* 105 */
	_nts_23,	/* 106 */
	_nts_23,	/* 107 */
	_nts_23,	/* 108 */
	_nts_23,	/* 109 */
	_nts_23,	/* 110 */
	_nts_23,	/* 111 */
	_nts_23,	/* 112 */
	_nts_23,	/* 113 */
	_nts_23,	/* 114 */
	_nts_23,	/* 115 */
	_nts_23,	/* 116 */
	_nts_23,	/* 117 */
	_nts_24,	/* 118 */
	_nts_24,	/* 119 */
	_nts_24,	/* 120 */
	_nts_24,	/* 121 */
	_nts_24,	/* 122 */
	_nts_24,	/* 123 */
	_nts_25,	/* 124 */
	_nts_25,	/* 125 */
	_nts_25,	/* 126 */
	_nts_25,	/* 127 */
	_nts_25,	/* 128 */
	_nts_25,	/* 129 */
	_nts_25,	/* 130 */
	_nts_25,	/* 131 */
	_nts_25,	/* 132 */
	_nts_25,	/* 133 */
	_nts_1,	/* 134 */
	_nts_1,	/* 135 */
	_nts_1,	/* 136 */
	_nts_26,	/* 137 */
	_nts_26,	/* 138 */
	_nts_26,	/* 139 */
	_nts_27,	/* 140 */
	_nts_27,	/* 141 */
	_nts_27,	/* 142 */
	_nts_27,	/* 143 */
	_nts_28,	/* 144 */
	_nts_28,	/* 145 */
	_nts_28,	/* 146 */
	_nts_28,	/* 147 */
	_nts_0,	/* 148 */
	_nts_1,	/* 149 */
	_nts_23,	/* 150 */
	_nts_29,	/* 151 */
	_nts_30,	/* 152 */
	_nts_31,	/* 153 */
	_nts_31,	/* 154 */
	_nts_31,	/* 155 */
	_nts_31,	/* 156 */
	_nts_1,	/* 157 */
	_nts_1,	/* 158 */
	_nts_14,	/* 159 */
	_nts_14,	/* 160 */
	_nts_14,	/* 161 */
	_nts_14,	/* 162 */
	_nts_1,	/* 163 */
	_nts_1,	/* 164 */
	_nts_1,	/* 165 */
	_nts_1,	/* 166 */
	_nts_1,	/* 167 */
	_nts_1,	/* 168 */
	_nts_1,	/* 169 */
	_nts_1,	/* 170 */
	_nts_16,	/* 171 */
	_nts_19,	/* 172 */
	_nts_0,	/* 173 */
	_nts_0,	/* 174 */
	_nts_32,	/* 175 */
	_nts_32,	/* 176 */
	_nts_32,	/* 177 */
	_nts_32,	/* 178 */
	_nts_32,	/* 179 */
	_nts_32,	/* 180 */
	_nts_32,	/* 181 */
	_nts_33,	/* 182 */
	_nts_33,	/* 183 */
	_nts_33,	/* 184 */
	_nts_31,	/* 185 */
	_nts_1,	/* 186 */
	_nts_14,	/* 187 */
	_nts_14,	/* 188 */
	_nts_14,	/* 189 */
	_nts_14,	/* 190 */
	_nts_34,	/* 191 */
	_nts_35,	/* 192 */
	_nts_35,	/* 193 */
	_nts_35,	/* 194 */
	_nts_3,	/* 195 */
	_nts_3,	/* 196 */
	_nts_3,	/* 197 */
	_nts_3,	/* 198 */
	_nts_34,	/* 199 */
	_nts_3,	/* 200 */
	_nts_34,	/* 201 */
	_nts_3,	/* 202 */
	_nts_36,	/* 203 */
	_nts_36,	/* 204 */
	_nts_37,	/* 205 */
	_nts_37,	/* 206 */
	_nts_36,	/* 207 */
	_nts_36,	/* 208 */
	_nts_37,	/* 209 */
	_nts_37,	/* 210 */
	_nts_3,	/* 211 */
	_nts_3,	/* 212 */
	_nts_3,	/* 213 */
	_nts_14,	/* 214 */
	_nts_1,	/* 215 */
	_nts_14,	/* 216 */
	_nts_1,	/* 217 */
	_nts_0,	/* 218 */
	_nts_1,	/* 219 */
	_nts_16,	/* 220 */
	_nts_0,	/* 221 */
	_nts_38,	/* 222 */
	_nts_39,	/* 223 */
	_nts_39,	/* 224 */
	_nts_39,	/* 225 */
	_nts_39,	/* 226 */
	_nts_39,	/* 227 */
	_nts_39,	/* 228 */
	_nts_39,	/* 229 */
	_nts_39,	/* 230 */
	_nts_39,	/* 231 */
	_nts_39,	/* 232 */
	_nts_23,	/* 233 */
	_nts_23,	/* 234 */
	_nts_23,	/* 235 */
	_nts_23,	/* 236 */
	_nts_23,	/* 237 */
	_nts_23,	/* 238 */
	_nts_23,	/* 239 */
	_nts_23,	/* 240 */
	_nts_23,	/* 241 */
	_nts_23,	/* 242 */
	_nts_23,	/* 243 */
	_nts_23,	/* 244 */
	_nts_40,	/* 245 */
	_nts_40,	/* 246 */
	_nts_41,	/* 247 */
	_nts_41,	/* 248 */
	_nts_41,	/* 249 */
	_nts_41,	/* 250 */
	_nts_41,	/* 251 */
	_nts_14,	/* 252 */
	_nts_14,	/* 253 */
	_nts_14,	/* 254 */
	_nts_3,	/* 255 */
	_nts_42,	/* 256 */
	_nts_42,	/* 257 */
	_nts_42,	/* 258 */
	_nts_42,	/* 259 */
	_nts_42,	/* 260 */
	_nts_42,	/* 261 */
	_nts_42,	/* 262 */
	_nts_42,	/* 263 */
	_nts_42,	/* 264 */
	_nts_42,	/* 265 */
	_nts_42,	/* 266 */
	_nts_42,	/* 267 */
	_nts_43,	/* 268 */
	_nts_35,	/* 269 */
	_nts_43,	/* 270 */
	_nts_35,	/* 271 */
	_nts_43,	/* 272 */
	_nts_43,	/* 273 */
	_nts_43,	/* 274 */
	_nts_35,	/* 275 */
	_nts_43,	/* 276 */
	_nts_35,	/* 277 */
	_nts_43,	/* 278 */
	_nts_43,	/* 279 */
	_nts_43,	/* 280 */
	_nts_43,	/* 281 */
	_nts_43,	/* 282 */
	_nts_43,	/* 283 */
	_nts_34,	/* 284 */
	_nts_38,	/* 285 */
	_nts_38,	/* 286 */
	_nts_38,	/* 287 */
	_nts_38,	/* 288 */
	_nts_38,	/* 289 */
	_nts_38,	/* 290 */
	_nts_38,	/* 291 */
	_nts_38,	/* 292 */
	_nts_38,	/* 293 */
	_nts_38,	/* 294 */
	_nts_38,	/* 295 */
	_nts_38,	/* 296 */
	_nts_38,	/* 297 */
	_nts_38,	/* 298 */
	_nts_38,	/* 299 */
	_nts_38,	/* 300 */
	_nts_38,	/* 301 */
	_nts_1,	/* 302 */
	_nts_1,	/* 303 */
	_nts_1,	/* 304 */
	_nts_3,	/* 305 */
	_nts_3,	/* 306 */
};

static char *_templates[] = {
/* 0 */	0,
/* 1 */	"# read register\n",	/* reg: INDIRI1(VREGP) */
/* 2 */	"# read register\n",	/* reg: INDIRU1(VREGP) */
/* 3 */	"# read register\n",	/* reg: INDIRI2(VREGP) */
/* 4 */	"# read register\n",	/* reg: INDIRU2(VREGP) */
/* 5 */	"# read register\n",	/* reg: INDIRI4(VREGP) */
/* 6 */	"# read register\n",	/* reg: INDIRP4(VREGP) */
/* 7 */	"# read register\n",	/* reg: INDIRU4(VREGP) */
/* 8 */	"# read register\n",	/* reg: INDIRI8(VREGP) */
/* 9 */	"# read register\n",	/* reg: INDIRP8(VREGP) */
/* 10 */	"# read register\n",	/* reg: INDIRU8(VREGP) */
/* 11 */	"# read register\n",	/* freg: INDIRF4(VREGP) */
/* 12 */	"# read register\n",	/* freg: INDIRF8(VREGP) */
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
/* 25 */	"%a",	/* cnst: CNSTI1 */
/* 26 */	"%a",	/* cnst: CNSTU1 */
/* 27 */	"%a",	/* cnst: CNSTI2 */
/* 28 */	"%a",	/* cnst: CNSTU2 */
/* 29 */	"%a",	/* cnst: CNSTI4 */
/* 30 */	"%a",	/* cnst: CNSTU4 */
/* 31 */	"%a",	/* cnst: CNSTP4 */
/* 32 */	"%a",	/* cnst: CNSTI8 */
/* 33 */	"%a",	/* cnst: CNSTU8 */
/* 34 */	"%a",	/* cnst: CNSTP8 */
/* 35 */	"$%0",	/* con: cnst */
/* 36 */	"",	/* stmt: reg */
/* 37 */	"",	/* stmt: freg */
/* 38 */	"%a",	/* acon: ADDRGP4 */
/* 39 */	"%a",	/* acon: ADDRGP8 */
/* 40 */	"%0",	/* acon: cnst */
/* 41 */	"%a",	/* baseaddr: ADDRGP4 */
/* 42 */	"(%0)",	/* base: reg */
/* 43 */	"%1(%0)",	/* base: ADDI4(reg,acon) */
/* 44 */	"%1(%0)",	/* base: ADDP4(reg,acon) */
/* 45 */	"%1(%0)",	/* base: ADDU4(reg,acon) */
/* 46 */	"%a(%%ebp)",	/* base: ADDRFP4 */
/* 47 */	"%a(%%ebp)",	/* base: ADDRLP4 */
/* 48 */	"%0",	/* index: reg */
/* 49 */	"%0,2",	/* index: LSHI4(reg,con1) */
/* 50 */	"%0,4",	/* index: LSHI4(reg,con2) */
/* 51 */	"%0,8",	/* index: LSHI4(reg,con3) */
/* 52 */	"%0,2",	/* index: LSHU4(reg,con1) */
/* 53 */	"%0,4",	/* index: LSHU4(reg,con2) */
/* 54 */	"%0,8",	/* index: LSHU4(reg,con3) */
/* 55 */	"1",	/* con0: CNSTI4 */
/* 56 */	"1",	/* con0: CNSTU4 */
/* 57 */	"1",	/* con1: CNSTI4 */
/* 58 */	"1",	/* con1: CNSTU4 */
/* 59 */	"2",	/* con2: CNSTI4 */
/* 60 */	"2",	/* con2: CNSTU4 */
/* 61 */	"3",	/* con3: CNSTI4 */
/* 62 */	"3",	/* con3: CNSTU4 */
/* 63 */	"%0",	/* addr: base */
/* 64 */	"%0",	/* addr: baseaddr */
/* 65 */	"%1(,%0)",	/* addr: ADDI4(index,baseaddr) */
/* 66 */	"%1(,%0)",	/* addr: ADDP4(index,baseaddr) */
/* 67 */	"%1(,%0)",	/* addr: ADDU4(index,baseaddr) */
/* 68 */	"%1(%0)",	/* addr: ADDI4(reg,baseaddr) */
/* 69 */	"%1(%0)",	/* addr: ADDP4(reg,baseaddr) */
/* 70 */	"%1(%0)",	/* addr: ADDU4(reg,baseaddr) */
/* 71 */	"(%1,%0)",	/* addr: ADDI4(index,reg) */
/* 72 */	"(%1,%0)",	/* addr: ADDP4(index,reg) */
/* 73 */	"(%1,%0)",	/* addr: ADDU4(index,reg) */
/* 74 */	"(,%0)",	/* addr: index */
/* 75 */	"%0",	/* mem1: INDIRI1(addr) */
/* 76 */	"%0",	/* mem1: INDIRU1(addr) */
/* 77 */	"%0",	/* mem2: INDIRI2(addr) */
/* 78 */	"%0",	/* mem2: INDIRU2(addr) */
/* 79 */	"%0",	/* mem4: INDIRI4(addr) */
/* 80 */	"%0",	/* mem4: INDIRU4(addr) */
/* 81 */	"%0",	/* mem4: INDIRP4(addr) */
/* 82 */	"%0",	/* rc: reg */
/* 83 */	"%0",	/* rc: con */
/* 84 */	"%0",	/* mr: reg */
/* 85 */	"%0",	/* mr: mem4 */
/* 86 */	"%0",	/* mr1: reg */
/* 87 */	"%0",	/* mr1: mem1 */
/* 88 */	"%0",	/* mr2: reg */
/* 89 */	"%0",	/* mr2: mem2 */
/* 90 */	"%0",	/* mrc: mem4 */
/* 91 */	"%0",	/* mrc: mem1 */
/* 92 */	"%0",	/* mrc: mem2 */
/* 93 */	"%0",	/* mrc: rc */
/* 94 */	"leal %0,%c\n",	/* reg: addr */
/* 95 */	"movl %0,%c\n",	/* reg: mr */
/* 96 */	"movb %0,%c\n",	/* reg: mr1 */
/* 97 */	"movw %0,%c\n",	/* reg: mr2 */
/* 98 */	"mov %0,%c\n",	/* reg: con */
/* 99 */	"# move\n",	/* reg: LOADI1(reg) */
/* 100 */	"# move\n",	/* reg: LOADI2(reg) */
/* 101 */	"# move\n",	/* reg: LOADI4(reg) */
/* 102 */	"# move\n",	/* reg: LOADU1(reg) */
/* 103 */	"# move\n",	/* reg: LOADU2(reg) */
/* 104 */	"# move\n",	/* reg: LOADU4(reg) */
/* 105 */	"# move\n",	/* reg: LOADP4(reg) */
/* 106 */	"?movl %0,%c\naddl %1,%c\n",	/* reg: ADDI4(reg,mrc) */
/* 107 */	"?movl %0,%c\naddl %1,%c\n",	/* reg: ADDP4(reg,mrc) */
/* 108 */	"?movl %0,%c\naddl %1,%c\n",	/* reg: ADDU4(reg,mrc) */
/* 109 */	"?movl %0,%c\nsubl %1,%c\n",	/* reg: SUBI4(reg,mrc) */
/* 110 */	"?movl %0,%c\nsubl %1,%c\n",	/* reg: SUBP4(reg,mrc) */
/* 111 */	"?movl %0,%c\nsubl %1,%c\n",	/* reg: SUBU4(reg,mrc) */
/* 112 */	"?movl %0,%c\nandl %1,%c\n",	/* reg: BANDI4(reg,mrc) */
/* 113 */	"?movl %0,%c\norl %1,%c\n",	/* reg: BORI4(reg,mrc) */
/* 114 */	"?movl %0,%c\nxorl %1,%c\n",	/* reg: BXORI4(reg,mrc) */
/* 115 */	"?movl %0,%c\nandl %1,%c\n",	/* reg: BANDU4(reg,mrc) */
/* 116 */	"?movl %0,%c\norl %1,%c\n",	/* reg: BORU4(reg,mrc) */
/* 117 */	"?movl %0,%c\nxorl %1,%c\n",	/* reg: BXORU4(reg,mrc) */
/* 118 */	"incl %1\n",	/* stmt: ASGNI4(addr,ADDI4(mem4,con1)) */
/* 119 */	"incl %1\n",	/* stmt: ASGNI4(addr,ADDU4(mem4,con1)) */
/* 120 */	"incl %1\n",	/* stmt: ASGNP4(addr,ADDP4(mem4,con1)) */
/* 121 */	"decl %1\n",	/* stmt: ASGNI4(addr,SUBI4(mem4,con1)) */
/* 122 */	"decl %1\n",	/* stmt: ASGNI4(addr,SUBU4(mem4,con1)) */
/* 123 */	"decl %1\n",	/* stmt: ASGNP4(addr,SUBP4(mem4,con1)) */
/* 124 */	"addl %2,%1\n",	/* stmt: ASGNI4(addr,ADDI4(mem4,rc)) */
/* 125 */	"subl %2,%1\n",	/* stmt: ASGNI4(addr,SUBI4(mem4,rc)) */
/* 126 */	"addl %2,%1\n",	/* stmt: ASGNU4(addr,ADDU4(mem4,rc)) */
/* 127 */	"subl %2,%1\n",	/* stmt: ASGNU4(addr,SUBU4(mem4,rc)) */
/* 128 */	"andl %2,%1\n",	/* stmt: ASGNI4(addr,BANDI4(mem4,rc)) */
/* 129 */	"orl %2,%1\n",	/* stmt: ASGNI4(addr,BORI4(mem4,rc)) */
/* 130 */	"xorl %2,%1\n",	/* stmt: ASGNI4(addr,BXORI4(mem4,rc)) */
/* 131 */	"andl %2,%1\n",	/* stmt: ASGNU4(addr,BANDU4(mem4,rc)) */
/* 132 */	"orl %2,%1\n",	/* stmt: ASGNU4(addr,BORU4(mem4,rc)) */
/* 133 */	"xorl %2,%1\n",	/* stmt: ASGNU4(addr,BXORU4(mem4,rc)) */
/* 134 */	"?movl %0,%c\nnotl %c\n",	/* reg: BCOMI4(reg) */
/* 135 */	"?movl %0,%c\nnotl %c\n",	/* reg: BCOMU4(reg) */
/* 136 */	"?movl %0,%c\nnegl %c\n",	/* reg: NEGI4(reg) */
/* 137 */	"notl %1\n",	/* stmt: ASGNI4(addr,BCOMI4(mem4)) */
/* 138 */	"notl %1\n",	/* stmt: ASGNU4(addr,BCOMU4(mem4)) */
/* 139 */	"negl %1\n",	/* stmt: ASGNI4(addr,NEGI4(mem4)) */
/* 140 */	"?movl %0,%c\nsall %1,%c\n",	/* reg: LSHI4(reg,rc5) */
/* 141 */	"?movl %0,%c\nshll %1,%c\n",	/* reg: LSHU4(reg,rc5) */
/* 142 */	"?movl %0,%c\nsarl %1,%c\n",	/* reg: RSHI4(reg,rc5) */
/* 143 */	"?movl %0,%c\nshrl %1,%c\n",	/* reg: RSHU4(reg,rc5) */
/* 144 */	"sall %2,%1\n",	/* stmt: ASGNI4(addr,LSHI4(mem4,rc5)) */
/* 145 */	"shll %2,%1\n",	/* stmt: ASGNI4(addr,LSHU4(mem4,rc5)) */
/* 146 */	"sarl %2,%1\n",	/* stmt: ASGNI4(addr,RSHI4(mem4,rc5)) */
/* 147 */	"shrl %2,%1\n",	/* stmt: ASGNI4(addr,RSHU4(mem4,rc5)) */
/* 148 */	"$%a",	/* rc5: CNSTI4 */
/* 149 */	"%%cl",	/* rc5: reg */
/* 150 */	"?movl %0,%c\nimull %1,%c\n",	/* reg: MULI4(reg,mrc) */
/* 151 */	"imul %0,%1,%c\n",	/* reg: MULI4(con,mr) */
/* 152 */	"mull %1\n",	/* reg: MULU4(reg,mr) */
/* 153 */	"xorl %%edx,%%edx\ndivl %1\n",	/* reg: DIVU4(reg,reg) */
/* 154 */	"xorl %%edx,%%edx\ndivl %1\n",	/* reg: MODU4(reg,reg) */
/* 155 */	"cdq\nidivl %1\n",	/* reg: DIVI4(reg,reg) */
/* 156 */	"cdq\nidivl %1\n",	/* reg: MODI4(reg,reg) */
/* 157 */	"movl %0,%c\n",	/* reg: CVPU4(reg) */
/* 158 */	"movl %0,%c\n",	/* reg: CVUP4(reg) */
/* 159 */	"movsbl %0,%c\n",	/* reg: CVII4(INDIRI1(addr)) */
/* 160 */	"movswl %0,%c\n",	/* reg: CVII4(INDIRI2(addr)) */
/* 161 */	"movzbl %0,%c\n",	/* reg: CVUU4(INDIRU1(addr)) */
/* 162 */	"movzwl %0,%c\n",	/* reg: CVUU4(INDIRU2(addr)) */
/* 163 */	"# extend\n",	/* reg: CVII4(reg) */
/* 164 */	"# extend\n",	/* reg: CVIU4(reg) */
/* 165 */	"# extend\n",	/* reg: CVUI4(reg) */
/* 166 */	"# extend\n",	/* reg: CVUU4(reg) */
/* 167 */	"# truncate\n",	/* reg: CVII1(reg) */
/* 168 */	"# truncate\n",	/* reg: CVII2(reg) */
/* 169 */	"# truncate\n",	/* reg: CVUU1(reg) */
/* 170 */	"# truncate\n",	/* reg: CVUU2(reg) */
/* 171 */	"%0",	/* mrca: mem4 */
/* 172 */	"%0",	/* mrca: rc */
/* 173 */	"$%a",	/* mrca: ADDRGP4 */
/* 174 */	"$%a",	/* mrca: ADDRGP8 */
/* 175 */	"movb %1,%0\n",	/* stmt: ASGNI1(addr,rc) */
/* 176 */	"movw %1,%0\n",	/* stmt: ASGNI2(addr,rc) */
/* 177 */	"movl %1,%0\n",	/* stmt: ASGNI4(addr,rc) */
/* 178 */	"movb %1,%0\n",	/* stmt: ASGNU1(addr,rc) */
/* 179 */	"movw %1,%0\n",	/* stmt: ASGNU2(addr,rc) */
/* 180 */	"movl %1,%0\n",	/* stmt: ASGNU4(addr,rc) */
/* 181 */	"movl %1,%0\n",	/* stmt: ASGNP4(addr,rc) */
/* 182 */	"pushl %0\n",	/* stmt: ARGI4(mrca) */
/* 183 */	"pushl %0\n",	/* stmt: ARGU4(mrca) */
/* 184 */	"pushl %0\n",	/* stmt: ARGP4(mrca) */
/* 185 */	"movl $%a,%%ecx\nrep\nmovsb\n",	/* stmt: ASGNB(reg,INDIRB(reg)) */
/* 186 */	"# ARGB\n",	/* stmt: ARGB(INDIRB(reg)) */
/* 187 */	"l %0",	/* memf: INDIRF8(addr) */
/* 188 */	"s %0",	/* memf: INDIRF4(addr) */
/* 189 */	"s %0",	/* memf: CVFF8(INDIRF4(addr)) */
/* 190 */	"l %0",	/* memf: CVFF4(INDIRF8(addr)) */
/* 191 */	"fld%0\n",	/* freg: memf */
/* 192 */	"fstpl %0\n",	/* stmt: ASGNF8(addr,freg) */
/* 193 */	"fstps %0\n",	/* stmt: ASGNF4(addr,freg) */
/* 194 */	"fstps %0\n",	/* stmt: ASGNF4(addr,CVFF4(freg)) */
/* 195 */	"subl $8,%%esp\nfstpl (%%esp)\n",	/* stmt: ARGF8(freg) */
/* 196 */	"subl $4,%%esp\nfstps (%%esp)\n",	/* stmt: ARGF4(freg) */
/* 197 */	"fchs\n",	/* freg: NEGF8(freg) */
/* 198 */	"fchs\n",	/* freg: NEGF4(freg) */
/* 199 */	"%0",	/* flt: memf */
/* 200 */	"p %%st,%%st(1)",	/* flt: freg */
/* 201 */	"%0",	/* flt2: memf */
/* 202 */	"rp %%st,%%st(1)",	/* flt2: freg */
/* 203 */	"fadd%1\n",	/* freg: ADDF4(freg,flt) */
/* 204 */	"fadd%1\n",	/* freg: ADDF8(freg,flt) */
/* 205 */	"fdiv%1\n",	/* freg: DIVF4(freg,flt2) */
/* 206 */	"fdiv%1\n",	/* freg: DIVF8(freg,flt2) */
/* 207 */	"fmul%1\n",	/* freg: MULF4(freg,flt) */
/* 208 */	"fmul%1\n",	/* freg: MULF8(freg,flt) */
/* 209 */	"fsub%1\n",	/* freg: SUBF4(freg,flt2) */
/* 210 */	"fsub%1\n",	/* freg: SUBF8(freg,flt2) */
/* 211 */	"# CVFF8\n",	/* freg: CVFF8(freg) */
/* 212 */	"sub $4,%%esp\nfstps (%%esp)\nflds (%%esp)\naddl $4,%%esp\n",	/* freg: CVFF4(freg) */
/* 213 */	"subl $8,%%esp\nfnstcw 4(%%esp)\nmovl 4(%%esp),%%edx\nmovb $12,%%dh\nmovl %%edx,0(%%esp)\nfldcw 0(%%esp)\nfistpl 0(%%esp)\npopl %c\nfldcw 0(%%esp)\naddl $4,%%esp\n",	/* reg: CVFI4(freg) */
/* 214 */	"fildl %0\n",	/* freg: CVIF8(INDIRI4(addr)) */
/* 215 */	"pushl %0\nfildl (%%esp)\naddl $4,%%esp\n",	/* freg: CVIF8(reg) */
/* 216 */	"fildl %0\n",	/* freg: CVIF4(INDIRI4(addr)) */
/* 217 */	"pushl %0\nfildl (%%esp)\naddl $4,%%esp\n",	/* freg: CVIF4(reg) */
/* 218 */	"%a",	/* addrj: ADDRGP4 */
/* 219 */	"*%0",	/* addrj: reg */
/* 220 */	"*%0",	/* addrj: mem4 */
/* 221 */	"%a:\n",	/* stmt: LABELV */
/* 222 */	"jmp %0\n",	/* stmt: JUMPV(addrj) */
/* 223 */	"cmpl %1,%0\nje %a\n",	/* stmt: EQI4(mem4,rc) */
/* 224 */	"cmpl %1,%0\njge %a\n",	/* stmt: GEI4(mem4,rc) */
/* 225 */	"cmpl %1,%0\njg %a\n",	/* stmt: GTI4(mem4,rc) */
/* 226 */	"cmpl %1,%0\njle %a\n",	/* stmt: LEI4(mem4,rc) */
/* 227 */	"cmpl %1,%0\njl %a\n",	/* stmt: LTI4(mem4,rc) */
/* 228 */	"cmpl %1,%0\njne %a\n",	/* stmt: NEI4(mem4,rc) */
/* 229 */	"cmpl %1,%0\njae %a\n",	/* stmt: GEU4(mem4,rc) */
/* 230 */	"cmpl %1,%0\nja  %a\n",	/* stmt: GTU4(mem4,rc) */
/* 231 */	"cmpl %1,%0\njbe %a\n",	/* stmt: LEU4(mem4,rc) */
/* 232 */	"cmpl %1,%0\njb  %a\n",	/* stmt: LTU4(mem4,rc) */
/* 233 */	"cmpl %1,%0\nje %a\n",	/* stmt: EQI4(reg,mrc) */
/* 234 */	"cmpl %1,%0\njge %a\n",	/* stmt: GEI4(reg,mrc) */
/* 235 */	"cmpl %1,%0\njg %a\n",	/* stmt: GTI4(reg,mrc) */
/* 236 */	"cmpl %1,%0\njle %a\n",	/* stmt: LEI4(reg,mrc) */
/* 237 */	"cmpl %1,%0\njl %a\n",	/* stmt: LTI4(reg,mrc) */
/* 238 */	"cmpl %1,%0\njne %a\n",	/* stmt: NEI4(reg,mrc) */
/* 239 */	"cmpl %1,%0\nje %a\n",	/* stmt: EQU4(reg,mrc) */
/* 240 */	"cmpl %1,%0\njae %a\n",	/* stmt: GEU4(reg,mrc) */
/* 241 */	"cmpl %1,%0\nja %a\n",	/* stmt: GTU4(reg,mrc) */
/* 242 */	"cmpl %1,%0\njbe %a\n",	/* stmt: LEU4(reg,mrc) */
/* 243 */	"cmpl %1,%0\njb %a\n",	/* stmt: LTU4(reg,mrc) */
/* 244 */	"cmpl %1,%0\njne %a\n",	/* stmt: NEU4(reg,mrc) */
/* 245 */	"testl %1,%0\nje %a\n",	/* stmt: EQI4(BANDU4(mr,con),con0) */
/* 246 */	"testl %1,%0\njne %a\n",	/* stmt: NEI4(BANDU4(mr,con),con0) */
/* 247 */	"testw %1,%0\nje %a\n",	/* stmt: EQI4(BANDU4(CVII2(INDIRI2(addr)),con),con0) */
/* 248 */	"testw %1,%0\njne %a\n",	/* stmt: NEI4(BANDU4(CVII2(INDIRI2(addr)),con),con0) */
/* 249 */	"testw %1,%0\nje %a\n",	/* stmt: EQI4(BANDU4(CVIU2(INDIRI2(addr)),con),con0) */
/* 250 */	"testw %1,%0\njne %a\n",	/* stmt: NEI4(BANDU4(CVIU2(INDIRI2(addr)),con),con0) */
/* 251 */	"testb %1,%0\nje %a\n",	/* stmt: EQI4(BANDU4(CVII1(INDIRI1(addr)),con),con0) */
/* 252 */	"l %0",	/* cmpf: INDIRF8(addr) */
/* 253 */	"s %0",	/* cmpf: INDIRF4(addr) */
/* 254 */	"s %0",	/* cmpf: CVFF8(INDIRF4(addr)) */
/* 255 */	"p",	/* cmpf: freg */
/* 256 */	"fcomp%0\nfstsw %%ax\nsahf\njp 1f\nje %a\n1:\n",	/* stmt: EQF8(cmpf,freg) */
/* 257 */	"fcomp%0\nfstsw %%ax\nsahf\njp %a\njbe %a\n",	/* stmt: GEF8(cmpf,freg) */
/* 258 */	"fcomp%0\nfstsw %%ax\nsahf\njp %a\njb %a\n",	/* stmt: GTF8(cmpf,freg) */
/* 259 */	"fcomp%0\nfstsw %%ax\nsahf\njp %a\njae %a\n",	/* stmt: LEF8(cmpf,freg) */
/* 260 */	"fcomp%0\nfstsw %%ax\nsahf\njp %a\nja %a\n",	/* stmt: LTF8(cmpf,freg) */
/* 261 */	"fcomp%0\nfstsw %%ax\nsahf\njp %a\njne %a\n",	/* stmt: NEF8(cmpf,freg) */
/* 262 */	"fcomp%0\nfstsw %%ax\nsahf\njp 1f\nje %a\n1:\n",	/* stmt: EQF4(cmpf,freg) */
/* 263 */	"fcomp%0\nfstsw %%ax\nsahf\njp %a\njbe %a\n",	/* stmt: GEF4(cmpf,freg) */
/* 264 */	"fcomp%0\nfstsw %%ax\nsahf\njp %a\njb %a\n",	/* stmt: GTF4(cmpf,freg) */
/* 265 */	"fcomp%0\nfstsw %%ax\nsahf\njp %a\njae %a\n",	/* stmt: LEF4(cmpf,freg) */
/* 266 */	"fcomp%0\nfstsw %%ax\nsahf\njp %a\nja %a\n",	/* stmt: LTF4(cmpf,freg) */
/* 267 */	"fcomp%0\nfstsw %%ax\nsahf\njp %a\njne %a\n",	/* stmt: NEF4(cmpf,freg) */
/* 268 */	"fidivl %1\n",	/* freg: DIVF8(freg,CVIF8(INDIRI4(addr))) */
/* 269 */	"fidivrl %0\n",	/* freg: DIVF8(CVIF8(INDIRI4(addr)),freg) */
/* 270 */	"fidivs %1\n",	/* freg: DIVF8(freg,CVIF8(CVII2(INDIRI2(addr)))) */
/* 271 */	"fidivrs %0\n",	/* freg: DIVF8(CVIF8(CVII2(INDIRI2(addr))),freg) */
/* 272 */	"fimull %1\n",	/* freg: MULF8(freg,CVIF8(INDIRI4(addr))) */
/* 273 */	"fimuls %1\n",	/* freg: MULF8(freg,CVIF8(CVII2(INDIRI2(addr)))) */
/* 274 */	"fisubl %1\n",	/* freg: SUBF8(freg,CVIF8(INDIRI4(addr))) */
/* 275 */	"fisubrl %0\n",	/* freg: SUBF8(CVIF8(INDIRI4(addr)),freg) */
/* 276 */	"fisubs %1\n",	/* freg: SUBF8(freg,CVIF8(CVII2(INDIRI2(addr)))) */
/* 277 */	"fisubrs %0\n",	/* freg: SUBF8(CVIF8(CVII2(INDIRI2(addr))),freg) */
/* 278 */	"fiaddl %1\n",	/* freg: ADDF8(freg,CVIF8(INDIRI4(addr))) */
/* 279 */	"fiadds %1\n",	/* freg: ADDF8(freg,CVIF8(CVII2(INDIRI2(addr)))) */
/* 280 */	"fdivs %1\n",	/* freg: ADDF8(freg,CVFF8(INDIRF4(addr))) */
/* 281 */	"fsubs %1\n",	/* freg: SUBF8(freg,CVFF8(INDIRF4(addr))) */
/* 282 */	"fmuls %1\n",	/* freg: MULF8(freg,CVFF8(INDIRF4(addr))) */
/* 283 */	"fdivs %1\n",	/* freg: DIVF8(freg,CVFF8(INDIRF4(addr))) */
/* 284 */	"fld%0\n",	/* freg: LOADF8(memf) */
/* 285 */	"call %0\naddl $%a,%%esp\n",	/* reg: CALLI4(addrj) */
/* 286 */	"call %0\naddl $%a,%%esp\n",	/* reg: CALLU4(addrj) */
/* 287 */	"call %0\naddl $%a,%%esp\n",	/* reg: CALLP4(addrj) */
/* 288 */	"call %0\n",	/* reg: CALLI4(addrj) */
/* 289 */	"call %0\n",	/* reg: CALLU4(addrj) */
/* 290 */	"call %0\n",	/* reg: CALLP4(addrj) */
/* 291 */	"call %0\naddl $%a-4,%%esp\n",	/* stmt: CALLV(addrj) */
/* 292 */	"call %0\naddl $%a,%%esp\n",	/* stmt: CALLV(addrj) */
/* 293 */	"call %0\n",	/* stmt: CALLV(addrj) */
/* 294 */	"call %0\naddl $%a,%%esp\n",	/* freg: CALLF4(addrj) */
/* 295 */	"call %0\n",	/* freg: CALLF4(addrj) */
/* 296 */	"call %0\naddl $%a,%%esp\nfstp %%st(0)\n",	/* stmt: CALLF4(addrj) */
/* 297 */	"call %0\nfstp %%st(0)\n",	/* stmt: CALLF4(addrj) */
/* 298 */	"call %0\naddl $%a,%%esp\n",	/* freg: CALLF8(addrj) */
/* 299 */	"call %0\n",	/* freg: CALLF8(addrj) */
/* 300 */	"call %0\naddl $%a,%%esp\nfstp %%st(0)\n",	/* stmt: CALLF8(addrj) */
/* 301 */	"call %0\nfstp %%st(0)\n",	/* stmt: CALLF8(addrj) */
/* 302 */	"# ret\n",	/* stmt: RETI4(reg) */
/* 303 */	"# ret\n",	/* stmt: RETU4(reg) */
/* 304 */	"# ret\n",	/* stmt: RETP4(reg) */
/* 305 */	"# ret\n",	/* stmt: RETF4(freg) */
/* 306 */	"# ret\n",	/* stmt: RETF8(freg) */
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
/* 35 */	0,	/* $%0 */
/* 36 */	0,	/*  */
/* 37 */	0,	/*  */
/* 38 */	0,	/* %a */
/* 39 */	0,	/* %a */
/* 40 */	0,	/* %0 */
/* 41 */	0,	/* %a */
/* 42 */	0,	/* (%0) */
/* 43 */	0,	/* %1(%0) */
/* 44 */	0,	/* %1(%0) */
/* 45 */	0,	/* %1(%0) */
/* 46 */	0,	/* %a(%%ebp) */
/* 47 */	0,	/* %a(%%ebp) */
/* 48 */	0,	/* %0 */
/* 49 */	0,	/* %0,2 */
/* 50 */	0,	/* %0,4 */
/* 51 */	0,	/* %0,8 */
/* 52 */	0,	/* %0,2 */
/* 53 */	0,	/* %0,4 */
/* 54 */	0,	/* %0,8 */
/* 55 */	0,	/* 1 */
/* 56 */	0,	/* 1 */
/* 57 */	0,	/* 1 */
/* 58 */	0,	/* 1 */
/* 59 */	0,	/* 2 */
/* 60 */	0,	/* 2 */
/* 61 */	0,	/* 3 */
/* 62 */	0,	/* 3 */
/* 63 */	0,	/* %0 */
/* 64 */	0,	/* %0 */
/* 65 */	0,	/* %1(,%0) */
/* 66 */	0,	/* %1(,%0) */
/* 67 */	0,	/* %1(,%0) */
/* 68 */	0,	/* %1(%0) */
/* 69 */	0,	/* %1(%0) */
/* 70 */	0,	/* %1(%0) */
/* 71 */	0,	/* (%1,%0) */
/* 72 */	0,	/* (%1,%0) */
/* 73 */	0,	/* (%1,%0) */
/* 74 */	0,	/* (,%0) */
/* 75 */	0,	/* %0 */
/* 76 */	0,	/* %0 */
/* 77 */	0,	/* %0 */
/* 78 */	0,	/* %0 */
/* 79 */	0,	/* %0 */
/* 80 */	0,	/* %0 */
/* 81 */	0,	/* %0 */
/* 82 */	0,	/* %0 */
/* 83 */	0,	/* %0 */
/* 84 */	0,	/* %0 */
/* 85 */	0,	/* %0 */
/* 86 */	0,	/* %0 */
/* 87 */	0,	/* %0 */
/* 88 */	0,	/* %0 */
/* 89 */	0,	/* %0 */
/* 90 */	0,	/* %0 */
/* 91 */	0,	/* %0 */
/* 92 */	0,	/* %0 */
/* 93 */	0,	/* %0 */
/* 94 */	1,	/* leal %0,%c\n */
/* 95 */	1,	/* movl %0,%c\n */
/* 96 */	1,	/* movb %0,%c\n */
/* 97 */	1,	/* movw %0,%c\n */
/* 98 */	1,	/* mov %0,%c\n */
/* 99 */	1,	/* # move\n */
/* 100 */	1,	/* # move\n */
/* 101 */	1,	/* # move\n */
/* 102 */	1,	/* # move\n */
/* 103 */	1,	/* # move\n */
/* 104 */	1,	/* # move\n */
/* 105 */	1,	/* # move\n */
/* 106 */	1,	/* ?movl %0,%c\naddl %1,%c\n */
/* 107 */	1,	/* ?movl %0,%c\naddl %1,%c\n */
/* 108 */	1,	/* ?movl %0,%c\naddl %1,%c\n */
/* 109 */	1,	/* ?movl %0,%c\nsubl %1,%c\n */
/* 110 */	1,	/* ?movl %0,%c\nsubl %1,%c\n */
/* 111 */	1,	/* ?movl %0,%c\nsubl %1,%c\n */
/* 112 */	1,	/* ?movl %0,%c\nandl %1,%c\n */
/* 113 */	1,	/* ?movl %0,%c\norl %1,%c\n */
/* 114 */	1,	/* ?movl %0,%c\nxorl %1,%c\n */
/* 115 */	1,	/* ?movl %0,%c\nandl %1,%c\n */
/* 116 */	1,	/* ?movl %0,%c\norl %1,%c\n */
/* 117 */	1,	/* ?movl %0,%c\nxorl %1,%c\n */
/* 118 */	1,	/* incl %1\n */
/* 119 */	1,	/* incl %1\n */
/* 120 */	1,	/* incl %1\n */
/* 121 */	1,	/* decl %1\n */
/* 122 */	1,	/* decl %1\n */
/* 123 */	1,	/* decl %1\n */
/* 124 */	1,	/* addl %2,%1\n */
/* 125 */	1,	/* subl %2,%1\n */
/* 126 */	1,	/* addl %2,%1\n */
/* 127 */	1,	/* subl %2,%1\n */
/* 128 */	1,	/* andl %2,%1\n */
/* 129 */	1,	/* orl %2,%1\n */
/* 130 */	1,	/* xorl %2,%1\n */
/* 131 */	1,	/* andl %2,%1\n */
/* 132 */	1,	/* orl %2,%1\n */
/* 133 */	1,	/* xorl %2,%1\n */
/* 134 */	1,	/* ?movl %0,%c\nnotl %c\n */
/* 135 */	1,	/* ?movl %0,%c\nnotl %c\n */
/* 136 */	1,	/* ?movl %0,%c\nnegl %c\n */
/* 137 */	1,	/* notl %1\n */
/* 138 */	1,	/* notl %1\n */
/* 139 */	1,	/* negl %1\n */
/* 140 */	1,	/* ?movl %0,%c\nsall %1,%c\n */
/* 141 */	1,	/* ?movl %0,%c\nshll %1,%c\n */
/* 142 */	1,	/* ?movl %0,%c\nsarl %1,%c\n */
/* 143 */	1,	/* ?movl %0,%c\nshrl %1,%c\n */
/* 144 */	1,	/* sall %2,%1\n */
/* 145 */	1,	/* shll %2,%1\n */
/* 146 */	1,	/* sarl %2,%1\n */
/* 147 */	1,	/* shrl %2,%1\n */
/* 148 */	0,	/* $%a */
/* 149 */	0,	/* %%cl */
/* 150 */	1,	/* ?movl %0,%c\nimull %1,%c\n */
/* 151 */	1,	/* imul %0,%1,%c\n */
/* 152 */	1,	/* mull %1\n */
/* 153 */	1,	/* xorl %%edx,%%edx\ndivl %1\n */
/* 154 */	1,	/* xorl %%edx,%%edx\ndivl %1\n */
/* 155 */	1,	/* cdq\nidivl %1\n */
/* 156 */	1,	/* cdq\nidivl %1\n */
/* 157 */	1,	/* movl %0,%c\n */
/* 158 */	1,	/* movl %0,%c\n */
/* 159 */	1,	/* movsbl %0,%c\n */
/* 160 */	1,	/* movswl %0,%c\n */
/* 161 */	1,	/* movzbl %0,%c\n */
/* 162 */	1,	/* movzwl %0,%c\n */
/* 163 */	1,	/* # extend\n */
/* 164 */	1,	/* # extend\n */
/* 165 */	1,	/* # extend\n */
/* 166 */	1,	/* # extend\n */
/* 167 */	1,	/* # truncate\n */
/* 168 */	1,	/* # truncate\n */
/* 169 */	1,	/* # truncate\n */
/* 170 */	1,	/* # truncate\n */
/* 171 */	0,	/* %0 */
/* 172 */	0,	/* %0 */
/* 173 */	0,	/* $%a */
/* 174 */	0,	/* $%a */
/* 175 */	1,	/* movb %1,%0\n */
/* 176 */	1,	/* movw %1,%0\n */
/* 177 */	1,	/* movl %1,%0\n */
/* 178 */	1,	/* movb %1,%0\n */
/* 179 */	1,	/* movw %1,%0\n */
/* 180 */	1,	/* movl %1,%0\n */
/* 181 */	1,	/* movl %1,%0\n */
/* 182 */	1,	/* pushl %0\n */
/* 183 */	1,	/* pushl %0\n */
/* 184 */	1,	/* pushl %0\n */
/* 185 */	1,	/* movl $%a,%%ecx\nrep\nmovsb\n */
/* 186 */	1,	/* # ARGB\n */
/* 187 */	0,	/* l %0 */
/* 188 */	0,	/* s %0 */
/* 189 */	0,	/* s %0 */
/* 190 */	0,	/* l %0 */
/* 191 */	1,	/* fld%0\n */
/* 192 */	1,	/* fstpl %0\n */
/* 193 */	1,	/* fstps %0\n */
/* 194 */	1,	/* fstps %0\n */
/* 195 */	1,	/* subl $8,%%esp\nfstpl (%%esp)\n */
/* 196 */	1,	/* subl $4,%%esp\nfstps (%%esp)\n */
/* 197 */	1,	/* fchs\n */
/* 198 */	1,	/* fchs\n */
/* 199 */	0,	/* %0 */
/* 200 */	0,	/* p %%st,%%st(1) */
/* 201 */	0,	/* %0 */
/* 202 */	0,	/* rp %%st,%%st(1) */
/* 203 */	1,	/* fadd%1\n */
/* 204 */	1,	/* fadd%1\n */
/* 205 */	1,	/* fdiv%1\n */
/* 206 */	1,	/* fdiv%1\n */
/* 207 */	1,	/* fmul%1\n */
/* 208 */	1,	/* fmul%1\n */
/* 209 */	1,	/* fsub%1\n */
/* 210 */	1,	/* fsub%1\n */
/* 211 */	1,	/* # CVFF8\n */
/* 212 */	1,	/* sub $4,%%esp\nfstps (%%esp)\nflds (%%esp)\naddl $4,%%esp\n */
/* 213 */	1,	/* subl $8,%%esp\nfnstcw 4(%%esp)\nmovl 4(%%esp),%%edx\nmovb $12,%%dh\nmovl %%edx,0(%%esp)\nfldcw 0(%%esp)\nfistpl 0(%%esp)\npopl %c\nfldcw 0(%%esp)\naddl $4,%%esp\n */
/* 214 */	1,	/* fildl %0\n */
/* 215 */	1,	/* pushl %0\nfildl (%%esp)\naddl $4,%%esp\n */
/* 216 */	1,	/* fildl %0\n */
/* 217 */	1,	/* pushl %0\nfildl (%%esp)\naddl $4,%%esp\n */
/* 218 */	0,	/* %a */
/* 219 */	0,	/* *%0 */
/* 220 */	0,	/* *%0 */
/* 221 */	1,	/* %a:\n */
/* 222 */	1,	/* jmp %0\n */
/* 223 */	1,	/* cmpl %1,%0\nje %a\n */
/* 224 */	1,	/* cmpl %1,%0\njge %a\n */
/* 225 */	1,	/* cmpl %1,%0\njg %a\n */
/* 226 */	1,	/* cmpl %1,%0\njle %a\n */
/* 227 */	1,	/* cmpl %1,%0\njl %a\n */
/* 228 */	1,	/* cmpl %1,%0\njne %a\n */
/* 229 */	1,	/* cmpl %1,%0\njae %a\n */
/* 230 */	1,	/* cmpl %1,%0\nja  %a\n */
/* 231 */	1,	/* cmpl %1,%0\njbe %a\n */
/* 232 */	1,	/* cmpl %1,%0\njb  %a\n */
/* 233 */	1,	/* cmpl %1,%0\nje %a\n */
/* 234 */	1,	/* cmpl %1,%0\njge %a\n */
/* 235 */	1,	/* cmpl %1,%0\njg %a\n */
/* 236 */	1,	/* cmpl %1,%0\njle %a\n */
/* 237 */	1,	/* cmpl %1,%0\njl %a\n */
/* 238 */	1,	/* cmpl %1,%0\njne %a\n */
/* 239 */	1,	/* cmpl %1,%0\nje %a\n */
/* 240 */	1,	/* cmpl %1,%0\njae %a\n */
/* 241 */	1,	/* cmpl %1,%0\nja %a\n */
/* 242 */	1,	/* cmpl %1,%0\njbe %a\n */
/* 243 */	1,	/* cmpl %1,%0\njb %a\n */
/* 244 */	1,	/* cmpl %1,%0\njne %a\n */
/* 245 */	1,	/* testl %1,%0\nje %a\n */
/* 246 */	1,	/* testl %1,%0\njne %a\n */
/* 247 */	1,	/* testw %1,%0\nje %a\n */
/* 248 */	1,	/* testw %1,%0\njne %a\n */
/* 249 */	1,	/* testw %1,%0\nje %a\n */
/* 250 */	1,	/* testw %1,%0\njne %a\n */
/* 251 */	1,	/* testb %1,%0\nje %a\n */
/* 252 */	0,	/* l %0 */
/* 253 */	0,	/* s %0 */
/* 254 */	0,	/* s %0 */
/* 255 */	0,	/* p */
/* 256 */	1,	/* fcomp%0\nfstsw %%ax\nsahf\njp 1f\nje %a\n1:\n */
/* 257 */	1,	/* fcomp%0\nfstsw %%ax\nsahf\njp %a\njbe %a\n */
/* 258 */	1,	/* fcomp%0\nfstsw %%ax\nsahf\njp %a\njb %a\n */
/* 259 */	1,	/* fcomp%0\nfstsw %%ax\nsahf\njp %a\njae %a\n */
/* 260 */	1,	/* fcomp%0\nfstsw %%ax\nsahf\njp %a\nja %a\n */
/* 261 */	1,	/* fcomp%0\nfstsw %%ax\nsahf\njp %a\njne %a\n */
/* 262 */	1,	/* fcomp%0\nfstsw %%ax\nsahf\njp 1f\nje %a\n1:\n */
/* 263 */	1,	/* fcomp%0\nfstsw %%ax\nsahf\njp %a\njbe %a\n */
/* 264 */	1,	/* fcomp%0\nfstsw %%ax\nsahf\njp %a\njb %a\n */
/* 265 */	1,	/* fcomp%0\nfstsw %%ax\nsahf\njp %a\njae %a\n */
/* 266 */	1,	/* fcomp%0\nfstsw %%ax\nsahf\njp %a\nja %a\n */
/* 267 */	1,	/* fcomp%0\nfstsw %%ax\nsahf\njp %a\njne %a\n */
/* 268 */	1,	/* fidivl %1\n */
/* 269 */	1,	/* fidivrl %0\n */
/* 270 */	1,	/* fidivs %1\n */
/* 271 */	1,	/* fidivrs %0\n */
/* 272 */	1,	/* fimull %1\n */
/* 273 */	1,	/* fimuls %1\n */
/* 274 */	1,	/* fisubl %1\n */
/* 275 */	1,	/* fisubrl %0\n */
/* 276 */	1,	/* fisubs %1\n */
/* 277 */	1,	/* fisubrs %0\n */
/* 278 */	1,	/* fiaddl %1\n */
/* 279 */	1,	/* fiadds %1\n */
/* 280 */	1,	/* fdivs %1\n */
/* 281 */	1,	/* fsubs %1\n */
/* 282 */	1,	/* fmuls %1\n */
/* 283 */	1,	/* fdivs %1\n */
/* 284 */	1,	/* fld%0\n */
/* 285 */	1,	/* call %0\naddl $%a,%%esp\n */
/* 286 */	1,	/* call %0\naddl $%a,%%esp\n */
/* 287 */	1,	/* call %0\naddl $%a,%%esp\n */
/* 288 */	1,	/* call %0\n */
/* 289 */	1,	/* call %0\n */
/* 290 */	1,	/* call %0\n */
/* 291 */	1,	/* call %0\naddl $%a-4,%%esp\n */
/* 292 */	1,	/* call %0\naddl $%a,%%esp\n */
/* 293 */	1,	/* call %0\n */
/* 294 */	1,	/* call %0\naddl $%a,%%esp\n */
/* 295 */	1,	/* call %0\n */
/* 296 */	1,	/* call %0\naddl $%a,%%esp\nfstp %%st(0)\n */
/* 297 */	1,	/* call %0\nfstp %%st(0)\n */
/* 298 */	1,	/* call %0\naddl $%a,%%esp\n */
/* 299 */	1,	/* call %0\n */
/* 300 */	1,	/* call %0\naddl $%a,%%esp\nfstp %%st(0)\n */
/* 301 */	1,	/* call %0\nfstp %%st(0)\n */
/* 302 */	1,	/* # ret\n */
/* 303 */	1,	/* # ret\n */
/* 304 */	1,	/* # ret\n */
/* 305 */	1,	/* # ret\n */
/* 306 */	1,	/* # ret\n */
};

static char *_string[] = {
/* 0 */	0,
/* 1 */	"reg: INDIRI1(VREGP)",
/* 2 */	"reg: INDIRU1(VREGP)",
/* 3 */	"reg: INDIRI2(VREGP)",
/* 4 */	"reg: INDIRU2(VREGP)",
/* 5 */	"reg: INDIRI4(VREGP)",
/* 6 */	"reg: INDIRP4(VREGP)",
/* 7 */	"reg: INDIRU4(VREGP)",
/* 8 */	"reg: INDIRI8(VREGP)",
/* 9 */	"reg: INDIRP8(VREGP)",
/* 10 */	"reg: INDIRU8(VREGP)",
/* 11 */	"freg: INDIRF4(VREGP)",
/* 12 */	"freg: INDIRF8(VREGP)",
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
/* 25 */	"cnst: CNSTI1",
/* 26 */	"cnst: CNSTU1",
/* 27 */	"cnst: CNSTI2",
/* 28 */	"cnst: CNSTU2",
/* 29 */	"cnst: CNSTI4",
/* 30 */	"cnst: CNSTU4",
/* 31 */	"cnst: CNSTP4",
/* 32 */	"cnst: CNSTI8",
/* 33 */	"cnst: CNSTU8",
/* 34 */	"cnst: CNSTP8",
/* 35 */	"con: cnst",
/* 36 */	"stmt: reg",
/* 37 */	"stmt: freg",
/* 38 */	"acon: ADDRGP4",
/* 39 */	"acon: ADDRGP8",
/* 40 */	"acon: cnst",
/* 41 */	"baseaddr: ADDRGP4",
/* 42 */	"base: reg",
/* 43 */	"base: ADDI4(reg,acon)",
/* 44 */	"base: ADDP4(reg,acon)",
/* 45 */	"base: ADDU4(reg,acon)",
/* 46 */	"base: ADDRFP4",
/* 47 */	"base: ADDRLP4",
/* 48 */	"index: reg",
/* 49 */	"index: LSHI4(reg,con1)",
/* 50 */	"index: LSHI4(reg,con2)",
/* 51 */	"index: LSHI4(reg,con3)",
/* 52 */	"index: LSHU4(reg,con1)",
/* 53 */	"index: LSHU4(reg,con2)",
/* 54 */	"index: LSHU4(reg,con3)",
/* 55 */	"con0: CNSTI4",
/* 56 */	"con0: CNSTU4",
/* 57 */	"con1: CNSTI4",
/* 58 */	"con1: CNSTU4",
/* 59 */	"con2: CNSTI4",
/* 60 */	"con2: CNSTU4",
/* 61 */	"con3: CNSTI4",
/* 62 */	"con3: CNSTU4",
/* 63 */	"addr: base",
/* 64 */	"addr: baseaddr",
/* 65 */	"addr: ADDI4(index,baseaddr)",
/* 66 */	"addr: ADDP4(index,baseaddr)",
/* 67 */	"addr: ADDU4(index,baseaddr)",
/* 68 */	"addr: ADDI4(reg,baseaddr)",
/* 69 */	"addr: ADDP4(reg,baseaddr)",
/* 70 */	"addr: ADDU4(reg,baseaddr)",
/* 71 */	"addr: ADDI4(index,reg)",
/* 72 */	"addr: ADDP4(index,reg)",
/* 73 */	"addr: ADDU4(index,reg)",
/* 74 */	"addr: index",
/* 75 */	"mem1: INDIRI1(addr)",
/* 76 */	"mem1: INDIRU1(addr)",
/* 77 */	"mem2: INDIRI2(addr)",
/* 78 */	"mem2: INDIRU2(addr)",
/* 79 */	"mem4: INDIRI4(addr)",
/* 80 */	"mem4: INDIRU4(addr)",
/* 81 */	"mem4: INDIRP4(addr)",
/* 82 */	"rc: reg",
/* 83 */	"rc: con",
/* 84 */	"mr: reg",
/* 85 */	"mr: mem4",
/* 86 */	"mr1: reg",
/* 87 */	"mr1: mem1",
/* 88 */	"mr2: reg",
/* 89 */	"mr2: mem2",
/* 90 */	"mrc: mem4",
/* 91 */	"mrc: mem1",
/* 92 */	"mrc: mem2",
/* 93 */	"mrc: rc",
/* 94 */	"reg: addr",
/* 95 */	"reg: mr",
/* 96 */	"reg: mr1",
/* 97 */	"reg: mr2",
/* 98 */	"reg: con",
/* 99 */	"reg: LOADI1(reg)",
/* 100 */	"reg: LOADI2(reg)",
/* 101 */	"reg: LOADI4(reg)",
/* 102 */	"reg: LOADU1(reg)",
/* 103 */	"reg: LOADU2(reg)",
/* 104 */	"reg: LOADU4(reg)",
/* 105 */	"reg: LOADP4(reg)",
/* 106 */	"reg: ADDI4(reg,mrc)",
/* 107 */	"reg: ADDP4(reg,mrc)",
/* 108 */	"reg: ADDU4(reg,mrc)",
/* 109 */	"reg: SUBI4(reg,mrc)",
/* 110 */	"reg: SUBP4(reg,mrc)",
/* 111 */	"reg: SUBU4(reg,mrc)",
/* 112 */	"reg: BANDI4(reg,mrc)",
/* 113 */	"reg: BORI4(reg,mrc)",
/* 114 */	"reg: BXORI4(reg,mrc)",
/* 115 */	"reg: BANDU4(reg,mrc)",
/* 116 */	"reg: BORU4(reg,mrc)",
/* 117 */	"reg: BXORU4(reg,mrc)",
/* 118 */	"stmt: ASGNI4(addr,ADDI4(mem4,con1))",
/* 119 */	"stmt: ASGNI4(addr,ADDU4(mem4,con1))",
/* 120 */	"stmt: ASGNP4(addr,ADDP4(mem4,con1))",
/* 121 */	"stmt: ASGNI4(addr,SUBI4(mem4,con1))",
/* 122 */	"stmt: ASGNI4(addr,SUBU4(mem4,con1))",
/* 123 */	"stmt: ASGNP4(addr,SUBP4(mem4,con1))",
/* 124 */	"stmt: ASGNI4(addr,ADDI4(mem4,rc))",
/* 125 */	"stmt: ASGNI4(addr,SUBI4(mem4,rc))",
/* 126 */	"stmt: ASGNU4(addr,ADDU4(mem4,rc))",
/* 127 */	"stmt: ASGNU4(addr,SUBU4(mem4,rc))",
/* 128 */	"stmt: ASGNI4(addr,BANDI4(mem4,rc))",
/* 129 */	"stmt: ASGNI4(addr,BORI4(mem4,rc))",
/* 130 */	"stmt: ASGNI4(addr,BXORI4(mem4,rc))",
/* 131 */	"stmt: ASGNU4(addr,BANDU4(mem4,rc))",
/* 132 */	"stmt: ASGNU4(addr,BORU4(mem4,rc))",
/* 133 */	"stmt: ASGNU4(addr,BXORU4(mem4,rc))",
/* 134 */	"reg: BCOMI4(reg)",
/* 135 */	"reg: BCOMU4(reg)",
/* 136 */	"reg: NEGI4(reg)",
/* 137 */	"stmt: ASGNI4(addr,BCOMI4(mem4))",
/* 138 */	"stmt: ASGNU4(addr,BCOMU4(mem4))",
/* 139 */	"stmt: ASGNI4(addr,NEGI4(mem4))",
/* 140 */	"reg: LSHI4(reg,rc5)",
/* 141 */	"reg: LSHU4(reg,rc5)",
/* 142 */	"reg: RSHI4(reg,rc5)",
/* 143 */	"reg: RSHU4(reg,rc5)",
/* 144 */	"stmt: ASGNI4(addr,LSHI4(mem4,rc5))",
/* 145 */	"stmt: ASGNI4(addr,LSHU4(mem4,rc5))",
/* 146 */	"stmt: ASGNI4(addr,RSHI4(mem4,rc5))",
/* 147 */	"stmt: ASGNI4(addr,RSHU4(mem4,rc5))",
/* 148 */	"rc5: CNSTI4",
/* 149 */	"rc5: reg",
/* 150 */	"reg: MULI4(reg,mrc)",
/* 151 */	"reg: MULI4(con,mr)",
/* 152 */	"reg: MULU4(reg,mr)",
/* 153 */	"reg: DIVU4(reg,reg)",
/* 154 */	"reg: MODU4(reg,reg)",
/* 155 */	"reg: DIVI4(reg,reg)",
/* 156 */	"reg: MODI4(reg,reg)",
/* 157 */	"reg: CVPU4(reg)",
/* 158 */	"reg: CVUP4(reg)",
/* 159 */	"reg: CVII4(INDIRI1(addr))",
/* 160 */	"reg: CVII4(INDIRI2(addr))",
/* 161 */	"reg: CVUU4(INDIRU1(addr))",
/* 162 */	"reg: CVUU4(INDIRU2(addr))",
/* 163 */	"reg: CVII4(reg)",
/* 164 */	"reg: CVIU4(reg)",
/* 165 */	"reg: CVUI4(reg)",
/* 166 */	"reg: CVUU4(reg)",
/* 167 */	"reg: CVII1(reg)",
/* 168 */	"reg: CVII2(reg)",
/* 169 */	"reg: CVUU1(reg)",
/* 170 */	"reg: CVUU2(reg)",
/* 171 */	"mrca: mem4",
/* 172 */	"mrca: rc",
/* 173 */	"mrca: ADDRGP4",
/* 174 */	"mrca: ADDRGP8",
/* 175 */	"stmt: ASGNI1(addr,rc)",
/* 176 */	"stmt: ASGNI2(addr,rc)",
/* 177 */	"stmt: ASGNI4(addr,rc)",
/* 178 */	"stmt: ASGNU1(addr,rc)",
/* 179 */	"stmt: ASGNU2(addr,rc)",
/* 180 */	"stmt: ASGNU4(addr,rc)",
/* 181 */	"stmt: ASGNP4(addr,rc)",
/* 182 */	"stmt: ARGI4(mrca)",
/* 183 */	"stmt: ARGU4(mrca)",
/* 184 */	"stmt: ARGP4(mrca)",
/* 185 */	"stmt: ASGNB(reg,INDIRB(reg))",
/* 186 */	"stmt: ARGB(INDIRB(reg))",
/* 187 */	"memf: INDIRF8(addr)",
/* 188 */	"memf: INDIRF4(addr)",
/* 189 */	"memf: CVFF8(INDIRF4(addr))",
/* 190 */	"memf: CVFF4(INDIRF8(addr))",
/* 191 */	"freg: memf",
/* 192 */	"stmt: ASGNF8(addr,freg)",
/* 193 */	"stmt: ASGNF4(addr,freg)",
/* 194 */	"stmt: ASGNF4(addr,CVFF4(freg))",
/* 195 */	"stmt: ARGF8(freg)",
/* 196 */	"stmt: ARGF4(freg)",
/* 197 */	"freg: NEGF8(freg)",
/* 198 */	"freg: NEGF4(freg)",
/* 199 */	"flt: memf",
/* 200 */	"flt: freg",
/* 201 */	"flt2: memf",
/* 202 */	"flt2: freg",
/* 203 */	"freg: ADDF4(freg,flt)",
/* 204 */	"freg: ADDF8(freg,flt)",
/* 205 */	"freg: DIVF4(freg,flt2)",
/* 206 */	"freg: DIVF8(freg,flt2)",
/* 207 */	"freg: MULF4(freg,flt)",
/* 208 */	"freg: MULF8(freg,flt)",
/* 209 */	"freg: SUBF4(freg,flt2)",
/* 210 */	"freg: SUBF8(freg,flt2)",
/* 211 */	"freg: CVFF8(freg)",
/* 212 */	"freg: CVFF4(freg)",
/* 213 */	"reg: CVFI4(freg)",
/* 214 */	"freg: CVIF8(INDIRI4(addr))",
/* 215 */	"freg: CVIF8(reg)",
/* 216 */	"freg: CVIF4(INDIRI4(addr))",
/* 217 */	"freg: CVIF4(reg)",
/* 218 */	"addrj: ADDRGP4",
/* 219 */	"addrj: reg",
/* 220 */	"addrj: mem4",
/* 221 */	"stmt: LABELV",
/* 222 */	"stmt: JUMPV(addrj)",
/* 223 */	"stmt: EQI4(mem4,rc)",
/* 224 */	"stmt: GEI4(mem4,rc)",
/* 225 */	"stmt: GTI4(mem4,rc)",
/* 226 */	"stmt: LEI4(mem4,rc)",
/* 227 */	"stmt: LTI4(mem4,rc)",
/* 228 */	"stmt: NEI4(mem4,rc)",
/* 229 */	"stmt: GEU4(mem4,rc)",
/* 230 */	"stmt: GTU4(mem4,rc)",
/* 231 */	"stmt: LEU4(mem4,rc)",
/* 232 */	"stmt: LTU4(mem4,rc)",
/* 233 */	"stmt: EQI4(reg,mrc)",
/* 234 */	"stmt: GEI4(reg,mrc)",
/* 235 */	"stmt: GTI4(reg,mrc)",
/* 236 */	"stmt: LEI4(reg,mrc)",
/* 237 */	"stmt: LTI4(reg,mrc)",
/* 238 */	"stmt: NEI4(reg,mrc)",
/* 239 */	"stmt: EQU4(reg,mrc)",
/* 240 */	"stmt: GEU4(reg,mrc)",
/* 241 */	"stmt: GTU4(reg,mrc)",
/* 242 */	"stmt: LEU4(reg,mrc)",
/* 243 */	"stmt: LTU4(reg,mrc)",
/* 244 */	"stmt: NEU4(reg,mrc)",
/* 245 */	"stmt: EQI4(BANDU4(mr,con),con0)",
/* 246 */	"stmt: NEI4(BANDU4(mr,con),con0)",
/* 247 */	"stmt: EQI4(BANDU4(CVII2(INDIRI2(addr)),con),con0)",
/* 248 */	"stmt: NEI4(BANDU4(CVII2(INDIRI2(addr)),con),con0)",
/* 249 */	"stmt: EQI4(BANDU4(CVIU2(INDIRI2(addr)),con),con0)",
/* 250 */	"stmt: NEI4(BANDU4(CVIU2(INDIRI2(addr)),con),con0)",
/* 251 */	"stmt: EQI4(BANDU4(CVII1(INDIRI1(addr)),con),con0)",
/* 252 */	"cmpf: INDIRF8(addr)",
/* 253 */	"cmpf: INDIRF4(addr)",
/* 254 */	"cmpf: CVFF8(INDIRF4(addr))",
/* 255 */	"cmpf: freg",
/* 256 */	"stmt: EQF8(cmpf,freg)",
/* 257 */	"stmt: GEF8(cmpf,freg)",
/* 258 */	"stmt: GTF8(cmpf,freg)",
/* 259 */	"stmt: LEF8(cmpf,freg)",
/* 260 */	"stmt: LTF8(cmpf,freg)",
/* 261 */	"stmt: NEF8(cmpf,freg)",
/* 262 */	"stmt: EQF4(cmpf,freg)",
/* 263 */	"stmt: GEF4(cmpf,freg)",
/* 264 */	"stmt: GTF4(cmpf,freg)",
/* 265 */	"stmt: LEF4(cmpf,freg)",
/* 266 */	"stmt: LTF4(cmpf,freg)",
/* 267 */	"stmt: NEF4(cmpf,freg)",
/* 268 */	"freg: DIVF8(freg,CVIF8(INDIRI4(addr)))",
/* 269 */	"freg: DIVF8(CVIF8(INDIRI4(addr)),freg)",
/* 270 */	"freg: DIVF8(freg,CVIF8(CVII2(INDIRI2(addr))))",
/* 271 */	"freg: DIVF8(CVIF8(CVII2(INDIRI2(addr))),freg)",
/* 272 */	"freg: MULF8(freg,CVIF8(INDIRI4(addr)))",
/* 273 */	"freg: MULF8(freg,CVIF8(CVII2(INDIRI2(addr))))",
/* 274 */	"freg: SUBF8(freg,CVIF8(INDIRI4(addr)))",
/* 275 */	"freg: SUBF8(CVIF8(INDIRI4(addr)),freg)",
/* 276 */	"freg: SUBF8(freg,CVIF8(CVII2(INDIRI2(addr))))",
/* 277 */	"freg: SUBF8(CVIF8(CVII2(INDIRI2(addr))),freg)",
/* 278 */	"freg: ADDF8(freg,CVIF8(INDIRI4(addr)))",
/* 279 */	"freg: ADDF8(freg,CVIF8(CVII2(INDIRI2(addr))))",
/* 280 */	"freg: ADDF8(freg,CVFF8(INDIRF4(addr)))",
/* 281 */	"freg: SUBF8(freg,CVFF8(INDIRF4(addr)))",
/* 282 */	"freg: MULF8(freg,CVFF8(INDIRF4(addr)))",
/* 283 */	"freg: DIVF8(freg,CVFF8(INDIRF4(addr)))",
/* 284 */	"freg: LOADF8(memf)",
/* 285 */	"reg: CALLI4(addrj)",
/* 286 */	"reg: CALLU4(addrj)",
/* 287 */	"reg: CALLP4(addrj)",
/* 288 */	"reg: CALLI4(addrj)",
/* 289 */	"reg: CALLU4(addrj)",
/* 290 */	"reg: CALLP4(addrj)",
/* 291 */	"stmt: CALLV(addrj)",
/* 292 */	"stmt: CALLV(addrj)",
/* 293 */	"stmt: CALLV(addrj)",
/* 294 */	"freg: CALLF4(addrj)",
/* 295 */	"freg: CALLF4(addrj)",
/* 296 */	"stmt: CALLF4(addrj)",
/* 297 */	"stmt: CALLF4(addrj)",
/* 298 */	"freg: CALLF8(addrj)",
/* 299 */	"freg: CALLF8(addrj)",
/* 300 */	"stmt: CALLF8(addrj)",
/* 301 */	"stmt: CALLF8(addrj)",
/* 302 */	"stmt: RETI4(reg)",
/* 303 */	"stmt: RETU4(reg)",
/* 304 */	"stmt: RETP4(reg)",
/* 305 */	"stmt: RETF4(freg)",
/* 306 */	"stmt: RETF8(freg)",
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
	36,
	37,
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
	137,
	138,
	139,
	144,
	145,
	146,
	147,
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
	185,
	186,
	192,
	193,
	194,
	195,
	196,
	221,
	222,
	223,
	224,
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
	251,
	256,
	257,
	258,
	259,
	260,
	261,
	262,
	263,
	264,
	265,
	266,
	267,
	291,
	292,
	293,
	296,
	297,
	300,
	301,
	302,
	303,
	304,
	305,
	306,
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
	114,
	115,
	116,
	117,
	134,
	135,
	136,
	140,
	141,
	142,
	143,
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
	213,
	285,
	286,
	287,
	288,
	289,
	290,
};

static short _decode_freg[] = {
	0,
	11,
	12,
	191,
	197,
	198,
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
	214,
	215,
	216,
	217,
	268,
	269,
	270,
	271,
	272,
	273,
	274,
	275,
	276,
	277,
	278,
	279,
	280,
	281,
	282,
	283,
	284,
	294,
	295,
	298,
	299,
};

static short _decode_cnst[] = {
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

static short _decode_con[] = {
	0,
	35,
};

static short _decode_acon[] = {
	0,
	38,
	39,
	40,
};

static short _decode_baseaddr[] = {
	0,
	41,
};

static short _decode_base[] = {
	0,
	42,
	43,
	44,
	45,
	46,
	47,
};

static short _decode_index[] = {
	0,
	48,
	49,
	50,
	51,
	52,
	53,
	54,
};

static short _decode_con1[] = {
	0,
	57,
	58,
};

static short _decode_con2[] = {
	0,
	59,
	60,
};

static short _decode_con3[] = {
	0,
	61,
	62,
};

static short _decode_con0[] = {
	0,
	55,
	56,
};

static short _decode_addr[] = {
	0,
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
};

static short _decode_mem1[] = {
	0,
	75,
	76,
};

static short _decode_mem2[] = {
	0,
	77,
	78,
};

static short _decode_mem4[] = {
	0,
	79,
	80,
	81,
};

static short _decode_rc[] = {
	0,
	82,
	83,
};

static short _decode_mr[] = {
	0,
	84,
	85,
};

static short _decode_mr1[] = {
	0,
	86,
	87,
};

static short _decode_mr2[] = {
	0,
	88,
	89,
};

static short _decode_mrc[] = {
	0,
	90,
	91,
	92,
	93,
};

static short _decode_rc5[] = {
	0,
	148,
	149,
};

static short _decode_mrca[] = {
	0,
	171,
	172,
	173,
	174,
};

static short _decode_memf[] = {
	0,
	187,
	188,
	189,
	190,
};

static short _decode_flt[] = {
	0,
	199,
	200,
};

static short _decode_flt2[] = {
	0,
	201,
	202,
};

static short _decode_addrj[] = {
	0,
	218,
	219,
	220,
};

static short _decode_cmpf[] = {
	0,
	252,
	253,
	254,
	255,
};

static int _rule(void *state, int goalnt) {
	if (goalnt < 1 || goalnt > 29)
		fatal("_rule", "Bad goal nonterminal %d\n", goalnt);
	if (!state)
		return 0;
	switch (goalnt) {
	case _stmt_NT:	return _decode_stmt[((struct _state *)state)->rule._stmt];
	case _reg_NT:	return _decode_reg[((struct _state *)state)->rule._reg];
	case _freg_NT:	return _decode_freg[((struct _state *)state)->rule._freg];
	case _cnst_NT:	return _decode_cnst[((struct _state *)state)->rule._cnst];
	case _con_NT:	return _decode_con[((struct _state *)state)->rule._con];
	case _acon_NT:	return _decode_acon[((struct _state *)state)->rule._acon];
	case _baseaddr_NT:	return _decode_baseaddr[((struct _state *)state)->rule._baseaddr];
	case _base_NT:	return _decode_base[((struct _state *)state)->rule._base];
	case _index_NT:	return _decode_index[((struct _state *)state)->rule._index];
	case _con1_NT:	return _decode_con1[((struct _state *)state)->rule._con1];
	case _con2_NT:	return _decode_con2[((struct _state *)state)->rule._con2];
	case _con3_NT:	return _decode_con3[((struct _state *)state)->rule._con3];
	case _con0_NT:	return _decode_con0[((struct _state *)state)->rule._con0];
	case _addr_NT:	return _decode_addr[((struct _state *)state)->rule._addr];
	case _mem1_NT:	return _decode_mem1[((struct _state *)state)->rule._mem1];
	case _mem2_NT:	return _decode_mem2[((struct _state *)state)->rule._mem2];
	case _mem4_NT:	return _decode_mem4[((struct _state *)state)->rule._mem4];
	case _rc_NT:	return _decode_rc[((struct _state *)state)->rule._rc];
	case _mr_NT:	return _decode_mr[((struct _state *)state)->rule._mr];
	case _mr1_NT:	return _decode_mr1[((struct _state *)state)->rule._mr1];
	case _mr2_NT:	return _decode_mr2[((struct _state *)state)->rule._mr2];
	case _mrc_NT:	return _decode_mrc[((struct _state *)state)->rule._mrc];
	case _rc5_NT:	return _decode_rc5[((struct _state *)state)->rule._rc5];
	case _mrca_NT:	return _decode_mrca[((struct _state *)state)->rule._mrca];
	case _memf_NT:	return _decode_memf[((struct _state *)state)->rule._memf];
	case _flt_NT:	return _decode_flt[((struct _state *)state)->rule._flt];
	case _flt2_NT:	return _decode_flt2[((struct _state *)state)->rule._flt2];
	case _addrj_NT:	return _decode_addrj[((struct _state *)state)->rule._addrj];
	case _cmpf_NT:	return _decode_cmpf[((struct _state *)state)->rule._cmpf];
	default:
		fatal("_rule", "Bad goal nonterminal %d\n", goalnt);
		return 0;
	}
}

static void _closure_reg(NODEPTR_TYPE, int);
static void _closure_freg(NODEPTR_TYPE, int);
static void _closure_cnst(NODEPTR_TYPE, int);
static void _closure_con(NODEPTR_TYPE, int);
static void _closure_baseaddr(NODEPTR_TYPE, int);
static void _closure_base(NODEPTR_TYPE, int);
static void _closure_index(NODEPTR_TYPE, int);
static void _closure_addr(NODEPTR_TYPE, int);
static void _closure_mem1(NODEPTR_TYPE, int);
static void _closure_mem2(NODEPTR_TYPE, int);
static void _closure_mem4(NODEPTR_TYPE, int);
static void _closure_rc(NODEPTR_TYPE, int);
static void _closure_mr(NODEPTR_TYPE, int);
static void _closure_mr1(NODEPTR_TYPE, int);
static void _closure_mr2(NODEPTR_TYPE, int);
static void _closure_memf(NODEPTR_TYPE, int);

static void _closure_reg(NODEPTR_TYPE a, int c) {
	struct _state *p = STATE_LABEL(a);
	if (c + 2 < p->cost[_addrj_NT]) {
		p->cost[_addrj_NT] = c + 2;
		p->rule._addrj = 2;
	}
	if (c + 0 < p->cost[_rc5_NT]) {
		p->cost[_rc5_NT] = c + 0;
		p->rule._rc5 = 2;
	}
	if (c + 0 < p->cost[_mr2_NT]) {
		p->cost[_mr2_NT] = c + 0;
		p->rule._mr2 = 1;
		_closure_mr2(a, c + 0);
	}
	if (c + 0 < p->cost[_mr1_NT]) {
		p->cost[_mr1_NT] = c + 0;
		p->rule._mr1 = 1;
		_closure_mr1(a, c + 0);
	}
	if (c + 0 < p->cost[_mr_NT]) {
		p->cost[_mr_NT] = c + 0;
		p->rule._mr = 1;
		_closure_mr(a, c + 0);
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
		p->rule._base = 1;
		_closure_base(a, c + 0);
	}
	if (c + 0 < p->cost[_stmt_NT]) {
		p->cost[_stmt_NT] = c + 0;
		p->rule._stmt = 13;
	}
}

static void _closure_freg(NODEPTR_TYPE a, int c) {
	struct _state *p = STATE_LABEL(a);
	if (c + 0 < p->cost[_cmpf_NT]) {
		p->cost[_cmpf_NT] = c + 0;
		p->rule._cmpf = 4;
	}
	if (c + 0 < p->cost[_flt2_NT]) {
		p->cost[_flt2_NT] = c + 0;
		p->rule._flt2 = 2;
	}
	if (c + 0 < p->cost[_flt_NT]) {
		p->cost[_flt_NT] = c + 0;
		p->rule._flt = 2;
	}
	if (c + 0 < p->cost[_stmt_NT]) {
		p->cost[_stmt_NT] = c + 0;
		p->rule._stmt = 14;
	}
}

static void _closure_cnst(NODEPTR_TYPE a, int c) {
	struct _state *p = STATE_LABEL(a);
	if (c + 0 < p->cost[_acon_NT]) {
		p->cost[_acon_NT] = c + 0;
		p->rule._acon = 3;
	}
	if (c + 0 < p->cost[_con_NT]) {
		p->cost[_con_NT] = c + 0;
		p->rule._con = 1;
		_closure_con(a, c + 0);
	}
}

static void _closure_con(NODEPTR_TYPE a, int c) {
	struct _state *p = STATE_LABEL(a);
	if (c + 1 < p->cost[_reg_NT]) {
		p->cost[_reg_NT] = c + 1;
		p->rule._reg = 15;
		_closure_reg(a, c + 1);
	}
	if (c + 0 < p->cost[_rc_NT]) {
		p->cost[_rc_NT] = c + 0;
		p->rule._rc = 2;
		_closure_rc(a, c + 0);
	}
}

static void _closure_baseaddr(NODEPTR_TYPE a, int c) {
	struct _state *p = STATE_LABEL(a);
	if (c + 0 < p->cost[_addr_NT]) {
		p->cost[_addr_NT] = c + 0;
		p->rule._addr = 2;
		_closure_addr(a, c + 0);
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
		p->rule._addr = 12;
		_closure_addr(a, c + 0);
	}
}

static void _closure_addr(NODEPTR_TYPE a, int c) {
	struct _state *p = STATE_LABEL(a);
	if (c + 1 < p->cost[_reg_NT]) {
		p->cost[_reg_NT] = c + 1;
		p->rule._reg = 11;
		_closure_reg(a, c + 1);
	}
}

static void _closure_mem1(NODEPTR_TYPE a, int c) {
	struct _state *p = STATE_LABEL(a);
	if (c + 1 < p->cost[_mrc_NT]) {
		p->cost[_mrc_NT] = c + 1;
		p->rule._mrc = 2;
	}
	if (c + 0 < p->cost[_mr1_NT]) {
		p->cost[_mr1_NT] = c + 0;
		p->rule._mr1 = 2;
		_closure_mr1(a, c + 0);
	}
}

static void _closure_mem2(NODEPTR_TYPE a, int c) {
	struct _state *p = STATE_LABEL(a);
	if (c + 1 < p->cost[_mrc_NT]) {
		p->cost[_mrc_NT] = c + 1;
		p->rule._mrc = 3;
	}
	if (c + 0 < p->cost[_mr2_NT]) {
		p->cost[_mr2_NT] = c + 0;
		p->rule._mr2 = 2;
		_closure_mr2(a, c + 0);
	}
}

static void _closure_mem4(NODEPTR_TYPE a, int c) {
	struct _state *p = STATE_LABEL(a);
	if (c + 2 < p->cost[_addrj_NT]) {
		p->cost[_addrj_NT] = c + 2;
		p->rule._addrj = 3;
	}
	if (c + 0 < p->cost[_mrca_NT]) {
		p->cost[_mrca_NT] = c + 0;
		p->rule._mrca = 1;
	}
	if (c + 1 < p->cost[_mrc_NT]) {
		p->cost[_mrc_NT] = c + 1;
		p->rule._mrc = 1;
	}
	if (c + 0 < p->cost[_mr_NT]) {
		p->cost[_mr_NT] = c + 0;
		p->rule._mr = 2;
		_closure_mr(a, c + 0);
	}
}

static void _closure_rc(NODEPTR_TYPE a, int c) {
	struct _state *p = STATE_LABEL(a);
	if (c + 0 < p->cost[_mrca_NT]) {
		p->cost[_mrca_NT] = c + 0;
		p->rule._mrca = 2;
	}
	if (c + 0 < p->cost[_mrc_NT]) {
		p->cost[_mrc_NT] = c + 0;
		p->rule._mrc = 4;
	}
}

static void _closure_mr(NODEPTR_TYPE a, int c) {
	struct _state *p = STATE_LABEL(a);
	if (c + 1 < p->cost[_reg_NT]) {
		p->cost[_reg_NT] = c + 1;
		p->rule._reg = 12;
		_closure_reg(a, c + 1);
	}
}

static void _closure_mr1(NODEPTR_TYPE a, int c) {
	struct _state *p = STATE_LABEL(a);
	if (c + 1 < p->cost[_reg_NT]) {
		p->cost[_reg_NT] = c + 1;
		p->rule._reg = 13;
		_closure_reg(a, c + 1);
	}
}

static void _closure_mr2(NODEPTR_TYPE a, int c) {
	struct _state *p = STATE_LABEL(a);
	if (c + 1 < p->cost[_reg_NT]) {
		p->cost[_reg_NT] = c + 1;
		p->rule._reg = 14;
		_closure_reg(a, c + 1);
	}
}

static void _closure_memf(NODEPTR_TYPE a, int c) {
	struct _state *p = STATE_LABEL(a);
	if (c + 0 < p->cost[_flt2_NT]) {
		p->cost[_flt2_NT] = c + 0;
		p->rule._flt2 = 1;
	}
	if (c + 0 < p->cost[_flt_NT]) {
		p->cost[_flt_NT] = c + 0;
		p->rule._flt = 1;
	}
	if (c + 3 < p->cost[_freg_NT]) {
		p->cost[_freg_NT] = c + 3;
		p->rule._freg = 3;
		_closure_freg(a, c + 3);
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
	p->cost[22] =
	p->cost[23] =
	p->cost[24] =
	p->cost[25] =
	p->cost[26] =
	p->cost[27] =
	p->cost[28] =
	p->cost[29] =
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
				p->rule._stmt = 49;
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
				p->rule._stmt = 48;
			}
		}
		break;
	case 73: /* INDIRB */
		_label(LEFT_CHILD(a));
		break;
	case 216: /* CALLV */
		_label(LEFT_CHILD(a));
		/* stmt: CALLV(addrj) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addrj_NT] + (hasargs(a) + !isstruct(freturn(a->syms[1]->type)));
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 98;
		}
		/* stmt: CALLV(addrj) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addrj_NT] + (hasargs(a) +  isstruct(freturn(a->syms[1]->type)));
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 99;
		}
		/* stmt: CALLV(addrj) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addrj_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 100;
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
			p->rule._stmt = 56;
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
		/* cnst: CNSTI1 */
		if (0 + 0 < p->cost[_cnst_NT]) {
			p->cost[_cnst_NT] = 0 + 0;
			p->rule._cnst = 1;
			_closure_cnst(a, 0 + 0);
		}
		break;
	case 1046: /* CNSTU1 */
		/* cnst: CNSTU1 */
		if (0 + 0 < p->cost[_cnst_NT]) {
			p->cost[_cnst_NT] = 0 + 0;
			p->rule._cnst = 2;
			_closure_cnst(a, 0 + 0);
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
			p->rule._stmt = 38;
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
			p->rule._stmt = 41;
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
				if (q->cost[_freg_NT] == 0) {
					p->cost[_freg_NT] = 0;
					p->rule._freg = q->rule._freg;
				}
				if (q->cost[_cnst_NT] == 0) {
					p->cost[_cnst_NT] = 0;
					p->rule._cnst = q->rule._cnst;
				}
				if (q->cost[_con_NT] == 0) {
					p->cost[_con_NT] = 0;
					p->rule._con = q->rule._con;
				}
				if (q->cost[_acon_NT] == 0) {
					p->cost[_acon_NT] = 0;
					p->rule._acon = q->rule._acon;
				}
				if (q->cost[_baseaddr_NT] == 0) {
					p->cost[_baseaddr_NT] = 0;
					p->rule._baseaddr = q->rule._baseaddr;
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
				if (q->cost[_con0_NT] == 0) {
					p->cost[_con0_NT] = 0;
					p->rule._con0 = q->rule._con0;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_mem1_NT] == 0) {
					p->cost[_mem1_NT] = 0;
					p->rule._mem1 = q->rule._mem1;
				}
				if (q->cost[_mem2_NT] == 0) {
					p->cost[_mem2_NT] = 0;
					p->rule._mem2 = q->rule._mem2;
				}
				if (q->cost[_mem4_NT] == 0) {
					p->cost[_mem4_NT] = 0;
					p->rule._mem4 = q->rule._mem4;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_mr_NT] == 0) {
					p->cost[_mr_NT] = 0;
					p->rule._mr = q->rule._mr;
				}
				if (q->cost[_mr1_NT] == 0) {
					p->cost[_mr1_NT] = 0;
					p->rule._mr1 = q->rule._mr1;
				}
				if (q->cost[_mr2_NT] == 0) {
					p->cost[_mr2_NT] = 0;
					p->rule._mr2 = q->rule._mr2;
				}
				if (q->cost[_mrc_NT] == 0) {
					p->cost[_mrc_NT] = 0;
					p->rule._mrc = q->rule._mrc;
				}
				if (q->cost[_rc5_NT] == 0) {
					p->cost[_rc5_NT] = 0;
					p->rule._rc5 = q->rule._rc5;
				}
				if (q->cost[_mrca_NT] == 0) {
					p->cost[_mrca_NT] = 0;
					p->rule._mrca = q->rule._mrca;
				}
				if (q->cost[_memf_NT] == 0) {
					p->cost[_memf_NT] = 0;
					p->rule._memf = q->rule._memf;
				}
				if (q->cost[_flt_NT] == 0) {
					p->cost[_flt_NT] = 0;
					p->rule._flt = q->rule._flt;
				}
				if (q->cost[_flt2_NT] == 0) {
					p->cost[_flt2_NT] = 0;
					p->rule._flt2 = q->rule._flt2;
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
		/* mem1: INDIRI1(addr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + 0;
		if (c + 0 < p->cost[_mem1_NT]) {
			p->cost[_mem1_NT] = c + 0;
			p->rule._mem1 = 1;
			_closure_mem1(a, c + 0);
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
				if (q->cost[_freg_NT] == 0) {
					p->cost[_freg_NT] = 0;
					p->rule._freg = q->rule._freg;
				}
				if (q->cost[_cnst_NT] == 0) {
					p->cost[_cnst_NT] = 0;
					p->rule._cnst = q->rule._cnst;
				}
				if (q->cost[_con_NT] == 0) {
					p->cost[_con_NT] = 0;
					p->rule._con = q->rule._con;
				}
				if (q->cost[_acon_NT] == 0) {
					p->cost[_acon_NT] = 0;
					p->rule._acon = q->rule._acon;
				}
				if (q->cost[_baseaddr_NT] == 0) {
					p->cost[_baseaddr_NT] = 0;
					p->rule._baseaddr = q->rule._baseaddr;
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
				if (q->cost[_con0_NT] == 0) {
					p->cost[_con0_NT] = 0;
					p->rule._con0 = q->rule._con0;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_mem1_NT] == 0) {
					p->cost[_mem1_NT] = 0;
					p->rule._mem1 = q->rule._mem1;
				}
				if (q->cost[_mem2_NT] == 0) {
					p->cost[_mem2_NT] = 0;
					p->rule._mem2 = q->rule._mem2;
				}
				if (q->cost[_mem4_NT] == 0) {
					p->cost[_mem4_NT] = 0;
					p->rule._mem4 = q->rule._mem4;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_mr_NT] == 0) {
					p->cost[_mr_NT] = 0;
					p->rule._mr = q->rule._mr;
				}
				if (q->cost[_mr1_NT] == 0) {
					p->cost[_mr1_NT] = 0;
					p->rule._mr1 = q->rule._mr1;
				}
				if (q->cost[_mr2_NT] == 0) {
					p->cost[_mr2_NT] = 0;
					p->rule._mr2 = q->rule._mr2;
				}
				if (q->cost[_mrc_NT] == 0) {
					p->cost[_mrc_NT] = 0;
					p->rule._mrc = q->rule._mrc;
				}
				if (q->cost[_rc5_NT] == 0) {
					p->cost[_rc5_NT] = 0;
					p->rule._rc5 = q->rule._rc5;
				}
				if (q->cost[_mrca_NT] == 0) {
					p->cost[_mrca_NT] = 0;
					p->rule._mrca = q->rule._mrca;
				}
				if (q->cost[_memf_NT] == 0) {
					p->cost[_memf_NT] = 0;
					p->rule._memf = q->rule._memf;
				}
				if (q->cost[_flt_NT] == 0) {
					p->cost[_flt_NT] = 0;
					p->rule._flt = q->rule._flt;
				}
				if (q->cost[_flt2_NT] == 0) {
					p->cost[_flt2_NT] = 0;
					p->rule._flt2 = q->rule._flt2;
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
		/* mem1: INDIRU1(addr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + 0;
		if (c + 0 < p->cost[_mem1_NT]) {
			p->cost[_mem1_NT] = c + 0;
			p->rule._mem1 = 2;
			_closure_mem1(a, c + 0);
		}
		break;
	case 1157: /* CVII1 */
		_label(LEFT_CHILD(a));
		/* reg: CVII1(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 59;
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
			p->rule._reg = 61;
			_closure_reg(a, c + 0);
		}
		break;
	case 1253: /* LOADI1 */
		_label(LEFT_CHILD(a));
		/* reg: LOADI1(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 16;
			_closure_reg(a, c + 0);
		}
		break;
	case 1254: /* LOADU1 */
		_label(LEFT_CHILD(a));
		/* reg: LOADU1(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 19;
			_closure_reg(a, c + 0);
		}
		break;
	case 2069: /* CNSTI2 */
		/* cnst: CNSTI2 */
		if (0 + 0 < p->cost[_cnst_NT]) {
			p->cost[_cnst_NT] = 0 + 0;
			p->rule._cnst = 3;
			_closure_cnst(a, 0 + 0);
		}
		break;
	case 2070: /* CNSTU2 */
		/* cnst: CNSTU2 */
		if (0 + 0 < p->cost[_cnst_NT]) {
			p->cost[_cnst_NT] = 0 + 0;
			p->rule._cnst = 4;
			_closure_cnst(a, 0 + 0);
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
			p->rule._stmt = 39;
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
			p->rule._stmt = 42;
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
				if (q->cost[_freg_NT] == 0) {
					p->cost[_freg_NT] = 0;
					p->rule._freg = q->rule._freg;
				}
				if (q->cost[_cnst_NT] == 0) {
					p->cost[_cnst_NT] = 0;
					p->rule._cnst = q->rule._cnst;
				}
				if (q->cost[_con_NT] == 0) {
					p->cost[_con_NT] = 0;
					p->rule._con = q->rule._con;
				}
				if (q->cost[_acon_NT] == 0) {
					p->cost[_acon_NT] = 0;
					p->rule._acon = q->rule._acon;
				}
				if (q->cost[_baseaddr_NT] == 0) {
					p->cost[_baseaddr_NT] = 0;
					p->rule._baseaddr = q->rule._baseaddr;
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
				if (q->cost[_con0_NT] == 0) {
					p->cost[_con0_NT] = 0;
					p->rule._con0 = q->rule._con0;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_mem1_NT] == 0) {
					p->cost[_mem1_NT] = 0;
					p->rule._mem1 = q->rule._mem1;
				}
				if (q->cost[_mem2_NT] == 0) {
					p->cost[_mem2_NT] = 0;
					p->rule._mem2 = q->rule._mem2;
				}
				if (q->cost[_mem4_NT] == 0) {
					p->cost[_mem4_NT] = 0;
					p->rule._mem4 = q->rule._mem4;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_mr_NT] == 0) {
					p->cost[_mr_NT] = 0;
					p->rule._mr = q->rule._mr;
				}
				if (q->cost[_mr1_NT] == 0) {
					p->cost[_mr1_NT] = 0;
					p->rule._mr1 = q->rule._mr1;
				}
				if (q->cost[_mr2_NT] == 0) {
					p->cost[_mr2_NT] = 0;
					p->rule._mr2 = q->rule._mr2;
				}
				if (q->cost[_mrc_NT] == 0) {
					p->cost[_mrc_NT] = 0;
					p->rule._mrc = q->rule._mrc;
				}
				if (q->cost[_rc5_NT] == 0) {
					p->cost[_rc5_NT] = 0;
					p->rule._rc5 = q->rule._rc5;
				}
				if (q->cost[_mrca_NT] == 0) {
					p->cost[_mrca_NT] = 0;
					p->rule._mrca = q->rule._mrca;
				}
				if (q->cost[_memf_NT] == 0) {
					p->cost[_memf_NT] = 0;
					p->rule._memf = q->rule._memf;
				}
				if (q->cost[_flt_NT] == 0) {
					p->cost[_flt_NT] = 0;
					p->rule._flt = q->rule._flt;
				}
				if (q->cost[_flt2_NT] == 0) {
					p->cost[_flt2_NT] = 0;
					p->rule._flt2 = q->rule._flt2;
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
		/* mem2: INDIRI2(addr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + 0;
		if (c + 0 < p->cost[_mem2_NT]) {
			p->cost[_mem2_NT] = c + 0;
			p->rule._mem2 = 1;
			_closure_mem2(a, c + 0);
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
				if (q->cost[_freg_NT] == 0) {
					p->cost[_freg_NT] = 0;
					p->rule._freg = q->rule._freg;
				}
				if (q->cost[_cnst_NT] == 0) {
					p->cost[_cnst_NT] = 0;
					p->rule._cnst = q->rule._cnst;
				}
				if (q->cost[_con_NT] == 0) {
					p->cost[_con_NT] = 0;
					p->rule._con = q->rule._con;
				}
				if (q->cost[_acon_NT] == 0) {
					p->cost[_acon_NT] = 0;
					p->rule._acon = q->rule._acon;
				}
				if (q->cost[_baseaddr_NT] == 0) {
					p->cost[_baseaddr_NT] = 0;
					p->rule._baseaddr = q->rule._baseaddr;
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
				if (q->cost[_con0_NT] == 0) {
					p->cost[_con0_NT] = 0;
					p->rule._con0 = q->rule._con0;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_mem1_NT] == 0) {
					p->cost[_mem1_NT] = 0;
					p->rule._mem1 = q->rule._mem1;
				}
				if (q->cost[_mem2_NT] == 0) {
					p->cost[_mem2_NT] = 0;
					p->rule._mem2 = q->rule._mem2;
				}
				if (q->cost[_mem4_NT] == 0) {
					p->cost[_mem4_NT] = 0;
					p->rule._mem4 = q->rule._mem4;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_mr_NT] == 0) {
					p->cost[_mr_NT] = 0;
					p->rule._mr = q->rule._mr;
				}
				if (q->cost[_mr1_NT] == 0) {
					p->cost[_mr1_NT] = 0;
					p->rule._mr1 = q->rule._mr1;
				}
				if (q->cost[_mr2_NT] == 0) {
					p->cost[_mr2_NT] = 0;
					p->rule._mr2 = q->rule._mr2;
				}
				if (q->cost[_mrc_NT] == 0) {
					p->cost[_mrc_NT] = 0;
					p->rule._mrc = q->rule._mrc;
				}
				if (q->cost[_rc5_NT] == 0) {
					p->cost[_rc5_NT] = 0;
					p->rule._rc5 = q->rule._rc5;
				}
				if (q->cost[_mrca_NT] == 0) {
					p->cost[_mrca_NT] = 0;
					p->rule._mrca = q->rule._mrca;
				}
				if (q->cost[_memf_NT] == 0) {
					p->cost[_memf_NT] = 0;
					p->rule._memf = q->rule._memf;
				}
				if (q->cost[_flt_NT] == 0) {
					p->cost[_flt_NT] = 0;
					p->rule._flt = q->rule._flt;
				}
				if (q->cost[_flt2_NT] == 0) {
					p->cost[_flt2_NT] = 0;
					p->rule._flt2 = q->rule._flt2;
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
		/* mem2: INDIRU2(addr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + 0;
		if (c + 0 < p->cost[_mem2_NT]) {
			p->cost[_mem2_NT] = c + 0;
			p->rule._mem2 = 2;
			_closure_mem2(a, c + 0);
		}
		break;
	case 2181: /* CVII2 */
		_label(LEFT_CHILD(a));
		/* reg: CVII2(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 60;
			_closure_reg(a, c + 0);
		}
		break;
	case 2182: /* CVIU2 */
		_label(LEFT_CHILD(a));
		break;
	case 2229: /* CVUI2 */
		break;
	case 2230: /* CVUU2 */
		_label(LEFT_CHILD(a));
		/* reg: CVUU2(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 62;
			_closure_reg(a, c + 0);
		}
		break;
	case 2277: /* LOADI2 */
		_label(LEFT_CHILD(a));
		/* reg: LOADI2(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 17;
			_closure_reg(a, c + 0);
		}
		break;
	case 2278: /* LOADU2 */
		_label(LEFT_CHILD(a));
		/* reg: LOADU2(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 20;
			_closure_reg(a, c + 0);
		}
		break;
	case 4113: /* CNSTF4 */
		break;
	case 4117: /* CNSTI4 */
		/* cnst: CNSTI4 */
		if (0 + 0 < p->cost[_cnst_NT]) {
			p->cost[_cnst_NT] = 0 + 0;
			p->rule._cnst = 5;
			_closure_cnst(a, 0 + 0);
		}
		/* con0: CNSTI4 */
		c = (range(a, 0, 0));
		if (c + 0 < p->cost[_con0_NT]) {
			p->cost[_con0_NT] = c + 0;
			p->rule._con0 = 1;
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
		/* rc5: CNSTI4 */
		c = (range(a, 0, 31));
		if (c + 0 < p->cost[_rc5_NT]) {
			p->cost[_rc5_NT] = c + 0;
			p->rule._rc5 = 1;
		}
		break;
	case 4118: /* CNSTU4 */
		/* cnst: CNSTU4 */
		if (0 + 0 < p->cost[_cnst_NT]) {
			p->cost[_cnst_NT] = 0 + 0;
			p->rule._cnst = 6;
			_closure_cnst(a, 0 + 0);
		}
		/* con0: CNSTU4 */
		c = (range(a, 0, 0));
		if (c + 0 < p->cost[_con0_NT]) {
			p->cost[_con0_NT] = c + 0;
			p->rule._con0 = 2;
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
		/* cnst: CNSTP4 */
		if (0 + 0 < p->cost[_cnst_NT]) {
			p->cost[_cnst_NT] = 0 + 0;
			p->rule._cnst = 7;
			_closure_cnst(a, 0 + 0);
		}
		break;
	case 4129: /* ARGF4 */
		_label(LEFT_CHILD(a));
		/* stmt: ARGF4(freg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_freg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 54;
		}
		break;
	case 4133: /* ARGI4 */
		_label(LEFT_CHILD(a));
		/* stmt: ARGI4(mrca) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_mrca_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 45;
		}
		break;
	case 4134: /* ARGU4 */
		_label(LEFT_CHILD(a));
		/* stmt: ARGU4(mrca) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_mrca_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 46;
		}
		break;
	case 4135: /* ARGP4 */
		_label(LEFT_CHILD(a));
		/* stmt: ARGP4(mrca) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_mrca_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 47;
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
		/* stmt: ASGNF4(addr,freg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_freg_NT] + 7;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 51;
		}
		if (	/* stmt: ASGNF4(addr,CVFF4(freg)) */
			RIGHT_CHILD(a)->op == 4209 /* CVFF4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_freg_NT] + 7;
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 52;
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
		if (	/* stmt: ASGNI4(addr,ADDI4(mem4,con1)) */
			RIGHT_CHILD(a)->op == 4405 /* ADDI4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem4_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_con1_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 15;
			}
		}
		if (	/* stmt: ASGNI4(addr,ADDU4(mem4,con1)) */
			RIGHT_CHILD(a)->op == 4406 /* ADDU4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem4_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_con1_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 16;
			}
		}
		if (	/* stmt: ASGNI4(addr,SUBI4(mem4,con1)) */
			RIGHT_CHILD(a)->op == 4421 /* SUBI4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem4_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_con1_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 18;
			}
		}
		if (	/* stmt: ASGNI4(addr,SUBU4(mem4,con1)) */
			RIGHT_CHILD(a)->op == 4422 /* SUBU4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem4_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_con1_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 19;
			}
		}
		if (	/* stmt: ASGNI4(addr,ADDI4(mem4,rc)) */
			RIGHT_CHILD(a)->op == 4405 /* ADDI4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem4_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_rc_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 21;
			}
		}
		if (	/* stmt: ASGNI4(addr,SUBI4(mem4,rc)) */
			RIGHT_CHILD(a)->op == 4421 /* SUBI4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem4_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_rc_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 22;
			}
		}
		if (	/* stmt: ASGNI4(addr,BANDI4(mem4,rc)) */
			RIGHT_CHILD(a)->op == 4485 /* BANDI4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem4_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_rc_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 25;
			}
		}
		if (	/* stmt: ASGNI4(addr,BORI4(mem4,rc)) */
			RIGHT_CHILD(a)->op == 4517 /* BORI4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem4_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_rc_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 26;
			}
		}
		if (	/* stmt: ASGNI4(addr,BXORI4(mem4,rc)) */
			RIGHT_CHILD(a)->op == 4533 /* BXORI4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem4_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_rc_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 27;
			}
		}
		if (	/* stmt: ASGNI4(addr,BCOMI4(mem4)) */
			RIGHT_CHILD(a)->op == 4501 /* BCOMI4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem4_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 31;
			}
		}
		if (	/* stmt: ASGNI4(addr,NEGI4(mem4)) */
			RIGHT_CHILD(a)->op == 4293 /* NEGI4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem4_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 33;
			}
		}
		if (	/* stmt: ASGNI4(addr,LSHI4(mem4,rc5)) */
			RIGHT_CHILD(a)->op == 4437 /* LSHI4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem4_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_rc5_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 34;
			}
		}
		if (	/* stmt: ASGNI4(addr,LSHU4(mem4,rc5)) */
			RIGHT_CHILD(a)->op == 4438 /* LSHU4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem4_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_rc5_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 35;
			}
		}
		if (	/* stmt: ASGNI4(addr,RSHI4(mem4,rc5)) */
			RIGHT_CHILD(a)->op == 4469 /* RSHI4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem4_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_rc5_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 36;
			}
		}
		if (	/* stmt: ASGNI4(addr,RSHU4(mem4,rc5)) */
			RIGHT_CHILD(a)->op == 4470 /* RSHU4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem4_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_rc5_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 37;
			}
		}
		/* stmt: ASGNI4(addr,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 40;
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
		if (	/* stmt: ASGNU4(addr,ADDU4(mem4,rc)) */
			RIGHT_CHILD(a)->op == 4406 /* ADDU4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem4_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_rc_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 23;
			}
		}
		if (	/* stmt: ASGNU4(addr,SUBU4(mem4,rc)) */
			RIGHT_CHILD(a)->op == 4422 /* SUBU4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem4_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_rc_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 24;
			}
		}
		if (	/* stmt: ASGNU4(addr,BANDU4(mem4,rc)) */
			RIGHT_CHILD(a)->op == 4486 /* BANDU4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem4_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_rc_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 28;
			}
		}
		if (	/* stmt: ASGNU4(addr,BORU4(mem4,rc)) */
			RIGHT_CHILD(a)->op == 4518 /* BORU4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem4_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_rc_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 29;
			}
		}
		if (	/* stmt: ASGNU4(addr,BXORU4(mem4,rc)) */
			RIGHT_CHILD(a)->op == 4534 /* BXORU4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem4_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_rc_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 30;
			}
		}
		if (	/* stmt: ASGNU4(addr,BCOMU4(mem4)) */
			RIGHT_CHILD(a)->op == 4502 /* BCOMU4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem4_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 32;
			}
		}
		/* stmt: ASGNU4(addr,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 43;
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
		if (	/* stmt: ASGNP4(addr,ADDP4(mem4,con1)) */
			RIGHT_CHILD(a)->op == 4407 /* ADDP4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem4_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_con1_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 17;
			}
		}
		if (	/* stmt: ASGNP4(addr,SUBP4(mem4,con1)) */
			RIGHT_CHILD(a)->op == 4423 /* SUBP4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(LEFT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_mem4_NT] + ((struct _state *)(RIGHT_CHILD(RIGHT_CHILD(a))->x.state))->cost[_con1_NT] + (memop(a));
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 20;
			}
		}
		/* stmt: ASGNP4(addr,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 44;
		}
		break;
	case 4161: /* INDIRF4 */
		_label(LEFT_CHILD(a));
		if (	/* freg: INDIRF4(VREGP) */
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
				if (q->cost[_freg_NT] == 0) {
					p->cost[_freg_NT] = 0;
					p->rule._freg = q->rule._freg;
				}
				if (q->cost[_cnst_NT] == 0) {
					p->cost[_cnst_NT] = 0;
					p->rule._cnst = q->rule._cnst;
				}
				if (q->cost[_con_NT] == 0) {
					p->cost[_con_NT] = 0;
					p->rule._con = q->rule._con;
				}
				if (q->cost[_acon_NT] == 0) {
					p->cost[_acon_NT] = 0;
					p->rule._acon = q->rule._acon;
				}
				if (q->cost[_baseaddr_NT] == 0) {
					p->cost[_baseaddr_NT] = 0;
					p->rule._baseaddr = q->rule._baseaddr;
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
				if (q->cost[_con0_NT] == 0) {
					p->cost[_con0_NT] = 0;
					p->rule._con0 = q->rule._con0;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_mem1_NT] == 0) {
					p->cost[_mem1_NT] = 0;
					p->rule._mem1 = q->rule._mem1;
				}
				if (q->cost[_mem2_NT] == 0) {
					p->cost[_mem2_NT] = 0;
					p->rule._mem2 = q->rule._mem2;
				}
				if (q->cost[_mem4_NT] == 0) {
					p->cost[_mem4_NT] = 0;
					p->rule._mem4 = q->rule._mem4;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_mr_NT] == 0) {
					p->cost[_mr_NT] = 0;
					p->rule._mr = q->rule._mr;
				}
				if (q->cost[_mr1_NT] == 0) {
					p->cost[_mr1_NT] = 0;
					p->rule._mr1 = q->rule._mr1;
				}
				if (q->cost[_mr2_NT] == 0) {
					p->cost[_mr2_NT] = 0;
					p->rule._mr2 = q->rule._mr2;
				}
				if (q->cost[_mrc_NT] == 0) {
					p->cost[_mrc_NT] = 0;
					p->rule._mrc = q->rule._mrc;
				}
				if (q->cost[_rc5_NT] == 0) {
					p->cost[_rc5_NT] = 0;
					p->rule._rc5 = q->rule._rc5;
				}
				if (q->cost[_mrca_NT] == 0) {
					p->cost[_mrca_NT] = 0;
					p->rule._mrca = q->rule._mrca;
				}
				if (q->cost[_memf_NT] == 0) {
					p->cost[_memf_NT] = 0;
					p->rule._memf = q->rule._memf;
				}
				if (q->cost[_flt_NT] == 0) {
					p->cost[_flt_NT] = 0;
					p->rule._flt = q->rule._flt;
				}
				if (q->cost[_flt2_NT] == 0) {
					p->cost[_flt2_NT] = 0;
					p->rule._flt2 = q->rule._flt2;
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
			if (c + 0 < p->cost[_freg_NT]) {
				p->cost[_freg_NT] = c + 0;
				p->rule._freg = 1;
				_closure_freg(a, c + 0);
			}
		}
		/* memf: INDIRF4(addr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + 0;
		if (c + 0 < p->cost[_memf_NT]) {
			p->cost[_memf_NT] = c + 0;
			p->rule._memf = 2;
			_closure_memf(a, c + 0);
		}
		/* cmpf: INDIRF4(addr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + 0;
		if (c + 0 < p->cost[_cmpf_NT]) {
			p->cost[_cmpf_NT] = c + 0;
			p->rule._cmpf = 2;
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
				if (q->cost[_freg_NT] == 0) {
					p->cost[_freg_NT] = 0;
					p->rule._freg = q->rule._freg;
				}
				if (q->cost[_cnst_NT] == 0) {
					p->cost[_cnst_NT] = 0;
					p->rule._cnst = q->rule._cnst;
				}
				if (q->cost[_con_NT] == 0) {
					p->cost[_con_NT] = 0;
					p->rule._con = q->rule._con;
				}
				if (q->cost[_acon_NT] == 0) {
					p->cost[_acon_NT] = 0;
					p->rule._acon = q->rule._acon;
				}
				if (q->cost[_baseaddr_NT] == 0) {
					p->cost[_baseaddr_NT] = 0;
					p->rule._baseaddr = q->rule._baseaddr;
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
				if (q->cost[_con0_NT] == 0) {
					p->cost[_con0_NT] = 0;
					p->rule._con0 = q->rule._con0;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_mem1_NT] == 0) {
					p->cost[_mem1_NT] = 0;
					p->rule._mem1 = q->rule._mem1;
				}
				if (q->cost[_mem2_NT] == 0) {
					p->cost[_mem2_NT] = 0;
					p->rule._mem2 = q->rule._mem2;
				}
				if (q->cost[_mem4_NT] == 0) {
					p->cost[_mem4_NT] = 0;
					p->rule._mem4 = q->rule._mem4;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_mr_NT] == 0) {
					p->cost[_mr_NT] = 0;
					p->rule._mr = q->rule._mr;
				}
				if (q->cost[_mr1_NT] == 0) {
					p->cost[_mr1_NT] = 0;
					p->rule._mr1 = q->rule._mr1;
				}
				if (q->cost[_mr2_NT] == 0) {
					p->cost[_mr2_NT] = 0;
					p->rule._mr2 = q->rule._mr2;
				}
				if (q->cost[_mrc_NT] == 0) {
					p->cost[_mrc_NT] = 0;
					p->rule._mrc = q->rule._mrc;
				}
				if (q->cost[_rc5_NT] == 0) {
					p->cost[_rc5_NT] = 0;
					p->rule._rc5 = q->rule._rc5;
				}
				if (q->cost[_mrca_NT] == 0) {
					p->cost[_mrca_NT] = 0;
					p->rule._mrca = q->rule._mrca;
				}
				if (q->cost[_memf_NT] == 0) {
					p->cost[_memf_NT] = 0;
					p->rule._memf = q->rule._memf;
				}
				if (q->cost[_flt_NT] == 0) {
					p->cost[_flt_NT] = 0;
					p->rule._flt = q->rule._flt;
				}
				if (q->cost[_flt2_NT] == 0) {
					p->cost[_flt2_NT] = 0;
					p->rule._flt2 = q->rule._flt2;
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
		/* mem4: INDIRI4(addr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + 0;
		if (c + 0 < p->cost[_mem4_NT]) {
			p->cost[_mem4_NT] = c + 0;
			p->rule._mem4 = 1;
			_closure_mem4(a, c + 0);
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
				if (q->cost[_freg_NT] == 0) {
					p->cost[_freg_NT] = 0;
					p->rule._freg = q->rule._freg;
				}
				if (q->cost[_cnst_NT] == 0) {
					p->cost[_cnst_NT] = 0;
					p->rule._cnst = q->rule._cnst;
				}
				if (q->cost[_con_NT] == 0) {
					p->cost[_con_NT] = 0;
					p->rule._con = q->rule._con;
				}
				if (q->cost[_acon_NT] == 0) {
					p->cost[_acon_NT] = 0;
					p->rule._acon = q->rule._acon;
				}
				if (q->cost[_baseaddr_NT] == 0) {
					p->cost[_baseaddr_NT] = 0;
					p->rule._baseaddr = q->rule._baseaddr;
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
				if (q->cost[_con0_NT] == 0) {
					p->cost[_con0_NT] = 0;
					p->rule._con0 = q->rule._con0;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_mem1_NT] == 0) {
					p->cost[_mem1_NT] = 0;
					p->rule._mem1 = q->rule._mem1;
				}
				if (q->cost[_mem2_NT] == 0) {
					p->cost[_mem2_NT] = 0;
					p->rule._mem2 = q->rule._mem2;
				}
				if (q->cost[_mem4_NT] == 0) {
					p->cost[_mem4_NT] = 0;
					p->rule._mem4 = q->rule._mem4;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_mr_NT] == 0) {
					p->cost[_mr_NT] = 0;
					p->rule._mr = q->rule._mr;
				}
				if (q->cost[_mr1_NT] == 0) {
					p->cost[_mr1_NT] = 0;
					p->rule._mr1 = q->rule._mr1;
				}
				if (q->cost[_mr2_NT] == 0) {
					p->cost[_mr2_NT] = 0;
					p->rule._mr2 = q->rule._mr2;
				}
				if (q->cost[_mrc_NT] == 0) {
					p->cost[_mrc_NT] = 0;
					p->rule._mrc = q->rule._mrc;
				}
				if (q->cost[_rc5_NT] == 0) {
					p->cost[_rc5_NT] = 0;
					p->rule._rc5 = q->rule._rc5;
				}
				if (q->cost[_mrca_NT] == 0) {
					p->cost[_mrca_NT] = 0;
					p->rule._mrca = q->rule._mrca;
				}
				if (q->cost[_memf_NT] == 0) {
					p->cost[_memf_NT] = 0;
					p->rule._memf = q->rule._memf;
				}
				if (q->cost[_flt_NT] == 0) {
					p->cost[_flt_NT] = 0;
					p->rule._flt = q->rule._flt;
				}
				if (q->cost[_flt2_NT] == 0) {
					p->cost[_flt2_NT] = 0;
					p->rule._flt2 = q->rule._flt2;
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
		/* mem4: INDIRU4(addr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + 0;
		if (c + 0 < p->cost[_mem4_NT]) {
			p->cost[_mem4_NT] = c + 0;
			p->rule._mem4 = 2;
			_closure_mem4(a, c + 0);
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
				if (q->cost[_freg_NT] == 0) {
					p->cost[_freg_NT] = 0;
					p->rule._freg = q->rule._freg;
				}
				if (q->cost[_cnst_NT] == 0) {
					p->cost[_cnst_NT] = 0;
					p->rule._cnst = q->rule._cnst;
				}
				if (q->cost[_con_NT] == 0) {
					p->cost[_con_NT] = 0;
					p->rule._con = q->rule._con;
				}
				if (q->cost[_acon_NT] == 0) {
					p->cost[_acon_NT] = 0;
					p->rule._acon = q->rule._acon;
				}
				if (q->cost[_baseaddr_NT] == 0) {
					p->cost[_baseaddr_NT] = 0;
					p->rule._baseaddr = q->rule._baseaddr;
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
				if (q->cost[_con0_NT] == 0) {
					p->cost[_con0_NT] = 0;
					p->rule._con0 = q->rule._con0;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_mem1_NT] == 0) {
					p->cost[_mem1_NT] = 0;
					p->rule._mem1 = q->rule._mem1;
				}
				if (q->cost[_mem2_NT] == 0) {
					p->cost[_mem2_NT] = 0;
					p->rule._mem2 = q->rule._mem2;
				}
				if (q->cost[_mem4_NT] == 0) {
					p->cost[_mem4_NT] = 0;
					p->rule._mem4 = q->rule._mem4;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_mr_NT] == 0) {
					p->cost[_mr_NT] = 0;
					p->rule._mr = q->rule._mr;
				}
				if (q->cost[_mr1_NT] == 0) {
					p->cost[_mr1_NT] = 0;
					p->rule._mr1 = q->rule._mr1;
				}
				if (q->cost[_mr2_NT] == 0) {
					p->cost[_mr2_NT] = 0;
					p->rule._mr2 = q->rule._mr2;
				}
				if (q->cost[_mrc_NT] == 0) {
					p->cost[_mrc_NT] = 0;
					p->rule._mrc = q->rule._mrc;
				}
				if (q->cost[_rc5_NT] == 0) {
					p->cost[_rc5_NT] = 0;
					p->rule._rc5 = q->rule._rc5;
				}
				if (q->cost[_mrca_NT] == 0) {
					p->cost[_mrca_NT] = 0;
					p->rule._mrca = q->rule._mrca;
				}
				if (q->cost[_memf_NT] == 0) {
					p->cost[_memf_NT] = 0;
					p->rule._memf = q->rule._memf;
				}
				if (q->cost[_flt_NT] == 0) {
					p->cost[_flt_NT] = 0;
					p->rule._flt = q->rule._flt;
				}
				if (q->cost[_flt2_NT] == 0) {
					p->cost[_flt2_NT] = 0;
					p->rule._flt2 = q->rule._flt2;
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
		/* mem4: INDIRP4(addr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + 0;
		if (c + 0 < p->cost[_mem4_NT]) {
			p->cost[_mem4_NT] = c + 0;
			p->rule._mem4 = 3;
			_closure_mem4(a, c + 0);
		}
		break;
	case 4209: /* CVFF4 */
		_label(LEFT_CHILD(a));
		if (	/* memf: CVFF4(INDIRF8(addr)) */
			LEFT_CHILD(a)->op == 8257 /* INDIRF8 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_addr_NT] + 0;
			if (c + 0 < p->cost[_memf_NT]) {
				p->cost[_memf_NT] = c + 0;
				p->rule._memf = 4;
				_closure_memf(a, c + 0);
			}
		}
		/* freg: CVFF4(freg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_freg_NT] + 12;
		if (c + 0 < p->cost[_freg_NT]) {
			p->cost[_freg_NT] = c + 0;
			p->rule._freg = 15;
			_closure_freg(a, c + 0);
		}
		break;
	case 4213: /* CVFI4 */
		_label(LEFT_CHILD(a));
		/* reg: CVFI4(freg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_freg_NT] + 31;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 63;
			_closure_reg(a, c + 0);
		}
		break;
	case 4225: /* CVIF4 */
		_label(LEFT_CHILD(a));
		if (	/* freg: CVIF4(INDIRI4(addr)) */
			LEFT_CHILD(a)->op == 4165 /* INDIRI4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_addr_NT] + 10;
			if (c + 0 < p->cost[_freg_NT]) {
				p->cost[_freg_NT] = c + 0;
				p->rule._freg = 18;
				_closure_freg(a, c + 0);
			}
		}
		/* freg: CVIF4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 12;
		if (c + 0 < p->cost[_freg_NT]) {
			p->cost[_freg_NT] = c + 0;
			p->rule._freg = 19;
			_closure_freg(a, c + 0);
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
				p->rule._reg = 51;
				_closure_reg(a, c + 0);
			}
		}
		if (	/* reg: CVII4(INDIRI2(addr)) */
			LEFT_CHILD(a)->op == 2117 /* INDIRI2 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_addr_NT] + 3;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 52;
				_closure_reg(a, c + 0);
			}
		}
		/* reg: CVII4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 3;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 55;
			_closure_reg(a, c + 0);
		}
		break;
	case 4230: /* CVIU4 */
		_label(LEFT_CHILD(a));
		/* reg: CVIU4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 3;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 56;
			_closure_reg(a, c + 0);
		}
		break;
	case 4246: /* CVPU4 */
		_label(LEFT_CHILD(a));
		/* reg: CVPU4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + (move(a));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 49;
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
			p->rule._reg = 57;
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
				p->rule._reg = 53;
				_closure_reg(a, c + 0);
			}
		}
		if (	/* reg: CVUU4(INDIRU2(addr)) */
			LEFT_CHILD(a)->op == 2118 /* INDIRU2 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_addr_NT] + 3;
			if (c + 0 < p->cost[_reg_NT]) {
				p->cost[_reg_NT] = c + 0;
				p->rule._reg = 54;
				_closure_reg(a, c + 0);
			}
		}
		/* reg: CVUU4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 3;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 58;
			_closure_reg(a, c + 0);
		}
		break;
	case 4279: /* CVUP4 */
		_label(LEFT_CHILD(a));
		/* reg: CVUP4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + (move(a));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 50;
			_closure_reg(a, c + 0);
		}
		break;
	case 4289: /* NEGF4 */
		_label(LEFT_CHILD(a));
		/* freg: NEGF4(freg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_freg_NT] + 0;
		if (c + 0 < p->cost[_freg_NT]) {
			p->cost[_freg_NT] = c + 0;
			p->rule._freg = 5;
			_closure_freg(a, c + 0);
		}
		break;
	case 4293: /* NEGI4 */
		_label(LEFT_CHILD(a));
		/* reg: NEGI4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 37;
			_closure_reg(a, c + 0);
		}
		break;
	case 4305: /* CALLF4 */
		_label(LEFT_CHILD(a));
		/* freg: CALLF4(addrj) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addrj_NT] + (hasargs(a));
		if (c + 0 < p->cost[_freg_NT]) {
			p->cost[_freg_NT] = c + 0;
			p->rule._freg = 37;
			_closure_freg(a, c + 0);
		}
		/* freg: CALLF4(addrj) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addrj_NT] + 1;
		if (c + 0 < p->cost[_freg_NT]) {
			p->cost[_freg_NT] = c + 0;
			p->rule._freg = 38;
			_closure_freg(a, c + 0);
		}
		/* stmt: CALLF4(addrj) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addrj_NT] + (hasargs(a));
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 101;
		}
		/* stmt: CALLF4(addrj) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addrj_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 102;
		}
		break;
	case 4309: /* CALLI4 */
		_label(LEFT_CHILD(a));
		/* reg: CALLI4(addrj) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addrj_NT] + (hasargs(a));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 64;
			_closure_reg(a, c + 0);
		}
		/* reg: CALLI4(addrj) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addrj_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 67;
			_closure_reg(a, c + 0);
		}
		break;
	case 4310: /* CALLU4 */
		_label(LEFT_CHILD(a));
		/* reg: CALLU4(addrj) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addrj_NT] + (hasargs(a));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 65;
			_closure_reg(a, c + 0);
		}
		/* reg: CALLU4(addrj) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addrj_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 68;
			_closure_reg(a, c + 0);
		}
		break;
	case 4311: /* CALLP4 */
		_label(LEFT_CHILD(a));
		/* reg: CALLP4(addrj) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addrj_NT] + (hasargs(a));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 66;
			_closure_reg(a, c + 0);
		}
		/* reg: CALLP4(addrj) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addrj_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 69;
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
			p->rule._reg = 18;
			_closure_reg(a, c + 0);
		}
		break;
	case 4326: /* LOADU4 */
		_label(LEFT_CHILD(a));
		/* reg: LOADU4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + (move(a));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 21;
			_closure_reg(a, c + 0);
		}
		break;
	case 4327: /* LOADP4 */
		_label(LEFT_CHILD(a));
		/* reg: LOADP4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + (move(a));
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 22;
			_closure_reg(a, c + 0);
		}
		break;
	case 4337: /* RETF4 */
		_label(LEFT_CHILD(a));
		/* stmt: RETF4(freg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_freg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 108;
		}
		break;
	case 4341: /* RETI4 */
		_label(LEFT_CHILD(a));
		/* stmt: RETI4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 105;
		}
		break;
	case 4342: /* RETU4 */
		_label(LEFT_CHILD(a));
		/* stmt: RETU4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 106;
		}
		break;
	case 4343: /* RETP4 */
		_label(LEFT_CHILD(a));
		/* stmt: RETP4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 107;
		}
		break;
	case 4359: /* ADDRGP4 */
		/* acon: ADDRGP4 */
		if (0 + 0 < p->cost[_acon_NT]) {
			p->cost[_acon_NT] = 0 + 0;
			p->rule._acon = 1;
		}
		/* baseaddr: ADDRGP4 */
		if (0 + 0 < p->cost[_baseaddr_NT]) {
			p->cost[_baseaddr_NT] = 0 + 0;
			p->rule._baseaddr = 1;
			_closure_baseaddr(a, 0 + 0);
		}
		/* mrca: ADDRGP4 */
		if (0 + 0 < p->cost[_mrca_NT]) {
			p->cost[_mrca_NT] = 0 + 0;
			p->rule._mrca = 3;
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
			p->rule._base = 5;
			_closure_base(a, 0 + 0);
		}
		break;
	case 4391: /* ADDRLP4 */
		/* base: ADDRLP4 */
		if (0 + 0 < p->cost[_base_NT]) {
			p->cost[_base_NT] = 0 + 0;
			p->rule._base = 6;
			_closure_base(a, 0 + 0);
		}
		break;
	case 4401: /* ADDF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* freg: ADDF4(freg,flt) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_freg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_flt_NT] + 0;
		if (c + 0 < p->cost[_freg_NT]) {
			p->cost[_freg_NT] = c + 0;
			p->rule._freg = 6;
			_closure_freg(a, c + 0);
		}
		break;
	case 4405: /* ADDI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* base: ADDI4(reg,acon) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_acon_NT] + 0;
		if (c + 0 < p->cost[_base_NT]) {
			p->cost[_base_NT] = c + 0;
			p->rule._base = 2;
			_closure_base(a, c + 0);
		}
		/* addr: ADDI4(index,baseaddr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_index_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_baseaddr_NT] + 0;
		if (c + 0 < p->cost[_addr_NT]) {
			p->cost[_addr_NT] = c + 0;
			p->rule._addr = 3;
			_closure_addr(a, c + 0);
		}
		/* addr: ADDI4(reg,baseaddr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_baseaddr_NT] + 0;
		if (c + 0 < p->cost[_addr_NT]) {
			p->cost[_addr_NT] = c + 0;
			p->rule._addr = 6;
			_closure_addr(a, c + 0);
		}
		/* addr: ADDI4(index,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_index_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_addr_NT]) {
			p->cost[_addr_NT] = c + 0;
			p->rule._addr = 9;
			_closure_addr(a, c + 0);
		}
		/* reg: ADDI4(reg,mrc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 23;
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
			p->rule._base = 4;
			_closure_base(a, c + 0);
		}
		/* addr: ADDU4(index,baseaddr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_index_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_baseaddr_NT] + 0;
		if (c + 0 < p->cost[_addr_NT]) {
			p->cost[_addr_NT] = c + 0;
			p->rule._addr = 5;
			_closure_addr(a, c + 0);
		}
		/* addr: ADDU4(reg,baseaddr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_baseaddr_NT] + 0;
		if (c + 0 < p->cost[_addr_NT]) {
			p->cost[_addr_NT] = c + 0;
			p->rule._addr = 8;
			_closure_addr(a, c + 0);
		}
		/* addr: ADDU4(index,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_index_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_addr_NT]) {
			p->cost[_addr_NT] = c + 0;
			p->rule._addr = 11;
			_closure_addr(a, c + 0);
		}
		/* reg: ADDU4(reg,mrc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 25;
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
			p->rule._base = 3;
			_closure_base(a, c + 0);
		}
		/* addr: ADDP4(index,baseaddr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_index_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_baseaddr_NT] + 0;
		if (c + 0 < p->cost[_addr_NT]) {
			p->cost[_addr_NT] = c + 0;
			p->rule._addr = 4;
			_closure_addr(a, c + 0);
		}
		/* addr: ADDP4(reg,baseaddr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_baseaddr_NT] + 0;
		if (c + 0 < p->cost[_addr_NT]) {
			p->cost[_addr_NT] = c + 0;
			p->rule._addr = 7;
			_closure_addr(a, c + 0);
		}
		/* addr: ADDP4(index,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_index_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_addr_NT]) {
			p->cost[_addr_NT] = c + 0;
			p->rule._addr = 10;
			_closure_addr(a, c + 0);
		}
		/* reg: ADDP4(reg,mrc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 24;
			_closure_reg(a, c + 0);
		}
		break;
	case 4417: /* SUBF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* freg: SUBF4(freg,flt2) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_freg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_flt2_NT] + 0;
		if (c + 0 < p->cost[_freg_NT]) {
			p->cost[_freg_NT] = c + 0;
			p->rule._freg = 12;
			_closure_freg(a, c + 0);
		}
		break;
	case 4421: /* SUBI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: SUBI4(reg,mrc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 26;
			_closure_reg(a, c + 0);
		}
		break;
	case 4422: /* SUBU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: SUBU4(reg,mrc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 28;
			_closure_reg(a, c + 0);
		}
		break;
	case 4423: /* SUBP4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: SUBP4(reg,mrc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 27;
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
		/* reg: LSHI4(reg,rc5) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc5_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 38;
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
		/* reg: LSHU4(reg,rc5) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc5_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 39;
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
			p->rule._reg = 48;
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
			p->rule._reg = 46;
			_closure_reg(a, c + 0);
		}
		break;
	case 4469: /* RSHI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: RSHI4(reg,rc5) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc5_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 40;
			_closure_reg(a, c + 0);
		}
		break;
	case 4470: /* RSHU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: RSHU4(reg,rc5) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc5_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 41;
			_closure_reg(a, c + 0);
		}
		break;
	case 4485: /* BANDI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: BANDI4(reg,mrc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 29;
			_closure_reg(a, c + 0);
		}
		break;
	case 4486: /* BANDU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: BANDU4(reg,mrc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 32;
			_closure_reg(a, c + 0);
		}
		break;
	case 4501: /* BCOMI4 */
		_label(LEFT_CHILD(a));
		/* reg: BCOMI4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 35;
			_closure_reg(a, c + 0);
		}
		break;
	case 4502: /* BCOMU4 */
		_label(LEFT_CHILD(a));
		/* reg: BCOMU4(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 2;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 36;
			_closure_reg(a, c + 0);
		}
		break;
	case 4517: /* BORI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: BORI4(reg,mrc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 30;
			_closure_reg(a, c + 0);
		}
		break;
	case 4518: /* BORU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: BORU4(reg,mrc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 33;
			_closure_reg(a, c + 0);
		}
		break;
	case 4533: /* BXORI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: BXORI4(reg,mrc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 31;
			_closure_reg(a, c + 0);
		}
		break;
	case 4534: /* BXORU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: BXORU4(reg,mrc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc_NT] + 1;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 34;
			_closure_reg(a, c + 0);
		}
		break;
	case 4545: /* DIVF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* freg: DIVF4(freg,flt2) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_freg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_flt2_NT] + 0;
		if (c + 0 < p->cost[_freg_NT]) {
			p->cost[_freg_NT] = c + 0;
			p->rule._freg = 8;
			_closure_freg(a, c + 0);
		}
		break;
	case 4549: /* DIVI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: DIVI4(reg,reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_reg_NT] + 0;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 47;
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
			p->rule._reg = 45;
			_closure_reg(a, c + 0);
		}
		break;
	case 4561: /* MULF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* freg: MULF4(freg,flt) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_freg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_flt_NT] + 0;
		if (c + 0 < p->cost[_freg_NT]) {
			p->cost[_freg_NT] = c + 0;
			p->rule._freg = 10;
			_closure_freg(a, c + 0);
		}
		break;
	case 4565: /* MULI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* reg: MULI4(reg,mrc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc_NT] + 14;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 42;
			_closure_reg(a, c + 0);
		}
		/* reg: MULI4(con,mr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_con_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mr_NT] + 13;
		if (c + 0 < p->cost[_reg_NT]) {
			p->cost[_reg_NT] = c + 0;
			p->rule._reg = 43;
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
			p->rule._reg = 44;
			_closure_reg(a, c + 0);
		}
		break;
	case 4577: /* EQF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: EQF4(cmpf,freg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_cmpf_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_freg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 92;
		}
		break;
	case 4581: /* EQI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: EQI4(mem4,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_mem4_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 5;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 57;
		}
		/* stmt: EQI4(reg,mrc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc_NT] + 4;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 67;
		}
		if (	/* stmt: EQI4(BANDU4(mr,con),con0) */
			LEFT_CHILD(a)->op == 4486 /* BANDU4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_mr_NT] + ((struct _state *)(RIGHT_CHILD(LEFT_CHILD(a))->x.state))->cost[_con_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_con0_NT] + 3;
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 79;
			}
		}
		if (	/* stmt: EQI4(BANDU4(CVII2(INDIRI2(addr)),con),con0) */
			LEFT_CHILD(a)->op == 4486 && /* BANDU4 */
			LEFT_CHILD(LEFT_CHILD(a))->op == 2181 && /* CVII2 */
			LEFT_CHILD(LEFT_CHILD(LEFT_CHILD(a)))->op == 2117 /* INDIRI2 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(LEFT_CHILD(LEFT_CHILD(a))))->x.state))->cost[_addr_NT] + ((struct _state *)(RIGHT_CHILD(LEFT_CHILD(a))->x.state))->cost[_con_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_con0_NT] + 0;
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 81;
			}
		}
		if (	/* stmt: EQI4(BANDU4(CVIU2(INDIRI2(addr)),con),con0) */
			LEFT_CHILD(a)->op == 4486 && /* BANDU4 */
			LEFT_CHILD(LEFT_CHILD(a))->op == 2182 && /* CVIU2 */
			LEFT_CHILD(LEFT_CHILD(LEFT_CHILD(a)))->op == 2117 /* INDIRI2 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(LEFT_CHILD(LEFT_CHILD(a))))->x.state))->cost[_addr_NT] + ((struct _state *)(RIGHT_CHILD(LEFT_CHILD(a))->x.state))->cost[_con_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_con0_NT] + 0;
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 83;
			}
		}
		if (	/* stmt: EQI4(BANDU4(CVII1(INDIRI1(addr)),con),con0) */
			LEFT_CHILD(a)->op == 4486 && /* BANDU4 */
			LEFT_CHILD(LEFT_CHILD(a))->op == 1157 && /* CVII1 */
			LEFT_CHILD(LEFT_CHILD(LEFT_CHILD(a)))->op == 1093 /* INDIRI1 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(LEFT_CHILD(LEFT_CHILD(a))))->x.state))->cost[_addr_NT] + ((struct _state *)(RIGHT_CHILD(LEFT_CHILD(a))->x.state))->cost[_con_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_con0_NT] + 0;
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 85;
			}
		}
		break;
	case 4582: /* EQU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: EQU4(reg,mrc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc_NT] + 4;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 73;
		}
		break;
	case 4593: /* GEF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GEF4(cmpf,freg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_cmpf_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_freg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 93;
		}
		break;
	case 4597: /* GEI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GEI4(mem4,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_mem4_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 5;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 58;
		}
		/* stmt: GEI4(reg,mrc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc_NT] + 4;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 68;
		}
		break;
	case 4598: /* GEU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GEU4(mem4,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_mem4_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 5;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 63;
		}
		/* stmt: GEU4(reg,mrc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc_NT] + 4;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 74;
		}
		break;
	case 4609: /* GTF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GTF4(cmpf,freg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_cmpf_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_freg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 94;
		}
		break;
	case 4613: /* GTI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GTI4(mem4,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_mem4_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 5;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 59;
		}
		/* stmt: GTI4(reg,mrc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc_NT] + 4;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 69;
		}
		break;
	case 4614: /* GTU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GTU4(mem4,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_mem4_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 5;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 64;
		}
		/* stmt: GTU4(reg,mrc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc_NT] + 4;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 75;
		}
		break;
	case 4625: /* LEF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LEF4(cmpf,freg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_cmpf_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_freg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 95;
		}
		break;
	case 4629: /* LEI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LEI4(mem4,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_mem4_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 5;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 60;
		}
		/* stmt: LEI4(reg,mrc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc_NT] + 4;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 70;
		}
		break;
	case 4630: /* LEU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LEU4(mem4,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_mem4_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 5;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 65;
		}
		/* stmt: LEU4(reg,mrc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc_NT] + 4;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 76;
		}
		break;
	case 4641: /* LTF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LTF4(cmpf,freg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_cmpf_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_freg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 96;
		}
		break;
	case 4645: /* LTI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LTI4(mem4,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_mem4_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 5;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 61;
		}
		/* stmt: LTI4(reg,mrc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc_NT] + 4;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 71;
		}
		break;
	case 4646: /* LTU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LTU4(mem4,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_mem4_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 5;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 66;
		}
		/* stmt: LTU4(reg,mrc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc_NT] + 4;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 77;
		}
		break;
	case 4657: /* NEF4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: NEF4(cmpf,freg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_cmpf_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_freg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 97;
		}
		break;
	case 4661: /* NEI4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: NEI4(mem4,rc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_mem4_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_rc_NT] + 5;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 62;
		}
		/* stmt: NEI4(reg,mrc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc_NT] + 4;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 72;
		}
		if (	/* stmt: NEI4(BANDU4(mr,con),con0) */
			LEFT_CHILD(a)->op == 4486 /* BANDU4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_mr_NT] + ((struct _state *)(RIGHT_CHILD(LEFT_CHILD(a))->x.state))->cost[_con_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_con0_NT] + 0;
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 80;
			}
		}
		if (	/* stmt: NEI4(BANDU4(CVII2(INDIRI2(addr)),con),con0) */
			LEFT_CHILD(a)->op == 4486 && /* BANDU4 */
			LEFT_CHILD(LEFT_CHILD(a))->op == 2181 && /* CVII2 */
			LEFT_CHILD(LEFT_CHILD(LEFT_CHILD(a)))->op == 2117 /* INDIRI2 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(LEFT_CHILD(LEFT_CHILD(a))))->x.state))->cost[_addr_NT] + ((struct _state *)(RIGHT_CHILD(LEFT_CHILD(a))->x.state))->cost[_con_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_con0_NT] + 0;
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 82;
			}
		}
		if (	/* stmt: NEI4(BANDU4(CVIU2(INDIRI2(addr)),con),con0) */
			LEFT_CHILD(a)->op == 4486 && /* BANDU4 */
			LEFT_CHILD(LEFT_CHILD(a))->op == 2182 && /* CVIU2 */
			LEFT_CHILD(LEFT_CHILD(LEFT_CHILD(a)))->op == 2117 /* INDIRI2 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(LEFT_CHILD(LEFT_CHILD(a))))->x.state))->cost[_addr_NT] + ((struct _state *)(RIGHT_CHILD(LEFT_CHILD(a))->x.state))->cost[_con_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_con0_NT] + 0;
			if (c + 0 < p->cost[_stmt_NT]) {
				p->cost[_stmt_NT] = c + 0;
				p->rule._stmt = 84;
			}
		}
		break;
	case 4662: /* NEU4 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: NEU4(reg,mrc) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_mrc_NT] + 4;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 78;
		}
		break;
	case 8209: /* CNSTF8 */
		break;
	case 8213: /* CNSTI8 */
		/* cnst: CNSTI8 */
		if (0 + 0 < p->cost[_cnst_NT]) {
			p->cost[_cnst_NT] = 0 + 0;
			p->rule._cnst = 8;
			_closure_cnst(a, 0 + 0);
		}
		break;
	case 8214: /* CNSTU8 */
		/* cnst: CNSTU8 */
		if (0 + 0 < p->cost[_cnst_NT]) {
			p->cost[_cnst_NT] = 0 + 0;
			p->rule._cnst = 9;
			_closure_cnst(a, 0 + 0);
		}
		break;
	case 8215: /* CNSTP8 */
		/* cnst: CNSTP8 */
		if (0 + 0 < p->cost[_cnst_NT]) {
			p->cost[_cnst_NT] = 0 + 0;
			p->rule._cnst = 10;
			_closure_cnst(a, 0 + 0);
		}
		break;
	case 8225: /* ARGF8 */
		_label(LEFT_CHILD(a));
		/* stmt: ARGF8(freg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_freg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 53;
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
		/* stmt: ASGNF8(addr,freg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_freg_NT] + 7;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 50;
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
		if (	/* freg: INDIRF8(VREGP) */
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
				if (q->cost[_freg_NT] == 0) {
					p->cost[_freg_NT] = 0;
					p->rule._freg = q->rule._freg;
				}
				if (q->cost[_cnst_NT] == 0) {
					p->cost[_cnst_NT] = 0;
					p->rule._cnst = q->rule._cnst;
				}
				if (q->cost[_con_NT] == 0) {
					p->cost[_con_NT] = 0;
					p->rule._con = q->rule._con;
				}
				if (q->cost[_acon_NT] == 0) {
					p->cost[_acon_NT] = 0;
					p->rule._acon = q->rule._acon;
				}
				if (q->cost[_baseaddr_NT] == 0) {
					p->cost[_baseaddr_NT] = 0;
					p->rule._baseaddr = q->rule._baseaddr;
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
				if (q->cost[_con0_NT] == 0) {
					p->cost[_con0_NT] = 0;
					p->rule._con0 = q->rule._con0;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_mem1_NT] == 0) {
					p->cost[_mem1_NT] = 0;
					p->rule._mem1 = q->rule._mem1;
				}
				if (q->cost[_mem2_NT] == 0) {
					p->cost[_mem2_NT] = 0;
					p->rule._mem2 = q->rule._mem2;
				}
				if (q->cost[_mem4_NT] == 0) {
					p->cost[_mem4_NT] = 0;
					p->rule._mem4 = q->rule._mem4;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_mr_NT] == 0) {
					p->cost[_mr_NT] = 0;
					p->rule._mr = q->rule._mr;
				}
				if (q->cost[_mr1_NT] == 0) {
					p->cost[_mr1_NT] = 0;
					p->rule._mr1 = q->rule._mr1;
				}
				if (q->cost[_mr2_NT] == 0) {
					p->cost[_mr2_NT] = 0;
					p->rule._mr2 = q->rule._mr2;
				}
				if (q->cost[_mrc_NT] == 0) {
					p->cost[_mrc_NT] = 0;
					p->rule._mrc = q->rule._mrc;
				}
				if (q->cost[_rc5_NT] == 0) {
					p->cost[_rc5_NT] = 0;
					p->rule._rc5 = q->rule._rc5;
				}
				if (q->cost[_mrca_NT] == 0) {
					p->cost[_mrca_NT] = 0;
					p->rule._mrca = q->rule._mrca;
				}
				if (q->cost[_memf_NT] == 0) {
					p->cost[_memf_NT] = 0;
					p->rule._memf = q->rule._memf;
				}
				if (q->cost[_flt_NT] == 0) {
					p->cost[_flt_NT] = 0;
					p->rule._flt = q->rule._flt;
				}
				if (q->cost[_flt2_NT] == 0) {
					p->cost[_flt2_NT] = 0;
					p->rule._flt2 = q->rule._flt2;
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
			if (c + 0 < p->cost[_freg_NT]) {
				p->cost[_freg_NT] = c + 0;
				p->rule._freg = 2;
				_closure_freg(a, c + 0);
			}
		}
		/* memf: INDIRF8(addr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + 0;
		if (c + 0 < p->cost[_memf_NT]) {
			p->cost[_memf_NT] = c + 0;
			p->rule._memf = 1;
			_closure_memf(a, c + 0);
		}
		/* cmpf: INDIRF8(addr) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addr_NT] + 0;
		if (c + 0 < p->cost[_cmpf_NT]) {
			p->cost[_cmpf_NT] = c + 0;
			p->rule._cmpf = 1;
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
				if (q->cost[_freg_NT] == 0) {
					p->cost[_freg_NT] = 0;
					p->rule._freg = q->rule._freg;
				}
				if (q->cost[_cnst_NT] == 0) {
					p->cost[_cnst_NT] = 0;
					p->rule._cnst = q->rule._cnst;
				}
				if (q->cost[_con_NT] == 0) {
					p->cost[_con_NT] = 0;
					p->rule._con = q->rule._con;
				}
				if (q->cost[_acon_NT] == 0) {
					p->cost[_acon_NT] = 0;
					p->rule._acon = q->rule._acon;
				}
				if (q->cost[_baseaddr_NT] == 0) {
					p->cost[_baseaddr_NT] = 0;
					p->rule._baseaddr = q->rule._baseaddr;
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
				if (q->cost[_con0_NT] == 0) {
					p->cost[_con0_NT] = 0;
					p->rule._con0 = q->rule._con0;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_mem1_NT] == 0) {
					p->cost[_mem1_NT] = 0;
					p->rule._mem1 = q->rule._mem1;
				}
				if (q->cost[_mem2_NT] == 0) {
					p->cost[_mem2_NT] = 0;
					p->rule._mem2 = q->rule._mem2;
				}
				if (q->cost[_mem4_NT] == 0) {
					p->cost[_mem4_NT] = 0;
					p->rule._mem4 = q->rule._mem4;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_mr_NT] == 0) {
					p->cost[_mr_NT] = 0;
					p->rule._mr = q->rule._mr;
				}
				if (q->cost[_mr1_NT] == 0) {
					p->cost[_mr1_NT] = 0;
					p->rule._mr1 = q->rule._mr1;
				}
				if (q->cost[_mr2_NT] == 0) {
					p->cost[_mr2_NT] = 0;
					p->rule._mr2 = q->rule._mr2;
				}
				if (q->cost[_mrc_NT] == 0) {
					p->cost[_mrc_NT] = 0;
					p->rule._mrc = q->rule._mrc;
				}
				if (q->cost[_rc5_NT] == 0) {
					p->cost[_rc5_NT] = 0;
					p->rule._rc5 = q->rule._rc5;
				}
				if (q->cost[_mrca_NT] == 0) {
					p->cost[_mrca_NT] = 0;
					p->rule._mrca = q->rule._mrca;
				}
				if (q->cost[_memf_NT] == 0) {
					p->cost[_memf_NT] = 0;
					p->rule._memf = q->rule._memf;
				}
				if (q->cost[_flt_NT] == 0) {
					p->cost[_flt_NT] = 0;
					p->rule._flt = q->rule._flt;
				}
				if (q->cost[_flt2_NT] == 0) {
					p->cost[_flt2_NT] = 0;
					p->rule._flt2 = q->rule._flt2;
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
				if (q->cost[_freg_NT] == 0) {
					p->cost[_freg_NT] = 0;
					p->rule._freg = q->rule._freg;
				}
				if (q->cost[_cnst_NT] == 0) {
					p->cost[_cnst_NT] = 0;
					p->rule._cnst = q->rule._cnst;
				}
				if (q->cost[_con_NT] == 0) {
					p->cost[_con_NT] = 0;
					p->rule._con = q->rule._con;
				}
				if (q->cost[_acon_NT] == 0) {
					p->cost[_acon_NT] = 0;
					p->rule._acon = q->rule._acon;
				}
				if (q->cost[_baseaddr_NT] == 0) {
					p->cost[_baseaddr_NT] = 0;
					p->rule._baseaddr = q->rule._baseaddr;
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
				if (q->cost[_con0_NT] == 0) {
					p->cost[_con0_NT] = 0;
					p->rule._con0 = q->rule._con0;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_mem1_NT] == 0) {
					p->cost[_mem1_NT] = 0;
					p->rule._mem1 = q->rule._mem1;
				}
				if (q->cost[_mem2_NT] == 0) {
					p->cost[_mem2_NT] = 0;
					p->rule._mem2 = q->rule._mem2;
				}
				if (q->cost[_mem4_NT] == 0) {
					p->cost[_mem4_NT] = 0;
					p->rule._mem4 = q->rule._mem4;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_mr_NT] == 0) {
					p->cost[_mr_NT] = 0;
					p->rule._mr = q->rule._mr;
				}
				if (q->cost[_mr1_NT] == 0) {
					p->cost[_mr1_NT] = 0;
					p->rule._mr1 = q->rule._mr1;
				}
				if (q->cost[_mr2_NT] == 0) {
					p->cost[_mr2_NT] = 0;
					p->rule._mr2 = q->rule._mr2;
				}
				if (q->cost[_mrc_NT] == 0) {
					p->cost[_mrc_NT] = 0;
					p->rule._mrc = q->rule._mrc;
				}
				if (q->cost[_rc5_NT] == 0) {
					p->cost[_rc5_NT] = 0;
					p->rule._rc5 = q->rule._rc5;
				}
				if (q->cost[_mrca_NT] == 0) {
					p->cost[_mrca_NT] = 0;
					p->rule._mrca = q->rule._mrca;
				}
				if (q->cost[_memf_NT] == 0) {
					p->cost[_memf_NT] = 0;
					p->rule._memf = q->rule._memf;
				}
				if (q->cost[_flt_NT] == 0) {
					p->cost[_flt_NT] = 0;
					p->rule._flt = q->rule._flt;
				}
				if (q->cost[_flt2_NT] == 0) {
					p->cost[_flt2_NT] = 0;
					p->rule._flt2 = q->rule._flt2;
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
				if (q->cost[_freg_NT] == 0) {
					p->cost[_freg_NT] = 0;
					p->rule._freg = q->rule._freg;
				}
				if (q->cost[_cnst_NT] == 0) {
					p->cost[_cnst_NT] = 0;
					p->rule._cnst = q->rule._cnst;
				}
				if (q->cost[_con_NT] == 0) {
					p->cost[_con_NT] = 0;
					p->rule._con = q->rule._con;
				}
				if (q->cost[_acon_NT] == 0) {
					p->cost[_acon_NT] = 0;
					p->rule._acon = q->rule._acon;
				}
				if (q->cost[_baseaddr_NT] == 0) {
					p->cost[_baseaddr_NT] = 0;
					p->rule._baseaddr = q->rule._baseaddr;
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
				if (q->cost[_con0_NT] == 0) {
					p->cost[_con0_NT] = 0;
					p->rule._con0 = q->rule._con0;
				}
				if (q->cost[_addr_NT] == 0) {
					p->cost[_addr_NT] = 0;
					p->rule._addr = q->rule._addr;
				}
				if (q->cost[_mem1_NT] == 0) {
					p->cost[_mem1_NT] = 0;
					p->rule._mem1 = q->rule._mem1;
				}
				if (q->cost[_mem2_NT] == 0) {
					p->cost[_mem2_NT] = 0;
					p->rule._mem2 = q->rule._mem2;
				}
				if (q->cost[_mem4_NT] == 0) {
					p->cost[_mem4_NT] = 0;
					p->rule._mem4 = q->rule._mem4;
				}
				if (q->cost[_rc_NT] == 0) {
					p->cost[_rc_NT] = 0;
					p->rule._rc = q->rule._rc;
				}
				if (q->cost[_mr_NT] == 0) {
					p->cost[_mr_NT] = 0;
					p->rule._mr = q->rule._mr;
				}
				if (q->cost[_mr1_NT] == 0) {
					p->cost[_mr1_NT] = 0;
					p->rule._mr1 = q->rule._mr1;
				}
				if (q->cost[_mr2_NT] == 0) {
					p->cost[_mr2_NT] = 0;
					p->rule._mr2 = q->rule._mr2;
				}
				if (q->cost[_mrc_NT] == 0) {
					p->cost[_mrc_NT] = 0;
					p->rule._mrc = q->rule._mrc;
				}
				if (q->cost[_rc5_NT] == 0) {
					p->cost[_rc5_NT] = 0;
					p->rule._rc5 = q->rule._rc5;
				}
				if (q->cost[_mrca_NT] == 0) {
					p->cost[_mrca_NT] = 0;
					p->rule._mrca = q->rule._mrca;
				}
				if (q->cost[_memf_NT] == 0) {
					p->cost[_memf_NT] = 0;
					p->rule._memf = q->rule._memf;
				}
				if (q->cost[_flt_NT] == 0) {
					p->cost[_flt_NT] = 0;
					p->rule._flt = q->rule._flt;
				}
				if (q->cost[_flt2_NT] == 0) {
					p->cost[_flt2_NT] = 0;
					p->rule._flt2 = q->rule._flt2;
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
		/* freg: CVFF8(freg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_freg_NT] + 0;
		if (c + 0 < p->cost[_freg_NT]) {
			p->cost[_freg_NT] = c + 0;
			p->rule._freg = 14;
			_closure_freg(a, c + 0);
		}
		if (	/* cmpf: CVFF8(INDIRF4(addr)) */
			LEFT_CHILD(a)->op == 4161 /* INDIRF4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_addr_NT] + 0;
			if (c + 0 < p->cost[_cmpf_NT]) {
				p->cost[_cmpf_NT] = c + 0;
				p->rule._cmpf = 3;
			}
		}
		break;
	case 8309: /* CVFI8 */
		break;
	case 8321: /* CVIF8 */
		_label(LEFT_CHILD(a));
		if (	/* freg: CVIF8(INDIRI4(addr)) */
			LEFT_CHILD(a)->op == 4165 /* INDIRI4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(a))->x.state))->cost[_addr_NT] + 10;
			if (c + 0 < p->cost[_freg_NT]) {
				p->cost[_freg_NT] = c + 0;
				p->rule._freg = 16;
				_closure_freg(a, c + 0);
			}
		}
		/* freg: CVIF8(reg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_reg_NT] + 12;
		if (c + 0 < p->cost[_freg_NT]) {
			p->cost[_freg_NT] = c + 0;
			p->rule._freg = 17;
			_closure_freg(a, c + 0);
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
		/* freg: NEGF8(freg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_freg_NT] + 0;
		if (c + 0 < p->cost[_freg_NT]) {
			p->cost[_freg_NT] = c + 0;
			p->rule._freg = 4;
			_closure_freg(a, c + 0);
		}
		break;
	case 8389: /* NEGI8 */
		break;
	case 8401: /* CALLF8 */
		_label(LEFT_CHILD(a));
		/* freg: CALLF8(addrj) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addrj_NT] + (hasargs(a));
		if (c + 0 < p->cost[_freg_NT]) {
			p->cost[_freg_NT] = c + 0;
			p->rule._freg = 39;
			_closure_freg(a, c + 0);
		}
		/* freg: CALLF8(addrj) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addrj_NT] + 1;
		if (c + 0 < p->cost[_freg_NT]) {
			p->cost[_freg_NT] = c + 0;
			p->rule._freg = 40;
			_closure_freg(a, c + 0);
		}
		/* stmt: CALLF8(addrj) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addrj_NT] + (hasargs(a));
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 103;
		}
		/* stmt: CALLF8(addrj) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_addrj_NT] + 1;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 104;
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
		/* freg: LOADF8(memf) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_memf_NT] + 0;
		if (c + 0 < p->cost[_freg_NT]) {
			p->cost[_freg_NT] = c + 0;
			p->rule._freg = 36;
			_closure_freg(a, c + 0);
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
		/* stmt: RETF8(freg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_freg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 109;
		}
		break;
	case 8437: /* RETI8 */
		break;
	case 8438: /* RETU8 */
		break;
	case 8439: /* RETP8 */
		break;
	case 8455: /* ADDRGP8 */
		/* acon: ADDRGP8 */
		if (0 + 0 < p->cost[_acon_NT]) {
			p->cost[_acon_NT] = 0 + 0;
			p->rule._acon = 2;
		}
		/* mrca: ADDRGP8 */
		if (0 + 0 < p->cost[_mrca_NT]) {
			p->cost[_mrca_NT] = 0 + 0;
			p->rule._mrca = 4;
		}
		break;
	case 8471: /* ADDRFP8 */
		break;
	case 8487: /* ADDRLP8 */
		break;
	case 8497: /* ADDF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* freg: ADDF8(freg,flt) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_freg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_flt_NT] + 0;
		if (c + 0 < p->cost[_freg_NT]) {
			p->cost[_freg_NT] = c + 0;
			p->rule._freg = 7;
			_closure_freg(a, c + 0);
		}
		if (	/* freg: ADDF8(freg,CVIF8(INDIRI4(addr))) */
			RIGHT_CHILD(a)->op == 8321 && /* CVIF8 */
			LEFT_CHILD(RIGHT_CHILD(a))->op == 4165 /* INDIRI4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_freg_NT] + ((struct _state *)(LEFT_CHILD(LEFT_CHILD(RIGHT_CHILD(a)))->x.state))->cost[_addr_NT] + 0;
			if (c + 0 < p->cost[_freg_NT]) {
				p->cost[_freg_NT] = c + 0;
				p->rule._freg = 30;
				_closure_freg(a, c + 0);
			}
		}
		if (	/* freg: ADDF8(freg,CVIF8(CVII2(INDIRI2(addr)))) */
			RIGHT_CHILD(a)->op == 8321 && /* CVIF8 */
			LEFT_CHILD(RIGHT_CHILD(a))->op == 2181 && /* CVII2 */
			LEFT_CHILD(LEFT_CHILD(RIGHT_CHILD(a)))->op == 2117 /* INDIRI2 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_freg_NT] + ((struct _state *)(LEFT_CHILD(LEFT_CHILD(LEFT_CHILD(RIGHT_CHILD(a))))->x.state))->cost[_addr_NT] + 0;
			if (c + 0 < p->cost[_freg_NT]) {
				p->cost[_freg_NT] = c + 0;
				p->rule._freg = 31;
				_closure_freg(a, c + 0);
			}
		}
		if (	/* freg: ADDF8(freg,CVFF8(INDIRF4(addr))) */
			RIGHT_CHILD(a)->op == 8305 && /* CVFF8 */
			LEFT_CHILD(RIGHT_CHILD(a))->op == 4161 /* INDIRF4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_freg_NT] + ((struct _state *)(LEFT_CHILD(LEFT_CHILD(RIGHT_CHILD(a)))->x.state))->cost[_addr_NT] + 0;
			if (c + 0 < p->cost[_freg_NT]) {
				p->cost[_freg_NT] = c + 0;
				p->rule._freg = 32;
				_closure_freg(a, c + 0);
			}
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
		/* freg: SUBF8(freg,flt2) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_freg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_flt2_NT] + 0;
		if (c + 0 < p->cost[_freg_NT]) {
			p->cost[_freg_NT] = c + 0;
			p->rule._freg = 13;
			_closure_freg(a, c + 0);
		}
		if (	/* freg: SUBF8(freg,CVIF8(INDIRI4(addr))) */
			RIGHT_CHILD(a)->op == 8321 && /* CVIF8 */
			LEFT_CHILD(RIGHT_CHILD(a))->op == 4165 /* INDIRI4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_freg_NT] + ((struct _state *)(LEFT_CHILD(LEFT_CHILD(RIGHT_CHILD(a)))->x.state))->cost[_addr_NT] + 0;
			if (c + 0 < p->cost[_freg_NT]) {
				p->cost[_freg_NT] = c + 0;
				p->rule._freg = 26;
				_closure_freg(a, c + 0);
			}
		}
		if (	/* freg: SUBF8(CVIF8(INDIRI4(addr)),freg) */
			LEFT_CHILD(a)->op == 8321 && /* CVIF8 */
			LEFT_CHILD(LEFT_CHILD(a))->op == 4165 /* INDIRI4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(LEFT_CHILD(a)))->x.state))->cost[_addr_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_freg_NT] + 0;
			if (c + 0 < p->cost[_freg_NT]) {
				p->cost[_freg_NT] = c + 0;
				p->rule._freg = 27;
				_closure_freg(a, c + 0);
			}
		}
		if (	/* freg: SUBF8(freg,CVIF8(CVII2(INDIRI2(addr)))) */
			RIGHT_CHILD(a)->op == 8321 && /* CVIF8 */
			LEFT_CHILD(RIGHT_CHILD(a))->op == 2181 && /* CVII2 */
			LEFT_CHILD(LEFT_CHILD(RIGHT_CHILD(a)))->op == 2117 /* INDIRI2 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_freg_NT] + ((struct _state *)(LEFT_CHILD(LEFT_CHILD(LEFT_CHILD(RIGHT_CHILD(a))))->x.state))->cost[_addr_NT] + 0;
			if (c + 0 < p->cost[_freg_NT]) {
				p->cost[_freg_NT] = c + 0;
				p->rule._freg = 28;
				_closure_freg(a, c + 0);
			}
		}
		if (	/* freg: SUBF8(CVIF8(CVII2(INDIRI2(addr))),freg) */
			LEFT_CHILD(a)->op == 8321 && /* CVIF8 */
			LEFT_CHILD(LEFT_CHILD(a))->op == 2181 && /* CVII2 */
			LEFT_CHILD(LEFT_CHILD(LEFT_CHILD(a)))->op == 2117 /* INDIRI2 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(LEFT_CHILD(LEFT_CHILD(a))))->x.state))->cost[_addr_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_freg_NT] + 0;
			if (c + 0 < p->cost[_freg_NT]) {
				p->cost[_freg_NT] = c + 0;
				p->rule._freg = 29;
				_closure_freg(a, c + 0);
			}
		}
		if (	/* freg: SUBF8(freg,CVFF8(INDIRF4(addr))) */
			RIGHT_CHILD(a)->op == 8305 && /* CVFF8 */
			LEFT_CHILD(RIGHT_CHILD(a))->op == 4161 /* INDIRF4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_freg_NT] + ((struct _state *)(LEFT_CHILD(LEFT_CHILD(RIGHT_CHILD(a)))->x.state))->cost[_addr_NT] + 0;
			if (c + 0 < p->cost[_freg_NT]) {
				p->cost[_freg_NT] = c + 0;
				p->rule._freg = 33;
				_closure_freg(a, c + 0);
			}
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
		/* freg: DIVF8(freg,flt2) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_freg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_flt2_NT] + 0;
		if (c + 0 < p->cost[_freg_NT]) {
			p->cost[_freg_NT] = c + 0;
			p->rule._freg = 9;
			_closure_freg(a, c + 0);
		}
		if (	/* freg: DIVF8(freg,CVIF8(INDIRI4(addr))) */
			RIGHT_CHILD(a)->op == 8321 && /* CVIF8 */
			LEFT_CHILD(RIGHT_CHILD(a))->op == 4165 /* INDIRI4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_freg_NT] + ((struct _state *)(LEFT_CHILD(LEFT_CHILD(RIGHT_CHILD(a)))->x.state))->cost[_addr_NT] + 0;
			if (c + 0 < p->cost[_freg_NT]) {
				p->cost[_freg_NT] = c + 0;
				p->rule._freg = 20;
				_closure_freg(a, c + 0);
			}
		}
		if (	/* freg: DIVF8(CVIF8(INDIRI4(addr)),freg) */
			LEFT_CHILD(a)->op == 8321 && /* CVIF8 */
			LEFT_CHILD(LEFT_CHILD(a))->op == 4165 /* INDIRI4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(LEFT_CHILD(a)))->x.state))->cost[_addr_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_freg_NT] + 0;
			if (c + 0 < p->cost[_freg_NT]) {
				p->cost[_freg_NT] = c + 0;
				p->rule._freg = 21;
				_closure_freg(a, c + 0);
			}
		}
		if (	/* freg: DIVF8(freg,CVIF8(CVII2(INDIRI2(addr)))) */
			RIGHT_CHILD(a)->op == 8321 && /* CVIF8 */
			LEFT_CHILD(RIGHT_CHILD(a))->op == 2181 && /* CVII2 */
			LEFT_CHILD(LEFT_CHILD(RIGHT_CHILD(a)))->op == 2117 /* INDIRI2 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_freg_NT] + ((struct _state *)(LEFT_CHILD(LEFT_CHILD(LEFT_CHILD(RIGHT_CHILD(a))))->x.state))->cost[_addr_NT] + 0;
			if (c + 0 < p->cost[_freg_NT]) {
				p->cost[_freg_NT] = c + 0;
				p->rule._freg = 22;
				_closure_freg(a, c + 0);
			}
		}
		if (	/* freg: DIVF8(CVIF8(CVII2(INDIRI2(addr))),freg) */
			LEFT_CHILD(a)->op == 8321 && /* CVIF8 */
			LEFT_CHILD(LEFT_CHILD(a))->op == 2181 && /* CVII2 */
			LEFT_CHILD(LEFT_CHILD(LEFT_CHILD(a)))->op == 2117 /* INDIRI2 */
		) {
			c = ((struct _state *)(LEFT_CHILD(LEFT_CHILD(LEFT_CHILD(LEFT_CHILD(a))))->x.state))->cost[_addr_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_freg_NT] + 0;
			if (c + 0 < p->cost[_freg_NT]) {
				p->cost[_freg_NT] = c + 0;
				p->rule._freg = 23;
				_closure_freg(a, c + 0);
			}
		}
		if (	/* freg: DIVF8(freg,CVFF8(INDIRF4(addr))) */
			RIGHT_CHILD(a)->op == 8305 && /* CVFF8 */
			LEFT_CHILD(RIGHT_CHILD(a))->op == 4161 /* INDIRF4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_freg_NT] + ((struct _state *)(LEFT_CHILD(LEFT_CHILD(RIGHT_CHILD(a)))->x.state))->cost[_addr_NT] + 0;
			if (c + 0 < p->cost[_freg_NT]) {
				p->cost[_freg_NT] = c + 0;
				p->rule._freg = 35;
				_closure_freg(a, c + 0);
			}
		}
		break;
	case 8645: /* DIVI8 */
		break;
	case 8646: /* DIVU8 */
		break;
	case 8657: /* MULF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* freg: MULF8(freg,flt) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_freg_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_flt_NT] + 0;
		if (c + 0 < p->cost[_freg_NT]) {
			p->cost[_freg_NT] = c + 0;
			p->rule._freg = 11;
			_closure_freg(a, c + 0);
		}
		if (	/* freg: MULF8(freg,CVIF8(INDIRI4(addr))) */
			RIGHT_CHILD(a)->op == 8321 && /* CVIF8 */
			LEFT_CHILD(RIGHT_CHILD(a))->op == 4165 /* INDIRI4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_freg_NT] + ((struct _state *)(LEFT_CHILD(LEFT_CHILD(RIGHT_CHILD(a)))->x.state))->cost[_addr_NT] + 0;
			if (c + 0 < p->cost[_freg_NT]) {
				p->cost[_freg_NT] = c + 0;
				p->rule._freg = 24;
				_closure_freg(a, c + 0);
			}
		}
		if (	/* freg: MULF8(freg,CVIF8(CVII2(INDIRI2(addr)))) */
			RIGHT_CHILD(a)->op == 8321 && /* CVIF8 */
			LEFT_CHILD(RIGHT_CHILD(a))->op == 2181 && /* CVII2 */
			LEFT_CHILD(LEFT_CHILD(RIGHT_CHILD(a)))->op == 2117 /* INDIRI2 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_freg_NT] + ((struct _state *)(LEFT_CHILD(LEFT_CHILD(LEFT_CHILD(RIGHT_CHILD(a))))->x.state))->cost[_addr_NT] + 0;
			if (c + 0 < p->cost[_freg_NT]) {
				p->cost[_freg_NT] = c + 0;
				p->rule._freg = 25;
				_closure_freg(a, c + 0);
			}
		}
		if (	/* freg: MULF8(freg,CVFF8(INDIRF4(addr))) */
			RIGHT_CHILD(a)->op == 8305 && /* CVFF8 */
			LEFT_CHILD(RIGHT_CHILD(a))->op == 4161 /* INDIRF4 */
		) {
			c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_freg_NT] + ((struct _state *)(LEFT_CHILD(LEFT_CHILD(RIGHT_CHILD(a)))->x.state))->cost[_addr_NT] + 0;
			if (c + 0 < p->cost[_freg_NT]) {
				p->cost[_freg_NT] = c + 0;
				p->rule._freg = 34;
				_closure_freg(a, c + 0);
			}
		}
		break;
	case 8661: /* MULI8 */
		break;
	case 8662: /* MULU8 */
		break;
	case 8673: /* EQF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: EQF8(cmpf,freg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_cmpf_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_freg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 86;
		}
		break;
	case 8677: /* EQI8 */
		break;
	case 8678: /* EQU8 */
		break;
	case 8689: /* GEF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GEF8(cmpf,freg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_cmpf_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_freg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 87;
		}
		break;
	case 8693: /* GEI8 */
		break;
	case 8694: /* GEU8 */
		break;
	case 8705: /* GTF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: GTF8(cmpf,freg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_cmpf_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_freg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 88;
		}
		break;
	case 8709: /* GTI8 */
		break;
	case 8710: /* GTU8 */
		break;
	case 8721: /* LEF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LEF8(cmpf,freg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_cmpf_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_freg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 89;
		}
		break;
	case 8725: /* LEI8 */
		break;
	case 8726: /* LEU8 */
		break;
	case 8737: /* LTF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: LTF8(cmpf,freg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_cmpf_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_freg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 90;
		}
		break;
	case 8741: /* LTI8 */
		break;
	case 8742: /* LTU8 */
		break;
	case 8753: /* NEF8 */
		_label(LEFT_CHILD(a));
		_label(RIGHT_CHILD(a));
		/* stmt: NEF8(cmpf,freg) */
		c = ((struct _state *)(LEFT_CHILD(a)->x.state))->cost[_cmpf_NT] + ((struct _state *)(RIGHT_CHILD(a)->x.state))->cost[_freg_NT] + 0;
		if (c + 0 < p->cost[_stmt_NT]) {
			p->cost[_stmt_NT] = c + 0;
			p->rule._stmt = 91;
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
	case 221: /* stmt: LABELV */
	case 218: /* addrj: ADDRGP4 */
	case 174: /* mrca: ADDRGP8 */
	case 173: /* mrca: ADDRGP4 */
	case 148: /* rc5: CNSTI4 */
	case 62: /* con3: CNSTU4 */
	case 61: /* con3: CNSTI4 */
	case 60: /* con2: CNSTU4 */
	case 59: /* con2: CNSTI4 */
	case 58: /* con1: CNSTU4 */
	case 57: /* con1: CNSTI4 */
	case 56: /* con0: CNSTU4 */
	case 55: /* con0: CNSTI4 */
	case 47: /* base: ADDRLP4 */
	case 46: /* base: ADDRFP4 */
	case 41: /* baseaddr: ADDRGP4 */
	case 39: /* acon: ADDRGP8 */
	case 38: /* acon: ADDRGP4 */
	case 34: /* cnst: CNSTP8 */
	case 33: /* cnst: CNSTU8 */
	case 32: /* cnst: CNSTI8 */
	case 31: /* cnst: CNSTP4 */
	case 30: /* cnst: CNSTU4 */
	case 29: /* cnst: CNSTI4 */
	case 28: /* cnst: CNSTU2 */
	case 27: /* cnst: CNSTI2 */
	case 26: /* cnst: CNSTU1 */
	case 25: /* cnst: CNSTI1 */
	case 12: /* freg: INDIRF8(VREGP) */
	case 11: /* freg: INDIRF4(VREGP) */
	case 10: /* reg: INDIRU8(VREGP) */
	case 9: /* reg: INDIRP8(VREGP) */
	case 8: /* reg: INDIRI8(VREGP) */
	case 7: /* reg: INDIRU4(VREGP) */
	case 6: /* reg: INDIRP4(VREGP) */
	case 5: /* reg: INDIRI4(VREGP) */
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
	case 255: /* cmpf: freg */
	case 220: /* addrj: mem4 */
	case 219: /* addrj: reg */
	case 202: /* flt2: freg */
	case 201: /* flt2: memf */
	case 200: /* flt: freg */
	case 199: /* flt: memf */
	case 191: /* freg: memf */
	case 172: /* mrca: rc */
	case 171: /* mrca: mem4 */
	case 149: /* rc5: reg */
	case 98: /* reg: con */
	case 97: /* reg: mr2 */
	case 96: /* reg: mr1 */
	case 95: /* reg: mr */
	case 94: /* reg: addr */
	case 93: /* mrc: rc */
	case 92: /* mrc: mem2 */
	case 91: /* mrc: mem1 */
	case 90: /* mrc: mem4 */
	case 89: /* mr2: mem2 */
	case 88: /* mr2: reg */
	case 87: /* mr1: mem1 */
	case 86: /* mr1: reg */
	case 85: /* mr: mem4 */
	case 84: /* mr: reg */
	case 83: /* rc: con */
	case 82: /* rc: reg */
	case 74: /* addr: index */
	case 64: /* addr: baseaddr */
	case 63: /* addr: base */
	case 48: /* index: reg */
	case 42: /* base: reg */
	case 40: /* acon: cnst */
	case 37: /* stmt: freg */
	case 36: /* stmt: reg */
	case 35: /* con: cnst */
		kids[0] = p;
		break;
	case 267: /* stmt: NEF4(cmpf,freg) */
	case 266: /* stmt: LTF4(cmpf,freg) */
	case 265: /* stmt: LEF4(cmpf,freg) */
	case 264: /* stmt: GTF4(cmpf,freg) */
	case 263: /* stmt: GEF4(cmpf,freg) */
	case 262: /* stmt: EQF4(cmpf,freg) */
	case 261: /* stmt: NEF8(cmpf,freg) */
	case 260: /* stmt: LTF8(cmpf,freg) */
	case 259: /* stmt: LEF8(cmpf,freg) */
	case 258: /* stmt: GTF8(cmpf,freg) */
	case 257: /* stmt: GEF8(cmpf,freg) */
	case 256: /* stmt: EQF8(cmpf,freg) */
	case 244: /* stmt: NEU4(reg,mrc) */
	case 243: /* stmt: LTU4(reg,mrc) */
	case 242: /* stmt: LEU4(reg,mrc) */
	case 241: /* stmt: GTU4(reg,mrc) */
	case 240: /* stmt: GEU4(reg,mrc) */
	case 239: /* stmt: EQU4(reg,mrc) */
	case 238: /* stmt: NEI4(reg,mrc) */
	case 237: /* stmt: LTI4(reg,mrc) */
	case 236: /* stmt: LEI4(reg,mrc) */
	case 235: /* stmt: GTI4(reg,mrc) */
	case 234: /* stmt: GEI4(reg,mrc) */
	case 233: /* stmt: EQI4(reg,mrc) */
	case 232: /* stmt: LTU4(mem4,rc) */
	case 231: /* stmt: LEU4(mem4,rc) */
	case 230: /* stmt: GTU4(mem4,rc) */
	case 229: /* stmt: GEU4(mem4,rc) */
	case 228: /* stmt: NEI4(mem4,rc) */
	case 227: /* stmt: LTI4(mem4,rc) */
	case 226: /* stmt: LEI4(mem4,rc) */
	case 225: /* stmt: GTI4(mem4,rc) */
	case 224: /* stmt: GEI4(mem4,rc) */
	case 223: /* stmt: EQI4(mem4,rc) */
	case 210: /* freg: SUBF8(freg,flt2) */
	case 209: /* freg: SUBF4(freg,flt2) */
	case 208: /* freg: MULF8(freg,flt) */
	case 207: /* freg: MULF4(freg,flt) */
	case 206: /* freg: DIVF8(freg,flt2) */
	case 205: /* freg: DIVF4(freg,flt2) */
	case 204: /* freg: ADDF8(freg,flt) */
	case 203: /* freg: ADDF4(freg,flt) */
	case 193: /* stmt: ASGNF4(addr,freg) */
	case 192: /* stmt: ASGNF8(addr,freg) */
	case 181: /* stmt: ASGNP4(addr,rc) */
	case 180: /* stmt: ASGNU4(addr,rc) */
	case 179: /* stmt: ASGNU2(addr,rc) */
	case 178: /* stmt: ASGNU1(addr,rc) */
	case 177: /* stmt: ASGNI4(addr,rc) */
	case 176: /* stmt: ASGNI2(addr,rc) */
	case 175: /* stmt: ASGNI1(addr,rc) */
	case 156: /* reg: MODI4(reg,reg) */
	case 155: /* reg: DIVI4(reg,reg) */
	case 154: /* reg: MODU4(reg,reg) */
	case 153: /* reg: DIVU4(reg,reg) */
	case 152: /* reg: MULU4(reg,mr) */
	case 151: /* reg: MULI4(con,mr) */
	case 150: /* reg: MULI4(reg,mrc) */
	case 143: /* reg: RSHU4(reg,rc5) */
	case 142: /* reg: RSHI4(reg,rc5) */
	case 141: /* reg: LSHU4(reg,rc5) */
	case 140: /* reg: LSHI4(reg,rc5) */
	case 117: /* reg: BXORU4(reg,mrc) */
	case 116: /* reg: BORU4(reg,mrc) */
	case 115: /* reg: BANDU4(reg,mrc) */
	case 114: /* reg: BXORI4(reg,mrc) */
	case 113: /* reg: BORI4(reg,mrc) */
	case 112: /* reg: BANDI4(reg,mrc) */
	case 111: /* reg: SUBU4(reg,mrc) */
	case 110: /* reg: SUBP4(reg,mrc) */
	case 109: /* reg: SUBI4(reg,mrc) */
	case 108: /* reg: ADDU4(reg,mrc) */
	case 107: /* reg: ADDP4(reg,mrc) */
	case 106: /* reg: ADDI4(reg,mrc) */
	case 73: /* addr: ADDU4(index,reg) */
	case 72: /* addr: ADDP4(index,reg) */
	case 71: /* addr: ADDI4(index,reg) */
	case 70: /* addr: ADDU4(reg,baseaddr) */
	case 69: /* addr: ADDP4(reg,baseaddr) */
	case 68: /* addr: ADDI4(reg,baseaddr) */
	case 67: /* addr: ADDU4(index,baseaddr) */
	case 66: /* addr: ADDP4(index,baseaddr) */
	case 65: /* addr: ADDI4(index,baseaddr) */
	case 54: /* index: LSHU4(reg,con3) */
	case 53: /* index: LSHU4(reg,con2) */
	case 52: /* index: LSHU4(reg,con1) */
	case 51: /* index: LSHI4(reg,con3) */
	case 50: /* index: LSHI4(reg,con2) */
	case 49: /* index: LSHI4(reg,con1) */
	case 45: /* base: ADDU4(reg,acon) */
	case 44: /* base: ADDP4(reg,acon) */
	case 43: /* base: ADDI4(reg,acon) */
		kids[0] = LEFT_CHILD(p);
		kids[1] = RIGHT_CHILD(p);
		break;
	case 306: /* stmt: RETF8(freg) */
	case 305: /* stmt: RETF4(freg) */
	case 304: /* stmt: RETP4(reg) */
	case 303: /* stmt: RETU4(reg) */
	case 302: /* stmt: RETI4(reg) */
	case 301: /* stmt: CALLF8(addrj) */
	case 300: /* stmt: CALLF8(addrj) */
	case 299: /* freg: CALLF8(addrj) */
	case 298: /* freg: CALLF8(addrj) */
	case 297: /* stmt: CALLF4(addrj) */
	case 296: /* stmt: CALLF4(addrj) */
	case 295: /* freg: CALLF4(addrj) */
	case 294: /* freg: CALLF4(addrj) */
	case 293: /* stmt: CALLV(addrj) */
	case 292: /* stmt: CALLV(addrj) */
	case 291: /* stmt: CALLV(addrj) */
	case 290: /* reg: CALLP4(addrj) */
	case 289: /* reg: CALLU4(addrj) */
	case 288: /* reg: CALLI4(addrj) */
	case 287: /* reg: CALLP4(addrj) */
	case 286: /* reg: CALLU4(addrj) */
	case 285: /* reg: CALLI4(addrj) */
	case 284: /* freg: LOADF8(memf) */
	case 253: /* cmpf: INDIRF4(addr) */
	case 252: /* cmpf: INDIRF8(addr) */
	case 222: /* stmt: JUMPV(addrj) */
	case 217: /* freg: CVIF4(reg) */
	case 215: /* freg: CVIF8(reg) */
	case 213: /* reg: CVFI4(freg) */
	case 212: /* freg: CVFF4(freg) */
	case 211: /* freg: CVFF8(freg) */
	case 198: /* freg: NEGF4(freg) */
	case 197: /* freg: NEGF8(freg) */
	case 196: /* stmt: ARGF4(freg) */
	case 195: /* stmt: ARGF8(freg) */
	case 188: /* memf: INDIRF4(addr) */
	case 187: /* memf: INDIRF8(addr) */
	case 184: /* stmt: ARGP4(mrca) */
	case 183: /* stmt: ARGU4(mrca) */
	case 182: /* stmt: ARGI4(mrca) */
	case 170: /* reg: CVUU2(reg) */
	case 169: /* reg: CVUU1(reg) */
	case 168: /* reg: CVII2(reg) */
	case 167: /* reg: CVII1(reg) */
	case 166: /* reg: CVUU4(reg) */
	case 165: /* reg: CVUI4(reg) */
	case 164: /* reg: CVIU4(reg) */
	case 163: /* reg: CVII4(reg) */
	case 158: /* reg: CVUP4(reg) */
	case 157: /* reg: CVPU4(reg) */
	case 136: /* reg: NEGI4(reg) */
	case 135: /* reg: BCOMU4(reg) */
	case 134: /* reg: BCOMI4(reg) */
	case 105: /* reg: LOADP4(reg) */
	case 104: /* reg: LOADU4(reg) */
	case 103: /* reg: LOADU2(reg) */
	case 102: /* reg: LOADU1(reg) */
	case 101: /* reg: LOADI4(reg) */
	case 100: /* reg: LOADI2(reg) */
	case 99: /* reg: LOADI1(reg) */
	case 81: /* mem4: INDIRP4(addr) */
	case 80: /* mem4: INDIRU4(addr) */
	case 79: /* mem4: INDIRI4(addr) */
	case 78: /* mem2: INDIRU2(addr) */
	case 77: /* mem2: INDIRI2(addr) */
	case 76: /* mem1: INDIRU1(addr) */
	case 75: /* mem1: INDIRI1(addr) */
		kids[0] = LEFT_CHILD(p);
		break;
	case 147: /* stmt: ASGNI4(addr,RSHU4(mem4,rc5)) */
	case 146: /* stmt: ASGNI4(addr,RSHI4(mem4,rc5)) */
	case 145: /* stmt: ASGNI4(addr,LSHU4(mem4,rc5)) */
	case 144: /* stmt: ASGNI4(addr,LSHI4(mem4,rc5)) */
	case 133: /* stmt: ASGNU4(addr,BXORU4(mem4,rc)) */
	case 132: /* stmt: ASGNU4(addr,BORU4(mem4,rc)) */
	case 131: /* stmt: ASGNU4(addr,BANDU4(mem4,rc)) */
	case 130: /* stmt: ASGNI4(addr,BXORI4(mem4,rc)) */
	case 129: /* stmt: ASGNI4(addr,BORI4(mem4,rc)) */
	case 128: /* stmt: ASGNI4(addr,BANDI4(mem4,rc)) */
	case 127: /* stmt: ASGNU4(addr,SUBU4(mem4,rc)) */
	case 126: /* stmt: ASGNU4(addr,ADDU4(mem4,rc)) */
	case 125: /* stmt: ASGNI4(addr,SUBI4(mem4,rc)) */
	case 124: /* stmt: ASGNI4(addr,ADDI4(mem4,rc)) */
	case 123: /* stmt: ASGNP4(addr,SUBP4(mem4,con1)) */
	case 122: /* stmt: ASGNI4(addr,SUBU4(mem4,con1)) */
	case 121: /* stmt: ASGNI4(addr,SUBI4(mem4,con1)) */
	case 120: /* stmt: ASGNP4(addr,ADDP4(mem4,con1)) */
	case 119: /* stmt: ASGNI4(addr,ADDU4(mem4,con1)) */
	case 118: /* stmt: ASGNI4(addr,ADDI4(mem4,con1)) */
		kids[0] = LEFT_CHILD(p);
		kids[1] = LEFT_CHILD(RIGHT_CHILD(p));
		kids[2] = RIGHT_CHILD(RIGHT_CHILD(p));
		break;
	case 194: /* stmt: ASGNF4(addr,CVFF4(freg)) */
	case 185: /* stmt: ASGNB(reg,INDIRB(reg)) */
	case 139: /* stmt: ASGNI4(addr,NEGI4(mem4)) */
	case 138: /* stmt: ASGNU4(addr,BCOMU4(mem4)) */
	case 137: /* stmt: ASGNI4(addr,BCOMI4(mem4)) */
		kids[0] = LEFT_CHILD(p);
		kids[1] = LEFT_CHILD(RIGHT_CHILD(p));
		break;
	case 254: /* cmpf: CVFF8(INDIRF4(addr)) */
	case 216: /* freg: CVIF4(INDIRI4(addr)) */
	case 214: /* freg: CVIF8(INDIRI4(addr)) */
	case 190: /* memf: CVFF4(INDIRF8(addr)) */
	case 189: /* memf: CVFF8(INDIRF4(addr)) */
	case 186: /* stmt: ARGB(INDIRB(reg)) */
	case 162: /* reg: CVUU4(INDIRU2(addr)) */
	case 161: /* reg: CVUU4(INDIRU1(addr)) */
	case 160: /* reg: CVII4(INDIRI2(addr)) */
	case 159: /* reg: CVII4(INDIRI1(addr)) */
		kids[0] = LEFT_CHILD(LEFT_CHILD(p));
		break;
	case 246: /* stmt: NEI4(BANDU4(mr,con),con0) */
	case 245: /* stmt: EQI4(BANDU4(mr,con),con0) */
		kids[0] = LEFT_CHILD(LEFT_CHILD(p));
		kids[1] = RIGHT_CHILD(LEFT_CHILD(p));
		kids[2] = RIGHT_CHILD(p);
		break;
	case 251: /* stmt: EQI4(BANDU4(CVII1(INDIRI1(addr)),con),con0) */
	case 250: /* stmt: NEI4(BANDU4(CVIU2(INDIRI2(addr)),con),con0) */
	case 249: /* stmt: EQI4(BANDU4(CVIU2(INDIRI2(addr)),con),con0) */
	case 248: /* stmt: NEI4(BANDU4(CVII2(INDIRI2(addr)),con),con0) */
	case 247: /* stmt: EQI4(BANDU4(CVII2(INDIRI2(addr)),con),con0) */
		kids[0] = LEFT_CHILD(LEFT_CHILD(LEFT_CHILD(LEFT_CHILD(p))));
		kids[1] = RIGHT_CHILD(LEFT_CHILD(p));
		kids[2] = RIGHT_CHILD(p);
		break;
	case 283: /* freg: DIVF8(freg,CVFF8(INDIRF4(addr))) */
	case 282: /* freg: MULF8(freg,CVFF8(INDIRF4(addr))) */
	case 281: /* freg: SUBF8(freg,CVFF8(INDIRF4(addr))) */
	case 280: /* freg: ADDF8(freg,CVFF8(INDIRF4(addr))) */
	case 278: /* freg: ADDF8(freg,CVIF8(INDIRI4(addr))) */
	case 274: /* freg: SUBF8(freg,CVIF8(INDIRI4(addr))) */
	case 272: /* freg: MULF8(freg,CVIF8(INDIRI4(addr))) */
	case 268: /* freg: DIVF8(freg,CVIF8(INDIRI4(addr))) */
		kids[0] = LEFT_CHILD(p);
		kids[1] = LEFT_CHILD(LEFT_CHILD(RIGHT_CHILD(p)));
		break;
	case 275: /* freg: SUBF8(CVIF8(INDIRI4(addr)),freg) */
	case 269: /* freg: DIVF8(CVIF8(INDIRI4(addr)),freg) */
		kids[0] = LEFT_CHILD(LEFT_CHILD(LEFT_CHILD(p)));
		kids[1] = RIGHT_CHILD(p);
		break;
	case 279: /* freg: ADDF8(freg,CVIF8(CVII2(INDIRI2(addr)))) */
	case 276: /* freg: SUBF8(freg,CVIF8(CVII2(INDIRI2(addr)))) */
	case 273: /* freg: MULF8(freg,CVIF8(CVII2(INDIRI2(addr)))) */
	case 270: /* freg: DIVF8(freg,CVIF8(CVII2(INDIRI2(addr)))) */
		kids[0] = LEFT_CHILD(p);
		kids[1] = LEFT_CHILD(LEFT_CHILD(LEFT_CHILD(RIGHT_CHILD(p))));
		break;
	case 277: /* freg: SUBF8(CVIF8(CVII2(INDIRI2(addr))),freg) */
	case 271: /* freg: DIVF8(CVIF8(CVII2(INDIRI2(addr))),freg) */
		kids[0] = LEFT_CHILD(LEFT_CHILD(LEFT_CHILD(LEFT_CHILD(p))));
		kids[1] = RIGHT_CHILD(p);
		break;
	default:
		fatal("_kids", "Bad rule number %d\n", eruleno);
	}
}

static void progbeg(int argc, char *argv[]) {
        int i;
        extern Interface x86IR, x86linuxIR;

#define xx(f) assert(!x86linuxIR.f); x86linuxIR.f = x86IR.f
        xx(address);
        xx(local);
        xx(x.blkfetch);
        xx(x.blkstore);
        xx(x.blkloop);
        xx(x.doarg);
#undef xx
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
        intreg[EAX]   = mkreg("%%eax", EAX, 1, IREG);
        intreg[EDX]   = mkreg("%%edx", EDX, 1, IREG);
        intreg[ECX]   = mkreg("%%ecx", ECX, 1, IREG);
        intreg[EBX]   = mkreg("%%ebx", EBX, 1, IREG);
        intreg[ESI]   = mkreg("%%esi", ESI, 1, IREG);
        intreg[EDI]   = mkreg("%%edi", EDI, 1, IREG);
        shortreg[EAX] = mkreg("%%ax", EAX, 1, IREG);
        shortreg[ECX] = mkreg("%%cx", ECX, 1, IREG);
        shortreg[EDX] = mkreg("%%dx", EDX, 1, IREG);
        shortreg[EBX] = mkreg("%%bx", EBX, 1, IREG);
        shortreg[ESI] = mkreg("%%si", ESI, 1, IREG);
        shortreg[EDI] = mkreg("%%di", EDI, 1, IREG);
        charreg[EAX]  = mkreg("%%al", EAX, 1, IREG);
        charreg[ECX]  = mkreg("%%cl", ECX, 1, IREG);
        charreg[EDX]  = mkreg("%%dl", EDX, 1, IREG);
        charreg[EBX]  = mkreg("%%bl", EBX, 1, IREG);
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

        cseg = 0;
        quo = mkreg("%%eax", EAX, 1, IREG);
        quo->x.regnode->mask |= 1<<EDX;
        rem = mkreg("%%edx", EDX, 1, IREG);
        rem->x.regnode->mask |= 1<<EAX;

        stabprefix = ".LL";
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

static Symbol prevg;

static void globalend(void) {
        if (prevg && prevg->type->size > 0)
                print(".size %s,%d\n", prevg->x.name, prevg->type->size);
        prevg = NULL;
}

static void progend(void) {
        globalend();
        (*IR->segment)(CODE);
        print(".ident \"LCC: 4.2\"\n");
}

static void target(Node p) {
        assert(p);
        switch (specific(p->op)) {
        case RSH+I: case RSH+U: case LSH+I: case LSH+U:
                if (generic(p->kids[1]->op) != CNST
                && !(   generic(p->kids[1]->op) == INDIR
                     && specific(p->kids[1]->kids[0]->op) == VREG+P
                     && p->kids[1]->syms[RX]->u.t.cse
                     && generic(p->kids[1]->syms[RX]->u.t.cse->op) == CNST)) {
                        rtarget(p, 1, intreg[ECX]);
                        setreg(p, intreg[EAX]);
                }
                break;
        case MUL+U:
                setreg(p, quo);
                rtarget(p, 0, intreg[EAX]);
                break;
        case DIV+I: case DIV+U:
                setreg(p, quo);
                rtarget(p, 0, intreg[EAX]);
                rtarget(p, 1, intreg[ECX]);
                break;
        case MOD+I: case MOD+U:
                setreg(p, rem);
                rtarget(p, 0, intreg[EAX]);
                rtarget(p, 1, intreg[ECX]);
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
        case ASGN+B: case ARG+B:
                spill(1<<ECX | 1<<ESI | 1<<EDI, IREG, p);
                break;
        case EQ+F: case LE+F: case GE+F: case LT+F: case GT+F: case NE+F:
                spill(1<<EAX, IREG, p);
                break;
        case CVF+I:
                spill(1<<EDX, IREG, p);
                break;
        case CALL+F:
                spill(1<<EDX | 1<<EAX | 1<<ECX, IREG, p);
                break;
        case CALL+I: case CALL+U: case CALL+P: case CALL+V:
                spill(1<<EDX | 1<<ECX, IREG, p);
                break;
        }
}

static void emit2(Node p) {
        int op = specific(p->op);
#define preg(f) ((f)[getregnum(p->x.kids[0])]->x.name)

        if (op == CVI+I && opsize(p->op) == 4 && opsize(p->x.kids[0]->op) == 1)
                print("movsbl %s,%s\n", preg(charreg), p->syms[RX]->x.name);
        else if (op == CVI+U && opsize(p->op) == 4 && opsize(p->x.kids[0]->op) == 1)
                print("movsbl %s,%s\n", preg(charreg), p->syms[RX]->x.name);
        else if (op == CVI+I && opsize(p->op) == 4 && opsize(p->x.kids[0]->op) == 2)
                print("movswl %s,%s\n", preg(shortreg), p->syms[RX]->x.name);
        else if (op == CVI+U && opsize(p->op) == 4 && opsize(p->x.kids[0]->op) == 2)
                print("movswl %s,%s\n", preg(shortreg), p->syms[RX]->x.name);
        else if (op == CVU+I && opsize(p->op) == 4 && opsize(p->x.kids[0]->op) == 1)
                print("movzbl %s,%s\n", preg(charreg), p->syms[RX]->x.name);
        else if (op == CVU+U && opsize(p->op) == 4 && opsize(p->x.kids[0]->op) == 1)
                print("movzbl %s,%s\n", preg(charreg), p->syms[RX]->x.name);
        else if (op == CVU+I && opsize(p->op) == 4 && opsize(p->x.kids[0]->op) == 2)
                print("movzwl %s,%s\n", preg(shortreg), p->syms[RX]->x.name);
        else if (op == CVU+U && opsize(p->op) == 4 && opsize(p->x.kids[0]->op) == 2)
                print("movzwl %s,%s\n", preg(shortreg), p->syms[RX]->x.name);
        else if (generic(op) == CVI || generic(op) == CVU || generic(op) == LOAD) {
                char *dst = intreg[getregnum(p)]->x.name;
                char *src = preg(intreg);
                assert(opsize(p->op) <= opsize(p->x.kids[0]->op));
                if (dst != src)
                        print("movl %s,%s\n", src, dst);
        } else if (op == ARG+B)
                print("subl $%d,%%esp\nmovl %%esp,%%edi\nmovl $%d,%%ecx\nrep\nmovsb\n",
                        roundup(p->syms[0]->u.c.v.i, 4), p->syms[0]->u.c.v.i);
}

static void function(Symbol f, Symbol caller[], Symbol callee[], int n) {
        int i;

        globalend();
        print(".align 16\n");
        print(".type %s,@function\n", f->x.name);
        print("%s:\n", f->x.name);
        print("pushl %%ebp\n");
        if (pflag) {
                static int plab;
                print("movl %%esp,%%ebp\n");
                (*IR->segment)(DATA);
                print(".align 4\n.LP%d:\n.long 0\n", plab);
                (*IR->segment)(CODE);
                print("movl $.LP%d,%%edx\ncall mcount\n", plab);
                plab++;
        }
        print("pushl %%ebx\n");
        print("pushl %%esi\n");
        print("pushl %%edi\n");
        print("movl %%esp,%%ebp\n");

        usedmask[0] = usedmask[1] = 0;
        freemask[0] = freemask[1] = ~0U;
        offset = 16 + 4;
        for (i = 0; callee[i]; i++) {
                Symbol p = callee[i];
                Symbol q = caller[i];
                assert(q);
                offset = roundup(offset, q->type->align);
                p->x.offset = q->x.offset = offset;
                p->x.name = q->x.name = stringf("%d", p->x.offset);
                p->sclass = q->sclass = AUTO;
                offset += roundup(q->type->size, 4);
        }
        assert(caller[i] == 0);
        offset = maxoffset = 0;
        gencode(caller, callee);
        framesize = roundup(maxoffset, 4);
        if (framesize > 0)
                print("subl $%d,%%esp\n", framesize);
        emitcode();
        print("movl %%ebp,%%esp\n");
        print("popl %%edi\n");
        print("popl %%esi\n");
        print("popl %%ebx\n");
        print("popl %%ebp\n");
	if (isstruct(freturn(f->type)))
		print("ret $4\n");
	else
		print("ret\n");
        { int l = genlabel(1);
          print(".Lf%d:\n", l);
          print(".size %s,.Lf%d-%s\n", f->x.name, l, f->x.name);
        }
}

static void defsymbol(Symbol p) {
        if (p->scope >= LOCAL && p->sclass == STATIC)
                p->x.name = stringf("%s.%d", p->name, genlabel(1));
        else if (p->generated)
                p->x.name = stringf(".LC%s", p->name);
        else if (p->scope == GLOBAL || p->sclass == EXTERN)
                p->x.name = stringf("%s", p->name);
        else
                p->x.name = p->name;
}

static void segment(int n) {
        if (n == cseg)
                return;
        cseg = n;
        if (cseg == CODE)
                print(".text\n");
        else if (cseg == BSS)
                print(".bss\n");
        else if (cseg == DATA || cseg == LIT)
                print(".data\n");
}

static void defconst(int suffix, int size, Value v) {
        if (suffix == I && size == 1)
                print(".byte %d\n", (int)v.u);
        else if (suffix == I && size == 2)
                print(".word %d\n", (int)v.i);
        else if (suffix == I && size == 4)
                print(".long %d\n", (int)v.i);
        else if (suffix == U && size == 1)
                print(".byte %d\n", (int)((char)v.u));
        else if (suffix == U && size == 2)
                print(".word %d\n", (int)v.u);
        else if (suffix == U && size == 4)
                print(".long %d\n", (int)v.u);
        else if (suffix == P && size == 4)
                print(".long %d\n", (int)v.p);
        else if (suffix == F && size == 4) {
                float f = v.d;
                print(".long %d\n", (int)(*(unsigned *)&f));
        } else if (suffix == F && size == 8) {
                double d = v.d;
                unsigned *p = (unsigned *)&d;
                print(".long %d\n.long %d\n", (int)p[swap], (int)p[!swap]);
        }
        else assert(0);
}

static void defaddress(Symbol p) {
        print(".long %s\n", p->x.name);
}

static void defstring(int n, char *str) {
        char *s;

        for (s = str; s < str + n; s++)
                print(".byte %d\n", (*s)&0377);
}

static void export(Symbol p) {
        globalend();
        print(".globl %s\n", p->x.name);
}

static void import(Symbol p) {}

static void global(Symbol p) {
        globalend();
        print(".align %d\n", p->type->align > 4 ? 4 : p->type->align);
        if (!p->generated) {
                print(".type %s,@%s\n", p->x.name,
                        isfunc(p->type) ? "function" : "object");
                if (p->type->size > 0)
                        print(".size %s,%d\n", p->x.name, p->type->size);
                else
                        prevg = p;
        }
        if (p->u.seg == BSS) {
                if (p->sclass == STATIC)
                        print(".lcomm %s,%d\n", p->x.name, p->type->size);
                else
                        print(".comm %s,%d\n", p->x.name, p->type->size);
        } else {
                print("%s:\n", p->x.name);
        }
}

static void space(int n) {
        if (cseg != BSS)
                print(".space %d\n", n);
}

Interface x86linuxIR = {
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
        0, /* address */
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
        0, /* local */
        progbeg,
        progend,
        segment,
        space,
        stabblock, stabend, 0, stabinit, stabline, stabsym, stabtype,
        {1, rmap,
            0, 0, 0,    /* blkfetch, blkstore, blkloop */
            _label,
            _rule,
            _nts,
            _kids,
            _string,
            _templates,
            _isinstruction,
            _ntname,
            emit2,
            0, /* doarg */
            target,
            clobber,
        }
};
