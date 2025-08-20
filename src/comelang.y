/*
 * Bison grammar skeleton for comelang C-front (C17 + GCC/Clang extensions ready)
 * - Generates: grammar/parser.c, grammar/parser.h
 * - Minimal subset to start; extend incrementally.
 * - Kept portable for older bison.
 */

%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yylex(void);
static void yyerror(const char* msg)
{
  fprintf(stderr, "parse error: %s\n", msg);
}

#include "common2.h"
%}

/* Identifiers and literals */
%token <sval> IDENTIFIER
%token <sval> STRING_LITERAL
%token <sval> INTEGER_CONSTANT
%token <sval> FLOAT_CONSTANT
%token <sval> CHAR_CONSTANT

/* Keywords (C17 core) */
%token KW_INT KW_CHAR KW_VOID KW_FLOAT KW_DOUBLE KW_SHORT KW_LONG KW_SIGNED KW_UNSIGNED KW_BOOL KW_COMPLEX KW_IMAGINARY
%token KW_STRUCT KW_UNION KW_ENUM KW_TYPEDEF
%token KW_RETURN KW_IF KW_ELSE KW_WHILE KW_FOR KW_DO KW_SWITCH KW_CASE KW_DEFAULT KW_BREAK KW_CONTINUE KW_GOTO
%token KW_SIZEOF KW_ALIGNAS KW_ALIGNOF KW_NORETURN KW_THREAD_LOCAL KW_ATOMIC KW_CONST KW_VOLATILE KW_RESTRICT KW_INLINE KW_EXTERN KW_STATIC KW_REGISTER KW_AUTO

/* C17 and GCC/Clang extensions */
%token KW_STATIC_ASSERT KW_GENERIC KW_TYPEOF KW_AUTO_TYPE
%token KW_ATTRIBUTE KW_DECLSPEC KW_EXTENSION KW_ASM

/* Punctuators */
%token ELLIPSIS
%token ARROW INC DEC LSHIFT RSHIFT LE GE EQ NE LOGAND LOGOR
%token ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN AND_ASSIGN OR_ASSIGN XOR_ASSIGN LSHIFT_ASSIGN RSHIFT_ASSIGN
%token LPAREN_BRACE

/* Single-char tokens come via literal characters in rules */

%union {
  char* sval;
  long  ival;
  struct sNode* node;
}

/* operator precedence (simplified) */
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
%right INC DEC '!' '~' KW_SIZEOF
%left '[' ']' '(' ')' '.' ARROW

%type <ival> simple_param_list simple_param_list_opt
%type <node> expression assignment_expression conditional_expression logical_or_expression logical_and_expression equality_expression relational_expression additive_expression multiplicative_expression unary_expression postfix_expression primary_expression
%type <node> constant string_seq
%type <node> argument_expression_list argument_expression_list_opt expression_opt statement labeled_statement compound_statement block_item block_item_list block_item_list_opt
%start translation_unit

%%

translation_unit
  : /* empty */
  | translation_unit external_declaration
  ;

external_declaration
  : function_definition
  | declaration ';'
  | static_assert_declaration
  | simple_function_definition
  ;

/* Declarations */
declaration
  : declaration_specifiers declarator_opt
  | declaration_specifiers init_declarator_list
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
  | alignment_specifier
  | attribute_specifier
  | declspec_specifier
  ;

storage_class_specifier
  : KW_TYPEDEF
  | KW_EXTERN
  | KW_STATIC
  | KW_THREAD_LOCAL
  | KW_AUTO
  | KW_REGISTER
  ;

type_qualifier
  : KW_CONST
  | KW_VOLATILE
  | KW_RESTRICT
  | KW_ATOMIC
  ;

function_specifier
  : KW_INLINE
  | KW_NORETURN
  ;

alignment_specifier
  : KW_ALIGNAS '(' type_specifier ')'
  | KW_ALIGNAS '(' INTEGER_CONSTANT ')'
  ;

attribute_specifier
  : KW_ATTRIBUTE '(' attribute_arg_list_opt ')'
  ;

