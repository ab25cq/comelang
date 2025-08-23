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
#line 188 "parser.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

