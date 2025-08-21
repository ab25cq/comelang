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
     KW_VOID = 263,
     KW_CHAR = 264,
     KW_SHORT = 265,
     KW_INT = 266,
     KW_LONG = 267,
     KW_SIGNED = 268,
     KW_UNSIGNED = 269,
     KW_FLOAT = 270,
     KW_DOUBLE = 271,
     KW_STRUCT = 272,
     KW_UNION = 273,
     KW_ENUM = 274,
     KW_TYPEDEF = 275,
     KW_RETURN = 276,
     KW_IF = 277,
     KW_ELSE = 278,
     KW_WHILE = 279,
     KW_FOR = 280,
     KW_DO = 281,
     KW_SWITCH = 282,
     KW_CASE = 283,
     KW_DEFAULT = 284,
     KW_BREAK = 285,
     KW_CONTINUE = 286,
     KW_GOTO = 287,
     KW_CONST = 288,
     KW_VOLATILE = 289,
     KW_RESTRICT = 290,
     KW_INLINE = 291,
     KW_EXTERN = 292,
     KW_STATIC = 293,
     KW_SIZEOF = 294,
     ELLIPSIS = 295,
     ARROW = 296,
     INC = 297,
     DEC = 298,
     LSHIFT = 299,
     RSHIFT = 300,
     LE = 301,
     GE = 302,
     EQ = 303,
     NE = 304,
     LOGAND = 305,
     LOGOR = 306,
     ADD_ASSIGN = 307,
     SUB_ASSIGN = 308,
     MUL_ASSIGN = 309,
     DIV_ASSIGN = 310,
     MOD_ASSIGN = 311,
     AND_ASSIGN = 312,
     OR_ASSIGN = 313,
     XOR_ASSIGN = 314,
     LSHIFT_ASSIGN = 315,
     RSHIFT_ASSIGN = 316
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define STRING_LITERAL 259
#define INTEGER_CONSTANT 260
#define FLOAT_CONSTANT 261
#define CHAR_CONSTANT 262
#define KW_VOID 263
#define KW_CHAR 264
#define KW_SHORT 265
#define KW_INT 266
#define KW_LONG 267
#define KW_SIGNED 268
#define KW_UNSIGNED 269
#define KW_FLOAT 270
#define KW_DOUBLE 271
#define KW_STRUCT 272
#define KW_UNION 273
#define KW_ENUM 274
#define KW_TYPEDEF 275
#define KW_RETURN 276
#define KW_IF 277
#define KW_ELSE 278
#define KW_WHILE 279
#define KW_FOR 280
#define KW_DO 281
#define KW_SWITCH 282
#define KW_CASE 283
#define KW_DEFAULT 284
#define KW_BREAK 285
#define KW_CONTINUE 286
#define KW_GOTO 287
#define KW_CONST 288
#define KW_VOLATILE 289
#define KW_RESTRICT 290
#define KW_INLINE 291
#define KW_EXTERN 292
#define KW_STATIC 293
#define KW_SIZEOF 294
#define ELLIPSIS 295
#define ARROW 296
#define INC 297
#define DEC 298
#define LSHIFT 299
#define RSHIFT 300
#define LE 301
#define GE 302
#define EQ 303
#define NE 304
#define LOGAND 305
#define LOGOR 306
#define ADD_ASSIGN 307
#define SUB_ASSIGN 308
#define MUL_ASSIGN 309
#define DIV_ASSIGN 310
#define MOD_ASSIGN 311
#define AND_ASSIGN 312
#define OR_ASSIGN 313
#define XOR_ASSIGN 314
#define LSHIFT_ASSIGN 315
#define RSHIFT_ASSIGN 316




