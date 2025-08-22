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
#line 147 "c.y"
{
  char* sval;
  long  ival;
  struct AstNode* node;
  struct ParamList* plist;
  struct NodeList* nlist;
  struct DStr* dstr;
  struct FSpec* fspec;
}
/* Line 193 of yacc.c.  */
#line 367 "parser.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 380 "parser.c"

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
#define YYLAST   827

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  240
/* YYNRULES -- Number of states.  */
#define YYNSTATES  453

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
       0,     0,     3,     4,     7,     8,    10,    12,    15,    22,
      23,    31,    39,    46,    53,    59,    66,    73,    85,    98,
     103,   110,   118,   120,   123,   126,   129,   132,   135,   138,
     141,   142,   144,   146,   150,   152,   156,   159,   161,   163,
     166,   168,   170,   172,   174,   176,   178,   180,   182,   184,
     186,   188,   190,   192,   194,   196,   198,   200,   202,   204,
     206,   208,   210,   214,   219,   225,   231,   236,   241,   244,
     247,   248,   250,   252,   255,   259,   261,   265,   267,   270,
     274,   280,   285,   288,   289,   291,   293,   297,   299,   303,
     306,   307,   309,   311,   314,   317,   321,   323,   327,   332,
     337,   342,   343,   345,   347,   351,   352,   354,   356,   360,
     363,   367,   371,   375,   377,   379,   381,   383,   385,   389,
     390,   392,   394,   397,   402,   409,   416,   424,   431,   433,
     439,   446,   447,   451,   454,   456,   460,   467,   472,   474,
     477,   483,   491,   497,   503,   511,   521,   525,   528,   531,
     535,   536,   538,   540,   544,   545,   547,   549,   553,   557,
     561,   565,   569,   573,   577,   581,   585,   589,   593,   595,
     601,   603,   607,   609,   613,   615,   619,   621,   625,   627,
     631,   633,   637,   641,   643,   647,   651,   655,   659,   661,
     665,   669,   671,   675,   679,   681,   685,   689,   693,   695,
     698,   701,   704,   707,   710,   713,   716,   721,   723,   728,
     733,   737,   741,   744,   747,   748,   750,   752,   756,   758,
     760,   762,   764,   766,   770,   772,   776,   777,   779,   781,
     783,   787,   791,   796,   802,   806,   808,   811,   814,   818,
     824
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      89,     0,    -1,    -1,    89,    92,    -1,    -1,    91,    -1,
      73,    -1,    91,    73,    -1,   103,   131,    84,   131,   130,
      85,    -1,    -1,   103,    90,     3,    78,    94,    79,   126,
      -1,   103,    90,     3,    78,    94,    79,    85,    -1,    93,
       3,    78,    94,    79,   126,    -1,    93,     3,    78,    94,
      79,    85,    -1,    21,   103,    90,     3,    85,    -1,    21,
     103,    90,     3,   104,    85,    -1,   103,    90,     3,    63,
     140,    85,    -1,    21,   103,    90,    78,    73,     3,    79,
      78,   121,    79,    85,    -1,    21,   103,    90,    78,    73,
       3,   104,    79,    78,   121,    79,    85,    -1,   103,    90,
       3,    85,    -1,   103,    90,     3,    63,   157,    85,    -1,
     103,    90,     3,   104,    63,   157,    85,    -1,   124,    -1,
     103,    90,    -1,    38,    93,    -1,    39,    93,    -1,    34,
      93,    -1,    35,    93,    -1,    36,    93,    -1,    37,    93,
      -1,    -1,    95,    -1,    96,    -1,    96,    84,    41,    -1,
      97,    -1,    96,    84,    97,    -1,   103,   131,    -1,   103,
      -1,    99,    -1,    98,    99,    -1,   100,    -1,   103,    -1,
     101,    -1,   102,    -1,    38,    -1,    39,    -1,    34,    -1,
      35,    -1,    36,    -1,    37,    -1,     9,    -1,    10,    -1,
      11,    -1,    12,    -1,    13,    -1,    14,    -1,    15,    -1,
      16,    -1,    17,    -1,   105,    -1,   111,    -1,     4,    -1,
      80,     6,    81,    -1,   104,    80,     6,    81,    -1,    18,
       3,    86,   106,    87,    -1,    19,     3,    86,   106,    87,
      -1,    18,    86,   106,    87,    -1,    19,    86,   106,    87,
      -1,    18,     3,    -1,    19,     3,    -1,    -1,   107,    -1,
     108,    -1,   107,   108,    -1,    98,   109,    85,    -1,   110,
      -1,   109,    84,   110,    -1,   115,    -1,    65,   163,    -1,
     115,    65,   163,    -1,    20,     3,    86,   112,    87,    -1,
      20,    86,   112,    87,    -1,    20,     3,    -1,    -1,   113,
      -1,   114,    -1,   113,    84,   114,    -1,     3,    -1,     3,
      63,   163,    -1,   116,   118,    -1,    -1,   117,    -1,    73,
      -1,    73,   101,    -1,    73,   117,    -1,    73,   101,   117,
      -1,     3,    -1,    78,   115,    79,    -1,   118,    80,   139,
      81,    -1,   118,    78,    94,    79,    -1,   118,    78,   119,
      79,    -1,    -1,   120,    -1,     3,    -1,   120,    84,     3,
      -1,    -1,   122,    -1,   123,    -1,   122,    84,   123,    -1,
     103,    90,    -1,   103,    90,     3,    -1,    98,   115,   126,
      -1,   103,   115,   126,    -1,   126,    -1,   133,    -1,   134,
      -1,   135,    -1,   136,    -1,    86,   127,    87,    -1,    -1,
     128,    -1,   129,    -1,   128,   129,    -1,   103,    90,     3,
      85,    -1,   103,    90,     3,    63,   140,    85,    -1,   103,
      90,     3,    63,   157,    85,    -1,   103,    90,     3,   104,
      63,   157,    85,    -1,   103,   131,    84,   131,   130,    85,
      -1,   125,    -1,    21,   103,    90,     3,    85,    -1,    21,
     103,   103,    90,     3,    85,    -1,    -1,   130,    84,   131,
      -1,    90,   132,    -1,     3,    -1,    78,   131,    79,    -1,
      78,   131,    79,    78,   121,    79,    -1,   132,    80,   139,
      81,    -1,    85,    -1,   138,    85,    -1,    23,    78,   138,
      79,   125,    -1,    23,    78,   138,    79,   125,    24,   125,
      -1,    28,    78,   138,    79,   125,    -1,    25,    78,   138,
      79,   125,    -1,    27,   125,    25,    78,   138,    79,    85,
      -1,    26,    78,   137,    85,   137,    85,   137,    79,   125,
      -1,    22,   137,    85,    -1,    31,    85,    -1,    32,    85,
      -1,    33,     3,    85,    -1,    -1,   138,    -1,   140,    -1,
     138,    84,   140,    -1,    -1,   140,    -1,   141,    -1,   152,
      63,   140,    -1,   152,    53,   140,    -1,   152,    54,   140,
      -1,   152,    55,   140,    -1,   152,    56,   140,    -1,   152,
      57,   140,    -1,   152,    58,   140,    -1,   152,    59,   140,
      -1,   152,    60,   140,    -1,   152,    61,   140,    -1,   152,
      62,   140,    -1,   142,    -1,   142,    64,   138,    65,   141,
      -1,   143,    -1,   142,    52,   143,    -1,   144,    -1,   143,
      51,   144,    -1,   145,    -1,   144,    66,   145,    -1,   146,
      -1,   145,    67,   146,    -1,   147,    -1,   146,    68,   147,
      -1,   148,    -1,   147,    49,   148,    -1,   147,    50,   148,
      -1,   149,    -1,   148,    69,   149,    -1,   148,    70,   149,
      -1,   148,    47,   149,    -1,   148,    48,   149,    -1,   150,
      -1,   149,    45,   150,    -1,   149,    46,   150,    -1,   151,
      -1,   150,    71,   151,    -1,   150,    72,   151,    -1,   152,
      -1,   151,    73,   152,    -1,   151,    74,   152,    -1,   151,
      75,   152,    -1,   153,    -1,    43,   152,    -1,    44,   152,
      -1,    71,   152,    -1,    72,   152,    -1,    76,   152,    -1,
      77,   152,    -1,    40,   152,    -1,    40,    78,   103,    79,
      -1,   156,    -1,   153,    78,   154,    79,    -1,   153,    80,
     138,    81,    -1,   153,    82,     3,    -1,   153,    42,     3,
      -1,   153,    43,    -1,   153,    44,    -1,    -1,   155,    -1,
     140,    -1,   155,    84,   140,    -1,     3,    -1,     6,    -1,
       7,    -1,     8,    -1,     5,    -1,    78,   138,    79,    -1,
     140,    -1,    86,   158,    87,    -1,    -1,   159,    -1,   157,
      -1,   160,    -1,   159,    84,   157,    -1,   159,    84,   160,
      -1,    82,     3,    63,   157,    -1,    80,   163,    81,    63,
     157,    -1,   161,    63,   157,    -1,   162,    -1,   161,   162,
      -1,    82,     3,    -1,    80,   163,    81,    -1,    80,   163,
      41,   163,    81,    -1,   141,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   216,   216,   218,   224,   225,   229,   230,   240,   248,
     249,   266,   283,   294,   305,   315,   326,   335,   345,   357,
     366,   375,   384,   390,   391,   392,   393,   394,   395,   396,
     401,   402,   406,   407,   411,   412,   416,   426,   458,   459,
     463,   464,   465,   466,   470,   471,   475,   476,   477,   481,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   502,   509,   520,   521,   522,   523,   524,   525,
     528,   530,   534,   535,   539,   543,   544,   548,   549,   550,
     554,   555,   556,   559,   561,   565,   566,   570,   571,   576,
     579,   581,   585,   586,   587,   588,   592,   593,   594,   595,
     596,   599,   601,   605,   606,   611,   612,   622,   623,   633,
     640,   653,   654,   659,   660,   661,   662,   663,   667,   671,
     672,   676,   677,   681,   689,   697,   705,   713,   722,   724,
     733,   746,   747,   752,   756,   757,   758,   759,   765,   766,
     770,   771,   772,   776,   777,   778,   782,   783,   784,   785,
     790,   791,   795,   796,   800,   801,   805,   806,   807,   808,
     809,   810,   811,   812,   813,   814,   815,   816,   820,   821,
     825,   826,   830,   831,   835,   836,   840,   841,   845,   846,
     850,   851,   852,   856,   857,   858,   859,   860,   864,   865,
     866,   870,   871,   872,   876,   877,   878,   879,   883,   884,
     885,   886,   887,   888,   889,   890,   891,   895,   896,   900,
     901,   902,   903,   904,   908,   909,   913,   914,   918,   919,
     920,   921,   922,   923,   928,   929,   933,   934,   938,   939,
     940,   941,   945,   946,   947,   952,   953,   957,   958,   959,
     963
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
  "function_specifier", "type_specifier", "array_dims",
  "struct_or_union_specifier", "struct_declaration_list_opt",
  "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "enum_specifier",
  "enumerator_list_opt", "enumerator_list", "enumerator", "declarator",
  "pointer_opt", "pointer", "direct_declarator", "identifier_list_opt",
  "identifier_list", "fp_param_list_opt", "fp_param_list", "fp_param",
  "function_definition", "statement", "compound_statement",
  "block_item_list_opt", "block_item_list", "block_item", "sdecl_list",
  "sdecl", "sdir", "expression_statement", "selection_statement",
  "iteration_statement", "jump_statement", "expression_opt", "expression",
  "assignment_expression_opt", "assignment_expression",
  "conditional_expression", "logical_or_expression",
  "logical_and_expression", "inclusive_or_expression",
  "exclusive_or_expression", "and_expression", "equality_expression",
  "relational_expression", "shift_expression", "additive_expression",
  "multiplicative_expression", "unary_expression", "postfix_expression",
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
      92,    92,    92,    93,    93,    93,    93,    93,    93,    93,
      94,    94,    95,    95,    96,    96,    97,    97,    98,    98,
      99,    99,    99,    99,   100,   100,   101,   101,   101,   102,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   104,   104,   105,   105,   105,   105,   105,   105,
     106,   106,   107,   107,   108,   109,   109,   110,   110,   110,
     111,   111,   111,   112,   112,   113,   113,   114,   114,   115,
     116,   116,   117,   117,   117,   117,   118,   118,   118,   118,
     118,   119,   119,   120,   120,   121,   121,   122,   122,   123,
     123,   124,   124,   125,   125,   125,   125,   125,   126,   127,
     127,   128,   128,   129,   129,   129,   129,   129,   129,   129,
     129,   130,   130,   131,   132,   132,   132,   132,   133,   133,
     134,   134,   134,   135,   135,   135,   136,   136,   136,   136,
     137,   137,   138,   138,   139,   139,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   141,   141,
     142,   142,   143,   143,   144,   144,   145,   145,   146,   146,
     147,   147,   147,   148,   148,   148,   148,   148,   149,   149,
     149,   150,   150,   150,   151,   151,   151,   151,   152,   152,
     152,   152,   152,   152,   152,   152,   152,   153,   153,   153,
     153,   153,   153,   153,   154,   154,   155,   155,   156,   156,
     156,   156,   156,   156,   157,   157,   158,   158,   159,   159,
     159,   159,   160,   160,   160,   161,   161,   162,   162,   162,
     163
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     0,     1,     1,     2,     6,     0,
       7,     7,     6,     6,     5,     6,     6,    11,    12,     4,
       6,     7,     1,     2,     2,     2,     2,     2,     2,     2,
       0,     1,     1,     3,     1,     3,     2,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     4,     5,     5,     4,     4,     2,     2,
       0,     1,     1,     2,     3,     1,     3,     1,     2,     3,
       5,     4,     2,     0,     1,     1,     3,     1,     3,     2,
       0,     1,     1,     2,     2,     3,     1,     3,     4,     4,
       4,     0,     1,     1,     3,     0,     1,     1,     3,     2,
       3,     3,     3,     1,     1,     1,     1,     1,     3,     0,
       1,     1,     2,     4,     6,     6,     7,     6,     1,     5,
       6,     0,     3,     2,     1,     3,     6,     4,     1,     2,
       5,     7,     5,     5,     7,     9,     3,     2,     2,     3,
       0,     1,     1,     3,     0,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     5,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     1,     2,
       2,     2,     2,     2,     2,     2,     4,     1,     4,     4,
       3,     3,     2,     2,     0,     1,     1,     3,     1,     1,
       1,     1,     1,     3,     1,     3,     0,     1,     1,     1,
       3,     3,     4,     5,     3,     1,     2,     2,     3,     5,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    61,    50,    51,    52,    53,    54,    55,
      56,    57,    58,     0,     0,     0,     0,    46,    47,    48,
      49,    44,    45,     3,     0,    90,    38,    40,    42,    43,
      41,    59,    60,    22,    68,    70,    69,    70,    82,    83,
       4,     0,     0,     0,     0,     0,     0,    26,     4,    27,
      28,    29,    24,    25,     0,    46,    47,    48,    49,    44,
      45,    92,    39,    41,     0,     0,    91,     6,     0,     5,
       0,     0,    70,    90,     0,    71,    72,    70,     0,    83,
      87,     0,    84,    85,     6,     0,    23,    30,    93,    94,
     119,   111,    96,    90,    89,   134,     4,   133,     7,   112,
       4,     0,     0,     0,    75,    77,    66,    73,     0,    67,
       0,     0,    81,     0,     0,     0,     0,    31,    32,    34,
       4,    95,   218,   222,   219,   220,   221,     0,   150,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   138,     4,   128,   113,     0,
     120,   121,   114,   115,   116,   117,     0,   152,   156,   168,
     170,   172,   174,   176,   178,   180,   183,   188,   191,   194,
     198,   207,     0,    30,   154,     0,    30,     0,    19,     0,
       0,     0,   154,   131,    64,   240,   194,    78,    90,    74,
       0,    65,    80,    88,    86,    14,     0,     0,     0,     0,
      36,     4,     0,   151,     0,     0,   150,     0,     0,   147,
     148,     0,     0,   205,   199,   200,   201,   202,   203,   204,
       0,     0,     0,   118,   122,     0,   139,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   212,   213,
     214,     0,     0,    97,   103,     0,     0,   102,     0,   155,
     226,     0,     0,     0,     0,     0,     0,   134,   135,     0,
       0,    76,    79,    15,     0,    13,    12,    33,    35,     0,
       4,   146,     0,     0,     0,     0,     0,   149,     0,   223,
     134,     4,   153,   171,     0,   173,   175,   177,   179,   181,
     182,   186,   187,   184,   185,   189,   190,   192,   193,   195,
     196,   197,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   157,   211,   216,     0,   215,     0,   210,    99,
     100,     0,    98,     0,     0,   224,   228,     0,   227,   229,
       0,   235,    16,    20,     0,    62,     0,     0,   105,   137,
       4,     8,     0,     0,     0,     0,     0,     0,   150,     0,
       0,   206,     0,   123,     0,   131,     0,   208,     0,   209,
     104,     0,   237,   225,     0,     0,     0,     0,   236,    11,
      10,    21,    63,     4,     0,   106,   107,   132,   105,     0,
     129,     0,   140,   143,     0,     0,   142,     0,     0,     0,
       0,   169,   217,     0,   238,     0,   230,   231,   234,     0,
     237,   109,   136,     0,     0,   105,   130,     0,   150,     0,
     124,   125,     0,   127,     0,     0,   232,   238,   110,   108,
       0,     0,   141,     0,   144,   126,   239,   233,    17,     0,
       0,    18,   145
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   180,    69,    23,    47,   116,   117,   118,   119,
      73,    26,    27,    28,    29,    48,   179,    31,    74,    75,
      76,   103,   104,    32,    81,    82,    83,   105,    65,    66,
      94,   266,   267,   394,   395,   396,    33,   147,   148,   149,
     150,   151,   280,    71,    97,   152,   153,   154,   155,   202,
     156,   268,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   335,   336,   171,   272,
     347,   348,   349,   350,   351,   187
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -349
static const yytype_int16 yypact[] =
{
    -349,   699,  -349,  -349,  -349,  -349,  -349,  -349,  -349,  -349,
    -349,  -349,  -349,    16,    18,    22,   807,   735,   735,   735,
     735,   735,   735,  -349,    15,   629,  -349,  -349,  -349,  -349,
       6,  -349,  -349,  -349,   -31,   771,    36,   771,    73,   165,
     105,   735,   735,   735,   735,   735,   735,  -349,   105,  -349,
    -349,  -349,  -349,  -349,   111,  -349,  -349,  -349,  -349,  -349,
    -349,    25,  -349,  -349,   113,    13,  -349,   159,    19,   164,
     113,   157,   771,   589,   174,   771,  -349,   771,   190,   165,
     205,   193,   200,  -349,  -349,    29,  -349,   807,   214,  -349,
     424,  -349,  -349,   214,   162,   -16,   105,   185,  -349,  -349,
     105,   203,   332,   125,  -349,   227,  -349,  -349,   204,  -349,
     206,   332,  -349,   165,   -10,   221,   216,  -349,   215,  -349,
     -27,  -349,  -349,  -349,  -349,  -349,  -349,   807,   332,   222,
     228,   231,   500,   232,   220,   229,   308,   342,   332,   332,
     332,   332,   332,   332,   332,  -349,   105,  -349,  -349,   230,
     424,  -349,  -349,  -349,  -349,  -349,   130,  -349,  -349,   103,
     262,   252,   266,   273,   194,   114,   202,   181,   132,   668,
      72,  -349,   255,   671,   332,   226,   807,   336,  -349,    48,
      32,   264,   332,  -349,  -349,  -349,  -349,  -349,    17,  -349,
     332,  -349,  -349,  -349,  -349,  -349,    39,   341,   169,   208,
    -349,   461,   267,   269,   332,   332,   332,   329,   332,  -349,
    -349,   270,   544,  -349,  -349,  -349,  -349,  -349,  -349,  -349,
      92,    34,   272,  -349,  -349,   332,  -349,   332,   332,   332,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   332,   332,   332,   332,   332,   355,  -349,  -349,
     332,   332,   356,  -349,  -349,   281,   282,   278,   283,  -349,
      23,   284,   285,   287,   286,   226,   357,  -349,   290,   292,
     172,  -349,  -349,  -349,   180,  -349,  -349,  -349,  -349,   368,
     105,  -349,    95,    98,   289,   299,   107,  -349,   300,  -349,
       2,   105,  -349,   262,    41,   252,   266,   273,   194,   114,
     114,   202,   202,   202,   202,   181,   181,   132,   132,  -349,
    -349,  -349,  -349,  -349,  -349,  -349,  -349,  -349,  -349,  -349,
    -349,  -349,  -349,  -349,  -349,   302,   294,   104,  -349,  -349,
    -349,   380,  -349,   332,   381,  -349,  -349,   301,   303,  -349,
       1,  -349,  -349,  -349,   178,  -349,   304,   309,   807,  -349,
     105,  -349,   313,   192,   307,   390,   500,   500,   332,   332,
     500,  -349,   226,  -349,    50,  -349,   332,  -349,   332,  -349,
    -349,    -3,  -349,  -349,    23,   226,   332,   391,  -349,  -349,
    -349,  -349,  -349,   105,   316,   312,  -349,  -349,   807,   320,
    -349,   314,   376,  -349,   317,   108,  -349,   321,   322,   226,
     189,  -349,  -349,   332,  -349,   226,  -349,  -349,  -349,     7,
    -349,   398,  -349,   807,   326,   807,  -349,   500,   332,   327,
    -349,  -349,   330,  -349,   335,   226,  -349,  -349,  -349,  -349,
     338,   346,  -349,   347,  -349,  -349,  -349,  -349,  -349,   373,
     500,  -349,  -349
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -349,  -349,   -28,  -349,  -349,   651,   -53,  -349,  -349,   212,
     416,   -15,  -349,   102,  -349,    -1,  -103,  -349,    -4,  -349,
     378,  -349,   233,  -349,   383,  -349,   350,    24,  -349,    60,
    -349,  -349,  -349,  -348,  -349,    46,  -349,  -131,   -47,  -349,
    -349,   333,    84,   -93,  -349,  -349,  -349,  -349,  -349,  -198,
     -48,   305,    76,   -97,  -349,   239,   253,   254,   257,   258,
      42,   -34,    43,    44,   -98,  -349,  -349,  -349,  -349,  -219,
    -349,  -349,   109,  -349,   136,  -105
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -38
static const yytype_int16 yytable[] =
{
      30,   207,    68,   181,   186,   185,   193,   183,   294,    -4,
      62,   196,    85,   186,   185,    40,    92,    91,    54,    34,
      86,    36,    95,    99,    63,    38,   122,   200,   123,   124,
     125,   126,   114,    78,    63,   277,    63,   300,   413,   213,
     214,   215,   216,   217,   218,   219,    84,   175,   413,    64,
     424,   346,   -37,   222,    70,    72,   356,   -37,    62,    55,
      56,    57,   176,   137,   385,   372,   138,   139,   101,   178,
     177,    63,    63,   108,    63,   195,    63,   441,   414,    67,
     203,   386,   102,   387,    -4,   282,   120,   373,   437,   146,
      61,    93,   186,   185,   140,   141,   220,    96,    61,   142,
     143,   144,    35,   343,    37,   344,   376,   115,    39,   270,
      96,   275,    96,   409,   257,   258,   259,   172,   221,   276,
     265,    89,    77,   273,   283,   225,   201,    89,   276,   186,
     276,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   319,   320,   321,   121,   146,
     260,   286,   261,   408,   262,   227,   292,   293,   203,    79,
     296,   235,   236,    88,   220,   416,   418,   228,    80,    88,
     404,   299,   120,   289,   366,   120,   225,   367,    84,   225,
     304,   363,   225,   237,   238,   379,   370,   429,   225,    87,
     432,   225,   225,    55,    56,    57,   436,   374,   120,    90,
     290,   311,   312,   313,   314,   243,   244,   245,   375,   188,
     189,   298,     3,   337,   225,   226,   447,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,   122,
     443,   123,   124,   125,   126,   402,   403,    98,   381,   406,
     173,   100,   174,   233,   234,   186,   185,   239,   240,   287,
     269,   271,   241,   242,   285,    90,   360,   361,   269,   362,
     177,   106,   365,   389,    90,   182,   137,   397,   111,   138,
     139,   399,   276,   360,   433,   309,   310,   109,   186,   411,
     112,   419,   315,   316,   113,   317,   318,    61,   186,   185,
     184,   191,   190,   192,   197,   198,   442,   140,   141,   199,
     204,   302,   142,   143,   144,   209,   205,   390,   434,   206,
     208,   211,   270,   229,   210,   186,   185,   223,   230,   452,
     203,   405,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   231,   263,   122,   334,   123,   124,   125,
     126,   232,   274,   278,   284,   122,   345,   123,   124,   125,
     126,   345,   291,   225,   295,   297,   301,   393,   333,   338,
     339,   340,   341,   357,   342,   421,   354,   355,   358,   352,
     353,   364,   137,   359,   368,   138,   139,   369,   378,   371,
     203,   377,   137,   380,   382,   138,   139,   384,   383,   391,
     392,   398,   400,   401,   420,   422,   423,   393,   425,   426,
     427,   438,   428,   140,   141,   440,   430,   431,   142,   143,
     144,   288,   444,   140,   141,   445,   446,    25,   142,   143,
     212,   281,   393,   448,   393,   449,   450,   122,     3,   123,
     124,   125,   126,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,   127,   128,   129,   407,   130,
     131,   132,   133,   107,   412,   134,   135,   136,   451,   410,
     345,   345,   110,   194,   137,     3,   303,   138,   139,   439,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,   305,   224,   306,   345,   388,   279,   307,     0,
     308,   345,     0,   417,     0,   140,   141,     0,     0,     0,
     142,   143,   144,   122,     0,   123,   124,   125,   126,   145,
      90,   345,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   128,   129,     0,   130,   131,   132,   133,     0,
       0,   134,   135,   136,    84,     0,     0,     0,     0,     0,
     137,     0,     0,   138,   139,     0,     0,   122,     3,   123,
     124,   125,   126,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,     0,     0,
       0,   140,   141,     0,     0,     0,   142,   143,   144,     0,
       0,     0,     0,     0,   137,   145,    90,   138,   139,     0,
       0,     0,     0,     3,     0,     0,     0,     0,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,     0,     0,   140,   141,     0,     0,     0,
     142,   143,   144,    55,    56,    57,    58,    59,    60,     0,
       0,     0,     0,     3,     0,     0,     0,     0,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
       0,     0,    24,     0,   102,     0,     0,     0,     0,     0,
       0,     0,    61,    55,    56,    57,    58,    59,    60,    49,
      50,    51,    52,    53,   264,     3,     0,     0,     0,     0,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,     0,    49,    50,    51,    52,    53,     0,     2,
       0,     0,    61,     3,     0,     0,     0,     0,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,     0,    17,    18,    19,    20,    21,    22,     3,
       0,     0,     0,     0,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    41,
      42,    43,    44,    45,    46,     3,     0,     0,     0,     0,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,    56,    57,    58,    59,
      60,     3,     0,     0,     0,     0,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15
};

static const yytype_int16 yycheck[] =
{
       1,   132,    30,    96,   102,   102,   111,   100,   206,     3,
      25,   114,    40,   111,   111,    16,     3,    64,     3,     3,
      48,     3,     3,    70,    25,     3,     3,   120,     5,     6,
       7,     8,     3,    37,    35,     3,    37,     3,    41,   137,
     138,   139,   140,   141,   142,   143,    73,    63,    41,    25,
     398,   270,    79,   146,    30,    86,   275,    84,    73,    34,
      35,    36,    78,    40,    63,    63,    43,    44,    72,    85,
      80,    72,    73,    77,    75,    85,    77,   425,    81,    73,
     128,    80,    65,    82,    78,   190,    87,    85,    81,    90,
      73,    78,   190,   190,    71,    72,   144,    78,    73,    76,
      77,    78,    86,    80,    86,    82,    65,    78,    86,    86,
      78,    63,    78,    63,    42,    43,    44,    93,   146,    80,
     173,    61,    86,   176,    85,    84,   127,    67,    80,   227,
      80,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,    88,   150,
      78,   198,    80,   372,    82,    52,   204,   205,   206,    86,
     208,    47,    48,    61,   212,   384,   385,    64,     3,    67,
     368,    79,   173,   201,    79,   176,    84,    79,    73,    84,
     228,   284,    84,    69,    70,    81,    79,    79,    84,    78,
     409,    84,    84,    34,    35,    36,   415,   300,   199,    86,
     201,   235,   236,   237,   238,    73,    74,    75,   301,    84,
      85,   212,     4,   261,    84,    85,   435,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,     3,
     428,     5,     6,     7,     8,   366,   367,    73,   343,   370,
      78,    84,    80,    49,    50,   343,   343,    45,    46,    41,
     174,   175,    71,    72,    85,    86,    84,    85,   182,    79,
      80,    87,   290,    85,    86,    80,    40,   360,    63,    43,
      44,    79,    80,    84,    85,   233,   234,    87,   376,   376,
      87,   386,   239,   240,    84,   241,   242,    73,   386,   386,
      87,    87,    65,    87,    73,    79,   427,    71,    72,    84,
      78,   225,    76,    77,    78,    85,    78,   354,   413,    78,
      78,     3,    86,    51,    85,   413,   413,    87,    66,   450,
     368,   369,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,    67,    79,     3,   260,     5,     6,     7,
       8,    68,     6,    79,     3,     3,   270,     5,     6,     7,
       8,   275,    85,    84,    25,    85,    84,   358,     3,     3,
      79,    79,    84,     6,    81,   393,    79,    81,    78,    85,
      85,     3,    40,    81,    85,    43,    44,    78,    84,    79,
     428,    79,    40,     3,     3,    43,    44,    84,    87,    85,
      81,    78,    85,     3,     3,    79,    84,   398,    78,    85,
      24,     3,    85,    71,    72,    79,    85,    85,    76,    77,
      78,   199,    85,    71,    72,    85,    81,     1,    76,    77,
      78,   188,   423,    85,   425,    79,    79,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,   372,    25,
      26,    27,    28,    75,   378,    31,    32,    33,    85,   375,
     384,   385,    79,   113,    40,     4,   227,    43,    44,   423,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,   229,   150,   230,   409,   350,   182,   231,    -1,
     232,   415,    -1,   384,    -1,    71,    72,    -1,    -1,    -1,
      76,    77,    78,     3,    -1,     5,     6,     7,     8,    85,
      86,   435,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    -1,    25,    26,    27,    28,    -1,
      -1,    31,    32,    33,    73,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    43,    44,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    72,    -1,    -1,    -1,    76,    77,    78,    -1,
      -1,    -1,    -1,    -1,    40,    85,    86,    43,    44,    -1,
      -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,
      76,    77,    78,    34,    35,    36,    37,    38,    39,    -1,
      -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,     1,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    34,    35,    36,    37,    38,    39,    18,
      19,    20,    21,    22,     3,     4,    -1,    -1,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    42,    43,    44,    45,    46,    -1,     0,
      -1,    -1,    73,     4,    -1,    -1,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    34,    35,    36,    37,    38,    39,     4,
      -1,    -1,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,     4,    -1,    -1,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,     4,    -1,    -1,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    89,     0,     4,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    34,    35,    36,
      37,    38,    39,    92,    93,    98,    99,   100,   101,   102,
     103,   105,   111,   124,     3,    86,     3,    86,     3,    86,
     103,    34,    35,    36,    37,    38,    39,    93,   103,    93,
      93,    93,    93,    93,     3,    34,    35,    36,    37,    38,
      39,    73,    99,   103,   115,   116,   117,    73,    90,    91,
     115,   131,    86,    98,   106,   107,   108,    86,   106,    86,
       3,   112,   113,   114,    73,    90,    90,    78,   101,   117,
      86,   126,     3,    78,   118,     3,    78,   132,    73,   126,
      84,   106,    65,   109,   110,   115,    87,   108,   106,    87,
     112,    63,    87,    84,     3,    78,    94,    95,    96,    97,
     103,   117,     3,     5,     6,     7,     8,    21,    22,    23,
      25,    26,    27,    28,    31,    32,    33,    40,    43,    44,
      71,    72,    76,    77,    78,    85,   103,   125,   126,   127,
     128,   129,   133,   134,   135,   136,   138,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   156,   115,    78,    80,    63,    78,    80,    85,   104,
      90,   131,    80,   131,    87,   141,   152,   163,    84,    85,
      65,    87,    87,   163,   114,    85,   104,    73,    79,    84,
     131,   103,   137,   138,    78,    78,    78,   125,    78,    85,
      85,     3,    78,   152,   152,   152,   152,   152,   152,   152,
     138,    90,   131,    87,   129,    84,    85,    52,    64,    51,
      66,    67,    68,    49,    50,    47,    48,    69,    70,    45,
      46,    71,    72,    73,    74,    75,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    42,    43,    44,
      78,    80,    82,    79,     3,    94,   119,   120,   139,   140,
      86,   140,   157,    94,     6,    63,    80,     3,    79,   139,
     130,   110,   163,    85,     3,    85,   126,    41,    97,    90,
     103,    85,   138,   138,   137,    25,   138,    85,   103,    79,
       3,    84,   140,   143,   138,   144,   145,   146,   147,   148,
     148,   149,   149,   149,   149,   150,   150,   151,   151,   152,
     152,   152,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,     3,   140,   154,   155,   138,     3,    79,
      79,    84,    81,    80,    82,   140,   157,   158,   159,   160,
     161,   162,    85,    85,    79,    81,   157,     6,    78,    81,
      84,    85,    79,   104,     3,    90,    79,    79,    85,    78,
      79,    79,    63,    85,   104,   131,    65,    79,    84,    81,
       3,   163,     3,    87,    84,    63,    80,    82,   162,    85,
     126,    85,    81,   103,   121,   122,   123,   131,    78,    79,
      85,     3,   125,   125,   137,   138,   125,   140,   157,    63,
     130,   141,   140,    41,    81,    63,   157,   160,   157,   163,
       3,    90,    79,    84,   121,    78,    85,    24,    85,    79,
      85,    85,   157,    85,   163,    63,   157,    81,     3,   123,
      79,   121,   125,   137,    85,    85,    81,   157,    85,    79,
      79,    85,   125
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
#line 144 "c.y"
	{ free((yyvaluep->sval)); };
#line 1796 "parser.c"
	break;
      case 5: /* "STRING_LITERAL" */
#line 144 "c.y"
	{ free((yyvaluep->sval)); };
#line 1801 "parser.c"
	break;
      case 6: /* "INTEGER_CONSTANT" */
#line 144 "c.y"
	{ free((yyvaluep->sval)); };
#line 1806 "parser.c"
	break;
      case 7: /* "FLOAT_CONSTANT" */
#line 144 "c.y"
	{ free((yyvaluep->sval)); };
#line 1811 "parser.c"
	break;
      case 8: /* "CHAR_CONSTANT" */
#line 144 "c.y"
	{ free((yyvaluep->sval)); };
#line 1816 "parser.c"
	break;
      case 90: /* "star_list_opt" */
#line 144 "c.y"
	{ free((yyvaluep->sval)); };
#line 1821 "parser.c"
	break;
      case 91: /* "star_list" */
#line 144 "c.y"
	{ free((yyvaluep->sval)); };
#line 1826 "parser.c"
	break;
      case 103: /* "type_specifier" */
#line 144 "c.y"
	{ free((yyvaluep->sval)); };
#line 1831 "parser.c"
	break;
      case 104: /* "array_dims" */
#line 144 "c.y"
	{ free((yyvaluep->sval)); };
#line 1836 "parser.c"
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
#line 224 "c.y"
    { (yyval.sval) = strdup(""); ;}
    break;

  case 5:
#line 225 "c.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 6:
#line 229 "c.y"
    { (yyval.sval) = strdup("*"); ;}
    break;

  case 7:
#line 230 "c.y"
    {
      size_t n = strlen((yyvsp[(1) - (2)].sval)) + 2;
      char* s = (char*)malloc(n);
      if(s) { strcpy(s, (yyvsp[(1) - (2)].sval)); strcat(s, "*"); }
      free((yyvsp[(1) - (2)].sval));
      (yyval.sval) = s;
    ;}
    break;

  case 8:
#line 241 "c.y"
    {
      char* base=(yyvsp[(1) - (6)].sval);
      char* t1=compose_type(base,(yyvsp[(2) - (6)].dstr)); AstNode* d1=ast_decl_new(t1,(yyvsp[(2) - (6)].dstr)->name,NULL); free(t1); dstr_free((yyvsp[(2) - (6)].dstr)); ast_add(d1);
      char* t2=compose_type(base,(yyvsp[(4) - (6)].dstr)); AstNode* d2=ast_decl_new(t2,(yyvsp[(4) - (6)].dstr)->name,NULL); free(t2); dstr_free((yyvsp[(4) - (6)].dstr)); ast_add(d2);
      if((yyvsp[(5) - (6)].nlist)){ for(long i=0;i<(yyvsp[(5) - (6)].nlist)->n;i++){ DStr* ds=(DStr*)(yyvsp[(5) - (6)].nlist)->a[i]; char* tx=compose_type(base,ds); AstNode* dn=ast_decl_new(tx, ds->name,NULL); free(tx); dstr_free(ds); ast_add(dn);} free((yyvsp[(5) - (6)].nlist)->a); free((yyvsp[(5) - (6)].nlist)); }
      free(base);
    ;}
    break;

  case 10:
#line 250 "c.y"
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

  case 11:
#line 267 "c.y"
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

  case 12:
#line 284 "c.y"
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

  case 13:
#line 295 "c.y"
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

  case 14:
#line 306 "c.y"
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

  case 15:
#line 316 "c.y"
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

  case 16:
#line 327 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (6)].sval)) + strlen((yyvsp[(2) - (6)].sval) ? (yyvsp[(2) - (6)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, (yyvsp[(1) - (6)].sval)); if((yyvsp[(2) - (6)].sval)) strcat(t, (yyvsp[(2) - (6)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(1) - (6)].sval), (yyvsp[(3) - (6)].sval), (yyvsp[(5) - (6)].node));
      free(t); free((yyvsp[(1) - (6)].sval)); free((yyvsp[(2) - (6)].sval));
      ast_add(d);
    ;}
    break;

  case 17:
#line 336 "c.y"
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

  case 18:
#line 346 "c.y"
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

  case 19:
#line 358 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (4)].sval)) + strlen((yyvsp[(2) - (4)].sval) ? (yyvsp[(2) - (4)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, (yyvsp[(1) - (4)].sval)); if((yyvsp[(2) - (4)].sval)) strcat(t, (yyvsp[(2) - (4)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].sval), NULL);
      free(t); free((yyvsp[(1) - (4)].sval)); free((yyvsp[(2) - (4)].sval));
      ast_add(d);
    ;}
    break;

  case 20:
