/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     TYPE_NAME = 259,
     STRING_LITERAL = 260,
     INTEGER_CONSTANT = 261,
     FLOAT_CONSTANT = 262,
     CHAR_CONSTANT = 263,
     KW_VOID = 264,
     KW_CHAR = 265,
     KW_SHORT = 266,
     KW_INT = 267,
     KW_LONG = 268,
     KW_SIGNED = 269,
     KW_UNSIGNED = 270,
     KW_FLOAT = 271,
     KW_DOUBLE = 272,
     KW_VERSION = 273,
     KW_STRUCT = 274,
     KW_UNION = 275,
     KW_ENUM = 276,
     KW_TYPEDEF = 277,
     KW_RETURN = 278,
     KW_IF = 279,
     KW_ELSE = 280,
     KW_WHILE = 281,
     KW_FOR = 282,
     KW_DO = 283,
     KW_SWITCH = 284,
     KW_CASE = 285,
     KW_DEFAULT = 286,
     KW_BREAK = 287,
     KW_CONTINUE = 288,
     KW_GOTO = 289,
     KW_CONST = 290,
     KW_VOLATILE = 291,
     KW_RESTRICT = 292,
     KW_INLINE = 293,
     KW_EXTERN = 294,
     KW_STATIC = 295,
     KW_UNIQ = 296,
     KW_SIZEOF = 297,
     ELLIPSIS = 298,
     ARROW = 299,
     INC = 300,
     DEC = 301,
     LSHIFT = 302,
     RSHIFT = 303,
     LE = 304,
     GE = 305,
     EQ = 306,
     NE = 307,
     LOGAND = 308,
     LOGOR = 309,
     ADD_ASSIGN = 310,
     SUB_ASSIGN = 311,
     MUL_ASSIGN = 312,
     DIV_ASSIGN = 313,
     MOD_ASSIGN = 314,
     AND_ASSIGN = 315,
     OR_ASSIGN = 316,
     XOR_ASSIGN = 317,
     LSHIFT_ASSIGN = 318,
     RSHIFT_ASSIGN = 319,
     PREFER_EMPTY = 320
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define TYPE_NAME 259
#define STRING_LITERAL 260
#define INTEGER_CONSTANT 261
#define FLOAT_CONSTANT 262
#define CHAR_CONSTANT 263
#define KW_VOID 264
#define KW_CHAR 265
#define KW_SHORT 266
#define KW_INT 267
#define KW_LONG 268
#define KW_SIGNED 269
#define KW_UNSIGNED 270
#define KW_FLOAT 271
#define KW_DOUBLE 272
#define KW_VERSION 273
#define KW_STRUCT 274
#define KW_UNION 275
#define KW_ENUM 276
#define KW_TYPEDEF 277
#define KW_RETURN 278
#define KW_IF 279
#define KW_ELSE 280
#define KW_WHILE 281
#define KW_FOR 282
#define KW_DO 283
#define KW_SWITCH 284
#define KW_CASE 285
#define KW_DEFAULT 286
#define KW_BREAK 287
#define KW_CONTINUE 288
#define KW_GOTO 289
#define KW_CONST 290
#define KW_VOLATILE 291
#define KW_RESTRICT 292
#define KW_INLINE 293
#define KW_EXTERN 294
#define KW_STATIC 295
#define KW_UNIQ 296
#define KW_SIZEOF 297
#define ELLIPSIS 298
#define ARROW 299
#define INC 300
#define DEC 301
#define LSHIFT 302
#define RSHIFT 303
#define LE 304
#define GE 305
#define EQ 306
#define NE 307
#define LOGAND 308
#define LOGOR 309
#define ADD_ASSIGN 310
#define SUB_ASSIGN 311
#define MUL_ASSIGN 312
#define DIV_ASSIGN 313
#define MOD_ASSIGN 314
#define AND_ASSIGN 315
#define OR_ASSIGN 316
#define XOR_ASSIGN 317
#define LSHIFT_ASSIGN 318
#define RSHIFT_ASSIGN 319
#define PREFER_EMPTY 320




/* Copy the first part of user declarations.  */
#line 7 "c.y"

#define YYDEBUG 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ast.h"
#include "typedefs.h"

int yylex(void);
void yyerror(const char* s);
extern int yylineno;
extern char* yytext;

/* Track the most recent anonymous or nested type definition encountered in a type specifier,
   so we can attach it inline to struct/union fields. */
static struct AstNode* g_last_anon_type = NULL;
static int g_last_anon_is_anon = 0; /* 1 if last was anonymous brace form */

/* Parameter list builder for function params */
typedef struct ParamList {
  AstParam* a;
  long n;
  long cap;
} ParamList;

static ParamList* plist_new(void) {
  ParamList* p = (ParamList*)calloc(1, sizeof(ParamList));
  return p;
}
static void plist_push(ParamList* p, const char* type_name, const char* name) {
  if(!p) return;
  if(p->n == p->cap) {
    long nc = p->cap ? p->cap*2 : 4;
    AstParam* na = (AstParam*)realloc(p->a, sizeof(AstParam)*nc);
    if(!na) return;
    p->a = na;
    p->cap = nc;
  }
  p->a[p->n].type_name = type_name ? strdup(type_name) : NULL;
  p->a[p->n].name = name ? strdup(name) : NULL;
  p->n++;
}
static ParamList* plist_merge(ParamList* a, ParamList* b) {
  if(!a) return b;
  if(!b) return a;
  for(long i=0;i<b->n;i++) {
    plist_push(a, b->a[i].type_name, b->a[i].name);
  }
  if(b->a) {
    for(long i=0;i<b->n;i++) {
      free(b->a[i].type_name);
      free(b->a[i].name);
    }
    free(b->a);
  }
  free(b);
  return a;
}

/* Block item (statement) list builder */
typedef struct NodeList {
  struct AstNode** a;
  long n;
  long cap;
} NodeList;
static NodeList* nlist_new(void) {
  return (NodeList*)calloc(1, sizeof(NodeList));
}
static NodeList* nlist_from1(struct AstNode* node) {
  NodeList* nl = nlist_new();
  if(!nl) return NULL;
  if(node) {
    nl->a = (struct AstNode**)calloc(1, sizeof(struct AstNode*));
    if(nl->a) { nl->a[0] = node; nl->n = nl->cap = 1; }
  }
  return nl;
}
static void nlist_push(NodeList* nl, struct AstNode* node) {
  if(!nl || !node) return;
  if(nl->n == nl->cap) {
    long nc = nl->cap ? nl->cap*2 : 4;
    struct AstNode** na = (struct AstNode**)realloc(nl->a, sizeof(struct AstNode*)*nc);
    if(!na) return;
    nl->a = na;
    nl->cap = nc;
  }
  nl->a[nl->n++] = node;
}
static NodeList* nlist_merge(NodeList* a, NodeList* b) {
  if(!a) return b;
  if(!b) return a;
  for(long i=0;i<b->n;i++) nlist_push(a, b->a[i]);
  free(b->a);
  free(b);
  return a;
}

/* Declarator string builder for precise multi-declarations (comma-only) */
typedef struct DStr {
  char* name;
  char* pre;   /* pointer chain like ** */
  char* post;  /* suffix like [10][20] or (int, char*) */
} DStr;

static char* sjoin3(const char* a, const char* b, const char* c){
  size_t na=a?strlen(a):0, nb=b?strlen(b):0, nc=c?strlen(c):0;
  char* r=(char*)malloc(na+nb+nc+1); if(!r) return NULL; r[0]='\0';
  if(a) strcat(r,a); if(b) strcat(r,b); if(c) strcat(r,c); return r;
}
static char* sdup0x(const char* s){ if(!s) return strdup(""); size_t n=strlen(s); char* r=(char*)malloc(n+1); if(r) memcpy(r,s,n+1); return r; }
static void dstr_free(DStr* d){ if(!d) return; free(d->name); free(d->pre); free(d->post); free(d); }
static char* compose_type(const char* base, const DStr* d){
  const char* pre = (d&&d->pre)?d->pre:""; const char* post=(d&&d->post)?d->post:"";
  if(pre[0] && post[0]){ char* mid=sjoin3("(",pre,")"); char* r=sjoin3(base,mid,post); free(mid); return r; }
  return sjoin3(base, pre, post);
}
static char* array_suffix_from_expr(struct AstNode* e){
  if(e && e->kind==AST_EXPR_INT){ typedef struct { int kind; long value; } AstExprInt; char buf[64]; snprintf(buf,sizeof(buf),"[%ld]", ((AstExprInt*)e)->value); return strdup(buf); }
  return strdup("[]");
}
static char* sappend(char* a, const char* b){ size_t na=a?strlen(a):0, nb=b?strlen(b):0; char* r=(char*)malloc(na+nb+1); if(!r) return a; if(na) memcpy(r,a,na); if(nb) memcpy(r+na,b,nb); r[na+nb]='\0'; free(a); return r; }
static char* sappend3(char* a, const char* b, const char* c){ return sappend(sappend(a,b),c); }

/* Function decl-spec accumulator (storage/qualifiers/inline + base+stars) */
typedef struct FSpec {
  char* rtype; /* return type */
  int flags;   /* AstFuncFlags bitmask */
} FSpec;

static FSpec* fspec_new_from(const char* base, const char* stars){
  FSpec* s=(FSpec*)calloc(1,sizeof(FSpec));
  if(!s) return NULL;
  size_t n=strlen(base)+strlen(stars?stars:"")+1; s->rtype=(char*)malloc(n);
  if(s->rtype){ s->rtype[0]='\0'; strcat(s->rtype, base); if(stars) strcat(s->rtype, stars); }
  return s;
}

/* 構造体フィールド一時バッファ */
typedef struct SField {
  char* base;     /* 宣言スペックから得た基本型 "unsigned long" 等 */
  struct DStr* d; /* 変数名や * や [] を含む宣言子 */
  int bitwidth;   /* 0: 通常フィールド, >0: ビットフィールド幅 */
  struct AstNode* anon_def; /* base が無名の struct/union/enum 定義を含む場合 */
} SField;

typedef struct SFieldList {
  struct SField* a;
  long n, cap;
} SFieldList;

static SFieldList* sfl_new(void){
  return (SFieldList*)calloc(1,sizeof(SFieldList));
}
static void sfl_push(SFieldList* l, struct SField f){
  if(!l) return;
  if(l->n==l->cap){
    long nc = l->cap? l->cap*2 : 8;
    struct SField* na = (struct SField*)realloc(l->a, nc*sizeof(*na));
    if(!na) return;
    l->a=na; l->cap=nc;
  }
  l->a[l->n++] = f;
}
static void sfl_free(SFieldList* l){
  if(!l) return;
  for(long i=0;i<l->n;i++){
    free(l->a[i].base);
    if(l->a[i].d) { /* DStr は専用解放 */
      free(l->a[i].d->name); free(l->a[i].d->pre); free(l->a[i].d->post); free(l->a[i].d);
    }
  }
  free(l->a); free(l);
}

/* enum enumerator temporary list */
typedef struct EnumItemTmp {
  char* name;            /* enumerator name */
  struct AstNode* value; /* optional expression (ownership passed to AST) */
} EnumItemTmp;

typedef struct EnumList {
  struct EnumItemTmp* a;
  long n, cap;
} EnumList;