declspec_specifier
  : KW_DECLSPEC '(' attribute_arg_list_opt ')'
  ;

attribute_arg_list_opt
  : /* empty */
  | attribute_arg_list
  ;

attribute_arg_list
  : attribute_arg
  | attribute_arg_list ',' attribute_arg
  ;

attribute_arg
  : IDENTIFIER
  | STRING_LITERAL
  | INTEGER_CONSTANT
  | '(' attribute_arg_list_opt ')'
  ;

init_declarator_list
  : init_declarator
  | init_declarator_list ',' init_declarator
  ;

init_declarator
  : declarator
  | declarator '=' initializer
  ;

declarator_opt
  : /* empty */
  | declarator
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
  | '*' type_qualifier_list
  | '*' pointer
  | '*' type_qualifier_list pointer
  ;

type_qualifier_list
  : type_qualifier
  | type_qualifier_list type_qualifier
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

/* Types */
type_specifier
  : KW_VOID
  | KW_CHAR
  | KW_SHORT
  | KW_INT
  | KW_LONG
  | KW_FLOAT
  | KW_DOUBLE
  | KW_SIGNED
  | KW_UNSIGNED
  | KW_BOOL
  | KW_COMPLEX
  | KW_IMAGINARY
  | struct_or_union_specifier
  | enum_specifier
  | KW_TYPEOF '(' type_specifier ')'
  ;

specifier_qualifier_list
  : type_specifier
  | type_qualifier
  | specifier_qualifier_list type_specifier
  | specifier_qualifier_list type_qualifier
  ;

struct_or_union_specifier
  : KW_STRUCT IDENTIFIER
  | KW_UNION IDENTIFIER
  | KW_STRUCT '{' struct_declaration_list '}'
  | KW_UNION '{' struct_declaration_list '}'
  | KW_STRUCT IDENTIFIER '{' struct_declaration_list '}'
  | KW_UNION IDENTIFIER '{' struct_declaration_list '}'
  ;

struct_declaration_list
  : struct_declaration
  | struct_declaration_list struct_declaration
  ;

struct_declaration
  : specifier_qualifier_list struct_declarator_list ';'
  | static_assert_declaration
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
  : KW_ENUM IDENTIFIER
  | KW_ENUM '{' enumerator_list_opt '}'
  | KW_ENUM IDENTIFIER '{' enumerator_list_opt '}'
  ;

enumerator_list_opt
  : /* empty */
  | enumerator_list
  ;

enumerator_list
  : enumerator
  | enumerator_list ',' enumerator
  | enumerator_list ','
  ;

enumerator
  : IDENTIFIER
  | IDENTIFIER '=' constant_expression
  ;

/* Simple function definition to accept common forms quickly */
simple_function_definition
  : function_declspec IDENTIFIER '(' simple_param_list_opt ')' compound_statement
    { cb_on_function_simple($2, $4); }
  ;

function_declspec
  : KW_INT
  | declaration_specifiers
  ;

simple_param_list_opt
  : /* empty */              { $$ = 0; }
  | simple_param_list        { $$ = $1; }
  ;

simple_param_list
  : simple_param                         { $$ = 1; }
  | simple_param_list ',' simple_param   { $$ = $1 + 1; }
  ;

simple_param
  : declaration_specifiers pointer_opt IDENTIFIER
  | declaration_specifiers pointer_opt /* abstract parameter (e.g., char*) */
  ;

function_definition
  : type_specifier declarator compound_statement
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

/* asm and static_assert support */
asm_statement
  : KW_ASM asm_qualifiers_opt '(' asm_arguments ')' ';'
  ;

asm_qualifiers_opt
  : /* empty */
  | asm_qualifiers_opt KW_VOLATILE
  | asm_qualifiers_opt KW_INLINE
  | asm_qualifiers_opt KW_GOTO
  ;

/* GNU extended asm arguments: template : outputs : inputs : clobbers : labels
 * Each section is optional but colons must be present to skip. */