#line 367 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (6)].sval)) + strlen((yyvsp[(2) - (6)].sval) ? (yyvsp[(2) - (6)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, (yyvsp[(1) - (6)].sval)); if((yyvsp[(2) - (6)].sval)) strcat(t, (yyvsp[(2) - (6)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(1) - (6)].sval), (yyvsp[(3) - (6)].sval), (yyvsp[(5) - (6)].node));
      free(t); free((yyvsp[(1) - (6)].sval)); free((yyvsp[(2) - (6)].sval));
      ast_add(d);
    ;}
    break;

  case 21:
#line 376 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (7)].sval)) + strlen((yyvsp[(2) - (7)].sval) ? (yyvsp[(2) - (7)].sval) : "") + strlen((yyvsp[(4) - (7)].sval) ? (yyvsp[(4) - (7)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, (yyvsp[(1) - (7)].sval)); if((yyvsp[(2) - (7)].sval)) strcat(t, (yyvsp[(2) - (7)].sval)); if((yyvsp[(4) - (7)].sval)) strcat(t, (yyvsp[(4) - (7)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(1) - (7)].sval), (yyvsp[(3) - (7)].sval), (yyvsp[(6) - (7)].node));
      free(t); free((yyvsp[(1) - (7)].sval)); free((yyvsp[(2) - (7)].sval)); free((yyvsp[(4) - (7)].sval));
      ast_add(d);
    ;}
    break;

  case 23:
#line 390 "c.y"
    { (yyval.fspec) = fspec_new_from((yyvsp[(1) - (2)].sval), (yyvsp[(2) - (2)].sval)); free((yyvsp[(1) - (2)].sval)); free((yyvsp[(2) - (2)].sval)); ;}
    break;

  case 24:
#line 391 "c.y"
    { (yyval.fspec) = (yyvsp[(2) - (2)].fspec); if((yyval.fspec)) (yyval.fspec)->flags |= ASTF_EXTERN; ;}
    break;

  case 25:
#line 392 "c.y"
    { (yyval.fspec) = (yyvsp[(2) - (2)].fspec); if((yyval.fspec)) (yyval.fspec)->flags |= ASTF_STATIC; ;}
    break;

  case 26:
#line 393 "c.y"
    { (yyval.fspec) = (yyvsp[(2) - (2)].fspec); if((yyval.fspec)) (yyval.fspec)->flags |= ASTF_CONST; ;}
    break;

  case 27:
#line 394 "c.y"
    { (yyval.fspec) = (yyvsp[(2) - (2)].fspec); if((yyval.fspec)) (yyval.fspec)->flags |= ASTF_VOLATILE; ;}
    break;

  case 28:
#line 395 "c.y"
    { (yyval.fspec) = (yyvsp[(2) - (2)].fspec); if((yyval.fspec)) (yyval.fspec)->flags |= ASTF_RESTRICT; ;}
    break;

  case 29:
