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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 20 "c.y"
{
  char* sval;
  long  ival;
}
/* Line 1529 of yacc.c.  */
#line 176 "parser.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

