/*
 * Minimal C lexer (Flex) for the companion Bison grammar in c.y.
 */

%option noyywrap nodefault yylineno

%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "parser.h"
#include "typedefs.h"

static char* strndup0(const char* s, size_t n) {
  char* r = (char*)malloc(n+1);
  if(!r) return NULL;
  memcpy(r, s, n);
  r[n] = '\0';
  return r;
}
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

%%

{WS}                        ;
"//"[^\n]*                  ;
"/*"([^*]|\*+[^*/])*"*/"      ;
"#"[^\n]*                   ;

"void"                     return KW_VOID;
"char"                     return KW_CHAR;
"short"                    return KW_SHORT;
"int"                      return KW_INT;
"long"                     return KW_LONG;
"signed"                   return KW_SIGNED;
"unsigned"                 return KW_UNSIGNED;
"float"                    return KW_FLOAT;
"double"                   return KW_DOUBLE;

"struct"                   return KW_STRUCT;
"union"                    return KW_UNION;
"enum"                     return KW_ENUM;
"typedef"                  return KW_TYPEDEF;
"version"                  return KW_VERSION;

"return"                   return KW_RETURN;
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
"goto"                     return KW_GOTO;

"const"                    return KW_CONST;
"volatile"                 return KW_VOLATILE;
"restrict"                 return KW_RESTRICT;
"inline"                   return KW_INLINE;
"uniq"                     return KW_UNIQ;
"extern"                   return KW_EXTERN;
"static"                   return KW_STATIC;
"sizeof"                   return KW_SIZEOF;

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

{HEX}[uUlL]*               { yylval.sval = strndup0(yytext, yyleng); return INTEGER_CONSTANT; }
{BIN}[uUlL]*               { yylval.sval = strndup0(yytext, yyleng); return INTEGER_CONSTANT; }
{OCT}[uUlL]*               { yylval.sval = strndup0(yytext, yyleng); return INTEGER_CONSTANT; }
0[uUlL]*                   { yylval.sval = strndup0(yytext, yyleng); return INTEGER_CONSTANT; }
{DEC}[uUlL]*               { yylval.sval = strndup0(yytext, yyleng); return INTEGER_CONSTANT; }
({FP_DEC}|{FP_DEC2})[fFlL]? { yylval.sval = strndup0(yytext, yyleng); return FLOAT_CONSTANT; }
{FP_HEX}[fFlL]?            { yylval.sval = strndup0(yytext, yyleng); return FLOAT_CONSTANT; }

([uUL]|u8)?'([^\\\n]|\\.)+' { yylval.sval = strndup0(yytext, yyleng); return CHAR_CONSTANT; }
(u8|[uUL])?\"([^\\\n]|\\.)*\"  { yylval.sval = strndup0(yytext, yyleng); return STRING_LITERAL; }

{ID}                       {
                              yylval.sval = strndup0(yytext, yyleng);
                              if(typedef_is(yylval.sval)) return TYPE_NAME;
                              return IDENTIFIER;
                           }

.                           { return yytext[0]; }

%%