#line 396 "c.y"
    { (yyval.fspec) = (yyvsp[(2) - (2)].fspec); if((yyval.fspec)) (yyval.fspec)->flags |= ASTF_INLINE; ;}
    break;

  case 30:
#line 401 "c.y"
    { (yyval.plist) = NULL; ;}
    break;

  case 31:
#line 402 "c.y"
    { (yyval.plist) = (yyvsp[(1) - (1)].plist); ;}
    break;

  case 32:
#line 406 "c.y"
    { (yyval.plist) = (yyvsp[(1) - (1)].plist); ;}
    break;

  case 33:
#line 407 "c.y"
    { (yyval.plist) = (yyvsp[(1) - (3)].plist); /* variadic marker ignored in AST */ ;}
    break;

  case 34:
#line 411 "c.y"
    { (yyval.plist) = (yyvsp[(1) - (1)].plist); ;}
    break;

  case 35:
#line 412 "c.y"
    { (yyval.plist) = plist_merge((yyvsp[(1) - (3)].plist), (yyvsp[(3) - (3)].plist)); ;}
    break;

  case 36:
#line 417 "c.y"
    {
      ParamList* p = plist_new();
      char* t = compose_type((yyvsp[(1) - (2)].sval), (yyvsp[(2) - (2)].dstr));
      plist_push(p, t ? t : (yyvsp[(1) - (2)].sval), (yyvsp[(2) - (2)].dstr)->name);
      if(t) free(t);
      dstr_free((yyvsp[(2) - (2)].dstr));
      free((yyvsp[(1) - (2)].sval));
      (yyval.plist) = p;
    ;}
    break;

  case 37:
#line 427 "c.y"
    {
      ParamList* p = plist_new();
      /* parameter without a name (e.g., void) */
      plist_push(p, (yyvsp[(1) - (1)].sval), NULL);
      free((yyvsp[(1) - (1)].sval));
      (yyval.plist) = p;
    ;}
    break;

  case 50:
#line 486 "c.y"
    { (yyval.sval) = strdup("void"); ;}
    break;

  case 51:
#line 487 "c.y"
    { (yyval.sval) = strdup("char"); ;}
    break;

  case 52:
#line 488 "c.y"
    { (yyval.sval) = strdup("short"); ;}
    break;

  case 53:
#line 489 "c.y"
    { (yyval.sval) = strdup("int"); ;}
    break;

  case 54:
#line 490 "c.y"
    { (yyval.sval) = strdup("long"); ;}
    break;

  case 55:
#line 491 "c.y"
    { (yyval.sval) = strdup("signed"); ;}
    break;

  case 56:
#line 492 "c.y"
    { (yyval.sval) = strdup("unsigned"); ;}
    break;

  case 57:
#line 493 "c.y"
    { (yyval.sval) = strdup("float"); ;}
    break;

  case 58:
#line 494 "c.y"
    { (yyval.sval) = strdup("double"); ;}
    break;

  case 59:
#line 495 "c.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 60:
#line 496 "c.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 61:
#line 497 "c.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 62:
#line 502 "c.y"
    {
      size_t n = strlen((yyvsp[(2) - (3)].sval)) + 3; /* [ + num + ] + \0 */
      char* s = (char*)malloc(n);
      if(s) { s[0]='\0'; strcat(s, "["); strcat(s, (yyvsp[(2) - (3)].sval)); strcat(s, "]"); }
      free((yyvsp[(2) - (3)].sval));
      (yyval.sval) = s;
    ;}
    break;

  case 63:
#line 509 "c.y"
    {
      size_t n = strlen((yyvsp[(1) - (4)].sval)) + 1 + strlen((yyvsp[(3) - (4)].sval)) + 2 + 1;
      char* s = (char*)malloc(n);
      if(s) { strcpy(s, (yyvsp[(1) - (4)].sval)); strcat(s, "["); strcat(s, (yyvsp[(3) - (4)].sval)); strcat(s, "]"); }
      free((yyvsp[(1) - (4)].sval));
      free((yyvsp[(3) - (4)].sval));
      (yyval.sval) = s;
    ;}
    break;

  case 64:
#line 520 "c.y"
    { size_t n=strlen("struct ")+strlen((yyvsp[(2) - (5)].sval))+1; (yyval.sval)=(char*)malloc(n); if((yyval.sval)){ strcpy((yyval.sval), "struct "); strcat((yyval.sval), (yyvsp[(2) - (5)].sval));} ;}
    break;

  case 65:
#line 521 "c.y"
    { size_t n=strlen("union ")+strlen((yyvsp[(2) - (5)].sval))+1; (yyval.sval)=(char*)malloc(n); if((yyval.sval)){ strcpy((yyval.sval), "union "); strcat((yyval.sval), (yyvsp[(2) - (5)].sval));} ;}
    break;

  case 66:
#line 522 "c.y"
    { (yyval.sval) = strdup("struct"); ;}
    break;

  case 67:
#line 523 "c.y"
    { (yyval.sval) = strdup("union"); ;}
    break;

  case 68:
#line 524 "c.y"
    { size_t n=strlen("struct ")+strlen((yyvsp[(2) - (2)].sval))+1; (yyval.sval)=(char*)malloc(n); if((yyval.sval)){ strcpy((yyval.sval), "struct "); strcat((yyval.sval), (yyvsp[(2) - (2)].sval));} ;}
    break;

  case 69:
#line 525 "c.y"
    { size_t n=strlen("union ")+strlen((yyvsp[(2) - (2)].sval))+1; (yyval.sval)=(char*)malloc(n); if((yyval.sval)){ strcpy((yyval.sval), "union "); strcat((yyval.sval), (yyvsp[(2) - (2)].sval));} ;}
    break;

  case 80:
#line 554 "c.y"
    { size_t n=strlen("enum ")+strlen((yyvsp[(2) - (5)].sval))+1; (yyval.sval)=(char*)malloc(n); if((yyval.sval)){ strcpy((yyval.sval), "enum "); strcat((yyval.sval), (yyvsp[(2) - (5)].sval));} ;}
    break;

  case 81:
#line 555 "c.y"
    { (yyval.sval) = strdup("enum"); ;}
    break;

  case 82:
#line 556 "c.y"
    { size_t n=strlen("enum ")+strlen((yyvsp[(2) - (2)].sval))+1; (yyval.sval)=(char*)malloc(n); if((yyval.sval)){ strcpy((yyval.sval), "enum "); strcat((yyval.sval), (yyvsp[(2) - (2)].sval));} ;}
    break;

  case 105:
#line 611 "c.y"
    { (yyval.sval) = strdup("()"); ;}
    break;

  case 106:
#line 612 "c.y"
    {
      size_t n = strlen((yyvsp[(1) - (1)].sval)) + 3;
      char* s = (char*)malloc(n);
      if(s) { s[0]='\0'; strcat(s, "("); strcat(s, (yyvsp[(1) - (1)].sval)); strcat(s, ")"); }
      free((yyvsp[(1) - (1)].sval));
      (yyval.sval) = s;
    ;}
    break;

  case 107:
#line 622 "c.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 108:
#line 623 "c.y"
    {
      size_t n = strlen((yyvsp[(1) - (3)].sval)) + 2 + strlen((yyvsp[(3) - (3)].sval)) + 1;
      char* s = (char*)malloc(n);
      if(s) { strcpy(s, (yyvsp[(1) - (3)].sval)); strcat(s, ", "); strcat(s, (yyvsp[(3) - (3)].sval)); }
      free((yyvsp[(1) - (3)].sval)); free((yyvsp[(3) - (3)].sval));
      (yyval.sval) = s;
    ;}
    break;

  case 109:
#line 633 "c.y"
    {
      size_t n = strlen((yyvsp[(1) - (2)].sval)) + strlen((yyvsp[(2) - (2)].sval) ? (yyvsp[(2) - (2)].sval) : "") + 1;
      char* s = (char*)malloc(n);
      if(s) { s[0]='\0'; strcat(s, (yyvsp[(1) - (2)].sval)); if((yyvsp[(2) - (2)].sval)) strcat(s, (yyvsp[(2) - (2)].sval)); }
      (yyval.sval) = s;
      free((yyvsp[(1) - (2)].sval)); free((yyvsp[(2) - (2)].sval));
    ;}
    break;

  case 110:
#line 640 "c.y"
    {
      size_t n = strlen((yyvsp[(1) - (3)].sval)) + strlen((yyvsp[(2) - (3)].sval) ? (yyvsp[(2) - (3)].sval) : "") + 1;
      char* s = (char*)malloc(n);
      if(s) { s[0]='\0'; strcat(s, (yyvsp[(1) - (3)].sval)); if((yyvsp[(2) - (3)].sval)) strcat(s, (yyvsp[(2) - (3)].sval)); }
      (yyval.sval) = s;
      free((yyvsp[(1) - (3)].sval)); free((yyvsp[(2) - (3)].sval)); free((yyvsp[(3) - (3)].sval));
    ;}
    break;

  case 113:
#line 659 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 114:
#line 660 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 115:
#line 661 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 116:
#line 662 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 117:
#line 663 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 118:
#line 667 "c.y"
    { (yyval.node) = (AstNode*)ast_compound_new_with((yyvsp[(2) - (3)].nlist) ? (yyvsp[(2) - (3)].nlist)->a : NULL, (yyvsp[(2) - (3)].nlist) ? (yyvsp[(2) - (3)].nlist)->n : 0); if((yyvsp[(2) - (3)].nlist)) free((yyvsp[(2) - (3)].nlist)); ;}
    break;

  case 119:
#line 671 "c.y"
    { (yyval.nlist) = NULL; ;}
    break;

  case 120:
#line 672 "c.y"
    { (yyval.nlist) = (yyvsp[(1) - (1)].nlist); ;}
    break;

  case 121:
#line 676 "c.y"
    { (yyval.nlist) = (yyvsp[(1) - (1)].nlist); ;}
    break;

  case 122:
#line 677 "c.y"
    { (yyval.nlist) = nlist_merge((yyvsp[(1) - (2)].nlist), (yyvsp[(2) - (2)].nlist)); ;}
    break;

  case 123:
#line 681 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (4)].sval)) + strlen((yyvsp[(2) - (4)].sval) ? (yyvsp[(2) - (4)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, (yyvsp[(1) - (4)].sval)); if((yyvsp[(2) - (4)].sval)) strcat(t, (yyvsp[(2) - (4)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].sval), NULL);
      free(t); free((yyvsp[(1) - (4)].sval)); free((yyvsp[(2) - (4)].sval)); /* $3 freed by decl */
      (yyval.nlist) = nlist_from1(d);
    ;}
    break;

  case 124:
