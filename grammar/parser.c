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
#line 8 "grammar/comelang.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yylex(void);
static void yyerror(const char* msg)
{
  fprintf(stderr, "parse error: %s\n", msg);
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
#line 45 "grammar/comelang.y"
{
  char* sval;
}
/* Line 193 of yacc.c.  */
#line 272 "grammar/parser.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 285 "grammar/parser.c"

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
#define YYLAST   1245

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  105
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  87
/* YYNRULES -- Number of rules.  */
#define YYNRULES  257
/* YYNRULES -- Number of states.  */
#define YYNSTATES  436

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
       0,     0,     3,     4,     7,     9,    12,    14,    17,    20,
      22,    25,    27,    29,    31,    33,    35,    37,    39,    41,
      43,    45,    47,    49,    51,    53,    55,    57,    59,    61,
      63,    68,    73,    78,    83,    84,    86,    88,    92,    94,
      96,    98,   102,   104,   108,   110,   114,   115,   117,   120,
     121,   123,   125,   128,   131,   135,   137,   140,   142,   146,
     151,   156,   161,   162,   164,   166,   170,   171,   173,   175,
     179,   181,   185,   188,   190,   192,   194,   196,   198,   200,
     202,   204,   206,   208,   210,   212,   214,   216,   218,   223,
     225,   227,   230,   233,   236,   239,   244,   249,   255,   261,
     263,   266,   270,   272,   274,   278,   280,   283,   287,   290,
     295,   301,   302,   304,   306,   310,   313,   315,   319,   323,
     327,   328,   330,   332,   335,   338,   340,   347,   348,   351,
     354,   357,   359,   363,   369,   377,   387,   388,   390,   391,
     393,   394,   396,   397,   399,   401,   405,   407,   411,   417,
     423,   424,   428,   430,   434,   436,   440,   448,   450,   453,
     457,   459,   461,   467,   475,   481,   489,   499,   508,   514,
     517,   520,   524,   526,   530,   535,   539,   540,   542,   544,
     546,   550,   554,   558,   562,   566,   570,   574,   578,   582,
     586,   590,   592,   594,   598,   600,   604,   606,   610,   614,
     616,   620,   624,   628,   632,   634,   638,   642,   644,   648,
     652,   656,   658,   661,   664,   667,   670,   673,   676,   679,
     684,   689,   691,   696,   699,   702,   707,   711,   715,   722,
     723,   725,   727,   731,   733,   735,   737,   741,   745,   747,
     749,   751,   753,   756,   757,   759,   761,   765,   770,   773,
     778,   779,   781,   784,   786,   789,   792,   796
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     106,     0,    -1,    -1,   106,   107,    -1,   145,    -1,   108,
     101,    -1,   164,    -1,   109,   122,    -1,   109,   120,    -1,
     110,    -1,   109,   110,    -1,   111,    -1,   134,    -1,   112,
      -1,   113,    -1,   114,    -1,   115,    -1,   116,    -1,    23,
      -1,    46,    -1,    47,    -1,    40,    -1,    49,    -1,    48,
      -1,    42,    -1,    43,    -1,    44,    -1,    41,    -1,    45,
      -1,    39,    -1,    37,    98,   134,    99,    -1,    37,    98,
       5,    99,    -1,    54,    98,   117,    99,    -1,    55,    98,
     117,    99,    -1,    -1,   118,    -1,   119,    -1,   118,   102,
     119,    -1,     3,    -1,     4,    -1,     5,    -1,    98,   117,
      99,    -1,   121,    -1,   120,   102,   121,    -1,   123,    -1,
     123,    81,   185,    -1,    -1,   123,    -1,   124,   127,    -1,
      -1,   125,    -1,    91,    -1,    91,   126,    -1,    91,   125,
      -1,    91,   126,   125,    -1,   112,    -1,   126,   112,    -1,
       3,    -1,    98,   123,    99,    -1,   127,    96,   184,    97,
      -1,   127,    98,   130,    99,    -1,   127,    98,   128,    99,
      -1,    -1,   129,    -1,     3,    -1,   129,   102,     3,    -1,
      -1,   131,    -1,   132,    -1,   132,   102,    58,    -1,   133,
      -1,   132,   102,   133,    -1,   109,   123,    -1,   109,    -1,
      10,    -1,     9,    -1,    13,    -1,     8,    -1,    14,    -1,
      11,    -1,    12,    -1,    15,    -1,    16,    -1,    17,    -1,
      18,    -1,    19,    -1,   136,    -1,   141,    -1,    52,    98,
     134,    99,    -1,   134,    -1,   112,    -1,   135,   134,    -1,
     135,   112,    -1,    20,     3,    -1,    21,     3,    -1,    20,
     103,   137,   104,    -1,    21,   103,   137,   104,    -1,    20,
       3,   103,   137,   104,    -1,    21,     3,   103,   137,   104,
      -1,   138,    -1,   137,   138,    -1,   135,   139,   101,    -1,
     164,    -1,   140,    -1,   139,   102,   140,    -1,   123,    -1,
      83,   191,    -1,   123,    83,   191,    -1,    22,     3,    -1,
      22,   103,   142,   104,    -1,    22,     3,   103,   142,   104,
      -1,    -1,   143,    -1,   144,    -1,   143,   102,   144,    -1,
     143,   102,    -1,     3,    -1,     3,    81,   191,    -1,   134,
     123,   146,    -1,   103,   147,   104,    -1,    -1,   148,    -1,
     149,    -1,   148,   149,    -1,   108,   101,    -1,   165,    -1,
      57,   151,    98,   152,    99,   101,    -1,    -1,   151,    43,
      -1,   151,    45,    -1,   151,    35,    -1,   183,    -1,   183,
      83,   153,    -1,   183,    83,   153,    83,   154,    -1,   183,
      83,   153,    83,   154,    83,   155,    -1,   183,    83,   153,
      83,   154,    83,   155,    83,   156,    -1,    -1,   157,    -1,
      -1,   158,    -1,    -1,   162,    -1,    -1,   163,    -1,   159,
      -1,   157,   102,   159,    -1,   160,    -1,   158,   102,   160,
      -1,   161,     4,    98,   177,    99,    -1,   161,     4,    98,
     169,    99,    -1,    -1,    96,     3,    97,    -1,     4,    -1,
     162,   102,     4,    -1,     3,    -1,   163,   102,     3,    -1,
      50,    98,   170,   102,     4,    99,   101,    -1,   101,    -1,
     168,   101,    -1,    24,   167,   101,    -1,   146,    -1,   166,
      -1,    25,    98,   168,    99,   165,    -1,    25,    98,   168,
      99,   165,    26,   165,    -1,    27,    98,   168,    99,   165,
      -1,    29,   165,    27,    98,   168,    99,   101,    -1,    28,
      98,   167,   101,   167,   101,   167,    99,   165,    -1,    28,
      98,   108,   167,   101,   167,    99,   165,    -1,    30,    98,
     168,    99,   165,    -1,    33,   101,    -1,    34,   101,    -1,
      35,     3,   101,    -1,   150,    -1,     3,    83,   165,    -1,
      31,   191,    83,   165,    -1,    32,    83,   165,    -1,    -1,
     168,    -1,   169,    -1,   170,    -1,   177,    81,   169,    -1,
     177,    70,   169,    -1,   177,    71,   169,    -1,   177,    72,
     169,    -1,   177,    73,   169,    -1,   177,    74,   169,    -1,
     177,    75,   169,    -1,   177,    76,   169,    -1,   177,    77,
     169,    -1,   177,    78,   169,    -1,   177,    79,   169,    -1,
     171,    -1,   172,    -1,   171,    69,   172,    -1,   173,    -1,
     172,    68,   173,    -1,   174,    -1,   173,    66,   174,    -1,
     173,    67,   174,    -1,   175,    -1,   174,    87,   175,    -1,
     174,    88,   175,    -1,   174,    64,   175,    -1,   174,    65,
     175,    -1,   176,    -1,   175,    89,   176,    -1,   175,    90,
     176,    -1,   177,    -1,   176,    91,   177,    -1,   176,    92,
     177,    -1,   176,    93,   177,    -1,   178,    -1,    60,   177,
      -1,    61,   177,    -1,    86,   177,    -1,    91,   177,    -1,
      89,   177,    -1,    90,   177,    -1,    36,   177,    -1,    36,
      98,   134,    99,    -1,    52,    98,   168,    99,    -1,   181,
      -1,   178,    98,   179,    99,    -1,   178,    60,    -1,   178,
      61,    -1,   178,    96,   168,    97,    -1,   178,   100,     3,
      -1,   178,    59,     3,    -1,    51,    98,   169,   102,   169,
      99,    -1,    -1,   180,    -1,   169,    -1,   180,   102,   169,
      -1,     3,    -1,   182,    -1,   183,    -1,    98,   168,    99,
      -1,    80,   146,    99,    -1,     5,    -1,     6,    -1,     7,
      -1,     4,    -1,   183,     4,    -1,    -1,   169,    -1,   169,
      -1,   103,   186,   104,    -1,   103,   186,   102,   104,    -1,
     187,   185,    -1,   186,   102,   187,   185,    -1,    -1,   188,
      -1,   189,    81,    -1,   190,    -1,   189,   190,    -1,   100,
       3,    -1,    96,   191,    97,    -1,   170,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    69,    69,    71,    75,    76,    77,    82,    83,    87,
      88,    92,    93,    94,    95,    96,    97,    98,   102,   103,
     104,   105,   106,   107,   111,   112,   113,   114,   118,   119,
     123,   124,   128,   132,   135,   137,   141,   142,   146,   147,
     148,   149,   153,   154,   158,   159,   162,   164,   169,   172,
     174,   178,   179,   180,   181,   185,   186,   190,   191,   192,
     193,   194,   197,   199,   203,   204,   207,   209,   213,   214,
     218,   219,   223,   224,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   247,
     248,   249,   250,   254,   255,   256,   257,   258,   259,   263,
     264,   268,   269,   273,   274,   278,   279,   280,   284,   285,
     286,   289,   291,   295,   296,   297,   301,   302,   306,   310,
     313,   315,   319,   320,   324,   325,   330,   333,   335,   336,
     337,   343,   344,   345,   346,   347,   350,   352,   355,   357,
     360,   362,   365,   367,   371,   372,   376,   377,   381,   385,
     388,   390,   394,   395,   399,   400,   404,   408,   409,   410,
     411,   412,   413,   414,   415,   416,   417,   418,   419,   420,
     421,   422,   423,   427,   428,   429,   432,   434,   439,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   458,   462,   463,   467,   468,   472,   473,   474,   478,
     479,   480,   481,   482,   486,   487,   488,   492,   493,   494,
     495,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   512,   513,   514,   515,   516,   517,   518,   519,   522,
     524,   528,   529,   533,   534,   535,   536,   537,   541,   542,
     543,   547,   548,   552,   554,   559,   560,   561,   565,   566,
     569,   571,   575,   579,   580,   584,   585,   589
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
       0,   105,   106,   106,   107,   107,   107,   108,   108,   109,
     109,   110,   110,   110,   110,   110,   110,   110,   111,   111,
     111,   111,   111,   111,   112,   112,   112,   112,   113,   113,
     114,   114,   115,   116,   117,   117,   118,   118,   119,   119,
     119,   119,   120,   120,   121,   121,   122,   122,   123,   124,
     124,   125,   125,   125,   125,   126,   126,   127,   127,   127,
     127,   127,   128,   128,   129,   129,   130,   130,   131,   131,
     132,   132,   133,   133,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   135,
     135,   135,   135,   136,   136,   136,   136,   136,   136,   137,
     137,   138,   138,   139,   139,   140,   140,   140,   141,   141,
     141,   142,   142,   143,   143,   143,   144,   144,   145,   146,
     147,   147,   148,   148,   149,   149,   150,   151,   151,   151,
     151,   152,   152,   152,   152,   152,   153,   153,   154,   154,
     155,   155,   156,   156,   157,   157,   158,   158,   159,   160,
     161,   161,   162,   162,   163,   163,   164,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   166,   166,   166,   167,   167,   168,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   169,
     169,   170,   171,   171,   172,   172,   173,   173,   173,   174,
     174,   174,   174,   174,   175,   175,   175,   176,   176,   176,
     176,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   178,   178,   178,   178,   178,   178,   178,   178,   179,
     179,   180,   180,   181,   181,   181,   181,   181,   182,   182,
     182,   183,   183,   184,   184,   185,   185,   185,   186,   186,
     187,   187,   188,   189,   189,   190,   190,   191
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     1,     2,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     4,     4,     0,     1,     1,     3,     1,     1,
       1,     3,     1,     3,     1,     3,     0,     1,     2,     0,
       1,     1,     2,     2,     3,     1,     2,     1,     3,     4,
       4,     4,     0,     1,     1,     3,     0,     1,     1,     3,
       1,     3,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     1,
       1,     2,     2,     2,     2,     4,     4,     5,     5,     1,
       2,     3,     1,     1,     3,     1,     2,     3,     2,     4,
       5,     0,     1,     1,     3,     2,     1,     3,     3,     3,
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
       2,     0,     1,    77,    75,    74,    79,    80,    76,    78,
      81,    82,    83,    84,    85,     0,     0,     0,    18,     0,
      29,    21,    27,    24,    25,    26,    28,    19,    20,    23,
      22,     0,     0,     0,     0,     3,     0,    46,     9,    11,
      13,    14,    15,    16,    17,    12,    86,    87,     4,     6,
      93,     0,    94,     0,   108,   111,     0,     0,     0,    34,
      34,     5,    51,    10,     8,    42,     7,    44,     0,    50,
      12,     0,     0,    90,    89,    49,     0,    99,   102,     0,
       0,   111,   116,     0,   112,   113,     0,     0,   233,   241,
     238,   239,   240,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   191,   192,   194,   196,   199,
     204,   207,   211,   221,   234,   235,     0,    38,    39,    40,
      34,     0,    35,    36,     0,    55,    53,    52,    49,     0,
      57,    49,    48,   120,   118,     0,     0,    92,   105,    91,
       0,   103,    95,   100,     0,    96,     0,     0,   109,   115,
      31,    30,     0,   218,     0,     0,   212,   213,     0,   214,
     216,   217,   215,     0,   178,   179,   207,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   223,   224,     0,   229,     0,   242,    88,     0,
      32,     0,    33,    56,    54,    43,    44,   250,   245,    45,
       0,   243,    62,   233,   176,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   127,   157,     0,   160,
       0,   121,   122,   172,   125,   161,     0,    97,   257,   106,
       0,   101,    49,    98,   110,   117,   114,     0,     0,     0,
     237,   236,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   193,   195,   197,   198,   202,   203,
     200,   201,   205,   206,   208,   209,   210,   227,     0,   231,
       0,   230,   226,    41,    37,     0,     0,     0,     0,   251,
       0,   253,    58,   244,     0,    64,    49,     0,    63,     0,
      67,    68,    70,     0,     0,   177,     0,     0,   176,     0,
       0,     0,     0,   169,   170,     0,     0,     0,   124,   119,
     123,   158,   107,   104,   219,     0,   220,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   180,     0,   225,
     222,     0,     0,   255,   250,   246,   248,   252,   254,    59,
      72,    61,     0,    60,     0,   173,   159,     0,     0,   176,
       0,     0,     0,     0,   175,   171,   130,   128,   129,     0,
       0,   156,   232,   256,   247,     0,    65,    69,    71,     0,
       0,     0,   176,     0,     0,   174,     0,   131,   228,   249,
     162,   164,   176,     0,     0,   168,     0,   136,     0,     0,
     176,     0,   126,     0,   132,   137,   144,     0,   163,     0,
       0,   165,     0,   138,   150,     0,   167,     0,   151,   133,
     139,   146,     0,   145,     0,   166,   140,   150,     0,     0,
     152,   134,   141,   147,     0,   148,   142,     0,     0,   154,
     135,   143,   153,   149,     0,   155
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    35,   218,    37,    38,    39,    40,    41,    42,
      43,    44,   121,   122,   123,    64,    65,    66,   138,    68,
      69,   127,   132,   287,   288,   289,   290,   291,   292,    74,
      75,    46,    76,    77,   140,   141,    47,    83,    84,    85,
      48,   219,   220,   221,   222,   223,   307,   376,   394,   409,
     421,   430,   395,   410,   396,   411,   397,   422,   431,    78,
     224,   225,   294,   226,   164,   165,   105,   106,   107,   108,
     109,   110,   166,   112,   270,   271,   113,   114,   115,   284,
     199,   277,   278,   279,   280,   281,   229
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -369
static const yytype_int16 yypact[] =
{
    -369,  1046,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,
    -369,  -369,  -369,  -369,  -369,     4,     6,     7,  -369,   -66,
    -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,
    -369,   -44,   -26,   -20,    -6,  -369,   -60,   942,  -369,  -369,
    -369,  -369,  -369,  -369,  -369,   -10,  -369,  -369,  -369,  -369,
      -9,  1193,    -4,  1193,     2,   123,   409,   228,   926,    10,
      10,  -369,   120,  -369,    30,  -369,  -369,    65,     8,  -369,
    -369,    45,  1193,  -369,  -369,   993,   540,  -369,  -369,  1193,
     555,   123,    70,    74,    67,  -369,    68,    75,  -369,  -369,
    -369,  -369,  -369,   787,    82,    83,   228,   228,    45,   228,
     228,   228,   228,   228,    80,   114,   118,    -1,   -17,   -21,
      63,  -369,   178,  -369,  -369,   184,    90,  -369,  -369,  -369,
      10,    93,    91,  -369,   100,  -369,  -369,   120,   -10,   124,
    -369,   -10,   -36,   355,  -369,   604,   228,  -369,   122,  -369,
     -13,  -369,  -369,  -369,   619,  -369,    97,   228,  -369,   123,
    -369,  -369,   766,  -369,   228,   228,  -369,  -369,   104,  -369,
    -369,  -369,  -369,   109,  -369,  -369,   257,   208,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   213,  -369,  -369,   228,   228,   214,  -369,  -369,   121,
    -369,    10,  -369,  -369,  -369,  -369,    65,   -71,  -369,  -369,
     129,   228,  1094,   136,   228,   131,   138,   142,   444,   143,
     228,   160,   150,   151,   253,   162,  -369,  -369,   157,  -369,
     158,   355,  -369,  -369,  -369,  -369,   164,  -369,  -369,  -369,
     228,  -369,   -30,  -369,  -369,  -369,  -369,   167,   159,   168,
    -369,  -369,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   169,   118,    -1,   -17,   -17,   -21,   -21,
     -21,   -21,    63,    63,  -369,  -369,  -369,  -369,   172,  -369,
     171,   173,  -369,  -369,  -369,   228,   268,   -28,   124,  -369,
     -62,  -369,  -369,  -369,   180,  -369,   878,   182,   181,   185,
    -369,   183,  -369,   444,   186,  -369,   228,   228,   670,   264,
     228,   209,   444,  -369,  -369,   192,   766,   -15,  -369,  -369,
    -369,  -369,  -369,  -369,  -369,   228,  -369,  -369,  -369,  -369,
    -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,   193,  -369,
    -369,   228,   198,  -369,   -37,  -369,  -369,  -369,  -369,  -369,
    -369,  -369,   293,  -369,  1142,  -369,  -369,   201,   202,   228,
     196,   204,   205,   444,  -369,  -369,  -369,  -369,  -369,   299,
     206,  -369,  -369,  -369,  -369,   124,  -369,  -369,  -369,   444,
     444,   210,   228,   228,   444,  -369,   211,    14,  -369,  -369,
     281,  -369,   228,   212,   216,  -369,   219,    29,   444,   222,
     228,   221,  -369,   306,   229,   223,  -369,   319,  -369,   444,
     225,  -369,   240,    29,   243,   242,  -369,   444,  -369,   258,
     241,  -369,   338,  -369,   228,  -369,   341,   243,   248,   249,
    -369,   266,   245,  -369,   228,  -369,   347,   348,   252,  -369,
    -369,   251,  -369,  -369,   351,  -369
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -369,  -369,  -369,     1,  -194,   -32,  -369,   115,  -369,  -369,
    -369,  -369,   -34,  -369,   165,  -369,   227,  -369,   -33,  -369,
     -40,  -369,  -369,  -369,  -369,  -369,  -369,  -369,    37,     0,
    -369,  -369,   -22,   -53,  -369,   161,  -369,   324,  -369,   259,
    -369,   -47,  -369,  -369,   190,  -369,  -369,  -369,  -369,  -369,
    -369,  -369,  -369,  -369,     9,    15,  -368,  -369,  -369,   432,
    -144,  -369,  -225,  -100,  -108,   -51,  -369,   269,   265,   -69,
      73,    -5,   -57,  -369,  -369,  -369,  -369,  -369,    77,  -369,
    -262,  -369,   105,  -369,  -369,   163,  -130
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -151
static const yytype_int16 yytable[] =
{
     111,    45,    36,   163,    67,    63,   104,    50,   286,    52,
      54,   130,    71,   117,   118,   119,   336,   235,   187,   337,
     356,   198,   126,   143,   134,   275,   124,   143,   357,   276,
     358,    80,    56,  -150,   275,   412,   153,    70,   276,   156,
     157,    61,   159,   160,   161,   162,   238,   172,   173,   412,
     135,   158,   163,   136,    57,   239,    87,   144,   116,   275,
     201,    62,   202,   276,   299,   170,   171,   364,   176,   177,
     174,   175,    58,   350,   334,   139,   335,   269,    59,   111,
     301,    62,   143,   359,   268,   228,   189,   194,   231,   232,
     111,   143,    60,   283,    72,   196,   228,   387,   200,    79,
     312,   256,   257,   379,   295,    81,   131,    51,   120,    53,
      55,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   264,   265,   266,   371,   393,    82,    88,    89,    90,
      91,    92,   128,    70,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   332,   129,   383,   133,   345,
     286,   147,   237,   111,   178,   179,   180,   389,   354,   228,
      93,    22,    23,    24,    25,   400,    73,   150,    73,   149,
     198,   262,   263,   111,   151,    94,    95,   125,   148,   228,
     154,   155,   167,   168,    96,    97,   169,    73,   187,   188,
     137,    73,   190,   191,    73,    73,   347,   348,   295,   192,
     352,   234,    70,   240,    98,   230,   239,   360,   241,   375,
      99,    62,   253,   100,   101,   102,   267,   272,   111,   293,
     273,    70,   103,   362,   228,   380,   381,   197,   282,   296,
     385,    88,    89,    90,    91,    92,   297,   181,   182,   183,
     298,   300,   193,   302,   398,   258,   259,   260,   261,   295,
      73,   303,   304,   340,    63,   406,   305,   198,   308,    73,
     306,   315,   309,   415,    93,   311,   314,   316,   328,   329,
     330,   333,   295,   384,   184,   331,   185,   339,   186,    94,
      95,   341,   295,   342,   343,   344,    70,   346,    96,    97,
     295,   351,   353,   355,   361,   363,   366,   372,    70,   349,
     369,   370,   373,    89,   374,   378,   116,   388,    98,   402,
     386,   382,   403,   390,    99,   391,   428,   100,   101,   102,
     392,   399,   401,   405,   407,   404,   103,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   408,   252,   393,
     414,   416,   418,   417,    70,   420,   424,   427,   425,   426,
     429,   433,   432,   434,   435,   195,   274,   419,   203,    89,
      90,    91,    92,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,   204,
     205,   368,   206,   207,   208,   209,   210,   211,   212,   213,
     214,    93,    19,   313,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   146,    94,   215,   236,    33,
      34,   310,   216,   413,    86,    96,    97,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,   423,    49,   255,    98,   377,   254,     0,   365,
       0,    99,     0,   338,   100,   101,   102,   203,    89,    90,
      91,    92,     0,   103,     0,     0,   217,     0,   133,     0,
       0,    32,     0,     0,     0,     0,     0,     0,   204,   205,
       0,   206,   207,   208,   209,   210,   211,   212,   213,   214,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,    95,     0,     0,     0,
       0,   216,     0,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,     0,     0,     0,     0,     0,
      99,     0,     0,   100,   101,   102,     0,     0,     0,     0,
       0,     0,   103,     0,     0,   217,     0,   133,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,     0,     0,
       0,    22,    23,    24,    25,     0,     0,     0,     0,     0,
      31,     0,    32,     0,     0,     0,    22,    23,    24,    25,
       0,     0,     0,     0,     0,    31,     0,    32,     0,     0,
       0,     0,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,     0,     0,   142,    22,    23,    24,    25,     0,
       0,     0,     0,     0,    31,     0,    32,     0,     0,   145,
      22,    23,    24,    25,     0,     0,     0,     0,     0,    31,
       0,    32,     0,    88,    89,    90,    91,    92,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,    19,   227,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
       0,    94,   215,   233,    33,    34,     0,     0,     0,     0,
      96,    97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,     0,     0,     0,    99,     0,     0,   100,
     101,   102,     0,     0,     0,     0,     0,     0,   103,    88,
      89,    90,    91,    92,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,     0,
      88,    89,    90,    91,    92,     0,     0,     0,     0,     0,
       0,     0,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,   215,     0,
       0,     0,     0,    93,     0,     0,    96,    97,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,    95,
       0,     0,     0,     0,     0,     0,    98,    96,    97,     0,
       0,     0,    99,     0,     0,   100,   101,   102,     0,     0,
       0,     0,     0,     0,   103,     0,     0,    98,     0,     0,
       0,     0,     0,    99,     0,     0,   100,   101,   102,     0,
       0,     0,     0,     0,     0,   152,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    19,     0,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,     0,     0,
      32,     0,    33,    34,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     0,     0,     0,    62,
       0,     0,     0,     0,     0,     0,     0,   -73,    32,    19,
     -73,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,     0,     0,    32,     0,    33,    34,     0,     0,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    62,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,    32,     2,     0,     0,     0,
       0,     0,     0,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
       0,     0,     0,     0,     0,     0,   136,     0,     0,     0,
       0,     0,     0,    19,    62,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,   285,    32,     0,
      33,    34,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    19,     0,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     0,     0,    32,     0,    33,    34,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    19,
       0,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,     0,     0,    32,     0,    33,    34,     0,     0,
     367,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,    23,    24,    25,     0,     0,
       0,     0,     0,    31,     0,    32
};

static const yytype_int16 yycheck[] =
{
      57,     1,     1,   103,    37,    37,    57,     3,   202,     3,
       3,     3,    45,     3,     4,     5,   278,   147,     4,    81,
      35,   129,    62,    76,    71,    96,    60,    80,    43,   100,
      45,    53,    98,     4,    96,   403,    93,    37,   100,    96,
      97,   101,    99,   100,   101,   102,   154,    64,    65,   417,
      72,    98,   152,    83,    98,   155,    56,    79,    58,    96,
      96,    91,    98,   100,   208,    66,    67,   104,    89,    90,
      87,    88,    98,   298,   102,    75,   104,   185,    98,   136,
     210,    91,   135,    98,   184,   136,   120,   127,   101,   102,
     147,   144,    98,   201,   103,   128,   147,    83,   131,   103,
     230,   170,   171,   365,   204,   103,    98,   103,    98,   103,
     103,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   349,    96,     3,     3,     4,     5,
       6,     7,   102,   133,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   275,    81,   372,   103,   293,
     344,    81,   152,   210,    91,    92,    93,   382,   302,   210,
      36,    41,    42,    43,    44,   390,    51,    99,    53,   102,
     278,   176,   177,   230,    99,    51,    52,    62,   104,   230,
      98,    98,   102,    69,    60,    61,    68,    72,     4,    99,
      75,    76,    99,   102,    79,    80,   296,   297,   298,    99,
     300,   104,   202,    99,    80,    83,   306,   315,    99,   353,
      86,    91,     4,    89,    90,    91,     3,     3,   275,    83,
      99,   221,    98,   331,   275,   369,   370,   103,    99,    98,
     374,     3,     4,     5,     6,     7,    98,    59,    60,    61,
      98,    98,   127,    83,   388,   172,   173,   174,   175,   349,
     135,   101,   101,   286,   286,   399,     3,   365,   101,   144,
      98,   102,   104,   407,    36,   101,    99,    99,    99,    97,
      99,     3,   372,   373,    96,   102,    98,    97,   100,    51,
      52,    99,   382,   102,    99,   102,   286,   101,    60,    61,
     390,    27,    83,   101,   101,    97,     3,   101,   298,   298,
      99,    99,    98,     4,    99,    99,   306,    26,    80,     3,
      99,   101,    83,   101,    86,    99,   424,    89,    90,    91,
     101,    99,   101,     4,    99,   102,    98,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    97,    81,    96,
      98,    83,     4,   102,   344,     4,    98,   102,    99,    83,
       3,    99,     4,   102,     3,   128,   191,   414,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,   344,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,   232,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    81,    51,    52,   149,    54,
      55,   221,    57,   404,     5,    60,    61,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,   417,     1,   169,    80,   359,   168,    -1,   334,
      -1,    86,    -1,   280,    89,    90,    91,     3,     4,     5,
       6,     7,    -1,    98,    -1,    -1,   101,    -1,   103,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    60,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    89,    90,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,   101,    -1,   103,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    52,    -1,    -1,    -1,    41,    42,    43,    44,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    52,    -1,    -1,
      -1,    -1,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,   104,    41,    42,    43,    44,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    52,    -1,    -1,   104,
      41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    52,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    37,   104,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,    52,   104,    54,    55,    -1,    -1,    -1,    -1,
      60,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    89,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    98,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    60,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    60,    61,    -1,
      -1,    -1,    86,    -1,    -1,    89,    90,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    89,    90,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    98,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      52,    -1,    54,    55,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    52,    37,
     102,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    -1,    52,    -1,    54,    55,    -1,    -1,
      -1,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,     0,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    91,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,     3,    52,    -1,
      54,    55,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    -1,    52,    -1,    54,    55,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    -1,    52,    -1,    54,    55,    -1,    -1,
      58,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    52
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   106,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    37,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    52,    54,    55,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   134,   136,   141,   145,   164,
       3,   103,     3,   103,     3,   103,    98,    98,    98,    98,
      98,   101,    91,   110,   120,   121,   122,   123,   124,   125,
     134,   123,   103,   112,   134,   135,   137,   138,   164,   103,
     137,   103,     3,   142,   143,   144,     5,   134,     3,     4,
       5,     6,     7,    36,    51,    52,    60,    61,    80,    86,
      89,    90,    91,    98,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   181,   182,   183,   134,     3,     4,     5,
      98,   117,   118,   119,   117,   112,   125,   126,   102,    81,
       3,    98,   127,   103,   146,   137,    83,   112,   123,   134,
     139,   140,   104,   138,   137,   104,   142,    81,   104,   102,
      99,    99,    98,   177,    98,    98,   177,   177,   146,   177,
     177,   177,   177,   168,   169,   170,   177,   102,    69,    68,
      66,    67,    64,    65,    87,    88,    89,    90,    91,    92,
      93,    59,    60,    61,    96,    98,   100,     4,    99,   117,
      99,   102,    99,   112,   125,   121,   123,   103,   169,   185,
     123,    96,    98,     3,    24,    25,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    52,    57,   101,   108,   146,
     147,   148,   149,   150,   165,   166,   168,   104,   170,   191,
      83,   101,   102,   104,   104,   191,   144,   134,   169,   168,
      99,    99,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    81,     4,   172,   173,   174,   174,   175,   175,
     175,   175,   176,   176,   177,   177,   177,     3,   168,   169,
     179,   180,     3,    99,   119,    96,   100,   186,   187,   188,
     189,   190,    99,   169,   184,     3,   109,   128,   129,   130,
     131,   132,   133,    83,   167,   168,    98,    98,    98,   165,
      98,   191,    83,   101,   101,     3,    98,   151,   101,   104,
     149,   101,   191,   140,    99,   102,    99,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   169,    99,    97,
      99,   102,   191,     3,   102,   104,   185,    81,   190,    97,
     123,    99,   102,    99,   102,   165,   101,   168,   168,   108,
     167,    27,   168,    83,   165,   101,    35,    43,    45,    98,
     169,   101,   169,    97,   104,   187,     3,    58,   133,    99,
      99,   167,   101,    98,    99,   165,   152,   183,    99,   185,
     165,   165,   101,   167,   168,   165,    99,    83,    26,   167,
     101,    99,   101,    96,   153,   157,   159,   161,   165,    99,
     167,   101,     3,    83,   102,     4,   165,    99,    97,   154,
     158,   160,   161,   159,    98,   165,    83,   102,     4,   177,
       4,   155,   162,   160,    98,    99,    83,   102,   169,     3,
     156,   163,     4,    99,   102,     3
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
      
/* Line 1267 of yacc.c.  */
#line 2099 "grammar/parser.c"
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


#line 592 "grammar/comelang.y"