asm_arguments
  : string_seq
  | string_seq ':' asm_output_operands_opt
  | string_seq ':' asm_output_operands_opt ':' asm_input_operands_opt
  | string_seq ':' asm_output_operands_opt ':' asm_input_operands_opt ':' asm_clobbers_opt
  | string_seq ':' asm_output_operands_opt ':' asm_input_operands_opt ':' asm_clobbers_opt ':' asm_goto_labels_opt
  ;

asm_output_operands_opt
  : /* empty */
  | asm_output_operands
  ;

asm_input_operands_opt
  : /* empty */
  | asm_input_operands
  ;

asm_clobbers_opt
  : /* empty */
  | asm_clobbers
  ;

asm_goto_labels_opt
  : /* empty */
  | asm_goto_labels
  ;

asm_output_operands
  : asm_output_operand
  | asm_output_operands ',' asm_output_operand
  ;

asm_input_operands
  : asm_input_operand
  | asm_input_operands ',' asm_input_operand
  ;

asm_output_operand
  : asm_symbolic_name_opt STRING_LITERAL '(' unary_expression ')'
  ;

asm_input_operand
  : asm_symbolic_name_opt STRING_LITERAL '(' assignment_expression ')'
  ;

asm_symbolic_name_opt
  : /* empty */
  | '[' IDENTIFIER ']'
  ;

asm_clobbers
  : STRING_LITERAL
  | asm_clobbers ',' STRING_LITERAL
  ;

asm_goto_labels
  : IDENTIFIER
  | asm_goto_labels ',' IDENTIFIER
  ;

static_assert_declaration
  : KW_STATIC_ASSERT '(' conditional_expression ',' STRING_LITERAL ')' ';'
  ;

statement
  : ';'                                        { $$ = cb_stmt_empty(); }
  | expression ';'                              { $$ = cb_expr_stmt($1); }
  | KW_RETURN expression_opt ';'                 { $$ = cb_stmt_return($2); }
  | compound_statement                           { $$ = $1; }
  | labeled_statement                            { $$ = $1; }
  | KW_IF '(' expression ')' statement           { $$ = NULL; }
  | KW_IF '(' expression ')' statement KW_ELSE statement { $$ = NULL; }
  | KW_WHILE '(' expression ')' statement        { $$ = NULL; }
  | KW_DO statement KW_WHILE '(' expression ')' ';' { $$ = NULL; }
  | KW_FOR '(' expression_opt ';' expression_opt ';' expression_opt ')' statement { $$ = NULL; }
  | KW_FOR '(' declaration expression_opt ';' expression_opt ')' statement { $$ = NULL; }
  | KW_SWITCH '(' expression ')' statement       { $$ = NULL; }
  | KW_BREAK ';'                                 { $$ = NULL; }
  | KW_CONTINUE ';'                              { $$ = NULL; }
  | KW_GOTO IDENTIFIER ';'                       { $$ = NULL; }
  | asm_statement                                { $$ = NULL; }
  ;

labeled_statement
  : IDENTIFIER ':' statement
  | KW_CASE constant_expression ':' statement
  | KW_DEFAULT ':' statement
  ;

expression_opt
  : /* empty */               { $$ = NULL; }
  | expression                { $$ = $1; }
  ;

/* A tiny expression grammar; extend with precedence/associativity as needed */
expression
  : assignment_expression                      { $$ = $1; }
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
  ;

logical_or_expression
  : logical_and_expression
  | logical_or_expression LOGOR logical_and_expression
  ;

logical_and_expression
  : equality_expression
  | logical_and_expression LOGAND equality_expression
  ;

equality_expression
  : relational_expression
  | equality_expression EQ relational_expression
  | equality_expression NE relational_expression
  ;

relational_expression
  : additive_expression
  | relational_expression '<' additive_expression
  | relational_expression '>' additive_expression
  | relational_expression LE additive_expression
  | relational_expression GE additive_expression
  ;

