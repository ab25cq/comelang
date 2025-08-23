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
     KW_STRUCT = 273,
     KW_UNION = 274,
     KW_ENUM = 275,
     KW_TYPEDEF = 276,
     KW_RETURN = 277,
     KW_IF = 278,
     KW_ELSE = 279,
     KW_WHILE = 280,
     KW_FOR = 281,
     KW_DO = 282,
     KW_SWITCH = 283,
     KW_CASE = 284,
     KW_DEFAULT = 285,
     KW_BREAK = 286,
     KW_CONTINUE = 287,
     KW_GOTO = 288,
     KW_CONST = 289,
     KW_VOLATILE = 290,
     KW_RESTRICT = 291,
     KW_INLINE = 292,
     KW_EXTERN = 293,
     KW_STATIC = 294,
     KW_SIZEOF = 295,
     ELLIPSIS = 296,
     ARROW = 297,
     INC = 298,
     DEC = 299,
     LSHIFT = 300,
     RSHIFT = 301,
     LE = 302,
     GE = 303,
     EQ = 304,
     NE = 305,
     LOGAND = 306,
     LOGOR = 307,
     ADD_ASSIGN = 308,
     SUB_ASSIGN = 309,
     MUL_ASSIGN = 310,
     DIV_ASSIGN = 311,
     MOD_ASSIGN = 312,
     AND_ASSIGN = 313,
     OR_ASSIGN = 314,
     XOR_ASSIGN = 315,
     LSHIFT_ASSIGN = 316,
     RSHIFT_ASSIGN = 317,
     PREFER_EMPTY = 318
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
#define KW_STRUCT 273
#define KW_UNION 274
#define KW_ENUM 275
#define KW_TYPEDEF 276
#define KW_RETURN 277
#define KW_IF 278
#define KW_ELSE 279
#define KW_WHILE 280
#define KW_FOR 281
#define KW_DO 282
#define KW_SWITCH 283
#define KW_CASE 284
#define KW_DEFAULT 285
#define KW_BREAK 286
#define KW_CONTINUE 287
#define KW_GOTO 288
#define KW_CONST 289
#define KW_VOLATILE 290
#define KW_RESTRICT 291
#define KW_INLINE 292
#define KW_EXTERN 293
#define KW_STATIC 294
#define KW_SIZEOF 295
#define ELLIPSIS 296
#define ARROW 297
#define INC 298
#define DEC 299
#define LSHIFT 300
#define RSHIFT 301
#define LE 302
#define GE 303
#define EQ 304
#define NE 305
#define LOGAND 306
#define LOGOR 307
#define ADD_ASSIGN 308
#define SUB_ASSIGN 309
#define MUL_ASSIGN 310
#define DIV_ASSIGN 311
#define MOD_ASSIGN 312
#define AND_ASSIGN 313
#define OR_ASSIGN 314
#define XOR_ASSIGN 315
#define LSHIFT_ASSIGN 316
#define RSHIFT_ASSIGN 317
#define PREFER_EMPTY 318




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
#line 434 "parser.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 447 "parser.c"

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
#define YYLAST   960

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  79
/* YYNRULES -- Number of rules.  */
#define YYNRULES  269
/* YYNRULES -- Number of states.  */
#define YYNSTATES  526

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   318

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    76,     2,     2,     2,    75,    68,     2,
      78,    79,    73,    71,    84,    72,    82,    74,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    65,    85,
      69,    63,    70,    64,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    80,     2,    81,    67,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    86,    66,    87,    77,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    83
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     8,    10,    12,    15,    23,
      30,    37,    43,    44,    53,    61,    70,    78,    85,    92,
      99,   105,   113,   120,   128,   135,   148,   160,   174,   187,
     193,   198,   206,   213,   222,   230,   232,   235,   238,   241,
     244,   247,   250,   253,   256,   259,   260,   262,   264,   268,
     270,   274,   278,   281,   283,   286,   288,   290,   292,   294,
     296,   298,   300,   302,   304,   306,   308,   310,   312,   314,
     316,   318,   320,   322,   324,   326,   331,   336,   339,   342,
     344,   346,   348,   351,   354,   358,   363,   369,   375,   380,
     385,   388,   391,   392,   394,   396,   399,   403,   405,   409,
     411,   414,   418,   424,   429,   432,   433,   435,   437,   441,
     443,   447,   450,   451,   453,   455,   458,   461,   465,   467,
     471,   476,   481,   486,   487,   489,   491,   495,   496,   498,
     500,   504,   508,   513,   517,   521,   523,   525,   527,   529,
     531,   535,   536,   538,   540,   543,   548,   554,   562,   569,
     577,   584,   593,   601,   609,   616,   618,   624,   625,   629,
     632,   634,   638,   645,   650,   652,   655,   661,   669,   675,
     681,   689,   699,   703,   706,   709,   713,   714,   716,   718,
     722,   723,   725,   727,   731,   735,   739,   743,   747,   751,
     755,   759,   763,   767,   771,   773,   779,   781,   785,   787,
     791,   793,   797,   799,   803,   805,   809,   811,   815,   819,
     821,   825,   829,   833,   837,   839,   843,   847,   849,   853,
     857,   859,   863,   867,   871,   873,   876,   879,   882,   885,
     888,   891,   894,   899,   906,   907,   910,   913,   916,   918,
     923,   928,   932,   936,   939,   942,   943,   945,   947,   951,
     953,   955,   957,   959,   961,   965,   967,   971,   972,   974,
     976,   978,   982,   986,   990,   992,   995,   998,  1002,  1008
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      89,     0,    -1,    -1,    89,    92,    -1,    -1,    91,    -1,
      73,    -1,    91,    73,    -1,   155,   104,   133,    84,   133,
     132,    85,    -1,   104,   133,    84,   133,   132,    85,    -1,
     155,   104,   133,    63,   160,    85,    -1,   104,   133,    63,
     160,    85,    -1,    -1,   155,   104,    90,     3,    78,    94,
      79,   128,    -1,   104,    90,     3,    78,    94,    79,   128,
      -1,   155,   104,    90,     3,    78,    94,    79,    85,    -1,
     104,    90,     3,    78,    94,    79,    85,    -1,    93,     3,
      78,    94,    79,   128,    -1,    93,     3,    78,    94,    79,
      85,    -1,    21,   155,   104,    90,     3,    85,    -1,    21,
     104,    90,     3,    85,    -1,    21,   155,   104,    90,     3,
     106,    85,    -1,    21,   104,    90,     3,   106,    85,    -1,
     155,   104,    90,     3,    63,   142,    85,    -1,   104,    90,
       3,    63,   142,    85,    -1,    21,   155,   104,    90,    78,
      73,     3,    79,    78,   123,    79,    85,    -1,    21,   104,
      90,    78,    73,     3,    79,    78,   123,    79,    85,    -1,
      21,   155,   104,    90,    78,    73,     3,   106,    79,    78,
     123,    79,    85,    -1,    21,   104,    90,    78,    73,     3,
     106,    79,    78,   123,    79,    85,    -1,   155,   104,    90,
       3,    85,    -1,   104,    90,     3,    85,    -1,   155,   104,
      90,     3,    63,   160,    85,    -1,   104,    90,     3,    63,
     160,    85,    -1,   155,   104,    90,     3,   106,    63,   160,
      85,    -1,   104,    90,     3,   106,    63,   160,    85,    -1,
     126,    -1,   107,    85,    -1,   113,    85,    -1,   104,    90,
      -1,    38,    93,    -1,    39,    93,    -1,    34,    93,    -1,
      35,    93,    -1,    36,    93,    -1,    37,    93,    -1,    -1,
      95,    -1,    96,    -1,    96,    84,    41,    -1,    97,    -1,
      96,    84,    97,    -1,   155,   104,   133,    -1,   155,   104,
      -1,    99,    -1,    98,    99,    -1,   100,    -1,   104,    -1,
     101,    -1,   102,    -1,    38,    -1,    39,    -1,    34,    -1,
      35,    -1,    36,    -1,    37,    -1,     9,    -1,    10,    -1,
      11,    -1,    12,    -1,    13,    -1,    14,    -1,    15,    -1,
      16,    -1,    17,    -1,   107,    -1,    18,    86,   108,    87,
      -1,    19,    86,   108,    87,    -1,    18,     3,    -1,    19,
       3,    -1,   113,    -1,     4,    -1,   103,    -1,   104,   103,
      -1,   155,   104,    -1,    80,     6,    81,    -1,   106,    80,
       6,    81,    -1,    18,     3,    86,   108,    87,    -1,    19,
       3,    86,   108,    87,    -1,    18,    86,   108,    87,    -1,
      19,    86,   108,    87,    -1,    18,     3,    -1,    19,     3,
      -1,    -1,   109,    -1,   110,    -1,   109,   110,    -1,   105,
     111,    85,    -1,   112,    -1,   111,    84,   112,    -1,   133,
      -1,    65,   166,    -1,   133,    65,   166,    -1,    20,     3,
      86,   114,    87,    -1,    20,    86,   114,    87,    -1,    20,
       3,    -1,    -1,   115,    -1,   116,    -1,   115,    84,   116,
      -1,     3,    -1,     3,    63,   166,    -1,   118,   120,    -1,
      -1,   119,    -1,    73,    -1,    73,   101,    -1,    73,   119,
      -1,    73,   101,   119,    -1,     3,    -1,    78,   117,    79,
      -1,   120,    80,   141,    81,    -1,   120,    78,    94,    79,
      -1,   120,    78,   121,    79,    -1,    -1,   122,    -1,     3,
      -1,   122,    84,     3,    -1,    -1,   124,    -1,   125,    -1,
     124,    84,   125,    -1,   155,   104,    90,    -1,   155,   104,
      90,     3,    -1,    98,   117,   128,    -1,   104,   117,   128,
      -1,   128,    -1,   135,    -1,   136,    -1,   137,    -1,   138,
      -1,    86,   129,    87,    -1,    -1,   130,    -1,   131,    -1,
     130,   131,    -1,   104,    90,     3,    85,    -1,   155,   104,
      90,     3,    85,    -1,   155,   104,    90,     3,    63,   142,
      85,    -1,   104,    90,     3,    63,   142,    85,    -1,   155,
     104,    90,     3,    63,   160,    85,    -1,   104,    90,     3,
      63,   160,    85,    -1,   155,   104,    90,     3,   106,    63,
     160,    85,    -1,   104,    90,     3,   106,    63,   160,    85,
      -1,   155,   104,   133,    84,   133,   132,    85,    -1,   155,
     104,   133,    63,   160,    85,    -1,   127,    -1,    21,   104,
      90,     3,    85,    -1,    -1,   132,    84,   133,    -1,    90,
     134,    -1,     3,    -1,    78,   133,    79,    -1,    78,   133,
      79,    78,   123,    79,    -1,   134,    80,   141,    81,    -1,
      85,    -1,   140,    85,    -1,    23,    78,   140,    79,   127,
      -1,    23,    78,   140,    79,   127,    24,   127,    -1,    28,
      78,   140,    79,   127,    -1,    25,    78,   140,    79,   127,
      -1,    27,   127,    25,    78,   140,    79,    85,    -1,    26,
      78,   139,    85,   139,    85,   139,    79,   127,    -1,    22,
     139,    85,    -1,    31,    85,    -1,    32,    85,    -1,    33,
       3,    85,    -1,    -1,   140,    -1,   142,    -1,   140,    84,
     142,    -1,    -1,   142,    -1,   143,    -1,   154,    63,   142,
      -1,   154,    53,   142,    -1,   154,    54,   142,    -1,   154,
      55,   142,    -1,   154,    56,   142,    -1,   154,    57,   142,
      -1,   154,    58,   142,    -1,   154,    59,   142,    -1,   154,
      60,   142,    -1,   154,    61,   142,    -1,   154,    62,   142,
      -1,   144,    -1,   144,    64,   140,    65,   143,    -1,   145,
      -1,   144,    52,   145,    -1,   146,    -1,   145,    51,   146,
      -1,   147,    -1,   146,    66,   147,    -1,   148,    -1,   147,
      67,   148,    -1,   149,    -1,   148,    68,   149,    -1,   150,
      -1,   149,    49,   150,    -1,   149,    50,   150,    -1,   151,
      -1,   150,    69,   151,    -1,   150,    70,   151,    -1,   150,
      47,   151,    -1,   150,    48,   151,    -1,   152,    -1,   151,
      45,   152,    -1,   151,    46,   152,    -1,   153,    -1,   152,
      71,   153,    -1,   152,    72,   153,    -1,   154,    -1,   153,
      73,   154,    -1,   153,    74,   154,    -1,   153,    75,   154,
      -1,   156,    -1,    43,   154,    -1,    44,   154,    -1,    71,
     154,    -1,    72,   154,    -1,    76,   154,    -1,    77,   154,
      -1,    40,   154,    -1,    40,    78,   104,    79,    -1,    78,
     155,   104,    90,    79,   154,    -1,    -1,   155,    34,    -1,
     155,    35,    -1,   155,    36,    -1,   159,    -1,   156,    78,
     157,    79,    -1,   156,    80,   140,    81,    -1,   156,    82,
       3,    -1,   156,    42,     3,    -1,   156,    43,    -1,   156,
      44,    -1,    -1,   158,    -1,   142,    -1,   158,    84,   142,
      -1,     3,    -1,     6,    -1,     7,    -1,     8,    -1,     5,
      -1,    78,   140,    79,    -1,   142,    -1,    86,   161,    87,
      -1,    -1,   162,    -1,   160,    -1,   163,    -1,   162,    84,
     160,    -1,   162,    84,   163,    -1,   164,    63,   160,    -1,
     165,    -1,   164,   165,    -1,    82,     3,    -1,    80,   166,
      81,    -1,    80,   166,    41,   166,    81,    -1,   143,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   292,   292,   294,   300,   301,   305,   306,   316,   327,
     337,   347,   356,   357,   376,   393,   412,   429,   440,   451,
     463,   473,   486,   497,   508,   518,   530,   540,   553,   565,
     576,   586,   597,   607,   618,   628,   629,   630,   636,   637,
     638,   639,   640,   641,   642,   647,   648,   652,   653,   657,
     658,   662,   675,   710,   711,   715,   716,   717,   718,   722,
     723,   727,   728,   729,   733,   739,   740,   741,   742,   743,
     744,   745,   746,   747,   748,   749,   767,   785,   786,   787,
     788,   794,   795,   806,   818,   825,   836,   858,   878,   879,
     880,   881,   885,   886,   890,   891,   903,   925,   932,   942,
     949,   960,   972,   981,   989,   993,   994,   998,   999,  1003,
    1004,  1009,  1012,  1014,  1018,  1019,  1020,  1021,  1025,  1026,
    1027,  1028,  1029,  1032,  1034,  1038,  1039,  1044,  1045,  1055,
    1056,  1066,  1074,  1088,  1089,  1094,  1095,  1096,  1097,  1098,
    1102,  1106,  1107,  1111,  1112,  1116,  1124,  1133,  1142,  1150,
    1159,  1167,  1176,  1184,  1196,  1206,  1208,  1221,  1222,  1227,
    1231,  1232,  1233,  1234,  1240,  1241,  1245,  1246,  1247,  1251,
    1252,  1253,  1257,  1258,  1259,  1260,  1265,  1266,  1270,  1271,
    1275,  1276,  1280,  1281,  1282,  1283,  1284,  1285,  1286,  1287,
    1288,  1289,  1290,  1291,  1295,  1296,  1300,  1301,  1305,  1306,
    1310,  1311,  1315,  1316,  1320,  1321,  1325,  1326,  1327,  1331,
    1332,  1333,  1334,  1335,  1339,  1340,  1341,  1345,  1346,  1347,
    1351,  1352,  1353,  1354,  1358,  1359,  1360,  1361,  1362,  1363,
    1364,  1365,  1366,  1367,  1384,  1385,  1386,  1387,  1391,  1392,
    1396,  1397,  1398,  1399,  1400,  1404,  1405,  1409,  1410,  1414,
    1415,  1416,  1417,  1418,  1419,  1424,  1425,  1429,  1430,  1434,
    1435,  1436,  1437,  1441,  1446,  1447,  1451,  1452,  1453,  1457
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
  "KW_UNSIGNED", "KW_FLOAT", "KW_DOUBLE", "KW_STRUCT", "KW_UNION",
  "KW_ENUM", "KW_TYPEDEF", "KW_RETURN", "KW_IF", "KW_ELSE", "KW_WHILE",
  "KW_FOR", "KW_DO", "KW_SWITCH", "KW_CASE", "KW_DEFAULT", "KW_BREAK",
  "KW_CONTINUE", "KW_GOTO", "KW_CONST", "KW_VOLATILE", "KW_RESTRICT",
  "KW_INLINE", "KW_EXTERN", "KW_STATIC", "KW_SIZEOF", "ELLIPSIS", "ARROW",
  "INC", "DEC", "LSHIFT", "RSHIFT", "LE", "GE", "EQ", "NE", "LOGAND",
  "LOGOR", "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "AND_ASSIGN", "OR_ASSIGN", "XOR_ASSIGN", "LSHIFT_ASSIGN",
  "RSHIFT_ASSIGN", "'='", "'?'", "':'", "'|'", "'^'", "'&'", "'<'", "'>'",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "'~'", "'('", "')'", "'['",
  "']'", "'.'", "PREFER_EMPTY", "','", "';'", "'{'", "'}'", "$accept",
  "translation_unit", "star_list_opt", "star_list", "external_declaration",
  "func_decl_specs", "parameter_type_list_opt", "parameter_type_list",
  "parameter_list", "parameter_declaration", "declaration_specifiers",
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
     315,   316,   317,    61,    63,    58,   124,    94,    38,    60,
      62,    43,    45,    42,    47,    37,    33,   126,    40,    41,
      91,    93,    46,   318,    44,    59,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    89,    90,    90,    91,    91,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    93,    93,
      93,    93,    93,    93,    93,    94,    94,    95,    95,    96,
      96,    97,    97,    98,    98,    99,    99,    99,    99,   100,
     100,   101,   101,   101,   102,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   104,   104,   105,   106,   106,   107,   107,   107,   107,
     107,   107,   108,   108,   109,   109,   110,   111,   111,   112,
     112,   112,   113,   113,   113,   114,   114,   115,   115,   116,
     116,   117,   118,   118,   119,   119,   119,   119,   120,   120,
     120,   120,   120,   121,   121,   122,   122,   123,   123,   124,
     124,   125,   125,   126,   126,   127,   127,   127,   127,   127,
     128,   129,   129,   130,   130,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   132,   132,   133,
     134,   134,   134,   134,   135,   135,   136,   136,   136,   137,
     137,   137,   138,   138,   138,   138,   139,   139,   140,   140,
     141,   141,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   143,   143,   144,   144,   145,   145,
     146,   146,   147,   147,   148,   148,   149,   149,   149,   150,
     150,   150,   150,   150,   151,   151,   151,   152,   152,   152,
     153,   153,   153,   153,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   155,   155,   155,   155,   156,   156,
     156,   156,   156,   156,   156,   157,   157,   158,   158,   159,
     159,   159,   159,   159,   159,   160,   160,   161,   161,   162,
     162,   162,   162,   163,   164,   164,   165,   165,   165,   166
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     0,     1,     1,     2,     7,     6,
       6,     5,     0,     8,     7,     8,     7,     6,     6,     6,
       5,     7,     6,     7,     6,    12,    11,    13,    12,     5,
       4,     7,     6,     8,     7,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     0,     1,     1,     3,     1,
       3,     3,     2,     1,     2,     1,     1,     1,     1,     1,
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
       2,     2,     4,     6,     0,     2,     2,     2,     1,     4,
       4,     3,     3,     2,     2,     0,     1,     1,     3,     1,
       1,     1,     1,     1,     3,     1,     3,     0,     1,     1,
       1,     3,     3,     3,     1,     2,     2,     3,     5,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,    80,    65,    66,    67,    68,    69,    70,
      71,    72,    73,     0,     0,     0,   234,    61,    62,    63,
      64,    59,    60,     3,     0,   112,    53,    55,    57,    58,
      81,    56,    74,    79,    35,     0,    77,   234,    78,   234,
     104,   105,     4,    74,    79,     0,     0,     0,     0,     0,
       0,     0,    41,     4,    42,    43,    44,    39,    40,     0,
      61,    62,    63,    64,    59,    60,   114,    54,    56,     0,
       0,   113,     6,     0,     5,    82,     0,     0,    36,    37,
     235,   236,   237,     4,   234,     4,     0,   234,    94,     0,
     234,     0,   105,   109,     0,   106,   107,     6,     0,     4,
      38,   234,   115,   116,   234,   133,   118,   112,   111,   160,
       4,   159,     7,   134,     0,     4,     0,     0,     0,     0,
       0,     0,    97,    99,    75,    95,    83,     0,    76,     0,
       0,   103,     0,     0,     0,     0,     0,    46,    47,    49,
       0,   117,   249,   253,   250,   251,   252,     0,   176,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   234,   164,     4,   155,   135,     0,
     234,   143,   136,   137,   138,   139,     0,   178,   182,   194,
     196,   198,   200,   202,   204,   206,   209,   214,   217,   220,
       0,   224,   238,     0,   234,   180,     0,   234,     0,    30,
       0,     0,   180,   257,   255,     0,   157,   160,     0,     4,
      86,   269,   220,   100,   160,     4,    96,     0,    87,   102,
     110,   108,    20,     0,     0,     0,     0,     0,   234,     4,
       4,     0,   177,     0,     0,   176,     0,     0,   173,   174,
       0,   234,   231,   225,   226,   227,   228,   229,   230,     0,
       0,     0,   140,   144,     0,   165,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     4,     0,   243,   244,
     245,     0,     0,   119,   125,     0,     0,   124,     0,   181,
       0,     0,     0,     0,     0,     0,   161,     0,     0,     0,
     259,     0,   258,   260,     0,   264,    11,     0,     0,   234,
      29,     0,     0,   157,    98,   101,    22,     0,    19,     0,
       0,    18,    17,    48,    50,    51,     0,   172,     0,     0,
       0,     0,     0,   175,     0,   254,     4,     0,   179,   197,
       0,   199,   201,   203,   205,   207,   208,   212,   213,   210,
     211,   215,   216,   218,   219,   221,   222,   223,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   183,     0,
       0,   242,   247,     0,   246,     0,   241,   121,   122,     0,
     120,    24,    32,     0,    84,     0,     0,   234,   163,     0,
     266,   256,     0,     0,   265,     4,     9,     0,     0,     0,
       0,    10,     0,     0,     0,    21,     0,     0,     0,     0,
     176,     0,     0,   232,     0,     0,   145,     0,     0,   160,
       0,     4,   239,     0,   240,   126,    16,    14,    34,    85,
       0,   128,   129,     0,     0,   267,   261,   262,   263,   158,
      23,    31,     0,     0,     8,   234,     0,     0,     0,   156,
     166,   169,     0,     0,   168,     0,     0,     0,     0,   195,
       0,   146,     0,     0,   157,   248,   162,   234,     4,     0,
      15,    13,    33,     0,   234,   234,     0,     0,   176,     0,
     233,   148,   150,     0,     0,     0,     0,   154,     0,   130,
     131,   268,     0,     0,     0,   234,   167,     0,   170,   152,
     147,   149,     0,   153,   132,    26,     0,     0,     0,     0,
     151,    28,    25,     0,   171,    27
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   120,    74,    23,    52,   136,   137,   138,   139,
      25,    26,    27,    28,    29,    30,    53,    85,   200,    43,
      86,    87,    88,   121,   122,    44,    94,    95,    96,    69,
      70,    71,   108,   296,   297,   440,   441,   442,    34,   167,
     168,   169,   170,   171,   317,   123,   111,   172,   173,   174,
     175,   231,   176,   298,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   443,   191,   383,
     384,   192,   205,   311,   312,   313,   314,   315,   213
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -435
static const yytype_int16 yypact[] =
{
    -435,   840,  -435,  -435,  -435,  -435,  -435,  -435,  -435,  -435,
    -435,  -435,  -435,     7,    11,    13,   940,   876,   876,   876,
     876,   876,   876,  -435,    28,   800,  -435,  -435,  -435,  -435,
    -435,   695,   -50,   -25,  -435,   912,   117,    -2,   160,    -2,
     -24,    86,   540,  -435,  -435,   912,   876,   876,   876,   876,
     876,   876,  -435,   540,  -435,  -435,  -435,  -435,  -435,    14,
    -435,  -435,  -435,  -435,  -435,  -435,    44,  -435,   940,    73,
      24,  -435,   159,    25,    48,  -435,    73,     2,  -435,  -435,
    -435,  -435,  -435,   540,    -2,   107,    21,    92,  -435,   912,
      -2,   109,    86,   114,   154,    16,  -435,  -435,    26,   540,
    -435,   164,   181,  -435,   490,  -435,  -435,   181,    72,   -22,
     184,   179,  -435,  -435,   338,   184,    31,    49,   195,   713,
      35,   152,  -435,   239,   177,  -435,   940,   232,   227,   242,
     713,  -435,    86,   135,   261,    36,   259,  -435,   258,  -435,
     912,  -435,  -435,  -435,  -435,  -435,  -435,   940,   713,   275,
     279,   280,   651,   285,   281,   282,   361,   755,   713,   713,
     713,   713,   713,   713,   713,  -435,   540,  -435,  -435,   278,
     575,  -435,  -435,  -435,  -435,  -435,   168,  -435,  -435,   102,
     319,   305,   307,   311,   215,    -3,   221,   197,   175,   809,
     912,    85,  -435,   296,    17,   713,   338,   164,   374,  -435,
     -33,   304,   713,    67,  -435,   299,  -435,    45,   338,   184,
    -435,  -435,  -435,  -435,  -435,   107,  -435,   713,  -435,  -435,
    -435,  -435,  -435,   136,   382,   137,   313,   188,   346,   463,
     540,   308,   306,   713,   713,   713,   367,   713,  -435,  -435,
     310,   625,  -435,  -435,  -435,  -435,  -435,  -435,  -435,   144,
     912,   395,  -435,  -435,   713,  -435,   713,   713,   713,   713,
     713,   713,   713,   713,   713,   713,   713,   713,   713,   713,
     713,   713,   713,   713,   713,   713,   713,   713,   713,   713,
     713,   713,   713,   713,   713,   713,   540,   397,  -435,  -435,
     713,   713,   398,  -435,  -435,   323,   325,   321,   326,  -435,
     327,   328,   329,   336,   338,   400,   341,   339,   713,   419,
    -435,   340,   342,  -435,    88,  -435,  -435,   196,   338,   164,
    -435,    93,   348,  -435,  -435,  -435,  -435,   223,  -435,   146,
     420,  -435,  -435,  -435,  -435,  -435,   432,  -435,   145,   148,
     352,   360,   151,  -435,   729,  -435,   540,   -21,  -435,   319,
      -8,   305,   307,   311,   215,    -3,    -3,   221,   221,   221,
     221,   197,   197,   175,   175,  -435,  -435,  -435,  -435,  -435,
    -435,  -435,  -435,  -435,  -435,  -435,  -435,  -435,  -435,    37,
      71,  -435,  -435,   362,   355,   -23,  -435,  -435,  -435,   437,
    -435,  -435,  -435,   236,  -435,   357,   364,   370,  -435,     0,
    -435,  -435,    67,   338,  -435,   184,  -435,   358,   365,   372,
     338,  -435,   225,   368,   244,  -435,   247,   369,   651,   651,
     713,   713,   651,  -435,   377,   338,  -435,    95,   713,   378,
     338,   184,  -435,   713,  -435,  -435,  -435,  -435,  -435,  -435,
     385,   384,  -435,   912,   713,  -435,  -435,  -435,  -435,  -435,
    -435,  -435,   251,   381,  -435,   370,   375,   391,   268,  -435,
     446,  -435,   399,   155,  -435,   713,   401,   402,   338,  -435,
     338,  -435,    98,   403,  -435,  -435,  -435,  -435,   540,   404,
    -435,  -435,  -435,   411,   370,   370,   413,   651,   713,   429,
    -435,  -435,  -435,   434,   435,   439,   338,  -435,   265,  -435,
     486,  -435,   440,   447,   448,   370,  -435,   449,  -435,  -435,
    -435,  -435,   444,  -435,  -435,  -435,   450,   452,   453,   651,
    -435,  -435,  -435,   454,  -435,  -435
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -435,  -435,   -30,  -435,  -435,   410,  -179,  -435,  -435,   303,
    -435,   513,  -435,    22,  -435,   -31,     1,  -435,  -109,   539,
      -7,  -435,   458,  -435,   331,   547,   471,  -435,   409,    -6,
    -435,   -18,  -435,  -435,  -435,  -434,  -435,    94,  -435,  -147,
     -63,  -435,  -435,   394,  -314,   -28,  -435,  -435,  -435,  -435,
    -435,  -228,  -115,   363,   -71,  -111,  -435,   314,   315,   345,
     309,   344,    89,    12,    87,    90,    27,   224,  -435,  -435,
    -435,  -435,   -34,  -435,  -435,   170,  -435,   260,  -126
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -143
static const yytype_int16 yytable[] =
{
      75,    73,    31,    77,   220,   236,   105,   340,   211,   412,
      36,    75,    98,   113,    38,   295,    40,    42,   302,   211,
     294,   483,    75,   100,   223,    76,    68,   106,   109,   133,
     304,    59,    91,   232,   207,    78,    83,    75,   214,   225,
     429,   444,   425,   204,   264,   265,    99,   305,   103,   249,
     503,   504,    75,   116,   103,   117,   197,   428,   434,   198,
      79,   254,    92,   199,   426,   114,   266,   267,    75,   135,
     142,   518,   143,   144,   145,   146,   254,   118,    60,    61,
      62,   445,   201,   127,   141,   -92,   115,   206,   102,    93,
     126,   325,   101,    37,   102,    75,   -45,    39,   321,    41,
     132,   193,   107,   110,   134,   166,   211,   157,   124,   110,
     158,   159,   208,   110,   226,   110,   329,    66,   338,   339,
     232,   112,   342,   319,   299,   300,   249,   287,   288,   289,
     320,   299,   204,   209,   430,    75,   251,   204,   160,   161,
     409,   229,   350,   162,   163,   164,   212,   308,   230,   309,
     194,   403,   195,   203,   256,   431,   410,   212,   468,   104,
     498,   496,   301,   290,   332,   291,   257,   292,   308,   310,
     309,   166,   119,   305,   322,   305,   385,   130,   305,   -93,
      97,   323,   399,   348,   242,   243,   244,   245,   246,   247,
     248,   286,   462,    60,    61,    62,   128,   211,    75,    75,
     336,   335,   -90,    84,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   198,   305,   198,   414,   382,
     222,   326,   328,   345,   418,    35,   305,   419,   254,   254,
     422,   415,   254,   204,   489,   254,   215,   216,   427,   254,
      45,   131,   344,   -45,   212,   -91,    90,   407,   272,   273,
     274,   346,   254,   255,    66,    75,   379,    97,   380,   202,
     507,    89,   -88,    89,   262,   263,   268,   269,   270,   271,
     395,   460,   461,   331,   104,   464,   357,   358,   359,   360,
     405,   406,   210,   212,   408,   212,   212,   212,   212,   212,
     212,   212,   212,   212,   212,   212,   212,   212,   212,   365,
     366,   367,   413,   198,   217,   232,   463,   458,    89,   405,
     454,    89,   -89,    75,    89,    75,   424,   469,   479,   218,
     472,   436,   104,   456,   305,   140,   457,   198,   190,   219,
     437,   204,   204,   211,   224,   212,   480,   104,   227,   204,
     506,   142,   228,   143,   144,   145,   146,   486,   305,   405,
     513,   355,   356,   233,   466,   361,   362,   234,   235,   204,
     363,   364,   475,   237,   240,   252,   238,   239,   446,   448,
     258,   259,   524,   232,   260,   293,   453,   449,   157,   261,
     303,   158,   159,   306,   316,   327,   330,   333,   250,   481,
     254,   467,   341,   337,   190,   343,   473,   204,   347,   494,
     381,   386,   387,   474,   388,   389,   396,   390,   393,   160,
     161,    24,   391,   392,   162,   163,   164,   394,   140,   397,
     398,   140,   400,   416,   203,   204,   402,   401,    54,    55,
      56,    57,    58,   411,   493,   417,   495,   420,   421,   433,
     435,   432,   438,   450,   478,   439,   455,    75,   500,  -127,
     451,   452,   140,   484,   459,   212,   465,    54,    55,    56,
      57,    58,   512,   471,   476,   250,   482,     3,   477,   485,
     487,   212,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,   488,   501,   491,   492,   497,   514,
     502,   505,   490,   142,     3,   143,   144,   145,   146,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,   147,   148,   149,   508,   150,   151,   152,   153,   509,
     510,   154,   155,   156,   511,   515,   516,   517,   519,   520,
     157,   334,   523,   158,   159,   521,    97,   522,    67,   525,
      32,   221,   -52,   140,     3,   125,   324,   -52,    33,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,   160,   161,   129,   253,   307,   162,   163,   164,   353,
     349,   499,   447,   351,   404,   165,   104,  -141,   142,     3,
     143,   144,   145,   146,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,   147,   148,   149,     0,
     150,   151,   152,   153,   352,   354,   154,   155,   156,     0,
       0,     0,     0,    97,     0,   157,     0,     0,   158,   159,
       0,     0,     0,     0,     0,     0,     0,     0,   142,     3,
     143,   144,   145,   146,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,   160,   161,     0,     0,
       0,   162,   163,   164,   142,     0,   143,   144,   145,   146,
     165,   104,  -142,     0,     0,   157,     0,     0,   158,   159,
       0,     0,     0,   148,   149,     0,   150,   151,   152,   153,
       0,     0,   154,   155,   156,     0,     0,     0,     0,     0,
       0,   157,     0,     0,   158,   159,   160,   161,    -4,     3,
       0,   162,   163,   164,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,   142,     0,   143,   144,
     145,   146,   160,   161,     0,     0,     0,   162,   163,   164,
       0,     0,     0,     3,     0,     0,   165,   104,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,   157,     0,     0,   158,   159,   142,     0,
     143,   144,   145,   146,     0,     0,     0,     0,    72,     0,
       0,     0,     0,    -4,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   160,   161,     0,     0,     0,   162,
     163,   164,     0,     0,     0,   157,     0,     0,   158,   159,
       0,     0,     0,     0,     3,     0,     0,     0,   423,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,     0,     0,     0,     0,     0,   160,   161,     0,     0,
       0,   162,   163,   241,    60,    61,    62,    63,    64,    65,
       2,     0,     0,     0,     3,     0,     0,     0,     0,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,    66,    17,    18,    19,    20,    21,    22,
       3,     0,     0,     0,     0,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      46,    47,    48,    49,    50,    51,     3,     0,     0,     0,
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     3,     0,    80,    81,    82,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15
};

static const yytype_int16 yycheck[] =
{
      31,    31,     1,    31,   130,   152,    69,   235,   119,   323,
       3,    42,    42,    76,     3,   194,     3,    16,   197,   130,
       3,   455,    53,    53,   133,    31,    25,     3,     3,     3,
      63,     3,    39,   148,     3,    85,    35,    68,     3,     3,
       3,    41,    63,   114,    47,    48,    45,    80,    66,   164,
     484,   485,    83,    83,    72,    83,    78,    65,    81,    80,
      85,    84,    86,    85,    85,    63,    69,    70,    99,    99,
       3,   505,     5,     6,     7,     8,    84,    84,    34,    35,
      36,    81,   110,    90,   102,    87,    84,   115,    66,     3,
      89,   217,    78,    86,    72,   126,    79,    86,   207,    86,
      84,   107,    78,    78,    78,   104,   217,    40,    87,    78,
      43,    44,    63,    78,    78,    78,   225,    73,   233,   234,
     235,    73,   237,    78,   195,   196,   241,    42,    43,    44,
      85,   202,   203,    84,    63,   166,   166,   208,    71,    72,
     319,   140,   257,    76,    77,    78,   119,    80,   147,    82,
      78,    63,    80,    86,    52,    84,    63,   130,    63,    86,
     474,    63,   196,    78,   227,    80,    64,    82,    80,   203,
      82,   170,    65,    80,   208,    80,   291,    63,    80,    87,
      73,   209,   308,   254,   157,   158,   159,   160,   161,   162,
     163,   190,   420,    34,    35,    36,    87,   308,   229,   230,
     230,   229,    85,    86,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,    80,    80,    80,   327,   290,
      85,    85,    85,    79,    79,     1,    80,    79,    84,    84,
      79,    85,    84,   304,    79,    84,    84,    85,   347,    84,
      16,    87,   241,    79,   217,    85,    86,   318,    73,    74,
      75,   250,    84,    85,    73,   286,   286,    73,   286,    80,
     488,    37,    85,    39,    49,    50,    45,    46,    71,    72,
     304,   418,   419,    85,    86,   422,   264,   265,   266,   267,
      84,    85,    87,   256,   318,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,    79,    80,    65,   420,   421,   416,    84,    84,
      85,    87,    85,   344,    90,   346,   346,   428,   444,    87,
     429,    85,    86,    79,    80,   101,    79,    80,   104,    87,
     393,   402,   403,   444,    73,   308,    85,    86,    79,   410,
     487,     3,    84,     5,     6,     7,     8,    79,    80,    84,
      85,   262,   263,    78,   425,   268,   269,    78,    78,   430,
     270,   271,   433,    78,     3,    87,    85,    85,   402,   403,
      51,    66,   519,   488,    67,    79,   410,   405,    40,    68,
       6,    43,    44,    79,    85,     3,    73,    41,   164,   452,
      84,   425,    25,    85,   170,    85,   430,   468,     3,   470,
       3,     3,    79,   431,    79,    84,     6,    81,    79,    71,
      72,     1,    85,    85,    76,    77,    78,    81,   194,    78,
      81,   197,     3,     3,    86,   496,    84,    87,    18,    19,
      20,    21,    22,    85,   468,     3,   470,    85,    78,    84,
       3,    79,    85,    85,   443,    81,    78,   478,   478,    79,
      85,    79,   228,    78,    85,   428,    79,    47,    48,    49,
      50,    51,   496,    85,    79,   241,    85,     4,    84,    78,
      24,   444,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    85,    81,    85,    85,    85,     3,
      79,    78,   465,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    85,    25,    26,    27,    28,    85,
      85,    31,    32,    33,    85,    85,    79,    79,    79,    85,
      40,   228,    79,    43,    44,    85,    73,    85,    25,    85,
       1,   132,    79,   319,     4,    87,   215,    84,     1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    71,    72,    92,   170,   202,    76,    77,    78,   260,
     256,   477,   402,   258,   314,    85,    86,    87,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      25,    26,    27,    28,   259,   261,    31,    32,    33,    -1,
      -1,    -1,    -1,    73,    -1,    40,    -1,    -1,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    71,    72,    -1,    -1,
      -1,    76,    77,    78,     3,    -1,     5,     6,     7,     8,
      85,    86,    87,    -1,    -1,    40,    -1,    -1,    43,    44,
      -1,    -1,    -1,    22,    23,    -1,    25,    26,    27,    28,
      -1,    -1,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    43,    44,    71,    72,     3,     4,
      -1,    76,    77,    78,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,     3,    -1,     5,     6,
       7,     8,    71,    72,    -1,    -1,    -1,    76,    77,    78,
      -1,    -1,    -1,     4,    -1,    -1,    85,    86,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    40,    -1,    -1,    43,    44,     3,    -1,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    73,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    76,
      77,    78,    -1,    -1,    -1,    40,    -1,    -1,    43,    44,
      -1,    -1,    -1,    -1,     4,    -1,    -1,    -1,    79,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    71,    72,    -1,    -1,
      -1,    76,    77,    78,    34,    35,    36,    37,    38,    39,
       0,    -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    73,    34,    35,    36,    37,    38,    39,
       4,    -1,    -1,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,     4,    -1,    -1,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,    -1,    34,    35,    36,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    89,     0,     4,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    34,    35,    36,
      37,    38,    39,    92,    93,    98,    99,   100,   101,   102,
     103,   104,   107,   113,   126,   155,     3,    86,     3,    86,
       3,    86,   104,   107,   113,   155,    34,    35,    36,    37,
      38,    39,    93,   104,    93,    93,    93,    93,    93,     3,
      34,    35,    36,    37,    38,    39,    73,    99,   104,   117,
     118,   119,    73,    90,    91,   103,   117,   133,    85,    85,
      34,    35,    36,   104,    86,   105,   108,   109,   110,   155,
      86,   108,    86,     3,   114,   115,   116,    73,    90,   104,
      90,    78,   101,   119,    86,   128,     3,    78,   120,     3,
      78,   134,    73,   128,    63,    84,    90,   133,   108,    65,
      90,   111,   112,   133,    87,   110,   104,   108,    87,   114,
      63,    87,    84,     3,    78,    90,    94,    95,    96,    97,
     155,   119,     3,     5,     6,     7,     8,    21,    22,    23,
      25,    26,    27,    28,    31,    32,    33,    40,    43,    44,
      71,    72,    76,    77,    78,    85,   104,   127,   128,   129,
     130,   131,   135,   136,   137,   138,   140,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   159,   117,    78,    80,    63,    78,    80,    85,
     106,   133,    80,    86,   142,   160,   133,     3,    63,    84,
      87,   143,   154,   166,     3,    84,    85,    65,    87,    87,
     166,   116,    85,   106,    73,     3,    78,    79,    84,   104,
     104,   139,   140,    78,    78,    78,   127,    78,    85,    85,
       3,    78,   154,   154,   154,   154,   154,   154,   154,   140,
     155,    90,    87,   131,    84,    85,    52,    64,    51,    66,
      67,    68,    49,    50,    47,    48,    69,    70,    45,    46,
      71,    72,    73,    74,    75,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,   104,    42,    43,    44,
      78,    80,    82,    79,     3,    94,   121,   122,   141,   142,
     142,   160,    94,     6,    63,    80,    79,   141,    80,    82,
     160,   161,   162,   163,   164,   165,    85,   132,    63,    78,
      85,   106,   160,   133,   112,   166,    85,     3,    85,   106,
      73,    85,   128,    41,    97,   133,    90,    85,   140,   140,
     139,    25,   140,    85,   104,    79,   104,     3,   142,   145,
     140,   146,   147,   148,   149,   150,   150,   151,   151,   151,
     151,   152,   152,   153,   153,   154,   154,   154,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,    90,
     133,     3,   142,   157,   158,   140,     3,    79,    79,    84,
      81,    85,    85,    79,    81,   160,     6,    78,    81,   166,
       3,    87,    84,    63,   165,    84,    85,   142,   160,    94,
      63,    85,   132,    79,   106,    85,     3,     3,    79,    79,
      85,    78,    79,    79,    90,    63,    85,   106,    65,     3,
      63,    84,    79,    84,    81,     3,    85,   128,    85,    81,
     123,   124,   125,   155,    41,    81,   160,   163,   160,   133,
      85,    85,    79,   160,    85,    78,    79,    79,   106,    85,
     127,   127,   139,   140,   127,    79,   142,   160,    63,   143,
      63,    85,   106,   160,   133,   142,    79,    84,   104,   166,
      85,   128,    85,   123,    78,    78,    79,    24,    85,    79,
     154,    85,    85,   160,   142,   160,    63,    85,   132,   125,
      90,    81,    79,   123,   123,    78,   127,   139,    85,    85,
      85,    85,   160,    85,     3,    85,    79,    79,   123,    79,
      85,    85,    85,    79,   127,    85
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
#line 1939 "parser.c"
	break;
      case 5: /* "STRING_LITERAL" */
#line 208 "c.y"
	{ free((yyvaluep->sval)); };
#line 1944 "parser.c"
	break;
      case 6: /* "INTEGER_CONSTANT" */
#line 208 "c.y"
	{ free((yyvaluep->sval)); };
#line 1949 "parser.c"
	break;
      case 7: /* "FLOAT_CONSTANT" */
#line 208 "c.y"
	{ free((yyvaluep->sval)); };
#line 1954 "parser.c"
	break;
      case 8: /* "CHAR_CONSTANT" */
#line 208 "c.y"
	{ free((yyvaluep->sval)); };
#line 1959 "parser.c"
	break;
      case 90: /* "star_list_opt" */
#line 208 "c.y"
	{ free((yyvaluep->sval)); };
#line 1964 "parser.c"
	break;
      case 91: /* "star_list" */
#line 208 "c.y"
	{ free((yyvaluep->sval)); };
#line 1969 "parser.c"
	break;
      case 103: /* "type_unit" */
#line 208 "c.y"
	{ free((yyvaluep->sval)); };
#line 1974 "parser.c"
	break;
      case 104: /* "type_specifier" */
#line 208 "c.y"
	{ free((yyvaluep->sval)); };
#line 1979 "parser.c"
	break;
      case 106: /* "array_dims" */
#line 208 "c.y"
	{ free((yyvaluep->sval)); };
#line 1984 "parser.c"
	break;
      case 155: /* "type_qualifier_seq_opt" */
#line 208 "c.y"
	{ free((yyvaluep->sval)); };
#line 1989 "parser.c"
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
#line 300 "c.y"
    { (yyval.sval) = strdup(""); ;}
    break;

  case 5:
#line 301 "c.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 6:
#line 305 "c.y"
    { (yyval.sval) = strdup("*"); ;}
    break;

  case 7:
#line 306 "c.y"
    {
      size_t n = strlen((yyvsp[(1) - (2)].sval)) + 2;
      char* s = (char*)malloc(n);
      if(s) { strcpy(s, (yyvsp[(1) - (2)].sval)); strcat(s, "*"); }
      free((yyvsp[(1) - (2)].sval));
      (yyval.sval) = s;
    ;}
    break;

  case 8:
#line 317 "c.y"
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

  case 9:
#line 328 "c.y"
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

  case 10:
#line 338 "c.y"
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

  case 11:
#line 348 "c.y"
    {
      char* base=(yyvsp[(1) - (5)].sval);
      char* t=compose_type(base,(yyvsp[(2) - (5)].dstr));
      AstNode* d=ast_decl_new(t? t: base, (yyvsp[(2) - (5)].dstr)->name, (yyvsp[(4) - (5)].node));
      if(g_last_anon_is_anon && g_last_anon_type){ ast_decl_attach_anon(d, g_last_anon_type); g_last_anon_type=NULL; g_last_anon_is_anon=0; }
      free(t); dstr_free((yyvsp[(2) - (5)].dstr)); free(base);
      ast_add(d);
    ;}
    break;

  case 13:
#line 358 "c.y"
    {
      const char* qs = ((yyvsp[(1) - (8)].sval) && (yyvsp[(1) - (8)].sval)[0]) ? (yyvsp[(1) - (8)].sval) : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen((yyvsp[(2) - (8)].sval)) + strlen((yyvsp[(3) - (8)].sval) ? (yyvsp[(3) - (8)].sval) : "") + 1;
      char* rt = (char*)malloc(nt);
      if(rt) { rt[0] = '\0'; if(qs){ strcat(rt, (yyvsp[(1) - (8)].sval)); strcat(rt, " "); } strcat(rt, (yyvsp[(2) - (8)].sval)); if((yyvsp[(3) - (8)].sval)) strcat(rt, (yyvsp[(3) - (8)].sval)); }
      AstFunction* f = ast_function_new((yyvsp[(4) - (8)].sval),
        rt ? rt : (yyvsp[(2) - (8)].sval),
        0,
        (yyvsp[(6) - (8)].plist) ? (yyvsp[(6) - (8)].plist)->a : NULL,
        (yyvsp[(6) - (8)].plist) ? (yyvsp[(6) - (8)].plist)->n : 0,
        (yyvsp[(8) - (8)].node));
      ast_add((AstNode*)f);
      free(rt);
      free((yyvsp[(1) - (8)].sval));
      free((yyvsp[(2) - (8)].sval));
      free((yyvsp[(3) - (8)].sval));
      if((yyvsp[(6) - (8)].plist)) { free((yyvsp[(6) - (8)].plist)); }
    ;}
    break;

  case 14:
#line 377 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (7)].sval)) + strlen((yyvsp[(2) - (7)].sval) ? (yyvsp[(2) - (7)].sval) : "") + 1;
      char* rt = (char*)malloc(nt);
      if(rt) { rt[0] = '\0'; strcat(rt, (yyvsp[(1) - (7)].sval)); if((yyvsp[(2) - (7)].sval)) strcat(rt, (yyvsp[(2) - (7)].sval)); }
      AstFunction* f = ast_function_new((yyvsp[(3) - (7)].sval),
        rt ? rt : (yyvsp[(1) - (7)].sval),
        0,
        (yyvsp[(5) - (7)].plist) ? (yyvsp[(5) - (7)].plist)->a : NULL,
        (yyvsp[(5) - (7)].plist) ? (yyvsp[(5) - (7)].plist)->n : 0,
        (yyvsp[(7) - (7)].node));
      ast_add((AstNode*)f);
      free(rt);
      free((yyvsp[(1) - (7)].sval));
      free((yyvsp[(2) - (7)].sval));
      if((yyvsp[(5) - (7)].plist)) { free((yyvsp[(5) - (7)].plist)); }
    ;}
    break;

  case 15:
#line 394 "c.y"
    {
      const char* qs = ((yyvsp[(1) - (8)].sval) && (yyvsp[(1) - (8)].sval)[0]) ? (yyvsp[(1) - (8)].sval) : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen((yyvsp[(2) - (8)].sval)) + strlen((yyvsp[(3) - (8)].sval) ? (yyvsp[(3) - (8)].sval) : "") + 1;
      char* rt = (char*)malloc(nt);
      if(rt) { rt[0] = '\0'; if(qs){ strcat(rt, (yyvsp[(1) - (8)].sval)); strcat(rt, " "); } strcat(rt, (yyvsp[(2) - (8)].sval)); if((yyvsp[(3) - (8)].sval)) strcat(rt, (yyvsp[(3) - (8)].sval)); }
      AstFunction* f = ast_function_new((yyvsp[(4) - (8)].sval),
        rt ? rt : (yyvsp[(2) - (8)].sval),
        0,
        (yyvsp[(6) - (8)].plist) ? (yyvsp[(6) - (8)].plist)->a : NULL,
        (yyvsp[(6) - (8)].plist) ? (yyvsp[(6) - (8)].plist)->n : 0,
        NULL);
      ast_add((AstNode*)f);
      free(rt);
      free((yyvsp[(1) - (8)].sval));
      free((yyvsp[(2) - (8)].sval));
      free((yyvsp[(3) - (8)].sval));
      if((yyvsp[(6) - (8)].plist)) { free((yyvsp[(6) - (8)].plist)); }
    ;}
    break;

  case 16:
#line 413 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (7)].sval)) + strlen((yyvsp[(2) - (7)].sval) ? (yyvsp[(2) - (7)].sval) : "") + 1;
      char* rt = (char*)malloc(nt);
      if(rt) { rt[0] = '\0'; strcat(rt, (yyvsp[(1) - (7)].sval)); if((yyvsp[(2) - (7)].sval)) strcat(rt, (yyvsp[(2) - (7)].sval)); }
      AstFunction* f = ast_function_new((yyvsp[(3) - (7)].sval),
        rt ? rt : (yyvsp[(1) - (7)].sval),
        0,
        (yyvsp[(5) - (7)].plist) ? (yyvsp[(5) - (7)].plist)->a : NULL,
        (yyvsp[(5) - (7)].plist) ? (yyvsp[(5) - (7)].plist)->n : 0,
        NULL);
      ast_add((AstNode*)f);
      free(rt);
      free((yyvsp[(1) - (7)].sval));
      free((yyvsp[(2) - (7)].sval));
      if((yyvsp[(5) - (7)].plist)) { free((yyvsp[(5) - (7)].plist)); }
    ;}
    break;

  case 17:
