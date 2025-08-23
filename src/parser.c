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
#define YYLAST   1039

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  78
/* YYNRULES -- Number of rules.  */
#define YYNRULES  264
/* YYNRULES -- Number of states.  */
#define YYNSTATES  524

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
     316,   318,   320,   322,   324,   326,   328,   330,   332,   335,
     339,   344,   350,   356,   361,   366,   369,   372,   373,   375,
     377,   380,   384,   386,   390,   392,   395,   399,   405,   410,
     413,   414,   416,   418,   422,   424,   428,   431,   432,   434,
     436,   439,   442,   446,   448,   452,   457,   462,   467,   468,
     470,   472,   476,   477,   479,   481,   485,   489,   494,   498,
     502,   504,   506,   508,   510,   512,   516,   517,   519,   521,
     524,   529,   535,   543,   550,   558,   565,   574,   582,   590,
     597,   599,   605,   606,   610,   613,   615,   619,   626,   631,
     633,   636,   642,   650,   656,   662,   670,   680,   684,   687,
     690,   694,   695,   697,   699,   703,   704,   706,   708,   712,
     716,   720,   724,   728,   732,   736,   740,   744,   748,   752,
     754,   760,   762,   766,   768,   772,   774,   778,   780,   784,
     786,   790,   792,   796,   800,   802,   806,   810,   814,   818,
     820,   824,   828,   830,   834,   838,   840,   844,   848,   852,
     854,   857,   860,   863,   866,   869,   872,   875,   880,   887,
     888,   891,   894,   897,   899,   904,   909,   913,   917,   920,
     923,   924,   926,   928,   932,   934,   936,   938,   940,   942,
     946,   948,   952,   953,   955,   957,   959,   963,   967,   971,
     973,   976,   979,   983,   989
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      89,     0,    -1,    -1,    89,    92,    -1,    -1,    91,    -1,
      73,    -1,    91,    73,    -1,   154,   104,   132,    84,   132,
     131,    85,    -1,   104,   132,    84,   132,   131,    85,    -1,
     154,   104,   132,    63,   159,    85,    -1,   104,   132,    63,
     159,    85,    -1,    -1,   154,   104,    90,     3,    78,    94,
      79,   127,    -1,   104,    90,     3,    78,    94,    79,   127,
      -1,   154,   104,    90,     3,    78,    94,    79,    85,    -1,
     104,    90,     3,    78,    94,    79,    85,    -1,    93,     3,
      78,    94,    79,   127,    -1,    93,     3,    78,    94,    79,
      85,    -1,    21,   154,   104,    90,     3,    85,    -1,    21,
     104,    90,     3,    85,    -1,    21,   154,   104,    90,     3,
     105,    85,    -1,    21,   104,    90,     3,   105,    85,    -1,
     154,   104,    90,     3,    63,   141,    85,    -1,   104,    90,
       3,    63,   141,    85,    -1,    21,   154,   104,    90,    78,
      73,     3,    79,    78,   122,    79,    85,    -1,    21,   104,
      90,    78,    73,     3,    79,    78,   122,    79,    85,    -1,
      21,   154,   104,    90,    78,    73,     3,   105,    79,    78,
     122,    79,    85,    -1,    21,   104,    90,    78,    73,     3,
     105,    79,    78,   122,    79,    85,    -1,   154,   104,    90,
       3,    85,    -1,   104,    90,     3,    85,    -1,   154,   104,
      90,     3,    63,   159,    85,    -1,   104,    90,     3,    63,
     159,    85,    -1,   154,   104,    90,     3,   105,    63,   159,
      85,    -1,   104,    90,     3,   105,    63,   159,    85,    -1,
     125,    -1,   106,    85,    -1,   112,    85,    -1,   104,    90,
      -1,    38,    93,    -1,    39,    93,    -1,    34,    93,    -1,
      35,    93,    -1,    36,    93,    -1,    37,    93,    -1,    -1,
      95,    -1,    96,    -1,    96,    84,    41,    -1,    97,    -1,
      96,    84,    97,    -1,   154,   104,   132,    -1,   154,   104,
      -1,    99,    -1,    98,    99,    -1,   100,    -1,   104,    -1,
     101,    -1,   102,    -1,    38,    -1,    39,    -1,    34,    -1,
      35,    -1,    36,    -1,    37,    -1,     9,    -1,    10,    -1,
      11,    -1,    12,    -1,    13,    -1,    14,    -1,    15,    -1,
      16,    -1,    17,    -1,   106,    -1,   112,    -1,     4,    -1,
     103,    -1,   104,   103,    -1,    80,     6,    81,    -1,   105,
      80,     6,    81,    -1,    18,     3,    86,   107,    87,    -1,
      19,     3,    86,   107,    87,    -1,    18,    86,   107,    87,
      -1,    19,    86,   107,    87,    -1,    18,     3,    -1,    19,
       3,    -1,    -1,   108,    -1,   109,    -1,   108,   109,    -1,
      98,   110,    85,    -1,   111,    -1,   110,    84,   111,    -1,
     116,    -1,    65,   165,    -1,   116,    65,   165,    -1,    20,
       3,    86,   113,    87,    -1,    20,    86,   113,    87,    -1,
      20,     3,    -1,    -1,   114,    -1,   115,    -1,   114,    84,
     115,    -1,     3,    -1,     3,    63,   165,    -1,   117,   119,
      -1,    -1,   118,    -1,    73,    -1,    73,   101,    -1,    73,
     118,    -1,    73,   101,   118,    -1,     3,    -1,    78,   116,
      79,    -1,   119,    80,   140,    81,    -1,   119,    78,    94,
      79,    -1,   119,    78,   120,    79,    -1,    -1,   121,    -1,
       3,    -1,   121,    84,     3,    -1,    -1,   123,    -1,   124,
      -1,   123,    84,   124,    -1,   154,   104,    90,    -1,   154,
     104,    90,     3,    -1,    98,   116,   127,    -1,   104,   116,
     127,    -1,   127,    -1,   134,    -1,   135,    -1,   136,    -1,
     137,    -1,    86,   128,    87,    -1,    -1,   129,    -1,   130,
      -1,   129,   130,    -1,   104,    90,     3,    85,    -1,   154,
     104,    90,     3,    85,    -1,   154,   104,    90,     3,    63,
     141,    85,    -1,   104,    90,     3,    63,   141,    85,    -1,
     154,   104,    90,     3,    63,   159,    85,    -1,   104,    90,
       3,    63,   159,    85,    -1,   154,   104,    90,     3,   105,
      63,   159,    85,    -1,   104,    90,     3,   105,    63,   159,
      85,    -1,   154,   104,   132,    84,   132,   131,    85,    -1,
     154,   104,   132,    63,   159,    85,    -1,   126,    -1,    21,
     104,    90,     3,    85,    -1,    -1,   131,    84,   132,    -1,
      90,   133,    -1,     3,    -1,    78,   132,    79,    -1,    78,
     132,    79,    78,   122,    79,    -1,   133,    80,   140,    81,
      -1,    85,    -1,   139,    85,    -1,    23,    78,   139,    79,
     126,    -1,    23,    78,   139,    79,   126,    24,   126,    -1,
      28,    78,   139,    79,   126,    -1,    25,    78,   139,    79,
     126,    -1,    27,   126,    25,    78,   139,    79,    85,    -1,
      26,    78,   138,    85,   138,    85,   138,    79,   126,    -1,
      22,   138,    85,    -1,    31,    85,    -1,    32,    85,    -1,
      33,     3,    85,    -1,    -1,   139,    -1,   141,    -1,   139,
      84,   141,    -1,    -1,   141,    -1,   142,    -1,   153,    63,
     141,    -1,   153,    53,   141,    -1,   153,    54,   141,    -1,
     153,    55,   141,    -1,   153,    56,   141,    -1,   153,    57,
     141,    -1,   153,    58,   141,    -1,   153,    59,   141,    -1,
     153,    60,   141,    -1,   153,    61,   141,    -1,   153,    62,
     141,    -1,   143,    -1,   143,    64,   139,    65,   142,    -1,
     144,    -1,   143,    52,   144,    -1,   145,    -1,   144,    51,
     145,    -1,   146,    -1,   145,    66,   146,    -1,   147,    -1,
     146,    67,   147,    -1,   148,    -1,   147,    68,   148,    -1,
     149,    -1,   148,    49,   149,    -1,   148,    50,   149,    -1,
     150,    -1,   149,    69,   150,    -1,   149,    70,   150,    -1,
     149,    47,   150,    -1,   149,    48,   150,    -1,   151,    -1,
     150,    45,   151,    -1,   150,    46,   151,    -1,   152,    -1,
     151,    71,   152,    -1,   151,    72,   152,    -1,   153,    -1,
     152,    73,   153,    -1,   152,    74,   153,    -1,   152,    75,
     153,    -1,   155,    -1,    43,   153,    -1,    44,   153,    -1,
      71,   153,    -1,    72,   153,    -1,    76,   153,    -1,    77,
     153,    -1,    40,   153,    -1,    40,    78,   104,    79,    -1,
      78,   154,   104,    90,    79,   153,    -1,    -1,   154,    34,
      -1,   154,    35,    -1,   154,    36,    -1,   158,    -1,   155,
      78,   156,    79,    -1,   155,    80,   139,    81,    -1,   155,
      82,     3,    -1,   155,    42,     3,    -1,   155,    43,    -1,
     155,    44,    -1,    -1,   157,    -1,   141,    -1,   157,    84,
     141,    -1,     3,    -1,     6,    -1,     7,    -1,     8,    -1,
       5,    -1,    78,   139,    79,    -1,   141,    -1,    86,   160,
      87,    -1,    -1,   161,    -1,   159,    -1,   162,    -1,   161,
      84,   159,    -1,   161,    84,   162,    -1,   163,    63,   159,
      -1,   164,    -1,   163,   164,    -1,    82,     3,    -1,    80,
     165,    81,    -1,    80,   165,    41,   165,    81,    -1,   142,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   216,   216,   218,   224,   225,   229,   230,   240,   249,
     257,   266,   274,   275,   294,   311,   330,   347,   358,   369,
     381,   391,   404,   415,   425,   434,   446,   456,   469,   481,
     491,   500,   510,   519,   529,   538,   539,   540,   546,   547,
     548,   549,   550,   551,   552,   557,   558,   562,   563,   567,
     568,   572,   585,   620,   621,   625,   626,   627,   628,   632,
     633,   637,   638,   639,   643,   649,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   666,   667,   678,
     685,   696,   697,   698,   699,   700,   701,   704,   706,   710,
     711,   715,   719,   720,   724,   725,   726,   730,   731,   732,
     735,   737,   741,   742,   746,   747,   752,   755,   757,   761,
     762,   763,   764,   768,   769,   770,   771,   772,   775,   777,
     781,   782,   787,   788,   798,   799,   809,   817,   831,   832,
     837,   838,   839,   840,   841,   845,   849,   850,   854,   855,
     859,   867,   876,   885,   893,   902,   910,   919,   927,   937,
     946,   948,   961,   962,   967,   971,   972,   973,   974,   980,
     981,   985,   986,   987,   991,   992,   993,   997,   998,   999,
    1000,  1005,  1006,  1010,  1011,  1015,  1016,  1020,  1021,  1022,
    1023,  1024,  1025,  1026,  1027,  1028,  1029,  1030,  1031,  1035,
    1036,  1040,  1041,  1045,  1046,  1050,  1051,  1055,  1056,  1060,
    1061,  1065,  1066,  1067,  1071,  1072,  1073,  1074,  1075,  1079,
    1080,  1081,  1085,  1086,  1087,  1091,  1092,  1093,  1094,  1098,
    1099,  1100,  1101,  1102,  1103,  1104,  1105,  1106,  1107,  1124,
    1125,  1126,  1127,  1131,  1132,  1136,  1137,  1138,  1139,  1140,
    1144,  1145,  1149,  1150,  1154,  1155,  1156,  1157,  1158,  1159,
    1164,  1165,  1169,  1170,  1174,  1175,  1176,  1177,  1181,  1186,
    1187,  1191,  1192,  1193,  1197
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
  "function_specifier", "type_unit", "type_specifier", "array_dims",
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
  "multiplicative_expression", "unary_expression",
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
     103,   103,   103,   103,   103,   103,   103,   104,   104,   105,
     105,   106,   106,   106,   106,   106,   106,   107,   107,   108,
     108,   109,   110,   110,   111,   111,   111,   112,   112,   112,
     113,   113,   114,   114,   115,   115,   116,   117,   117,   118,
     118,   118,   118,   119,   119,   119,   119,   119,   120,   120,
     121,   121,   122,   122,   123,   123,   124,   124,   125,   125,
     126,   126,   126,   126,   126,   127,   128,   128,   129,   129,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   131,   131,   132,   133,   133,   133,   133,   134,
     134,   135,   135,   135,   136,   136,   136,   137,   137,   137,
     137,   138,   138,   139,   139,   140,   140,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   142,
     142,   143,   143,   144,   144,   145,   145,   146,   146,   147,
     147,   148,   148,   148,   149,   149,   149,   149,   149,   150,
     150,   150,   151,   151,   151,   152,   152,   152,   152,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   154,
     154,   154,   154,   155,   155,   155,   155,   155,   155,   155,
     156,   156,   157,   157,   158,   158,   158,   158,   158,   158,
     159,   159,   160,   160,   161,   161,   161,   161,   162,   163,
     163,   164,   164,   164,   165
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
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       4,     5,     5,     4,     4,     2,     2,     0,     1,     1,
       2,     3,     1,     3,     1,     2,     3,     5,     4,     2,
       0,     1,     1,     3,     1,     3,     2,     0,     1,     1,
       2,     2,     3,     1,     3,     4,     4,     4,     0,     1,
       1,     3,     0,     1,     1,     3,     3,     4,     3,     3,
       1,     1,     1,     1,     1,     3,     0,     1,     1,     2,
       4,     5,     7,     6,     7,     6,     8,     7,     7,     6,
       1,     5,     0,     3,     2,     1,     3,     6,     4,     1,
       2,     5,     7,     5,     5,     7,     9,     3,     2,     2,
       3,     0,     1,     1,     3,     0,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       5,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       2,     2,     2,     2,     2,     2,     2,     4,     6,     0,
       2,     2,     2,     1,     4,     4,     3,     3,     2,     2,
       0,     1,     1,     3,     1,     1,     1,     1,     1,     3,
       1,     3,     0,     1,     1,     1,     3,     3,     3,     1,
       2,     2,     3,     5,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,    76,    65,    66,    67,    68,    69,    70,
      71,    72,    73,     0,     0,     0,   229,    61,    62,    63,
      64,    59,    60,     3,     0,   107,    53,    55,    57,    58,
      77,    56,    74,    75,    35,     0,    85,    87,    86,    87,
      99,   100,     4,    74,    75,     0,     0,     0,     0,     0,
       0,     0,    41,     4,    42,    43,    44,    39,    40,     0,
      61,    62,    63,    64,    59,    60,   109,    54,    56,     0,
       0,   108,     6,     0,     5,    78,     0,     0,    36,    37,
     230,   231,   232,     4,    87,   107,     0,    88,    89,    87,
       0,   100,   104,     0,   101,   102,     6,     0,     4,    38,
     229,   110,   111,   229,   128,   113,   107,   106,   155,     4,
     154,     7,   129,     0,     4,     0,     0,     0,     0,     0,
      92,    94,    83,    90,     0,    84,     0,     0,    98,     0,
       0,     0,     0,     0,    46,    47,    49,     0,   112,   244,
     248,   245,   246,   247,     0,   171,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   229,   159,     4,   150,   130,     0,   229,   138,   131,
     132,   133,   134,     0,   173,   177,   189,   191,   193,   195,
     197,   199,   201,   204,   209,   212,   215,     0,   219,   233,
       0,   229,   175,     0,   229,     0,    30,     0,     0,     0,
     175,   252,   250,     0,   152,   155,     0,     4,    81,   264,
     215,    95,   107,    91,     0,    82,    97,   105,   103,    20,
       0,     0,     0,     0,     0,   229,     4,     4,     0,   172,
       0,     0,   171,     0,     0,   168,   169,     0,   229,   226,
     220,   221,   222,   223,   224,   225,     0,     0,     0,   135,
     139,     0,   160,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,     0,   238,   239,   240,     0,     0,
     114,   120,     0,     0,   119,     0,   176,     0,     0,     0,
       0,     0,     0,   155,   156,     0,     0,     0,   254,     0,
     253,   255,     0,   259,    11,     0,     0,   229,    29,     0,
       0,   152,    93,    96,    22,     0,    19,     0,     0,    18,
      17,    48,    50,    51,     0,   167,     0,     0,     0,     0,
       0,   170,     0,   249,     4,     0,   174,   192,     0,   194,
     196,   198,   200,   202,   203,   207,   208,   205,   206,   210,
     211,   213,   214,   216,   217,   218,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   178,     0,     0,   237,
     242,     0,   241,     0,   236,   116,   117,     0,   115,    24,
      32,     0,    79,     0,     0,   229,   158,     0,   261,   251,
       0,     0,   260,     4,     9,     0,     0,     0,     0,    10,
       0,     0,     0,    21,     0,     0,     0,     0,   171,     0,
       0,   227,     0,     0,   140,     0,     0,   155,     0,     4,
     234,     0,   235,   121,    16,    14,    34,    80,     0,   123,
     124,     0,     0,   262,   256,   257,   258,   153,    23,    31,
       0,     0,     8,   229,     0,     0,     0,   151,   161,   164,
       0,     0,   163,     0,     0,     0,     0,   190,     0,   141,
       0,     0,   152,   243,   157,   229,     4,     0,    15,    13,
      33,     0,   229,   229,     0,     0,   171,     0,   228,   143,
     145,     0,     0,     0,     0,   149,     0,   125,   126,   263,
       0,     0,     0,   229,   162,     0,   165,   147,   142,   144,
       0,   148,   127,    26,     0,     0,     0,     0,   146,    28,
      25,     0,   166,    27
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   198,    74,    23,    52,   133,   134,   135,   136,
      85,    26,    27,    28,    29,    30,    53,   197,    43,    86,
      87,    88,   119,   120,    44,    93,    94,    95,   121,    70,
      71,   107,   293,   294,   438,   439,   440,    34,   164,   165,
     166,   167,   168,   315,    77,   110,   169,   170,   171,   172,
     228,   173,   295,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   441,   188,   381,   382,
     189,   203,   309,   310,   311,   312,   313,   211
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -318
static const yytype_int16 yypact[] =
{
    -318,   919,  -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,
    -318,  -318,  -318,     5,    13,    24,  1019,   343,   343,   343,
     343,   343,   343,  -318,    40,   854,  -318,  -318,  -318,  -318,
    -318,   386,    -2,     2,  -318,   991,   -12,   955,    23,   955,
      85,   160,   890,  -318,  -318,   991,   343,   343,   343,   343,
     343,   343,  -318,   890,  -318,  -318,  -318,  -318,  -318,   112,
    -318,  -318,  -318,  -318,  -318,  -318,    77,  -318,  1019,   108,
      11,  -318,   208,    38,   140,  -318,   108,    19,  -318,  -318,
    -318,  -318,  -318,   890,   955,   814,   136,   955,  -318,   955,
     143,   160,   152,   150,   162,  -318,  -318,    39,   890,  -318,
     172,   187,  -318,   465,  -318,  -318,   187,   190,    -7,   234,
     212,  -318,  -318,   683,   234,    42,    64,   225,   713,   -50,
    -318,   257,  -318,  -318,   237,  -318,   239,   713,  -318,   160,
      75,   261,    45,   220,  -318,   253,  -318,   991,  -318,  -318,
    -318,  -318,  -318,  -318,  1019,   713,   266,   271,   287,   626,
     289,   254,   286,   370,   769,   713,   713,   713,   713,   713,
     713,   713,  -318,   890,  -318,  -318,   296,   550,  -318,  -318,
    -318,  -318,  -318,   142,  -318,  -318,    20,   323,   310,   318,
     319,   224,    74,   235,   213,   203,   394,   991,   167,  -318,
     307,    26,   713,   683,   172,   382,  -318,    76,    48,   312,
     713,   601,  -318,   308,  -318,    84,   683,   234,  -318,  -318,
    -318,  -318,     4,  -318,   713,  -318,  -318,  -318,  -318,  -318,
      79,   389,   132,   334,   201,   367,    46,   890,   324,   326,
     713,   713,   713,   387,   713,  -318,  -318,   328,   727,  -318,
    -318,  -318,  -318,  -318,  -318,  -318,   135,   991,   408,  -318,
    -318,   713,  -318,   713,   713,   713,   713,   713,   713,   713,
     713,   713,   713,   713,   713,   713,   713,   713,   713,   713,
     713,   713,   713,   713,   713,   713,   713,   713,   713,   713,
     713,   713,   713,   890,   412,  -318,  -318,   713,   713,   430,
    -318,  -318,   355,   358,   354,   359,  -318,   356,   375,   360,
     363,   683,   455,  -318,   384,   385,   713,   462,  -318,   402,
     410,  -318,   158,  -318,  -318,   206,   683,   172,  -318,    90,
     414,  -318,  -318,  -318,  -318,   214,  -318,   144,   492,  -318,
    -318,  -318,  -318,  -318,   497,  -318,   171,   175,   417,   426,
     178,  -318,   506,  -318,   890,    61,  -318,   323,    70,   310,
     318,   319,   224,    74,    74,   235,   235,   235,   235,   213,
     213,   203,   203,  -318,  -318,  -318,  -318,  -318,  -318,  -318,
    -318,  -318,  -318,  -318,  -318,  -318,  -318,    51,    65,  -318,
    -318,   427,   423,    56,  -318,  -318,  -318,   508,  -318,  -318,
    -318,   210,  -318,   428,   431,   435,  -318,   -11,  -318,  -318,
     601,   683,  -318,   234,  -318,   442,   443,   451,   683,  -318,
     219,   453,   218,  -318,   226,   447,   626,   626,   713,   713,
     626,  -318,   454,   683,  -318,   104,   713,   449,   683,   234,
    -318,   713,  -318,  -318,  -318,  -318,  -318,  -318,   456,   460,
    -318,   991,   713,  -318,  -318,  -318,  -318,  -318,  -318,  -318,
     244,   461,  -318,   435,   467,   469,   230,  -318,   514,  -318,
     463,   179,  -318,   713,   464,   489,   683,  -318,   683,  -318,
     128,   494,  -318,  -318,  -318,  -318,   890,   458,  -318,  -318,
    -318,   501,   435,   435,   510,   626,   713,   499,  -318,  -318,
    -318,   504,   507,   511,   683,  -318,   248,  -318,   537,  -318,
     512,   516,   519,   435,  -318,   520,  -318,  -318,  -318,  -318,
     515,  -318,  -318,  -318,   517,   525,   522,   626,  -318,  -318,
    -318,   526,  -318,  -318
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -318,  -318,   -30,  -318,  -318,   184,  -170,  -318,  -318,   361,
     590,   -10,  -318,   117,  -318,   -31,     1,  -125,   604,    -8,
    -318,   527,  -318,   400,   612,   524,  -318,   487,     8,  -318,
       7,  -318,  -318,  -318,  -317,  -318,   145,  -318,  -145,   -66,
    -318,  -318,   450,  -315,   -65,  -318,  -318,  -318,  -318,  -318,
    -225,  -136,   418,  -100,   -99,  -318,   366,   368,   369,   373,
     380,    82,     3,    80,   102,   161,    31,  -318,  -318,  -318,
    -318,    35,  -318,  -318,   240,  -318,   327,  -107
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -138
static const yytype_int16 yytable[] =
{
      75,    73,    31,   104,   233,   220,   410,   338,    36,   229,
     112,    75,    97,   202,   105,    67,    38,    42,   116,   209,
     217,   292,    75,    99,   299,   246,    68,    40,   209,   291,
     442,    90,    35,    69,   212,   213,    83,    75,    68,    76,
      68,   108,   130,    59,   199,   205,    98,    45,   222,   204,
       3,   303,    75,   115,   427,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    75,   132,   118,
     443,   194,   253,   102,    84,    67,   117,    66,   196,   102,
     319,   124,   113,    78,   254,    68,    68,    79,    68,   106,
      68,    37,   296,   297,   336,   337,   229,   327,   340,    39,
     296,   202,   246,   114,   163,   -45,   202,   323,   138,    89,
      41,    60,    61,    62,   190,   209,   109,   131,   348,    96,
     109,   261,   262,   223,   423,   -52,   109,   206,   428,   109,
     -52,   137,    75,   248,   187,   426,   481,   432,   226,   301,
     251,   195,   321,   263,   264,   227,   424,   407,   207,   429,
      66,   346,   383,   408,   251,   195,   302,   496,   330,   302,
     219,   333,   317,    92,   324,   501,   502,   466,   163,   318,
     302,    91,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   101,   302,    24,   516,   380,   283,   101,
     100,   494,   247,   460,   103,    75,    75,   334,   187,   397,
     412,   202,    54,    55,    56,    57,    58,   209,   302,   284,
     285,   286,   195,   111,   343,   127,   405,   326,   378,   251,
     425,   401,   137,   122,   302,   137,   251,   252,   298,   413,
     125,    54,    55,    56,    57,    58,   308,   128,   306,   342,
     307,   320,    60,    61,    62,   287,   129,   288,   344,   289,
     416,   -45,    75,   377,   417,   251,   137,   420,   487,   251,
      66,   505,   251,   251,   355,   356,   357,   358,   191,   247,
     192,   458,   459,   259,   260,   462,   269,   270,   271,   210,
     265,   266,   229,   461,   267,   268,   329,   103,   210,   456,
     403,   404,   200,   411,   195,   434,   103,   454,   302,   224,
     202,   202,   470,   403,   452,   455,   195,    96,   202,   484,
     302,    75,   208,    75,   422,   239,   240,   241,   242,   243,
     244,   245,   214,   464,   215,   435,   216,   467,   202,   478,
     103,   473,   403,   511,   221,   477,   393,   225,   447,   235,
     504,   353,   354,   209,   230,   359,   360,     3,   137,   231,
     229,   406,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,   472,   232,   202,   234,   492,   361,
     362,   236,   522,   237,   255,   210,   256,    46,    47,    48,
      49,    50,    51,   249,   479,   257,   290,   258,   300,    -4,
       3,   304,   325,   314,   202,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,   328,   331,   335,
     251,   345,   339,   341,   210,   379,   210,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   210,   210,   210,
     363,   364,   365,   384,   385,   444,   446,   386,   387,   391,
     388,   389,   476,   451,   392,    75,   498,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   465,    72,
     390,   394,   395,   471,    -4,   398,   396,   210,   139,     3,
     140,   141,   142,   143,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,   144,   145,   146,   399,
     147,   148,   149,   150,   400,   414,   151,   152,   153,   409,
     415,   491,   418,   493,   419,   154,   430,   431,   155,   156,
       3,   433,   437,   436,  -122,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,   448,   449,   510,
     450,   453,   457,   463,   469,   474,   157,   158,   485,   499,
     512,   159,   160,   161,   475,   482,   480,   483,   486,   489,
     162,   103,  -136,   139,     3,   140,   141,   142,   143,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,   144,   145,   146,   490,   147,   148,   149,   150,   495,
     500,   151,   152,   153,   506,   421,   332,   210,   503,   507,
     154,    25,   508,   155,   156,   514,   509,   513,   515,   517,
     518,   521,   519,   210,   139,    32,   140,   141,   142,   143,
     520,   523,   322,    33,   123,   126,   218,   250,   305,   347,
     497,   157,   158,   349,   488,   350,   159,   160,   161,   139,
     351,   140,   141,   142,   143,   162,   103,  -137,   352,   402,
     445,   154,     0,     0,   155,   156,     0,     0,   145,   146,
       0,   147,   148,   149,   150,     0,     0,   151,   152,   153,
       0,     0,     0,     0,     0,     0,   154,     0,     0,   155,
     156,     0,   157,   158,     0,     0,     0,   159,   160,   161,
       0,   306,     0,   307,     0,     0,   139,   201,   140,   141,
     142,   143,     0,     0,     0,     0,     0,   157,   158,     0,
       0,     0,   159,   160,   161,     0,     0,     0,     0,     0,
       0,   162,   103,     0,     0,     0,   139,     0,   140,   141,
     142,   143,     0,   154,     0,     0,   155,   156,     0,     0,
     139,     3,   140,   141,   142,   143,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,     0,     0,
       0,     0,     0,   154,   157,   158,   155,   156,     0,   159,
     160,   161,     0,     0,     0,     0,     0,   154,     0,   201,
     155,   156,   139,     0,   140,   141,   142,   143,     0,     0,
       0,     0,     0,     0,   157,   158,     0,     0,     0,   159,
     160,   161,     0,     0,     0,     0,     0,     0,   157,   158,
       0,     0,     0,   159,   160,   161,     0,     0,     0,   154,
       0,     0,   155,   156,     0,     0,     0,     0,     3,     0,
       0,     0,     0,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,     0,     0,
     157,   158,     0,     0,     0,   159,   160,   238,    60,    61,
      62,    63,    64,    65,     0,     0,     0,     0,     3,     0,
       0,     0,     0,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,     0,   118,
       0,     0,     0,     0,     0,     0,     0,    66,    60,    61,
      62,    63,    64,    65,     3,     0,     0,     0,     0,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       0,     0,     0,     3,     0,     0,     0,    66,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    17,    18,    19,    20,    21,    22,     3,
       0,     0,     0,    96,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    60,
      61,    62,    63,    64,    65,     3,     0,     0,     0,     0,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,     0,    80,    81,    82,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15
};

static const yytype_int16 yycheck[] =
{
      31,    31,     1,    69,   149,   130,   321,   232,     3,   145,
      76,    42,    42,   113,     3,    25,     3,    16,    83,   118,
     127,   191,    53,    53,   194,   161,    25,     3,   127,     3,
      41,    39,     1,    25,    84,    85,    35,    68,    37,    31,
      39,     3,     3,     3,   109,     3,    45,    16,     3,   114,
       4,     3,    83,    83,     3,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    98,    98,    65,
      81,    78,    52,    66,    86,    85,    84,    73,    85,    72,
     205,    89,    63,    85,    64,    84,    85,    85,    87,    78,
      89,    86,   192,   193,   230,   231,   232,   222,   234,    86,
     200,   201,   238,    84,   103,    79,   206,   214,   101,    86,
      86,    34,    35,    36,   106,   214,    78,    78,   254,    73,
      78,    47,    48,    78,    63,    79,    78,    63,    63,    78,
      84,   100,   163,   163,   103,    65,   453,    81,   137,    63,
      84,    80,   207,    69,    70,   144,    85,   317,    84,    84,
      73,   251,   288,    63,    84,    80,    80,   472,   224,    80,
      85,   226,    78,     3,    85,   482,   483,    63,   167,    85,
      80,    86,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,    66,    80,     1,   503,   287,   187,    72,
      78,    63,   161,   418,    86,   226,   227,   227,   167,   306,
     325,   301,    18,    19,    20,    21,    22,   306,    80,    42,
      43,    44,    80,    73,    79,    63,   316,    85,   283,    84,
     345,    63,   191,    87,    80,   194,    84,    85,   193,    85,
      87,    47,    48,    49,    50,    51,   201,    87,    80,   238,
      82,   206,    34,    35,    36,    78,    84,    80,   247,    82,
      79,    79,   283,   283,    79,    84,   225,    79,    79,    84,
      73,   486,    84,    84,   261,   262,   263,   264,    78,   238,
      80,   416,   417,    49,    50,   420,    73,    74,    75,   118,
      45,    46,   418,   419,    71,    72,    85,    86,   127,   414,
      84,    85,    80,    79,    80,    85,    86,    79,    80,    79,
     400,   401,   427,    84,    85,    79,    80,    73,   408,    79,
      80,   342,    87,   344,   344,   154,   155,   156,   157,   158,
     159,   160,    65,   423,    87,   391,    87,   426,   428,    85,
      86,   431,    84,    85,    73,   442,   301,    84,   403,    85,
     485,   259,   260,   442,    78,   265,   266,     4,   317,    78,
     486,   316,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,   429,    78,   466,    78,   468,   267,
     268,    85,   517,     3,    51,   214,    66,    34,    35,    36,
      37,    38,    39,    87,   450,    67,    79,    68,     6,     3,
       4,    79,     3,    85,   494,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    73,    41,    85,
      84,     3,    25,    85,   253,     3,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,     3,    79,   400,   401,    79,    84,    79,
      81,    85,   441,   408,    81,   476,   476,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,   423,    73,
      85,     6,    78,   428,    78,     3,    81,   306,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    87,
      25,    26,    27,    28,    84,     3,    31,    32,    33,    85,
       3,   466,    85,   468,    78,    40,    79,    84,    43,    44,
       4,     3,    81,    85,    79,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    85,    85,   494,
      79,    78,    85,    79,    85,    79,    71,    72,    24,    81,
       3,    76,    77,    78,    84,    78,    85,    78,    85,    85,
      85,    86,    87,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    85,    25,    26,    27,    28,    85,
      79,    31,    32,    33,    85,    79,   225,   426,    78,    85,
      40,     1,    85,    43,    44,    79,    85,    85,    79,    79,
      85,    79,    85,   442,     3,     1,     5,     6,     7,     8,
      85,    85,   212,     1,    87,    91,   129,   167,   200,   253,
     475,    71,    72,   255,   463,   256,    76,    77,    78,     3,
     257,     5,     6,     7,     8,    85,    86,    87,   258,   312,
     400,    40,    -1,    -1,    43,    44,    -1,    -1,    22,    23,
      -1,    25,    26,    27,    28,    -1,    -1,    31,    32,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    43,
      44,    -1,    71,    72,    -1,    -1,    -1,    76,    77,    78,
      -1,    80,    -1,    82,    -1,    -1,     3,    86,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    71,    72,    -1,
      -1,    -1,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    -1,    -1,    -1,     3,    -1,     5,     6,
       7,     8,    -1,    40,    -1,    -1,    43,    44,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    40,    71,    72,    43,    44,    -1,    76,
      77,    78,    -1,    -1,    -1,    -1,    -1,    40,    -1,    86,
      43,    44,     3,    -1,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    76,
      77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,
      -1,    -1,    -1,    76,    77,    78,    -1,    -1,    -1,    40,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,     4,    -1,
      -1,    -1,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,
      71,    72,    -1,    -1,    -1,    76,    77,    78,    34,    35,
      36,    37,    38,    39,    -1,    -1,    -1,    -1,     4,    -1,
      -1,    -1,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    34,    35,
      36,    37,    38,    39,     4,    -1,    -1,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     0,
      -1,    -1,    -1,     4,    -1,    -1,    -1,    73,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,     4,
      -1,    -1,    -1,    73,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,     4,    -1,    -1,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     4,    -1,    34,    35,    36,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    89,     0,     4,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    34,    35,    36,
      37,    38,    39,    92,    93,    98,    99,   100,   101,   102,
     103,   104,   106,   112,   125,   154,     3,    86,     3,    86,
       3,    86,   104,   106,   112,   154,    34,    35,    36,    37,
      38,    39,    93,   104,    93,    93,    93,    93,    93,     3,
      34,    35,    36,    37,    38,    39,    73,    99,   104,   116,
     117,   118,    73,    90,    91,   103,   116,   132,    85,    85,
      34,    35,    36,   104,    86,    98,   107,   108,   109,    86,
     107,    86,     3,   113,   114,   115,    73,    90,   104,    90,
      78,   101,   118,    86,   127,     3,    78,   119,     3,    78,
     133,    73,   127,    63,    84,    90,   132,   107,    65,   110,
     111,   116,    87,   109,   107,    87,   113,    63,    87,    84,
       3,    78,    90,    94,    95,    96,    97,   154,   118,     3,
       5,     6,     7,     8,    21,    22,    23,    25,    26,    27,
      28,    31,    32,    33,    40,    43,    44,    71,    72,    76,
      77,    78,    85,   104,   126,   127,   128,   129,   130,   134,
     135,   136,   137,   139,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   158,
     116,    78,    80,    63,    78,    80,    85,   105,    90,   132,
      80,    86,   141,   159,   132,     3,    63,    84,    87,   142,
     153,   165,    84,    85,    65,    87,    87,   165,   115,    85,
     105,    73,     3,    78,    79,    84,   104,   104,   138,   139,
      78,    78,    78,   126,    78,    85,    85,     3,    78,   153,
     153,   153,   153,   153,   153,   153,   139,   154,    90,    87,
     130,    84,    85,    52,    64,    51,    66,    67,    68,    49,
      50,    47,    48,    69,    70,    45,    46,    71,    72,    73,
      74,    75,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,   104,    42,    43,    44,    78,    80,    82,
      79,     3,    94,   120,   121,   140,   141,   141,   159,    94,
       6,    63,    80,     3,    79,   140,    80,    82,   159,   160,
     161,   162,   163,   164,    85,   131,    63,    78,    85,   105,
     159,   132,   111,   165,    85,     3,    85,   105,    73,    85,
     127,    41,    97,   132,    90,    85,   139,   139,   138,    25,
     139,    85,   104,    79,   104,     3,   141,   144,   139,   145,
     146,   147,   148,   149,   149,   150,   150,   150,   150,   151,
     151,   152,   152,   153,   153,   153,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,    90,   132,     3,
     141,   156,   157,   139,     3,    79,    79,    84,    81,    85,
      85,    79,    81,   159,     6,    78,    81,   165,     3,    87,
      84,    63,   164,    84,    85,   141,   159,    94,    63,    85,
     131,    79,   105,    85,     3,     3,    79,    79,    85,    78,
      79,    79,    90,    63,    85,   105,    65,     3,    63,    84,
      79,    84,    81,     3,    85,   127,    85,    81,   122,   123,
     124,   154,    41,    81,   159,   162,   159,   132,    85,    85,
      79,   159,    85,    78,    79,    79,   105,    85,   126,   126,
     138,   139,   126,    79,   141,   159,    63,   142,    63,    85,
     105,   159,   132,   141,    79,    84,   104,   165,    85,   127,
      85,   122,    78,    78,    79,    24,    85,    79,   153,    85,
      85,   159,   141,   159,    63,    85,   131,   124,    90,    81,
      79,   122,   122,    78,   126,   138,    85,    85,    85,    85,
     159,    85,     3,    85,    79,    79,   122,    79,    85,    85,
      85,    79,   126,    85
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
#line 1885 "parser.c"
	break;
      case 5: /* "STRING_LITERAL" */
#line 144 "c.y"
	{ free((yyvaluep->sval)); };
#line 1890 "parser.c"
	break;
      case 6: /* "INTEGER_CONSTANT" */
#line 144 "c.y"
	{ free((yyvaluep->sval)); };
#line 1895 "parser.c"
	break;
      case 7: /* "FLOAT_CONSTANT" */
#line 144 "c.y"
	{ free((yyvaluep->sval)); };
#line 1900 "parser.c"
	break;
      case 8: /* "CHAR_CONSTANT" */
#line 144 "c.y"
	{ free((yyvaluep->sval)); };
#line 1905 "parser.c"
	break;
      case 90: /* "star_list_opt" */
#line 144 "c.y"
	{ free((yyvaluep->sval)); };
#line 1910 "parser.c"
	break;
      case 91: /* "star_list" */
#line 144 "c.y"
	{ free((yyvaluep->sval)); };
#line 1915 "parser.c"
	break;
      case 103: /* "type_unit" */
#line 144 "c.y"
	{ free((yyvaluep->sval)); };
#line 1920 "parser.c"
	break;
      case 104: /* "type_specifier" */
#line 144 "c.y"
	{ free((yyvaluep->sval)); };
#line 1925 "parser.c"
	break;
      case 105: /* "array_dims" */
#line 144 "c.y"
	{ free((yyvaluep->sval)); };
#line 1930 "parser.c"
	break;
      case 154: /* "type_qualifier_seq_opt" */
#line 144 "c.y"
	{ free((yyvaluep->sval)); };
#line 1935 "parser.c"
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
      const char* qs = ((yyvsp[(1) - (7)].sval) && (yyvsp[(1) - (7)].sval)[0]) ? (yyvsp[(1) - (7)].sval) : NULL;
      char* base = qs ? sjoin3((yyvsp[(1) - (7)].sval), " ", (yyvsp[(2) - (7)].sval)) : sdup0x((yyvsp[(2) - (7)].sval));
      char* t1=compose_type(base,(yyvsp[(3) - (7)].dstr)); AstNode* d1=ast_decl_new(t1,(yyvsp[(3) - (7)].dstr)->name,NULL); free(t1); dstr_free((yyvsp[(3) - (7)].dstr)); ast_add(d1);
      char* t2=compose_type(base,(yyvsp[(5) - (7)].dstr)); AstNode* d2=ast_decl_new(t2,(yyvsp[(5) - (7)].dstr)->name,NULL); free(t2); dstr_free((yyvsp[(5) - (7)].dstr)); ast_add(d2);
      if((yyvsp[(6) - (7)].nlist)){ for(long i=0;i<(yyvsp[(6) - (7)].nlist)->n;i++){ DStr* ds=(DStr*)(yyvsp[(6) - (7)].nlist)->a[i]; char* tx=compose_type(base,ds); AstNode* dn=ast_decl_new(tx, ds->name,NULL); free(tx); dstr_free(ds); ast_add(dn);} free((yyvsp[(6) - (7)].nlist)->a); free((yyvsp[(6) - (7)].nlist)); }
      free(base); free((yyvsp[(1) - (7)].sval)); free((yyvsp[(2) - (7)].sval));
    ;}
    break;

  case 9:
#line 250 "c.y"
    {
      char* base=(yyvsp[(1) - (6)].sval);
      char* t1=compose_type(base,(yyvsp[(2) - (6)].dstr)); AstNode* d1=ast_decl_new(t1,(yyvsp[(2) - (6)].dstr)->name,NULL); free(t1); dstr_free((yyvsp[(2) - (6)].dstr)); ast_add(d1);
      char* t2=compose_type(base,(yyvsp[(4) - (6)].dstr)); AstNode* d2=ast_decl_new(t2,(yyvsp[(4) - (6)].dstr)->name,NULL); free(t2); dstr_free((yyvsp[(4) - (6)].dstr)); ast_add(d2);
      if((yyvsp[(5) - (6)].nlist)){ for(long i=0;i<(yyvsp[(5) - (6)].nlist)->n;i++){ DStr* ds=(DStr*)(yyvsp[(5) - (6)].nlist)->a[i]; char* tx=compose_type(base,ds); AstNode* dn=ast_decl_new(tx, ds->name,NULL); free(tx); dstr_free(ds); ast_add(dn);} free((yyvsp[(5) - (6)].nlist)->a); free((yyvsp[(5) - (6)].nlist)); }
      free(base);
    ;}
    break;

  case 10:
#line 258 "c.y"
    {
      const char* qs = ((yyvsp[(1) - (6)].sval) && (yyvsp[(1) - (6)].sval)[0]) ? (yyvsp[(1) - (6)].sval) : NULL;
      char* base = qs ? sjoin3((yyvsp[(1) - (6)].sval), " ", (yyvsp[(2) - (6)].sval)) : sdup0x((yyvsp[(2) - (6)].sval));
      char* t=compose_type(base,(yyvsp[(3) - (6)].dstr));
      AstNode* d=ast_decl_new(t? t: base, (yyvsp[(3) - (6)].dstr)->name, (yyvsp[(5) - (6)].node));
      free(t); dstr_free((yyvsp[(3) - (6)].dstr)); free(base); free((yyvsp[(1) - (6)].sval)); free((yyvsp[(2) - (6)].sval));
      ast_add(d);
    ;}
    break;

  case 11:
#line 267 "c.y"
    {
      char* base=(yyvsp[(1) - (5)].sval);
      char* t=compose_type(base,(yyvsp[(2) - (5)].dstr));
      AstNode* d=ast_decl_new(t? t: base, (yyvsp[(2) - (5)].dstr)->name, (yyvsp[(4) - (5)].node));
      free(t); dstr_free((yyvsp[(2) - (5)].dstr)); free(base);
      ast_add(d);
    ;}
    break;

  case 13:
#line 276 "c.y"
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
#line 295 "c.y"
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
#line 312 "c.y"
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
#line 331 "c.y"
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
#line 348 "c.y"
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
#line 359 "c.y"
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
#line 370 "c.y"
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
#line 382 "c.y"
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
#line 392 "c.y"
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
#line 405 "c.y"
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
#line 416 "c.y"
    {
      const char* qs = ((yyvsp[(1) - (7)].sval) && (yyvsp[(1) - (7)].sval)[0]) ? (yyvsp[(1) - (7)].sval) : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen((yyvsp[(2) - (7)].sval)) + strlen((yyvsp[(3) - (7)].sval) ? (yyvsp[(3) - (7)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; if(qs){ strcat(t, (yyvsp[(1) - (7)].sval)); strcat(t, " "); } strcat(t, (yyvsp[(2) - (7)].sval)); if((yyvsp[(3) - (7)].sval)) strcat(t, (yyvsp[(3) - (7)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(2) - (7)].sval), (yyvsp[(4) - (7)].sval), (yyvsp[(6) - (7)].node));
      free(t); free((yyvsp[(1) - (7)].sval)); free((yyvsp[(2) - (7)].sval)); free((yyvsp[(3) - (7)].sval));
      ast_add(d);
    ;}
    break;

  case 24:
#line 426 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (6)].sval)) + strlen((yyvsp[(2) - (6)].sval) ? (yyvsp[(2) - (6)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, (yyvsp[(1) - (6)].sval)); if((yyvsp[(2) - (6)].sval)) strcat(t, (yyvsp[(2) - (6)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(1) - (6)].sval), (yyvsp[(3) - (6)].sval), (yyvsp[(5) - (6)].node));
      free(t); free((yyvsp[(1) - (6)].sval)); free((yyvsp[(2) - (6)].sval));
      ast_add(d);
    ;}
    break;

  case 25:
#line 435 "c.y"
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
#line 447 "c.y"
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
#line 457 "c.y"
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
#line 470 "c.y"
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
#line 482 "c.y"
    {
      const char* qs = ((yyvsp[(1) - (5)].sval) && (yyvsp[(1) - (5)].sval)[0]) ? (yyvsp[(1) - (5)].sval) : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen((yyvsp[(2) - (5)].sval)) + strlen((yyvsp[(3) - (5)].sval) ? (yyvsp[(3) - (5)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; if(qs){ strcat(t, (yyvsp[(1) - (5)].sval)); strcat(t, " "); } strcat(t, (yyvsp[(2) - (5)].sval)); if((yyvsp[(3) - (5)].sval)) strcat(t, (yyvsp[(3) - (5)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(2) - (5)].sval), (yyvsp[(4) - (5)].sval), NULL);
      free(t); free((yyvsp[(1) - (5)].sval)); free((yyvsp[(2) - (5)].sval)); free((yyvsp[(3) - (5)].sval));
      ast_add(d);
    ;}
    break;

  case 30:
#line 492 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (4)].sval)) + strlen((yyvsp[(2) - (4)].sval) ? (yyvsp[(2) - (4)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, (yyvsp[(1) - (4)].sval)); if((yyvsp[(2) - (4)].sval)) strcat(t, (yyvsp[(2) - (4)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].sval), NULL);
      free(t); free((yyvsp[(1) - (4)].sval)); free((yyvsp[(2) - (4)].sval));
      ast_add(d);
    ;}
    break;

  case 31:
#line 501 "c.y"
    {
      const char* qs = ((yyvsp[(1) - (7)].sval) && (yyvsp[(1) - (7)].sval)[0]) ? (yyvsp[(1) - (7)].sval) : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen((yyvsp[(2) - (7)].sval)) + strlen((yyvsp[(3) - (7)].sval) ? (yyvsp[(3) - (7)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; if(qs){ strcat(t, (yyvsp[(1) - (7)].sval)); strcat(t, " "); } strcat(t, (yyvsp[(2) - (7)].sval)); if((yyvsp[(3) - (7)].sval)) strcat(t, (yyvsp[(3) - (7)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(2) - (7)].sval), (yyvsp[(4) - (7)].sval), (yyvsp[(6) - (7)].node));
      free(t); free((yyvsp[(1) - (7)].sval)); free((yyvsp[(2) - (7)].sval)); free((yyvsp[(3) - (7)].sval));
      ast_add(d);
    ;}
    break;

  case 32:
#line 511 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (6)].sval)) + strlen((yyvsp[(2) - (6)].sval) ? (yyvsp[(2) - (6)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, (yyvsp[(1) - (6)].sval)); if((yyvsp[(2) - (6)].sval)) strcat(t, (yyvsp[(2) - (6)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(1) - (6)].sval), (yyvsp[(3) - (6)].sval), (yyvsp[(5) - (6)].node));
      free(t); free((yyvsp[(1) - (6)].sval)); free((yyvsp[(2) - (6)].sval));
      ast_add(d);
    ;}
    break;

  case 33:
#line 520 "c.y"
    {
      const char* qs = ((yyvsp[(1) - (8)].sval) && (yyvsp[(1) - (8)].sval)[0]) ? (yyvsp[(1) - (8)].sval) : NULL;
      size_t nt = (qs?strlen(qs)+1:0) + strlen((yyvsp[(2) - (8)].sval)) + strlen((yyvsp[(3) - (8)].sval) ? (yyvsp[(3) - (8)].sval) : "") + strlen((yyvsp[(5) - (8)].sval) ? (yyvsp[(5) - (8)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; if(qs){ strcat(t, (yyvsp[(1) - (8)].sval)); strcat(t, " "); } strcat(t, (yyvsp[(2) - (8)].sval)); if((yyvsp[(3) - (8)].sval)) strcat(t, (yyvsp[(3) - (8)].sval)); if((yyvsp[(5) - (8)].sval)) strcat(t, (yyvsp[(5) - (8)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(2) - (8)].sval), (yyvsp[(4) - (8)].sval), (yyvsp[(7) - (8)].node));
      free(t); free((yyvsp[(1) - (8)].sval)); free((yyvsp[(2) - (8)].sval)); free((yyvsp[(3) - (8)].sval)); free((yyvsp[(5) - (8)].sval));
      ast_add(d);
    ;}
    break;

  case 34:
#line 530 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (7)].sval)) + strlen((yyvsp[(2) - (7)].sval) ? (yyvsp[(2) - (7)].sval) : "") + strlen((yyvsp[(4) - (7)].sval) ? (yyvsp[(4) - (7)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, (yyvsp[(1) - (7)].sval)); if((yyvsp[(2) - (7)].sval)) strcat(t, (yyvsp[(2) - (7)].sval)); if((yyvsp[(4) - (7)].sval)) strcat(t, (yyvsp[(4) - (7)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(1) - (7)].sval), (yyvsp[(3) - (7)].sval), (yyvsp[(6) - (7)].node));
      free(t); free((yyvsp[(1) - (7)].sval)); free((yyvsp[(2) - (7)].sval)); free((yyvsp[(4) - (7)].sval));
      ast_add(d);
    ;}
    break;

  case 36:
#line 539 "c.y"
    { free((yyvsp[(1) - (2)].sval)); ;}
    break;

  case 37:
#line 540 "c.y"
    { free((yyvsp[(1) - (2)].sval)); ;}
    break;

  case 38:
#line 546 "c.y"
    { (yyval.fspec) = fspec_new_from((yyvsp[(1) - (2)].sval), (yyvsp[(2) - (2)].sval)); free((yyvsp[(1) - (2)].sval)); free((yyvsp[(2) - (2)].sval)); ;}
    break;

  case 39:
#line 547 "c.y"
    { (yyval.fspec) = (yyvsp[(2) - (2)].fspec); if((yyval.fspec)) (yyval.fspec)->flags |= ASTF_EXTERN; ;}
    break;

  case 40:
#line 548 "c.y"
    { (yyval.fspec) = (yyvsp[(2) - (2)].fspec); if((yyval.fspec)) (yyval.fspec)->flags |= ASTF_STATIC; ;}
    break;

  case 41:
#line 549 "c.y"
    { (yyval.fspec) = (yyvsp[(2) - (2)].fspec); if((yyval.fspec)) (yyval.fspec)->flags |= ASTF_CONST; ;}
    break;

  case 42:
#line 550 "c.y"
    { (yyval.fspec) = (yyvsp[(2) - (2)].fspec); if((yyval.fspec)) (yyval.fspec)->flags |= ASTF_VOLATILE; ;}
    break;

  case 43:
#line 551 "c.y"
    { (yyval.fspec) = (yyvsp[(2) - (2)].fspec); if((yyval.fspec)) (yyval.fspec)->flags |= ASTF_RESTRICT; ;}
    break;

  case 44:
#line 552 "c.y"
    { (yyval.fspec) = (yyvsp[(2) - (2)].fspec); if((yyval.fspec)) (yyval.fspec)->flags |= ASTF_INLINE; ;}
    break;

  case 45:
#line 557 "c.y"
    { (yyval.plist) = NULL; ;}
    break;

  case 46:
#line 558 "c.y"
    { (yyval.plist) = (yyvsp[(1) - (1)].plist); ;}
    break;

  case 47:
#line 562 "c.y"
    { (yyval.plist) = (yyvsp[(1) - (1)].plist); ;}
    break;

  case 48:
#line 563 "c.y"
    { (yyval.plist) = (yyvsp[(1) - (3)].plist); /* variadic marker ignored in AST */ ;}
    break;

  case 49:
#line 567 "c.y"
    { (yyval.plist) = (yyvsp[(1) - (1)].plist); ;}
    break;

  case 50:
#line 568 "c.y"
    { (yyval.plist) = plist_merge((yyvsp[(1) - (3)].plist), (yyvsp[(3) - (3)].plist)); ;}
    break;

  case 51:
#line 573 "c.y"
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
#line 586 "c.y"
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
#line 649 "c.y"
    { (yyval.sval) = strdup("void"); ;}
    break;

  case 66:
#line 650 "c.y"
    { (yyval.sval) = strdup("char"); ;}
    break;

  case 67:
#line 651 "c.y"
    { (yyval.sval) = strdup("short"); ;}
    break;

  case 68:
#line 652 "c.y"
    { (yyval.sval) = strdup("int"); ;}
    break;

  case 69:
#line 653 "c.y"
    { (yyval.sval) = strdup("long"); ;}
    break;

  case 70:
#line 654 "c.y"
    { (yyval.sval) = strdup("signed"); ;}
    break;

  case 71:
#line 655 "c.y"
    { (yyval.sval) = strdup("unsigned"); ;}
    break;

  case 72:
#line 656 "c.y"
    { (yyval.sval) = strdup("float"); ;}
    break;

  case 73:
#line 657 "c.y"
    { (yyval.sval) = strdup("double"); ;}
    break;

  case 74:
#line 658 "c.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 75:
#line 659 "c.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 76:
#line 660 "c.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 77:
#line 666 "c.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 78:
#line 667 "c.y"
    {
      size_t n = strlen((yyvsp[(1) - (2)].sval)) + 1 + strlen((yyvsp[(2) - (2)].sval)) + 1;
      char* s = (char*)malloc(n);
      if(s) { s[0] = '\0'; strcat(s, (yyvsp[(1) - (2)].sval)); strcat(s, " "); strcat(s, (yyvsp[(2) - (2)].sval)); }
      free((yyvsp[(1) - (2)].sval)); free((yyvsp[(2) - (2)].sval));
      (yyval.sval) = s;
    ;}
    break;

  case 79:
#line 678 "c.y"
    {
      size_t n = strlen((yyvsp[(2) - (3)].sval)) + 3; /* [ + num + ] + \0 */
      char* s = (char*)malloc(n);
      if(s) { s[0]='\0'; strcat(s, "["); strcat(s, (yyvsp[(2) - (3)].sval)); strcat(s, "]"); }
      free((yyvsp[(2) - (3)].sval));
      (yyval.sval) = s;
    ;}
    break;

  case 80:
#line 685 "c.y"
    {
      size_t n = strlen((yyvsp[(1) - (4)].sval)) + 1 + strlen((yyvsp[(3) - (4)].sval)) + 2 + 1;
      char* s = (char*)malloc(n);
      if(s) { strcpy(s, (yyvsp[(1) - (4)].sval)); strcat(s, "["); strcat(s, (yyvsp[(3) - (4)].sval)); strcat(s, "]"); }
      free((yyvsp[(1) - (4)].sval));
      free((yyvsp[(3) - (4)].sval));
      (yyval.sval) = s;
    ;}
    break;

  case 81:
#line 696 "c.y"
    { size_t n=strlen("struct ")+strlen((yyvsp[(2) - (5)].sval))+1; (yyval.sval)=(char*)malloc(n); if((yyval.sval)){ strcpy((yyval.sval), "struct "); strcat((yyval.sval), (yyvsp[(2) - (5)].sval));} ;}
    break;

  case 82:
#line 697 "c.y"
    { size_t n=strlen("union ")+strlen((yyvsp[(2) - (5)].sval))+1; (yyval.sval)=(char*)malloc(n); if((yyval.sval)){ strcpy((yyval.sval), "union "); strcat((yyval.sval), (yyvsp[(2) - (5)].sval));} ;}
    break;

  case 83:
#line 698 "c.y"
    { (yyval.sval) = strdup("struct"); ;}
    break;

  case 84:
#line 699 "c.y"
    { (yyval.sval) = strdup("union"); ;}
    break;

  case 85:
#line 700 "c.y"
    { size_t n=strlen("struct ")+strlen((yyvsp[(2) - (2)].sval))+1; (yyval.sval)=(char*)malloc(n); if((yyval.sval)){ strcpy((yyval.sval), "struct "); strcat((yyval.sval), (yyvsp[(2) - (2)].sval));} ;}
    break;

  case 86:
#line 701 "c.y"
    { size_t n=strlen("union ")+strlen((yyvsp[(2) - (2)].sval))+1; (yyval.sval)=(char*)malloc(n); if((yyval.sval)){ strcpy((yyval.sval), "union "); strcat((yyval.sval), (yyvsp[(2) - (2)].sval));} ;}
    break;

  case 97:
#line 730 "c.y"
    { size_t n=strlen("enum ")+strlen((yyvsp[(2) - (5)].sval))+1; (yyval.sval)=(char*)malloc(n); if((yyval.sval)){ strcpy((yyval.sval), "enum "); strcat((yyval.sval), (yyvsp[(2) - (5)].sval));} ;}
    break;

  case 98:
#line 731 "c.y"
    { (yyval.sval) = strdup("enum"); ;}
    break;

  case 99:
#line 732 "c.y"
    { size_t n=strlen("enum ")+strlen((yyvsp[(2) - (2)].sval))+1; (yyval.sval)=(char*)malloc(n); if((yyval.sval)){ strcpy((yyval.sval), "enum "); strcat((yyval.sval), (yyvsp[(2) - (2)].sval));} ;}
    break;

  case 122:
#line 787 "c.y"
    { (yyval.sval) = strdup("()"); ;}
    break;

  case 123:
#line 788 "c.y"
    {
      size_t n = strlen((yyvsp[(1) - (1)].sval)) + 3;
      char* s = (char*)malloc(n);
      if(s) { s[0]='\0'; strcat(s, "("); strcat(s, (yyvsp[(1) - (1)].sval)); strcat(s, ")"); }
      free((yyvsp[(1) - (1)].sval));
      (yyval.sval) = s;
    ;}
    break;

  case 124:
#line 798 "c.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 125:
#line 799 "c.y"
    {
      size_t n = strlen((yyvsp[(1) - (3)].sval)) + 2 + strlen((yyvsp[(3) - (3)].sval)) + 1;
      char* s = (char*)malloc(n);
      if(s) { strcpy(s, (yyvsp[(1) - (3)].sval)); strcat(s, ", "); strcat(s, (yyvsp[(3) - (3)].sval)); }
      free((yyvsp[(1) - (3)].sval)); free((yyvsp[(3) - (3)].sval));
      (yyval.sval) = s;
    ;}
    break;

  case 126:
#line 809 "c.y"
    {
      const char* qs = ((yyvsp[(1) - (3)].sval) && (yyvsp[(1) - (3)].sval)[0]) ? (yyvsp[(1) - (3)].sval) : NULL;
      size_t n = (qs?strlen(qs)+1:0) + strlen((yyvsp[(2) - (3)].sval)) + strlen((yyvsp[(3) - (3)].sval) ? (yyvsp[(3) - (3)].sval) : "") + 1;
      char* s = (char*)malloc(n);
      if(s) { s[0]='\0'; if(qs){ strcat(s, (yyvsp[(1) - (3)].sval)); strcat(s, " "); } strcat(s, (yyvsp[(2) - (3)].sval)); if((yyvsp[(3) - (3)].sval)) strcat(s, (yyvsp[(3) - (3)].sval)); }
      (yyval.sval) = s;
      free((yyvsp[(1) - (3)].sval)); free((yyvsp[(2) - (3)].sval)); free((yyvsp[(3) - (3)].sval));
    ;}
    break;

  case 127:
#line 817 "c.y"
    {
      const char* qs = ((yyvsp[(1) - (4)].sval) && (yyvsp[(1) - (4)].sval)[0]) ? (yyvsp[(1) - (4)].sval) : NULL;
      size_t n = (qs?strlen(qs)+1:0) + strlen((yyvsp[(2) - (4)].sval)) + strlen((yyvsp[(3) - (4)].sval) ? (yyvsp[(3) - (4)].sval) : "") + 1;
      char* s = (char*)malloc(n);
      if(s) { s[0]='\0'; if(qs){ strcat(s, (yyvsp[(1) - (4)].sval)); strcat(s, " "); } strcat(s, (yyvsp[(2) - (4)].sval)); if((yyvsp[(3) - (4)].sval)) strcat(s, (yyvsp[(3) - (4)].sval)); }
      (yyval.sval) = s;
      free((yyvsp[(1) - (4)].sval)); free((yyvsp[(2) - (4)].sval)); free((yyvsp[(3) - (4)].sval)); free((yyvsp[(4) - (4)].sval));
    ;}
    break;

  case 130:
#line 837 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 131:
#line 838 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 132:
#line 839 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 133:
#line 840 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 134:
#line 841 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 135:
#line 845 "c.y"
    { (yyval.node) = (AstNode*)ast_compound_new_with((yyvsp[(2) - (3)].nlist) ? (yyvsp[(2) - (3)].nlist)->a : NULL, (yyvsp[(2) - (3)].nlist) ? (yyvsp[(2) - (3)].nlist)->n : 0); if((yyvsp[(2) - (3)].nlist)) free((yyvsp[(2) - (3)].nlist)); ;}
    break;

  case 136:
#line 849 "c.y"
    { (yyval.nlist) = NULL; ;}
    break;

  case 137:
#line 850 "c.y"
    { (yyval.nlist) = (yyvsp[(1) - (1)].nlist); ;}
    break;

  case 138:
#line 854 "c.y"
    { (yyval.nlist) = (yyvsp[(1) - (1)].nlist); ;}
    break;

  case 139:
#line 855 "c.y"
    { (yyval.nlist) = nlist_merge((yyvsp[(1) - (2)].nlist), (yyvsp[(2) - (2)].nlist)); ;}
    break;

  case 140:
#line 859 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (4)].sval)) + strlen((yyvsp[(2) - (4)].sval) ? (yyvsp[(2) - (4)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, (yyvsp[(1) - (4)].sval)); if((yyvsp[(2) - (4)].sval)) strcat(t, (yyvsp[(2) - (4)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].sval), NULL);
      free(t); free((yyvsp[(1) - (4)].sval)); free((yyvsp[(2) - (4)].sval)); /* $3 freed by decl */
      (yyval.nlist) = nlist_from1(d);
    ;}
    break;

  case 141:
#line 867 "c.y"
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

  case 142:
#line 876 "c.y"
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

  case 143:
#line 885 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (6)].sval)) + strlen((yyvsp[(2) - (6)].sval) ? (yyvsp[(2) - (6)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, (yyvsp[(1) - (6)].sval)); if((yyvsp[(2) - (6)].sval)) strcat(t, (yyvsp[(2) - (6)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(1) - (6)].sval), (yyvsp[(3) - (6)].sval), (yyvsp[(5) - (6)].node));
      free(t); free((yyvsp[(1) - (6)].sval)); free((yyvsp[(2) - (6)].sval));
      (yyval.nlist) = nlist_from1(d);
    ;}
    break;

  case 144:
#line 893 "c.y"
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

  case 145:
#line 902 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (6)].sval)) + strlen((yyvsp[(2) - (6)].sval) ? (yyvsp[(2) - (6)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, (yyvsp[(1) - (6)].sval)); if((yyvsp[(2) - (6)].sval)) strcat(t, (yyvsp[(2) - (6)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(1) - (6)].sval), (yyvsp[(3) - (6)].sval), (yyvsp[(5) - (6)].node));
      free(t); free((yyvsp[(1) - (6)].sval)); free((yyvsp[(2) - (6)].sval));
      (yyval.nlist) = nlist_from1(d);
    ;}
    break;

  case 146:
#line 910 "c.y"
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

  case 147:
#line 919 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (7)].sval)) + strlen((yyvsp[(2) - (7)].sval) ? (yyvsp[(2) - (7)].sval) : "") + strlen((yyvsp[(4) - (7)].sval) ? (yyvsp[(4) - (7)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, (yyvsp[(1) - (7)].sval)); if((yyvsp[(2) - (7)].sval)) strcat(t, (yyvsp[(2) - (7)].sval)); if((yyvsp[(4) - (7)].sval)) strcat(t, (yyvsp[(4) - (7)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(1) - (7)].sval), (yyvsp[(3) - (7)].sval), (yyvsp[(6) - (7)].node));
      free(t); free((yyvsp[(1) - (7)].sval)); free((yyvsp[(2) - (7)].sval)); free((yyvsp[(4) - (7)].sval));
      (yyval.nlist) = nlist_from1(d);
    ;}
    break;

  case 148:
#line 928 "c.y"
    {
      const char* qs = ((yyvsp[(1) - (7)].sval) && (yyvsp[(1) - (7)].sval)[0]) ? (yyvsp[(1) - (7)].sval) : NULL; NodeList* nl=nlist_new();
      char* base = qs ? sjoin3((yyvsp[(1) - (7)].sval), " ", (yyvsp[(2) - (7)].sval)) : sdup0x((yyvsp[(2) - (7)].sval));
      char* t1=compose_type(base,(yyvsp[(3) - (7)].dstr)); AstNode* d1=ast_decl_new(t1,(yyvsp[(3) - (7)].dstr)->name,NULL); free(t1); dstr_free((yyvsp[(3) - (7)].dstr)); nlist_push(nl,d1);
      char* t2=compose_type(base,(yyvsp[(5) - (7)].dstr)); AstNode* d2=ast_decl_new(t2,(yyvsp[(5) - (7)].dstr)->name,NULL); free(t2); dstr_free((yyvsp[(5) - (7)].dstr)); nlist_push(nl,d2);
      if((yyvsp[(6) - (7)].nlist)){ for(long i=0;i<(yyvsp[(6) - (7)].nlist)->n;i++){ DStr* ds=(DStr*)(yyvsp[(6) - (7)].nlist)->a[i]; char* tx=compose_type(base,ds); AstNode* dn=ast_decl_new(tx, ds->name,NULL); free(tx); dstr_free(ds); nlist_push(nl,dn);} free((yyvsp[(6) - (7)].nlist)->a); free((yyvsp[(6) - (7)].nlist)); }
      free(base); free((yyvsp[(1) - (7)].sval)); free((yyvsp[(2) - (7)].sval));
      (yyval.nlist)=nl;
    ;}
    break;

  case 149:
#line 938 "c.y"
    {
      const char* qs = ((yyvsp[(1) - (6)].sval) && (yyvsp[(1) - (6)].sval)[0]) ? (yyvsp[(1) - (6)].sval) : NULL;
      char* base = qs ? sjoin3((yyvsp[(1) - (6)].sval), " ", (yyvsp[(2) - (6)].sval)) : sdup0x((yyvsp[(2) - (6)].sval));
      char* t=compose_type(base,(yyvsp[(3) - (6)].dstr));
      AstNode* d=ast_decl_new(t? t: base, (yyvsp[(3) - (6)].dstr)->name, (yyvsp[(5) - (6)].node));
      free(t); dstr_free((yyvsp[(3) - (6)].dstr)); free(base); free((yyvsp[(1) - (6)].sval)); free((yyvsp[(2) - (6)].sval));
      (yyval.nlist) = nlist_from1(d);
    ;}
    break;

  case 150:
#line 946 "c.y"
    { (yyval.nlist) = nlist_from1((yyvsp[(1) - (1)].node)); ;}
    break;

  case 151:
#line 949 "c.y"
    {
      size_t nt = strlen((yyvsp[(2) - (5)].sval)) + strlen((yyvsp[(3) - (5)].sval) ? (yyvsp[(3) - (5)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; strcat(t, (yyvsp[(2) - (5)].sval)); if((yyvsp[(3) - (5)].sval)) strcat(t, (yyvsp[(3) - (5)].sval)); }
      AstNode* td = ast_typedef_new(t ? t : (yyvsp[(2) - (5)].sval), (yyvsp[(4) - (5)].sval));
      free(t);
      (yyval.nlist) = nlist_from1(td);
    ;}
    break;

  case 152:
#line 961 "c.y"
    { (yyval.nlist)=NULL; ;}
    break;

  case 153:
#line 962 "c.y"
    { if(!(yyvsp[(1) - (3)].nlist)){ NodeList* nl=nlist_new(); (yyval.nlist)=nl; } nlist_push((yyvsp[(1) - (3)].nlist), (AstNode*)(yyvsp[(3) - (3)].dstr)); (yyval.nlist)=(yyvsp[(1) - (3)].nlist); ;}
    break;

  case 154:
#line 967 "c.y"
    { DStr* d=(DStr*)calloc(1,sizeof(DStr)); d->name=sdup0x((yyvsp[(2) - (2)].dstr)->name); d->pre=sdup0x((yyvsp[(1) - (2)].sval)); d->post=sdup0x((yyvsp[(2) - (2)].dstr)->post); dstr_free((yyvsp[(2) - (2)].dstr)); free((yyvsp[(1) - (2)].sval)); (yyval.dstr)=d; ;}
    break;

  case 155:
#line 971 "c.y"
    { DStr* d=(DStr*)calloc(1,sizeof(DStr)); d->name=(yyvsp[(1) - (1)].sval); d->pre=strdup(""); d->post=strdup(""); (yyval.dstr)=d; ;}
    break;

  case 156:
#line 972 "c.y"
    { (yyval.dstr)=(yyvsp[(2) - (3)].dstr); ;}
    break;

  case 157:
#line 973 "c.y"
    { char* params=(yyvsp[(5) - (6)].sval)?(yyvsp[(5) - (6)].sval):strdup("()"); (yyvsp[(2) - (6)].dstr)->post=sappend3((yyvsp[(2) - (6)].dstr)->post, "(*)", params); free((yyvsp[(5) - (6)].sval)); (yyval.dstr)=(yyvsp[(2) - (6)].dstr); ;}
    break;

  case 158:
#line 974 "c.y"
    { char* suf=array_suffix_from_expr((yyvsp[(3) - (4)].node)); (yyvsp[(1) - (4)].dstr)->post=sappend((yyvsp[(1) - (4)].dstr)->post,suf); free(suf); (yyval.dstr)=(yyvsp[(1) - (4)].dstr); ;}
    break;

  case 159:
#line 980 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 160:
#line 981 "c.y"
    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 167:
#line 997 "c.y"
    { (yyval.node) = ast_return_new((yyvsp[(2) - (3)].node)); ;}
    break;

  case 168:
#line 998 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 169:
#line 999 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 170:
#line 1000 "c.y"
    { free((yyvsp[(2) - (3)].sval)); (yyval.node) = NULL; ;}
    break;

  case 171:
#line 1005 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 172:
#line 1006 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 173:
#line 1010 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 174:
#line 1011 "c.y"
    { (yyval.node) = (yyvsp[(3) - (3)].node); ;}
    break;

  case 175:
#line 1015 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 176:
#line 1016 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 177:
#line 1020 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 178:
#line 1021 "c.y"
    { (yyval.node) = ast_expr_assign_new("=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 179:
#line 1022 "c.y"
    { (yyval.node) = ast_expr_assign_new("+=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 180:
#line 1023 "c.y"
    { (yyval.node) = ast_expr_assign_new("-=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 181:
#line 1024 "c.y"
    { (yyval.node) = ast_expr_assign_new("*=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 182:
#line 1025 "c.y"
    { (yyval.node) = ast_expr_assign_new("/=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 183:
#line 1026 "c.y"
    { (yyval.node) = ast_expr_assign_new("%=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 184:
#line 1027 "c.y"
    { (yyval.node) = ast_expr_assign_new("&=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 185:
#line 1028 "c.y"
    { (yyval.node) = ast_expr_assign_new("|=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 186:
#line 1029 "c.y"
    { (yyval.node) = ast_expr_assign_new("^=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 187:
#line 1030 "c.y"
    { (yyval.node) = ast_expr_assign_new("<<=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 188:
#line 1031 "c.y"
    { (yyval.node) = ast_expr_assign_new(">>=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 189:
#line 1035 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 190:
#line 1036 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 191:
#line 1040 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 192:
#line 1041 "c.y"
    { (yyval.node) = ast_expr_binary_new("||", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 193:
#line 1045 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 194:
#line 1046 "c.y"
    { (yyval.node) = ast_expr_binary_new("&&", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 195:
#line 1050 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 196:
#line 1051 "c.y"
    { (yyval.node) = ast_expr_binary_new("|", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 197:
#line 1055 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 198:
#line 1056 "c.y"
    { (yyval.node) = ast_expr_binary_new("^", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 199:
#line 1060 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 200:
#line 1061 "c.y"
    { (yyval.node) = ast_expr_binary_new("&", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 201:
#line 1065 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 202:
#line 1066 "c.y"
    { (yyval.node) = ast_expr_binary_new("==", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 203:
#line 1067 "c.y"
    { (yyval.node) = ast_expr_binary_new("!=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 204:
#line 1071 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 205:
#line 1072 "c.y"
    { (yyval.node) = ast_expr_binary_new("<", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 206:
#line 1073 "c.y"
    { (yyval.node) = ast_expr_binary_new(">", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 207:
#line 1074 "c.y"
    { (yyval.node) = ast_expr_binary_new("<=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 208:
#line 1075 "c.y"
    { (yyval.node) = ast_expr_binary_new(">=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 209:
#line 1079 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 210:
#line 1080 "c.y"
    { (yyval.node) = ast_expr_binary_new("<<", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 211:
#line 1081 "c.y"
    { (yyval.node) = ast_expr_binary_new(">>", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 212:
#line 1085 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 213:
#line 1086 "c.y"
    { (yyval.node) = ast_expr_binary_new("+", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 214:
#line 1087 "c.y"
    { (yyval.node) = ast_expr_binary_new("-", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 215:
#line 1091 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 216:
#line 1092 "c.y"
    { (yyval.node) = ast_expr_binary_new("*", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 217:
#line 1093 "c.y"
    { (yyval.node) = ast_expr_binary_new("/", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 218:
#line 1094 "c.y"
    { (yyval.node) = ast_expr_binary_new("%", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 219:
#line 1098 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 220:
#line 1099 "c.y"
    { (yyval.node) = ast_expr_unary_new("++", (yyvsp[(2) - (2)].node), 0); ;}
    break;

  case 221:
#line 1100 "c.y"
    { (yyval.node) = ast_expr_unary_new("--", (yyvsp[(2) - (2)].node), 0); ;}
    break;

  case 222:
#line 1101 "c.y"
    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 223:
#line 1102 "c.y"
    { (yyval.node) = ast_expr_unary_new("-", (yyvsp[(2) - (2)].node), 0); ;}
    break;

  case 224:
#line 1103 "c.y"
    { (yyval.node) = ast_expr_unary_new("!", (yyvsp[(2) - (2)].node), 0); ;}
    break;

  case 225:
#line 1104 "c.y"
    { (yyval.node) = ast_expr_unary_new("~", (yyvsp[(2) - (2)].node), 0); ;}
    break;

  case 226:
#line 1105 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 227:
#line 1106 "c.y"
    { free((yyvsp[(3) - (4)].sval)); (yyval.node) = NULL; ;}
    break;

  case 228:
#line 1107 "c.y"
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

  case 229:
#line 1124 "c.y"
    { (yyval.sval) = strdup(""); ;}
    break;

  case 230:
#line 1125 "c.y"
    { (yyval.sval) = sappend((yyvsp[(1) - (2)].sval), ((yyvsp[(1) - (2)].sval) && (yyvsp[(1) - (2)].sval)[0])?" const":"const"); ;}
    break;

  case 231:
#line 1126 "c.y"
    { (yyval.sval) = sappend((yyvsp[(1) - (2)].sval), ((yyvsp[(1) - (2)].sval) && (yyvsp[(1) - (2)].sval)[0])?" volatile":"volatile"); ;}
    break;

  case 232:
#line 1127 "c.y"
    { (yyval.sval) = sappend((yyvsp[(1) - (2)].sval), ((yyvsp[(1) - (2)].sval) && (yyvsp[(1) - (2)].sval)[0])?" restrict":"restrict"); ;}
    break;

  case 233:
#line 1131 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 234:
#line 1132 "c.y"
    {
      (yyval.node) = ast_expr_call_new((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].nlist) ? (yyvsp[(3) - (4)].nlist)->a : NULL, (yyvsp[(3) - (4)].nlist) ? (yyvsp[(3) - (4)].nlist)->n : 0);
      if((yyvsp[(3) - (4)].nlist)) { free((yyvsp[(3) - (4)].nlist)); }
    ;}
    break;

  case 235:
#line 1136 "c.y"
    { (yyval.node) = ast_expr_index_new((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node)); ;}
    break;

  case 236:
#line 1137 "c.y"
    { (yyval.node) = ast_expr_member_new((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].sval), 0); free((yyvsp[(3) - (3)].sval)); ;}
    break;

  case 237:
#line 1138 "c.y"
    { (yyval.node) = ast_expr_member_new((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].sval), 1); free((yyvsp[(3) - (3)].sval)); ;}
    break;

  case 238:
#line 1139 "c.y"
    { (yyval.node) = ast_expr_unary_new("++", (yyvsp[(1) - (2)].node), 1); ;}
    break;

  case 239:
#line 1140 "c.y"
    { (yyval.node) = ast_expr_unary_new("--", (yyvsp[(1) - (2)].node), 1); ;}
    break;

  case 240:
#line 1144 "c.y"
    { (yyval.nlist) = NULL; ;}
    break;

  case 241:
#line 1145 "c.y"
    { (yyval.nlist) = (yyvsp[(1) - (1)].nlist); ;}
    break;

  case 242:
#line 1149 "c.y"
    { (yyval.nlist) = nlist_from1((yyvsp[(1) - (1)].node)); ;}
    break;

  case 243:
#line 1150 "c.y"
    { nlist_push((yyvsp[(1) - (3)].nlist), (yyvsp[(3) - (3)].node)); (yyval.nlist) = (yyvsp[(1) - (3)].nlist); ;}
    break;

  case 244:
#line 1154 "c.y"
    { (yyval.node) = ast_expr_ident_new((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 245:
#line 1155 "c.y"
    { (yyval.node) = ast_expr_int_new(atol((yyvsp[(1) - (1)].sval))); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 246:
#line 1156 "c.y"
    { (yyval.node) = ast_expr_float_new(atof((yyvsp[(1) - (1)].sval))); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 247:
#line 1157 "c.y"
    { (yyval.node) = ast_expr_char_new((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 248:
#line 1158 "c.y"
    { (yyval.node) = ast_expr_string_new((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 249:
#line 1159 "c.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 250:
#line 1164 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 251:
#line 1165 "c.y"
    { (yyval.node) = (AstNode*)ast_init_list_new((yyvsp[(2) - (3)].nlist) ? (yyvsp[(2) - (3)].nlist)->a : NULL, (yyvsp[(2) - (3)].nlist) ? (yyvsp[(2) - (3)].nlist)->n : 0); if((yyvsp[(2) - (3)].nlist)) free((yyvsp[(2) - (3)].nlist)); ;}
    break;

  case 252:
#line 1169 "c.y"
    { (yyval.nlist) = NULL; ;}
    break;

  case 253:
#line 1170 "c.y"
    { (yyval.nlist) = (yyvsp[(1) - (1)].nlist); ;}
    break;

  case 254:
#line 1174 "c.y"
    { (yyval.nlist) = nlist_from1((yyvsp[(1) - (1)].node)); ;}
    break;

  case 255:
#line 1175 "c.y"
    { (yyval.nlist) = nlist_from1((yyvsp[(1) - (1)].node)); ;}
    break;

  case 256:
#line 1176 "c.y"
    { nlist_push((yyvsp[(1) - (3)].nlist), (yyvsp[(3) - (3)].node)); (yyval.nlist) = (yyvsp[(1) - (3)].nlist); ;}
    break;

  case 257:
#line 1177 "c.y"
    { nlist_push((yyvsp[(1) - (3)].nlist), (yyvsp[(3) - (3)].node)); (yyval.nlist) = (yyvsp[(1) - (3)].nlist); ;}
    break;

  case 258:
#line 1181 "c.y"
    { (yyval.node) = ast_init_desig_chain_new((yyvsp[(1) - (3)].nlist) ? (yyvsp[(1) - (3)].nlist)->a : NULL, (yyvsp[(1) - (3)].nlist) ? (yyvsp[(1) - (3)].nlist)->n : 0, (yyvsp[(3) - (3)].node)); if((yyvsp[(1) - (3)].nlist)) free((yyvsp[(1) - (3)].nlist)); ;}
    break;

  case 259:
#line 1186 "c.y"
    { (yyval.nlist) = nlist_from1((yyvsp[(1) - (1)].node)); ;}
    break;

  case 260:
#line 1187 "c.y"
    { nlist_push((yyvsp[(1) - (2)].nlist), (yyvsp[(2) - (2)].node)); (yyval.nlist) = (yyvsp[(1) - (2)].nlist); ;}
    break;

  case 261:
#line 1191 "c.y"
    { (yyval.node) = ast_desig_field_new((yyvsp[(2) - (2)].sval)); free((yyvsp[(2) - (2)].sval)); ;}
    break;

  case 262:
#line 1192 "c.y"
    { (yyval.node) = ast_desig_index_new((yyvsp[(2) - (3)].node)); ;}
    break;

  case 263:
#line 1193 "c.y"
    { (yyval.node) = ast_desig_range_new((yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 3687 "parser.c"
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


#line 1200 "c.y"


void yyerror(const char* s)
{
  fprintf(stderr, "parse error at line %d near '%s': %s\n", yylineno, yytext ? yytext : "", s);
}

