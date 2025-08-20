/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 47 "src/comelang.y"
{
  char* sval;
  long  ival;
  struct sNode* node;
}
/* Line 1529 of yacc.c.  */
#line 215 "src/parser.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