#line 430 "c.y"
    {
      AstFunction* f = ast_function_new((yyvsp[(2) - (6)].sval),
        (yyvsp[(1) - (6)].fspec) && (yyvsp[(1) - (6)].fspec)->rtype ? (yyvsp[(1) - (6)].fspec)->rtype : NULL,
        (yyvsp[(1) - (6)].fspec) ? (yyvsp[(1) - (6)].fspec)->flags : 0,
        (yyvsp[(4) - (6)].plist) ? (yyvsp[(4) - (6)].plist)->a : NULL,
        (yyvsp[(4) - (6)].plist) ? (yyvsp[(4) - (6)].plist)->n : 0,
        (yyvsp[(6) - (6)].node));
      ast_add((AstNode*)f);
      if((yyvsp[(1) - (6)].fspec)){ free((yyvsp[(1) - (6)].fspec)->rtype); free((yyvsp[(1) - (6)].fspec));} if((yyvsp[(4) - (6)].plist)) free((yyvsp[(4) - (6)].plist));
    ;}
    break;

  case 18:
#line 441 "c.y"
    {
      AstFunction* f = ast_function_new((yyvsp[(2) - (6)].sval),
        (yyvsp[(1) - (6)].fspec) && (yyvsp[(1) - (6)].fspec)->rtype ? (yyvsp[(1) - (6)].fspec)->rtype : NULL,
        (yyvsp[(1) - (6)].fspec) ? (yyvsp[(1) - (6)].fspec)->flags : 0,
        (yyvsp[(4) - (6)].plist) ? (yyvsp[(4) - (6)].plist)->a : NULL,
        (yyvsp[(4) - (6)].plist) ? (yyvsp[(4) - (6)].plist)->n : 0,
        NULL);
      ast_add((AstNode*)f);
      if((yyvsp[(1) - (6)].fspec)){ free((yyvsp[(1) - (6)].fspec)->rtype); free((yyvsp[(1) - (6)].fspec));} if((yyvsp[(4) - (6)].plist)) free((yyvsp[(4) - (6)].plist));
    ;}
    break;

  case 19:
