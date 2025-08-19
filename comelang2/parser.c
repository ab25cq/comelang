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
     STRING_LITERAL = 259,
     INTEGER_CONSTANT = 260,
     FLOAT_CONSTANT = 261,
     CHAR_CONSTANT = 262,
     KW_INT = 263,
     KW_CHAR = 264,
     KW_VOID = 265,
     KW_FLOAT = 266,
     KW_DOUBLE = 267,
     KW_SHORT = 268,
     KW_LONG = 269,
     KW_SIGNED = 270,
     KW_UNSIGNED = 271,
     KW_BOOL = 272,
     KW_COMPLEX = 273,
     KW_IMAGINARY = 274,
     KW_STRUCT = 275,
     KW_UNION = 276,
     KW_ENUM = 277,
     KW_TYPEDEF = 278,
     KW_RETURN = 279,
     KW_IF = 280,
     KW_ELSE = 281,
     KW_WHILE = 282,
     KW_FOR = 283,
     KW_DO = 284,
     KW_SWITCH = 285,
     KW_CASE = 286,
     KW_DEFAULT = 287,
     KW_BREAK = 288,
     KW_CONTINUE = 289,
     KW_GOTO = 290,
     KW_SIZEOF = 291,
     KW_ALIGNAS = 292,
     KW_ALIGNOF = 293,
     KW_NORETURN = 294,
     KW_THREAD_LOCAL = 295,
     KW_ATOMIC = 296,
     KW_CONST = 297,
     KW_VOLATILE = 298,
     KW_RESTRICT = 299,
     KW_INLINE = 300,
     KW_EXTERN = 301,
     KW_STATIC = 302,
     KW_REGISTER = 303,
     KW_AUTO = 304,
     KW_STATIC_ASSERT = 305,
     KW_GENERIC = 306,
     KW_TYPEOF = 307,
     KW_AUTO_TYPE = 308,
     KW_ATTRIBUTE = 309,
     KW_DECLSPEC = 310,
     KW_EXTENSION = 311,
     KW_ASM = 312,
     ELLIPSIS = 313,
     ARROW = 314,
     INC = 315,
     DEC = 316,
     LSHIFT = 317,
     RSHIFT = 318,
     LE = 319,
     GE = 320,
     EQ = 321,
     NE = 322,
     LOGAND = 323,
     LOGOR = 324,
     ADD_ASSIGN = 325,
     SUB_ASSIGN = 326,
     MUL_ASSIGN = 327,
     DIV_ASSIGN = 328,
     MOD_ASSIGN = 329,
     AND_ASSIGN = 330,
     OR_ASSIGN = 331,
     XOR_ASSIGN = 332,
     LSHIFT_ASSIGN = 333,
     RSHIFT_ASSIGN = 334,
     LPAREN_BRACE = 335
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define STRING_LITERAL 259
#define INTEGER_CONSTANT 260
#define FLOAT_CONSTANT 261
#define CHAR_CONSTANT 262
#define KW_INT 263
#define KW_CHAR 264
#define KW_VOID 265
#define KW_FLOAT 266
#define KW_DOUBLE 267
#define KW_SHORT 268
#define KW_LONG 269
#define KW_SIGNED 270
#define KW_UNSIGNED 271
#define KW_BOOL 272
#define KW_COMPLEX 273
#define KW_IMAGINARY 274
#define KW_STRUCT 275
#define KW_UNION 276
#define KW_ENUM 277
#define KW_TYPEDEF 278
#define KW_RETURN 279
#define KW_IF 280
#define KW_ELSE 281
#define KW_WHILE 282
#define KW_FOR 283
#define KW_DO 284
#define KW_SWITCH 285
#define KW_CASE 286
#define KW_DEFAULT 287
#define KW_BREAK 288
#define KW_CONTINUE 289
#define KW_GOTO 290
#define KW_SIZEOF 291
#define KW_ALIGNAS 292
#define KW_ALIGNOF 293
#define KW_NORETURN 294
#define KW_THREAD_LOCAL 295
#define KW_ATOMIC 296
#define KW_CONST 297
#define KW_VOLATILE 298
#define KW_RESTRICT 299
#define KW_INLINE 300
#define KW_EXTERN 301
#define KW_STATIC 302
#define KW_REGISTER 303
#define KW_AUTO 304
#define KW_STATIC_ASSERT 305
#define KW_GENERIC 306
#define KW_TYPEOF 307
#define KW_AUTO_TYPE 308
#define KW_ATTRIBUTE 309
#define KW_DECLSPEC 310
#define KW_EXTENSION 311
#define KW_ASM 312
#define ELLIPSIS 313
#define ARROW 314
#define INC 315
#define DEC 316
#define LSHIFT 317
#define RSHIFT 318
#define LE 319
#define GE 320
#define EQ 321
#define NE 322
#define LOGAND 323
#define LOGOR 324
#define ADD_ASSIGN 325
#define SUB_ASSIGN 326
#define MUL_ASSIGN 327
#define DIV_ASSIGN 328
#define MOD_ASSIGN 329
#define AND_ASSIGN 330
#define OR_ASSIGN 331
#define XOR_ASSIGN 332
#define LSHIFT_ASSIGN 333
#define RSHIFT_ASSIGN 334
#define LPAREN_BRACE 335




/* Copy the first part of user declarations.  */
#line 8 "comelang2/comelang.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yylex(void);
static void yyerror(const char* msg)
{
  fprintf(stderr, "parse error: %s\n", msg);
}

