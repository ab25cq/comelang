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
     RSHIFT_ASSIGN = 317
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

/* Simple parameter list builder for the simple_function_definition path */
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
#line 133 "c.y"
{
  char* sval;
  long  ival;
  struct AstNode* node;
  struct ParamList* plist;
  struct NodeList* nlist;
  struct DStr* dstr;
}
/* Line 193 of yacc.c.  */
#line 350 "parser.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 363 "parser.c"

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
#define YYLAST   882

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  84
/* YYNRULES -- Number of rules.  */
#define YYNRULES  247
/* YYNRULES -- Number of states.  */
#define YYNSTATES  448

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

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
       2,     2,     2,     2,     2,     2,     2,     2,    65,    83,
      69,    63,    70,    64,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    80,     2,    81,    67,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    85,    66,    86,    77,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,    14,    17,    19,    21,    28,
      34,    41,    53,    66,    71,    78,    86,    93,    95,    97,
      98,   100,   102,   106,   110,   113,   114,   116,   118,   122,
     124,   128,   132,   134,   137,   139,   141,   143,   145,   147,
     149,   151,   153,   155,   157,   159,   161,   163,   165,   167,
     169,   171,   173,   175,   177,   179,   181,   182,   184,   186,
     189,   193,   198,   204,   210,   215,   220,   223,   226,   227,
     229,   231,   234,   238,   240,   244,   246,   249,   253,   259,
     264,   267,   268,   270,   272,   276,   278,   282,   285,   286,
     288,   290,   293,   296,   300,   302,   306,   311,   316,   321,
     322,   324,   326,   330,   331,   333,   334,   336,   338,   342,
     345,   349,   351,   355,   357,   361,   364,   366,   369,   373,
     377,   379,   381,   383,   385,   387,   391,   392,   394,   396,
     399,   404,   411,   418,   426,   433,   435,   441,   448,   449,
     453,   456,   458,   462,   467,   472,   474,   477,   483,   491,
     497,   503,   511,   521,   525,   528,   531,   535,   536,   538,
     540,   544,   545,   547,   549,   553,   557,   561,   565,   569,
     573,   577,   581,   585,   589,   593,   595,   601,   603,   607,
     609,   613,   615,   619,   621,   625,   627,   631,   633,   637,
     641,   643,   647,   651,   655,   659,   661,   665,   669,   671,
     675,   679,   681,   685,   689,   693,   695,   698,   701,   704,
     707,   710,   713,   716,   721,   723,   728,   733,   737,   741,
     744,   747,   748,   750,   752,   756,   758,   760,   762,   764,
     766,   770,   772,   776,   777,   779,   781,   783,   787,   791,
     796,   802,   806,   808,   811,   814,   818,   824
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      88,     0,    -1,    -1,    88,    89,    -1,   104,   105,     3,
      63,   147,    83,    -1,    95,    83,    -1,    90,    -1,   131,
      -1,   104,   138,    84,   138,   137,    83,    -1,    21,   104,
     105,     3,    83,    -1,    21,   104,   105,     3,   107,    83,
      -1,    21,   104,   105,    78,    73,     3,    79,    78,   125,
      79,    83,    -1,    21,   104,   105,    78,    73,     3,   107,
      79,    78,   125,    79,    83,    -1,   104,   105,     3,    83,
      -1,   104,   105,     3,    63,   164,    83,    -1,   104,   105,
       3,   107,    63,   164,    83,    -1,    91,     3,    78,    92,
      79,   133,    -1,   104,    -1,    99,    -1,    -1,    93,    -1,
      94,    -1,    93,    84,    94,    -1,   104,   105,     3,    -1,
      99,    96,    -1,    -1,    97,    -1,    98,    -1,    97,    84,
      98,    -1,   118,    -1,   118,    63,   147,    -1,   118,    63,
     164,    -1,   100,    -1,    99,   100,    -1,   101,    -1,   104,
      -1,   102,    -1,   103,    -1,    38,    -1,    39,    -1,    34,
      -1,    35,    -1,    36,    -1,    37,    -1,     9,    -1,    10,
      -1,    11,    -1,    12,    -1,    13,    -1,    14,    -1,    15,
      -1,    16,    -1,    17,    -1,   108,    -1,   114,    -1,     4,
      -1,    -1,   106,    -1,    73,    -1,   106,    73,    -1,    80,
       6,    81,    -1,   107,    80,     6,    81,    -1,    18,     3,
      85,   109,    86,    -1,    19,     3,    85,   109,    86,    -1,
      18,    85,   109,    86,    -1,    19,    85,   109,    86,    -1,
      18,     3,    -1,    19,     3,    -1,    -1,   110,    -1,   111,
      -1,   110,   111,    -1,    99,   112,    83,    -1,   113,    -1,
     112,    84,   113,    -1,   118,    -1,    65,   170,    -1,   118,
      65,   170,    -1,    20,     3,    85,   115,    86,    -1,    20,
      85,   115,    86,    -1,    20,     3,    -1,    -1,   116,    -1,
     117,    -1,   116,    84,   117,    -1,     3,    -1,     3,    63,
     170,    -1,   119,   121,    -1,    -1,   120,    -1,    73,    -1,
      73,   102,    -1,    73,   120,    -1,    73,   102,   120,    -1,
       3,    -1,    78,   118,    79,    -1,   121,    80,   146,    81,
      -1,   121,    78,   124,    79,    -1,   121,    78,   122,    79,
      -1,    -1,   123,    -1,     3,    -1,   123,    84,     3,    -1,
      -1,   128,    -1,    -1,   126,    -1,   127,    -1,   126,    84,
     127,    -1,   104,   105,    -1,   104,   105,     3,    -1,   129,
      -1,   129,    84,    41,    -1,   130,    -1,   129,    84,   130,
      -1,    99,   118,    -1,    99,    -1,   104,   105,    -1,    99,
     118,   133,    -1,   104,   118,   133,    -1,   133,    -1,   140,
      -1,   141,    -1,   142,    -1,   143,    -1,    85,   134,    86,
      -1,    -1,   135,    -1,   136,    -1,   135,   136,    -1,   104,
     105,     3,    83,    -1,   104,   105,     3,    63,   147,    83,
      -1,   104,   105,     3,    63,   164,    83,    -1,   104,   105,
       3,   107,    63,   164,    83,    -1,   104,   138,    84,   138,
     137,    83,    -1,   132,    -1,    21,   104,   105,     3,    83,
      -1,    21,   104,   104,   105,     3,    83,    -1,    -1,   137,
      84,   138,    -1,   105,   139,    -1,     3,    -1,    78,   138,
      79,    -1,   139,    80,   146,    81,    -1,   139,    78,   125,
      79,    -1,    83,    -1,   145,    83,    -1,    23,    78,   145,
      79,   132,    -1,    23,    78,   145,    79,   132,    24,   132,
      -1,    28,    78,   145,    79,   132,    -1,    25,    78,   145,
      79,   132,    -1,    27,   132,    25,    78,   145,    79,    83,
      -1,    26,    78,   144,    83,   144,    83,   144,    79,   132,
      -1,    22,   144,    83,    -1,    31,    83,    -1,    32,    83,
      -1,    33,     3,    83,    -1,    -1,   145,    -1,   147,    -1,
     145,    84,   147,    -1,    -1,   147,    -1,   148,    -1,   159,
      63,   147,    -1,   159,    53,   147,    -1,   159,    54,   147,
      -1,   159,    55,   147,    -1,   159,    56,   147,    -1,   159,
      57,   147,    -1,   159,    58,   147,    -1,   159,    59,   147,
      -1,   159,    60,   147,    -1,   159,    61,   147,    -1,   159,
      62,   147,    -1,   149,    -1,   149,    64,   145,    65,   148,
      -1,   150,    -1,   149,    52,   150,    -1,   151,    -1,   150,
      51,   151,    -1,   152,    -1,   151,    66,   152,    -1,   153,
      -1,   152,    67,   153,    -1,   154,    -1,   153,    68,   154,
      -1,   155,    -1,   154,    49,   155,    -1,   154,    50,   155,
      -1,   156,    -1,   155,    69,   156,    -1,   155,    70,   156,
      -1,   155,    47,   156,    -1,   155,    48,   156,    -1,   157,
      -1,   156,    45,   157,    -1,   156,    46,   157,    -1,   158,
      -1,   157,    71,   158,    -1,   157,    72,   158,    -1,   159,
      -1,   158,    73,   159,    -1,   158,    74,   159,    -1,   158,
      75,   159,    -1,   160,    -1,    43,   159,    -1,    44,   159,
      -1,    71,   159,    -1,    72,   159,    -1,    76,   159,    -1,
      77,   159,    -1,    40,   159,    -1,    40,    78,   104,    79,
      -1,   163,    -1,   160,    78,   161,    79,    -1,   160,    80,
     145,    81,    -1,   160,    82,     3,    -1,   160,    42,     3,
      -1,   160,    43,    -1,   160,    44,    -1,    -1,   162,    -1,
     147,    -1,   162,    84,   147,    -1,     3,    -1,     6,    -1,
       7,    -1,     8,    -1,     5,    -1,    78,   145,    79,    -1,
     147,    -1,    85,   165,    86,    -1,    -1,   166,    -1,   164,
      -1,   167,    -1,   166,    84,   164,    -1,   166,    84,   167,
      -1,    82,     3,    63,   164,    -1,    80,   170,    81,    63,
     164,    -1,   168,    63,   164,    -1,   169,    -1,   168,   169,
      -1,    82,     3,    -1,    80,   170,    81,    -1,    80,   170,
      41,   170,    81,    -1,   148,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   196,   196,   198,   202,   211,   212,   213,   214,   222,
     232,   243,   253,   265,   274,   283,   296,   308,   309,   313,
     314,   318,   319,   324,   342,   345,   347,   351,   352,   356,
     357,   358,   362,   363,   367,   368,   369,   370,   374,   375,
     379,   380,   381,   385,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   405,   406,   410,   411,
     422,   429,   440,   441,   442,   443,   444,   445,   448,   450,
     454,   455,   459,   463,   464,   468,   469,   470,   474,   475,
     476,   479,   481,   485,   486,   490,   491,   496,   499,   501,
     505,   506,   507,   508,   512,   513,   514,   515,   516,   519,
     521,   525,   526,   529,   531,   536,   537,   547,   548,   558,
     565,   575,   576,   580,   581,   585,   586,   587,   592,   593,
     598,   599,   600,   601,   602,   606,   610,   611,   615,   616,
     620,   628,   636,   644,   652,   661,   663,   672,   685,   686,
     691,   695,   696,   697,   698,   704,   705,   709,   710,   711,
     715,   716,   717,   721,   722,   723,   724,   729,   730,   734,
     735,   739,   740,   744,   745,   746,   747,   748,   749,   750,
     751,   752,   753,   754,   755,   759,   760,   764,   765,   769,
     770,   774,   775,   779,   780,   784,   785,   789,   790,   791,
     795,   796,   797,   798,   799,   803,   804,   805,   809,   810,
     811,   815,   816,   817,   818,   822,   823,   824,   825,   826,
     827,   828,   829,   830,   834,   835,   839,   840,   841,   842,
     843,   847,   848,   852,   853,   857,   858,   859,   860,   861,
     862,   867,   868,   872,   873,   877,   878,   879,   880,   884,
     885,   886,   891,   892,   896,   897,   898,   902
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
  "']'", "'.'", "';'", "','", "'{'", "'}'", "$accept", "translation_unit",
  "external_declaration", "simple_function_definition",
  "function_declspec", "simple_param_list_opt", "simple_param_list",
  "simple_param", "declaration", "init_declarator_list_opt",
  "init_declarator_list", "init_declarator", "declaration_specifiers",
  "declaration_specifier", "storage_class_specifier", "type_qualifier",
  "function_specifier", "type_specifier", "star_list_opt", "star_list",
  "array_dims", "struct_or_union_specifier", "struct_declaration_list_opt",
  "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "enum_specifier",
  "enumerator_list_opt", "enumerator_list", "enumerator", "declarator",
  "pointer_opt", "pointer", "direct_declarator", "identifier_list_opt",
  "identifier_list", "parameter_type_list_opt", "fp_param_list_opt",
  "fp_param_list", "fp_param", "parameter_type_list", "parameter_list",
  "parameter_declaration", "function_definition", "statement",
  "compound_statement", "block_item_list_opt", "block_item_list",
  "block_item", "sdecl_list", "sdecl", "sdir", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement",
  "expression_opt", "expression", "assignment_expression_opt",
  "assignment_expression", "conditional_expression",
  "logical_or_expression", "logical_and_expression",
  "inclusive_or_expression", "exclusive_or_expression", "and_expression",
  "equality_expression", "relational_expression", "shift_expression",
  "additive_expression", "multiplicative_expression", "unary_expression",
  "postfix_expression", "argument_expression_list_opt",
  "argument_expression_list", "primary_expression", "initializer",
  "initializer_list_opt", "initializer_list", "designated_initializer",
  "designation", "designator", "constant_expression", 0
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
      91,    93,    46,    59,    44,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    88,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    90,    91,    91,    92,
      92,    93,    93,    94,    95,    96,    96,    97,    97,    98,
      98,    98,    99,    99,   100,   100,   100,   100,   101,   101,
     102,   102,   102,   103,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   105,   105,   106,   106,
     107,   107,   108,   108,   108,   108,   108,   108,   109,   109,
     110,   110,   111,   112,   112,   113,   113,   113,   114,   114,
     114,   115,   115,   116,   116,   117,   117,   118,   119,   119,
     120,   120,   120,   120,   121,   121,   121,   121,   121,   122,
     122,   123,   123,   124,   124,   125,   125,   126,   126,   127,
     127,   128,   128,   129,   129,   130,   130,   130,   131,   131,
     132,   132,   132,   132,   132,   133,   134,   134,   135,   135,
     136,   136,   136,   136,   136,   136,   136,   136,   137,   137,
     138,   139,   139,   139,   139,   140,   140,   141,   141,   141,
     142,   142,   142,   143,   143,   143,   143,   144,   144,   145,
     145,   146,   146,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   148,   148,   149,   149,   150,
     150,   151,   151,   152,   152,   153,   153,   154,   154,   154,
     155,   155,   155,   155,   155,   156,   156,   156,   157,   157,
     157,   158,   158,   158,   158,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   160,   160,   160,   160,   160,   160,
     160,   161,   161,   162,   162,   163,   163,   163,   163,   163,
     163,   164,   164,   165,   165,   166,   166,   166,   166,   167,
     167,   167,   168,   168,   169,   169,   169,   170
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     6,     2,     1,     1,     6,     5,
       6,    11,    12,     4,     6,     7,     6,     1,     1,     0,
       1,     1,     3,     3,     2,     0,     1,     1,     3,     1,
       3,     3,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     2,
       3,     4,     5,     5,     4,     4,     2,     2,     0,     1,
       1,     2,     3,     1,     3,     1,     2,     3,     5,     4,
       2,     0,     1,     1,     3,     1,     3,     2,     0,     1,
       1,     2,     2,     3,     1,     3,     4,     4,     4,     0,
       1,     1,     3,     0,     1,     0,     1,     1,     3,     2,
       3,     1,     3,     1,     3,     2,     1,     2,     3,     3,
       1,     1,     1,     1,     1,     3,     0,     1,     1,     2,
       4,     6,     6,     7,     6,     1,     5,     6,     0,     3,
       2,     1,     3,     4,     4,     1,     2,     5,     7,     5,
       5,     7,     9,     3,     2,     2,     3,     0,     1,     1,
       3,     0,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     5,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     2,     2,     2,     2,
       2,     2,     2,     4,     1,     4,     4,     3,     3,     2,
       2,     0,     1,     1,     3,     1,     1,     1,     1,     1,
       3,     1,     3,     0,     1,     1,     1,     3,     3,     4,
       5,     3,     1,     2,     2,     3,     5,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    55,    44,    45,    46,    47,    48,    49,
      50,    51,    52,     0,     0,     0,     0,    40,    41,    42,
      43,    38,    39,     3,     6,     0,     0,    18,    32,    34,
      36,    37,    35,    53,    54,     7,    66,    68,    67,    68,
      80,    81,    56,     0,     5,    90,    24,    26,    27,    33,
      35,    29,     0,    89,    58,     0,    57,     0,     0,    68,
      88,     0,    69,    70,    68,     0,    81,    85,     0,    82,
      83,    58,     0,    19,    91,    92,    88,     0,   126,   118,
      94,    88,    87,   141,    56,   140,    59,   119,    56,     0,
       0,     0,    73,    75,    64,    71,     0,    65,     0,     0,
      79,     0,     0,     0,     0,    20,    21,    56,    93,    28,
      29,   225,   229,   226,   227,   228,     0,     0,     0,     0,
       0,     0,     0,     0,   233,    30,   163,   175,   177,   179,
     181,   183,   185,   187,   190,   195,   198,   201,   205,   214,
      31,     0,   157,     0,     0,     0,     0,     0,     0,     0,
       0,   145,    56,   135,   120,     0,   127,   128,   121,   122,
     123,   124,     0,   159,     0,    99,   161,     0,     0,    13,
       0,     0,     0,   105,   161,   138,    62,   247,   201,    76,
      72,    88,     0,    63,    78,    86,    84,     9,     0,     0,
       0,     0,     0,     0,   212,   206,   207,   208,   209,   210,
     211,     0,     0,     0,   231,   235,     0,   234,   236,     0,
     242,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   219,   220,   221,     0,     0,    56,     0,   158,
       0,     0,   157,     0,     0,   154,   155,     0,     0,     0,
     125,   129,   146,     0,    95,   101,    88,    35,     0,   100,
       0,   104,   111,   113,     0,   162,     0,     0,     0,     0,
       0,   141,   142,    56,     0,   106,   107,     0,     0,    74,
      77,    10,     0,    16,    22,    23,     0,   230,     0,   244,
     232,     0,     0,     0,     0,   243,   178,     0,   180,   182,
     184,   186,   188,   189,   193,   194,   191,   192,   196,   197,
     199,   200,   202,   203,   204,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   164,   218,   223,     0,   222,
       0,   217,    56,     0,   153,     0,     0,     0,     0,     0,
     156,   141,    56,   160,   115,   117,    98,     0,    97,     0,
      96,     4,    14,    60,     0,     0,   109,   144,     0,   143,
       8,    56,     0,     0,   213,     0,   245,     0,   237,   238,
     241,     0,   244,     0,   215,     0,   216,     0,     0,     0,
       0,   157,     0,     0,     0,   130,     0,   138,   102,   112,
     114,    15,    61,   110,   108,   139,   105,     0,     0,     0,
     239,   245,   176,   224,     0,   136,   147,   150,     0,     0,
     149,     0,     0,     0,     0,     0,   105,   246,   240,   137,
       0,   157,     0,   131,   132,     0,   134,     0,     0,   148,
       0,   151,   133,    11,     0,     0,    12,   152
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    23,    24,    25,   104,   105,   106,    26,    46,
      47,    48,    60,    28,    29,    30,    31,    50,   171,    56,
     170,    33,    61,    62,    63,    91,    92,    34,    68,    69,
      70,    93,    52,    53,    82,   268,   269,   270,   284,   285,
     286,   271,   272,   273,    35,   153,   154,   155,   156,   157,
     288,    58,    85,   158,   159,   160,   161,   248,   162,   274,
     163,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   338,   339,   139,   140,   206,   207,
     208,   209,   210,   179
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -277
static const yytype_int16 yypact[] =
{
    -277,   732,  -277,  -277,  -277,  -277,  -277,  -277,  -277,  -277,
    -277,  -277,  -277,    11,    14,    22,   549,  -277,  -277,  -277,
    -277,  -277,  -277,  -277,  -277,    37,   -30,   585,  -277,  -277,
    -277,  -277,    18,  -277,  -277,  -277,    15,   843,    58,   843,
      85,   191,   140,   149,  -277,    12,  -277,   145,  -277,  -277,
    -277,    62,    23,  -277,    54,    27,   170,   174,   177,   843,
     692,   180,   843,  -277,   843,   181,   191,   207,   185,   192,
    -277,  -277,    34,   549,   205,  -277,   205,   225,   424,  -277,
    -277,   205,    59,    71,   140,   127,  -277,  -277,   140,   204,
     478,    44,  -277,   226,  -277,  -277,   208,  -277,   212,   478,
    -277,   191,    88,   220,   221,   215,  -277,   140,  -277,  -277,
     244,  -277,  -277,  -277,  -277,  -277,   603,   478,   478,   478,
     478,   478,   478,   478,    26,  -277,  -277,   -25,   257,   243,
     247,   248,   103,    97,   178,   154,   146,   629,    78,  -277,
    -277,   549,   478,   233,   237,   239,   508,   240,   236,   238,
     319,  -277,   140,  -277,  -277,   241,   424,  -277,  -277,  -277,
    -277,  -277,   151,  -277,   245,   807,   478,   225,   317,  -277,
     -35,    35,   246,   549,   478,  -277,  -277,  -277,  -277,  -277,
    -277,   126,   478,  -277,  -277,  -277,  -277,  -277,   121,   323,
     174,   549,   326,   622,  -277,  -277,  -277,  -277,  -277,  -277,
    -277,     8,   478,   327,  -277,  -277,   249,   250,  -277,    79,
    -277,   478,   478,   478,   478,   478,   478,   478,   478,   478,
     478,   478,   478,   478,   478,   478,   478,   478,   478,   478,
     478,   478,   478,   478,   478,   478,   478,   478,   478,   478,
     478,   328,  -277,  -277,   478,   478,   329,   397,   253,   254,
     478,   478,   478,   308,   478,  -277,  -277,   256,    41,   258,
    -277,  -277,  -277,   478,  -277,  -277,    45,   140,   261,   259,
     262,  -277,   260,  -277,   265,  -277,   264,   266,   267,   225,
     344,  -277,  -277,   140,   272,   269,  -277,   273,   153,  -277,
    -277,  -277,   160,  -277,  -277,  -277,   276,  -277,    -6,   293,
    -277,    26,   225,   478,   354,  -277,   257,    73,   243,   247,
     248,   103,    97,    97,   178,   178,   178,   178,   154,   154,
     146,   146,  -277,  -277,  -277,  -277,  -277,  -277,  -277,  -277,
    -277,  -277,  -277,  -277,  -277,  -277,  -277,  -277,   281,   277,
     133,  -277,   140,   359,  -277,   114,   116,   280,   286,   118,
    -277,   106,   140,  -277,  -277,  -277,  -277,   365,  -277,   768,
    -277,  -277,  -277,  -277,   287,   288,   368,  -277,   549,  -277,
    -277,   140,   294,   162,  -277,   478,  -277,   225,  -277,  -277,
    -277,    -5,  -277,   478,  -277,   478,  -277,   370,   292,   508,
     508,   478,   478,   508,   225,  -277,    83,  -277,  -277,  -277,
    -277,  -277,  -277,  -277,  -277,  -277,   549,   315,   313,   225,
    -277,  -277,  -277,  -277,   312,  -277,   372,  -277,   314,   124,
    -277,   316,   320,   225,   167,   321,   549,  -277,  -277,  -277,
     508,   478,   335,  -277,  -277,   336,  -277,   337,   325,  -277,
     342,  -277,  -277,  -277,   339,   508,  -277,  -277
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -277,  -277,  -277,  -277,  -277,  -277,  -277,   211,  -277,  -277,
    -277,   322,     0,   -19,  -277,    -2,  -277,    -1,   -29,  -277,
     -96,  -277,    77,  -277,   361,  -277,   278,  -277,   358,  -277,
     347,    -8,  -277,    -3,  -277,  -277,  -277,  -277,  -276,  -277,
      86,  -277,  -277,    67,  -277,  -141,   -41,  -277,  -277,   297,
      61,   -66,  -277,  -277,  -277,  -277,  -277,  -243,  -119,   289,
     -57,   -88,  -277,   251,   252,   255,   263,   271,    39,   -10,
      40,    49,   163,  -277,  -277,  -277,  -277,  -117,  -277,  -277,
     159,  -277,   268,   -87
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -117
static const yytype_int16 yytable[] =
{
      32,    27,   177,    55,   201,   253,   188,   205,    49,   347,
      79,   177,   185,    72,    36,    42,    87,    38,   172,    51,
     125,   -17,   175,   249,    57,    40,    80,   211,   279,   111,
      83,   112,   113,   114,   115,   375,   375,   102,   281,   212,
      43,    49,    75,    74,   351,   280,    17,    18,    19,     3,
     277,    75,    74,    44,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,   116,   204,   110,   117,
     118,   108,   107,   164,   201,   376,   411,   152,   192,    17,
      18,    19,    20,    21,    22,    45,   259,   297,    17,    18,
      19,    54,   263,   307,   177,   290,    37,   119,   120,    39,
      59,    81,   121,   122,   123,    84,   202,    41,   203,   275,
     276,   124,   103,    84,   177,   298,    65,   275,    45,    84,
     241,   242,   243,   258,  -116,    77,   340,   180,   181,  -116,
     425,   345,   346,   249,   167,   349,    89,   165,   383,   166,
     247,    96,   302,    64,   219,   220,   423,    78,   418,   293,
     438,   168,   217,   218,   169,   152,   244,   263,   245,   303,
     246,   304,   364,   280,   267,   266,   221,   222,   168,   394,
      66,   187,   283,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   378,   380,   168,   337,   440,   395,
     107,    90,   296,   389,    67,   390,   373,   393,   263,    45,
     263,   280,   263,   432,   291,   173,   353,   174,   263,   314,
     315,   316,   317,    71,   386,   177,   381,   263,   343,   227,
     228,   229,   204,   223,   224,   225,   226,    73,   111,    76,
     112,   113,   114,   115,   262,   263,   370,   371,   355,   372,
     168,   407,   280,    86,   204,   204,   342,    49,   416,   417,
     436,   371,   420,   178,   366,   396,   312,   313,   354,    78,
     410,    88,   178,   318,   319,   116,    94,    97,   117,   118,
      99,   100,   249,   419,   320,   321,   101,   422,    45,   194,
     195,   196,   197,   198,   199,   200,   397,   177,   408,   439,
     176,   182,   428,   189,   183,   412,   119,   120,   184,   191,
     190,   121,   122,   123,   447,   405,   435,    77,   213,   214,
     124,   250,   249,   387,   215,   251,   216,   252,   254,   255,
     204,   256,   257,   278,   264,   282,   292,   260,   413,   295,
     299,   336,   341,   348,   301,   300,   344,   421,   263,   350,
     356,   358,   352,   357,   359,   178,   360,   361,   363,   362,
     365,   367,   204,   368,   369,   374,   377,   382,   267,   266,
     384,   385,   388,   391,   392,   178,   204,   283,   398,   402,
     401,   403,   406,   414,   178,   415,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     322,   323,   324,   426,   427,   429,   430,   431,   109,   433,
     437,     3,   294,   434,   444,   283,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,   441,   442,
     443,   445,   446,    95,    98,   283,   400,   111,     3,   112,
     113,   114,   115,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,   141,   142,   143,   186,   144,
     145,   146,   147,   261,   404,   148,   149,   150,   424,   289,
     379,     0,   306,   287,   116,   308,   178,   117,   118,   309,
      71,     0,     0,     0,     0,     0,     0,   305,   310,     0,
       0,   111,     0,   112,   113,   114,   115,   311,     0,     0,
       0,     0,     0,     0,     0,   119,   120,     0,     0,     0,
     121,   122,   123,     0,     0,     0,     0,   151,     0,    78,
       0,   111,     0,   112,   113,   114,   115,     0,   116,     0,
       0,   117,   118,     0,     0,     0,     0,     0,     0,     0,
     142,   143,     0,   144,   145,   146,   147,     0,   178,   148,
     149,   150,     0,     0,     0,     0,   178,     0,   116,   119,
     120,   117,   118,     3,   121,   122,   123,     0,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,     0,     0,     0,   121,   122,   123,     0,     0,     3,
       0,   151,     0,    78,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,   111,     0,   112,   113,
     114,   115,     0,     0,     0,     0,     0,     0,     0,    17,
      18,    19,    20,    21,    22,   111,     3,   112,   113,   114,
     115,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,   116,     0,     0,   117,   118,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    45,     0,
       0,     0,   116,   -88,     0,   117,   118,     0,   -25,     0,
       0,     0,     0,     0,   119,   120,     0,     0,     0,   121,
     122,   193,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   119,   120,     0,     3,     0,   121,   122,
     123,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    17,    18,    19,    20,
      21,    22,     2,     0,     0,     0,     3,     0,     0,     0,
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,     0,    45,    17,    18,    19,    20,
      21,    22,     3,     0,     0,     0,     0,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    17,    18,    19,    20,    21,    22,     0,   399,
     265,     3,     0,     0,     0,     0,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    17,    18,    19,    20,    21,    22,     3,     0,     0,
       0,     0,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    17,    18,    19,
      20,    21,    22
};

static const yytype_int16 yycheck[] =
{
       1,     1,    90,    32,   123,   146,   102,   124,    27,   252,
      51,    99,    99,    42,     3,    16,    57,     3,    84,    27,
      77,     3,    88,   142,    32,     3,     3,    52,    63,     3,
       3,     5,     6,     7,     8,    41,    41,     3,     3,    64,
       3,    60,    45,    45,     3,    80,    34,    35,    36,     4,
     167,    54,    54,    83,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    40,   124,    76,    43,
      44,    74,    73,    81,   193,    81,    81,    78,   107,    34,
      35,    36,    37,    38,    39,    73,   152,    79,    34,    35,
      36,    73,    84,   212,   182,   182,    85,    71,    72,    85,
      85,    78,    76,    77,    78,    78,    80,    85,    82,   166,
     167,    85,    78,    78,   202,   202,    39,   174,    73,    78,
      42,    43,    44,   152,    79,    63,   245,    83,    84,    84,
     406,   250,   251,   252,    63,   254,    59,    78,    65,    80,
     141,    64,    63,    85,    47,    48,    63,    85,   391,   190,
     426,    80,    49,    50,    83,   156,    78,    84,    80,    80,
      82,    82,   279,    80,   165,   165,    69,    70,    80,    63,
      85,    83,   173,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   301,   302,    80,   244,   431,    83,
     191,    65,   193,    79,     3,    79,   292,    79,    84,    73,
      84,    80,    84,    79,    83,    78,   263,    80,    84,   219,
     220,   221,   222,    73,    81,   303,   303,    84,   247,    73,
      74,    75,   279,    45,    46,    71,    72,    78,     3,    84,
       5,     6,     7,     8,    83,    84,    83,    84,   267,    79,
      80,    79,    80,    73,   301,   302,   247,   266,   389,   390,
      83,    84,   393,    90,   283,   351,   217,   218,   266,    85,
     377,    84,    99,   223,   224,    40,    86,    86,    43,    44,
      63,    86,   391,   392,   225,   226,    84,   394,    73,   116,
     117,   118,   119,   120,   121,   122,   352,   375,   375,   430,
      86,    65,   409,    73,    86,   383,    71,    72,    86,    84,
      79,    76,    77,    78,   445,   371,   423,    63,    51,    66,
      85,    78,   431,   342,    67,    78,    68,    78,    78,    83,
     377,    83,     3,     6,    79,    79,     3,    86,   385,     3,
       3,     3,     3,    25,    84,    86,    83,   394,    84,    83,
      79,    79,    84,    84,    84,   182,    81,    83,    81,    83,
       6,    79,   409,    84,    81,    79,    63,     3,   359,   359,
      79,    84,     3,    83,    78,   202,   423,   368,     3,    81,
      83,     3,    78,     3,   211,    83,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,    78,    81,    83,    24,    83,    76,    83,
      79,     4,   191,    83,    79,   406,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    83,    83,
      83,    79,    83,    62,    66,   426,   359,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,   101,    25,
      26,    27,    28,   156,   368,    31,    32,    33,   397,   181,
     301,    -1,   211,   174,    40,   213,   303,    43,    44,   214,
      73,    -1,    -1,    -1,    -1,    -1,    -1,   209,   215,    -1,
      -1,     3,    -1,     5,     6,     7,     8,   216,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,
      76,    77,    78,    -1,    -1,    -1,    -1,    83,    -1,    85,
      -1,     3,    -1,     5,     6,     7,     8,    -1,    40,    -1,
      -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    -1,    25,    26,    27,    28,    -1,   375,    31,
      32,    33,    -1,    -1,    -1,    -1,   383,    -1,    40,    71,
      72,    43,    44,     4,    76,    77,    78,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      72,    -1,    -1,    -1,    76,    77,    78,    -1,    -1,     4,
      -1,    83,    -1,    85,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,     3,    -1,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    40,    -1,    -1,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,
      -1,    -1,    40,    78,    -1,    43,    44,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    76,
      77,    78,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    71,    72,    -1,     4,    -1,    76,    77,
      78,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,     0,    -1,    -1,    -1,     4,    -1,    -1,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    34,    35,    36,    37,
      38,    39,     4,    -1,    -1,    -1,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    -1,    41,
       3,     4,    -1,    -1,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,     4,    -1,    -1,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    88,     0,     4,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    34,    35,    36,
      37,    38,    39,    89,    90,    91,    95,    99,   100,   101,
     102,   103,   104,   108,   114,   131,     3,    85,     3,    85,
       3,    85,   104,     3,    83,    73,    96,    97,    98,   100,
     104,   118,   119,   120,    73,   105,   106,   118,   138,    85,
      99,   109,   110,   111,    85,   109,    85,     3,   115,   116,
     117,    73,   105,    78,   102,   120,    84,    63,    85,   133,
       3,    78,   121,     3,    78,   139,    73,   133,    84,   109,
      65,   112,   113,   118,    86,   111,   109,    86,   115,    63,
      86,    84,     3,    78,    92,    93,    94,   104,   120,    98,
     118,     3,     5,     6,     7,     8,    40,    43,    44,    71,
      72,    76,    77,    78,    85,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   163,
     164,    21,    22,    23,    25,    26,    27,    28,    31,    32,
      33,    83,   104,   132,   133,   134,   135,   136,   140,   141,
     142,   143,   145,   147,   118,    78,    80,    63,    80,    83,
     107,   105,   138,    78,    80,   138,    86,   148,   159,   170,
      83,    84,    65,    86,    86,   170,   117,    83,   107,    73,
      79,    84,   105,    78,   159,   159,   159,   159,   159,   159,
     159,   145,    80,    82,   147,   164,   165,   166,   167,   168,
     169,    52,    64,    51,    66,    67,    68,    49,    50,    47,
      48,    69,    70,    45,    46,    71,    72,    73,    74,    75,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    42,    43,    44,    78,    80,    82,   104,   144,   145,
      78,    78,    78,   132,    78,    83,    83,     3,   105,   138,
      86,   136,    83,    84,    79,     3,    99,   104,   122,   123,
     124,   128,   129,   130,   146,   147,   147,   164,     6,    63,
      80,     3,    79,   104,   125,   126,   127,   146,   137,   113,
     170,    83,     3,   133,    94,     3,   104,    79,   170,     3,
      86,    84,    63,    80,    82,   169,   150,   145,   151,   152,
     153,   154,   155,   155,   156,   156,   156,   156,   157,   157,
     158,   158,   159,   159,   159,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,     3,   147,   161,   162,
     145,     3,   104,   105,    83,   145,   145,   144,    25,   145,
      83,     3,    84,   147,   118,   105,    79,    84,    79,    84,
      81,    83,    83,    81,   164,     6,   105,    79,    84,    81,
      83,    84,    79,   107,    79,    41,    81,    63,   164,   167,
     164,   170,     3,    65,    79,    84,    81,   105,     3,    79,
      79,    83,    78,    79,    63,    83,   107,   138,     3,    41,
     130,    83,    81,     3,   127,   138,    78,    79,   170,    63,
     164,    81,   148,   147,     3,    83,   132,   132,   144,   145,
     132,   147,   164,    63,   137,   125,    78,    81,   164,    83,
      24,    83,    79,    83,    83,   164,    83,    79,   125,   132,
     144,    83,    83,    83,    79,    79,    83,   132
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
#line 130 "c.y"
	{ free((yyvaluep->sval)); };
#line 1792 "parser.c"
	break;
      case 5: /* "STRING_LITERAL" */
#line 130 "c.y"
	{ free((yyvaluep->sval)); };
#line 1797 "parser.c"
	break;
      case 6: /* "INTEGER_CONSTANT" */
#line 130 "c.y"
	{ free((yyvaluep->sval)); };
#line 1802 "parser.c"
	break;
      case 7: /* "FLOAT_CONSTANT" */
#line 130 "c.y"
	{ free((yyvaluep->sval)); };
#line 1807 "parser.c"
	break;
      case 8: /* "CHAR_CONSTANT" */
#line 130 "c.y"
	{ free((yyvaluep->sval)); };
#line 1812 "parser.c"
	break;
      case 104: /* "type_specifier" */
#line 130 "c.y"
	{ free((yyvaluep->sval)); };
#line 1817 "parser.c"
	break;
      case 105: /* "star_list_opt" */
#line 130 "c.y"
	{ free((yyvaluep->sval)); };
#line 1822 "parser.c"
	break;
      case 106: /* "star_list" */
#line 130 "c.y"
	{ free((yyvaluep->sval)); };
#line 1827 "parser.c"
	break;
      case 107: /* "array_dims" */
#line 130 "c.y"
	{ free((yyvaluep->sval)); };
#line 1832 "parser.c"
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
#line 203 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (6)].sval)) + strlen((yyvsp[(2) - (6)].sval) ? (yyvsp[(2) - (6)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, (yyvsp[(1) - (6)].sval)); if((yyvsp[(2) - (6)].sval)) strcat(t, (yyvsp[(2) - (6)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(1) - (6)].sval), (yyvsp[(3) - (6)].sval), (yyvsp[(5) - (6)].node));
      free(t); free((yyvsp[(1) - (6)].sval)); free((yyvsp[(2) - (6)].sval));
      ast_add(d);
    ;}
    break;

  case 8:
#line 215 "c.y"
    {
      char* base=(yyvsp[(1) - (6)].sval);
      char* t1=compose_type(base,(yyvsp[(2) - (6)].dstr)); AstNode* d1=ast_decl_new(t1,(yyvsp[(2) - (6)].dstr)->name,NULL); free(t1); dstr_free((yyvsp[(2) - (6)].dstr)); ast_add(d1);
      char* t2=compose_type(base,(yyvsp[(4) - (6)].dstr)); AstNode* d2=ast_decl_new(t2,(yyvsp[(4) - (6)].dstr)->name,NULL); free(t2); dstr_free((yyvsp[(4) - (6)].dstr)); ast_add(d2);
      if((yyvsp[(5) - (6)].nlist)){ for(long i=0;i<(yyvsp[(5) - (6)].nlist)->n;i++){ DStr* ds=(DStr*)(yyvsp[(5) - (6)].nlist)->a[i]; char* tx=compose_type(base,ds); AstNode* dn=ast_decl_new(tx, ds->name,NULL); free(tx); dstr_free(ds); ast_add(dn);} free((yyvsp[(5) - (6)].nlist)->a); free((yyvsp[(5) - (6)].nlist)); }
      free(base);
    ;}
    break;

  case 9:
#line 223 "c.y"
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

  case 10:
#line 233 "c.y"
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

  case 11:
#line 244 "c.y"
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

  case 12:
#line 254 "c.y"
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

  case 13:
#line 266 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (4)].sval)) + strlen((yyvsp[(2) - (4)].sval) ? (yyvsp[(2) - (4)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, (yyvsp[(1) - (4)].sval)); if((yyvsp[(2) - (4)].sval)) strcat(t, (yyvsp[(2) - (4)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].sval), NULL);
      free(t); free((yyvsp[(1) - (4)].sval)); free((yyvsp[(2) - (4)].sval));
      ast_add(d);
    ;}
    break;

  case 14:
#line 275 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (6)].sval)) + strlen((yyvsp[(2) - (6)].sval) ? (yyvsp[(2) - (6)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, (yyvsp[(1) - (6)].sval)); if((yyvsp[(2) - (6)].sval)) strcat(t, (yyvsp[(2) - (6)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(1) - (6)].sval), (yyvsp[(3) - (6)].sval), (yyvsp[(5) - (6)].node));
      free(t); free((yyvsp[(1) - (6)].sval)); free((yyvsp[(2) - (6)].sval));
      ast_add(d);
    ;}
    break;

  case 15:
#line 284 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (7)].sval)) + strlen((yyvsp[(2) - (7)].sval) ? (yyvsp[(2) - (7)].sval) : "") + strlen((yyvsp[(4) - (7)].sval) ? (yyvsp[(4) - (7)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, (yyvsp[(1) - (7)].sval)); if((yyvsp[(2) - (7)].sval)) strcat(t, (yyvsp[(2) - (7)].sval)); if((yyvsp[(4) - (7)].sval)) strcat(t, (yyvsp[(4) - (7)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(1) - (7)].sval), (yyvsp[(3) - (7)].sval), (yyvsp[(6) - (7)].node));
      free(t); free((yyvsp[(1) - (7)].sval)); free((yyvsp[(2) - (7)].sval)); free((yyvsp[(4) - (7)].sval));
      ast_add(d);
    ;}
    break;

  case 16:
#line 297 "c.y"
    {
      AstFunction* f = ast_function_new((yyvsp[(2) - (6)].sval),
        (yyvsp[(4) - (6)].plist) ? (yyvsp[(4) - (6)].plist)->a : NULL,
        (yyvsp[(4) - (6)].plist) ? (yyvsp[(4) - (6)].plist)->n : 0,
        (yyvsp[(6) - (6)].node));
      if((yyvsp[(4) - (6)].plist)) { free((yyvsp[(4) - (6)].plist)); }
      ast_add((AstNode*)f);
    ;}
    break;

  case 19:
#line 313 "c.y"
    { (yyval.plist) = NULL; ;}
    break;

  case 20:
#line 314 "c.y"
    { (yyval.plist) = (yyvsp[(1) - (1)].plist); ;}
    break;

  case 21:
#line 318 "c.y"
    { (yyval.plist) = (yyvsp[(1) - (1)].plist); ;}
    break;

  case 22:
#line 319 "c.y"
    { (yyval.plist) = plist_merge((yyvsp[(1) - (3)].plist), (yyvsp[(3) - (3)].plist)); ;}
    break;

  case 23:
#line 325 "c.y"
    {
      ParamList* p = plist_new();
      size_t nt = strlen((yyvsp[(1) - (3)].sval)) + strlen((yyvsp[(2) - (3)].sval) ? (yyvsp[(2) - (3)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) {
        t[0] = '\0';
        strcat(t, (yyvsp[(1) - (3)].sval));
        if((yyvsp[(2) - (3)].sval)) strcat(t, (yyvsp[(2) - (3)].sval));
      }
      plist_push(p, t ? t : (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
      free(t);
      (yyval.plist) = p;
    ;}
    break;

  case 44:
#line 390 "c.y"
    { (yyval.sval) = strdup("void"); ;}
    break;

  case 45:
#line 391 "c.y"
    { (yyval.sval) = strdup("char"); ;}
    break;

  case 46:
#line 392 "c.y"
    { (yyval.sval) = strdup("short"); ;}
    break;

  case 47:
#line 393 "c.y"
    { (yyval.sval) = strdup("int"); ;}
    break;

  case 48:
#line 394 "c.y"
    { (yyval.sval) = strdup("long"); ;}
    break;

  case 49:
#line 395 "c.y"
    { (yyval.sval) = strdup("signed"); ;}
    break;

  case 50:
#line 396 "c.y"
    { (yyval.sval) = strdup("unsigned"); ;}
    break;

  case 51:
#line 397 "c.y"
    { (yyval.sval) = strdup("float"); ;}
    break;

  case 52:
#line 398 "c.y"
    { (yyval.sval) = strdup("double"); ;}
    break;

  case 53:
#line 399 "c.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 54:
#line 400 "c.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 55:
#line 401 "c.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 56:
#line 405 "c.y"
    { (yyval.sval) = strdup(""); ;}
    break;

  case 57:
#line 406 "c.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 58:
#line 410 "c.y"
    { (yyval.sval) = strdup("*"); ;}
    break;

  case 59:
#line 411 "c.y"
    {
      size_t n = strlen((yyvsp[(1) - (2)].sval)) + 2;
      char* s = (char*)malloc(n);
      if(s) { strcpy(s, (yyvsp[(1) - (2)].sval)); strcat(s, "*"); }
      free((yyvsp[(1) - (2)].sval));
      (yyval.sval) = s;
    ;}
    break;

  case 60:
#line 422 "c.y"
    {
      size_t n = strlen((yyvsp[(2) - (3)].sval)) + 3; /* [ + num + ] + \0 */
      char* s = (char*)malloc(n);
      if(s) { s[0]='\0'; strcat(s, "["); strcat(s, (yyvsp[(2) - (3)].sval)); strcat(s, "]"); }
      free((yyvsp[(2) - (3)].sval));
      (yyval.sval) = s;
    ;}
    break;

  case 61:
#line 429 "c.y"
    {
      size_t n = strlen((yyvsp[(1) - (4)].sval)) + 1 + strlen((yyvsp[(3) - (4)].sval)) + 2 + 1;
      char* s = (char*)malloc(n);
      if(s) { strcpy(s, (yyvsp[(1) - (4)].sval)); strcat(s, "["); strcat(s, (yyvsp[(3) - (4)].sval)); strcat(s, "]"); }
      free((yyvsp[(1) - (4)].sval));
      free((yyvsp[(3) - (4)].sval));
      (yyval.sval) = s;
    ;}
    break;

  case 62:
#line 440 "c.y"
    { size_t n=strlen("struct ")+strlen((yyvsp[(2) - (5)].sval))+1; (yyval.sval)=(char*)malloc(n); if((yyval.sval)){ strcpy((yyval.sval), "struct "); strcat((yyval.sval), (yyvsp[(2) - (5)].sval));} ;}
    break;

  case 63:
#line 441 "c.y"
    { size_t n=strlen("union ")+strlen((yyvsp[(2) - (5)].sval))+1; (yyval.sval)=(char*)malloc(n); if((yyval.sval)){ strcpy((yyval.sval), "union "); strcat((yyval.sval), (yyvsp[(2) - (5)].sval));} ;}
    break;

  case 64:
#line 442 "c.y"
    { (yyval.sval) = strdup("struct"); ;}
    break;

  case 65:
#line 443 "c.y"
    { (yyval.sval) = strdup("union"); ;}
    break;

  case 66:
#line 444 "c.y"
    { size_t n=strlen("struct ")+strlen((yyvsp[(2) - (2)].sval))+1; (yyval.sval)=(char*)malloc(n); if((yyval.sval)){ strcpy((yyval.sval), "struct "); strcat((yyval.sval), (yyvsp[(2) - (2)].sval));} ;}
    break;

  case 67:
#line 445 "c.y"
    { size_t n=strlen("union ")+strlen((yyvsp[(2) - (2)].sval))+1; (yyval.sval)=(char*)malloc(n); if((yyval.sval)){ strcpy((yyval.sval), "union "); strcat((yyval.sval), (yyvsp[(2) - (2)].sval));} ;}
    break;

  case 78:
#line 474 "c.y"
    { size_t n=strlen("enum ")+strlen((yyvsp[(2) - (5)].sval))+1; (yyval.sval)=(char*)malloc(n); if((yyval.sval)){ strcpy((yyval.sval), "enum "); strcat((yyval.sval), (yyvsp[(2) - (5)].sval));} ;}
    break;

  case 79:
#line 475 "c.y"
    { (yyval.sval) = strdup("enum"); ;}
    break;

  case 80:
#line 476 "c.y"
    { size_t n=strlen("enum ")+strlen((yyvsp[(2) - (2)].sval))+1; (yyval.sval)=(char*)malloc(n); if((yyval.sval)){ strcpy((yyval.sval), "enum "); strcat((yyval.sval), (yyvsp[(2) - (2)].sval));} ;}
    break;

  case 105:
#line 536 "c.y"
    { (yyval.sval) = strdup("()"); ;}
    break;

  case 106:
#line 537 "c.y"
    {
      size_t n = strlen((yyvsp[(1) - (1)].sval)) + 3;
      char* s = (char*)malloc(n);
      if(s) { s[0]='\0'; strcat(s, "("); strcat(s, (yyvsp[(1) - (1)].sval)); strcat(s, ")"); }
      free((yyvsp[(1) - (1)].sval));
      (yyval.sval) = s;
    ;}
    break;

  case 107:
#line 547 "c.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 108:
#line 548 "c.y"
    {
      size_t n = strlen((yyvsp[(1) - (3)].sval)) + 2 + strlen((yyvsp[(3) - (3)].sval)) + 1;
      char* s = (char*)malloc(n);
      if(s) { strcpy(s, (yyvsp[(1) - (3)].sval)); strcat(s, ", "); strcat(s, (yyvsp[(3) - (3)].sval)); }
      free((yyvsp[(1) - (3)].sval)); free((yyvsp[(3) - (3)].sval));
      (yyval.sval) = s;
    ;}
    break;

  case 109:
#line 558 "c.y"
    {
      size_t n = strlen((yyvsp[(1) - (2)].sval)) + strlen((yyvsp[(2) - (2)].sval) ? (yyvsp[(2) - (2)].sval) : "") + 1;
      char* s = (char*)malloc(n);
      if(s) { s[0]='\0'; strcat(s, (yyvsp[(1) - (2)].sval)); if((yyvsp[(2) - (2)].sval)) strcat(s, (yyvsp[(2) - (2)].sval)); }
      (yyval.sval) = s;
      free((yyvsp[(1) - (2)].sval)); free((yyvsp[(2) - (2)].sval));
    ;}
    break;

  case 110:
#line 565 "c.y"
    {
      size_t n = strlen((yyvsp[(1) - (3)].sval)) + strlen((yyvsp[(2) - (3)].sval) ? (yyvsp[(2) - (3)].sval) : "") + 1;
      char* s = (char*)malloc(n);
      if(s) { s[0]='\0'; strcat(s, (yyvsp[(1) - (3)].sval)); if((yyvsp[(2) - (3)].sval)) strcat(s, (yyvsp[(2) - (3)].sval)); }
      (yyval.sval) = s;
      free((yyvsp[(1) - (3)].sval)); free((yyvsp[(2) - (3)].sval)); free((yyvsp[(3) - (3)].sval));
    ;}
    break;

  case 120:
#line 598 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 121:
#line 599 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 122:
#line 600 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 123:
#line 601 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 124:
#line 602 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 125:
#line 606 "c.y"
    { (yyval.node) = (AstNode*)ast_compound_new_with((yyvsp[(2) - (3)].nlist) ? (yyvsp[(2) - (3)].nlist)->a : NULL, (yyvsp[(2) - (3)].nlist) ? (yyvsp[(2) - (3)].nlist)->n : 0); if((yyvsp[(2) - (3)].nlist)) free((yyvsp[(2) - (3)].nlist)); ;}
    break;

  case 126:
#line 610 "c.y"
    { (yyval.nlist) = NULL; ;}
    break;

  case 127:
#line 611 "c.y"
    { (yyval.nlist) = (yyvsp[(1) - (1)].nlist); ;}
    break;

  case 128:
#line 615 "c.y"
    { (yyval.nlist) = (yyvsp[(1) - (1)].nlist); ;}
    break;

  case 129:
#line 616 "c.y"
    { (yyval.nlist) = nlist_merge((yyvsp[(1) - (2)].nlist), (yyvsp[(2) - (2)].nlist)); ;}
    break;

  case 130:
#line 620 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (4)].sval)) + strlen((yyvsp[(2) - (4)].sval) ? (yyvsp[(2) - (4)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, (yyvsp[(1) - (4)].sval)); if((yyvsp[(2) - (4)].sval)) strcat(t, (yyvsp[(2) - (4)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].sval), NULL);
      free(t); free((yyvsp[(1) - (4)].sval)); free((yyvsp[(2) - (4)].sval)); /* $3 freed by decl */
      (yyval.nlist) = nlist_from1(d);
    ;}
    break;

  case 131:
#line 628 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (6)].sval)) + strlen((yyvsp[(2) - (6)].sval) ? (yyvsp[(2) - (6)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, (yyvsp[(1) - (6)].sval)); if((yyvsp[(2) - (6)].sval)) strcat(t, (yyvsp[(2) - (6)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(1) - (6)].sval), (yyvsp[(3) - (6)].sval), (yyvsp[(5) - (6)].node));
      free(t); free((yyvsp[(1) - (6)].sval)); free((yyvsp[(2) - (6)].sval));
      (yyval.nlist) = nlist_from1(d);
    ;}
    break;

  case 132:
#line 636 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (6)].sval)) + strlen((yyvsp[(2) - (6)].sval) ? (yyvsp[(2) - (6)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, (yyvsp[(1) - (6)].sval)); if((yyvsp[(2) - (6)].sval)) strcat(t, (yyvsp[(2) - (6)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(1) - (6)].sval), (yyvsp[(3) - (6)].sval), (yyvsp[(5) - (6)].node));
      free(t); free((yyvsp[(1) - (6)].sval)); free((yyvsp[(2) - (6)].sval));
      (yyval.nlist) = nlist_from1(d);
    ;}
    break;

  case 133:
#line 644 "c.y"
    {
      size_t nt = strlen((yyvsp[(1) - (7)].sval)) + strlen((yyvsp[(2) - (7)].sval) ? (yyvsp[(2) - (7)].sval) : "") + strlen((yyvsp[(4) - (7)].sval) ? (yyvsp[(4) - (7)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, (yyvsp[(1) - (7)].sval)); if((yyvsp[(2) - (7)].sval)) strcat(t, (yyvsp[(2) - (7)].sval)); if((yyvsp[(4) - (7)].sval)) strcat(t, (yyvsp[(4) - (7)].sval)); }
      AstNode* d = ast_decl_new(t ? t : (yyvsp[(1) - (7)].sval), (yyvsp[(3) - (7)].sval), (yyvsp[(6) - (7)].node));
      free(t); free((yyvsp[(1) - (7)].sval)); free((yyvsp[(2) - (7)].sval)); free((yyvsp[(4) - (7)].sval));
      (yyval.nlist) = nlist_from1(d);
    ;}
    break;

  case 134:
#line 653 "c.y"
    {
      char* base=(yyvsp[(1) - (6)].sval); NodeList* nl=nlist_new();
      char* t1=compose_type(base,(yyvsp[(2) - (6)].dstr)); AstNode* d1=ast_decl_new(t1,(yyvsp[(2) - (6)].dstr)->name,NULL); free(t1); dstr_free((yyvsp[(2) - (6)].dstr)); nlist_push(nl,d1);
      char* t2=compose_type(base,(yyvsp[(4) - (6)].dstr)); AstNode* d2=ast_decl_new(t2,(yyvsp[(4) - (6)].dstr)->name,NULL); free(t2); dstr_free((yyvsp[(4) - (6)].dstr)); nlist_push(nl,d2);
      if((yyvsp[(5) - (6)].nlist)){ for(long i=0;i<(yyvsp[(5) - (6)].nlist)->n;i++){ DStr* ds=(DStr*)(yyvsp[(5) - (6)].nlist)->a[i]; char* tx=compose_type(base,ds); AstNode* dn=ast_decl_new(tx, ds->name,NULL); free(tx); dstr_free(ds); nlist_push(nl,dn);} free((yyvsp[(5) - (6)].nlist)->a); free((yyvsp[(5) - (6)].nlist)); }
      free(base);
      (yyval.nlist)=nl;
    ;}
    break;

  case 135:
#line 661 "c.y"
    { (yyval.nlist) = nlist_from1((yyvsp[(1) - (1)].node)); ;}
    break;

  case 136:
#line 664 "c.y"
    {
      size_t nt = strlen((yyvsp[(2) - (5)].sval)) + strlen((yyvsp[(3) - (5)].sval) ? (yyvsp[(3) - (5)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; strcat(t, (yyvsp[(2) - (5)].sval)); if((yyvsp[(3) - (5)].sval)) strcat(t, (yyvsp[(3) - (5)].sval)); }
      AstNode* td = ast_typedef_new(t ? t : (yyvsp[(2) - (5)].sval), (yyvsp[(4) - (5)].sval));
      free(t);
      (yyval.nlist) = nlist_from1(td);
    ;}
    break;

  case 137:
#line 673 "c.y"
    {
      size_t nt = strlen((yyvsp[(2) - (6)].sval)) + 1 + strlen((yyvsp[(3) - (6)].sval)) + strlen((yyvsp[(4) - (6)].sval) ? (yyvsp[(4) - (6)].sval) : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; strcat(t, (yyvsp[(2) - (6)].sval)); strcat(t, " "); strcat(t, (yyvsp[(3) - (6)].sval)); if((yyvsp[(4) - (6)].sval)) strcat(t, (yyvsp[(4) - (6)].sval)); }
      AstNode* td = ast_typedef_new(t ? t : (yyvsp[(2) - (6)].sval), (yyvsp[(5) - (6)].sval));
      free(t);
      (yyval.nlist) = nlist_from1(td);
    ;}
    break;

  case 138:
#line 685 "c.y"
    { (yyval.nlist)=NULL; ;}
    break;

  case 139:
#line 686 "c.y"
    { if(!(yyvsp[(1) - (3)].nlist)){ NodeList* nl=nlist_new(); (yyval.nlist)=nl; } nlist_push((yyvsp[(1) - (3)].nlist), (AstNode*)(yyvsp[(3) - (3)].dstr)); (yyval.nlist)=(yyvsp[(1) - (3)].nlist); ;}
    break;

  case 140:
#line 691 "c.y"
    { DStr* d=(DStr*)calloc(1,sizeof(DStr)); d->name=sdup0x((yyvsp[(2) - (2)].dstr)->name); d->pre=sdup0x((yyvsp[(1) - (2)].sval)); d->post=sdup0x((yyvsp[(2) - (2)].dstr)->post); dstr_free((yyvsp[(2) - (2)].dstr)); free((yyvsp[(1) - (2)].sval)); (yyval.dstr)=d; ;}
    break;

  case 141:
#line 695 "c.y"
    { DStr* d=(DStr*)calloc(1,sizeof(DStr)); d->name=(yyvsp[(1) - (1)].sval); d->pre=strdup(""); d->post=strdup(""); (yyval.dstr)=d; ;}
    break;

  case 142:
#line 696 "c.y"
    { (yyval.dstr)=(yyvsp[(2) - (3)].dstr); ;}
    break;

  case 143:
#line 697 "c.y"
    { char* suf=array_suffix_from_expr((yyvsp[(3) - (4)].node)); (yyvsp[(1) - (4)].dstr)->post=sappend((yyvsp[(1) - (4)].dstr)->post,suf); free(suf); (yyval.dstr)=(yyvsp[(1) - (4)].dstr); ;}
    break;

  case 144:
#line 698 "c.y"
    { char* params=(yyvsp[(3) - (4)].sval)?(yyvsp[(3) - (4)].sval):strdup("()"); (yyvsp[(1) - (4)].dstr)->post=sappend3((yyvsp[(1) - (4)].dstr)->post, "(*)", params); free((yyvsp[(3) - (4)].sval)); (yyval.dstr)=(yyvsp[(1) - (4)].dstr); ;}
    break;

  case 145:
#line 704 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 146:
#line 705 "c.y"
    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 153:
#line 721 "c.y"
    { (yyval.node) = ast_return_new((yyvsp[(2) - (3)].node)); ;}
    break;

  case 154:
#line 722 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 155:
#line 723 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 156:
#line 724 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 157:
#line 729 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 158:
#line 730 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 159:
#line 734 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 160:
#line 735 "c.y"
    { (yyval.node) = (yyvsp[(3) - (3)].node); ;}
    break;

  case 161:
#line 739 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 162:
#line 740 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 163:
#line 744 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 164:
#line 745 "c.y"
    { (yyval.node) = ast_expr_assign_new("=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 165:
#line 746 "c.y"
    { (yyval.node) = ast_expr_assign_new("+=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 166:
#line 747 "c.y"
    { (yyval.node) = ast_expr_assign_new("-=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 167:
#line 748 "c.y"
    { (yyval.node) = ast_expr_assign_new("*=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 168:
#line 749 "c.y"
    { (yyval.node) = ast_expr_assign_new("/=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 169:
#line 750 "c.y"
    { (yyval.node) = ast_expr_assign_new("%=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 170:
#line 751 "c.y"
    { (yyval.node) = ast_expr_assign_new("&=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 171:
#line 752 "c.y"
    { (yyval.node) = ast_expr_assign_new("|=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 172:
#line 753 "c.y"
    { (yyval.node) = ast_expr_assign_new("^=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 173:
#line 754 "c.y"
    { (yyval.node) = ast_expr_assign_new("<<=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 174:
#line 755 "c.y"
    { (yyval.node) = ast_expr_assign_new(">>=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 175:
#line 759 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 176:
#line 760 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 177:
#line 764 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 178:
#line 765 "c.y"
    { (yyval.node) = ast_expr_binary_new("||", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 179:
#line 769 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 180:
#line 770 "c.y"
    { (yyval.node) = ast_expr_binary_new("&&", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 181:
#line 774 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 182:
#line 775 "c.y"
    { (yyval.node) = ast_expr_binary_new("|", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 183:
#line 779 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 184:
#line 780 "c.y"
    { (yyval.node) = ast_expr_binary_new("^", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 185:
#line 784 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 186:
#line 785 "c.y"
    { (yyval.node) = ast_expr_binary_new("&", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 187:
#line 789 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 188:
#line 790 "c.y"
    { (yyval.node) = ast_expr_binary_new("==", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 189:
#line 791 "c.y"
    { (yyval.node) = ast_expr_binary_new("!=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 190:
#line 795 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 191:
#line 796 "c.y"
    { (yyval.node) = ast_expr_binary_new("<", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 192:
#line 797 "c.y"
    { (yyval.node) = ast_expr_binary_new(">", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 193:
#line 798 "c.y"
    { (yyval.node) = ast_expr_binary_new("<=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 194:
#line 799 "c.y"
    { (yyval.node) = ast_expr_binary_new(">=", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 195:
#line 803 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 196:
#line 804 "c.y"
    { (yyval.node) = ast_expr_binary_new("<<", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 197:
#line 805 "c.y"
    { (yyval.node) = ast_expr_binary_new(">>", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 198:
#line 809 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 199:
#line 810 "c.y"
    { (yyval.node) = ast_expr_binary_new("+", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 200:
#line 811 "c.y"
    { (yyval.node) = ast_expr_binary_new("-", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 201:
#line 815 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 202:
#line 816 "c.y"
    { (yyval.node) = ast_expr_binary_new("*", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 203:
#line 817 "c.y"
    { (yyval.node) = ast_expr_binary_new("/", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 204:
#line 818 "c.y"
    { (yyval.node) = ast_expr_binary_new("%", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 205:
#line 822 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 206:
#line 823 "c.y"
    { (yyval.node) = ast_expr_unary_new("++", (yyvsp[(2) - (2)].node), 0); ;}
    break;

  case 207:
#line 824 "c.y"
    { (yyval.node) = ast_expr_unary_new("--", (yyvsp[(2) - (2)].node), 0); ;}
    break;

  case 208:
#line 825 "c.y"
    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 209:
#line 826 "c.y"
    { (yyval.node) = ast_expr_unary_new("-", (yyvsp[(2) - (2)].node), 0); ;}
    break;

  case 210:
#line 827 "c.y"
    { (yyval.node) = ast_expr_unary_new("!", (yyvsp[(2) - (2)].node), 0); ;}
    break;

  case 211:
#line 828 "c.y"
    { (yyval.node) = ast_expr_unary_new("~", (yyvsp[(2) - (2)].node), 0); ;}
    break;

  case 212:
#line 829 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 213:
#line 830 "c.y"
    { (yyval.node) = NULL; ;}
    break;

  case 214:
#line 834 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 215:
#line 835 "c.y"
    {
      (yyval.node) = ast_expr_call_new((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].nlist) ? (yyvsp[(3) - (4)].nlist)->a : NULL, (yyvsp[(3) - (4)].nlist) ? (yyvsp[(3) - (4)].nlist)->n : 0);
      if((yyvsp[(3) - (4)].nlist)) { free((yyvsp[(3) - (4)].nlist)); }
    ;}
    break;

  case 216:
#line 839 "c.y"
    { (yyval.node) = ast_expr_index_new((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node)); ;}
    break;

  case 217:
#line 840 "c.y"
    { (yyval.node) = ast_expr_member_new((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].sval), 0); free((yyvsp[(3) - (3)].sval)); ;}
    break;

  case 218:
#line 841 "c.y"
    { (yyval.node) = ast_expr_member_new((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].sval), 1); free((yyvsp[(3) - (3)].sval)); ;}
    break;

  case 219:
#line 842 "c.y"
    { (yyval.node) = ast_expr_unary_new("++", (yyvsp[(1) - (2)].node), 1); ;}
    break;

  case 220:
#line 843 "c.y"
    { (yyval.node) = ast_expr_unary_new("--", (yyvsp[(1) - (2)].node), 1); ;}
    break;

  case 221:
#line 847 "c.y"
    { (yyval.nlist) = NULL; ;}
    break;

  case 222:
#line 848 "c.y"
    { (yyval.nlist) = (yyvsp[(1) - (1)].nlist); ;}
    break;

  case 223:
#line 852 "c.y"
    { (yyval.nlist) = nlist_from1((yyvsp[(1) - (1)].node)); ;}
    break;

  case 224:
#line 853 "c.y"
    { nlist_push((yyvsp[(1) - (3)].nlist), (yyvsp[(3) - (3)].node)); (yyval.nlist) = (yyvsp[(1) - (3)].nlist); ;}
    break;

  case 225:
#line 857 "c.y"
    { (yyval.node) = ast_expr_ident_new((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 226:
#line 858 "c.y"
    { (yyval.node) = ast_expr_int_new(atol((yyvsp[(1) - (1)].sval))); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 227:
#line 859 "c.y"
    { (yyval.node) = ast_expr_float_new(atof((yyvsp[(1) - (1)].sval))); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 228:
#line 860 "c.y"
    { (yyval.node) = ast_expr_char_new((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 229:
#line 861 "c.y"
    { (yyval.node) = ast_expr_string_new((yyvsp[(1) - (1)].sval)); free((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 230:
#line 862 "c.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 231:
#line 867 "c.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 232:
#line 868 "c.y"
    { (yyval.node) = (AstNode*)ast_init_list_new((yyvsp[(2) - (3)].nlist) ? (yyvsp[(2) - (3)].nlist)->a : NULL, (yyvsp[(2) - (3)].nlist) ? (yyvsp[(2) - (3)].nlist)->n : 0); if((yyvsp[(2) - (3)].nlist)) free((yyvsp[(2) - (3)].nlist)); ;}
    break;

  case 233:
#line 872 "c.y"
    { (yyval.nlist) = NULL; ;}
    break;

  case 234:
#line 873 "c.y"
    { (yyval.nlist) = (yyvsp[(1) - (1)].nlist); ;}
    break;

  case 235:
#line 877 "c.y"
    { (yyval.nlist) = nlist_from1((yyvsp[(1) - (1)].node)); ;}
    break;

  case 236:
#line 878 "c.y"
    { (yyval.nlist) = nlist_from1((yyvsp[(1) - (1)].node)); ;}
    break;

  case 237:
#line 879 "c.y"
    { nlist_push((yyvsp[(1) - (3)].nlist), (yyvsp[(3) - (3)].node)); (yyval.nlist) = (yyvsp[(1) - (3)].nlist); ;}
    break;

  case 238:
#line 880 "c.y"
    { nlist_push((yyvsp[(1) - (3)].nlist), (yyvsp[(3) - (3)].node)); (yyval.nlist) = (yyvsp[(1) - (3)].nlist); ;}
    break;

  case 239:
#line 884 "c.y"
    { (yyval.node) = ast_init_desig_field_new((yyvsp[(2) - (4)].sval), (yyvsp[(4) - (4)].node)); free((yyvsp[(2) - (4)].sval)); ;}
    break;

  case 240:
#line 885 "c.y"
    { (yyval.node) = ast_init_desig_index_new((yyvsp[(2) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 241:
#line 886 "c.y"
    { (yyval.node) = ast_init_desig_chain_new((yyvsp[(1) - (3)].nlist) ? (yyvsp[(1) - (3)].nlist)->a : NULL, (yyvsp[(1) - (3)].nlist) ? (yyvsp[(1) - (3)].nlist)->n : 0, (yyvsp[(3) - (3)].node)); if((yyvsp[(1) - (3)].nlist)) free((yyvsp[(1) - (3)].nlist)); ;}
    break;

  case 242:
#line 891 "c.y"
    { (yyval.nlist) = nlist_from1((yyvsp[(1) - (1)].node)); ;}
    break;

  case 243:
#line 892 "c.y"
    { nlist_push((yyvsp[(1) - (2)].nlist), (yyvsp[(2) - (2)].node)); (yyval.nlist) = (yyvsp[(1) - (2)].nlist); ;}
    break;

  case 244:
#line 896 "c.y"
    { (yyval.node) = ast_desig_field_new((yyvsp[(2) - (2)].sval)); free((yyvsp[(2) - (2)].sval)); ;}
    break;

  case 245:
#line 897 "c.y"
    { (yyval.node) = ast_desig_index_new((yyvsp[(2) - (3)].node)); ;}
    break;

  case 246:
#line 898 "c.y"
    { (yyval.node) = ast_desig_range_new((yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 3169 "parser.c"
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


#line 905 "c.y"


void yyerror(const char* s)
{
  fprintf(stderr, "parse error at line %d near '%s': %s\n", yylineno, yytext ? yytext : "", s);
}

