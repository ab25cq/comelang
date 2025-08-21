/*
 * Minimal C (C17-ish) syntax parser using Bison.
 * - Supports basic declarations, function definitions, statements and expressions.
 * - Pair with Flex lexer in c.l and build via src/Makefile.
 */

%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yylex(void);
void yyerror(const char* s);

%}

%destructor { free($$); } IDENTIFIER STRING_LITERAL INTEGER_CONSTANT
FLOAT_CONSTANT CHAR_CONSTANT

%union {
  char* sval;
  long  ival;
}

/* Identifiers and literals */
%token <sval> IDENTIFIER
%token <sval> STRING_LITERAL
%token <sval> INTEGER_CONSTANT
%token <sval> FLOAT_CONSTANT
%token <sval> CHAR_CONSTANT

/* Keywords (subset) */
%token KW_VOID KW_CHAR KW_SHORT KW_INT KW_LONG KW_SIGNED KW_UNSIGNED KW_FLOAT KW_DOUBLE
%token KW_STRUCT KW_UNION KW_ENUM KW_TYPEDEF
%token KW_RETURN KW_IF KW_ELSE KW_WHILE KW_FOR KW_DO KW_SWITCH KW_CASE KW_DEFAULT KW_BREAK KW_CONTINUE KW_GOTO
%token KW_CONST KW_VOLATILE KW_RESTRICT KW_INLINE KW_EXTERN KW_STATIC
%token KW_SIZEOF

/* Punctuators and operators */
%token ELLIPSIS
%token ARROW INC DEC LSHIFT RSHIFT LE GE EQ NE LOGAND LOGOR
%token ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN AND_ASSIGN OR_ASSIGN XOR_ASSIGN LSHIFT_ASSIGN RSHIFT_ASSIGN

%right '=' ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN AND_ASSIGN OR_ASSIGN XOR_ASSIGN LSHIFT_ASSIGN RSHIFT_ASSIGN
%right '?' ':'
%left LOGOR
%left LOGAND
%left '|' 
%left '^'
%left '&'
%left EQ NE
%left '<' '>' LE GE
%left LSHIFT RSHIFT
%left '+' '-'
%left '*' '/' '%'
%right '!' '~' INC DEC KW_SIZEOF
%left '(' ')' '[' ']' '.' ARROW

%start translation_unit

%%

translation_unit
  : /* empty */
  | translation_unit external_declaration
  ;

external_declaration
  : function_definition
  | declaration ';'
  ;

/* Declarations */
declaration
  : declaration_specifiers init_declarator_list_opt
  ;

init_declarator_list_opt
  : /* empty */
  | init_declarator_list
  ;

init_declarator_list
  : init_declarator
  | init_declarator_list ',' init_declarator
  ;

init_declarator
  : declarator
  | declarator '=' assignment_expression
  ;

declaration_specifiers
  : declaration_specifier
  | declaration_specifiers declaration_specifier
  ;

declaration_specifier
  : storage_class_specifier
  | type_specifier
  | type_qualifier
  | function_specifier
  ;

storage_class_specifier
  : KW_TYPEDEF
  | KW_EXTERN
  | KW_STATIC
  ;

type_qualifier
  : KW_CONST
  | KW_VOLATILE
  | KW_RESTRICT
  ;

function_specifier
  : KW_INLINE
  ;

/* Types (subset) */
type_specifier
  : KW_VOID
  | KW_CHAR
  | KW_SHORT
  | KW_INT
  | KW_LONG
  | KW_SIGNED
  | KW_UNSIGNED
  | KW_FLOAT
  | KW_DOUBLE
  | struct_or_union_specifier
  | enum_specifier
  ;

struct_or_union_specifier
  : KW_STRUCT IDENTIFIER '{' struct_declaration_list_opt '}'
  | KW_UNION  IDENTIFIER '{' struct_declaration_list_opt '}'
  | KW_STRUCT '{' struct_declaration_list_opt '}'
  | KW_UNION  '{' struct_declaration_list_opt '}'
  | KW_STRUCT IDENTIFIER
  | KW_UNION  IDENTIFIER
  ;

struct_declaration_list_opt
  : /* empty */
  | struct_declaration_list
  ;

struct_declaration_list
  : struct_declaration
  | struct_declaration_list struct_declaration
  ;

struct_declaration
  : declaration_specifiers struct_declarator_list ';'
  ;

struct_declarator_list
  : struct_declarator
  | struct_declarator_list ',' struct_declarator
  ;

struct_declarator
  : declarator
  | ':' constant_expression
  | declarator ':' constant_expression
  ;

enum_specifier
  : KW_ENUM IDENTIFIER '{' enumerator_list_opt '}'
  | KW_ENUM '{' enumerator_list_opt '}'
  | KW_ENUM IDENTIFIER
  ;

enumerator_list_opt
  : /* empty */
  | enumerator_list
  ;

enumerator_list
  : enumerator
  | enumerator_list ',' enumerator
  ;

enumerator
  : IDENTIFIER
  | IDENTIFIER '=' constant_expression
  ;

/* Declarators */
declarator
  : pointer_opt direct_declarator
  ;

pointer_opt
  : /* empty */
  | pointer
  ;

pointer
  : '*'
  | '*' type_qualifier
  | '*' pointer
  | '*' type_qualifier pointer
  ;

direct_declarator
  : IDENTIFIER
  | '(' declarator ')'
  | direct_declarator '[' assignment_expression_opt ']'
  | direct_declarator '(' parameter_type_list_opt ')'
  | direct_declarator '(' identifier_list_opt ')'
  ;

