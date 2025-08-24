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
/* Line 1529 of yacc.c.  */
#line 192 "parser.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

