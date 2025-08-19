/*
 * Flex lexer for C17 + GCC/Clang extensions (skeleton)
 */

%option noyywrap nodefault

%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "parser.h"
#include "arena.h"
#include "mem.h"
%}

WS          [ \t\r\v\f\n]+
ID          [A-Za-z_][A-Za-z0-9_]*
HEX         0[xX][0-9A-Fa-f]+
OCT         0[0-7]+
BIN         0[bB][01]+
DEC         [1-9][0-9]*
FP_DEC      (([0-9]*\.[0-9]+)|([0-9]+\.[0-9]*))([eE][+-]?[0-9]+)?
FP_DEC2     [0-9]+([eE][+-]?[0-9]+)
FP_HEX      0[xX]([0-9A-Fa-f]*\.[0-9A-Fa-f]+|[0-9A-Fa-f]+\.[0-9A-Fa-f]*)([pP][+-]?[0-9]+)
CHARSUFF    (u8|[uUL])?

%%

{WS}                        ;
"//"[^\n]*                  ;
"/*"([^*]|\*+[^*/])*"*/"      ;
"#"[^\n]*                   ;

"int"                      return KW_INT;
"char"                     return KW_CHAR;
"void"                     return KW_VOID;
"struct"                   return KW_STRUCT;
"union"                    return KW_UNION;
"enum"                     return KW_ENUM;
"typedef"                  return KW_TYPEDEF;
"return"                   return KW_RETURN;
"goto"                     return KW_GOTO;
"if"                       return KW_IF;
"else"                     return KW_ELSE;
"while"                    return KW_WHILE;
"for"                      return KW_FOR;
"do"                       return KW_DO;
"switch"                   return KW_SWITCH;
"case"                     return KW_CASE;
"default"                  return KW_DEFAULT;
"break"                    return KW_BREAK;
"continue"                 return KW_CONTINUE;
"sizeof"                   return KW_SIZEOF;
"_Alignas"                 return KW_ALIGNAS;
"_Alignof"                 return KW_ALIGNOF;
"_Noreturn"                return KW_NORETURN;
"_Thread_local"            return KW_THREAD_LOCAL;
"_Atomic"                  return KW_ATOMIC;
"_Bool"                    return KW_BOOL;
"_Complex"                 return KW_COMPLEX;
"_Imaginary"               return KW_IMAGINARY;
"float"                    return KW_FLOAT;
"double"                   return KW_DOUBLE;
"short"                    return KW_SHORT;
"long"                     return KW_LONG;
"signed"                   return KW_SIGNED;
"unsigned"                 return KW_UNSIGNED;
"auto"                     return KW_AUTO;
"register"                 return KW_REGISTER;
"extern"                   return KW_EXTERN;
"static"                   return KW_STATIC;
"inline"                   return KW_INLINE;
"__inline__"               return KW_INLINE;
"const"                    return KW_CONST;
"volatile"                 return KW_VOLATILE;
"restrict"                 return KW_RESTRICT;
"__restrict__"             return KW_RESTRICT;
"_Static_assert"           return KW_STATIC_ASSERT;
"static_assert"            return KW_STATIC_ASSERT;
"_Generic"                 return KW_GENERIC;
"asm"                      return KW_ASM;
"__asm__"                  return KW_ASM;
"typeof"                   return KW_TYPEOF;
"__typeof__"               return KW_TYPEOF;
"__auto_type"              return KW_AUTO_TYPE;
"__attribute__"            return KW_ATTRIBUTE;
"__declspec"               return KW_DECLSPEC;

"({"                       return LPAREN_BRACE;
"("                        return '(';
")"                        return ')';
"{"                        return '{';
"}"                        return '}';
","                        return ',';
";"                        return ';';
"."                        return '.';
"&"                        return '&';
"*"                        return '*';
"+"                        return '+';
"-"                        return '-';
"/"                        return '/';
"%"                        return '%';
"<"                        return '<';
">"                        return '>';
"="                        return '=';
"!"                        return '!';
"^"                        return '^';
"|"                        return '|';
"?"                        return '?';
":"                        return ':';

"..."                      return ELLIPSIS;
"->"                       return ARROW;
"++"                       return INC;
"--"                       return DEC;
"<<"                       return LSHIFT;
">>"                       return RSHIFT;
"<="                       return LE;
">="                       return GE;
"=="                       return EQ;
"!="                       return NE;
"&&"                       return LOGAND;
"||"                       return LOGOR;
"<<="                      return LSHIFT_ASSIGN;
">>="                      return RSHIFT_ASSIGN;
"+="                       return ADD_ASSIGN;
"-="                       return SUB_ASSIGN;
"*="                       return MUL_ASSIGN;
"/="                       return DIV_ASSIGN;
"%="                       return MOD_ASSIGN;
"&="                       return AND_ASSIGN;
"|="                       return OR_ASSIGN;
"^="                       return XOR_ASSIGN;

{HEX}[uUlL]*               { yylval.sval = arena_strndup(g_arena, yytext, yyleng); return INTEGER_CONSTANT; }
{BIN}[uUlL]*               { yylval.sval = arena_strndup(g_arena, yytext, yyleng); return INTEGER_CONSTANT; }
{OCT}[uUlL]*               { yylval.sval = arena_strndup(g_arena, yytext, yyleng); return INTEGER_CONSTANT; }
{DEC}[uUlL]*               { yylval.sval = arena_strndup(g_arena, yytext, yyleng); return INTEGER_CONSTANT; }
({FP_DEC}|{FP_DEC2})[fFlL]? { yylval.sval = arena_strndup(g_arena, yytext, yyleng); return FLOAT_CONSTANT; }
{FP_HEX}[fFlL]?            { yylval.sval = arena_strndup(g_arena, yytext, yyleng); return FLOAT_CONSTANT; }

{CHARSUFF}'([^\\\n]|\\.)+'  { yylval.sval = arena_strndup(g_arena, yytext, yyleng); return CHAR_CONSTANT; }
(u8|[uUL])?\"([^\\\n]|\\.)*\"  { yylval.sval = arena_strndup(g_arena, yytext, yyleng); return STRING_LITERAL; }

{ID}                       { yylval.sval = arena_strndup(g_arena, yytext, yyleng); return IDENTIFIER; }
.                           { return yytext[0]; }

%%