identifier_list_opt
  : /* empty */
  | identifier_list
  ;

identifier_list
  : IDENTIFIER
  | identifier_list ',' IDENTIFIER
  ;

parameter_type_list_opt
  : /* empty */
  | parameter_type_list
  ;

parameter_type_list
  : parameter_list
  | parameter_list ',' ELLIPSIS
  ;

parameter_list
  : parameter_declaration
  | parameter_list ',' parameter_declaration
  ;

parameter_declaration
  : declaration_specifiers declarator
  | declaration_specifiers
  ;

/* Function definition (generic) */
function_definition
  : declaration_specifiers declarator compound_statement
  | type_specifier declarator compound_statement
  ;

/* Statements */
statement
  : compound_statement
  | expression_statement
  | selection_statement
  | iteration_statement
  | jump_statement
  ;

compound_statement
  : '{' block_item_list_opt '}'
  ;

block_item_list_opt
  : /* empty */
  | block_item_list
  ;

block_item_list
  : block_item
  | block_item_list block_item
  ;

block_item
  : declaration ';'
  | statement
  ;

expression_statement
  : ';'
  | expression ';'
  ;

selection_statement
  : KW_IF '(' expression ')' statement
  | KW_IF '(' expression ')' statement KW_ELSE statement
  | KW_SWITCH '(' expression ')' statement
  ;

iteration_statement
  : KW_WHILE '(' expression ')' statement
  | KW_DO statement KW_WHILE '(' expression ')' ';'
  | KW_FOR '(' expression_opt ';' expression_opt ';' expression_opt ')' statement
  ;

jump_statement
  : KW_RETURN expression_opt ';'
  | KW_BREAK ';'
  | KW_CONTINUE ';'
  | KW_GOTO IDENTIFIER ';'
  ;

/* Expressions */
expression_opt
  : /* empty */
  | expression
  ;

expression
  : assignment_expression
  | expression ',' assignment_expression
  ;

assignment_expression_opt
  : /* empty */
  | assignment_expression
  ;

assignment_expression
  : conditional_expression
  | unary_expression '=' assignment_expression
  | unary_expression ADD_ASSIGN assignment_expression
  | unary_expression SUB_ASSIGN assignment_expression
  | unary_expression MUL_ASSIGN assignment_expression
  | unary_expression DIV_ASSIGN assignment_expression
  | unary_expression MOD_ASSIGN assignment_expression
  | unary_expression AND_ASSIGN assignment_expression
  | unary_expression OR_ASSIGN assignment_expression
  | unary_expression XOR_ASSIGN assignment_expression
  | unary_expression LSHIFT_ASSIGN assignment_expression
  | unary_expression RSHIFT_ASSIGN assignment_expression
  ;

conditional_expression
  : logical_or_expression
  | logical_or_expression '?' expression ':' conditional_expression
  ;

logical_or_expression
  : logical_and_expression
  | logical_or_expression LOGOR logical_and_expression
  ;

logical_and_expression
  : inclusive_or_expression
  | logical_and_expression LOGAND inclusive_or_expression
  ;

inclusive_or_expression
  : exclusive_or_expression
  | inclusive_or_expression '|' exclusive_or_expression
  ;

exclusive_or_expression
  : and_expression
  | exclusive_or_expression '^' and_expression
  ;

and_expression
  : equality_expression
  | and_expression '&' equality_expression
  ;

equality_expression
  : relational_expression
  | equality_expression EQ relational_expression
  | equality_expression NE relational_expression
  ;

relational_expression
  : shift_expression
  | relational_expression '<' shift_expression
  | relational_expression '>' shift_expression
  | relational_expression LE shift_expression
  | relational_expression GE shift_expression
  ;

shift_expression
  : additive_expression
  | shift_expression LSHIFT additive_expression
  | shift_expression RSHIFT additive_expression
  ;

additive_expression
  : multiplicative_expression
  | additive_expression '+' multiplicative_expression
  | additive_expression '-' multiplicative_expression
  ;

multiplicative_expression
  : unary_expression
  | multiplicative_expression '*' unary_expression
  | multiplicative_expression '/' unary_expression
  | multiplicative_expression '%' unary_expression
  ;

unary_expression
  : postfix_expression
  | INC unary_expression
  | DEC unary_expression
  | '+' unary_expression
  | '-' unary_expression
  | '!' unary_expression
  | '~' unary_expression
  | KW_SIZEOF unary_expression
  | KW_SIZEOF '(' type_specifier ')'
  ;

postfix_expression
  : primary_expression
  | postfix_expression '(' argument_expression_list_opt ')'
  | postfix_expression '[' expression ']'
  | postfix_expression '.' IDENTIFIER
  | postfix_expression ARROW IDENTIFIER
  | postfix_expression INC
  | postfix_expression DEC
  ;

argument_expression_list_opt
  : /* empty */
  | argument_expression_list
  ;

argument_expression_list
  : assignment_expression
  | argument_expression_list ',' assignment_expression
  ;

primary_expression
  : IDENTIFIER
  | INTEGER_CONSTANT
  | FLOAT_CONSTANT
  | CHAR_CONSTANT
  | STRING_LITERAL
  | '(' expression ')'
  ;

constant_expression
  : conditional_expression
  ;

%%

void yyerror(const char* s)
{
  fprintf(stderr, "parse error: %s\n", s);
}