additive_expression
  : multiplicative_expression                        { $$ = $1; }
  | additive_expression '+' multiplicative_expression{ $$ = cb_binary("+", $1, $3); }
  | additive_expression '-' multiplicative_expression{ $$ = cb_binary("-", $1, $3); }
  ;

multiplicative_expression
  : unary_expression                               { $$ = $1; }
  | multiplicative_expression '*' unary_expression { $$ = cb_binary("*", $1, $3); }
  | multiplicative_expression '/' unary_expression { $$ = cb_binary("/", $1, $3); }
  | multiplicative_expression '%' unary_expression { $$ = cb_binary("%", $1, $3); }
  ;

unary_expression
  : postfix_expression                 { $$ = $1; }
  | INC unary_expression               { $$ = cb_unary("pre++", $2); }
  | DEC unary_expression               { $$ = cb_unary("pre--", $2); }
  | '&' unary_expression               { $$ = cb_unary("&", $2); }
  | '*' unary_expression               { $$ = cb_unary("*", $2); }
  | '+' unary_expression               { $$ = cb_unary("+", $2); }
  | '-' unary_expression               { $$ = cb_unary("-", $2); }
  | KW_SIZEOF unary_expression         { $$ = cb_unary("sizeof", $2); }
  | KW_SIZEOF '(' type_specifier ')'   { $$ = cb_int_literal("0", gInfo); }
  | KW_TYPEOF '(' expression ')'       { $$ = $3; }
  ;

postfix_expression
  : primary_expression                                    { $$ = $1; }
  | postfix_expression '(' argument_expression_list_opt ')' { $$ = cb_call($1, $3); }
  | postfix_expression INC                                 { $$ = cb_unary("post++", $1); }
  | postfix_expression DEC                                 { $$ = cb_unary("post--", $1); }
  | postfix_expression '[' expression ']'                  { $$ = cb_index($1, $3); }
  | postfix_expression '.' IDENTIFIER                      { $$ = cb_member($1, $3, 0); }
  | postfix_expression ARROW IDENTIFIER                    { $$ = cb_member($1, $3, 1); }
  | KW_GENERIC '(' assignment_expression ',' assignment_expression ')' { $$ = cb_binary("_Generic", $3, $5); }
  ;

argument_expression_list_opt
  : /* empty */                   { $$ = cb_list_new(); }
  | argument_expression_list      { $$ = $1; }
  ;

argument_expression_list
  : assignment_expression                               { $$ = cb_list_append(cb_list_new(), $1); }
  | argument_expression_list ',' assignment_expression  { $$ = cb_list_append($1, $3); }
  ;

primary_expression
  : IDENTIFIER                           { $$ = cb_ident($1); }
  | constant                             { $$ = $1; }
  | string_seq                           { $$ = $1; }
  | '(' expression ')'                   { $$ = $2; }
  | LPAREN_BRACE compound_statement ')'  { $$ = $2; }
  ;

constant
  : INTEGER_CONSTANT   { $$ = cb_int_literal($1, gInfo); }
  | FLOAT_CONSTANT     { $$ = cb_float_literal($1); }
  | CHAR_CONSTANT      { $$ = cb_char_literal($1); }
  ;

string_seq
  : STRING_LITERAL                    { $$ = cb_string_literal($1); }
  | string_seq STRING_LITERAL         { $$ = cb_binary("strcat", $1, cb_string_literal($2)); }
  ;

/* Optional expressions */
assignment_expression_opt
  : /* empty */
  | assignment_expression
  ;

/* Initializers */
initializer
  : assignment_expression
  | '{' initializer_list '}'
  | '{' initializer_list ',' '}'
  ;

initializer_list
  : designation_opt initializer
  | initializer_list ',' designation_opt initializer
  ;

designation_opt
  : /* empty */
  | designation
  ;

designation
  : designator_list '=' 
  ;

designator_list
  : designator
  | designator_list designator
  ;

designator
  : '.' IDENTIFIER
  | '[' constant_expression ']'
  ;

constant_expression
  : conditional_expression
  ;

%%