#line 452 "c.y"
    {
      const char* qs = ((yyvsp[(2) - (6)].sval) && (yyvsp[(2) - (6)].sval)[0]) ? (yyvsp[(2) - (6)].sval) : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen((yyvsp[(3) - (6)].sval)) + strlen((yyvsp[(4) - (6)].sval) ? (yyvsp[(4) - (6)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; if(qs){ strcat(t, (yyvsp[(2) - (6)].sval)); strcat(t, " "); } strcat(t, (yyvsp[(3) - (6)].sval)); if((yyvsp[(4) - (6)].sval)) strcat(t, (yyvsp[(4) - (6)].sval)); }
      AstNode* td = ast_typedef_new(t ? t : (yyvsp[(3) - (6)].sval), (yyvsp[(5) - (6)].sval));
      free(t);
      ast_add(td);
      typedef_add((yyvsp[(5) - (6)].sval));
      free((yyvsp[(2) - (6)].sval)); free((yyvsp[(3) - (6)].sval)); free((yyvsp[(4) - (6)].sval));
    ;}
    break;

  case 20:
#line 464 "c.y"
    {
      size_t nt = strlen((yyvsp[(2) - (5)].sval)) + strlen((yyvsp[(3) - (5)].sval) ? (yyvsp[(3) - (5)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; strcat(t, (yyvsp[(2) - (5)].sval)); if((yyvsp[(3) - (5)].sval)) strcat(t, (yyvsp[(3) - (5)].sval)); }
      AstNode* td = ast_typedef_new(t ? t : (yyvsp[(2) - (5)].sval), (yyvsp[(4) - (5)].sval));
      free(t);
      ast_add(td);
      typedef_add((yyvsp[(4) - (5)].sval));
    ;}
    break;

  case 21:
#line 474 "c.y"
    {
      const char* qs = ((yyvsp[(2) - (7)].sval) && (yyvsp[(2) - (7)].sval)[0]) ? (yyvsp[(2) - (7)].sval) : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen((yyvsp[(3) - (7)].sval)) + strlen((yyvsp[(4) - (7)].sval) ? (yyvsp[(4) - (7)].sval) : "") + strlen((yyvsp[(6) - (7)].sval) ? (yyvsp[(6) - (7)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; if(qs){ strcat(t, (yyvsp[(2) - (7)].sval)); strcat(t, " "); } strcat(t, (yyvsp[(3) - (7)].sval)); if((yyvsp[(4) - (7)].sval)) strcat(t, (yyvsp[(4) - (7)].sval)); if((yyvsp[(6) - (7)].sval)) strcat(t, (yyvsp[(6) - (7)].sval)); }
      AstNode* td = ast_typedef_new(t ? t : (yyvsp[(3) - (7)].sval), (yyvsp[(5) - (7)].sval));
      free(t);
      free((yyvsp[(6) - (7)].sval));
      ast_add(td);
      typedef_add((yyvsp[(5) - (7)].sval));
      free((yyvsp[(2) - (7)].sval)); free((yyvsp[(3) - (7)].sval)); free((yyvsp[(4) - (7)].sval));
    ;}
    break;

  case 22:
#line 487 "c.y"
    {
      size_t nt = strlen((yyvsp[(2) - (6)].sval)) + strlen((yyvsp[(3) - (6)].sval) ? (yyvsp[(3) - (6)].sval) : "") + strlen((yyvsp[(5) - (6)].sval) ? (yyvsp[(5) - (6)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; strcat(t, (yyvsp[(2) - (6)].sval)); if((yyvsp[(3) - (6)].sval)) strcat(t, (yyvsp[(3) - (6)].sval)); if((yyvsp[(5) - (6)].sval)) strcat(t, (yyvsp[(5) - (6)].sval)); }
      AstNode* td = ast_typedef_new(t ? t : (yyvsp[(2) - (6)].sval), (yyvsp[(4) - (6)].sval));
      free(t);
      free((yyvsp[(5) - (6)].sval));
      ast_add(td);
      typedef_add((yyvsp[(4) - (6)].sval));
    ;}
    break;

  case 23:
#line 498 "c.y"
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

  case 24:
#line 509 "c.y"
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

  case 25:
#line 519 "c.y"
    {
      const char* qs = ((yyvsp[(2) - (12)].sval) && (yyvsp[(2) - (12)].sval)[0]) ? (yyvsp[(2) - (12)].sval) : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen((yyvsp[(3) - (12)].sval)) + strlen((yyvsp[(4) - (12)].sval) ? (yyvsp[(4) - (12)].sval) : "") + strlen("(*)") + strlen((yyvsp[(10) - (12)].sval) ? (yyvsp[(10) - (12)].sval) : "()") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; if(qs){ strcat(t, (yyvsp[(2) - (12)].sval)); strcat(t, " "); } strcat(t, (yyvsp[(3) - (12)].sval)); if((yyvsp[(4) - (12)].sval)) strcat(t, (yyvsp[(4) - (12)].sval)); strcat(t, "(*)"); strcat(t, (yyvsp[(10) - (12)].sval) ? (yyvsp[(10) - (12)].sval) : "()"); }
      AstNode* td = ast_typedef_new(t ? t : (yyvsp[(3) - (12)].sval), (yyvsp[(7) - (12)].sval));
      free(t); free((yyvsp[(10) - (12)].sval));
      ast_add(td);
      typedef_add((yyvsp[(7) - (12)].sval));
      free((yyvsp[(2) - (12)].sval)); free((yyvsp[(3) - (12)].sval)); free((yyvsp[(4) - (12)].sval));
    ;}
    break;

  case 26:
#line 531 "c.y"
    {
      size_t nt = strlen((yyvsp[(2) - (11)].sval)) + strlen((yyvsp[(3) - (11)].sval) ? (yyvsp[(3) - (11)].sval) : "") + strlen("(*)") + strlen((yyvsp[(9) - (11)].sval) ? (yyvsp[(9) - (11)].sval) : "()") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; strcat(t, (yyvsp[(2) - (11)].sval)); if((yyvsp[(3) - (11)].sval)) strcat(t, (yyvsp[(3) - (11)].sval)); strcat(t, "(*)"); strcat(t, (yyvsp[(9) - (11)].sval) ? (yyvsp[(9) - (11)].sval) : "()"); }
      AstNode* td = ast_typedef_new(t ? t : (yyvsp[(2) - (11)].sval), (yyvsp[(6) - (11)].sval));
      free(t); free((yyvsp[(9) - (11)].sval));
      ast_add(td);
      typedef_add((yyvsp[(6) - (11)].sval));
    ;}
    break;

  case 27:
#line 541 "c.y"
    {
      const char* qs = ((yyvsp[(2) - (13)].sval) && (yyvsp[(2) - (13)].sval)[0]) ? (yyvsp[(2) - (13)].sval) : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen((yyvsp[(3) - (13)].sval)) + strlen((yyvsp[(4) - (13)].sval) ? (yyvsp[(4) - (13)].sval) : "") + strlen("(*)") + strlen((yyvsp[(11) - (13)].sval) ? (yyvsp[(11) - (13)].sval) : "()") + strlen((yyvsp[(8) - (13)].sval) ? (yyvsp[(8) - (13)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; if(qs){ strcat(t, (yyvsp[(2) - (13)].sval)); strcat(t, " "); } strcat(t, (yyvsp[(3) - (13)].sval)); if((yyvsp[(4) - (13)].sval)) strcat(t, (yyvsp[(4) - (13)].sval)); strcat(t, "(*)"); strcat(t, (yyvsp[(11) - (13)].sval) ? (yyvsp[(11) - (13)].sval) : "()"); if((yyvsp[(8) - (13)].sval)) strcat(t, (yyvsp[(8) - (13)].sval)); }
      AstNode* td = ast_typedef_new(t ? t : (yyvsp[(3) - (13)].sval), (yyvsp[(7) - (13)].sval));
      free(t);
      free((yyvsp[(8) - (13)].sval)); free((yyvsp[(11) - (13)].sval));
      ast_add(td);
      typedef_add((yyvsp[(7) - (13)].sval));
      free((yyvsp[(2) - (13)].sval)); free((yyvsp[(3) - (13)].sval)); free((yyvsp[(4) - (13)].sval));
    ;}
    break;

  case 28:
#line 554 "c.y"
    {
      size_t nt = strlen((yyvsp[(2) - (12)].sval)) + strlen((yyvsp[(3) - (12)].sval) ? (yyvsp[(3) - (12)].sval) : "") + strlen("(*)") + strlen((yyvsp[(10) - (12)].sval) ? (yyvsp[(10) - (12)].sval) : "()") + strlen((yyvsp[(7) - (12)].sval) ? (yyvsp[(7) - (12)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; strcat(t, (yyvsp[(2) - (12)].sval)); if((yyvsp[(3) - (12)].sval)) strcat(t, (yyvsp[(3) - (12)].sval)); strcat(t, "(*)"); strcat(t, (yyvsp[(10) - (12)].sval) ? (yyvsp[(10) - (12)].sval) : "()"); if((yyvsp[(7) - (12)].sval)) strcat(t, (yyvsp[(7) - (12)].sval)); }
      AstNode* td = ast_typedef_new(t ? t : (yyvsp[(2) - (12)].sval), (yyvsp[(6) - (12)].sval));
      free(t);
      free((yyvsp[(7) - (12)].sval)); free((yyvsp[(10) - (12)].sval));
      ast_add(td);
      typedef_add((yyvsp[(6) - (12)].sval));
    ;}
    break;

  case 29:
#line 566 "c.y"
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

  case 30:
#line 577 "c.y"
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

  case 31:
#line 587 "c.y"
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
#line 598 "c.y"
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
#line 608 "c.y"
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

  case 34:
#line 619 "c.y"
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

  case 36:
#line 629 "c.y"
    { free((yyvsp[(1) - (2)].sval)); if(g_last_anon_type){ ast_add(g_last_anon_type); g_last_anon_type=NULL; } ;}
    break;

  case 37:
#line 630 "c.y"
    { free((yyvsp[(1) - (2)].sval)); if(g_last_anon_type){ ast_add(g_last_anon_type); g_last_anon_type=NULL; } ;}
    break;

  case 38:
#line 636 "c.y"
    { (yyval.fspec) = fspec_new_from((yyvsp[(1) - (2)].sval), (yyvsp[(2) - (2)].sval)); free((yyvsp[(1) - (2)].sval)); free((yyvsp[(2) - (2)].sval)); ;}
    break;

  case 39:
#line 637 "c.y"
    { (yyval.fspec) = (yyvsp[(2) - (2)].fspec); if((yyval.fspec)) (yyval.fspec)->flags |= ASTF_EXTERN; ;}
    break;

  case 40:
#line 638 "c.y"
    { (yyval.fspec) = (yyvsp[(2) - (2)].fspec); if((yyval.fspec)) (yyval.fspec)->flags |= ASTF_STATIC; ;}
    break;

  case 41:
#line 639 "c.y"
    { (yyval.fspec) = (yyvsp[(2) - (2)].fspec); if((yyval.fspec)) (yyval.fspec)->flags |= ASTF_CONST; ;}
    break;

  case 42:
#line 640 "c.y"
    { (yyval.fspec) = (yyvsp[(2) - (2)].fspec); if((yyval.fspec)) (yyval.fspec)->flags |= ASTF_VOLATILE; ;}
    break;

  case 43:
#line 641 "c.y"
    { (yyval.fspec) = (yyvsp[(2) - (2)].fspec); if((yyval.fspec)) (yyval.fspec)->flags |= ASTF_RESTRICT; ;}
    break;

  case 44:
#line 642 "c.y"
    { (yyval.fspec) = (yyvsp[(2) - (2)].fspec); if((yyval.fspec)) (yyval.fspec)->flags |= ASTF_INLINE; ;}
    break;

  case 45:
#line 647 "c.y"
    { (yyval.plist) = NULL; ;}
    break;

  case 46:
#line 648 "c.y"
    { (yyval.plist) = (yyvsp[(1) - (1)].plist); ;}
    break;

  case 47:
#line 652 "c.y"
    { (yyval.plist) = (yyvsp[(1) - (1)].plist); ;}
    break;

  case 48:
#line 653 "c.y"
    { (yyval.plist) = (yyvsp[(1) - (3)].plist); /* variadic marker ignored in AST */ ;}
    break;

  case 49:
#line 657 "c.y"
    { (yyval.plist) = (yyvsp[(1) - (1)].plist); ;}
    break;

  case 50:
#line 658 "c.y"
    { (yyval.plist) = plist_merge((yyvsp[(1) - (3)].plist), (yyvsp[(3) - (3)].plist)); ;}
    break;

  case 51:
#line 663 "c.y"
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

  case 52:
#line 676 "c.y"
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

  case 65:
#line 739 "c.y"
    { (yyval.sval) = strdup("void"); ;}
    break;

  case 66:
#line 740 "c.y"
    { (yyval.sval) = strdup("char"); ;}
    break;

  case 67:
#line 741 "c.y"
    { (yyval.sval) = strdup("short"); ;}
    break;

  case 68:
#line 742 "c.y"
    { (yyval.sval) = strdup("int"); ;}
    break;

  case 69:
#line 743 "c.y"
    { (yyval.sval) = strdup("long"); ;}
    break;

  case 70:
#line 744 "c.y"
    { (yyval.sval) = strdup("signed"); ;}
    break;

  case 71:
#line 745 "c.y"
    { (yyval.sval) = strdup("unsigned"); ;}
    break;

  case 72:
#line 746 "c.y"
    { (yyval.sval) = strdup("float"); ;}
    break;

  case 73:
#line 747 "c.y"
    { (yyval.sval) = strdup("double"); ;}
    break;

  case 74:
#line 748 "c.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 75:
#line 749 "c.y"
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

  case 76:
#line 767 "c.y"
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

  case 77:
#line 785 "c.y"
    { size_t n=strlen("struct ")+strlen((yyvsp[(2) - (2)].sval))+1; (yyval.sval)=(char*)malloc(n); if((yyval.sval)){ strcpy((yyval.sval),"struct "); strcat((yyval.sval),(yyvsp[(2) - (2)].sval));} free((yyvsp[(2) - (2)].sval)); ;}
    break;

  case 78:
#line 786 "c.y"
    { size_t n=strlen("union ")+strlen((yyvsp[(2) - (2)].sval))+1;  (yyval.sval)=(char*)malloc(n); if((yyval.sval)){ strcpy((yyval.sval),"union ");  strcat((yyval.sval),(yyvsp[(2) - (2)].sval));} free((yyvsp[(2) - (2)].sval)); ;}
    break;

  case 79:
#line 787 "c.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 80:
#line 788 "c.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 81:
#line 794 "c.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 82:
#line 795 "c.y"
    {
      size_t n = strlen((yyvsp[(1) - (2)].sval)) + 1 + strlen((yyvsp[(2) - (2)].sval)) + 1;
      char* s = (char*)malloc(n);
      if(s) { s[0] = '\0'; strcat(s, (yyvsp[(1) - (2)].sval)); strcat(s, " "); strcat(s, (yyvsp[(2) - (2)].sval)); }
      free((yyvsp[(1) - (2)].sval)); free((yyvsp[(2) - (2)].sval));
      (yyval.sval) = s;
    ;}
    break;

  case 83:
#line 806 "c.y"
    {
      const char* qs = ((yyvsp[(1) - (2)].sval) && (yyvsp[(1) - (2)].sval)[0]) ? (yyvsp[(1) - (2)].sval) : NULL;
      size_t n = (qs?strlen(qs)+1:0) + strlen((yyvsp[(2) - (2)].sval)) + 1;
      char* s = (char*)malloc(n);
      if(s){ s[0]='\0'; if(qs){ strcat(s,(yyvsp[(1) - (2)].sval)); strcat(s," "); } strcat(s,(yyvsp[(2) - (2)].sval)); }
      free((yyvsp[(1) - (2)].sval)); free((yyvsp[(2) - (2)].sval));
      (yyval.sval) = s;
    ;}
    break;

  case 84:
#line 818 "c.y"
    {
      size_t n = strlen((yyvsp[(2) - (3)].sval)) + 3; /* [ + num + ] + \0 */
      char* s = (char*)malloc(n);
      if(s) { s[0]='\0'; strcat(s, "["); strcat(s, (yyvsp[(2) - (3)].sval)); strcat(s, "]"); }
      free((yyvsp[(2) - (3)].sval));
      (yyval.sval) = s;
    ;}
    break;

  case 85:
#line 825 "c.y"
    {
      size_t n = strlen((yyvsp[(1) - (4)].sval)) + 1 + strlen((yyvsp[(3) - (4)].sval)) + 2 + 1;
      char* s = (char*)malloc(n);
      if(s) { strcpy(s, (yyvsp[(1) - (4)].sval)); strcat(s, "["); strcat(s, (yyvsp[(3) - (4)].sval)); strcat(s, "]"); }
      free((yyvsp[(1) - (4)].sval));
      free((yyvsp[(3) - (4)].sval));
      (yyval.sval) = s;
    ;}
    break;

  case 86:
#line 836 "c.y"
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

  case 87:
#line 858 "c.y"
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

  case 88:
#line 878 "c.y"
    { (yyval.sval) = strdup("struct"); if((yyvsp[(3) - (4)].sflist)){ sfl_free((yyvsp[(3) - (4)].sflist)); } ;}
    break;

  case 89:
#line 879 "c.y"
    { (yyval.sval) = strdup("union");  if((yyvsp[(3) - (4)].sflist)){ sfl_free((yyvsp[(3) - (4)].sflist)); } ;}
    break;

  case 90:
#line 880 "c.y"
    { size_t n=strlen("struct ")+strlen((yyvsp[(2) - (2)].sval))+1; (yyval.sval)=(char*)malloc(n); if((yyval.sval)){ strcpy((yyval.sval), "struct "); strcat((yyval.sval), (yyvsp[(2) - (2)].sval));} free((yyvsp[(2) - (2)].sval)); ;}
    break;

  case 91:
#line 881 "c.y"
    { size_t n=strlen("union ")+strlen((yyvsp[(2) - (2)].sval))+1;  (yyval.sval)=(char*)malloc(n); if((yyval.sval)){ strcpy((yyval.sval), "union ");  strcat((yyval.sval), (yyvsp[(2) - (2)].sval));} free((yyvsp[(2) - (2)].sval)); ;}
    break;

  case 92:
#line 885 "c.y"
    { (yyval.sflist) = sfl_new(); ;}
    break;

  case 93:
#line 886 "c.y"
    { (yyval.sflist) = (yyvsp[(1) - (1)].sflist); ;}
    break;

  case 94:
#line 890 "c.y"
    { (yyval.sflist) = (yyvsp[(1) - (1)].sflist) ? (yyvsp[(1) - (1)].sflist) : sfl_new(); ;}
    break;

  case 95:
#line 892 "c.y"
    {
      if(!(yyvsp[(1) - (2)].sflist)) (yyval.sflist) = sfl_new(); else (yyval.sflist) = (yyvsp[(1) - (2)].sflist);
      if((yyvsp[(2) - (2)].sflist)){
        for(long i=0;i<(yyvsp[(2) - (2)].sflist)->n;i++) sfl_push((yyval.sflist), (yyvsp[(2) - (2)].sflist)->a[i]);
        free((yyvsp[(2) - (2)].sflist)->a); free((yyvsp[(2) - (2)].sflist));
      }
    ;}
    break;

  case 96:
#line 904 "c.y"
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

  case 97:
#line 926 "c.y"
    {
      SFieldList* l = sfl_new();
      sfl_push(l, (yyvsp[(1) - (1)].sflist)->a[0]);
      free((yyvsp[(1) - (1)].sflist)->a); free((yyvsp[(1) - (1)].sflist));
      (yyval.sflist) = l;
    ;}
    break;

  case 98:
#line 933 "c.y"
    {
      if(!(yyvsp[(1) - (3)].sflist)) (yyval.sflist) = sfl_new(); else (yyval.sflist) = (yyvsp[(1) - (3)].sflist);
      sfl_push((yyval.sflist), (yyvsp[(3) - (3)].sflist)->a[0]);
      free((yyvsp[(3) - (3)].sflist)->a); free((yyvsp[(3) - (3)].sflist));
    ;}
    break;

  case 99:
#line 943 "c.y"
    {
      SFieldList* l = sfl_new();
      SField f = { .base=NULL, .d=(yyvsp[(1) - (1)].dstr), .bitwidth=0, .anon_def=NULL };
      sfl_push(l, f);
      (yyval.sflist) = l;
    ;}
    break;

  case 100:
#line 950 "c.y"
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

  case 101:
#line 961 "c.y"
    {
      SFieldList* l = sfl_new();
      int bw = 0; if((yyvsp[(3) - (3)].node) && ((AstNode*)(yyvsp[(3) - (3)].node))->kind==AST_EXPR_INT){ typedef struct { AstKind kind; long value; } AstExprInt; bw=(int)((AstExprInt*)(yyvsp[(3) - (3)].node))->value; }
      SField f = { .base=NULL, .d=(yyvsp[(1) - (3)].dstr), .bitwidth=bw, .anon_def=NULL };
      sfl_push(l, f);
      (yyval.sflist) = l;
    ;}
    break;

  case 102:
#line 972 "c.y"
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

  case 103:
#line 981 "c.y"
    {
      (yyval.sval) = strdup("enum");
      long cnt = (yyvsp[(3) - (4)].elist) ? (yyvsp[(3) - (4)].elist)->n : 0;
      AstEnumItem* items = NULL;
      if(cnt>0){ items=(AstEnumItem*)calloc(cnt, sizeof(*items)); for(long i=0;i<cnt;i++){ items[i] = ast_enum_item_new((yyvsp[(3) - (4)].elist)->a[i].name, (yyvsp[(3) - (4)].elist)->a[i].value); free((yyvsp[(3) - (4)].elist)->a[i].name); } }
      AstNode* en = ast_enum_new_with(NULL, items, cnt); g_last_anon_type = en; g_last_anon_is_anon = 1;
      if((yyvsp[(3) - (4)].elist)){ free((yyvsp[(3) - (4)].elist)->a); free((yyvsp[(3) - (4)].elist)); }
    ;}
    break;

  case 104:
#line 989 "c.y"
    { size_t n=strlen("enum ")+strlen((yyvsp[(2) - (2)].sval))+1; (yyval.sval)=(char*)malloc(n); if((yyval.sval)){ strcpy((yyval.sval), "enum "); strcat((yyval.sval), (yyvsp[(2) - (2)].sval));} free((yyvsp[(2) - (2)].sval)); ;}
    break;

  case 105:
#line 993 "c.y"
    { (yyval.elist) = NULL; ;}
    break;

  case 106:
#line 994 "c.y"
    { (yyval.elist) = (yyvsp[(1) - (1)].elist); ;}
    break;

  case 107:
#line 998 "c.y"
    { (yyval.elist) = (yyvsp[(1) - (1)].elist); ;}
    break;

  case 108:
#line 999 "c.y"
    { (yyval.elist) = el_merge((yyvsp[(1) - (3)].elist), (yyvsp[(3) - (3)].elist)); ;}
    break;

  case 109:
#line 1003 "c.y"
    { EnumList* l=el_new(); el_push(l, (yyvsp[(1) - (1)].sval), NULL); free((yyvsp[(1) - (1)].sval)); (yyval.elist)=l; ;}
    break;

  case 110:
#line 1004 "c.y"
    { EnumList* l=el_new(); el_push(l, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].node)); free((yyvsp[(1) - (3)].sval)); (yyval.elist)=l; ;}
    break;

  case 127:
#line 1044 "c.y"
    { (yyval.sval) = strdup("()"); ;}
    break;

  case 128:
#line 1045 "c.y"
    {
      size_t n = strlen((yyvsp[(1) - (1)].sval)) + 3;
      char* s = (char*)malloc(n);
      if(s) { s[0]='\0'; strcat(s, "("); strcat(s, (yyvsp[(1) - (1)].sval)); strcat(s, ")"); }
      free((yyvsp[(1) - (1)].sval));
      (yyval.sval) = s;
    ;}
    break;

  case 129:
#line 1055 "c.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 130:
#line 1056 "c.y"
    {
      size_t n = strlen((yyvsp[(1) - (3)].sval)) + 2 + strlen((yyvsp[(3) - (3)].sval)) + 1;
      char* s = (char*)malloc(n);
      if(s) { strcpy(s, (yyvsp[(1) - (3)].sval)); strcat(s, ", "); strcat(s, (yyvsp[(3) - (3)].sval)); }
      free((yyvsp[(1) - (3)].sval)); free((yyvsp[(3) - (3)].sval));
      (yyval.sval) = s;
    ;}
    break;

  case 131:
#line 1066 "c.y"
    {
      const char* qs = ((yyvsp[(1) - (3)].sval) && (yyvsp[(1) - (3)].sval)[0]) ? (yyvsp[(1) - (3)].sval) : NULL;
      size_t n = (qs?strlen(qs)+1:0) + strlen((yyvsp[(2) - (3)].sval)) + strlen((yyvsp[(3) - (3)].sval) ? (yyvsp[(3) - (3)].sval) : "") + 1;
      char* s = (char*)malloc(n);
      if(s) { s[0]='\0'; if(qs){ strcat(s, (yyvsp[(1) - (3)].sval)); strcat(s, " "); } strcat(s, (yyvsp[(2) - (3)].sval)); if((yyvsp[(3) - (3)].sval)) strcat(s, (yyvsp[(3) - (3)].sval)); }
      (yyval.sval) = s;
      free((yyvsp[(1) - (3)].sval)); free((yyvsp[(2) - (3)].sval)); free((yyvsp[(3) - (3)].sval));
    ;}
    break;

  case 132:
#line 1074 "c.y"
    {
      const char* qs = ((yyvsp[(1) - (4)].sval) && (yyvsp[(1) - (4)].sval)[0]) ? (yyvsp[(1) - (4)].sval) : NULL;
      size_t n = (qs?strlen(qs)+1:0) + strlen((yyvsp[(2) - (4)].sval)) + strlen((yyvsp[(3) - (4)].sval) ? (yyvsp[(3) - (4)].sval) : "") + 1;
      char* s = (char*)malloc(n);
      if(s) { s[0]='\0'; if(qs){ strcat(s, (yyvsp[(1) - (4)].sval)); strcat(s, " "); } strcat(s, (yyvsp[(2) - (4)].sval)); if((yyvsp[(3) - (4)].sval)) strcat(s, (yyvsp[(3) - (4)].sval)); }
      (yyval.sval) = s;
      free((yyvsp[(1) - (4)].sval)); free((yyvsp[(2) - (4)].sval)); free((yyvsp[(3) - (4)].sval)); free((yyvsp[(4) - (4)].sval));
    ;}
    break;

  case 135:
#line 1094 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 136:
#line 1095 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 137:
#line 1096 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 138:
#line 1097 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 139:
#line 1098 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 140:
#line 1102 "c.y"
    { (yyval.node) = (AstNode*)ast_compound_new_with((yyvsp[(2) - (3)].nlist) ? (yyvsp[(2) - (3)].nlist)->a : NULL, (yyvsp[(2) - (3)].nlist) ? (yyvsp[(2) - (3)].nlist)->n : 0); if((yyvsp[(2) - (3)].nlist)) free((yyvsp[(2) - (3)].nlist)); ;}
    break;

  case 141:
#line 1106 "c.y"
    { (yyval.nlist) = NULL; ;}
    break;

  case 142:
#line 1107 "c.y"
    { (yyval.nlist) = (yyvsp[(1) - (1)].nlist); ;}
    break;

  case 143:
#line 1111 "c.y"
    { (yyval.nlist) = (yyvsp[(1) - (1)].nlist); ;}
    break;

  case 144:
#line 1112 "c.y"
    { (yyval.nlist) = nlist_merge((yyvsp[(1) - (2)].nlist), (yyvsp[(2) - (2)].nlist)); ;}
    break;

  case 145:
#line 1116 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (4)].sval)) + strlen((yyvsp[(2) - (4)].sval) ? (yyvsp[(2) - (4)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, (yyvsp[(1) - (4)].sval)); if((yyvsp[(2) - (4)].sval)) strcat(t, (yyvsp[(2) - (4)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].sval), NULL);
      free(t); free((yyvsp[(1) - (4)].sval)); free((yyvsp[(2) - (4)].sval)); /* $3 freed by decl */
      (yyval.nlist) = nlist_from1(d);
    ;}
    break;

  case 146:
#line 1124 "c.y"
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

  case 147:
#line 1133 "c.y"
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

  case 148:
#line 1142 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (6)].sval)) + strlen((yyvsp[(2) - (6)].sval) ? (yyvsp[(2) - (6)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, (yyvsp[(1) - (6)].sval)); if((yyvsp[(2) - (6)].sval)) strcat(t, (yyvsp[(2) - (6)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(1) - (6)].sval), (yyvsp[(3) - (6)].sval), (yyvsp[(5) - (6)].node));
      free(t); free((yyvsp[(1) - (6)].sval)); free((yyvsp[(2) - (6)].sval));
      (yyval.nlist) = nlist_from1(d);
    ;}
    break;

  case 149:
#line 1150 "c.y"
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

  case 150:
#line 1159 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (6)].sval)) + strlen((yyvsp[(2) - (6)].sval) ? (yyvsp[(2) - (6)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, (yyvsp[(1) - (6)].sval)); if((yyvsp[(2) - (6)].sval)) strcat(t, (yyvsp[(2) - (6)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(1) - (6)].sval), (yyvsp[(3) - (6)].sval), (yyvsp[(5) - (6)].node));
      free(t); free((yyvsp[(1) - (6)].sval)); free((yyvsp[(2) - (6)].sval));
      (yyval.nlist) = nlist_from1(d);
    ;}
    break;

  case 151:
#line 1167 "c.y"
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

  case 152:
#line 1176 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (7)].sval)) + strlen((yyvsp[(2) - (7)].sval) ? (yyvsp[(2) - (7)].sval) : "") + strlen((yyvsp[(4) - (7)].sval) ? (yyvsp[(4) - (7)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, (yyvsp[(1) - (7)].sval)); if((yyvsp[(2) - (7)].sval)) strcat(t, (yyvsp[(2) - (7)].sval)); if((yyvsp[(4) - (7)].sval)) strcat(t, (yyvsp[(4) - (7)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(1) - (7)].sval), (yyvsp[(3) - (7)].sval), (yyvsp[(6) - (7)].node));
      free(t); free((yyvsp[(1) - (7)].sval)); free((yyvsp[(2) - (7)].sval)); free((yyvsp[(4) - (7)].sval));
      (yyval.nlist) = nlist_from1(d);
    ;}
    break;

  case 153:
#line 1185 "c.y"
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

  case 154:
#line 1197 "c.y"
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

  case 155:
#line 1206 "c.y"
    { (yyval.nlist) = nlist_from1((yyvsp[(1) - (1)].node)); ;}
    break;

  case 156:
#line 1209 "c.y"
    {
      size_t nt = strlen((yyvsp[(2) - (5)].sval)) + strlen((yyvsp[(3) - (5)].sval) ? (yyvsp[(3) - (5)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; strcat(t, (yyvsp[(2) - (5)].sval)); if((yyvsp[(3) - (5)].sval)) strcat(t, (yyvsp[(3) - (5)].sval)); }
      AstNode* td = ast_typedef_new(t ? t : (yyvsp[(2) - (5)].sval), (yyvsp[(4) - (5)].sval));
      free(t);
      (yyval.nlist) = nlist_from1(td);
    ;}
    break;

  case 157:
#line 1221 "c.y"
    { (yyval.nlist)=NULL; ;}
    break;

  case 158:
#line 1222 "c.y"
    { if(!(yyvsp[(1) - (3)].nlist)){ NodeList* nl=nlist_new(); (yyval.nlist)=nl; } nlist_push((yyvsp[(1) - (3)].nlist), (AstNode*)(yyvsp[(3) - (3)].dstr)); (yyval.nlist)=(yyvsp[(1) - (3)].nlist); ;}
    break;

  case 159:
#line 1227 "c.y"
    { DStr* d=(DStr*)calloc(1,sizeof(DStr)); d->name=sdup0x((yyvsp[(2) - (2)].dstr)->name); d->pre=sdup0x((yyvsp[(1) - (2)].sval)); d->post=sdup0x((yyvsp[(2) - (2)].dstr)->post); dstr_free((yyvsp[(2) - (2)].dstr)); free((yyvsp[(1) - (2)].sval)); (yyval.dstr)=d; ;}
    break;

  case 160:
#line 1231 "c.y"
    { DStr* d=(DStr*)calloc(1,sizeof(DStr)); d->name=(yyvsp[(1) - (1)].sval); d->pre=strdup(""); d->post=strdup(""); (yyval.dstr)=d; ;}
    break;

  case 161:
#line 1232 "c.y"
    { (yyval.dstr)=(yyvsp[(2) - (3)].dstr); ;}
    break;

  case 162:
#line 1233 "c.y"
    { char* params=(yyvsp[(5) - (6)].sval)?(yyvsp[(5) - (6)].sval):strdup("()"); (yyvsp[(2) - (6)].dstr)->post=sappend3((yyvsp[(2) - (6)].dstr)->post, "(*)", params); free((yyvsp[(5) - (6)].sval)); (yyval.dstr)=(yyvsp[(2) - (6)].dstr); ;}
    break;

  case 163:
#line 1234 "c.y"
    { char* suf=array_suffix_from_expr((yyvsp[(3) - (4)].node)); (yyvsp[(1) - (4)].dstr)->post=sappend((yyvsp[(1) - (4)].dstr)->post,suf); free(suf); (yyval.dstr)=(yyvsp[(1) - (4)].dstr); ;}
    break;

  case 164:
#line 1240 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 165:
#line 1241 "c.y"
    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 172:
#line 1257 "c.y"
    { (yyval.node) = ast_return_new((yyvsp[(2) - (3)].node)); ;}
    break;

  case 173:
#line 1258 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 174:
#line 1259 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 175:
#line 1260 "c.y"
    { free((yyvsp[(2) - (3)].sval)); (yyval.node) = NULL; ;}
    break;

  case 176:
#line 1265 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 177:
#line 1266 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 178:
#line 1270 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 179:
#line 1271 "c.y"
    { (yyval.node) = (yyvsp[(3) - (3)].node); ;}
    break;

  case 180:
#line 1275 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 181:
#line 1276 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 182:
#line 1280 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 183:
#line 1281 "c.y"
    { (yyval.node) = ast_expr_assign_new("=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 184:
#line 1282 "c.y"
    { (yyval.node) = ast_expr_assign_new("+=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 185:
#line 1283 "c.y"
    { (yyval.node) = ast_expr_assign_new("-=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 186:
#line 1284 "c.y"
    { (yyval.node) = ast_expr_assign_new("*=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 187:
#line 1285 "c.y"
    { (yyval.node) = ast_expr_assign_new("/=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 188:
#line 1286 "c.y"
    { (yyval.node) = ast_expr_assign_new("%=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 189:
#line 1287 "c.y"
    { (yyval.node) = ast_expr_assign_new("&=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 190:
#line 1288 "c.y"
    { (yyval.node) = ast_expr_assign_new("|=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 191:
#line 1289 "c.y"
    { (yyval.node) = ast_expr_assign_new("^=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 192:
#line 1290 "c.y"
    { (yyval.node) = ast_expr_assign_new("<<=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 193:
#line 1291 "c.y"
    { (yyval.node) = ast_expr_assign_new(">>=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 194:
#line 1295 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 195:
#line 1296 "c.y"
    { (yyval.node) = ast_expr_cond_new((yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 196:
#line 1300 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 197:
#line 1301 "c.y"
    { (yyval.node) = ast_expr_binary_new("||", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 198:
#line 1305 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 199:
#line 1306 "c.y"
    { (yyval.node) = ast_expr_binary_new("&&", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 200:
#line 1310 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 201:
#line 1311 "c.y"
    { (yyval.node) = ast_expr_binary_new("|", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 202:
#line 1315 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 203:
#line 1316 "c.y"
    { (yyval.node) = ast_expr_binary_new("^", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 204:
#line 1320 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 205:
#line 1321 "c.y"
    { (yyval.node) = ast_expr_binary_new("&", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 206:
#line 1325 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 207:
#line 1326 "c.y"
    { (yyval.node) = ast_expr_binary_new("==", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 208:
#line 1327 "c.y"
    { (yyval.node) = ast_expr_binary_new("!=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 209:
#line 1331 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 210:
#line 1332 "c.y"
    { (yyval.node) = ast_expr_binary_new("<", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 211:
#line 1333 "c.y"
    { (yyval.node) = ast_expr_binary_new(">", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 212:
#line 1334 "c.y"
    { (yyval.node) = ast_expr_binary_new("<=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 213:
#line 1335 "c.y"
    { (yyval.node) = ast_expr_binary_new(">=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 214:
#line 1339 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 215:
#line 1340 "c.y"
    { (yyval.node) = ast_expr_binary_new("<<", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 216:
#line 1341 "c.y"
    { (yyval.node) = ast_expr_binary_new(">>", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 217:
#line 1345 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 218:
#line 1346 "c.y"
    { (yyval.node) = ast_expr_binary_new("+", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 219:
#line 1347 "c.y"
    { (yyval.node) = ast_expr_binary_new("-", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 220:
#line 1351 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 221:
#line 1352 "c.y"
    { (yyval.node) = ast_expr_binary_new("*", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 222:
#line 1353 "c.y"
    { (yyval.node) = ast_expr_binary_new("/", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 223:
#line 1354 "c.y"
    { (yyval.node) = ast_expr_binary_new("%", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 224:
#line 1358 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 225:
#line 1359 "c.y"
    { (yyval.node) = ast_expr_unary_new("++", (yyvsp[(2) - (2)].node), 0); ;}
    break;

  case 226:
#line 1360 "c.y"
    { (yyval.node) = ast_expr_unary_new("--", (yyvsp[(2) - (2)].node), 0); ;}
    break;

  case 227:
#line 1361 "c.y"
    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 228:
#line 1362 "c.y"
    { (yyval.node) = ast_expr_unary_new("-", (yyvsp[(2) - (2)].node), 0); ;}
    break;

  case 229:
#line 1363 "c.y"
    { (yyval.node) = ast_expr_unary_new("!", (yyvsp[(2) - (2)].node), 0); ;}
    break;

  case 230:
#line 1364 "c.y"
    { (yyval.node) = ast_expr_unary_new("~", (yyvsp[(2) - (2)].node), 0); ;}
    break;

  case 231:
#line 1365 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 232:
#line 1366 "c.y"
    { free((yyvsp[(3) - (4)].sval)); (yyval.node) = NULL; ;}
    break;

  case 233:
#line 1367 "c.y"
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

  case 234:
#line 1384 "c.y"
    { (yyval.sval) = strdup(""); ;}
    break;

  case 235:
#line 1385 "c.y"
    { (yyval.sval) = sappend((yyvsp[(1) - (2)].sval), ((yyvsp[(1) - (2)].sval) && (yyvsp[(1) - (2)].sval)[0])?" const":"const"); ;}
    break;

  case 236:
#line 1386 "c.y"
    { (yyval.sval) = sappend((yyvsp[(1) - (2)].sval), ((yyvsp[(1) - (2)].sval) && (yyvsp[(1) - (2)].sval)[0])?" volatile":"volatile"); ;}
    break;

  case 237:
#line 1387 "c.y"
    { (yyval.sval) = sappend((yyvsp[(1) - (2)].sval), ((yyvsp[(1) - (2)].sval) && (yyvsp[(1) - (2)].sval)[0])?" restrict":"restrict"); ;}
    break;

  case 238:
#line 1391 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 239:
#line 1392 "c.y"
    {
      (yyval.node) = ast_expr_call_new((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].nlist) ? (yyvsp[(3) - (4)].nlist)->a : NULL, (yyvsp[(3) - (4)].nlist) ? (yyvsp[(3) - (4)].nlist)->n : 0);
      if((yyvsp[(3) - (4)].nlist)) { free((yyvsp[(3) - (4)].nlist)); }
    ;}
    break;

  case 240:
#line 1396 "c.y"
    { (yyval.node) = ast_expr_index_new((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node)); ;}
    break;

  case 241:
#line 1397 "c.y"
    { (yyval.node) = ast_expr_member_new((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].sval), 0); free((yyvsp[(3) - (3)].sval)); ;}
    break;

  case 242:
#line 1398 "c.y"
    { (yyval.node) = ast_expr_member_new((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].sval), 1); free((yyvsp[(3) - (3)].sval)); ;}
    break;

  case 243:
#line 1399 "c.y"
    { (yyval.node) = ast_expr_unary_new("++", (yyvsp[(1) - (2)].node), 1); ;}
    break;

  case 244:
#line 1400 "c.y"
    { (yyval.node) = ast_expr_unary_new("--", (yyvsp[(1) - (2)].node), 1); ;}
    break;

  case 245:
#line 1404 "c.y"
    { (yyval.nlist) = NULL; ;}
    break;

  case 246:
#line 1405 "c.y"
    { (yyval.nlist) = (yyvsp[(1) - (1)].nlist); ;}
    break;

  case 247:
#line 1409 "c.y"
    { (yyval.nlist) = nlist_from1((yyvsp[(1) - (1)].node)); ;}
    break;

  case 248:
#line 1410 "c.y"
    { nlist_push((yyvsp[(1) - (3)].nlist), (yyvsp[(3) - (3)].node)); (yyval.nlist) = (yyvsp[(1) - (3)].nlist); ;}
    break;

  case 249:
#line 1414 "c.y"
    { (yyval.node) = ast_expr_ident_new((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 250:
#line 1415 "c.y"
    { (yyval.node) = ast_expr_int_new(atol((yyvsp[(1) - (1)].sval))); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 251:
#line 1416 "c.y"
    { (yyval.node) = ast_expr_float_new(atof((yyvsp[(1) - (1)].sval))); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 252:
#line 1417 "c.y"
    { (yyval.node) = ast_expr_char_new((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 253:
#line 1418 "c.y"
    { (yyval.node) = ast_expr_string_new((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 254:
#line 1419 "c.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 255:
#line 1424 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 256:
#line 1425 "c.y"
    { (yyval.node) = (AstNode*)ast_init_list_new((yyvsp[(2) - (3)].nlist) ? (yyvsp[(2) - (3)].nlist)->a : NULL, (yyvsp[(2) - (3)].nlist) ? (yyvsp[(2) - (3)].nlist)->n : 0); if((yyvsp[(2) - (3)].nlist)) free((yyvsp[(2) - (3)].nlist)); ;}
    break;

  case 257:
#line 1429 "c.y"
    { (yyval.nlist) = NULL; ;}
    break;

  case 258:
#line 1430 "c.y"
    { (yyval.nlist) = (yyvsp[(1) - (1)].nlist); ;}
    break;

  case 259:
#line 1434 "c.y"
    { (yyval.nlist) = nlist_from1((yyvsp[(1) - (1)].node)); ;}
    break;

  case 260:
#line 1435 "c.y"
    { (yyval.nlist) = nlist_from1((yyvsp[(1) - (1)].node)); ;}
    break;

  case 261:
#line 1436 "c.y"
    { nlist_push((yyvsp[(1) - (3)].nlist), (yyvsp[(3) - (3)].node)); (yyval.nlist) = (yyvsp[(1) - (3)].nlist); ;}
    break;

  case 262:
#line 1437 "c.y"
    { nlist_push((yyvsp[(1) - (3)].nlist), (yyvsp[(3) - (3)].node)); (yyval.nlist) = (yyvsp[(1) - (3)].nlist); ;}
    break;

  case 263:
#line 1441 "c.y"
    { (yyval.node) = ast_init_desig_chain_new((yyvsp[(1) - (3)].nlist) ? (yyvsp[(1) - (3)].nlist)->a : NULL, (yyvsp[(1) - (3)].nlist) ? (yyvsp[(1) - (3)].nlist)->n : 0, (yyvsp[(3) - (3)].node)); if((yyvsp[(1) - (3)].nlist)) free((yyvsp[(1) - (3)].nlist)); ;}
    break;

  case 264:
#line 1446 "c.y"
    { (yyval.nlist) = nlist_from1((yyvsp[(1) - (1)].node)); ;}
    break;

  case 265:
#line 1447 "c.y"
    { nlist_push((yyvsp[(1) - (2)].nlist), (yyvsp[(2) - (2)].node)); (yyval.nlist) = (yyvsp[(1) - (2)].nlist); ;}
    break;

  case 266:
#line 1451 "c.y"
    { (yyval.node) = ast_desig_field_new((yyvsp[(2) - (2)].sval)); free((yyvsp[(2) - (2)].sval)); ;}
    break;

  case 267:
#line 1452 "c.y"
    { (yyval.node) = ast_desig_index_new((yyvsp[(2) - (3)].node)); ;}
    break;

  case 268:
#line 1453 "c.y"
    { (yyval.node) = ast_desig_range_new((yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 4010 "parser.c"
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


#line 1460 "c.y"


void yyerror(const char* s)
{
  fprintf(stderr, "parse error at line %d near '%s': %s\n", yylineno, yytext ? yytext : "", s);
}