static EnumList* el_new(void){ return (EnumList*)calloc(1,sizeof(EnumList)); }
static void el_push(EnumList* l, const char* name, struct AstNode* value){
  if(!l) return;
  if(l->n==l->cap){ long nc=l->cap?l->cap*2:8; struct EnumItemTmp* na=(struct EnumItemTmp*)realloc(l->a,nc*sizeof(*na)); if(!na) return; l->a=na; l->cap=nc; }
  l->a[l->n].name = name ? strdup(name) : NULL;
  l->a[l->n].value = value; /* ownership moves to AST later */
  l->n++;
}
static EnumList* el_merge(EnumList* a, EnumList* b){ if(!a) return b; if(!b) return a; for(long i=0;i<b->n;i++){ el_push(a, b->a[i].name, b->a[i].value); free(b->a[i].name); /* value owned by a now */ } free(b->a); free(b); return a; }
static void el_free_shallow(EnumList* l){ if(!l) return; if(l->a){ for(long i=0;i<l->n;i++){ free(l->a[i].name); /* value freed by owner */ } free(l->a);} free(l); }



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 211 "c.y"
{
  char* sval;
  long  ival;
  struct AstNode* node;
  struct ParamList* plist;
  struct NodeList* nlist;
  struct DStr* dstr;
  struct FSpec* fspec;
  struct SField* sfield;       /* 単一フィールド（使い回さないなら不要） */
  struct SFieldList* sflist;   /* フィールド配列 */
  struct EnumList* elist;      /* enum enumerator list */
}
/* Line 193 of yacc.c.  */
#line 438 "parser.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 451 "parser.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   986

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  280
/* YYNRULES -- Number of states.  */
#define YYNSTATES  542

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   320

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    78,     2,     2,     2,    77,    70,     2,
      80,    81,    75,    73,    87,    74,    84,    76,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    67,    88,
      71,    65,    72,    66,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    82,     2,    83,    69,     2,    86,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    89,    68,    90,    79,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      85
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     8,    11,    12,    14,    16,
      18,    20,    22,    25,    28,    31,    34,    42,    49,    56,
      62,    63,    73,    82,    92,   101,   109,   117,   124,   130,
     138,   145,   153,   160,   173,   185,   199,   212,   218,   223,
     231,   238,   247,   255,   257,   260,   263,   266,   269,   272,
     275,   278,   281,   284,   287,   288,   290,   292,   296,   298,
     302,   306,   309,   311,   314,   316,   318,   320,   322,   324,
     326,   328,   330,   332,   334,   336,   338,   340,   342,   344,
     346,   348,   350,   352,   354,   356,   361,   366,   369,   372,
     374,   376,   378,   381,   384,   388,   393,   399,   405,   410,
     415,   418,   421,   422,   424,   426,   429,   433,   435,   439,
     441,   444,   448,   454,   459,   462,   463,   465,   467,   471,
     473,   477,   480,   481,   483,   485,   488,   491,   495,   497,
     501,   506,   511,   516,   517,   519,   521,   525,   526,   528,
     530,   534,   538,   543,   547,   551,   553,   555,   557,   559,
     561,   565,   566,   568,   570,   573,   578,   584,   592,   599,
     607,   614,   623,   631,   639,   646,   648,   654,   655,   659,
     662,   664,   668,   675,   680,   682,   685,   691,   699,   705,
     711,   719,   729,   733,   736,   739,   743,   744,   746,   748,
     752,   753,   755,   757,   761,   765,   769,   773,   777,   781,
     785,   789,   793,   797,   801,   803,   809,   811,   815,   817,
     821,   823,   827,   829,   833,   835,   839,   841,   845,   849,
     851,   855,   859,   863,   867,   869,   873,   877,   879,   883,
     887,   889,   893,   897,   901,   903,   906,   909,   912,   915,
     918,   921,   924,   929,   936,   937,   940,   943,   946,   949,
     951,   956,   961,   965,   969,   972,   975,   976,   978,   980,
     984,   986,   988,   990,   992,   994,   998,  1000,  1004,  1005,
    1007,  1009,  1011,  1015,  1019,  1023,  1025,  1028,  1031,  1035,
    1041
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      92,     0,    -1,    -1,    92,    96,    -1,    -1,    18,     6,
      -1,    -1,    95,    -1,    75,    -1,    77,    -1,    70,    -1,
      86,    -1,    95,    75,    -1,    95,    77,    -1,    95,    70,
      -1,    95,    86,    -1,   159,   108,   137,    87,   137,   136,
      88,    -1,   108,   137,    87,   137,   136,    88,    -1,   159,
     108,   137,    65,   164,    88,    -1,   108,   137,    65,   164,
      88,    -1,    -1,   159,   108,    94,     3,    80,    98,    81,
      93,   132,    -1,   108,    94,     3,    80,    98,    81,    93,
     132,    -1,   159,   108,    94,     3,    80,    98,    81,    93,
      88,    -1,   108,    94,     3,    80,    98,    81,    93,    88,
      -1,    97,     3,    80,    98,    81,    93,   132,    -1,    97,
       3,    80,    98,    81,    93,    88,    -1,    22,   159,   108,
      94,     3,    88,    -1,    22,   108,    94,     3,    88,    -1,
      22,   159,   108,    94,     3,   110,    88,    -1,    22,   108,
      94,     3,   110,    88,    -1,   159,   108,    94,     3,    65,
     146,    88,    -1,   108,    94,     3,    65,   146,    88,    -1,
      22,   159,   108,    94,    80,    75,     3,    81,    80,   127,
      81,    88,    -1,    22,   108,    94,    80,    75,     3,    81,
      80,   127,    81,    88,    -1,    22,   159,   108,    94,    80,
      75,     3,   110,    81,    80,   127,    81,    88,    -1,    22,
     108,    94,    80,    75,     3,   110,    81,    80,   127,    81,
      88,    -1,   159,   108,    94,     3,    88,    -1,   108,    94,
       3,    88,    -1,   159,   108,    94,     3,    65,   164,    88,
      -1,   108,    94,     3,    65,   164,    88,    -1,   159,   108,
      94,     3,   110,    65,   164,    88,    -1,   108,    94,     3,
     110,    65,   164,    88,    -1,   130,    -1,   111,    88,    -1,
     117,    88,    -1,   108,    94,    -1,    39,    97,    -1,    40,
      97,    -1,    35,    97,    -1,    36,    97,    -1,    37,    97,
      -1,    38,    97,    -1,    41,    97,    -1,    -1,    99,    -1,
     100,    -1,   100,    87,    43,    -1,   101,    -1,   100,    87,
     101,    -1,   159,   108,   137,    -1,   159,   108,    -1,   103,
      -1,   102,   103,    -1,   104,    -1,   108,    -1,   105,    -1,
     106,    -1,    39,    -1,    40,    -1,    35,    -1,    36,    -1,
      37,    -1,    41,    -1,    38,    -1,     9,    -1,    10,    -1,
      11,    -1,    12,    -1,    13,    -1,    14,    -1,    15,    -1,
      16,    -1,    17,    -1,   111,    -1,    19,    89,   112,    90,
      -1,    20,    89,   112,    90,    -1,    19,     3,    -1,    20,
       3,    -1,   117,    -1,     4,    -1,   107,    -1,   108,   107,
      -1,   159,   108,    -1,    82,     6,    83,    -1,   110,    82,
       6,    83,    -1,    19,     3,    89,   112,    90,    -1,    20,
       3,    89,   112,    90,    -1,    19,    89,   112,    90,    -1,
      20,    89,   112,    90,    -1,    19,     3,    -1,    20,     3,
      -1,    -1,   113,    -1,   114,    -1,   113,   114,    -1,   109,
     115,    88,    -1,   116,    -1,   115,    87,   116,    -1,   137,
      -1,    67,   170,    -1,   137,    67,   170,    -1,    21,     3,
      89,   118,    90,    -1,    21,    89,   118,    90,    -1,    21,
       3,    -1,    -1,   119,    -1,   120,    -1,   119,    87,   120,
      -1,     3,    -1,     3,    65,   170,    -1,   122,   124,    -1,
      -1,   123,    -1,    75,    -1,    75,   105,    -1,    75,   123,
      -1,    75,   105,   123,    -1,     3,    -1,    80,   121,    81,
      -1,   124,    82,   145,    83,    -1,   124,    80,    98,    81,
      -1,   124,    80,   125,    81,    -1,    -1,   126,    -1,     3,
      -1,   126,    87,     3,    -1,    -1,   128,    -1,   129,    -1,
     128,    87,   129,    -1,   159,   108,    94,    -1,   159,   108,
      94,     3,    -1,   102,   121,   132,    -1,   108,   121,   132,
      -1,   132,    -1,   139,    -1,   140,    -1,   141,    -1,   142,
      -1,    89,   133,    90,    -1,    -1,   134,    -1,   135,    -1,
     134,   135,    -1,   108,    94,     3,    88,    -1,   159,   108,
      94,     3,    88,    -1,   159,   108,    94,     3,    65,   146,
      88,    -1,   108,    94,     3,    65,   146,    88,    -1,   159,
     108,    94,     3,    65,   164,    88,    -1,   108,    94,     3,
      65,   164,    88,    -1,   159,   108,    94,     3,   110,    65,
     164,    88,    -1,   108,    94,     3,   110,    65,   164,    88,
      -1,   159,   108,   137,    87,   137,   136,    88,    -1,   159,
     108,   137,    65,   164,    88,    -1,   131,    -1,    22,   108,
      94,     3,    88,    -1,    -1,   136,    87,   137,    -1,    94,
     138,    -1,     3,    -1,    80,   137,    81,    -1,    80,   137,
      81,    80,   127,    81,    -1,   138,    82,   145,    83,    -1,
      88,    -1,   144,    88,    -1,    24,    80,   144,    81,   131,
      -1,    24,    80,   144,    81,   131,    25,   131,    -1,    29,
      80,   144,    81,   131,    -1,    26,    80,   144,    81,   131,
      -1,    28,   131,    26,    80,   144,    81,    88,    -1,    27,
      80,   143,    88,   143,    88,   143,    81,   131,    -1,    23,
     143,    88,    -1,    32,    88,    -1,    33,    88,    -1,    34,
       3,    88,    -1,    -1,   144,    -1,   146,    -1,   144,    87,
     146,    -1,    -1,   146,    -1,   147,    -1,   158,    65,   146,
      -1,   158,    55,   146,    -1,   158,    56,   146,    -1,   158,
      57,   146,    -1,   158,    58,   146,    -1,   158,    59,   146,
      -1,   158,    60,   146,    -1,   158,    61,   146,    -1,   158,
      62,   146,    -1,   158,    63,   146,    -1,   158,    64,   146,
      -1,   148,    -1,   148,    66,   144,    67,   147,    -1,   149,
      -1,   148,    54,   149,    -1,   150,    -1,   149,    53,   150,
      -1,   151,    -1,   150,    68,   151,    -1,   152,    -1,   151,
      69,   152,    -1,   153,    -1,   152,    70,   153,    -1,   154,
      -1,   153,    51,   154,    -1,   153,    52,   154,    -1,   155,
      -1,   154,    71,   155,    -1,   154,    72,   155,    -1,   154,
      49,   155,    -1,   154,    50,   155,    -1,   156,    -1,   155,
      47,   156,    -1,   155,    48,   156,    -1,   157,    -1,   156,
      73,   157,    -1,   156,    74,   157,    -1,   158,    -1,   157,
      75,   158,    -1,   157,    76,   158,    -1,   157,    77,   158,
      -1,   160,    -1,    45,   158,    -1,    46,   158,    -1,    73,
     158,    -1,    74,   158,    -1,    78,   158,    -1,    79,   158,
      -1,    42,   158,    -1,    42,    80,   108,    81,    -1,    80,
     159,   108,    94,    81,   158,    -1,    -1,   159,    35,    -1,
     159,    36,    -1,   159,    37,    -1,   159,    41,    -1,   163,
      -1,   160,    80,   161,    81,    -1,   160,    82,   144,    83,
      -1,   160,    84,     3,    -1,   160,    44,     3,    -1,   160,
      45,    -1,   160,    46,    -1,    -1,   162,    -1,   146,    -1,
     162,    87,   146,    -1,     3,    -1,     6,    -1,     7,    -1,
       8,    -1,     5,    -1,    80,   144,    81,    -1,   146,    -1,
      89,   165,    90,    -1,    -1,   166,    -1,   164,    -1,   167,
      -1,   166,    87,   164,    -1,   166,    87,   167,    -1,   168,
      65,   164,    -1,   169,    -1,   168,   169,    -1,    84,     3,
      -1,    82,   170,    83,    -1,    82,   170,    43,   170,    83,
      -1,   147,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   294,   294,   296,   301,   302,   308,   309,   313,   314,
     315,   316,   317,   324,   331,   338,   348,   359,   369,   379,
     388,   389,   409,   427,   447,   465,   477,   489,   502,   513,
     527,   539,   550,   560,   573,   584,   598,   611,   622,   632,
     643,   653,   664,   674,   675,   676,   682,   683,   684,   685,
     686,   687,   688,   689,   694,   695,   699,   700,   704,   705,
     709,   722,   757,   758,   762,   763,   764,   765,   769,   770,
     774,   775,   776,   777,   781,   787,   788,   789,   790,   791,
     792,   793,   794,   795,   796,   797,   815,   833,   834,   835,
     836,   842,   843,   854,   866,   873,   884,   906,   926,   927,
     928,   929,   933,   934,   938,   939,   951,   973,   980,   990,
     997,  1008,  1020,  1029,  1037,  1041,  1042,  1046,  1047,  1051,
    1052,  1057,  1060,  1062,  1066,  1067,  1068,  1069,  1073,  1074,
    1075,  1076,  1077,  1080,  1082,  1086,  1087,  1092,  1093,  1103,
    1104,  1114,  1122,  1136,  1137,  1142,  1143,  1144,  1145,  1146,
    1150,  1154,  1155,  1159,  1160,  1164,  1172,  1181,  1190,  1198,
    1207,  1215,  1224,  1232,  1244,  1254,  1256,  1270,  1271,  1276,
    1280,  1281,  1282,  1283,  1289,  1290,  1294,  1295,  1296,  1300,
    1301,  1302,  1306,  1307,  1308,  1309,  1314,  1315,  1319,  1320,
    1324,  1325,  1329,  1330,  1331,  1332,  1333,  1334,  1335,  1336,
    1337,  1338,  1339,  1340,  1344,  1345,  1349,  1350,  1354,  1355,
    1359,  1360,  1364,  1365,  1369,  1370,  1374,  1375,  1376,  1380,
    1381,  1382,  1383,  1384,  1388,  1389,  1390,  1394,  1395,  1396,
    1400,  1401,  1402,  1403,  1407,  1408,  1409,  1410,  1411,  1412,
    1413,  1414,  1415,  1416,  1433,  1434,  1435,  1436,  1437,  1441,
    1442,  1446,  1447,  1448,  1449,  1450,  1454,  1455,  1459,  1460,
    1464,  1465,  1466,  1467,  1468,  1469,  1474,  1475,  1479,  1480,
    1484,  1485,  1486,  1487,  1491,  1496,  1497,  1501,  1502,  1503,
    1507
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "TYPE_NAME",
  "STRING_LITERAL", "INTEGER_CONSTANT", "FLOAT_CONSTANT", "CHAR_CONSTANT",
  "KW_VOID", "KW_CHAR", "KW_SHORT", "KW_INT", "KW_LONG", "KW_SIGNED",
  "KW_UNSIGNED", "KW_FLOAT", "KW_DOUBLE", "KW_VERSION", "KW_STRUCT",
  "KW_UNION", "KW_ENUM", "KW_TYPEDEF", "KW_RETURN", "KW_IF", "KW_ELSE",
  "KW_WHILE", "KW_FOR", "KW_DO", "KW_SWITCH", "KW_CASE", "KW_DEFAULT",
  "KW_BREAK", "KW_CONTINUE", "KW_GOTO", "KW_CONST", "KW_VOLATILE",
  "KW_RESTRICT", "KW_INLINE", "KW_EXTERN", "KW_STATIC", "KW_UNIQ",
  "KW_SIZEOF", "ELLIPSIS", "ARROW", "INC", "DEC", "LSHIFT", "RSHIFT", "LE",
  "GE", "EQ", "NE", "LOGAND", "LOGOR", "ADD_ASSIGN", "SUB_ASSIGN",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "AND_ASSIGN", "OR_ASSIGN",
  "XOR_ASSIGN", "LSHIFT_ASSIGN", "RSHIFT_ASSIGN", "'='", "'?'", "':'",
  "'|'", "'^'", "'&'", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'",
  "'!'", "'~'", "'('", "')'", "'['", "']'", "'.'", "PREFER_EMPTY", "'`'",
  "','", "';'", "'{'", "'}'", "$accept", "translation_unit", "version_opt",
  "star_list_opt", "star_list", "external_declaration", "func_decl_specs",
  "parameter_type_list_opt", "parameter_type_list", "parameter_list",
  "parameter_declaration", "declaration_specifiers",
  "declaration_specifier", "storage_class_specifier", "type_qualifier",
  "function_specifier", "type_unit", "type_specifier",
  "specifier_qualifier_list", "array_dims", "struct_or_union_specifier",
  "struct_declaration_list_opt", "struct_declaration_list",
  "struct_declaration", "struct_declarator_list", "struct_declarator",
  "enum_specifier", "enumerator_list_opt", "enumerator_list", "enumerator",
  "declarator", "pointer_opt", "pointer", "direct_declarator",
  "identifier_list_opt", "identifier_list", "fp_param_list_opt",
  "fp_param_list", "fp_param", "function_definition", "statement",
  "compound_statement", "block_item_list_opt", "block_item_list",
  "block_item", "sdecl_list", "sdecl", "sdir", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement",
  "expression_opt", "expression", "assignment_expression_opt",
  "assignment_expression", "conditional_expression",
  "logical_or_expression", "logical_and_expression",
  "inclusive_or_expression", "exclusive_or_expression", "and_expression",
  "equality_expression", "relational_expression", "shift_expression",
  "additive_expression", "multiplicative_expression", "unary_expression",
  "type_qualifier_seq_opt", "postfix_expression",
  "argument_expression_list_opt", "argument_expression_list",
  "primary_expression", "initializer", "initializer_list_opt",
  "initializer_list", "designated_initializer", "designation",
  "designator", "constant_expression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,    61,    63,    58,   124,    94,
      38,    60,    62,    43,    45,    42,    47,    37,    33,   126,
      40,    41,    91,    93,    46,   320,    96,    44,    59,   123,
     125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    91,    92,    92,    93,    93,    94,    94,    95,    95,
      95,    95,    95,    95,    95,    95,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    97,    97,    97,    97,
      97,    97,    97,    97,    98,    98,    99,    99,   100,   100,
     101,   101,   102,   102,   103,   103,   103,   103,   104,   104,
     105,   105,   105,   105,   106,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   108,   108,   109,   110,   110,   111,   111,   111,   111,
     111,   111,   112,   112,   113,   113,   114,   115,   115,   116,
     116,   116,   117,   117,   117,   118,   118,   119,   119,   120,
     120,   121,   122,   122,   123,   123,   123,   123,   124,   124,
     124,   124,   124,   125,   125,   126,   126,   127,   127,   128,
     128,   129,   129,   130,   130,   131,   131,   131,   131,   131,
     132,   133,   133,   134,   134,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   136,   136,   137,
     138,   138,   138,   138,   139,   139,   140,   140,   140,   141,
     141,   141,   142,   142,   142,   142,   143,   143,   144,   144,
     145,   145,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   147,   147,   148,   148,   149,   149,
     150,   150,   151,   151,   152,   152,   153,   153,   153,   154,
     154,   154,   154,   154,   155,   155,   155,   156,   156,   156,
     157,   157,   157,   157,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   159,   159,   159,   159,   159,   160,
     160,   160,   160,   160,   160,   160,   161,   161,   162,   162,
     163,   163,   163,   163,   163,   163,   164,   164,   165,   165,
     166,   166,   166,   166,   167,   168,   168,   169,   169,   169,
     170
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     0,     2,     0,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     7,     6,     6,     5,
       0,     9,     8,     9,     8,     7,     7,     6,     5,     7,
       6,     7,     6,    12,    11,    13,    12,     5,     4,     7,
       6,     8,     7,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     0,     1,     1,     3,     1,     3,
       3,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     2,     2,     1,
       1,     1,     2,     2,     3,     4,     5,     5,     4,     4,
       2,     2,     0,     1,     1,     2,     3,     1,     3,     1,
       2,     3,     5,     4,     2,     0,     1,     1,     3,     1,
       3,     2,     0,     1,     1,     2,     2,     3,     1,     3,
       4,     4,     4,     0,     1,     1,     3,     0,     1,     1,
       3,     3,     4,     3,     3,     1,     1,     1,     1,     1,
       3,     0,     1,     1,     2,     4,     5,     7,     6,     7,
       6,     8,     7,     7,     6,     1,     5,     0,     3,     2,
       1,     3,     6,     4,     1,     2,     5,     7,     5,     5,
       7,     9,     3,     2,     2,     3,     0,     1,     1,     3,
       0,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     5,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     1,     2,     2,     2,     2,     2,
       2,     2,     4,     6,     0,     2,     2,     2,     2,     1,
       4,     4,     3,     3,     2,     2,     0,     1,     1,     3,
       1,     1,     1,     1,     1,     3,     1,     3,     0,     1,
       1,     1,     3,     3,     3,     1,     2,     2,     3,     5,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,    90,    75,    76,    77,    78,    79,    80,
      81,    82,    83,     0,     0,     0,   244,    70,    71,    72,
      74,    68,    69,    73,     3,     0,   122,    62,    64,    66,
      67,    91,    65,    84,    89,    43,     0,    87,   244,    88,
     244,   114,   115,     6,    84,    89,     0,     0,     0,     0,
       0,     0,     0,     0,    49,     6,    50,    51,    52,    47,
      48,    53,     0,    70,    71,    72,    74,    68,    69,    73,
     124,    63,    65,     0,     0,   123,    10,     8,     9,    11,
       0,     7,    92,     0,     0,    44,    45,   245,   246,   247,
     248,     6,   244,     6,     0,   244,   104,     0,   244,     0,
     115,   119,     0,   116,   117,     8,     0,     6,    46,   244,
     125,   126,   244,   143,   128,   122,   121,   170,     6,   169,
      14,    12,    13,    15,   144,     0,     6,     0,     0,     0,
       0,     0,     0,   107,   109,    85,   105,    93,     0,    86,
       0,     0,   113,     0,     0,     0,     0,     0,    55,    56,
      58,     0,   127,   260,   264,   261,   262,   263,     0,   186,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   244,   174,     6,   165,   145,
       0,   244,   153,   146,   147,   148,   149,     0,   188,   192,
     204,   206,   208,   210,   212,   214,   216,   219,   224,   227,
     230,     0,   234,   249,     0,   244,   190,     0,   244,     0,
      38,     0,     0,   190,   268,   266,     0,   167,   170,     0,
       6,    96,   280,   230,   110,   170,     6,   106,     0,    97,
     112,   120,   118,    28,     0,     0,     0,     0,     4,   244,
       6,     6,     0,   187,     0,     0,   186,     0,     0,   183,
     184,     0,   244,   241,   235,   236,   237,   238,   239,   240,
       0,     0,     0,   150,   154,     0,   175,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     6,     0,   254,
     255,   256,     0,     0,   129,   135,     0,     0,   134,     0,
     191,     0,     0,     0,     0,     0,     0,   171,     0,     0,
       0,   270,     0,   269,   271,     0,   275,    19,     0,     0,
     244,    37,     0,     0,   167,   108,   111,    30,     0,    27,
       0,     0,     0,     0,    57,    59,    60,     0,   182,     0,
       0,     0,     0,     0,   185,     0,   265,     6,     0,   189,
     207,     0,   209,   211,   213,   215,   217,   218,   222,   223,
     220,   221,   225,   226,   228,   229,   231,   232,   233,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   193,
       0,     0,   253,   258,     0,   257,     0,   252,   131,   132,
       0,   130,    32,    40,     4,    94,     0,     0,   244,   173,
       0,   277,   267,     0,     0,   276,     6,    17,     0,     0,
       0,     0,    18,     0,     0,     0,    29,     0,     5,    26,
      25,     0,     0,     0,   186,     0,     0,   242,     0,     0,
     155,     0,     0,   170,     0,     6,   250,     0,   251,   136,
       0,    42,    95,     0,   138,   139,     0,     0,   278,   272,
     273,   274,   168,    31,    39,     4,     0,    16,   244,     0,
       0,     0,   166,   176,   179,     0,     0,   178,     0,     0,
       0,     0,   205,     0,   156,     0,     0,   167,   259,    24,
      22,   172,   244,     6,     0,     0,    41,     0,   244,   244,
       0,     0,   186,     0,   243,   158,   160,     0,     0,     0,
       0,   164,     0,   140,   141,   279,    23,    21,     0,     0,
       0,   244,   177,     0,   180,   162,   157,   159,     0,   163,
     142,    34,     0,     0,     0,     0,   161,    36,    33,     0,
     181,    35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   343,   131,    81,    24,    54,   147,   148,   149,
     150,    26,    27,    28,    29,    30,    31,    55,    93,   211,
      44,    94,    95,    96,   132,   133,    45,   102,   103,   104,
      73,    74,    75,   116,   307,   308,   453,   454,   455,    35,
     178,   179,   180,   181,   182,   328,   134,   119,   183,   184,
     185,   186,   242,   187,   309,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   456,   202,
     394,   395,   203,   216,   322,   323,   324,   325,   326,   224
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -434
static const yytype_int16 yypact[] =
{
    -434,   855,  -434,  -434,  -434,  -434,  -434,  -434,  -434,  -434,
    -434,  -434,  -434,     6,    11,    12,   965,   893,   893,   893,
     893,   893,   893,   893,  -434,    30,   803,  -434,  -434,  -434,
    -434,  -434,   509,   -36,    -7,  -434,   931,   127,   -33,   153,
     -33,   -22,    81,   671,  -434,  -434,   931,   893,   893,   893,
     893,   893,   893,   893,  -434,   671,  -434,  -434,  -434,  -434,
    -434,  -434,    24,  -434,  -434,  -434,  -434,  -434,  -434,  -434,
      33,  -434,   965,    62,     7,  -434,  -434,   283,  -434,  -434,
      26,   170,  -434,    62,   -10,  -434,  -434,  -434,  -434,  -434,
    -434,   671,   -33,    72,    29,    54,  -434,   931,   -33,    66,
      81,    95,    77,   105,  -434,  -434,    27,   671,  -434,   114,
     143,  -434,   460,  -434,  -434,   143,    55,    53,   173,   122,
    -434,  -434,  -434,  -434,  -434,   369,   173,    35,    44,   161,
     705,    47,   193,  -434,   177,   180,  -434,   965,   164,   214,
     168,   705,  -434,    81,   103,   232,    48,   229,  -434,   225,
    -434,   931,  -434,  -434,  -434,  -434,  -434,  -434,   965,   705,
     237,   241,   249,   626,   251,   245,   254,   342,   757,   705,
     705,   705,   705,   705,   705,   705,  -434,   671,  -434,  -434,
     266,   548,  -434,  -434,  -434,  -434,  -434,   264,  -434,  -434,
      17,   306,   297,   298,   299,   309,   115,   315,   310,   272,
     376,   931,   117,  -434,   290,     4,   705,   369,   114,   373,
    -434,   -19,   304,   705,   308,  -434,   303,  -434,   108,   369,
     173,  -434,  -434,  -434,  -434,  -434,    72,  -434,   705,  -434,
    -434,  -434,  -434,  -434,   129,   407,   167,   341,   408,   386,
     592,   671,   356,   365,   705,   705,   705,   427,   705,  -434,
    -434,   366,   713,  -434,  -434,  -434,  -434,  -434,  -434,  -434,
       5,   931,   452,  -434,  -434,   705,  -434,   705,   705,   705,
     705,   705,   705,   705,   705,   705,   705,   705,   705,   705,
     705,   705,   705,   705,   705,   705,   705,   705,   705,   705,
     705,   705,   705,   705,   705,   705,   705,   671,   453,  -434,
    -434,   705,   705,   456,  -434,  -434,   379,   397,   398,   413,
    -434,   402,   403,   416,   415,   369,   493,   420,   418,   705,
     500,  -434,   414,   421,  -434,    71,  -434,  -434,   311,   369,
     114,  -434,   118,   419,  -434,  -434,  -434,  -434,   314,  -434,
     179,   506,   504,   312,  -434,  -434,  -434,   508,  -434,   211,
     218,   426,   435,   222,  -434,   274,  -434,   671,    -9,  -434,
     306,   -39,   297,   298,   299,   309,   115,   115,   315,   315,
     315,   315,   310,   310,   272,   272,  -434,  -434,  -434,  -434,
    -434,  -434,  -434,  -434,  -434,  -434,  -434,  -434,  -434,  -434,
      50,    51,  -434,  -434,   436,   429,   -38,  -434,  -434,  -434,
     524,  -434,  -434,  -434,   408,  -434,   443,   449,   454,  -434,
     -21,  -434,  -434,   308,   369,  -434,   173,  -434,   448,   455,
     461,   369,  -434,   318,   457,   321,  -434,   326,  -434,  -434,
    -434,   458,   626,   626,   705,   705,   626,  -434,   463,   369,
    -434,   124,   705,   459,   369,   173,  -434,   705,  -434,  -434,
     324,  -434,  -434,   464,   479,  -434,   931,   705,  -434,  -434,
    -434,  -434,  -434,  -434,  -434,   408,   485,  -434,   454,   498,
     503,   338,  -434,   516,  -434,   497,   247,  -434,   705,   499,
     510,   369,  -434,   369,  -434,   125,   511,  -434,  -434,  -434,
    -434,  -434,  -434,   671,   505,   333,  -434,   519,   454,   454,
     512,   626,   705,   522,  -434,  -434,  -434,   526,   527,   528,
     369,  -434,   336,  -434,   588,  -434,  -434,  -434,   529,   537,
     538,   454,  -434,   539,  -434,  -434,  -434,  -434,   535,  -434,
    -434,  -434,   536,   542,   544,   626,  -434,  -434,  -434,   547,
    -434,  -434
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -434,  -434,  -385,   -31,  -434,  -434,   831,  -187,  -434,  -434,
     358,  -434,   613,  -434,   -34,  -434,   -32,     1,  -434,   -86,
     639,   -20,  -434,   546,  -434,   417,   641,   545,  -434,   501,
       2,  -434,   -16,  -434,  -434,  -434,  -433,  -434,   155,  -434,
    -157,   -70,  -434,  -434,   465,  -330,   -27,  -434,  -434,  -434,
    -434,  -434,  -220,  -134,   438,  -117,   -99,  -434,   381,   387,
     391,   392,   385,   154,    61,   166,   169,   -48,   165,  -434,
    -434,  -434,  -434,  -175,  -434,  -434,   252,  -434,   339,  -125
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -153
static const yytype_int16 yytable[] =
{
      82,    80,    32,   113,   423,    84,   247,   305,   215,    37,
     114,    82,   106,   124,    39,    41,   231,    43,   306,   450,
      99,   313,   457,    82,   108,   243,   351,    72,   442,   117,
     144,   222,   312,    62,    83,   497,   110,    91,   218,   321,
      82,   260,   222,   110,   333,   448,   315,   107,   265,   265,
     225,   236,    85,   443,   111,   125,   439,  -102,   234,    82,
     127,   111,   458,   316,   128,   519,   520,   100,    63,    64,
      65,   267,   129,   209,    69,    82,   146,   126,   138,   440,
     495,    86,   223,   268,   101,   -54,   356,   115,   534,   310,
     311,   212,   265,   223,   152,    38,   310,   215,   137,   217,
      40,    42,   215,   336,   109,    82,   118,   145,    70,   219,
     349,   350,   243,   177,   353,   118,   444,   204,   260,   135,
     253,   254,   255,   256,   257,   258,   259,   118,   237,   222,
     118,   220,   332,   208,   361,   205,   414,   206,   445,   130,
     406,   210,    76,   420,  -103,    82,   262,   105,   359,    78,
     340,   112,   240,   319,   419,   320,   139,   512,    79,   241,
     141,   298,   299,   300,   275,   276,    36,   142,   396,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     223,    46,   177,   421,   393,   209,   277,   278,   330,   481,
     510,   233,   143,   334,   410,   -54,   331,   301,   215,   302,
     316,   303,   297,    97,   213,    97,   316,   316,    82,    82,
     347,   316,   418,   346,   475,  -100,    92,   337,    70,   223,
     222,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   376,   377,   378,   459,   461,
     120,  -101,    98,    76,   228,   121,   466,   122,   105,   209,
      78,   221,   425,   355,   229,   339,   123,    97,   230,    79,
      97,   316,   357,    97,   480,    82,   390,   426,   -98,   486,
     391,   223,   441,   430,   151,   473,   474,   201,     3,   477,
     226,   227,   523,     4,     5,     6,     7,     8,     9,    10,
      11,    12,   432,    13,    14,    15,   215,   215,   265,   433,
     243,   476,   -99,   436,   215,   265,   507,   235,   509,   265,
     238,   153,   239,   154,   155,   156,   157,   244,    63,    64,
      65,   245,   479,    82,    69,    82,   438,   215,   503,   246,
     488,   248,   494,   249,   265,   528,   368,   369,   370,   371,
     261,   471,   250,   482,   522,   251,   201,   283,   284,   285,
     168,   265,   266,   169,   170,   437,   263,   485,   222,   269,
     273,   274,   279,   280,   215,   270,   508,   271,   243,   272,
     151,   304,   153,   151,   154,   155,   156,   157,   540,   314,
     490,   171,   172,   281,   282,   317,   173,   174,   175,   462,
     319,   327,   320,   215,   223,   424,   209,   214,   416,   417,
     429,   112,   469,   316,   151,   416,   467,   470,   209,   223,
     338,   168,   489,   112,   169,   170,   341,   261,   487,   500,
     316,   516,   112,   416,   529,   517,   342,   366,   367,   344,
     504,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   171,   172,   348,   372,   373,   173,   174,   175,
     374,   375,   265,   352,   354,   358,   392,   493,   214,   397,
     398,    82,   514,   153,     3,   154,   155,   156,   157,     4,
       5,     6,     7,     8,     9,    10,    11,    12,   399,    13,
      14,    15,   158,   159,   160,   400,   161,   162,   163,   164,
     402,   403,   165,   166,   167,   151,   401,   404,   405,   407,
     408,   409,   168,   411,   412,   169,   170,   422,   413,   427,
     428,   431,    -6,     3,   434,   435,   447,   446,     4,     5,
       6,     7,     8,     9,    10,    11,    12,   449,    13,    14,
      15,   451,   452,   171,   172,  -137,   463,   468,   173,   174,
     175,   501,   465,   464,   478,   491,   472,   484,   176,   112,
    -151,   153,     3,   154,   155,   156,   157,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   492,    13,    14,    15,
     158,   159,   160,   496,   161,   162,   163,   164,   498,    76,
     165,   166,   167,   499,    77,   502,    78,   505,   515,    -6,
     168,   530,   521,   169,   170,    79,     3,   345,   506,   511,
     518,     4,     5,     6,     7,     8,     9,    10,    11,    12,
     524,    13,    14,    15,   525,   526,   527,   531,   532,   533,
     535,   171,   172,   536,   537,   539,   173,   174,   175,   153,
     538,   154,   155,   156,   157,   541,   176,   112,  -152,    71,
      33,   136,    34,   335,   232,   140,   264,   513,   360,   159,
     160,   318,   161,   162,   163,   164,   362,   365,   165,   166,
     167,   363,    76,   364,   415,   460,     0,   105,   168,    78,
       0,   169,   170,   -61,     0,     3,     0,     0,    79,   -61,
       4,     5,     6,     7,     8,     9,    10,    11,    12,     0,
      13,    14,    15,     0,     0,     0,     0,     0,     0,   171,
     172,     0,     0,     0,   173,   174,   175,     0,   153,     0,
     154,   155,   156,   157,   176,   112,   153,     3,   154,   155,
     156,   157,     4,     5,     6,     7,     8,     9,    10,    11,
      12,     0,    13,    14,    15,     0,     0,     0,     0,     0,
       0,    76,     0,     0,     0,     0,   105,   168,    78,     0,
     169,   170,     0,     0,     0,   168,     0,    79,   169,   170,
     153,     0,   154,   155,   156,   157,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   171,   172,
       0,     0,     0,   173,   174,   175,   171,   172,     0,     0,
       0,   173,   174,   175,     0,     0,     0,     0,     0,   168,
       0,     0,   169,   170,     0,     0,     0,     3,     0,     0,
       0,     0,     4,     5,     6,     7,     8,     9,    10,    11,
      12,     0,    13,    14,    15,     0,     0,     0,     0,     0,
     171,   172,    25,     0,     0,   173,   174,   252,    63,    64,
      65,    66,    67,    68,    69,     0,     0,     0,     0,    56,
      57,    58,    59,    60,    61,     2,     0,     0,     0,     3,
       0,     0,     0,     0,     4,     5,     6,     7,     8,     9,
      10,    11,    12,     0,    13,    14,    15,    16,    70,    56,
      57,    58,    59,    60,    61,     0,     0,     0,     0,     0,
      17,    18,    19,    20,    21,    22,    23,     3,     0,     0,
       0,     0,     4,     5,     6,     7,     8,     9,    10,    11,
      12,     0,    13,    14,    15,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,    48,
      49,    50,    51,    52,    53,     3,     0,     0,     0,     0,
       4,     5,     6,     7,     8,     9,    10,    11,    12,     0,
      13,    14,    15,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,    88,    89,     3,
       0,     0,    90,     0,     4,     5,     6,     7,     8,     9,
      10,    11,    12,     0,    13,    14,    15
};

static const yytype_int16 yycheck[] =
{
      32,    32,     1,    73,   334,    32,   163,     3,   125,     3,
       3,    43,    43,    83,     3,     3,   141,    16,   205,   404,
      40,   208,    43,    55,    55,   159,   246,    26,    67,     3,
       3,   130,   207,     3,    32,   468,    70,    36,     3,   214,
      72,   175,   141,    77,   219,    83,    65,    46,    87,    87,
       3,     3,    88,     3,    70,    65,    65,    90,   144,    91,
      91,    77,    83,    82,    91,   498,   499,    89,    35,    36,
      37,    54,    92,    82,    41,   107,   107,    87,    98,    88,
     465,    88,   130,    66,     3,    81,    81,    80,   521,   206,
     207,   118,    87,   141,   110,    89,   213,   214,    97,   126,
      89,    89,   219,   228,    80,   137,    80,    80,    75,    65,
     244,   245,   246,   112,   248,    80,    65,   115,   252,    90,
     168,   169,   170,   171,   172,   173,   174,    80,    80,   228,
      80,    87,   218,    80,   268,    80,    65,    82,    87,    67,
     315,    88,    70,   330,    90,   177,   177,    75,   265,    77,
     236,    89,   151,    82,   329,    84,    90,   487,    86,   158,
      65,    44,    45,    46,    49,    50,     1,    90,   302,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     228,    16,   181,    65,   301,    82,    71,    72,    80,    65,
      65,    88,    87,   220,   319,    81,    88,    80,   315,    82,
      82,    84,   201,    38,    82,    40,    82,    82,   240,   241,
     241,    82,   329,   240,   434,    88,    89,    88,    75,   267,
     319,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   413,   414,
      70,    88,    89,    70,    67,    75,   421,    77,    75,    82,
      77,    90,   338,   252,    90,    88,    86,    92,    90,    86,
      95,    82,   261,    98,   439,   297,   297,    88,    88,   444,
     297,   319,   358,   343,   109,   432,   433,   112,     4,   436,
      87,    88,   502,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    81,    19,    20,    21,   413,   414,    87,    81,
     434,   435,    88,    81,   421,    87,   481,    75,   483,    87,
      81,     3,    87,     5,     6,     7,     8,    80,    35,    36,
      37,    80,   439,   355,    41,   357,   357,   444,    81,    80,
     447,    80,   457,    88,    87,   510,   275,   276,   277,   278,
     175,   427,    88,   442,   501,     3,   181,    75,    76,    77,
      42,    87,    88,    45,    46,    81,    90,   443,   457,    53,
      51,    52,    47,    48,   481,    68,   483,    69,   502,    70,
     205,    81,     3,   208,     5,     6,     7,     8,   535,     6,
     450,    73,    74,    73,    74,    81,    78,    79,    80,   416,
      82,    88,    84,   510,   442,    81,    82,    89,    87,    88,
      88,    89,    81,    82,   239,    87,    88,    81,    82,   457,
       3,    42,    88,    89,    45,    46,    75,   252,   445,    81,
      82,    88,    89,    87,    88,   495,    18,   273,   274,    43,
     478,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    73,    74,    88,   279,   280,    78,    79,    80,
     281,   282,    87,    26,    88,     3,     3,   456,    89,     3,
      81,   493,   493,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    81,    19,
      20,    21,    22,    23,    24,    87,    26,    27,    28,    29,
      88,    88,    32,    33,    34,   330,    83,    81,    83,     6,
      80,    83,    42,     3,    90,    45,    46,    88,    87,     3,
       6,     3,     3,     4,    88,    80,    87,    81,     9,    10,
      11,    12,    13,    14,    15,    16,    17,     3,    19,    20,
      21,    88,    83,    73,    74,    81,    88,    80,    78,    79,
      80,    25,    81,    88,    81,    81,    88,    88,    88,    89,
      90,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    87,    19,    20,    21,
      22,    23,    24,    88,    26,    27,    28,    29,    80,    70,
      32,    33,    34,    80,    75,    88,    77,    88,    83,    80,
      42,     3,    80,    45,    46,    86,     4,   239,    88,    88,
      81,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      88,    19,    20,    21,    88,    88,    88,    88,    81,    81,
      81,    73,    74,    88,    88,    81,    78,    79,    80,     3,
      88,     5,     6,     7,     8,    88,    88,    89,    90,    26,
       1,    95,     1,   226,   143,   100,   181,   492,   267,    23,
      24,   213,    26,    27,    28,    29,   269,   272,    32,    33,
      34,   270,    70,   271,   325,   413,    -1,    75,    42,    77,
      -1,    45,    46,    81,    -1,     4,    -1,    -1,    86,    87,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    -1,    -1,    -1,    78,    79,    80,    -1,     3,    -1,
       5,     6,     7,     8,    88,    89,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    -1,    -1,    -1,    75,    42,    77,    -1,
      45,    46,    -1,    -1,    -1,    42,    -1,    86,    45,    46,
       3,    -1,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,
      -1,    -1,    -1,    78,    79,    80,    73,    74,    -1,    -1,
      -1,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    45,    46,    -1,    -1,    -1,     4,    -1,    -1,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      73,    74,     1,    -1,    -1,    78,    79,    80,    35,    36,
      37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    23,     0,    -1,    -1,    -1,     4,
      -1,    -1,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    75,    48,
      49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    40,    41,     4,    -1,    -1,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,    39,    40,    41,     4,    -1,    -1,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,     4,
      -1,    -1,    41,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    92,     0,     4,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    19,    20,    21,    22,    35,    36,    37,
      38,    39,    40,    41,    96,    97,   102,   103,   104,   105,
     106,   107,   108,   111,   117,   130,   159,     3,    89,     3,
      89,     3,    89,   108,   111,   117,   159,    35,    36,    37,
      38,    39,    40,    41,    97,   108,    97,    97,    97,    97,
      97,    97,     3,    35,    36,    37,    38,    39,    40,    41,
      75,   103,   108,   121,   122,   123,    70,    75,    77,    86,
      94,    95,   107,   121,   137,    88,    88,    35,    36,    37,
      41,   108,    89,   109,   112,   113,   114,   159,    89,   112,
      89,     3,   118,   119,   120,    75,    94,   108,    94,    80,
     105,   123,    89,   132,     3,    80,   124,     3,    80,   138,
      70,    75,    77,    86,   132,    65,    87,    94,   137,   112,
      67,    94,   115,   116,   137,    90,   114,   108,   112,    90,
     118,    65,    90,    87,     3,    80,    94,    98,    99,   100,
     101,   159,   123,     3,     5,     6,     7,     8,    22,    23,
      24,    26,    27,    28,    29,    32,    33,    34,    42,    45,
      46,    73,    74,    78,    79,    80,    88,   108,   131,   132,
     133,   134,   135,   139,   140,   141,   142,   144,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   163,   121,    80,    82,    65,    80,    82,
      88,   110,   137,    82,    89,   146,   164,   137,     3,    65,
      87,    90,   147,   158,   170,     3,    87,    88,    67,    90,
      90,   170,   120,    88,   110,    75,     3,    80,    81,    87,
     108,   108,   143,   144,    80,    80,    80,   131,    80,    88,
      88,     3,    80,   158,   158,   158,   158,   158,   158,   158,
     144,   159,    94,    90,   135,    87,    88,    54,    66,    53,
      68,    69,    70,    51,    52,    49,    50,    71,    72,    47,
      48,    73,    74,    75,    76,    77,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,   108,    44,    45,
      46,    80,    82,    84,    81,     3,    98,   125,   126,   145,
     146,   146,   164,    98,     6,    65,    82,    81,   145,    82,
      84,   164,   165,   166,   167,   168,   169,    88,   136,    65,
      80,    88,   110,   164,   137,   116,   170,    88,     3,    88,
     110,    75,    18,    93,    43,   101,   137,    94,    88,   144,
     144,   143,    26,   144,    88,   108,    81,   108,     3,   146,
     149,   144,   150,   151,   152,   153,   154,   154,   155,   155,
     155,   155,   156,   156,   157,   157,   158,   158,   158,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
      94,   137,     3,   146,   161,   162,   144,     3,    81,    81,
      87,    83,    88,    88,    81,    83,   164,     6,    80,    83,
     170,     3,    90,    87,    65,   169,    87,    88,   146,   164,
      98,    65,    88,   136,    81,   110,    88,     3,     6,    88,
     132,     3,    81,    81,    88,    80,    81,    81,    94,    65,
      88,   110,    67,     3,    65,    87,    81,    87,    83,     3,
      93,    88,    83,   127,   128,   129,   159,    43,    83,   164,
     167,   164,   137,    88,    88,    81,   164,    88,    80,    81,
      81,   110,    88,   131,   131,   143,   144,   131,    81,   146,
     164,    65,   147,    65,    88,   110,   164,   137,   146,    88,
     132,    81,    87,   108,   170,    93,    88,   127,    80,    80,
      81,    25,    88,    81,   158,    88,    88,   164,   146,   164,
      65,    88,   136,   129,    94,    83,    88,   132,    81,   127,
     127,    80,   131,   143,    88,    88,    88,    88,   164,    88,
       3,    88,    81,    81,   127,    81,    88,    88,    88,    81,
     131,    88
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {
      case 3: /* "IDENTIFIER" */
#line 208 "c.y"
	{ free((yyvaluep->sval)); };
#line 1968 "parser.c"
	break;
      case 5: /* "STRING_LITERAL" */
#line 208 "c.y"
	{ free((yyvaluep->sval)); };
#line 1973 "parser.c"
	break;
      case 6: /* "INTEGER_CONSTANT" */
#line 208 "c.y"
	{ free((yyvaluep->sval)); };
#line 1978 "parser.c"
	break;
      case 7: /* "FLOAT_CONSTANT" */
#line 208 "c.y"
	{ free((yyvaluep->sval)); };
#line 1983 "parser.c"
	break;
      case 8: /* "CHAR_CONSTANT" */
#line 208 "c.y"
	{ free((yyvaluep->sval)); };
#line 1988 "parser.c"
	break;
      case 94: /* "star_list_opt" */
#line 208 "c.y"
	{ free((yyvaluep->sval)); };
#line 1993 "parser.c"
	break;
      case 95: /* "star_list" */
#line 208 "c.y"
	{ free((yyvaluep->sval)); };
#line 1998 "parser.c"
	break;
      case 107: /* "type_unit" */
#line 208 "c.y"
	{ free((yyvaluep->sval)); };
#line 2003 "parser.c"
	break;
      case 108: /* "type_specifier" */
#line 208 "c.y"
	{ free((yyvaluep->sval)); };
#line 2008 "parser.c"
	break;
      case 110: /* "array_dims" */
#line 208 "c.y"
	{ free((yyvaluep->sval)); };
#line 2013 "parser.c"
	break;
      case 159: /* "type_qualifier_seq_opt" */
#line 208 "c.y"
	{ free((yyvaluep->sval)); };
#line 2018 "parser.c"
	break;

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 301 "c.y"
    { (yyval.ival) = 0; ;}
    break;

  case 5:
#line 302 "c.y"
    { (yyval.ival) = strtol((yyvsp[(2) - (2)].sval), NULL, 0); free((yyvsp[(2) - (2)].sval)); ;}
    break;

  case 6:
#line 308 "c.y"
    { (yyval.sval) = strdup(""); ;}
    break;

  case 7:
#line 309 "c.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 8:
#line 313 "c.y"
    { (yyval.sval) = strdup("*"); ;}
    break;

  case 9:
#line 314 "c.y"
    { (yyval.sval) = strdup("%"); ;}
    break;

  case 10:
#line 315 "c.y"
    { (yyval.sval) = strdup("&"); ;}
    break;

  case 11:
#line 316 "c.y"
    { (yyval.sval) = strdup("`"); ;}
    break;

  case 12:
#line 317 "c.y"
    {
      size_t n = strlen((yyvsp[(1) - (2)].sval)) + 2;
      char* s = (char*)malloc(n);
      if(s) { strcpy(s, (yyvsp[(1) - (2)].sval)); strcat(s, "*"); }
      free((yyvsp[(1) - (2)].sval));
      (yyval.sval) = s;
    ;}
    break;

  case 13:
#line 324 "c.y"
    {
      size_t n = strlen((yyvsp[(1) - (2)].sval)) + 2;
      char* s = (char*)malloc(n);
      if(s) { strcpy(s, (yyvsp[(1) - (2)].sval)); strcat(s, "%"); }
      free((yyvsp[(1) - (2)].sval));
      (yyval.sval) = s;
    ;}
    break;

  case 14:
#line 331 "c.y"
    {
      size_t n = strlen((yyvsp[(1) - (2)].sval)) + 2;
      char* s = (char*)malloc(n);
      if(s) { strcpy(s, (yyvsp[(1) - (2)].sval)); strcat(s, "&"); }
      free((yyvsp[(1) - (2)].sval));
      (yyval.sval) = s;
    ;}
    break;

  case 15:
#line 338 "c.y"
    {
      size_t n = strlen((yyvsp[(1) - (2)].sval)) + 2;
      char* s = (char*)malloc(n);
      if(s) { strcpy(s, (yyvsp[(1) - (2)].sval)); strcat(s, "`"); }
      free((yyvsp[(1) - (2)].sval));
      (yyval.sval) = s;
    ;}
    break;

  case 16:
#line 349 "c.y"
    {
      const char* qs = ((yyvsp[(1) - (7)].sval) && (yyvsp[(1) - (7)].sval)[0]) ? (yyvsp[(1) - (7)].sval) : NULL;
      char* base = qs ? sjoin3((yyvsp[(1) - (7)].sval), " ", (yyvsp[(2) - (7)].sval)) : sdup0x((yyvsp[(2) - (7)].sval));
      AstNode* A = (g_last_anon_is_anon ? g_last_anon_type : NULL);
      char* t1=compose_type(base,(yyvsp[(3) - (7)].dstr)); AstNode* d1=ast_decl_new(t1,(yyvsp[(3) - (7)].dstr)->name,NULL); if(A){ ast_decl_attach_anon(d1, A); } free(t1); dstr_free((yyvsp[(3) - (7)].dstr)); ast_add(d1);
      char* t2=compose_type(base,(yyvsp[(5) - (7)].dstr)); AstNode* d2=ast_decl_new(t2,(yyvsp[(5) - (7)].dstr)->name,NULL); if(A){ ast_decl_attach_anon(d2, ast_type_clone(A)); } free(t2); dstr_free((yyvsp[(5) - (7)].dstr)); ast_add(d2);
      if((yyvsp[(6) - (7)].nlist)){ for(long i=0;i<(yyvsp[(6) - (7)].nlist)->n;i++){ DStr* ds=(DStr*)(yyvsp[(6) - (7)].nlist)->a[i]; char* tx=compose_type(base,ds); AstNode* dn=ast_decl_new(tx, ds->name,NULL); if(A){ ast_decl_attach_anon(dn, ast_type_clone(A)); } free(tx); dstr_free(ds); ast_add(dn);} free((yyvsp[(6) - (7)].nlist)->a); free((yyvsp[(6) - (7)].nlist)); }
      if(A){ g_last_anon_type=NULL; g_last_anon_is_anon=0; }
      free(base); free((yyvsp[(1) - (7)].sval)); free((yyvsp[(2) - (7)].sval));
    ;}
    break;

  case 17:
#line 360 "c.y"
    {
      char* base=(yyvsp[(1) - (6)].sval);
      AstNode* A = (g_last_anon_is_anon ? g_last_anon_type : NULL);
      char* t1=compose_type(base,(yyvsp[(2) - (6)].dstr)); AstNode* d1=ast_decl_new(t1,(yyvsp[(2) - (6)].dstr)->name,NULL); if(A){ ast_decl_attach_anon(d1, A); } free(t1); dstr_free((yyvsp[(2) - (6)].dstr)); ast_add(d1);
      char* t2=compose_type(base,(yyvsp[(4) - (6)].dstr)); AstNode* d2=ast_decl_new(t2,(yyvsp[(4) - (6)].dstr)->name,NULL); if(A){ ast_decl_attach_anon(d2, ast_type_clone(A)); } free(t2); dstr_free((yyvsp[(4) - (6)].dstr)); ast_add(d2);
      if((yyvsp[(5) - (6)].nlist)){ for(long i=0;i<(yyvsp[(5) - (6)].nlist)->n;i++){ DStr* ds=(DStr*)(yyvsp[(5) - (6)].nlist)->a[i]; char* tx=compose_type(base,ds); AstNode* dn=ast_decl_new(tx, ds->name,NULL); if(A){ ast_decl_attach_anon(dn, ast_type_clone(A)); } free(tx); dstr_free(ds); ast_add(dn);} free((yyvsp[(5) - (6)].nlist)->a); free((yyvsp[(5) - (6)].nlist)); }
      if(A){ g_last_anon_type=NULL; g_last_anon_is_anon=0; }
      free(base);
    ;}
    break;

  case 18:
#line 370 "c.y"
    {
      const char* qs = ((yyvsp[(1) - (6)].sval) && (yyvsp[(1) - (6)].sval)[0]) ? (yyvsp[(1) - (6)].sval) : NULL;
      char* base = qs ? sjoin3((yyvsp[(1) - (6)].sval), " ", (yyvsp[(2) - (6)].sval)) : sdup0x((yyvsp[(2) - (6)].sval));
      char* t=compose_type(base,(yyvsp[(3) - (6)].dstr));
      AstNode* d=ast_decl_new(t? t: base, (yyvsp[(3) - (6)].dstr)->name, (yyvsp[(5) - (6)].node));
      if(g_last_anon_is_anon && g_last_anon_type){ ast_decl_attach_anon(d, g_last_anon_type); g_last_anon_type=NULL; g_last_anon_is_anon=0; }
      free(t); dstr_free((yyvsp[(3) - (6)].dstr)); free(base); free((yyvsp[(1) - (6)].sval)); free((yyvsp[(2) - (6)].sval));
      ast_add(d);
    ;}
    break;

  case 19:
#line 380 "c.y"
    {
      char* base=(yyvsp[(1) - (5)].sval);
      char* t=compose_type(base,(yyvsp[(2) - (5)].dstr));
      AstNode* d=ast_decl_new(t? t: base, (yyvsp[(2) - (5)].dstr)->name, (yyvsp[(4) - (5)].node));
      if(g_last_anon_is_anon && g_last_anon_type){ ast_decl_attach_anon(d, g_last_anon_type); g_last_anon_type=NULL; g_last_anon_is_anon=0; }
      free(t); dstr_free((yyvsp[(2) - (5)].dstr)); free(base);
      ast_add(d);
    ;}
    break;

  case 21:
#line 390 "c.y"
    {
      const char* qs = ((yyvsp[(1) - (9)].sval) && (yyvsp[(1) - (9)].sval)[0]) ? (yyvsp[(1) - (9)].sval) : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen((yyvsp[(2) - (9)].sval)) + strlen((yyvsp[(3) - (9)].sval) ? (yyvsp[(3) - (9)].sval) : "") + 1;
      char* rt = (char*)malloc(nt);
      if(rt) { rt[0] = '\0'; if(qs){ strcat(rt, (yyvsp[(1) - (9)].sval)); strcat(rt, " "); } strcat(rt, (yyvsp[(2) - (9)].sval)); if((yyvsp[(3) - (9)].sval)) strcat(rt, (yyvsp[(3) - (9)].sval)); }
      AstFunction* f = ast_function_new((yyvsp[(4) - (9)].sval),
        rt ? rt : (yyvsp[(2) - (9)].sval),
        0,
        (yyvsp[(6) - (9)].plist) ? (yyvsp[(6) - (9)].plist)->a : NULL,
        (yyvsp[(6) - (9)].plist) ? (yyvsp[(6) - (9)].plist)->n : 0,
        (yyvsp[(8) - (9)].ival),
        (yyvsp[(9) - (9)].node));
      ast_add((AstNode*)f);
      free(rt);
      free((yyvsp[(1) - (9)].sval));
      free((yyvsp[(2) - (9)].sval));
      free((yyvsp[(3) - (9)].sval));
      if((yyvsp[(6) - (9)].plist)) { free((yyvsp[(6) - (9)].plist)); }
    ;}
    break;

  case 22:
#line 410 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (8)].sval)) + strlen((yyvsp[(2) - (8)].sval) ? (yyvsp[(2) - (8)].sval) : "") + 1;
      char* rt = (char*)malloc(nt);
      if(rt) { rt[0] = '\0'; strcat(rt, (yyvsp[(1) - (8)].sval)); if((yyvsp[(2) - (8)].sval)) strcat(rt, (yyvsp[(2) - (8)].sval)); }
      AstFunction* f = ast_function_new((yyvsp[(3) - (8)].sval),
        rt ? rt : (yyvsp[(1) - (8)].sval),
        0,
        (yyvsp[(5) - (8)].plist) ? (yyvsp[(5) - (8)].plist)->a : NULL,
        (yyvsp[(5) - (8)].plist) ? (yyvsp[(5) - (8)].plist)->n : 0,
        (yyvsp[(7) - (8)].ival),
        (yyvsp[(8) - (8)].node));
      ast_add((AstNode*)f);
      free(rt);
      free((yyvsp[(1) - (8)].sval));
      free((yyvsp[(2) - (8)].sval));
      if((yyvsp[(5) - (8)].plist)) { free((yyvsp[(5) - (8)].plist)); }
    ;}
    break;

  case 23:
#line 428 "c.y"
    {
      const char* qs = ((yyvsp[(1) - (9)].sval) && (yyvsp[(1) - (9)].sval)[0]) ? (yyvsp[(1) - (9)].sval) : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen((yyvsp[(2) - (9)].sval)) + strlen((yyvsp[(3) - (9)].sval) ? (yyvsp[(3) - (9)].sval) : "") + 1;
      char* rt = (char*)malloc(nt);
      if(rt) { rt[0] = '\0'; if(qs){ strcat(rt, (yyvsp[(1) - (9)].sval)); strcat(rt, " "); } strcat(rt, (yyvsp[(2) - (9)].sval)); if((yyvsp[(3) - (9)].sval)) strcat(rt, (yyvsp[(3) - (9)].sval)); }
      AstFunction* f = ast_function_new((yyvsp[(4) - (9)].sval),
        rt ? rt : (yyvsp[(2) - (9)].sval),
        0,
        (yyvsp[(6) - (9)].plist) ? (yyvsp[(6) - (9)].plist)->a : NULL,
        (yyvsp[(6) - (9)].plist) ? (yyvsp[(6) - (9)].plist)->n : 0,
        (yyvsp[(8) - (9)].ival),
        NULL);
      ast_add((AstNode*)f);
      free(rt);
      free((yyvsp[(1) - (9)].sval));
      free((yyvsp[(2) - (9)].sval));
      free((yyvsp[(3) - (9)].sval));
      if((yyvsp[(6) - (9)].plist)) { free((yyvsp[(6) - (9)].plist)); }
    ;}
    break;

  case 24:
#line 448 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (8)].sval)) + strlen((yyvsp[(2) - (8)].sval) ? (yyvsp[(2) - (8)].sval) : "") + 1;
      char* rt = (char*)malloc(nt);
      if(rt) { rt[0] = '\0'; strcat(rt, (yyvsp[(1) - (8)].sval)); if((yyvsp[(2) - (8)].sval)) strcat(rt, (yyvsp[(2) - (8)].sval)); }
      AstFunction* f = ast_function_new((yyvsp[(3) - (8)].sval),
        rt ? rt : (yyvsp[(1) - (8)].sval),
        0,
        (yyvsp[(5) - (8)].plist) ? (yyvsp[(5) - (8)].plist)->a : NULL,
        (yyvsp[(5) - (8)].plist) ? (yyvsp[(5) - (8)].plist)->n : 0,
        (yyvsp[(7) - (8)].ival),
        NULL);
      ast_add((AstNode*)f);
      free(rt);
      free((yyvsp[(1) - (8)].sval));
      free((yyvsp[(2) - (8)].sval));
      if((yyvsp[(5) - (8)].plist)) { free((yyvsp[(5) - (8)].plist)); }
    ;}
    break;

  case 25:
#line 466 "c.y"
    {
      AstFunction* f = ast_function_new((yyvsp[(2) - (7)].sval),
        (yyvsp[(1) - (7)].fspec) && (yyvsp[(1) - (7)].fspec)->rtype ? (yyvsp[(1) - (7)].fspec)->rtype : NULL,
        (yyvsp[(1) - (7)].fspec) ? (yyvsp[(1) - (7)].fspec)->flags : 0,
        (yyvsp[(4) - (7)].plist) ? (yyvsp[(4) - (7)].plist)->a : NULL,
        (yyvsp[(4) - (7)].plist) ? (yyvsp[(4) - (7)].plist)->n : 0,
        (yyvsp[(6) - (7)].ival),
        (yyvsp[(7) - (7)].node));
      ast_add((AstNode*)f);
      if((yyvsp[(1) - (7)].fspec)){ free((yyvsp[(1) - (7)].fspec)->rtype); free((yyvsp[(1) - (7)].fspec));} if((yyvsp[(4) - (7)].plist)) free((yyvsp[(4) - (7)].plist));
    ;}
    break;

  case 26:
#line 478 "c.y"
    {
      AstFunction* f = ast_function_new((yyvsp[(2) - (7)].sval),
        (yyvsp[(1) - (7)].fspec) && (yyvsp[(1) - (7)].fspec)->rtype ? (yyvsp[(1) - (7)].fspec)->rtype : NULL,
        (yyvsp[(1) - (7)].fspec) ? (yyvsp[(1) - (7)].fspec)->flags : 0,
        (yyvsp[(4) - (7)].plist) ? (yyvsp[(4) - (7)].plist)->a : NULL,
        (yyvsp[(4) - (7)].plist) ? (yyvsp[(4) - (7)].plist)->n : 0,
        (yyvsp[(6) - (7)].ival),
        NULL);
      ast_add((AstNode*)f);
      if((yyvsp[(1) - (7)].fspec)){ free((yyvsp[(1) - (7)].fspec)->rtype); free((yyvsp[(1) - (7)].fspec));} if((yyvsp[(4) - (7)].plist)) free((yyvsp[(4) - (7)].plist));
    ;}
    break;

  case 27:
#line 490 "c.y"
    {
      const char* qs = ((yyvsp[(2) - (6)].sval) && (yyvsp[(2) - (6)].sval)[0]) ? (yyvsp[(2) - (6)].sval) : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen((yyvsp[(3) - (6)].sval)) + strlen((yyvsp[(4) - (6)].sval) ? (yyvsp[(4) - (6)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; if(qs){ strcat(t, (yyvsp[(2) - (6)].sval)); strcat(t, " "); } strcat(t, (yyvsp[(3) - (6)].sval)); if((yyvsp[(4) - (6)].sval)) strcat(t, (yyvsp[(4) - (6)].sval)); }
      int ap=0; if((yyvsp[(4) - (6)].sval)){ for(const char* s=(yyvsp[(4) - (6)].sval); *s; s++) if(*s=='*') ap++; }
      AstNode* td = ast_typedef_new(t ? t : (yyvsp[(3) - (6)].sval), (yyvsp[(5) - (6)].sval), ap);
      free(t);
      ast_add(td);
      typedef_add((yyvsp[(5) - (6)].sval));
      free((yyvsp[(2) - (6)].sval)); free((yyvsp[(3) - (6)].sval)); free((yyvsp[(4) - (6)].sval));
    ;}
    break;

  case 28:
#line 503 "c.y"
    {
      size_t nt = strlen((yyvsp[(2) - (5)].sval)) + strlen((yyvsp[(3) - (5)].sval) ? (yyvsp[(3) - (5)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; strcat(t, (yyvsp[(2) - (5)].sval)); if((yyvsp[(3) - (5)].sval)) strcat(t, (yyvsp[(3) - (5)].sval)); }
      int ap=0; if((yyvsp[(3) - (5)].sval)){ for(const char* s=(yyvsp[(3) - (5)].sval); *s; s++) if(*s=='*') ap++; }
      AstNode* td = ast_typedef_new(t ? t : (yyvsp[(2) - (5)].sval), (yyvsp[(4) - (5)].sval), ap);
      free(t);
      ast_add(td);
      typedef_add((yyvsp[(4) - (5)].sval));
    ;}
    break;

  case 29:
#line 514 "c.y"
    {
      const char* qs = ((yyvsp[(2) - (7)].sval) && (yyvsp[(2) - (7)].sval)[0]) ? (yyvsp[(2) - (7)].sval) : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen((yyvsp[(3) - (7)].sval)) + strlen((yyvsp[(4) - (7)].sval) ? (yyvsp[(4) - (7)].sval) : "") + strlen((yyvsp[(6) - (7)].sval) ? (yyvsp[(6) - (7)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; if(qs){ strcat(t, (yyvsp[(2) - (7)].sval)); strcat(t, " "); } strcat(t, (yyvsp[(3) - (7)].sval)); if((yyvsp[(4) - (7)].sval)) strcat(t, (yyvsp[(4) - (7)].sval)); if((yyvsp[(6) - (7)].sval)) strcat(t, (yyvsp[(6) - (7)].sval)); }
      int ap=0; if((yyvsp[(4) - (7)].sval)){ for(const char* s=(yyvsp[(4) - (7)].sval); *s; s++) if(*s=='*') ap++; }
      AstNode* td = ast_typedef_new(t ? t : (yyvsp[(3) - (7)].sval), (yyvsp[(5) - (7)].sval), ap);
      free(t);
      free((yyvsp[(6) - (7)].sval));
      ast_add(td);
      typedef_add((yyvsp[(5) - (7)].sval));
      free((yyvsp[(2) - (7)].sval)); free((yyvsp[(3) - (7)].sval)); free((yyvsp[(4) - (7)].sval));
    ;}
    break;

  case 30:
#line 528 "c.y"
    {
      size_t nt = strlen((yyvsp[(2) - (6)].sval)) + strlen((yyvsp[(3) - (6)].sval) ? (yyvsp[(3) - (6)].sval) : "") + strlen((yyvsp[(5) - (6)].sval) ? (yyvsp[(5) - (6)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; strcat(t, (yyvsp[(2) - (6)].sval)); if((yyvsp[(3) - (6)].sval)) strcat(t, (yyvsp[(3) - (6)].sval)); if((yyvsp[(5) - (6)].sval)) strcat(t, (yyvsp[(5) - (6)].sval)); }
      int ap=0; if((yyvsp[(3) - (6)].sval)){ for(const char* s=(yyvsp[(3) - (6)].sval); *s; s++) if(*s=='*') ap++; }
      AstNode* td = ast_typedef_new(t ? t : (yyvsp[(2) - (6)].sval), (yyvsp[(4) - (6)].sval), ap);
      free(t);
      free((yyvsp[(5) - (6)].sval));
      ast_add(td);
      typedef_add((yyvsp[(4) - (6)].sval));
    ;}
    break;

  case 31:
#line 540 "c.y"
    {
      const char* qs = ((yyvsp[(1) - (7)].sval) && (yyvsp[(1) - (7)].sval)[0]) ? (yyvsp[(1) - (7)].sval) : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen((yyvsp[(2) - (7)].sval)) + strlen((yyvsp[(3) - (7)].sval) ? (yyvsp[(3) - (7)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; if(qs){ strcat(t, (yyvsp[(1) - (7)].sval)); strcat(t, " "); } strcat(t, (yyvsp[(2) - (7)].sval)); if((yyvsp[(3) - (7)].sval)) strcat(t, (yyvsp[(3) - (7)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(2) - (7)].sval), (yyvsp[(4) - (7)].sval), (yyvsp[(6) - (7)].node));
      if(g_last_anon_is_anon && g_last_anon_type){ ast_decl_attach_anon(d, g_last_anon_type); g_last_anon_type=NULL; g_last_anon_is_anon=0; }
      free(t); free((yyvsp[(1) - (7)].sval)); free((yyvsp[(2) - (7)].sval)); free((yyvsp[(3) - (7)].sval));
      ast_add(d);
    ;}
    break;

  case 32:
#line 551 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (6)].sval)) + strlen((yyvsp[(2) - (6)].sval) ? (yyvsp[(2) - (6)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, (yyvsp[(1) - (6)].sval)); if((yyvsp[(2) - (6)].sval)) strcat(t, (yyvsp[(2) - (6)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(1) - (6)].sval), (yyvsp[(3) - (6)].sval), (yyvsp[(5) - (6)].node));
      if(g_last_anon_is_anon && g_last_anon_type){ ast_decl_attach_anon(d, g_last_anon_type); g_last_anon_type=NULL; g_last_anon_is_anon=0; }
      free(t); free((yyvsp[(1) - (6)].sval)); free((yyvsp[(2) - (6)].sval));
      ast_add(d);
    ;}
    break;

  case 33:
#line 561 "c.y"
    {
      const char* qs = ((yyvsp[(2) - (12)].sval) && (yyvsp[(2) - (12)].sval)[0]) ? (yyvsp[(2) - (12)].sval) : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen((yyvsp[(3) - (12)].sval)) + strlen((yyvsp[(4) - (12)].sval) ? (yyvsp[(4) - (12)].sval) : "") + strlen("(*)") + strlen((yyvsp[(10) - (12)].sval) ? (yyvsp[(10) - (12)].sval) : "()") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; if(qs){ strcat(t, (yyvsp[(2) - (12)].sval)); strcat(t, " "); } strcat(t, (yyvsp[(3) - (12)].sval)); if((yyvsp[(4) - (12)].sval)) strcat(t, (yyvsp[(4) - (12)].sval)); strcat(t, "(*)"); strcat(t, (yyvsp[(10) - (12)].sval) ? (yyvsp[(10) - (12)].sval) : "()"); }
      int ap=1; if((yyvsp[(4) - (12)].sval)){ for(const char* s=(yyvsp[(4) - (12)].sval); *s; s++) if(*s=='*') ap++; }
      AstNode* td = ast_typedef_new(t ? t : (yyvsp[(3) - (12)].sval), (yyvsp[(7) - (12)].sval), ap);
      free(t); free((yyvsp[(10) - (12)].sval));
      ast_add(td);
      typedef_add((yyvsp[(7) - (12)].sval));
      free((yyvsp[(2) - (12)].sval)); free((yyvsp[(3) - (12)].sval)); free((yyvsp[(4) - (12)].sval));
    ;}
    break;

  case 34:
#line 574 "c.y"
    {
      size_t nt = strlen((yyvsp[(2) - (11)].sval)) + strlen((yyvsp[(3) - (11)].sval) ? (yyvsp[(3) - (11)].sval) : "") + strlen("(*)") + strlen((yyvsp[(9) - (11)].sval) ? (yyvsp[(9) - (11)].sval) : "()") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; strcat(t, (yyvsp[(2) - (11)].sval)); if((yyvsp[(3) - (11)].sval)) strcat(t, (yyvsp[(3) - (11)].sval)); strcat(t, "(*)"); strcat(t, (yyvsp[(9) - (11)].sval) ? (yyvsp[(9) - (11)].sval) : "()"); }
      int ap=1; if((yyvsp[(3) - (11)].sval)){ for(const char* s=(yyvsp[(3) - (11)].sval); *s; s++) if(*s=='*') ap++; }
      AstNode* td = ast_typedef_new(t ? t : (yyvsp[(2) - (11)].sval), (yyvsp[(6) - (11)].sval), ap);
      free(t); free((yyvsp[(9) - (11)].sval));
      ast_add(td);
      typedef_add((yyvsp[(6) - (11)].sval));
    ;}
    break;

  case 35:
#line 585 "c.y"
    {
      const char* qs = ((yyvsp[(2) - (13)].sval) && (yyvsp[(2) - (13)].sval)[0]) ? (yyvsp[(2) - (13)].sval) : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen((yyvsp[(3) - (13)].sval)) + strlen((yyvsp[(4) - (13)].sval) ? (yyvsp[(4) - (13)].sval) : "") + strlen("(*)") + strlen((yyvsp[(11) - (13)].sval) ? (yyvsp[(11) - (13)].sval) : "()") + strlen((yyvsp[(8) - (13)].sval) ? (yyvsp[(8) - (13)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; if(qs){ strcat(t, (yyvsp[(2) - (13)].sval)); strcat(t, " "); } strcat(t, (yyvsp[(3) - (13)].sval)); if((yyvsp[(4) - (13)].sval)) strcat(t, (yyvsp[(4) - (13)].sval)); strcat(t, "(*)"); strcat(t, (yyvsp[(11) - (13)].sval) ? (yyvsp[(11) - (13)].sval) : "()"); if((yyvsp[(8) - (13)].sval)) strcat(t, (yyvsp[(8) - (13)].sval)); }
      int ap=1; if((yyvsp[(4) - (13)].sval)){ for(const char* s=(yyvsp[(4) - (13)].sval); *s; s++) if(*s=='*') ap++; }
      AstNode* td = ast_typedef_new(t ? t : (yyvsp[(3) - (13)].sval), (yyvsp[(7) - (13)].sval), ap);
      free(t);
      free((yyvsp[(8) - (13)].sval)); free((yyvsp[(11) - (13)].sval));
      ast_add(td);
      typedef_add((yyvsp[(7) - (13)].sval));
      free((yyvsp[(2) - (13)].sval)); free((yyvsp[(3) - (13)].sval)); free((yyvsp[(4) - (13)].sval));
    ;}
    break;

  case 36:
#line 599 "c.y"
    {
      size_t nt = strlen((yyvsp[(2) - (12)].sval)) + strlen((yyvsp[(3) - (12)].sval) ? (yyvsp[(3) - (12)].sval) : "") + strlen("(*)") + strlen((yyvsp[(10) - (12)].sval) ? (yyvsp[(10) - (12)].sval) : "()") + strlen((yyvsp[(7) - (12)].sval) ? (yyvsp[(7) - (12)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; strcat(t, (yyvsp[(2) - (12)].sval)); if((yyvsp[(3) - (12)].sval)) strcat(t, (yyvsp[(3) - (12)].sval)); strcat(t, "(*)"); strcat(t, (yyvsp[(10) - (12)].sval) ? (yyvsp[(10) - (12)].sval) : "()"); if((yyvsp[(7) - (12)].sval)) strcat(t, (yyvsp[(7) - (12)].sval)); }
      int ap=1; if((yyvsp[(3) - (12)].sval)){ for(const char* s=(yyvsp[(3) - (12)].sval); *s; s++) if(*s=='*') ap++; }
      AstNode* td = ast_typedef_new(t ? t : (yyvsp[(2) - (12)].sval), (yyvsp[(6) - (12)].sval), ap);
      free(t);
      free((yyvsp[(7) - (12)].sval)); free((yyvsp[(10) - (12)].sval));
      ast_add(td);
      typedef_add((yyvsp[(6) - (12)].sval));
    ;}
    break;

  case 37:
#line 612 "c.y"
    {
      const char* qs = ((yyvsp[(1) - (5)].sval) && (yyvsp[(1) - (5)].sval)[0]) ? (yyvsp[(1) - (5)].sval) : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen((yyvsp[(2) - (5)].sval)) + strlen((yyvsp[(3) - (5)].sval) ? (yyvsp[(3) - (5)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; if(qs){ strcat(t, (yyvsp[(1) - (5)].sval)); strcat(t, " "); } strcat(t, (yyvsp[(2) - (5)].sval)); if((yyvsp[(3) - (5)].sval)) strcat(t, (yyvsp[(3) - (5)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(2) - (5)].sval), (yyvsp[(4) - (5)].sval), NULL);
      if(g_last_anon_is_anon && g_last_anon_type){ ast_decl_attach_anon(d, g_last_anon_type); g_last_anon_type=NULL; g_last_anon_is_anon=0; }
      free(t); free((yyvsp[(1) - (5)].sval)); free((yyvsp[(2) - (5)].sval)); free((yyvsp[(3) - (5)].sval));
      ast_add(d);
    ;}
    break;

  case 38:
#line 623 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (4)].sval)) + strlen((yyvsp[(2) - (4)].sval) ? (yyvsp[(2) - (4)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, (yyvsp[(1) - (4)].sval)); if((yyvsp[(2) - (4)].sval)) strcat(t, (yyvsp[(2) - (4)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].sval), NULL);
      if(g_last_anon_is_anon && g_last_anon_type){ ast_decl_attach_anon(d, g_last_anon_type); g_last_anon_type=NULL; g_last_anon_is_anon=0; }
      free(t); free((yyvsp[(1) - (4)].sval)); free((yyvsp[(2) - (4)].sval));
      ast_add(d);
    ;}
    break;

  case 39:
#line 633 "c.y"
    {
      const char* qs = ((yyvsp[(1) - (7)].sval) && (yyvsp[(1) - (7)].sval)[0]) ? (yyvsp[(1) - (7)].sval) : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen((yyvsp[(2) - (7)].sval)) + strlen((yyvsp[(3) - (7)].sval) ? (yyvsp[(3) - (7)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; if(qs){ strcat(t, (yyvsp[(1) - (7)].sval)); strcat(t, " "); } strcat(t, (yyvsp[(2) - (7)].sval)); if((yyvsp[(3) - (7)].sval)) strcat(t, (yyvsp[(3) - (7)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(2) - (7)].sval), (yyvsp[(4) - (7)].sval), (yyvsp[(6) - (7)].node));
      if(g_last_anon_is_anon && g_last_anon_type){ ast_decl_attach_anon(d, g_last_anon_type); g_last_anon_type=NULL; g_last_anon_is_anon=0; }
      free(t); free((yyvsp[(1) - (7)].sval)); free((yyvsp[(2) - (7)].sval)); free((yyvsp[(3) - (7)].sval));
      ast_add(d);
    ;}
    break;

  case 40:
#line 644 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (6)].sval)) + strlen((yyvsp[(2) - (6)].sval) ? (yyvsp[(2) - (6)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, (yyvsp[(1) - (6)].sval)); if((yyvsp[(2) - (6)].sval)) strcat(t, (yyvsp[(2) - (6)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(1) - (6)].sval), (yyvsp[(3) - (6)].sval), (yyvsp[(5) - (6)].node));
      if(g_last_anon_is_anon && g_last_anon_type){ ast_decl_attach_anon(d, g_last_anon_type); g_last_anon_type=NULL; g_last_anon_is_anon=0; }
      free(t); free((yyvsp[(1) - (6)].sval)); free((yyvsp[(2) - (6)].sval));
      ast_add(d);
    ;}
    break;

  case 41:
#line 654 "c.y"
    {
      const char* qs = ((yyvsp[(1) - (8)].sval) && (yyvsp[(1) - (8)].sval)[0]) ? (yyvsp[(1) - (8)].sval) : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen((yyvsp[(2) - (8)].sval)) + strlen((yyvsp[(3) - (8)].sval) ? (yyvsp[(3) - (8)].sval) : "") + strlen((yyvsp[(5) - (8)].sval) ? (yyvsp[(5) - (8)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; if(qs){ strcat(t, (yyvsp[(1) - (8)].sval)); strcat(t, " "); } strcat(t, (yyvsp[(2) - (8)].sval)); if((yyvsp[(3) - (8)].sval)) strcat(t, (yyvsp[(3) - (8)].sval)); if((yyvsp[(5) - (8)].sval)) strcat(t, (yyvsp[(5) - (8)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(2) - (8)].sval), (yyvsp[(4) - (8)].sval), (yyvsp[(7) - (8)].node));
      if(g_last_anon_is_anon && g_last_anon_type){ ast_decl_attach_anon(d, g_last_anon_type); g_last_anon_type=NULL; g_last_anon_is_anon=0; }
      free(t); free((yyvsp[(1) - (8)].sval)); free((yyvsp[(2) - (8)].sval)); free((yyvsp[(3) - (8)].sval)); free((yyvsp[(5) - (8)].sval));
      ast_add(d);
    ;}
    break;

  case 42:
#line 665 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (7)].sval)) + strlen((yyvsp[(2) - (7)].sval) ? (yyvsp[(2) - (7)].sval) : "") + strlen((yyvsp[(4) - (7)].sval) ? (yyvsp[(4) - (7)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, (yyvsp[(1) - (7)].sval)); if((yyvsp[(2) - (7)].sval)) strcat(t, (yyvsp[(2) - (7)].sval)); if((yyvsp[(4) - (7)].sval)) strcat(t, (yyvsp[(4) - (7)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(1) - (7)].sval), (yyvsp[(3) - (7)].sval), (yyvsp[(6) - (7)].node));
      if(g_last_anon_is_anon && g_last_anon_type){ ast_decl_attach_anon(d, g_last_anon_type); g_last_anon_type=NULL; g_last_anon_is_anon=0; }
      free(t); free((yyvsp[(1) - (7)].sval)); free((yyvsp[(2) - (7)].sval)); free((yyvsp[(4) - (7)].sval));
      ast_add(d);
    ;}
    break;

  case 44:
#line 675 "c.y"
    { free((yyvsp[(1) - (2)].sval)); if(g_last_anon_is_anon && g_last_anon_type){ ast_add(g_last_anon_type); } g_last_anon_type=NULL; g_last_anon_is_anon=0; ;}
    break;

  case 45:
#line 676 "c.y"
    { free((yyvsp[(1) - (2)].sval)); if(g_last_anon_is_anon && g_last_anon_type){ ast_add(g_last_anon_type); } g_last_anon_type=NULL; g_last_anon_is_anon=0; ;}
    break;

  case 46:
#line 682 "c.y"
    { (yyval.fspec) = fspec_new_from((yyvsp[(1) - (2)].sval), (yyvsp[(2) - (2)].sval)); free((yyvsp[(1) - (2)].sval)); free((yyvsp[(2) - (2)].sval)); ;}
    break;

  case 47:
#line 683 "c.y"
    { (yyval.fspec) = (yyvsp[(2) - (2)].fspec); if((yyval.fspec)) (yyval.fspec)->flags |= ASTF_EXTERN; ;}
    break;

  case 48:
#line 684 "c.y"
    { (yyval.fspec) = (yyvsp[(2) - (2)].fspec); if((yyval.fspec)) (yyval.fspec)->flags |= ASTF_STATIC; ;}
    break;

  case 49:
#line 685 "c.y"
    { (yyval.fspec) = (yyvsp[(2) - (2)].fspec); if((yyval.fspec)) (yyval.fspec)->flags |= ASTF_CONST; ;}
    break;

  case 50:
#line 686 "c.y"
    { (yyval.fspec) = (yyvsp[(2) - (2)].fspec); if((yyval.fspec)) (yyval.fspec)->flags |= ASTF_VOLATILE; ;}
    break;

  case 51:
#line 687 "c.y"
    { (yyval.fspec) = (yyvsp[(2) - (2)].fspec); if((yyval.fspec)) (yyval.fspec)->flags |= ASTF_RESTRICT; ;}
    break;

  case 52:
#line 688 "c.y"
    { (yyval.fspec) = (yyvsp[(2) - (2)].fspec); if((yyval.fspec)) (yyval.fspec)->flags |= ASTF_INLINE; ;}
    break;

  case 53:
#line 689 "c.y"
    { (yyval.fspec) = (yyvsp[(2) - (2)].fspec); if((yyval.fspec)) (yyval.fspec)->flags |= ASTF_UNIQ; ;}
    break;

  case 54:
#line 694 "c.y"
    { (yyval.plist) = NULL; ;}
    break;

  case 55:
#line 695 "c.y"
    { (yyval.plist) = (yyvsp[(1) - (1)].plist); ;}
    break;

  case 56:
#line 699 "c.y"
    { (yyval.plist) = (yyvsp[(1) - (1)].plist); ;}
    break;

  case 57:
#line 700 "c.y"
    { (yyval.plist) = (yyvsp[(1) - (3)].plist); /* variadic marker ignored in AST */ ;}
    break;

  case 58:
#line 704 "c.y"
    { (yyval.plist) = (yyvsp[(1) - (1)].plist); ;}
    break;

  case 59:
#line 705 "c.y"
    { (yyval.plist) = plist_merge((yyvsp[(1) - (3)].plist), (yyvsp[(3) - (3)].plist)); ;}
    break;

  case 60:
#line 710 "c.y"
    {
      ParamList* p = plist_new();
      const char* qs = ((yyvsp[(1) - (3)].sval) && (yyvsp[(1) - (3)].sval)[0]) ? (yyvsp[(1) - (3)].sval) : NULL;
      char* base = qs ? sjoin3((yyvsp[(1) - (3)].sval), " ", (yyvsp[(2) - (3)].sval)) : sdup0x((yyvsp[(2) - (3)].sval));
      char* t = compose_type(base, (yyvsp[(3) - (3)].dstr));
      plist_push(p, t ? t : base, (yyvsp[(3) - (3)].dstr)->name);
      if(t) free(t);
      free(base);
      dstr_free((yyvsp[(3) - (3)].dstr));
      free((yyvsp[(1) - (3)].sval)); free((yyvsp[(2) - (3)].sval));
      (yyval.plist) = p;
    ;}
    break;

  case 61:
#line 723 "c.y"
    {
      ParamList* p = plist_new();
      const char* qs = ((yyvsp[(1) - (2)].sval) && (yyvsp[(1) - (2)].sval)[0]) ? (yyvsp[(1) - (2)].sval) : NULL;
      char* base = qs ? sjoin3((yyvsp[(1) - (2)].sval), " ", (yyvsp[(2) - (2)].sval)) : sdup0x((yyvsp[(2) - (2)].sval));
      /* parameter without a name (e.g., void) */
      plist_push(p, base, NULL);
      free(base);
      free((yyvsp[(1) - (2)].sval)); free((yyvsp[(2) - (2)].sval));
      (yyval.plist) = p;
    ;}
    break;

  case 75:
#line 787 "c.y"
    { (yyval.sval) = strdup("void"); ;}
    break;

  case 76:
#line 788 "c.y"
    { (yyval.sval) = strdup("char"); ;}
    break;

  case 77:
#line 789 "c.y"
    { (yyval.sval) = strdup("short"); ;}
    break;

  case 78:
#line 790 "c.y"
    { (yyval.sval) = strdup("int"); ;}
    break;

  case 79:
#line 791 "c.y"
    { (yyval.sval) = strdup("long"); ;}
    break;

  case 80:
#line 792 "c.y"
    { (yyval.sval) = strdup("signed"); ;}
    break;

  case 81:
#line 793 "c.y"
    { (yyval.sval) = strdup("unsigned"); ;}
    break;

  case 82:
#line 794 "c.y"
    { (yyval.sval) = strdup("float"); ;}
    break;

  case 83:
#line 795 "c.y"
    { (yyval.sval) = strdup("double"); ;}
    break;

  case 84:
#line 796 "c.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 85:
#line 797 "c.y"
    {
      (yyval.sval) = strdup("struct");
      long fc = (yyvsp[(3) - (4)].sflist) ? (yyvsp[(3) - (4)].sflist)->n : 0;
      AstStructField* fs = NULL;
      if(fc > 0){
        fs = (AstStructField*)calloc(fc, sizeof(*fs));
        for(long i=0;i<fc;i++){
          char* t = compose_type((yyvsp[(3) - (4)].sflist)->a[i].base ? (yyvsp[(3) - (4)].sflist)->a[i].base : "", (yyvsp[(3) - (4)].sflist)->a[i].d);
          const char* fname = ((yyvsp[(3) - (4)].sflist)->a[i].d && (yyvsp[(3) - (4)].sflist)->a[i].d->name) ? (yyvsp[(3) - (4)].sflist)->a[i].d->name : "";
          fs[i] = ast_struct_field_new(t ? t : "", fname, (yyvsp[(3) - (4)].sflist)->a[i].bitwidth);
          fs[i].anon_def = (yyvsp[(3) - (4)].sflist)->a[i].anon_def;
          free(t);
        }
      }
      AstNode* st = ast_struct_new_with(NULL, fs, fc);
      g_last_anon_type = st; g_last_anon_is_anon = 1; /* inline, not global yet */
      if((yyvsp[(3) - (4)].sflist)){ sfl_free((yyvsp[(3) - (4)].sflist)); }
    ;}
    break;

  case 86:
#line 815 "c.y"
    {
      (yyval.sval) = strdup("union");
      long fc = (yyvsp[(3) - (4)].sflist) ? (yyvsp[(3) - (4)].sflist)->n : 0;
      AstStructField* fs = NULL;
      if(fc > 0){
        fs = (AstStructField*)calloc(fc, sizeof(*fs));
        for(long i=0;i<fc;i++){
          char* t = compose_type((yyvsp[(3) - (4)].sflist)->a[i].base ? (yyvsp[(3) - (4)].sflist)->a[i].base : "", (yyvsp[(3) - (4)].sflist)->a[i].d);
          const char* fname = ((yyvsp[(3) - (4)].sflist)->a[i].d && (yyvsp[(3) - (4)].sflist)->a[i].d->name) ? (yyvsp[(3) - (4)].sflist)->a[i].d->name : "";
          fs[i] = ast_struct_field_new(t ? t : "", fname, (yyvsp[(3) - (4)].sflist)->a[i].bitwidth);
          fs[i].anon_def = (yyvsp[(3) - (4)].sflist)->a[i].anon_def;
          free(t);
        }
      }
      AstNode* un = ast_union_new_with(NULL, fs, fc);
      g_last_anon_type = un; g_last_anon_is_anon = 1; /* inline */
      if((yyvsp[(3) - (4)].sflist)){ sfl_free((yyvsp[(3) - (4)].sflist)); }
    ;}
    break;

  case 87:
#line 833 "c.y"
    { size_t n=strlen("struct ")+strlen((yyvsp[(2) - (2)].sval))+1; (yyval.sval)=(char*)malloc(n); if((yyval.sval)){ strcpy((yyval.sval),"struct "); strcat((yyval.sval),(yyvsp[(2) - (2)].sval));} free((yyvsp[(2) - (2)].sval)); ;}
    break;

  case 88:
#line 834 "c.y"
    { size_t n=strlen("union ")+strlen((yyvsp[(2) - (2)].sval))+1;  (yyval.sval)=(char*)malloc(n); if((yyval.sval)){ strcpy((yyval.sval),"union ");  strcat((yyval.sval),(yyvsp[(2) - (2)].sval));} free((yyvsp[(2) - (2)].sval)); ;}
    break;

  case 89:
#line 835 "c.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 90:
#line 836 "c.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 91:
#line 842 "c.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 92:
#line 843 "c.y"
    {
      size_t n = strlen((yyvsp[(1) - (2)].sval)) + 1 + strlen((yyvsp[(2) - (2)].sval)) + 1;
      char* s = (char*)malloc(n);
      if(s) { s[0] = '\0'; strcat(s, (yyvsp[(1) - (2)].sval)); strcat(s, " "); strcat(s, (yyvsp[(2) - (2)].sval)); }
      free((yyvsp[(1) - (2)].sval)); free((yyvsp[(2) - (2)].sval));
      (yyval.sval) = s;
    ;}
    break;

  case 93:
#line 854 "c.y"
    {
      const char* qs = ((yyvsp[(1) - (2)].sval) && (yyvsp[(1) - (2)].sval)[0]) ? (yyvsp[(1) - (2)].sval) : NULL;
      size_t n = (qs?strlen(qs)+1:0) + strlen((yyvsp[(2) - (2)].sval)) + 1;
      char* s = (char*)malloc(n);
      if(s){ s[0]='\0'; if(qs){ strcat(s,(yyvsp[(1) - (2)].sval)); strcat(s," "); } strcat(s,(yyvsp[(2) - (2)].sval)); }
      free((yyvsp[(1) - (2)].sval)); free((yyvsp[(2) - (2)].sval));
      (yyval.sval) = s;
    ;}
    break;

  case 94:
#line 866 "c.y"
    {
      size_t n = strlen((yyvsp[(2) - (3)].sval)) + 3; /* [ + num + ] + \0 */
      char* s = (char*)malloc(n);
      if(s) { s[0]='\0'; strcat(s, "["); strcat(s, (yyvsp[(2) - (3)].sval)); strcat(s, "]"); }
      free((yyvsp[(2) - (3)].sval));
      (yyval.sval) = s;
    ;}
    break;

  case 95:
#line 873 "c.y"
    {
      size_t n = strlen((yyvsp[(1) - (4)].sval)) + 1 + strlen((yyvsp[(3) - (4)].sval)) + 2 + 1;
      char* s = (char*)malloc(n);
      if(s) { strcpy(s, (yyvsp[(1) - (4)].sval)); strcat(s, "["); strcat(s, (yyvsp[(3) - (4)].sval)); strcat(s, "]"); }
      free((yyvsp[(1) - (4)].sval));
      free((yyvsp[(3) - (4)].sval));
      (yyval.sval) = s;
    ;}
    break;

  case 96:
#line 884 "c.y"
    {
      /* return type name "struct Foo" */
      size_t n = strlen("struct ")+strlen((yyvsp[(2) - (5)].sval))+1;
      (yyval.sval) = (char*)malloc(n); if((yyval.sval)){ strcpy((yyval.sval), "struct "); strcat((yyval.sval), (yyvsp[(2) - (5)].sval));} 
      /* build AST_STRUCT with fields */
      long fc = (yyvsp[(4) - (5)].sflist) ? (yyvsp[(4) - (5)].sflist)->n : 0;
      AstStructField* fs = NULL;
      if(fc > 0){
        fs = (AstStructField*)calloc(fc, sizeof(*fs));
        for(long i=0;i<fc;i++){
          char* t = compose_type((yyvsp[(4) - (5)].sflist)->a[i].base ? (yyvsp[(4) - (5)].sflist)->a[i].base : "", (yyvsp[(4) - (5)].sflist)->a[i].d);
          const char* fname = ((yyvsp[(4) - (5)].sflist)->a[i].d && (yyvsp[(4) - (5)].sflist)->a[i].d->name) ? (yyvsp[(4) - (5)].sflist)->a[i].d->name : "";
          fs[i] = ast_struct_field_new(t ? t : "", fname, (yyvsp[(4) - (5)].sflist)->a[i].bitwidth);
          fs[i].anon_def = (yyvsp[(4) - (5)].sflist)->a[i].anon_def;
          free(t);
        }
      }
      AstNode* st = ast_struct_new_with((yyvsp[(2) - (5)].sval), fs, fc);
      g_last_anon_type = st; g_last_anon_is_anon = 0; /* named */
      free((yyvsp[(2) - (5)].sval));
      if((yyvsp[(4) - (5)].sflist)){ sfl_free((yyvsp[(4) - (5)].sflist)); }
    ;}
    break;

  case 97:
#line 906 "c.y"
    {
      size_t n = strlen("union ")+strlen((yyvsp[(2) - (5)].sval))+1;
      (yyval.sval) = (char*)malloc(n); if((yyval.sval)){ strcpy((yyval.sval), "union "); strcat((yyval.sval), (yyvsp[(2) - (5)].sval));} 
      long fc = (yyvsp[(4) - (5)].sflist) ? (yyvsp[(4) - (5)].sflist)->n : 0;
      AstStructField* fs = NULL;
      if(fc > 0){
        fs = (AstStructField*)calloc(fc, sizeof(*fs));
        for(long i=0;i<fc;i++){
          char* t = compose_type((yyvsp[(4) - (5)].sflist)->a[i].base ? (yyvsp[(4) - (5)].sflist)->a[i].base : "", (yyvsp[(4) - (5)].sflist)->a[i].d);
          const char* fname = ((yyvsp[(4) - (5)].sflist)->a[i].d && (yyvsp[(4) - (5)].sflist)->a[i].d->name) ? (yyvsp[(4) - (5)].sflist)->a[i].d->name : "";
          fs[i] = ast_struct_field_new(t ? t : "", fname, (yyvsp[(4) - (5)].sflist)->a[i].bitwidth);
          fs[i].anon_def = (yyvsp[(4) - (5)].sflist)->a[i].anon_def;
          free(t);
        }
      }
      AstNode* un = ast_union_new_with((yyvsp[(2) - (5)].sval), fs, fc);
      g_last_anon_type = un; g_last_anon_is_anon = 0;
      free((yyvsp[(2) - (5)].sval));
      if((yyvsp[(4) - (5)].sflist)){ sfl_free((yyvsp[(4) - (5)].sflist)); }
    ;}
    break;

  case 98:
#line 926 "c.y"
    { (yyval.sval) = strdup("struct"); if((yyvsp[(3) - (4)].sflist)){ sfl_free((yyvsp[(3) - (4)].sflist)); } ;}
    break;

  case 99:
#line 927 "c.y"
    { (yyval.sval) = strdup("union");  if((yyvsp[(3) - (4)].sflist)){ sfl_free((yyvsp[(3) - (4)].sflist)); } ;}
    break;

  case 100:
#line 928 "c.y"
    { size_t n=strlen("struct ")+strlen((yyvsp[(2) - (2)].sval))+1; (yyval.sval)=(char*)malloc(n); if((yyval.sval)){ strcpy((yyval.sval), "struct "); strcat((yyval.sval), (yyvsp[(2) - (2)].sval));} free((yyvsp[(2) - (2)].sval)); ;}
    break;

  case 101:
#line 929 "c.y"
    { size_t n=strlen("union ")+strlen((yyvsp[(2) - (2)].sval))+1;  (yyval.sval)=(char*)malloc(n); if((yyval.sval)){ strcpy((yyval.sval), "union ");  strcat((yyval.sval), (yyvsp[(2) - (2)].sval));} free((yyvsp[(2) - (2)].sval)); ;}
    break;

  case 102:
#line 933 "c.y"
    { (yyval.sflist) = sfl_new(); ;}
    break;

  case 103:
#line 934 "c.y"
    { (yyval.sflist) = (yyvsp[(1) - (1)].sflist); ;}
    break;

  case 104:
#line 938 "c.y"
    { (yyval.sflist) = (yyvsp[(1) - (1)].sflist) ? (yyvsp[(1) - (1)].sflist) : sfl_new(); ;}
    break;

  case 105:
#line 940 "c.y"
    {
      if(!(yyvsp[(1) - (2)].sflist)) (yyval.sflist) = sfl_new(); else (yyval.sflist) = (yyvsp[(1) - (2)].sflist);
      if((yyvsp[(2) - (2)].sflist)){
        for(long i=0;i<(yyvsp[(2) - (2)].sflist)->n;i++) sfl_push((yyval.sflist), (yyvsp[(2) - (2)].sflist)->a[i]);
        free((yyvsp[(2) - (2)].sflist)->a); free((yyvsp[(2) - (2)].sflist));
      }
    ;}
    break;

  case 106:
#line 952 "c.y"
    {
      SFieldList* out = sfl_new();
      for(long i=0;i<(yyvsp[(2) - (3)].sflist)->n;i++){
        SField f = (yyvsp[(2) - (3)].sflist)->a[i];
        /* 各 declarator エントリに base 型を埋める（複製） */
        f.base = (yyvsp[(1) - (3)].sval) ? strdup((yyvsp[(1) - (3)].sval)) : strdup("");
        /* If a nested anon type was just parsed as part of the base, attach it inline */
        if(g_last_anon_type){ f.anon_def = g_last_anon_type; }
        sfl_push(out, f);
      }
      /* consume the last anon type for this specifier */
      g_last_anon_type = NULL;
      /* 右側の一時領域だけ解放 */
      free((yyvsp[(1) - (3)].sval));
      free((yyvsp[(2) - (3)].sflist)->a); free((yyvsp[(2) - (3)].sflist));
      (yyval.sflist) = out;
    ;}
    break;

  case 107:
#line 974 "c.y"
    {
      SFieldList* l = sfl_new();
      sfl_push(l, (yyvsp[(1) - (1)].sflist)->a[0]);
      free((yyvsp[(1) - (1)].sflist)->a); free((yyvsp[(1) - (1)].sflist));
      (yyval.sflist) = l;
    ;}
    break;

  case 108:
#line 981 "c.y"
    {
      if(!(yyvsp[(1) - (3)].sflist)) (yyval.sflist) = sfl_new(); else (yyval.sflist) = (yyvsp[(1) - (3)].sflist);
      sfl_push((yyval.sflist), (yyvsp[(3) - (3)].sflist)->a[0]);
      free((yyvsp[(3) - (3)].sflist)->a); free((yyvsp[(3) - (3)].sflist));
    ;}
    break;

  case 109:
#line 991 "c.y"
    {
      SFieldList* l = sfl_new();
      SField f = { .base=NULL, .d=(yyvsp[(1) - (1)].dstr), .bitwidth=0, .anon_def=NULL };
      sfl_push(l, f);
      (yyval.sflist) = l;
    ;}
    break;

  case 110:
#line 998 "c.y"
    {
      SFieldList* l = sfl_new();
      /* 無名ビットフィールド（名前なし）。DStr は空名で用意しておく */
      DStr* d = (DStr*)calloc(1,sizeof(DStr));
      d->name = strdup(""); d->pre=strdup(""); d->post=strdup("");
      int bw = 0; if((yyvsp[(2) - (2)].node) && ((AstNode*)(yyvsp[(2) - (2)].node))->kind==AST_EXPR_INT){ typedef struct { AstKind kind; long value; } AstExprInt; bw=(int)((AstExprInt*)(yyvsp[(2) - (2)].node))->value; }
      SField f = { .base=NULL, .d=d, .bitwidth=bw, .anon_def=NULL };
      sfl_push(l, f);
      (yyval.sflist) = l;
    ;}
    break;

  case 111:
#line 1009 "c.y"
    {
      SFieldList* l = sfl_new();
      int bw = 0; if((yyvsp[(3) - (3)].node) && ((AstNode*)(yyvsp[(3) - (3)].node))->kind==AST_EXPR_INT){ typedef struct { AstKind kind; long value; } AstExprInt; bw=(int)((AstExprInt*)(yyvsp[(3) - (3)].node))->value; }
      SField f = { .base=NULL, .d=(yyvsp[(1) - (3)].dstr), .bitwidth=bw, .anon_def=NULL };
      sfl_push(l, f);
      (yyval.sflist) = l;
    ;}
    break;

  case 112:
#line 1020 "c.y"
    {
      size_t n=strlen("enum ")+strlen((yyvsp[(2) - (5)].sval))+1; (yyval.sval)=(char*)malloc(n); if((yyval.sval)){ strcpy((yyval.sval), "enum "); strcat((yyval.sval), (yyvsp[(2) - (5)].sval));} 
      long cnt = (yyvsp[(4) - (5)].elist) ? (yyvsp[(4) - (5)].elist)->n : 0;
      AstEnumItem* items = NULL;
      if(cnt>0){ items=(AstEnumItem*)calloc(cnt, sizeof(*items)); for(long i=0;i<cnt;i++){ items[i] = ast_enum_item_new((yyvsp[(4) - (5)].elist)->a[i].name, (yyvsp[(4) - (5)].elist)->a[i].value); free((yyvsp[(4) - (5)].elist)->a[i].name); } }
      AstNode* en = ast_enum_new_with((yyvsp[(2) - (5)].sval), items, cnt); ast_add(en); g_last_anon_type = en; g_last_anon_is_anon = 0;
      free((yyvsp[(2) - (5)].sval));
      if((yyvsp[(4) - (5)].elist)){ free((yyvsp[(4) - (5)].elist)->a); free((yyvsp[(4) - (5)].elist)); }
    ;}
    break;

  case 113:
#line 1029 "c.y"
    {
      (yyval.sval) = strdup("enum");
      long cnt = (yyvsp[(3) - (4)].elist) ? (yyvsp[(3) - (4)].elist)->n : 0;
      AstEnumItem* items = NULL;
      if(cnt>0){ items=(AstEnumItem*)calloc(cnt, sizeof(*items)); for(long i=0;i<cnt;i++){ items[i] = ast_enum_item_new((yyvsp[(3) - (4)].elist)->a[i].name, (yyvsp[(3) - (4)].elist)->a[i].value); free((yyvsp[(3) - (4)].elist)->a[i].name); } }
      AstNode* en = ast_enum_new_with(NULL, items, cnt); g_last_anon_type = en; g_last_anon_is_anon = 1;
      if((yyvsp[(3) - (4)].elist)){ free((yyvsp[(3) - (4)].elist)->a); free((yyvsp[(3) - (4)].elist)); }
    ;}
    break;

  case 114:
#line 1037 "c.y"
    { size_t n=strlen("enum ")+strlen((yyvsp[(2) - (2)].sval))+1; (yyval.sval)=(char*)malloc(n); if((yyval.sval)){ strcpy((yyval.sval), "enum "); strcat((yyval.sval), (yyvsp[(2) - (2)].sval));} free((yyvsp[(2) - (2)].sval)); ;}
    break;

  case 115:
#line 1041 "c.y"
    { (yyval.elist) = NULL; ;}
    break;

  case 116:
#line 1042 "c.y"
    { (yyval.elist) = (yyvsp[(1) - (1)].elist); ;}
    break;

  case 117:
#line 1046 "c.y"
    { (yyval.elist) = (yyvsp[(1) - (1)].elist); ;}
    break;

  case 118:
#line 1047 "c.y"
    { (yyval.elist) = el_merge((yyvsp[(1) - (3)].elist), (yyvsp[(3) - (3)].elist)); ;}
    break;

  case 119:
#line 1051 "c.y"
    { EnumList* l=el_new(); el_push(l, (yyvsp[(1) - (1)].sval), NULL); free((yyvsp[(1) - (1)].sval)); (yyval.elist)=l; ;}
    break;

  case 120:
#line 1052 "c.y"
    { EnumList* l=el_new(); el_push(l, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].node)); free((yyvsp[(1) - (3)].sval)); (yyval.elist)=l; ;}
    break;

  case 137:
#line 1092 "c.y"
    { (yyval.sval) = strdup("()"); ;}
    break;

  case 138:
#line 1093 "c.y"
    {
      size_t n = strlen((yyvsp[(1) - (1)].sval)) + 3;
      char* s = (char*)malloc(n);
      if(s) { s[0]='\0'; strcat(s, "("); strcat(s, (yyvsp[(1) - (1)].sval)); strcat(s, ")"); }
      free((yyvsp[(1) - (1)].sval));
      (yyval.sval) = s;
    ;}
    break;

  case 139:
#line 1103 "c.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 140:
#line 1104 "c.y"
    {
      size_t n = strlen((yyvsp[(1) - (3)].sval)) + 2 + strlen((yyvsp[(3) - (3)].sval)) + 1;
      char* s = (char*)malloc(n);
      if(s) { strcpy(s, (yyvsp[(1) - (3)].sval)); strcat(s, ", "); strcat(s, (yyvsp[(3) - (3)].sval)); }
      free((yyvsp[(1) - (3)].sval)); free((yyvsp[(3) - (3)].sval));
      (yyval.sval) = s;
    ;}
    break;

  case 141:
#line 1114 "c.y"
    {
      const char* qs = ((yyvsp[(1) - (3)].sval) && (yyvsp[(1) - (3)].sval)[0]) ? (yyvsp[(1) - (3)].sval) : NULL;
      size_t n = (qs?strlen(qs)+1:0) + strlen((yyvsp[(2) - (3)].sval)) + strlen((yyvsp[(3) - (3)].sval) ? (yyvsp[(3) - (3)].sval) : "") + 1;
      char* s = (char*)malloc(n);
      if(s) { s[0]='\0'; if(qs){ strcat(s, (yyvsp[(1) - (3)].sval)); strcat(s, " "); } strcat(s, (yyvsp[(2) - (3)].sval)); if((yyvsp[(3) - (3)].sval)) strcat(s, (yyvsp[(3) - (3)].sval)); }
      (yyval.sval) = s;
      free((yyvsp[(1) - (3)].sval)); free((yyvsp[(2) - (3)].sval)); free((yyvsp[(3) - (3)].sval));
    ;}
    break;

  case 142:
#line 1122 "c.y"
    {
      const char* qs = ((yyvsp[(1) - (4)].sval) && (yyvsp[(1) - (4)].sval)[0]) ? (yyvsp[(1) - (4)].sval) : NULL;
      size_t n = (qs?strlen(qs)+1:0) + strlen((yyvsp[(2) - (4)].sval)) + strlen((yyvsp[(3) - (4)].sval) ? (yyvsp[(3) - (4)].sval) : "") + 1;
      char* s = (char*)malloc(n);
      if(s) { s[0]='\0'; if(qs){ strcat(s, (yyvsp[(1) - (4)].sval)); strcat(s, " "); } strcat(s, (yyvsp[(2) - (4)].sval)); if((yyvsp[(3) - (4)].sval)) strcat(s, (yyvsp[(3) - (4)].sval)); }
      (yyval.sval) = s;
      free((yyvsp[(1) - (4)].sval)); free((yyvsp[(2) - (4)].sval)); free((yyvsp[(3) - (4)].sval)); free((yyvsp[(4) - (4)].sval));
    ;}
    break;

  case 145:
#line 1142 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 146:
#line 1143 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 147:
#line 1144 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 148:
#line 1145 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 149:
#line 1146 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 150:
#line 1150 "c.y"
    { (yyval.node) = (AstNode*)ast_compound_new_with((yyvsp[(2) - (3)].nlist) ? (yyvsp[(2) - (3)].nlist)->a : NULL, (yyvsp[(2) - (3)].nlist) ? (yyvsp[(2) - (3)].nlist)->n : 0); if((yyvsp[(2) - (3)].nlist)) free((yyvsp[(2) - (3)].nlist)); ;}
    break;

  case 151:
#line 1154 "c.y"
    { (yyval.nlist) = NULL; ;}
    break;

  case 152:
#line 1155 "c.y"
    { (yyval.nlist) = (yyvsp[(1) - (1)].nlist); ;}
    break;

  case 153:
#line 1159 "c.y"
    { (yyval.nlist) = (yyvsp[(1) - (1)].nlist); ;}
    break;

  case 154:
#line 1160 "c.y"
    { (yyval.nlist) = nlist_merge((yyvsp[(1) - (2)].nlist), (yyvsp[(2) - (2)].nlist)); ;}
    break;

  case 155:
#line 1164 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (4)].sval)) + strlen((yyvsp[(2) - (4)].sval) ? (yyvsp[(2) - (4)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, (yyvsp[(1) - (4)].sval)); if((yyvsp[(2) - (4)].sval)) strcat(t, (yyvsp[(2) - (4)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].sval), NULL);
      free(t); free((yyvsp[(1) - (4)].sval)); free((yyvsp[(2) - (4)].sval)); /* $3 freed by decl */
      (yyval.nlist) = nlist_from1(d);
    ;}
    break;

  case 156:
#line 1172 "c.y"
    {
      const char* qs = ((yyvsp[(1) - (5)].sval) && (yyvsp[(1) - (5)].sval)[0]) ? (yyvsp[(1) - (5)].sval) : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen((yyvsp[(2) - (5)].sval)) + strlen((yyvsp[(3) - (5)].sval) ? (yyvsp[(3) - (5)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; if(qs){ strcat(t, (yyvsp[(1) - (5)].sval)); strcat(t, " "); } strcat(t, (yyvsp[(2) - (5)].sval)); if((yyvsp[(3) - (5)].sval)) strcat(t, (yyvsp[(3) - (5)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(2) - (5)].sval), (yyvsp[(4) - (5)].sval), NULL);
      free(t); free((yyvsp[(1) - (5)].sval)); free((yyvsp[(2) - (5)].sval)); free((yyvsp[(3) - (5)].sval)); /* $4 freed by decl */
      (yyval.nlist) = nlist_from1(d);
    ;}
    break;

  case 157:
#line 1181 "c.y"
    {
      const char* qs = ((yyvsp[(1) - (7)].sval) && (yyvsp[(1) - (7)].sval)[0]) ? (yyvsp[(1) - (7)].sval) : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen((yyvsp[(2) - (7)].sval)) + strlen((yyvsp[(3) - (7)].sval) ? (yyvsp[(3) - (7)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; if(qs){ strcat(t, (yyvsp[(1) - (7)].sval)); strcat(t, " "); } strcat(t, (yyvsp[(2) - (7)].sval)); if((yyvsp[(3) - (7)].sval)) strcat(t, (yyvsp[(3) - (7)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(2) - (7)].sval), (yyvsp[(4) - (7)].sval), (yyvsp[(6) - (7)].node));
      free(t); free((yyvsp[(1) - (7)].sval)); free((yyvsp[(2) - (7)].sval)); free((yyvsp[(3) - (7)].sval));
      (yyval.nlist) = nlist_from1(d);
    ;}
    break;

  case 158:
#line 1190 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (6)].sval)) + strlen((yyvsp[(2) - (6)].sval) ? (yyvsp[(2) - (6)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, (yyvsp[(1) - (6)].sval)); if((yyvsp[(2) - (6)].sval)) strcat(t, (yyvsp[(2) - (6)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(1) - (6)].sval), (yyvsp[(3) - (6)].sval), (yyvsp[(5) - (6)].node));
      free(t); free((yyvsp[(1) - (6)].sval)); free((yyvsp[(2) - (6)].sval));
      (yyval.nlist) = nlist_from1(d);
    ;}
    break;

  case 159:
#line 1198 "c.y"
    {
      const char* qs = ((yyvsp[(1) - (7)].sval) && (yyvsp[(1) - (7)].sval)[0]) ? (yyvsp[(1) - (7)].sval) : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen((yyvsp[(2) - (7)].sval)) + strlen((yyvsp[(3) - (7)].sval) ? (yyvsp[(3) - (7)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; if(qs){ strcat(t, (yyvsp[(1) - (7)].sval)); strcat(t, " "); } strcat(t, (yyvsp[(2) - (7)].sval)); if((yyvsp[(3) - (7)].sval)) strcat(t, (yyvsp[(3) - (7)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(2) - (7)].sval), (yyvsp[(4) - (7)].sval), (yyvsp[(6) - (7)].node));
      free(t); free((yyvsp[(1) - (7)].sval)); free((yyvsp[(2) - (7)].sval)); free((yyvsp[(3) - (7)].sval));
      (yyval.nlist) = nlist_from1(d);
    ;}
    break;

  case 160:
#line 1207 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (6)].sval)) + strlen((yyvsp[(2) - (6)].sval) ? (yyvsp[(2) - (6)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, (yyvsp[(1) - (6)].sval)); if((yyvsp[(2) - (6)].sval)) strcat(t, (yyvsp[(2) - (6)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(1) - (6)].sval), (yyvsp[(3) - (6)].sval), (yyvsp[(5) - (6)].node));
      free(t); free((yyvsp[(1) - (6)].sval)); free((yyvsp[(2) - (6)].sval));
      (yyval.nlist) = nlist_from1(d);
    ;}
    break;

  case 161:
#line 1215 "c.y"
    {
      const char* qs = ((yyvsp[(1) - (8)].sval) && (yyvsp[(1) - (8)].sval)[0]) ? (yyvsp[(1) - (8)].sval) : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen((yyvsp[(2) - (8)].sval)) + strlen((yyvsp[(3) - (8)].sval) ? (yyvsp[(3) - (8)].sval) : "") + strlen((yyvsp[(5) - (8)].sval) ? (yyvsp[(5) - (8)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; if(qs){ strcat(t, (yyvsp[(1) - (8)].sval)); strcat(t, " "); } strcat(t, (yyvsp[(2) - (8)].sval)); if((yyvsp[(3) - (8)].sval)) strcat(t, (yyvsp[(3) - (8)].sval)); if((yyvsp[(5) - (8)].sval)) strcat(t, (yyvsp[(5) - (8)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(2) - (8)].sval), (yyvsp[(4) - (8)].sval), (yyvsp[(7) - (8)].node));
      free(t); free((yyvsp[(1) - (8)].sval)); free((yyvsp[(2) - (8)].sval)); free((yyvsp[(3) - (8)].sval)); free((yyvsp[(5) - (8)].sval));
      (yyval.nlist) = nlist_from1(d);
    ;}
    break;

  case 162:
#line 1224 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (7)].sval)) + strlen((yyvsp[(2) - (7)].sval) ? (yyvsp[(2) - (7)].sval) : "") + strlen((yyvsp[(4) - (7)].sval) ? (yyvsp[(4) - (7)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, (yyvsp[(1) - (7)].sval)); if((yyvsp[(2) - (7)].sval)) strcat(t, (yyvsp[(2) - (7)].sval)); if((yyvsp[(4) - (7)].sval)) strcat(t, (yyvsp[(4) - (7)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(1) - (7)].sval), (yyvsp[(3) - (7)].sval), (yyvsp[(6) - (7)].node));
      free(t); free((yyvsp[(1) - (7)].sval)); free((yyvsp[(2) - (7)].sval)); free((yyvsp[(4) - (7)].sval));
      (yyval.nlist) = nlist_from1(d);
    ;}
    break;

  case 163:
#line 1233 "c.y"
    {
      const char* qs = ((yyvsp[(1) - (7)].sval) && (yyvsp[(1) - (7)].sval)[0]) ? (yyvsp[(1) - (7)].sval) : NULL; NodeList* nl=nlist_new();
      char* base = qs ? sjoin3((yyvsp[(1) - (7)].sval), " ", (yyvsp[(2) - (7)].sval)) : sdup0x((yyvsp[(2) - (7)].sval));
      AstNode* A = (g_last_anon_is_anon ? g_last_anon_type : NULL);
      char* t1=compose_type(base,(yyvsp[(3) - (7)].dstr)); AstNode* d1=ast_decl_new(t1,(yyvsp[(3) - (7)].dstr)->name,NULL); if(A){ ast_decl_attach_anon(d1, A); } free(t1); dstr_free((yyvsp[(3) - (7)].dstr)); nlist_push(nl,d1);
      char* t2=compose_type(base,(yyvsp[(5) - (7)].dstr)); AstNode* d2=ast_decl_new(t2,(yyvsp[(5) - (7)].dstr)->name,NULL); if(A){ ast_decl_attach_anon(d2, ast_type_clone(A)); } free(t2); dstr_free((yyvsp[(5) - (7)].dstr)); nlist_push(nl,d2);
      if((yyvsp[(6) - (7)].nlist)){ for(long i=0;i<(yyvsp[(6) - (7)].nlist)->n;i++){ DStr* ds=(DStr*)(yyvsp[(6) - (7)].nlist)->a[i]; char* tx=compose_type(base,ds); AstNode* dn=ast_decl_new(tx, ds->name,NULL); if(A){ ast_decl_attach_anon(dn, ast_type_clone(A)); } free(tx); dstr_free(ds); nlist_push(nl,dn);} free((yyvsp[(6) - (7)].nlist)->a); free((yyvsp[(6) - (7)].nlist)); }
      if(A){ g_last_anon_type=NULL; g_last_anon_is_anon=0; }
      free(base); free((yyvsp[(1) - (7)].sval)); free((yyvsp[(2) - (7)].sval));
      (yyval.nlist)=nl;
    ;}
    break;

  case 164:
#line 1245 "c.y"
    {
      const char* qs = ((yyvsp[(1) - (6)].sval) && (yyvsp[(1) - (6)].sval)[0]) ? (yyvsp[(1) - (6)].sval) : NULL;
      char* base = qs ? sjoin3((yyvsp[(1) - (6)].sval), " ", (yyvsp[(2) - (6)].sval)) : sdup0x((yyvsp[(2) - (6)].sval));
      char* t=compose_type(base,(yyvsp[(3) - (6)].dstr));
      AstNode* d=ast_decl_new(t? t: base, (yyvsp[(3) - (6)].dstr)->name, (yyvsp[(5) - (6)].node));
      if(g_last_anon_is_anon && g_last_anon_type){ ast_decl_attach_anon(d, g_last_anon_type); g_last_anon_type=NULL; g_last_anon_is_anon=0; }
      free(t); dstr_free((yyvsp[(3) - (6)].dstr)); free(base); free((yyvsp[(1) - (6)].sval)); free((yyvsp[(2) - (6)].sval));
      (yyval.nlist) = nlist_from1(d);
    ;}
    break;

  case 165:
#line 1254 "c.y"
    { (yyval.nlist) = nlist_from1((yyvsp[(1) - (1)].node)); ;}
    break;

  case 166:
#line 1257 "c.y"
    {
      size_t nt = strlen((yyvsp[(2) - (5)].sval)) + strlen((yyvsp[(3) - (5)].sval) ? (yyvsp[(3) - (5)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; strcat(t, (yyvsp[(2) - (5)].sval)); if((yyvsp[(3) - (5)].sval)) strcat(t, (yyvsp[(3) - (5)].sval)); }
      int ap=0; if((yyvsp[(3) - (5)].sval)){ for(const char* s=(yyvsp[(3) - (5)].sval); *s; s++) if(*s=='*') ap++; }
      AstNode* td = ast_typedef_new(t ? t : (yyvsp[(2) - (5)].sval), (yyvsp[(4) - (5)].sval), ap);
      free(t);
      (yyval.nlist) = nlist_from1(td);
    ;}
    break;

  case 167:
#line 1270 "c.y"
    { (yyval.nlist)=NULL; ;}
    break;

  case 168:
#line 1271 "c.y"
    { if(!(yyvsp[(1) - (3)].nlist)){ NodeList* nl=nlist_new(); (yyval.nlist)=nl; } nlist_push((yyvsp[(1) - (3)].nlist), (AstNode*)(yyvsp[(3) - (3)].dstr)); (yyval.nlist)=(yyvsp[(1) - (3)].nlist); ;}
    break;

  case 169:
#line 1276 "c.y"
    { DStr* d=(DStr*)calloc(1,sizeof(DStr)); d->name=sdup0x((yyvsp[(2) - (2)].dstr)->name); d->pre=sdup0x((yyvsp[(1) - (2)].sval)); d->post=sdup0x((yyvsp[(2) - (2)].dstr)->post); dstr_free((yyvsp[(2) - (2)].dstr)); free((yyvsp[(1) - (2)].sval)); (yyval.dstr)=d; ;}
    break;

  case 170:
#line 1280 "c.y"
    { DStr* d=(DStr*)calloc(1,sizeof(DStr)); d->name=(yyvsp[(1) - (1)].sval); d->pre=strdup(""); d->post=strdup(""); (yyval.dstr)=d; ;}
    break;

  case 171:
#line 1281 "c.y"
    { (yyval.dstr)=(yyvsp[(2) - (3)].dstr); ;}
    break;

  case 172:
#line 1282 "c.y"
    { char* params=(yyvsp[(5) - (6)].sval)?(yyvsp[(5) - (6)].sval):strdup("()"); (yyvsp[(2) - (6)].dstr)->post=sappend3((yyvsp[(2) - (6)].dstr)->post, "(*)", params); free((yyvsp[(5) - (6)].sval)); (yyval.dstr)=(yyvsp[(2) - (6)].dstr); ;}
    break;

  case 173:
#line 1283 "c.y"
    { char* suf=array_suffix_from_expr((yyvsp[(3) - (4)].node)); (yyvsp[(1) - (4)].dstr)->post=sappend((yyvsp[(1) - (4)].dstr)->post,suf); free(suf); (yyval.dstr)=(yyvsp[(1) - (4)].dstr); ;}
    break;

  case 174:
#line 1289 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 175:
#line 1290 "c.y"
    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 182:
#line 1306 "c.y"
    { (yyval.node) = ast_return_new((yyvsp[(2) - (3)].node)); ;}
    break;

  case 183:
#line 1307 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 184:
#line 1308 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 185:
#line 1309 "c.y"
    { free((yyvsp[(2) - (3)].sval)); (yyval.node) = NULL; ;}
    break;

  case 186:
#line 1314 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 187:
#line 1315 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 188:
#line 1319 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 189:
#line 1320 "c.y"
    { (yyval.node) = (yyvsp[(3) - (3)].node); ;}
    break;

  case 190:
#line 1324 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 191:
#line 1325 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 192:
#line 1329 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 193:
#line 1330 "c.y"
    { (yyval.node) = ast_expr_assign_new("=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 194:
#line 1331 "c.y"
    { (yyval.node) = ast_expr_assign_new("+=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 195:
#line 1332 "c.y"
    { (yyval.node) = ast_expr_assign_new("-=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 196:
#line 1333 "c.y"
    { (yyval.node) = ast_expr_assign_new("*=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 197:
#line 1334 "c.y"
    { (yyval.node) = ast_expr_assign_new("/=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 198:
#line 1335 "c.y"
    { (yyval.node) = ast_expr_assign_new("%=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 199:
#line 1336 "c.y"
    { (yyval.node) = ast_expr_assign_new("&=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 200:
#line 1337 "c.y"
    { (yyval.node) = ast_expr_assign_new("|=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 201:
#line 1338 "c.y"
    { (yyval.node) = ast_expr_assign_new("^=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 202:
#line 1339 "c.y"
    { (yyval.node) = ast_expr_assign_new("<<=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 203:
#line 1340 "c.y"
    { (yyval.node) = ast_expr_assign_new(">>=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 204:
#line 1344 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 205:
#line 1345 "c.y"
    { (yyval.node) = ast_expr_cond_new((yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 206:
#line 1349 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 207:
#line 1350 "c.y"
    { (yyval.node) = ast_expr_binary_new("||", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 208:
#line 1354 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 209:
#line 1355 "c.y"
    { (yyval.node) = ast_expr_binary_new("&&", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 210:
#line 1359 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 211:
#line 1360 "c.y"
    { (yyval.node) = ast_expr_binary_new("|", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 212:
#line 1364 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 213:
#line 1365 "c.y"
    { (yyval.node) = ast_expr_binary_new("^", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 214:
#line 1369 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 215:
#line 1370 "c.y"
    { (yyval.node) = ast_expr_binary_new("&", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 216:
#line 1374 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 217:
#line 1375 "c.y"
    { (yyval.node) = ast_expr_binary_new("==", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 218:
#line 1376 "c.y"
    { (yyval.node) = ast_expr_binary_new("!=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 219:
#line 1380 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 220:
#line 1381 "c.y"
    { (yyval.node) = ast_expr_binary_new("<", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 221:
#line 1382 "c.y"
    { (yyval.node) = ast_expr_binary_new(">", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 222:
#line 1383 "c.y"
    { (yyval.node) = ast_expr_binary_new("<=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 223:
#line 1384 "c.y"
    { (yyval.node) = ast_expr_binary_new(">=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 224:
#line 1388 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 225:
#line 1389 "c.y"
    { (yyval.node) = ast_expr_binary_new("<<", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 226:
#line 1390 "c.y"
    { (yyval.node) = ast_expr_binary_new(">>", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 227:
#line 1394 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 228:
#line 1395 "c.y"
    { (yyval.node) = ast_expr_binary_new("+", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 229:
#line 1396 "c.y"
    { (yyval.node) = ast_expr_binary_new("-", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 230:
#line 1400 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 231:
#line 1401 "c.y"
    { (yyval.node) = ast_expr_binary_new("*", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 232:
#line 1402 "c.y"
    { (yyval.node) = ast_expr_binary_new("/", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 233:
#line 1403 "c.y"
    { (yyval.node) = ast_expr_binary_new("%", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 234:
#line 1407 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 235:
#line 1408 "c.y"
    { (yyval.node) = ast_expr_unary_new("++", (yyvsp[(2) - (2)].node), 0); ;}
    break;

  case 236:
#line 1409 "c.y"
    { (yyval.node) = ast_expr_unary_new("--", (yyvsp[(2) - (2)].node), 0); ;}
    break;

  case 237:
#line 1410 "c.y"
    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 238:
#line 1411 "c.y"
    { (yyval.node) = ast_expr_unary_new("-", (yyvsp[(2) - (2)].node), 0); ;}
    break;

  case 239:
#line 1412 "c.y"
    { (yyval.node) = ast_expr_unary_new("!", (yyvsp[(2) - (2)].node), 0); ;}
    break;

  case 240:
#line 1413 "c.y"
    { (yyval.node) = ast_expr_unary_new("~", (yyvsp[(2) - (2)].node), 0); ;}
    break;

  case 241:
#line 1414 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 242:
#line 1415 "c.y"
    { free((yyvsp[(3) - (4)].sval)); (yyval.node) = NULL; ;}
    break;

  case 243:
#line 1416 "c.y"
    {
      const char* qs = ((yyvsp[(2) - (6)].sval) && (yyvsp[(2) - (6)].sval)[0]) ? (yyvsp[(2) - (6)].sval) : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen((yyvsp[(3) - (6)].sval)) + strlen((yyvsp[(4) - (6)].sval) ? (yyvsp[(4) - (6)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) {
        t[0]='\0';
        if(qs){ strcat(t, qs); strcat(t, " "); }
        strcat(t, (yyvsp[(3) - (6)].sval));
        if((yyvsp[(4) - (6)].sval)) strcat(t, (yyvsp[(4) - (6)].sval));
      }
      (yyval.node) = ast_expr_cast_new(t ? t : (yyvsp[(3) - (6)].sval), (yyvsp[(6) - (6)].node));
      free(t); free((yyvsp[(2) - (6)].sval)); free((yyvsp[(3) - (6)].sval)); free((yyvsp[(4) - (6)].sval));
    ;}
    break;

  case 244:
#line 1433 "c.y"
    { (yyval.sval) = strdup(""); ;}
    break;

  case 245:
#line 1434 "c.y"
    { (yyval.sval) = sappend((yyvsp[(1) - (2)].sval), ((yyvsp[(1) - (2)].sval) && (yyvsp[(1) - (2)].sval)[0])?" const":"const"); ;}
    break;

  case 246:
#line 1435 "c.y"
    { (yyval.sval) = sappend((yyvsp[(1) - (2)].sval), ((yyvsp[(1) - (2)].sval) && (yyvsp[(1) - (2)].sval)[0])?" volatile":"volatile"); ;}
    break;

  case 247:
#line 1436 "c.y"
    { (yyval.sval) = sappend((yyvsp[(1) - (2)].sval), ((yyvsp[(1) - (2)].sval) && (yyvsp[(1) - (2)].sval)[0])?" restrict":"restrict"); ;}
    break;

  case 248:
#line 1437 "c.y"
    { (yyval.sval) = sappend((yyvsp[(1) - (2)].sval), ((yyvsp[(1) - (2)].sval) && (yyvsp[(1) - (2)].sval)[0])?" uniq":"uniq"); ;}
    break;

  case 249:
#line 1441 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 250:
#line 1442 "c.y"
    {
      (yyval.node) = ast_expr_call_new((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].nlist) ? (yyvsp[(3) - (4)].nlist)->a : NULL, (yyvsp[(3) - (4)].nlist) ? (yyvsp[(3) - (4)].nlist)->n : 0);
      if((yyvsp[(3) - (4)].nlist)) { free((yyvsp[(3) - (4)].nlist)); }
    ;}
    break;

  case 251:
#line 1446 "c.y"
    { (yyval.node) = ast_expr_index_new((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node)); ;}
    break;

  case 252:
#line 1447 "c.y"
    { (yyval.node) = ast_expr_member_new((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].sval), 0); free((yyvsp[(3) - (3)].sval)); ;}
    break;

  case 253:
#line 1448 "c.y"
    { (yyval.node) = ast_expr_member_new((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].sval), 1); free((yyvsp[(3) - (3)].sval)); ;}
    break;

  case 254:
#line 1449 "c.y"
    { (yyval.node) = ast_expr_unary_new("++", (yyvsp[(1) - (2)].node), 1); ;}
    break;

  case 255:
#line 1450 "c.y"
    { (yyval.node) = ast_expr_unary_new("--", (yyvsp[(1) - (2)].node), 1); ;}
    break;

  case 256:
#line 1454 "c.y"
    { (yyval.nlist) = NULL; ;}
    break;

  case 257:
#line 1455 "c.y"
    { (yyval.nlist) = (yyvsp[(1) - (1)].nlist); ;}
    break;

  case 258:
#line 1459 "c.y"
    { (yyval.nlist) = nlist_from1((yyvsp[(1) - (1)].node)); ;}
    break;

  case 259:
#line 1460 "c.y"
    { nlist_push((yyvsp[(1) - (3)].nlist), (yyvsp[(3) - (3)].node)); (yyval.nlist) = (yyvsp[(1) - (3)].nlist); ;}
    break;

  case 260:
#line 1464 "c.y"
    { (yyval.node) = ast_expr_ident_new((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 261:
#line 1465 "c.y"
    { (yyval.node) = ast_expr_int_new(atol((yyvsp[(1) - (1)].sval))); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 262:
#line 1466 "c.y"
    { (yyval.node) = ast_expr_float_new(atof((yyvsp[(1) - (1)].sval))); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 263:
#line 1467 "c.y"
    { (yyval.node) = ast_expr_char_new((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 264:
#line 1468 "c.y"
    { (yyval.node) = ast_expr_string_new((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 265:
#line 1469 "c.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 266:
#line 1474 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 267:
#line 1475 "c.y"
    { (yyval.node) = (AstNode*)ast_init_list_new((yyvsp[(2) - (3)].nlist) ? (yyvsp[(2) - (3)].nlist)->a : NULL, (yyvsp[(2) - (3)].nlist) ? (yyvsp[(2) - (3)].nlist)->n : 0); if((yyvsp[(2) - (3)].nlist)) free((yyvsp[(2) - (3)].nlist)); ;}
    break;

  case 268:
#line 1479 "c.y"
    { (yyval.nlist) = NULL; ;}
    break;

  case 269:
#line 1480 "c.y"
    { (yyval.nlist) = (yyvsp[(1) - (1)].nlist); ;}
    break;

  case 270:
#line 1484 "c.y"
    { (yyval.nlist) = nlist_from1((yyvsp[(1) - (1)].node)); ;}
    break;

  case 271:
#line 1485 "c.y"
    { (yyval.nlist) = nlist_from1((yyvsp[(1) - (1)].node)); ;}
    break;

  case 272:
#line 1486 "c.y"
    { nlist_push((yyvsp[(1) - (3)].nlist), (yyvsp[(3) - (3)].node)); (yyval.nlist) = (yyvsp[(1) - (3)].nlist); ;}
    break;

  case 273:
#line 1487 "c.y"
    { nlist_push((yyvsp[(1) - (3)].nlist), (yyvsp[(3) - (3)].node)); (yyval.nlist) = (yyvsp[(1) - (3)].nlist); ;}
    break;

  case 274:
#line 1491 "c.y"
    { (yyval.node) = ast_init_desig_chain_new((yyvsp[(1) - (3)].nlist) ? (yyvsp[(1) - (3)].nlist)->a : NULL, (yyvsp[(1) - (3)].nlist) ? (yyvsp[(1) - (3)].nlist)->n : 0, (yyvsp[(3) - (3)].node)); if((yyvsp[(1) - (3)].nlist)) free((yyvsp[(1) - (3)].nlist)); ;}
    break;

  case 275:
#line 1496 "c.y"
    { (yyval.nlist) = nlist_from1((yyvsp[(1) - (1)].node)); ;}
    break;

  case 276:
#line 1497 "c.y"
    { nlist_push((yyvsp[(1) - (2)].nlist), (yyvsp[(2) - (2)].node)); (yyval.nlist) = (yyvsp[(1) - (2)].nlist); ;}
    break;

  case 277:
#line 1501 "c.y"
    { (yyval.node) = ast_desig_field_new((yyvsp[(2) - (2)].sval)); free((yyvsp[(2) - (2)].sval)); ;}
    break;

  case 278:
#line 1502 "c.y"
    { (yyval.node) = ast_desig_index_new((yyvsp[(2) - (3)].node)); ;}
    break;

  case 279:
#line 1503 "c.y"
    { (yyval.node) = ast_desig_range_new((yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 4122 "parser.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 1510 "c.y"


void yyerror(const char* s)
{
  fprintf(stderr, "parse error at line %d near '%s': %s\n", yylineno, yytext ? yytext : "", s);
}