/* Copy the first part of user declarations.  */
#line 7 "c.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yylex(void);
void yyerror(const char* s);



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
#line 17 "c.y"
{
  char* sval;
  long  ival;
}
/* Line 193 of yacc.c.  */
#line 233 "parser.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 246 "parser.c"

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
#define YYLAST   659

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  186
/* YYNRULES -- Number of states.  */
#define YYNSTATES  306

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    75,     2,     2,     2,    74,    67,     2,
      77,    78,    72,    70,    83,    71,    81,    73,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    64,    82,
      68,    62,    69,    63,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    79,     2,    80,    66,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    84,    65,    85,    76,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    12,    15,    16,    18,
      20,    24,    26,    30,    32,    35,    37,    39,    41,    43,
      45,    47,    49,    51,    53,    55,    57,    59,    61,    63,
      65,    67,    69,    71,    73,    75,    77,    79,    85,    91,
      96,   101,   104,   107,   108,   110,   112,   115,   119,   121,
     125,   127,   130,   134,   140,   145,   148,   149,   151,   153,
     157,   159,   163,   166,   167,   169,   171,   174,   177,   181,
     183,   187,   192,   197,   202,   203,   205,   207,   211,   212,
     214,   216,   220,   222,   226,   229,   231,   235,   239,   241,
     243,   245,   247,   249,   253,   254,   256,   258,   261,   264,
     266,   268,   271,   277,   285,   291,   297,   305,   315,   319,
     322,   325,   329,   330,   332,   334,   338,   339,   341,   343,
     347,   351,   355,   359,   363,   367,   371,   375,   379,   383,
     387,   389,   395,   397,   401,   403,   407,   409,   413,   415,
     419,   421,   425,   427,   431,   435,   437,   441,   445,   449,
     453,   455,   459,   463,   465,   469,   473,   475,   479,   483,
     487,   489,   492,   495,   498,   501,   504,   507,   510,   515,
     517,   522,   527,   531,   535,   538,   541,   542,   544,   546,
     550,   552,   554,   556,   558,   560,   564
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      87,     0,    -1,    -1,    87,    88,    -1,   119,    -1,    89,
      82,    -1,    93,    90,    -1,    -1,    91,    -1,    92,    -1,
      91,    83,    92,    -1,   109,    -1,   109,    62,   132,    -1,
      94,    -1,    93,    94,    -1,    95,    -1,    98,    -1,    96,
      -1,    97,    -1,    20,    -1,    37,    -1,    38,    -1,    33,
      -1,    34,    -1,    35,    -1,    36,    -1,     8,    -1,     9,
      -1,    10,    -1,    11,    -1,    12,    -1,    13,    -1,    14,
      -1,    15,    -1,    16,    -1,    99,    -1,   105,    -1,    17,
       3,    84,   100,    85,    -1,    18,     3,    84,   100,    85,
      -1,    17,    84,   100,    85,    -1,    18,    84,   100,    85,
      -1,    17,     3,    -1,    18,     3,    -1,    -1,   101,    -1,
     102,    -1,   101,   102,    -1,    93,   103,    82,    -1,   104,
      -1,   103,    83,   104,    -1,   109,    -1,    64,   149,    -1,
     109,    64,   149,    -1,    19,     3,    84,   106,    85,    -1,
      19,    84,   106,    85,    -1,    19,     3,    -1,    -1,   107,
      -1,   108,    -1,   107,    83,   108,    -1,     3,    -1,     3,
      62,   149,    -1,   110,   112,    -1,    -1,   111,    -1,    72,
      -1,    72,    96,    -1,    72,   111,    -1,    72,    96,   111,
      -1,     3,    -1,    77,   109,    78,    -1,   112,    79,   131,
      80,    -1,   112,    77,   115,    78,    -1,   112,    77,   113,
      78,    -1,    -1,   114,    -1,     3,    -1,   114,    83,     3,
      -1,    -1,   116,    -1,   117,    -1,   117,    83,    40,    -1,
     118,    -1,   117,    83,   118,    -1,    93,   109,    -1,    93,
      -1,    93,   109,   121,    -1,    98,   109,   121,    -1,   121,
      -1,   125,    -1,   126,    -1,   127,    -1,   128,    -1,    84,
     122,    85,    -1,    -1,   123,    -1,   124,    -1,   123,   124,
      -1,    89,    82,    -1,   120,    -1,    82,    -1,   130,    82,
      -1,    22,    77,   130,    78,   120,    -1,    22,    77,   130,
      78,   120,    23,   120,    -1,    27,    77,   130,    78,   120,
      -1,    24,    77,   130,    78,   120,    -1,    26,   120,    24,
      77,   130,    78,    82,    -1,    25,    77,   129,    82,   129,
      82,   129,    78,   120,    -1,    21,   129,    82,    -1,    30,
      82,    -1,    31,    82,    -1,    32,     3,    82,    -1,    -1,
     130,    -1,   132,    -1,   130,    83,   132,    -1,    -1,   132,
      -1,   133,    -1,   144,    62,   132,    -1,   144,    52,   132,
      -1,   144,    53,   132,    -1,   144,    54,   132,    -1,   144,
      55,   132,    -1,   144,    56,   132,    -1,   144,    57,   132,
      -1,   144,    58,   132,    -1,   144,    59,   132,    -1,   144,
      60,   132,    -1,   144,    61,   132,    -1,   134,    -1,   134,
      63,   130,    64,   133,    -1,   135,    -1,   134,    51,   135,
      -1,   136,    -1,   135,    50,   136,    -1,   137,    -1,   136,
      65,   137,    -1,   138,    -1,   137,    66,   138,    -1,   139,
      -1,   138,    67,   139,    -1,   140,    -1,   139,    48,   140,
      -1,   139,    49,   140,    -1,   141,    -1,   140,    68,   141,
      -1,   140,    69,   141,    -1,   140,    46,   141,    -1,   140,
      47,   141,    -1,   142,    -1,   141,    44,   142,    -1,   141,
      45,   142,    -1,   143,    -1,   142,    70,   143,    -1,   142,
      71,   143,    -1,   144,    -1,   143,    72,   144,    -1,   143,
      73,   144,    -1,   143,    74,   144,    -1,   145,    -1,    42,
     144,    -1,    43,   144,    -1,    70,   144,    -1,    71,   144,
      -1,    75,   144,    -1,    76,   144,    -1,    39,   144,    -1,
      39,    77,    98,    78,    -1,   148,    -1,   145,    77,   146,
      78,    -1,   145,    79,   130,    80,    -1,   145,    81,     3,
      -1,   145,    41,     3,    -1,   145,    42,    -1,   145,    43,
      -1,    -1,   147,    -1,   132,    -1,   147,    83,   132,    -1,
       3,    -1,     5,    -1,     6,    -1,     7,    -1,     4,    -1,
      77,   130,    78,    -1,   133,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    60,    60,    62,    66,    67,    72,    75,    77,    81,
      82,    86,    87,    91,    92,    96,    97,    98,    99,   103,
     104,   105,   109,   110,   111,   115,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   134,   135,   136,
     137,   138,   139,   142,   144,   148,   149,   153,   157,   158,
     162,   163,   164,   168,   169,   170,   173,   175,   179,   180,
     184,   185,   190,   193,   195,   199,   200,   201,   202,   206,
     207,   208,   209,   210,   213,   215,   219,   220,   223,   225,
     229,   230,   234,   235,   239,   240,   245,   246,   251,   252,
     253,   254,   255,   259,   262,   264,   268,   269,   273,   274,
     278,   279,   283,   284,   285,   289,   290,   291,   295,   296,
     297,   298,   302,   304,   308,   309,   312,   314,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     333,   334,   338,   339,   343,   344,   348,   349,   353,   354,
     358,   359,   363,   364,   365,   369,   370,   371,   372,   373,
     377,   378,   379,   383,   384,   385,   389,   390,   391,   392,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   408,
     409,   410,   411,   412,   413,   414,   417,   419,   423,   424,
     428,   429,   430,   431,   432,   433,   437
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING_LITERAL",
  "INTEGER_CONSTANT", "FLOAT_CONSTANT", "CHAR_CONSTANT", "KW_VOID",
  "KW_CHAR", "KW_SHORT", "KW_INT", "KW_LONG", "KW_SIGNED", "KW_UNSIGNED",
  "KW_FLOAT", "KW_DOUBLE", "KW_STRUCT", "KW_UNION", "KW_ENUM",
  "KW_TYPEDEF", "KW_RETURN", "KW_IF", "KW_ELSE", "KW_WHILE", "KW_FOR",
  "KW_DO", "KW_SWITCH", "KW_CASE", "KW_DEFAULT", "KW_BREAK", "KW_CONTINUE",
  "KW_GOTO", "KW_CONST", "KW_VOLATILE", "KW_RESTRICT", "KW_INLINE",
  "KW_EXTERN", "KW_STATIC", "KW_SIZEOF", "ELLIPSIS", "ARROW", "INC", "DEC",
  "LSHIFT", "RSHIFT", "LE", "GE", "EQ", "NE", "LOGAND", "LOGOR",
  "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "AND_ASSIGN", "OR_ASSIGN", "XOR_ASSIGN", "LSHIFT_ASSIGN",
  "RSHIFT_ASSIGN", "'='", "'?'", "':'", "'|'", "'^'", "'&'", "'<'", "'>'",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "'~'", "'('", "')'", "'['",
  "']'", "'.'", "';'", "','", "'{'", "'}'", "$accept", "translation_unit",
  "external_declaration", "declaration", "init_declarator_list_opt",
  "init_declarator_list", "init_declarator", "declaration_specifiers",
  "declaration_specifier", "storage_class_specifier", "type_qualifier",
  "function_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_declaration_list_opt", "struct_declaration_list",
  "struct_declaration", "struct_declarator_list", "struct_declarator",
  "enum_specifier", "enumerator_list_opt", "enumerator_list", "enumerator",
  "declarator", "pointer_opt", "pointer", "direct_declarator",
  "identifier_list_opt", "identifier_list", "parameter_type_list_opt",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "function_definition", "statement", "compound_statement",
  "block_item_list_opt", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "expression_opt", "expression",
  "assignment_expression_opt", "assignment_expression",
  "conditional_expression", "logical_or_expression",
  "logical_and_expression", "inclusive_or_expression",
  "exclusive_or_expression", "and_expression", "equality_expression",
  "relational_expression", "shift_expression", "additive_expression",
  "multiplicative_expression", "unary_expression", "postfix_expression",
  "argument_expression_list_opt", "argument_expression_list",
  "primary_expression", "constant_expression", 0
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
     315,   316,    61,    63,    58,   124,    94,    38,    60,    62,
      43,    45,    42,    47,    37,    33,   126,    40,    41,    91,
      93,    46,    59,    44,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    86,    87,    87,    88,    88,    89,    90,    90,    91,
      91,    92,    92,    93,    93,    94,    94,    94,    94,    95,
      95,    95,    96,    96,    96,    97,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    99,    99,    99,
      99,    99,    99,   100,   100,   101,   101,   102,   103,   103,
     104,   104,   104,   105,   105,   105,   106,   106,   107,   107,
     108,   108,   109,   110,   110,   111,   111,   111,   111,   112,
     112,   112,   112,   112,   113,   113,   114,   114,   115,   115,
     116,   116,   117,   117,   118,   118,   119,   119,   120,   120,
     120,   120,   120,   121,   122,   122,   123,   123,   124,   124,
     125,   125,   126,   126,   126,   127,   127,   127,   128,   128,
     128,   128,   129,   129,   130,   130,   131,   131,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     133,   133,   134,   134,   135,   135,   136,   136,   137,   137,
     138,   138,   139,   139,   139,   140,   140,   140,   140,   140,
     141,   141,   141,   142,   142,   142,   143,   143,   143,   143,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   145,
     145,   145,   145,   145,   145,   145,   146,   146,   147,   147,
     148,   148,   148,   148,   148,   148,   149
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     2,     0,     1,     1,
       3,     1,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     5,     4,
       4,     2,     2,     0,     1,     1,     2,     3,     1,     3,
       1,     2,     3,     5,     4,     2,     0,     1,     1,     3,
       1,     3,     2,     0,     1,     1,     2,     2,     3,     1,
       3,     4,     4,     4,     0,     1,     1,     3,     0,     1,
       1,     3,     1,     3,     2,     1,     3,     3,     1,     1,
       1,     1,     1,     3,     0,     1,     1,     2,     2,     1,
       1,     2,     5,     7,     5,     5,     7,     9,     3,     2,
       2,     3,     0,     1,     1,     3,     0,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     5,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       1,     2,     2,     2,     2,     2,     2,     2,     4,     1,
       4,     4,     3,     3,     2,     2,     0,     1,     1,     3,
       1,     1,     1,     1,     1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    26,    27,    28,    29,    30,    31,    32,
      33,    34,     0,     0,     0,    19,    22,    23,    24,    25,
      20,    21,     3,     0,    63,    13,    15,    17,    18,    16,
      35,    36,     4,    41,    43,    42,    43,    55,    56,     5,
      65,     6,     8,     9,    14,    16,    11,     0,    64,     0,
      43,    63,     0,    44,    45,    43,     0,    56,    60,     0,
      57,    58,    66,    67,    63,     0,    94,    86,    69,    63,
      62,    87,     0,     0,     0,    48,    50,    39,    46,     0,
      40,     0,     0,    54,     0,    68,    10,    11,   180,   184,
     181,   182,   183,     0,     0,     0,     0,     0,     0,     0,
       0,    12,   118,   130,   132,   134,   136,   138,   140,   142,
     145,   150,   153,   156,   160,   169,   112,     0,     0,     0,
       0,     0,     0,     0,     0,   100,     0,    63,    99,    88,
       0,    95,    96,    89,    90,    91,    92,     0,   114,     0,
      74,   116,    37,   186,   156,    51,    47,    63,     0,    38,
      53,    61,    59,     0,   167,   161,   162,   163,   164,   165,
     166,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   174,   175,   176,     0,     0,     0,   113,
       0,     0,   112,     0,     0,   109,   110,     0,    98,    93,
      97,   101,     0,    70,    76,    63,     0,    75,     0,    79,
      80,    82,     0,   117,    49,    52,     0,   185,   133,     0,
     135,   137,   139,   141,   143,   144,   148,   149,   146,   147,
     151,   152,   154,   155,   157,   158,   159,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   119,   173,   178,
       0,   177,     0,   172,   108,     0,     0,     0,     0,     0,
     111,   115,    84,    73,     0,    72,     0,    71,   168,     0,
     170,     0,   171,     0,     0,   112,     0,     0,    77,    81,
      83,   131,   179,   102,   105,     0,     0,   104,     0,   112,
       0,   103,     0,   106,     0,   107
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    22,   126,    41,    42,    43,    51,    25,    26,
      27,    28,    45,    30,    52,    53,    54,    74,    75,    31,
      59,    60,    61,    76,    47,    48,    70,   216,   217,   218,
     219,   220,   221,    32,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   198,   137,   222,   138,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     260,   261,   115,   145
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -171
static const yytype_int16 yypact[] =
{
    -171,   521,  -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,
    -171,  -171,     3,    30,    48,  -171,  -171,  -171,  -171,  -171,
    -171,  -171,  -171,   -61,   425,  -171,  -171,  -171,  -171,   -42,
    -171,  -171,  -171,   -13,   621,    -4,   621,    -2,    56,  -171,
       9,  -171,    10,  -171,  -171,  -171,   -31,     8,  -171,     2,
     621,   456,   -17,   621,  -171,   621,    28,    56,    54,    70,
      60,  -171,   -42,  -171,   -42,    13,   215,  -171,  -171,   -42,
      77,  -171,    85,    13,    51,  -171,   100,  -171,  -171,    87,
    -171,    93,    13,  -171,    56,  -171,  -171,   121,  -171,  -171,
    -171,  -171,  -171,   273,    13,    13,    13,    13,    13,    13,
      13,  -171,  -171,   -41,   134,   120,   132,   136,    98,    -7,
     114,    90,    79,   135,    -5,  -171,    13,   124,   125,   127,
     297,   128,   126,   129,   203,  -171,   130,   425,  -171,  -171,
     122,   215,  -171,  -171,  -171,  -171,  -171,    80,  -171,   137,
     557,    13,  -171,  -171,  -171,  -171,  -171,    -6,    13,  -171,
    -171,  -171,  -171,   411,  -171,  -171,  -171,  -171,  -171,  -171,
    -171,    57,    13,    13,    13,    13,    13,    13,    13,    13,
      13,    13,    13,    13,    13,    13,    13,    13,    13,    13,
      13,    13,    13,    13,    13,    13,    13,    13,    13,    13,
      13,    13,   210,  -171,  -171,    13,    13,   211,   156,   133,
      13,    13,    13,   219,    13,  -171,  -171,   162,  -171,  -171,
    -171,  -171,    13,  -171,  -171,   374,   177,   173,   181,  -171,
     179,  -171,   183,  -171,  -171,  -171,   186,  -171,   134,   -49,
     120,   132,   136,    98,    -7,    -7,   114,   114,   114,   114,
      90,    90,    79,    79,  -171,  -171,  -171,  -171,  -171,  -171,
    -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,
     187,   184,   -23,  -171,  -171,    58,    59,   188,   189,    66,
    -171,  -171,  -171,  -171,   265,  -171,   588,  -171,  -171,    13,
    -171,    13,  -171,   297,   297,    13,    13,   297,  -171,  -171,
    -171,  -171,  -171,   246,  -171,   190,    67,  -171,   297,    13,
     191,  -171,   193,  -171,   297,  -171
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -171,  -171,  -171,   280,  -171,  -171,   218,    -1,   -16,  -171,
     243,  -171,     4,  -171,    14,  -171,   231,  -171,   140,  -171,
     232,  -171,   204,   -15,  -171,     1,  -171,  -171,  -171,  -171,
    -171,  -171,    17,  -171,  -118,    21,  -171,  -171,   163,  -171,
    -171,  -171,  -171,  -170,   -25,  -171,   -64,   -69,  -171,   143,
     131,   141,   142,   144,     5,  -125,     7,    -9,   -70,  -171,
    -171,  -171,  -171,   -75
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -86
static const yytype_int16 yytable[] =
{
      24,   101,   203,   144,   143,    29,    33,   151,    44,    46,
     162,    68,   144,   143,    49,   279,    88,    89,    90,    91,
      92,    39,   163,   154,   155,   156,   157,   158,   159,   160,
      40,    65,   267,    35,   212,    44,   192,   193,   194,   170,
     171,    63,    16,    17,    18,   236,   237,   238,   239,    87,
      56,    37,    93,    66,   139,    94,    95,   282,    73,    58,
     212,   172,   173,    85,    72,   127,    40,    67,    77,    79,
      71,    50,   195,   225,   196,   161,   197,   223,   144,   143,
      55,    40,    57,    96,    97,    69,    66,    34,    98,    99,
     100,   199,   144,    64,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   244,   245,
     246,    44,    87,    80,    36,   295,    82,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   161,   302,
     127,   259,    38,   146,   147,   227,   283,   284,   229,   215,
     212,   212,   212,    84,   287,   300,   168,   169,   271,   212,
     212,   178,   179,   180,   140,    83,   141,   226,   174,   175,
     176,   177,   211,   212,   148,   293,   294,   242,   243,   297,
     142,   262,   149,   234,   235,   265,   266,   199,   150,   269,
     301,   240,   241,    65,   164,   165,   305,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   166,    44,
     272,   200,   201,   167,   202,   204,   207,   209,   205,   144,
     291,   206,   208,   258,   263,   213,   212,   292,    88,    89,
      90,    91,    92,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,   116,   117,   264,   118,
     119,   120,   121,   268,   270,   122,   123,   124,    16,    17,
      18,    19,    20,    21,    93,   273,   274,    94,    95,   275,
     199,   296,   276,   277,   278,   280,   286,   281,   288,   298,
     285,   304,   299,   303,   199,   215,    88,    89,    90,    91,
      92,    23,    86,    62,    78,    96,    97,   224,   152,    81,
      98,    99,   100,   290,   210,   230,     0,   125,     0,    66,
      88,    89,    90,    91,    92,   228,   231,     0,   232,     0,
       0,   233,    93,     0,     0,    94,    95,     0,   116,   117,
       0,   118,   119,   120,   121,     0,     0,   122,   123,   124,
       0,     0,     0,     0,     0,     0,    93,     0,     0,    94,
      95,     0,     0,    96,    97,     0,     0,     0,    98,    99,
     153,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    96,    97,     0,
       0,     0,    98,    99,   100,     0,     0,     0,     0,   125,
       0,    66,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    16,    17,    18,
      19,    20,    21,     0,    88,    89,    90,    91,    92,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    40,     0,     0,     0,
      93,     0,   -85,    94,    95,     0,     0,   -85,    16,    17,
      18,    19,    20,    21,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,     0,     0,     0,
       0,    96,    97,     0,     0,     0,    98,    99,   100,    16,
      17,    18,    19,    20,    21,     0,     0,    40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    -7,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     2,     0,     0,     0,     0,     0,     0,    40,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    16,    17,    18,    19,    20,    21,
     214,     0,     0,     0,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      16,    17,    18,    19,    20,    21,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    16,    17,    18,    19,    20,    21,     0,   289,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    16,    17,    18,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       1,    65,   120,    73,    73,     1,     3,    82,    24,    24,
      51,     3,    82,    82,    29,    64,     3,     4,     5,     6,
       7,    82,    63,    93,    94,    95,    96,    97,    98,    99,
      72,    62,   202,     3,    83,    51,    41,    42,    43,    46,
      47,    40,    33,    34,    35,   170,   171,   172,   173,    64,
      36,     3,    39,    84,    69,    42,    43,    80,    64,     3,
      83,    68,    69,    62,    50,    66,    72,    46,    85,    55,
      49,    84,    77,   148,    79,   100,    81,   141,   148,   148,
      84,    72,    84,    70,    71,    77,    84,    84,    75,    76,
      77,   116,   162,    83,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   127,   127,    85,    84,   285,    62,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   153,   299,
     131,   195,    84,    82,    83,    78,    78,    78,   163,   140,
      83,    83,    83,    83,    78,    78,    48,    49,   212,    83,
      83,    72,    73,    74,    77,    85,    79,   153,    44,    45,
      70,    71,    82,    83,    64,   283,   284,   176,   177,   287,
      85,   196,    85,   168,   169,   200,   201,   202,    85,   204,
     298,   174,   175,    62,    50,    65,   304,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    66,   215,
     215,    77,    77,    67,    77,    77,     3,    85,    82,   279,
     279,    82,    82,     3,     3,    78,    83,   281,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    82,    24,
      25,    26,    27,    24,    82,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    78,    83,    42,    43,    78,
     285,   286,    83,    80,    78,    78,    77,    83,     3,    23,
      82,    78,    82,    82,   299,   276,     3,     4,     5,     6,
       7,     1,    64,    40,    53,    70,    71,   147,    84,    57,
      75,    76,    77,   276,   131,   164,    -1,    82,    -1,    84,
       3,     4,     5,     6,     7,   162,   165,    -1,   166,    -1,
      -1,   167,    39,    -1,    -1,    42,    43,    -1,    21,    22,
      -1,    24,    25,    26,    27,    -1,    -1,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    42,
      43,    -1,    -1,    70,    71,    -1,    -1,    -1,    75,    76,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    -1,
      -1,    -1,    75,    76,    77,    -1,    -1,    -1,    -1,    82,
      -1,    84,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    72,    -1,    -1,    -1,
      39,    -1,    78,    42,    43,    -1,    -1,    83,    33,    34,
      35,    36,    37,    38,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    70,    71,    -1,    -1,    -1,    75,    76,    77,    33,
      34,    35,    36,    37,    38,    -1,    -1,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,     0,    -1,    -1,    -1,    -1,    -1,    -1,    72,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,    38,
       3,    -1,    -1,    -1,    -1,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    38,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    -1,    40,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,    38
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    87,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    33,    34,    35,    36,
      37,    38,    88,    89,    93,    94,    95,    96,    97,    98,
      99,   105,   119,     3,    84,     3,    84,     3,    84,    82,
      72,    90,    91,    92,    94,    98,   109,   110,   111,   109,
      84,    93,   100,   101,   102,    84,   100,    84,     3,   106,
     107,   108,    96,   111,    83,    62,    84,   121,     3,    77,
     112,   121,   100,    64,   103,   104,   109,    85,   102,   100,
      85,   106,    62,    85,    83,   111,    92,   109,     3,     4,
       5,     6,     7,    39,    42,    43,    70,    71,    75,    76,
      77,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   148,    21,    22,    24,    25,
      26,    27,    30,    31,    32,    82,    89,    93,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   130,   132,   109,
      77,    79,    85,   133,   144,   149,    82,    83,    64,    85,
      85,   149,   108,    77,   144,   144,   144,   144,   144,   144,
     144,   130,    51,    63,    50,    65,    66,    67,    48,    49,
      46,    47,    68,    69,    44,    45,    70,    71,    72,    73,
      74,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    41,    42,    43,    77,    79,    81,   129,   130,
      77,    77,    77,   120,    77,    82,    82,     3,    82,    85,
     124,    82,    83,    78,     3,    93,   113,   114,   115,   116,
     117,   118,   131,   132,   104,   149,    98,    78,   135,   130,
     136,   137,   138,   139,   140,   140,   141,   141,   141,   141,
     142,   142,   143,   143,   144,   144,   144,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   132,     3,   132,
     146,   147,   130,     3,    82,   130,   130,   129,    24,   130,
      82,   132,   109,    78,    83,    78,    83,    80,    78,    64,
      78,    83,    80,    78,    78,    82,    77,    78,     3,    40,
     118,   133,   132,   120,   120,   129,   130,   120,    23,    82,
      78,   120,   129,    82,    78,   120
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
#line 1833 "parser.c"
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


#line 440 "c.y"


void yyerror(const char* s)
{
  fprintf(stderr, "parse error: %s\n", s);
}