#line 689 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (6)].sval)) + strlen((yyvsp[(2) - (6)].sval) ? (yyvsp[(2) - (6)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, (yyvsp[(1) - (6)].sval)); if((yyvsp[(2) - (6)].sval)) strcat(t, (yyvsp[(2) - (6)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(1) - (6)].sval), (yyvsp[(3) - (6)].sval), (yyvsp[(5) - (6)].node));
      free(t); free((yyvsp[(1) - (6)].sval)); free((yyvsp[(2) - (6)].sval));
      (yyval.nlist) = nlist_from1(d);
    ;}
    break;

  case 125:
#line 697 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (6)].sval)) + strlen((yyvsp[(2) - (6)].sval) ? (yyvsp[(2) - (6)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, (yyvsp[(1) - (6)].sval)); if((yyvsp[(2) - (6)].sval)) strcat(t, (yyvsp[(2) - (6)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(1) - (6)].sval), (yyvsp[(3) - (6)].sval), (yyvsp[(5) - (6)].node));
      free(t); free((yyvsp[(1) - (6)].sval)); free((yyvsp[(2) - (6)].sval));
      (yyval.nlist) = nlist_from1(d);
    ;}
    break;

  case 126:
#line 705 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (7)].sval)) + strlen((yyvsp[(2) - (7)].sval) ? (yyvsp[(2) - (7)].sval) : "") + strlen((yyvsp[(4) - (7)].sval) ? (yyvsp[(4) - (7)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, (yyvsp[(1) - (7)].sval)); if((yyvsp[(2) - (7)].sval)) strcat(t, (yyvsp[(2) - (7)].sval)); if((yyvsp[(4) - (7)].sval)) strcat(t, (yyvsp[(4) - (7)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(1) - (7)].sval), (yyvsp[(3) - (7)].sval), (yyvsp[(6) - (7)].node));
      free(t); free((yyvsp[(1) - (7)].sval)); free((yyvsp[(2) - (7)].sval)); free((yyvsp[(4) - (7)].sval));
      (yyval.nlist) = nlist_from1(d);
    ;}
    break;

  case 127:
#line 714 "c.y"
    {
      char* base=(yyvsp[(1) - (6)].sval); NodeList* nl=nlist_new();
      char* t1=compose_type(base,(yyvsp[(2) - (6)].dstr)); AstNode* d1=ast_decl_new(t1,(yyvsp[(2) - (6)].dstr)->name,NULL); free(t1); dstr_free((yyvsp[(2) - (6)].dstr)); nlist_push(nl,d1);
      char* t2=compose_type(base,(yyvsp[(4) - (6)].dstr)); AstNode* d2=ast_decl_new(t2,(yyvsp[(4) - (6)].dstr)->name,NULL); free(t2); dstr_free((yyvsp[(4) - (6)].dstr)); nlist_push(nl,d2);
      if((yyvsp[(5) - (6)].nlist)){ for(long i=0;i<(yyvsp[(5) - (6)].nlist)->n;i++){ DStr* ds=(DStr*)(yyvsp[(5) - (6)].nlist)->a[i]; char* tx=compose_type(base,ds); AstNode* dn=ast_decl_new(tx, ds->name,NULL); free(tx); dstr_free(ds); nlist_push(nl,dn);} free((yyvsp[(5) - (6)].nlist)->a); free((yyvsp[(5) - (6)].nlist)); }
      free(base);
      (yyval.nlist)=nl;
    ;}
    break;

  case 128:
#line 722 "c.y"
    { (yyval.nlist) = nlist_from1((yyvsp[(1) - (1)].node)); ;}
    break;

  case 129:
#line 725 "c.y"
    {
      size_t nt = strlen((yyvsp[(2) - (5)].sval)) + strlen((yyvsp[(3) - (5)].sval) ? (yyvsp[(3) - (5)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; strcat(t, (yyvsp[(2) - (5)].sval)); if((yyvsp[(3) - (5)].sval)) strcat(t, (yyvsp[(3) - (5)].sval)); }
      AstNode* td = ast_typedef_new(t ? t : (yyvsp[(2) - (5)].sval), (yyvsp[(4) - (5)].sval));
      free(t);
      (yyval.nlist) = nlist_from1(td);
    ;}
    break;

  case 130:
#line 734 "c.y"
    {
      size_t nt = strlen((yyvsp[(2) - (6)].sval)) + 1 + strlen((yyvsp[(3) - (6)].sval)) + strlen((yyvsp[(4) - (6)].sval) ? (yyvsp[(4) - (6)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; strcat(t, (yyvsp[(2) - (6)].sval)); strcat(t, " "); strcat(t, (yyvsp[(3) - (6)].sval)); if((yyvsp[(4) - (6)].sval)) strcat(t, (yyvsp[(4) - (6)].sval)); }
      AstNode* td = ast_typedef_new(t ? t : (yyvsp[(2) - (6)].sval), (yyvsp[(5) - (6)].sval));
      free(t);
      (yyval.nlist) = nlist_from1(td);
    ;}
    break;

  case 131:
#line 746 "c.y"
    { (yyval.nlist)=NULL; ;}
    break;

  case 132:
#line 747 "c.y"
    { if(!(yyvsp[(1) - (3)].nlist)){ NodeList* nl=nlist_new(); (yyval.nlist)=nl; } nlist_push((yyvsp[(1) - (3)].nlist), (AstNode*)(yyvsp[(3) - (3)].dstr)); (yyval.nlist)=(yyvsp[(1) - (3)].nlist); ;}
    break;

  case 133:
#line 752 "c.y"
    { DStr* d=(DStr*)calloc(1,sizeof(DStr)); d->name=sdup0x((yyvsp[(2) - (2)].dstr)->name); d->pre=sdup0x((yyvsp[(1) - (2)].sval)); d->post=sdup0x((yyvsp[(2) - (2)].dstr)->post); dstr_free((yyvsp[(2) - (2)].dstr)); free((yyvsp[(1) - (2)].sval)); (yyval.dstr)=d; ;}
    break;

  case 134:
#line 756 "c.y"
    { DStr* d=(DStr*)calloc(1,sizeof(DStr)); d->name=(yyvsp[(1) - (1)].sval); d->pre=strdup(""); d->post=strdup(""); (yyval.dstr)=d; ;}
    break;

  case 135:
#line 757 "c.y"
    { (yyval.dstr)=(yyvsp[(2) - (3)].dstr); ;}
    break;

  case 136:
#line 758 "c.y"
    { char* params=(yyvsp[(5) - (6)].sval)?(yyvsp[(5) - (6)].sval):strdup("()"); (yyvsp[(2) - (6)].dstr)->post=sappend3((yyvsp[(2) - (6)].dstr)->post, "(*)", params); free((yyvsp[(5) - (6)].sval)); (yyval.dstr)=(yyvsp[(2) - (6)].dstr); ;}
    break;

  case 137:
#line 759 "c.y"
    { char* suf=array_suffix_from_expr((yyvsp[(3) - (4)].node)); (yyvsp[(1) - (4)].dstr)->post=sappend((yyvsp[(1) - (4)].dstr)->post,suf); free(suf); (yyval.dstr)=(yyvsp[(1) - (4)].dstr); ;}
    break;

  case 138:
#line 765 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 139:
#line 766 "c.y"
    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 146:
#line 782 "c.y"
    { (yyval.node) = ast_return_new((yyvsp[(2) - (3)].node)); ;}
    break;

  case 147:
#line 783 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 148:
#line 784 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 149:
#line 785 "c.y"
    { free((yyvsp[(2) - (3)].sval)); (yyval.node) = NULL; ;}
    break;

  case 150:
#line 790 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 151:
#line 791 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 152:
#line 795 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 153:
#line 796 "c.y"
    { (yyval.node) = (yyvsp[(3) - (3)].node); ;}
    break;

  case 154:
#line 800 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 155:
#line 801 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 156:
#line 805 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 157:
#line 806 "c.y"
    { (yyval.node) = ast_expr_assign_new("=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 158:
#line 807 "c.y"
    { (yyval.node) = ast_expr_assign_new("+=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 159:
#line 808 "c.y"
    { (yyval.node) = ast_expr_assign_new("-=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 160:
#line 809 "c.y"
    { (yyval.node) = ast_expr_assign_new("*=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 161:
#line 810 "c.y"
    { (yyval.node) = ast_expr_assign_new("/=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 162:
#line 811 "c.y"
    { (yyval.node) = ast_expr_assign_new("%=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 163:
#line 812 "c.y"
    { (yyval.node) = ast_expr_assign_new("&=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 164:
#line 813 "c.y"
    { (yyval.node) = ast_expr_assign_new("|=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 165:
#line 814 "c.y"
    { (yyval.node) = ast_expr_assign_new("^=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 166:
#line 815 "c.y"
    { (yyval.node) = ast_expr_assign_new("<<=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 167:
#line 816 "c.y"
    { (yyval.node) = ast_expr_assign_new(">>=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 168:
#line 820 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 169:
#line 821 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 170:
#line 825 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 171:
#line 826 "c.y"
    { (yyval.node) = ast_expr_binary_new("||", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 172:
#line 830 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 173:
#line 831 "c.y"
    { (yyval.node) = ast_expr_binary_new("&&", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 174:
#line 835 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 175:
#line 836 "c.y"
    { (yyval.node) = ast_expr_binary_new("|", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 176:
#line 840 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 177:
#line 841 "c.y"
    { (yyval.node) = ast_expr_binary_new("^", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 178:
#line 845 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 179:
#line 846 "c.y"
    { (yyval.node) = ast_expr_binary_new("&", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 180:
#line 850 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 181:
#line 851 "c.y"
    { (yyval.node) = ast_expr_binary_new("==", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 182:
#line 852 "c.y"
    { (yyval.node) = ast_expr_binary_new("!=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 183:
#line 856 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 184:
#line 857 "c.y"
    { (yyval.node) = ast_expr_binary_new("<", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 185:
#line 858 "c.y"
    { (yyval.node) = ast_expr_binary_new(">", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 186:
#line 859 "c.y"
    { (yyval.node) = ast_expr_binary_new("<=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 187:
#line 860 "c.y"
    { (yyval.node) = ast_expr_binary_new(">=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 188:
#line 864 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 189:
#line 865 "c.y"
    { (yyval.node) = ast_expr_binary_new("<<", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 190:
#line 866 "c.y"
    { (yyval.node) = ast_expr_binary_new(">>", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 191:
#line 870 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 192:
#line 871 "c.y"
    { (yyval.node) = ast_expr_binary_new("+", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 193:
#line 872 "c.y"
    { (yyval.node) = ast_expr_binary_new("-", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 194:
#line 876 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 195:
#line 877 "c.y"
    { (yyval.node) = ast_expr_binary_new("*", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 196:
#line 878 "c.y"
    { (yyval.node) = ast_expr_binary_new("/", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 197:
#line 879 "c.y"
    { (yyval.node) = ast_expr_binary_new("%", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 198:
#line 883 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 199:
#line 884 "c.y"
    { (yyval.node) = ast_expr_unary_new("++", (yyvsp[(2) - (2)].node), 0); ;}
    break;

  case 200:
#line 885 "c.y"
    { (yyval.node) = ast_expr_unary_new("--", (yyvsp[(2) - (2)].node), 0); ;}
    break;

  case 201:
#line 886 "c.y"
    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 202:
#line 887 "c.y"
    { (yyval.node) = ast_expr_unary_new("-", (yyvsp[(2) - (2)].node), 0); ;}
    break;

  case 203:
#line 888 "c.y"
    { (yyval.node) = ast_expr_unary_new("!", (yyvsp[(2) - (2)].node), 0); ;}
    break;

  case 204:
#line 889 "c.y"
    { (yyval.node) = ast_expr_unary_new("~", (yyvsp[(2) - (2)].node), 0); ;}
    break;

  case 205:
#line 890 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 206:
#line 891 "c.y"
    { free((yyvsp[(3) - (4)].sval)); (yyval.node) = NULL; ;}
    break;

  case 207:
#line 895 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 208:
#line 896 "c.y"
    {
      (yyval.node) = ast_expr_call_new((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].nlist) ? (yyvsp[(3) - (4)].nlist)->a : NULL, (yyvsp[(3) - (4)].nlist) ? (yyvsp[(3) - (4)].nlist)->n : 0);
      if((yyvsp[(3) - (4)].nlist)) { free((yyvsp[(3) - (4)].nlist)); }
    ;}
    break;

  case 209:
#line 900 "c.y"
    { (yyval.node) = ast_expr_index_new((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node)); ;}
    break;

  case 210:
#line 901 "c.y"
    { (yyval.node) = ast_expr_member_new((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].sval), 0); free((yyvsp[(3) - (3)].sval)); ;}
    break;

  case 211:
#line 902 "c.y"
    { (yyval.node) = ast_expr_member_new((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].sval), 1); free((yyvsp[(3) - (3)].sval)); ;}
    break;

  case 212:
#line 903 "c.y"
    { (yyval.node) = ast_expr_unary_new("++", (yyvsp[(1) - (2)].node), 1); ;}
    break;

  case 213:
#line 904 "c.y"
    { (yyval.node) = ast_expr_unary_new("--", (yyvsp[(1) - (2)].node), 1); ;}
    break;

  case 214:
#line 908 "c.y"
    { (yyval.nlist) = NULL; ;}
    break;

  case 215:
#line 909 "c.y"
    { (yyval.nlist) = (yyvsp[(1) - (1)].nlist); ;}
    break;

  case 216:
#line 913 "c.y"
    { (yyval.nlist) = nlist_from1((yyvsp[(1) - (1)].node)); ;}
    break;

  case 217:
#line 914 "c.y"
    { nlist_push((yyvsp[(1) - (3)].nlist), (yyvsp[(3) - (3)].node)); (yyval.nlist) = (yyvsp[(1) - (3)].nlist); ;}
    break;

  case 218:
#line 918 "c.y"
    { (yyval.node) = ast_expr_ident_new((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 219:
#line 919 "c.y"
    { (yyval.node) = ast_expr_int_new(atol((yyvsp[(1) - (1)].sval))); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 220:
#line 920 "c.y"
    { (yyval.node) = ast_expr_float_new(atof((yyvsp[(1) - (1)].sval))); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 221:
#line 921 "c.y"
    { (yyval.node) = ast_expr_char_new((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 222:
#line 922 "c.y"
    { (yyval.node) = ast_expr_string_new((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 223:
#line 923 "c.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 224:
#line 928 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 225:
#line 929 "c.y"
    { (yyval.node) = (AstNode*)ast_init_list_new((yyvsp[(2) - (3)].nlist) ? (yyvsp[(2) - (3)].nlist)->a : NULL, (yyvsp[(2) - (3)].nlist) ? (yyvsp[(2) - (3)].nlist)->n : 0); if((yyvsp[(2) - (3)].nlist)) free((yyvsp[(2) - (3)].nlist)); ;}
    break;

  case 226:
#line 933 "c.y"
    { (yyval.nlist) = NULL; ;}
    break;

  case 227:
#line 934 "c.y"
    { (yyval.nlist) = (yyvsp[(1) - (1)].nlist); ;}
    break;

  case 228:
#line 938 "c.y"
    { (yyval.nlist) = nlist_from1((yyvsp[(1) - (1)].node)); ;}
    break;

  case 229:
#line 939 "c.y"
    { (yyval.nlist) = nlist_from1((yyvsp[(1) - (1)].node)); ;}
    break;

  case 230:
#line 940 "c.y"
    { nlist_push((yyvsp[(1) - (3)].nlist), (yyvsp[(3) - (3)].node)); (yyval.nlist) = (yyvsp[(1) - (3)].nlist); ;}
    break;

  case 231:
#line 941 "c.y"
    { nlist_push((yyvsp[(1) - (3)].nlist), (yyvsp[(3) - (3)].node)); (yyval.nlist) = (yyvsp[(1) - (3)].nlist); ;}
    break;

  case 232:
#line 945 "c.y"
    { (yyval.node) = ast_init_desig_field_new((yyvsp[(2) - (4)].sval), (yyvsp[(4) - (4)].node)); free((yyvsp[(2) - (4)].sval)); ;}
    break;

  case 233:
#line 946 "c.y"
    { (yyval.node) = ast_init_desig_index_new((yyvsp[(2) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 234:
#line 947 "c.y"
    { (yyval.node) = ast_init_desig_chain_new((yyvsp[(1) - (3)].nlist) ? (yyvsp[(1) - (3)].nlist)->a : NULL, (yyvsp[(1) - (3)].nlist) ? (yyvsp[(1) - (3)].nlist)->n : 0, (yyvsp[(3) - (3)].node)); if((yyvsp[(1) - (3)].nlist)) free((yyvsp[(1) - (3)].nlist)); ;}
    break;

  case 235:
#line 952 "c.y"
    { (yyval.nlist) = nlist_from1((yyvsp[(1) - (1)].node)); ;}
    break;

  case 236:
#line 953 "c.y"
    { nlist_push((yyvsp[(1) - (2)].nlist), (yyvsp[(2) - (2)].node)); (yyval.nlist) = (yyvsp[(1) - (2)].nlist); ;}
    break;

  case 237:
#line 957 "c.y"
    { (yyval.node) = ast_desig_field_new((yyvsp[(2) - (2)].sval)); free((yyvsp[(2) - (2)].sval)); ;}
    break;

  case 238:
#line 958 "c.y"
    { (yyval.node) = ast_desig_index_new((yyvsp[(2) - (3)].node)); ;}
    break;

  case 239:
#line 959 "c.y"
    { (yyval.node) = ast_desig_range_new((yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 3281 "parser.c"
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


#line 966 "c.y"


void yyerror(const char* s)
{
  fprintf(stderr, "parse error at line %d near '%s': %s\n", yylineno, yytext ? yytext : "", s);
}