#include "ast_bridge.h"
#include "info.h"


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
#line 48 "comelang2/comelang.y"
{
  char* sval;
  long  ival;
  struct sNode* node;
}
/* Line 193 of yacc.c.  */
#line 277 "comelang2/parser.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 290 "comelang2/parser.c"

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
#define YYLAST   1330

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  105
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  92
/* YYNRULES -- Number of rules.  */
#define YYNRULES  267
/* YYNRULES -- Number of states.  */
#define YYNSTATES  452

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   335

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    94,     2,     2,     2,    93,    86,     2,
      98,    99,    91,    89,   102,    90,   100,    92,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    83,   101,
      87,    81,    88,    82,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    96,     2,    97,    85,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   103,    84,   104,    95,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    12,    14,    16,    19,
      22,    24,    27,    29,    31,    33,    35,    37,    39,    41,
      43,    45,    47,    49,    51,    53,    55,    57,    59,    61,
      63,    65,    70,    75,    80,    85,    86,    88,    90,    94,
      96,    98,   100,   104,   106,   110,   112,   116,   117,   119,
     122,   123,   125,   127,   130,   133,   137,   139,   142,   144,
     148,   153,   158,   163,   164,   166,   168,   172,   173,   175,
     177,   181,   183,   187,   190,   192,   194,   196,   198,   200,
     202,   204,   206,   208,   210,   212,   214,   216,   218,   220,
     225,   227,   229,   232,   235,   238,   241,   246,   251,   257,
     263,   265,   268,   272,   274,   276,   280,   282,   285,   289,
     292,   297,   303,   304,   306,   308,   312,   315,   317,   321,
     328,   330,   332,   333,   335,   337,   341,   345,   348,   352,
     356,   357,   359,   361,   364,   367,   369,   376,   377,   380,
     383,   386,   388,   392,   398,   406,   416,   417,   419,   420,
     422,   423,   425,   426,   428,   430,   434,   436,   440,   446,
     452,   453,   457,   459,   463,   465,   469,   477,   479,   482,
     486,   488,   490,   496,   504,   510,   518,   528,   537,   543,
     546,   549,   553,   555,   559,   564,   568,   569,   571,   573,
     575,   579,   583,   587,   591,   595,   599,   603,   607,   611,
     615,   619,   621,   623,   627,   629,   633,   635,   639,   643,
     645,   649,   653,   657,   661,   663,   667,   671,   673,   677,
     681,   685,   687,   690,   693,   696,   699,   702,   705,   708,
     713,   718,   720,   725,   728,   731,   736,   740,   744,   751,
     752,   754,   756,   760,   762,   764,   766,   770,   774,   776,
     778,   780,   782,   785,   786,   788,   790,   794,   799,   802,
     807,   808,   810,   813,   815,   818,   821,   825
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     106,     0,    -1,    -1,   106,   107,    -1,   150,    -1,   108,
     101,    -1,   169,    -1,   145,    -1,   109,   122,    -1,   109,
     120,    -1,   110,    -1,   109,   110,    -1,   111,    -1,   134,
      -1,   112,    -1,   113,    -1,   114,    -1,   115,    -1,   116,
      -1,    23,    -1,    46,    -1,    47,    -1,    40,    -1,    49,
      -1,    48,    -1,    42,    -1,    43,    -1,    44,    -1,    41,
      -1,    45,    -1,    39,    -1,    37,    98,   134,    99,    -1,
      37,    98,     5,    99,    -1,    54,    98,   117,    99,    -1,
      55,    98,   117,    99,    -1,    -1,   118,    -1,   119,    -1,
     118,   102,   119,    -1,     3,    -1,     4,    -1,     5,    -1,
      98,   117,    99,    -1,   121,    -1,   120,   102,   121,    -1,
     123,    -1,   123,    81,   190,    -1,    -1,   123,    -1,   124,
     127,    -1,    -1,   125,    -1,    91,    -1,    91,   126,    -1,
      91,   125,    -1,    91,   126,   125,    -1,   112,    -1,   126,
     112,    -1,     3,    -1,    98,   123,    99,    -1,   127,    96,
     189,    97,    -1,   127,    98,   130,    99,    -1,   127,    98,
     128,    99,    -1,    -1,   129,    -1,     3,    -1,   129,   102,
       3,    -1,    -1,   131,    -1,   132,    -1,   132,   102,    58,
      -1,   133,    -1,   132,   102,   133,    -1,   109,   123,    -1,
     109,    -1,    10,    -1,     9,    -1,    13,    -1,     8,    -1,
      14,    -1,    11,    -1,    12,    -1,    15,    -1,    16,    -1,
      17,    -1,    18,    -1,    19,    -1,   136,    -1,   141,    -1,
      52,    98,   134,    99,    -1,   134,    -1,   112,    -1,   135,
     134,    -1,   135,   112,    -1,    20,     3,    -1,    21,     3,
      -1,    20,   103,   137,   104,    -1,    21,   103,   137,   104,
      -1,    20,     3,   103,   137,   104,    -1,    21,     3,   103,
     137,   104,    -1,   138,    -1,   137,   138,    -1,   135,   139,
     101,    -1,   169,    -1,   140,    -1,   139,   102,   140,    -1,
     123,    -1,    83,   196,    -1,   123,    83,   196,    -1,    22,
       3,    -1,    22,   103,   142,   104,    -1,    22,     3,   103,
     142,   104,    -1,    -1,   143,    -1,   144,    -1,   143,   102,
     144,    -1,   143,   102,    -1,     3,    -1,     3,    81,   196,
      -1,   146,     3,    98,   147,    99,   151,    -1,     8,    -1,
     109,    -1,    -1,   148,    -1,   149,    -1,   148,   102,   149,
      -1,   109,   124,     3,    -1,   109,   124,    -1,   134,   123,
     151,    -1,   103,   152,   104,    -1,    -1,   153,    -1,   154,
      -1,   153,   154,    -1,   108,   101,    -1,   170,    -1,    57,
     156,    98,   157,    99,   101,    -1,    -1,   156,    43,    -1,
     156,    45,    -1,   156,    35,    -1,   188,    -1,   188,    83,
     158,    -1,   188,    83,   158,    83,   159,    -1,   188,    83,
     158,    83,   159,    83,   160,    -1,   188,    83,   158,    83,
     159,    83,   160,    83,   161,    -1,    -1,   162,    -1,    -1,
     163,    -1,    -1,   167,    -1,    -1,   168,    -1,   164,    -1,
     162,   102,   164,    -1,   165,    -1,   163,   102,   165,    -1,
     166,     4,    98,   182,    99,    -1,   166,     4,    98,   174,
      99,    -1,    -1,    96,     3,    97,    -1,     4,    -1,   167,
     102,     4,    -1,     3,    -1,   168,   102,     3,    -1,    50,
      98,   175,   102,     4,    99,   101,    -1,   101,    -1,   173,
     101,    -1,    24,   172,   101,    -1,   151,    -1,   171,    -1,
      25,    98,   173,    99,   170,    -1,    25,    98,   173,    99,
     170,    26,   170,    -1,    27,    98,   173,    99,   170,    -1,
      29,   170,    27,    98,   173,    99,   101,    -1,    28,    98,
     172,   101,   172,   101,   172,    99,   170,    -1,    28,    98,
     108,   172,   101,   172,    99,   170,    -1,    30,    98,   173,
      99,   170,    -1,    33,   101,    -1,    34,   101,    -1,    35,
       3,   101,    -1,   155,    -1,     3,    83,   170,    -1,    31,
     196,    83,   170,    -1,    32,    83,   170,    -1,    -1,   173,
      -1,   174,    -1,   175,    -1,   182,    81,   174,    -1,   182,
      70,   174,    -1,   182,    71,   174,    -1,   182,    72,   174,
      -1,   182,    73,   174,    -1,   182,    74,   174,    -1,   182,
      75,   174,    -1,   182,    76,   174,    -1,   182,    77,   174,
      -1,   182,    78,   174,    -1,   182,    79,   174,    -1,   176,
      -1,   177,    -1,   176,    69,   177,    -1,   178,    -1,   177,
      68,   178,    -1,   179,    -1,   178,    66,   179,    -1,   178,
      67,   179,    -1,   180,    -1,   179,    87,   180,    -1,   179,
      88,   180,    -1,   179,    64,   180,    -1,   179,    65,   180,
      -1,   181,    -1,   180,    89,   181,    -1,   180,    90,   181,
      -1,   182,    -1,   181,    91,   182,    -1,   181,    92,   182,
      -1,   181,    93,   182,    -1,   183,    -1,    60,   182,    -1,
      61,   182,    -1,    86,   182,    -1,    91,   182,    -1,    89,
     182,    -1,    90,   182,    -1,    36,   182,    -1,    36,    98,
     134,    99,    -1,    52,    98,   173,    99,    -1,   186,    -1,
     183,    98,   184,    99,    -1,   183,    60,    -1,   183,    61,
      -1,   183,    96,   173,    97,    -1,   183,   100,     3,    -1,
     183,    59,     3,    -1,    51,    98,   174,   102,   174,    99,
      -1,    -1,   185,    -1,   174,    -1,   185,   102,   174,    -1,
       3,    -1,   187,    -1,   188,    -1,    98,   173,    99,    -1,
      80,   151,    99,    -1,     5,    -1,     6,    -1,     7,    -1,
       4,    -1,   188,     4,    -1,    -1,   174,    -1,   174,    -1,
     103,   191,   104,    -1,   103,   191,   102,   104,    -1,   192,
     190,    -1,   191,   102,   192,   190,    -1,    -1,   193,    -1,
     194,    81,    -1,   195,    -1,   194,   195,    -1,   100,     3,
      -1,    96,   196,    97,    -1,   175,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    78,    78,    80,    84,    85,    86,    87,    92,    93,
      97,    98,   102,   103,   104,   105,   106,   107,   108,   112,
     113,   114,   115,   116,   117,   121,   122,   123,   124,   128,
     129,   133,   134,   138,   142,   145,   147,   151,   152,   156,
     157,   158,   159,   163,   164,   168,   169,   172,   174,   179,
     182,   184,   188,   189,   190,   191,   195,   196,   200,   201,
     202,   203,   204,   207,   209,   213,   214,   217,   219,   223,
     224,   228,   229,   233,   234,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     257,   258,   259,   260,   264,   265,   266,   267,   268,   269,
     273,   274,   278,   279,   283,   284,   288,   289,   290,   294,
     295,   296,   299,   301,   305,   306,   307,   311,   312,   317,
     322,   323,   327,   328,   332,   333,   337,   338,   342,   346,
     349,   351,   355,   356,   360,   361,   366,   369,   371,   372,
     373,   379,   380,   381,   382,   383,   386,   388,   391,   393,
     396,   398,   401,   403,   407,   408,   412,   413,   417,   421,
     424,   426,   430,   431,   435,   436,   440,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   463,   464,   465,   469,   470,   475,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   494,   498,   499,   503,   504,   508,   509,   510,   514,
     515,   516,   517,   518,   522,   523,   524,   528,   529,   530,
     531,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   548,   549,   550,   551,   552,   553,   554,   555,   559,
     560,   564,   565,   569,   570,   571,   572,   573,   577,   578,
     579,   583,   584,   588,   590,   595,   596,   597,   601,   602,
     605,   607,   611,   615,   616,   620,   621,   625
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING_LITERAL",
  "INTEGER_CONSTANT", "FLOAT_CONSTANT", "CHAR_CONSTANT", "KW_INT",
  "KW_CHAR", "KW_VOID", "KW_FLOAT", "KW_DOUBLE", "KW_SHORT", "KW_LONG",
  "KW_SIGNED", "KW_UNSIGNED", "KW_BOOL", "KW_COMPLEX", "KW_IMAGINARY",
  "KW_STRUCT", "KW_UNION", "KW_ENUM", "KW_TYPEDEF", "KW_RETURN", "KW_IF",
  "KW_ELSE", "KW_WHILE", "KW_FOR", "KW_DO", "KW_SWITCH", "KW_CASE",
  "KW_DEFAULT", "KW_BREAK", "KW_CONTINUE", "KW_GOTO", "KW_SIZEOF",
  "KW_ALIGNAS", "KW_ALIGNOF", "KW_NORETURN", "KW_THREAD_LOCAL",
  "KW_ATOMIC", "KW_CONST", "KW_VOLATILE", "KW_RESTRICT", "KW_INLINE",
  "KW_EXTERN", "KW_STATIC", "KW_REGISTER", "KW_AUTO", "KW_STATIC_ASSERT",
  "KW_GENERIC", "KW_TYPEOF", "KW_AUTO_TYPE", "KW_ATTRIBUTE", "KW_DECLSPEC",
  "KW_EXTENSION", "KW_ASM", "ELLIPSIS", "ARROW", "INC", "DEC", "LSHIFT",
  "RSHIFT", "LE", "GE", "EQ", "NE", "LOGAND", "LOGOR", "ADD_ASSIGN",
  "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "AND_ASSIGN",
  "OR_ASSIGN", "XOR_ASSIGN", "LSHIFT_ASSIGN", "RSHIFT_ASSIGN",
  "LPAREN_BRACE", "'='", "'?'", "':'", "'|'", "'^'", "'&'", "'<'", "'>'",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "'~'", "'['", "']'", "'('",
  "')'", "'.'", "';'", "','", "'{'", "'}'", "$accept", "translation_unit",
  "external_declaration", "declaration", "declaration_specifiers",
  "declaration_specifier", "storage_class_specifier", "type_qualifier",
  "function_specifier", "alignment_specifier", "attribute_specifier",
  "declspec_specifier", "attribute_arg_list_opt", "attribute_arg_list",
  "attribute_arg", "init_declarator_list", "init_declarator",
  "declarator_opt", "declarator", "pointer_opt", "pointer",
  "type_qualifier_list", "direct_declarator", "identifier_list_opt",
  "identifier_list", "parameter_type_list_opt", "parameter_type_list",
  "parameter_list", "parameter_declaration", "type_specifier",
  "specifier_qualifier_list", "struct_or_union_specifier",
  "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "enum_specifier",
  "enumerator_list_opt", "enumerator_list", "enumerator",
  "simple_function_definition", "function_declspec",
  "simple_param_list_opt", "simple_param_list", "simple_param",
  "function_definition", "compound_statement", "block_item_list_opt",
  "block_item_list", "block_item", "asm_statement", "asm_qualifiers_opt",
  "asm_arguments", "asm_output_operands_opt", "asm_input_operands_opt",
  "asm_clobbers_opt", "asm_goto_labels_opt", "asm_output_operands",
  "asm_input_operands", "asm_output_operand", "asm_input_operand",
  "asm_symbolic_name_opt", "asm_clobbers", "asm_goto_labels",
  "static_assert_declaration", "statement", "labeled_statement",
  "expression_opt", "expression", "assignment_expression",
  "conditional_expression", "logical_or_expression",
  "logical_and_expression", "equality_expression", "relational_expression",
  "additive_expression", "multiplicative_expression", "unary_expression",
  "postfix_expression", "argument_expression_list_opt",
  "argument_expression_list", "primary_expression", "constant",
  "string_seq", "assignment_expression_opt", "initializer",
  "initializer_list", "designation_opt", "designation", "designator_list",
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,    61,    63,    58,   124,    94,    38,    60,    62,    43,
      45,    42,    47,    37,    33,   126,    91,    93,    40,    41,
      46,    59,    44,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   105,   106,   106,   107,   107,   107,   107,   108,   108,
     109,   109,   110,   110,   110,   110,   110,   110,   110,   111,
     111,   111,   111,   111,   111,   112,   112,   112,   112,   113,
     113,   114,   114,   115,   116,   117,   117,   118,   118,   119,
     119,   119,   119,   120,   120,   121,   121,   122,   122,   123,
     124,   124,   125,   125,   125,   125,   126,   126,   127,   127,
     127,   127,   127,   128,   128,   129,   129,   130,   130,   131,
     131,   132,   132,   133,   133,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     135,   135,   135,   135,   136,   136,   136,   136,   136,   136,
     137,   137,   138,   138,   139,   139,   140,   140,   140,   141,
     141,   141,   142,   142,   143,   143,   143,   144,   144,   145,
     146,   146,   147,   147,   148,   148,   149,   149,   150,   151,
     152,   152,   153,   153,   154,   154,   155,   156,   156,   156,
     156,   157,   157,   157,   157,   157,   158,   158,   159,   159,
     160,   160,   161,   161,   162,   162,   163,   163,   164,   165,
     166,   166,   167,   167,   168,   168,   169,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   171,   171,   171,   172,   172,   173,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   175,   176,   176,   177,   177,   178,   178,   178,   179,
     179,   179,   179,   179,   180,   180,   180,   181,   181,   181,
     181,   182,   182,   182,   182,   182,   182,   182,   182,   182,
     182,   183,   183,   183,   183,   183,   183,   183,   183,   184,
     184,   185,   185,   186,   186,   186,   186,   186,   187,   187,
     187,   188,   188,   189,   189,   190,   190,   190,   191,   191,
     192,   192,   193,   194,   194,   195,   195,   196
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     1,     1,     2,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     4,     0,     1,     1,     3,     1,
       1,     1,     3,     1,     3,     1,     3,     0,     1,     2,
       0,     1,     1,     2,     2,     3,     1,     2,     1,     3,
       4,     4,     4,     0,     1,     1,     3,     0,     1,     1,
       3,     1,     3,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     1,     2,     2,     2,     2,     4,     4,     5,     5,
       1,     2,     3,     1,     1,     3,     1,     2,     3,     2,
       4,     5,     0,     1,     1,     3,     2,     1,     3,     6,
       1,     1,     0,     1,     1,     3,     3,     2,     3,     3,
       0,     1,     1,     2,     2,     1,     6,     0,     2,     2,
       2,     1,     3,     5,     7,     9,     0,     1,     0,     1,
       0,     1,     0,     1,     1,     3,     1,     3,     5,     5,
       0,     3,     1,     3,     1,     3,     7,     1,     2,     3,
       1,     1,     5,     7,     5,     7,     9,     8,     5,     2,
       2,     3,     1,     3,     4,     3,     0,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     3,     1,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     2,     2,     2,     2,     2,     2,     2,     4,
       4,     1,     4,     2,     2,     4,     3,     3,     6,     0,
       1,     1,     3,     1,     1,     1,     3,     3,     1,     1,
       1,     1,     2,     0,     1,     1,     3,     4,     2,     4,
       0,     1,     2,     1,     2,     2,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,    78,    76,    75,    80,    81,    77,    79,
      82,    83,    84,    85,    86,     0,     0,     0,    19,     0,
      30,    22,    28,    25,    26,    27,    29,    20,    21,    24,
      23,     0,     0,     0,     0,     3,     0,    50,    10,    12,
      14,    15,    16,    17,    18,    13,    87,    88,     7,     0,
       4,     6,    94,     0,    95,     0,   109,   112,     0,     0,
       0,    35,    35,     5,    78,    52,    11,     9,    43,     8,
      45,     0,    51,    13,     0,     0,     0,    91,    90,    50,
       0,   100,   103,     0,     0,   112,   117,     0,   113,   114,
       0,     0,   243,   251,   248,   249,   250,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   201,
     202,   204,   206,   209,   214,   217,   221,   231,   244,   245,
       0,    39,    40,    41,    35,     0,    36,    37,     0,    56,
      54,    53,    50,     0,    58,    50,    49,   130,   128,   122,
       0,     0,    93,   106,    92,     0,   104,    96,   101,     0,
      97,     0,     0,   110,   116,    32,    31,     0,   228,     0,
       0,   222,   223,     0,   224,   226,   227,   225,     0,   188,
     189,   217,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   233,   234,     0,
     239,     0,   252,    89,     0,    33,     0,    34,    57,    55,
      44,    45,   260,   255,    46,     0,   253,    63,   243,   186,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   137,   167,     0,    47,   170,     0,   131,   132,   182,
     135,   171,     0,    50,     0,   123,   124,    98,   267,   107,
       0,   102,    50,    99,   111,   118,   115,     0,     0,     0,
     247,   246,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   203,   205,   207,   208,   212,   213,
     210,   211,   215,   216,   218,   219,   220,   237,     0,   241,
       0,   240,   236,    42,    38,     0,     0,     0,     0,   261,
       0,   263,    59,   254,     0,    65,    50,     0,    64,     0,
      68,    69,    71,     0,     0,   187,     0,     0,   186,     0,
       0,     0,     0,   179,   180,     0,     0,     0,   134,   129,
     133,   168,   127,     0,     0,   108,   105,   229,     0,   230,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     190,     0,   235,   232,     0,     0,   265,   260,   256,   258,
     262,   264,    60,    73,    62,     0,    61,     0,   183,   169,
       0,     0,   186,     0,     0,     0,     0,   185,   181,   140,
     138,   139,     0,   126,   119,   125,     0,   166,   242,   266,
     257,     0,    66,    70,    72,     0,     0,     0,   186,     0,
       0,   184,     0,   141,   238,   259,   172,   174,   186,     0,
       0,   178,     0,   146,     0,     0,   186,     0,   136,     0,
     142,   147,   154,     0,   173,     0,     0,   175,     0,   148,
     160,     0,   177,     0,   161,   143,   149,   156,     0,   155,
       0,   176,   150,   160,     0,     0,   162,   144,   151,   157,
       0,   158,   152,     0,     0,   164,   145,   153,   163,   159,
       0,   165
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    35,   223,   224,    38,    39,    40,    41,    42,
      43,    44,   125,   126,   127,    67,    68,    69,    70,    71,
      72,   131,   136,   297,   298,   299,   300,   301,   302,    73,
      79,    46,    80,    81,   145,   146,    47,    87,    88,    89,
      48,    49,   234,   235,   236,    50,   225,   226,   227,   228,
     229,   317,   392,   410,   425,   437,   446,   411,   426,   412,
     427,   413,   438,   447,    82,   230,   231,   304,   232,   169,
     170,   109,   110,   111,   112,   113,   114,   171,   116,   280,
     281,   117,   118,   119,   294,   204,   287,   288,   289,   290,
     291,   239
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -398
static const yytype_int16 yypact[] =
{
    -398,  1083,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,
    -398,  -398,  -398,  -398,  -398,     5,     7,     8,  -398,   -77,
    -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,
    -398,   -67,   -45,   -35,   -29,  -398,   -34,   916,  -398,  -398,
    -398,  -398,  -398,  -398,  -398,   -15,  -398,  -398,  -398,    62,
    -398,  -398,   -24,  1278,   -12,  1278,    -7,    96,   423,   740,
     900,    14,    14,  -398,  -398,    87,  -398,     4,  -398,  -398,
      22,    29,  -398,  -398,    40,    34,  1278,  -398,  -398,  1030,
     259,  -398,  -398,  1278,   318,    96,    74,    66,    72,  -398,
      77,    80,  -398,  -398,  -398,  -398,  -398,   761,    84,    91,
     740,   740,    40,   740,   740,   740,   740,   740,    92,   130,
     135,    23,   -13,    48,   -20,  -398,    75,  -398,  -398,   208,
     114,  -398,  -398,  -398,    14,   118,   116,  -398,   120,  -398,
    -398,    87,   -15,   141,  -398,   -15,   -36,   369,  -398,  1230,
     554,   740,  -398,   139,  -398,    50,  -398,  -398,  -398,   569,
    -398,   119,   740,  -398,    96,  -398,  -398,   719,  -398,   740,
     740,  -398,  -398,   125,  -398,  -398,  -398,  -398,   126,  -398,
    -398,   425,   224,   740,   740,   740,   740,   740,   740,   740,
     740,   740,   740,   740,   740,   740,   226,  -398,  -398,   740,
     740,   230,  -398,  -398,   137,  -398,    14,  -398,  -398,  -398,
    -398,    22,   -70,  -398,  -398,   138,   740,  1131,   155,   740,
     142,   143,   145,   458,   148,   740,   164,   147,   149,   246,
     154,  -398,  -398,   153,   979,  -398,   152,   369,  -398,  -398,
    -398,  -398,   156,   979,   159,   157,  -398,  -398,  -398,  -398,
     740,  -398,   -63,  -398,  -398,  -398,  -398,   162,   160,   165,
    -398,  -398,   740,   740,   740,   740,   740,   740,   740,   740,
     740,   740,   740,   167,   135,    23,   -13,   -13,    48,    48,
      48,    48,   -20,   -20,  -398,  -398,  -398,  -398,   185,  -398,
     184,   182,  -398,  -398,  -398,   740,   282,   -65,   141,  -398,
     -32,  -398,  -398,  -398,   192,  -398,   852,   191,   189,   193,
    -398,   195,  -398,   458,   194,  -398,   740,   740,   623,   266,
     740,   211,   458,  -398,  -398,   197,   719,   -10,  -398,  -398,
    -398,  -398,   296,    40,  1230,  -398,  -398,  -398,   740,  -398,
    -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,
    -398,   204,  -398,  -398,   740,   209,  -398,    53,  -398,  -398,
    -398,  -398,  -398,  -398,  -398,   304,  -398,  1179,  -398,  -398,
     213,   214,   740,   207,   216,   217,   458,  -398,  -398,  -398,
    -398,  -398,   311,  -398,  -398,  -398,   219,  -398,  -398,  -398,
    -398,   141,  -398,  -398,  -398,   458,   458,   218,   740,   740,
     458,  -398,   221,    11,  -398,  -398,   295,  -398,   740,   222,
     223,  -398,   240,     9,   458,   243,   740,   242,  -398,   322,
     261,   244,  -398,   341,  -398,   458,   249,  -398,   252,     9,
     254,   253,  -398,   458,  -398,   269,   251,  -398,   350,  -398,
     740,  -398,   351,   254,   258,   265,  -398,   275,   263,  -398,
     740,  -398,   363,   365,   268,  -398,  -398,   293,  -398,  -398,
     404,  -398
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -398,  -398,  -398,     2,     0,   -33,  -398,   474,  -398,  -398,
    -398,  -398,   -38,  -398,   229,  -398,   287,  -398,   -31,   215,
     -53,  -398,  -398,  -398,  -398,  -398,  -398,  -398,    70,     1,
    -398,  -398,   -26,   -57,  -398,   205,  -398,   361,  -398,   297,
    -398,  -398,  -398,  -398,   128,  -398,   -68,  -398,  -398,   227,
    -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,    30,
      20,  -397,  -398,  -398,   455,  -170,  -398,  -208,  -102,   -93,
     -43,  -398,   284,   292,    12,     6,    28,   -59,  -398,  -398,
    -398,  -398,  -398,    97,  -398,  -279,  -398,   121,  -398,  -398,
     181,  -145
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -161
static const yytype_int16 yytable[] =
{
     115,    37,    45,    36,    66,   168,   138,   245,    52,   349,
      54,    56,   130,  -160,    74,   192,   108,   121,   122,   123,
     141,    58,   428,   148,   128,   369,   285,   148,    65,    84,
     286,    59,   134,   370,   163,   371,   428,   347,   158,   348,
     203,   161,   162,   309,   164,   165,   166,   167,   143,   350,
     140,   177,   178,    60,    78,   168,    78,   149,   249,    91,
     206,   120,   207,    61,   285,    75,   248,    63,   286,    62,
     311,   183,   184,   185,   179,   180,    65,    78,   199,    76,
     144,    78,   115,   148,    78,    78,   194,   278,   372,   175,
     176,    83,   148,   115,   403,   325,    85,   279,   238,    86,
     363,   201,   395,   133,   205,   409,   132,   305,    53,   238,
      55,    57,   124,   293,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   274,   275,   276,   135,    22,    23,
      24,    25,   139,   358,   186,   187,   188,   181,   182,   233,
     345,    78,   367,   137,    92,    93,    94,    95,    96,   285,
      78,   241,   242,   286,   387,   152,   115,   380,   247,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     153,   189,   238,   190,   154,   191,   155,    97,    65,   156,
     399,   115,   159,   268,   269,   270,   271,   266,   267,   160,
     405,    66,    98,    99,   172,   203,   391,   238,   416,   173,
      66,   100,   101,   174,   360,   361,   305,   296,   365,   272,
     273,   143,   192,   193,   249,   396,   397,   195,   196,   197,
     401,   102,   240,   244,   250,   251,   115,   103,   263,   277,
     104,   105,   106,   282,   414,   376,   283,   292,   303,   107,
     306,   307,   238,   308,   202,   422,   310,   312,   313,   315,
     314,   378,   316,   431,   318,   374,   319,   321,   323,   324,
     305,   327,   328,    66,   329,   353,   341,    64,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,   342,   343,   344,   346,   305,   400,   203,   352,
     354,   355,   356,   364,   366,   359,   305,   357,   368,   373,
      22,    23,    24,    25,   305,   377,   379,   382,   388,    31,
     362,    32,   385,   386,   389,    93,   390,   120,   394,   398,
     402,   404,   407,   406,   233,   418,    64,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,   408,   415,   417,   419,   421,   420,   444,   423,   424,
     409,   430,   432,   433,   434,   436,   440,   296,   442,    22,
      23,    24,    25,   147,   441,   443,   445,   449,    31,   448,
      32,   435,   208,    93,    94,    95,    96,    64,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,   209,   210,   450,   211,   212,   213,   214,
     215,   216,   217,   218,   219,    97,    19,   451,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   200,
      98,   220,   150,    33,    34,   284,   221,   384,    90,   100,
     101,    64,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,   151,   326,   322,   102,
     429,   246,   375,   439,   320,   103,    51,   264,   104,   105,
     106,   208,    93,    94,    95,    96,   265,   107,   381,   393,
     222,   351,   137,     0,     0,    32,     0,     0,     0,     0,
       0,     0,   209,   210,     0,   211,   212,   213,   214,   215,
     216,   217,   218,   219,    97,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,     0,   262,     0,     0,    98,
      99,     0,     0,     0,     0,   221,     0,     0,   100,   101,
       0,     0,     0,     0,     0,     0,     0,    77,     0,    77,
       0,     0,     0,     0,     0,     0,     0,     0,   102,   129,
       0,     0,     0,     0,   103,     0,     0,   104,   105,   106,
      77,     0,     0,   142,    77,     0,   107,    77,    77,   222,
       0,   137,    64,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    64,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,     0,     0,     0,    22,    23,    24,    25,     0,
       0,     0,     0,     0,    31,   198,    32,     0,     0,     0,
      22,    23,    24,    25,    77,     0,     0,     0,     0,    31,
       0,    32,     0,    77,     0,     0,    92,    93,    94,    95,
      96,    64,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,    97,
      19,     0,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   243,    98,   220,     0,    33,    34,     0,
       0,     0,     0,   100,   101,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   102,     0,     0,     0,     0,     0,   103,
       0,     0,   104,   105,   106,     0,     0,     0,     0,     0,
       0,   107,    92,    93,    94,    95,    96,    64,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,     0,    92,    93,    94,    95,    96,     0,     0,
       0,     0,     0,     0,     0,    97,     0,     0,     0,     0,
       0,     0,     0,     0,    92,    93,    94,    95,    96,     0,
      98,   220,     0,     0,     0,     0,    97,     0,     0,   100,
     101,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    98,    99,     0,     0,     0,     0,    97,     0,   102,
     100,   101,     0,     0,     0,   103,     0,     0,   104,   105,
     106,     0,    98,    99,     0,     0,     0,   107,     0,     0,
     102,   100,   101,     0,     0,     0,   103,     0,     0,   104,
     105,   106,     0,     0,     0,     0,     0,     0,   107,     0,
       0,   102,     0,     0,     0,     0,     0,   103,     0,     0,
     104,   105,   106,     0,     0,     0,     0,     0,     0,   157,
      64,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    19,
       0,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,     0,     0,    32,     0,    33,    34,    64,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,     0,    64,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
       0,     0,     0,    65,     0,     0,     0,     0,     0,     0,
       0,   -74,    32,    19,   -74,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,     0,     0,    32,     0,
      33,    34,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    64,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,     0,     0,     0,     0,    65,     0,     0,
       0,     0,     0,     0,     0,     0,    19,   -47,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     0,
       0,    32,     0,    33,    34,     0,     0,     0,    64,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,    32,     2,     0,     0,     0,     0,     0,     0,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,     0,     0,     0,
       0,     0,     0,   141,     0,     0,     0,     0,     0,     0,
      19,    65,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,   295,    32,     0,    33,    34,    64,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    19,     0,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,     0,     0,    32,     0,    33,    34,    64,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    19,     0,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     0,
       0,    32,     0,    33,    34,     0,     0,   383,    64,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    19,     0,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
       0,     0,    32,     0,    33,    34,    64,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
      23,    24,    25,     0,     0,     0,     0,     0,    31,     0,
      32
};

static const yytype_int16 yycheck[] =
{
      59,     1,     1,     1,    37,   107,    74,   152,     3,   288,
       3,     3,    65,     4,    45,     4,    59,     3,     4,     5,
      83,    98,   419,    80,    62,    35,    96,    84,    91,    55,
     100,    98,     3,    43,   102,    45,   433,   102,    97,   104,
     133,   100,   101,   213,   103,   104,   105,   106,    79,    81,
      76,    64,    65,    98,    53,   157,    55,    83,   160,    58,
      96,    60,    98,    98,    96,     3,   159,   101,   100,    98,
     215,    91,    92,    93,    87,    88,    91,    76,   131,   103,
      79,    80,   141,   140,    83,    84,   124,   189,    98,    66,
      67,   103,   149,   152,    83,   240,   103,   190,   141,     3,
     308,   132,   381,    81,   135,    96,   102,   209,   103,   152,
     103,   103,    98,   206,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,    98,    41,    42,
      43,    44,    98,   303,    59,    60,    61,    89,    90,   139,
     285,   140,   312,   103,     3,     4,     5,     6,     7,    96,
     149,   101,   102,   100,   362,    81,   215,   104,   157,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     104,    96,   215,    98,   102,   100,    99,    36,    91,    99,
     388,   240,    98,   177,   178,   179,   180,   175,   176,    98,
     398,   224,    51,    52,   102,   288,   366,   240,   406,    69,
     233,    60,    61,    68,   306,   307,   308,   207,   310,   181,
     182,   242,     4,    99,   316,   385,   386,    99,   102,    99,
     390,    80,    83,   104,    99,    99,   285,    86,     4,     3,
      89,    90,    91,     3,   404,   328,    99,    99,    83,    98,
      98,    98,   285,    98,   103,   415,    98,    83,   101,     3,
     101,   344,    98,   423,   101,   323,   104,   101,    99,   102,
     362,    99,   102,   296,    99,   296,    99,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    97,    99,   102,     3,   388,   389,   381,    97,
      99,   102,    99,    27,    83,   101,   398,   102,   101,     3,
      41,    42,    43,    44,   406,   101,    97,     3,   101,    50,
     308,    52,    99,    99,    98,     4,    99,   316,    99,   101,
      99,    26,    99,   101,   324,     3,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,   101,    99,   101,    83,     4,   102,   440,    99,    97,
      96,    98,    83,   102,     4,     4,    98,   357,    83,    41,
      42,    43,    44,   104,    99,   102,     3,    99,    50,     4,
      52,   430,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,   102,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,     3,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,   132,
      51,    52,   104,    54,    55,   196,    57,   357,     5,    60,
      61,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    85,   242,   233,    80,
     420,   154,   324,   433,   227,    86,     1,   173,    89,    90,
      91,     3,     4,     5,     6,     7,   174,    98,   347,   372,
     101,   290,   103,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    -1,    81,    -1,    -1,    51,
      52,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    65,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    89,    90,    91,
      76,    -1,    -1,    79,    80,    -1,    98,    83,    84,   101,
      -1,   103,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    41,    42,    43,    44,    -1,
      -1,    -1,    -1,    -1,    50,   131,    52,    -1,    -1,    -1,
      41,    42,    43,    44,   140,    -1,    -1,    -1,    -1,    50,
      -1,    52,    -1,   149,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,    36,
      37,    -1,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,   104,    51,    52,    -1,    54,    55,    -1,
      -1,    -1,    -1,    60,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    98,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,
      51,    52,    -1,    -1,    -1,    -1,    36,    -1,    -1,    60,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    52,    -1,    -1,    -1,    -1,    36,    -1,    80,
      60,    61,    -1,    -1,    -1,    86,    -1,    -1,    89,    90,
      91,    -1,    51,    52,    -1,    -1,    -1,    98,    -1,    -1,
      80,    60,    61,    -1,    -1,    -1,    86,    -1,    -1,    89,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    80,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    98,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    -1,    52,    -1,    54,    55,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,    52,    37,   102,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    -1,    52,    -1,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,   101,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      -1,    52,    -1,    54,    55,    -1,    -1,    -1,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,     0,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    91,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,     3,    52,    -1,    54,    55,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    -1,    52,    -1,    54,    55,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      -1,    52,    -1,    54,    55,    -1,    -1,    58,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    -1,    52,    -1,    54,    55,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      42,    43,    44,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      52
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   106,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    37,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    52,    54,    55,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   134,   136,   141,   145,   146,
     150,   169,     3,   103,     3,   103,     3,   103,    98,    98,
      98,    98,    98,   101,     8,    91,   110,   120,   121,   122,
     123,   124,   125,   134,   123,     3,   103,   112,   134,   135,
     137,   138,   169,   103,   137,   103,     3,   142,   143,   144,
       5,   134,     3,     4,     5,     6,     7,    36,    51,    52,
      60,    61,    80,    86,    89,    90,    91,    98,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   186,   187,   188,
     134,     3,     4,     5,    98,   117,   118,   119,   117,   112,
     125,   126,   102,    81,     3,    98,   127,   103,   151,    98,
     137,    83,   112,   123,   134,   139,   140,   104,   138,   137,
     104,   142,    81,   104,   102,    99,    99,    98,   182,    98,
      98,   182,   182,   151,   182,   182,   182,   182,   173,   174,
     175,   182,   102,    69,    68,    66,    67,    64,    65,    87,
      88,    89,    90,    91,    92,    93,    59,    60,    61,    96,
      98,   100,     4,    99,   117,    99,   102,    99,   112,   125,
     121,   123,   103,   174,   190,   123,    96,    98,     3,    24,
      25,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      52,    57,   101,   108,   109,   151,   152,   153,   154,   155,
     170,   171,   173,   109,   147,   148,   149,   104,   175,   196,
      83,   101,   102,   104,   104,   196,   144,   134,   174,   173,
      99,    99,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    81,     4,   177,   178,   179,   179,   180,   180,
     180,   180,   181,   181,   182,   182,   182,     3,   173,   174,
     184,   185,     3,    99,   119,    96,   100,   191,   192,   193,
     194,   195,    99,   174,   189,     3,   109,   128,   129,   130,
     131,   132,   133,    83,   172,   173,    98,    98,    98,   170,
      98,   196,    83,   101,   101,     3,    98,   156,   101,   104,
     154,   101,   124,    99,   102,   196,   140,    99,   102,    99,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,    99,    97,    99,   102,   196,     3,   102,   104,   190,
      81,   195,    97,   123,    99,   102,    99,   102,   170,   101,
     173,   173,   108,   172,    27,   173,    83,   170,   101,    35,
      43,    45,    98,     3,   151,   149,   174,   101,   174,    97,
     104,   192,     3,    58,   133,    99,    99,   172,   101,    98,
      99,   170,   157,   188,    99,   190,   170,   170,   101,   172,
     173,   170,    99,    83,    26,   172,   101,    99,   101,    96,
     158,   162,   164,   166,   170,    99,   172,   101,     3,    83,
     102,     4,   170,    99,    97,   159,   163,   165,   166,   164,
      98,   170,    83,   102,     4,   182,     4,   160,   167,   165,
      98,    99,    83,   102,   174,     3,   161,   168,     4,    99,
     102,     3
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
        case 119:
#line 318 "comelang2/comelang.y"
    { cb_on_function_simple((yyvsp[(2) - (6)].sval), (yyvsp[(4) - (6)].ival)); ;}
    break;

  case 122:
#line 327 "comelang2/comelang.y"
    { (yyval.ival) = 0; ;}
    break;

  case 123:
#line 328 "comelang2/comelang.y"
    { (yyval.ival) = (yyvsp[(1) - (1)].ival); ;}
    break;

  case 124:
#line 332 "comelang2/comelang.y"
    { (yyval.ival) = 1; ;}
    break;

  case 125:
#line 333 "comelang2/comelang.y"
    { (yyval.ival) = (yyvsp[(1) - (3)].ival) + 1; ;}
    break;

  case 167:
#line 444 "comelang2/comelang.y"
    { (yyval.node) = cb_stmt_empty(); ;}
    break;

  case 168:
#line 445 "comelang2/comelang.y"
    { (yyval.node) = cb_expr_stmt((yyvsp[(1) - (2)].node)); ;}
    break;

  case 169:
#line 446 "comelang2/comelang.y"
    { (yyval.node) = cb_stmt_return((yyvsp[(2) - (3)].node)); ;}
    break;

  case 170:
#line 447 "comelang2/comelang.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 171:
#line 448 "comelang2/comelang.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 172:
#line 449 "comelang2/comelang.y"
    { (yyval.node) = NULL; ;}
    break;

  case 173:
#line 450 "comelang2/comelang.y"
    { (yyval.node) = NULL; ;}
    break;

  case 174:
#line 451 "comelang2/comelang.y"
    { (yyval.node) = NULL; ;}
    break;

  case 175:
#line 452 "comelang2/comelang.y"
    { (yyval.node) = NULL; ;}
    break;

  case 176:
#line 453 "comelang2/comelang.y"
    { (yyval.node) = NULL; ;}
    break;

  case 177:
#line 454 "comelang2/comelang.y"
    { (yyval.node) = NULL; ;}
    break;

  case 178:
#line 455 "comelang2/comelang.y"
    { (yyval.node) = NULL; ;}
    break;

  case 179:
#line 456 "comelang2/comelang.y"
    { (yyval.node) = NULL; ;}
    break;

  case 180:
#line 457 "comelang2/comelang.y"
    { (yyval.node) = NULL; ;}
    break;

  case 181:
#line 458 "comelang2/comelang.y"
    { (yyval.node) = NULL; ;}
    break;

  case 182:
#line 459 "comelang2/comelang.y"
    { (yyval.node) = NULL; ;}
    break;

  case 186:
#line 469 "comelang2/comelang.y"
    { (yyval.node) = NULL; ;}
    break;

  case 187:
#line 470 "comelang2/comelang.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 188:
#line 475 "comelang2/comelang.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 214:
#line 522 "comelang2/comelang.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 215:
#line 523 "comelang2/comelang.y"
    { (yyval.node) = cb_binary("+", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 216:
#line 524 "comelang2/comelang.y"
    { (yyval.node) = cb_binary("-", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 217:
#line 528 "comelang2/comelang.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 218:
#line 529 "comelang2/comelang.y"
    { (yyval.node) = cb_binary("*", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 219:
#line 530 "comelang2/comelang.y"
    { (yyval.node) = cb_binary("/", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 220:
#line 531 "comelang2/comelang.y"
    { (yyval.node) = cb_binary("%", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 221:
#line 535 "comelang2/comelang.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 222:
#line 536 "comelang2/comelang.y"
    { (yyval.node) = cb_unary("pre++", (yyvsp[(2) - (2)].node)); ;}
    break;

  case 223:
#line 537 "comelang2/comelang.y"
    { (yyval.node) = cb_unary("pre--", (yyvsp[(2) - (2)].node)); ;}
    break;

  case 224:
#line 538 "comelang2/comelang.y"
    { (yyval.node) = cb_unary("&", (yyvsp[(2) - (2)].node)); ;}
    break;

  case 225:
#line 539 "comelang2/comelang.y"
    { (yyval.node) = cb_unary("*", (yyvsp[(2) - (2)].node)); ;}
    break;

  case 226:
#line 540 "comelang2/comelang.y"
    { (yyval.node) = cb_unary("+", (yyvsp[(2) - (2)].node)); ;}
    break;

  case 227:
#line 541 "comelang2/comelang.y"
    { (yyval.node) = cb_unary("-", (yyvsp[(2) - (2)].node)); ;}
    break;

  case 228:
#line 542 "comelang2/comelang.y"
    { (yyval.node) = cb_unary("sizeof", (yyvsp[(2) - (2)].node)); ;}
    break;

  case 229:
#line 543 "comelang2/comelang.y"
    { (yyval.node) = cb_int_literal("0", gInfo); ;}
    break;

  case 230:
#line 544 "comelang2/comelang.y"
    { (yyval.node) = (yyvsp[(3) - (4)].node); ;}
    break;

  case 231:
#line 548 "comelang2/comelang.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 232:
#line 549 "comelang2/comelang.y"
    { (yyval.node) = cb_call((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node)); ;}
    break;

  case 233:
#line 550 "comelang2/comelang.y"
    { (yyval.node) = cb_unary("post++", (yyvsp[(1) - (2)].node)); ;}
    break;

  case 234:
#line 551 "comelang2/comelang.y"
    { (yyval.node) = cb_unary("post--", (yyvsp[(1) - (2)].node)); ;}
    break;

  case 235:
#line 552 "comelang2/comelang.y"
    { (yyval.node) = cb_index((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node)); ;}
    break;

  case 236:
#line 553 "comelang2/comelang.y"
    { (yyval.node) = cb_member((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].sval), 0); ;}
    break;

  case 237:
#line 554 "comelang2/comelang.y"
    { (yyval.node) = cb_member((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].sval), 1); ;}
    break;

  case 238:
#line 555 "comelang2/comelang.y"
    { (yyval.node) = cb_binary("_Generic", (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node)); ;}
    break;

  case 239:
#line 559 "comelang2/comelang.y"
    { (yyval.node) = cb_list_new(); ;}
    break;

  case 240:
#line 560 "comelang2/comelang.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 241:
#line 564 "comelang2/comelang.y"
    { (yyval.node) = cb_list_append(cb_list_new(), (yyvsp[(1) - (1)].node)); ;}
    break;

  case 242:
#line 565 "comelang2/comelang.y"
    { (yyval.node) = cb_list_append((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 243:
#line 569 "comelang2/comelang.y"
    { (yyval.node) = cb_ident((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 244:
#line 570 "comelang2/comelang.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 245:
#line 571 "comelang2/comelang.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 246:
#line 572 "comelang2/comelang.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 247:
#line 573 "comelang2/comelang.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 248:
#line 577 "comelang2/comelang.y"
    { (yyval.node) = cb_int_literal((yyvsp[(1) - (1)].sval), gInfo); ;}
    break;

  case 249:
#line 578 "comelang2/comelang.y"
    { (yyval.node) = cb_float_literal((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 250:
#line 579 "comelang2/comelang.y"
    { (yyval.node) = cb_char_literal((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 251:
#line 583 "comelang2/comelang.y"
    { (yyval.node) = cb_string_literal((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 252:
#line 584 "comelang2/comelang.y"
    { (yyval.node) = cb_binary("strcat", (yyvsp[(1) - (2)].node), cb_string_literal((yyvsp[(2) - (2)].sval))); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2454 "comelang2/parser.c"
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


#line 628 "comelang2/comelang.y"


