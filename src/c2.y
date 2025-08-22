%{
int yylex();
void yyerror(const char *s);
%}
%token IDENTIFIER CONSTANT STRING_LITERAL SIZEOF
%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN TYPE_NAME

%token TYPEDEF EXTERN STATIC AUTO REGISTER
%token CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token STRUCT UNION ENUM ELLIPSIS

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%start translation_unit
%define parse.error verbose
%%

primary_expression
  : IDENTIFIER
  | CONSTANT
  | STRING_LITERAL
  | '(' expression ')'
  | '(' error ')'
  ;

postfix_expression
  : primary_expression
  | postfix_expression '[' expression ']'
  | postfix_expression '(' ')'
  | postfix_expression '(' argument_expression_list ')'
  | postfix_expression '.' IDENTIFIER
  | postfix_expression PTR_OP IDENTIFIER
  | postfix_expression INC_OP
  | postfix_expression DEC_OP
  ;

argument_expression_list
  : assignment_expression
  | argument_expression_list ',' assignment_expression
  | error ',' assignment_expression
  ;

unary_expression
  : postfix_expression
  | INC_OP unary_expression
  | DEC_OP unary_expression
  | unary_operator cast_expression
  | SIZEOF unary_expression
  | SIZEOF '(' type_name ')'
  ;

unary_operator
  : '&'
  | '*'
  | '+'
  | '-'
  | '~'
  | '!'
  ;

cast_expression
  : unary_expression
  | '(' type_name ')' cast_expression
  ;

multiplicative_expression
  : cast_expression
  | multiplicative_expression '*' cast_expression
  | multiplicative_expression '/' cast_expression
  | multiplicative_expression '%' cast_expression
  | error '*' cast_expression
  | error '/' cast_expression
  | error '%' cast_expression
  ;

additive_expression
  : multiplicative_expression
  | additive_expression '+' multiplicative_expression
  | additive_expression '-' multiplicative_expression
  | error '+' multiplicative_expression
  | error '-' multiplicative_expression
  ;

shift_expression
  : additive_expression
  | shift_expression LEFT_OP additive_expression
  | shift_expression RIGHT_OP additive_expression
  ;

relational_expression
  : shift_expression
  | relational_expression '<' shift_expression
  | relational_expression '>' shift_expression
  | relational_expression LE_OP shift_expression
  | relational_expression GE_OP shift_expression
  | error '<' shift_expression
  | error '>' shift_expression
  | error LE_OP shift_expression
  | error GE_OP shift_expression
  ;

equality_expression
  : relational_expression
  | equality_expression EQ_OP relational_expression
  | equality_expression NE_OP relational_expression
  | error EQ_OP relational_expression
  | error NE_OP relational_expression
  ;

and_expression
  : equality_expression
  | and_expression '&' equality_expression
  ;

exclusive_or_expression
  : and_expression
  | exclusive_or_expression '^' and_expression
  ;

inclusive_or_expression
  : exclusive_or_expression
  | inclusive_or_expression '|' exclusive_or_expression
  ;

logical_and_expression
  : inclusive_or_expression
  | logical_and_expression AND_OP inclusive_or_expression
  ;

logical_or_expression
  : logical_and_expression
  | logical_or_expression OR_OP logical_and_expression
  ;

conditional_expression
  : logical_or_expression
  | logical_or_expression '?' expression ':' conditional_expression
  | error '?' error ':' conditional_expression
  | logical_or_expression '?' error ':' conditional_expression
  | error '?' expression ':' conditional_expression
  ;

assignment_expression
  : conditional_expression
  | unary_expression assignment_operator assignment_expression
  ;

assignment_operator
  : '='
  | MUL_ASSIGN
  | DIV_ASSIGN
  | MOD_ASSIGN
  | ADD_ASSIGN
  | SUB_ASSIGN
  | LEFT_ASSIGN
  | RIGHT_ASSIGN
  | AND_ASSIGN
  | XOR_ASSIGN
  | OR_ASSIGN
  ;

expression
  : assignment_expression
  | expression ',' assignment_expression
  ;

constant_expression
  : conditional_expression
  ;

declaration
  : declaration_specifiers ';'
  | declaration_specifiers init_declarator_list ';'
  | declaration_specifiers init_declarator_list '=' assignment_expression ';'
  | declaration_specifiers error ';'
  ;

declaration_specifiers
  : storage_class_specifier
  | storage_class_specifier declaration_specifiers
  | type_specifier
  | type_specifier declaration_specifiers
  | type_qualifier
  | type_qualifier declaration_specifiers
  ;

init_declarator_list
  : init_declarator
  | init_declarator_list ',' init_declarator
  | error ',' init_declarator
  ;

init_declarator
  : declarator
  | declarator '=' initializer
  | error '=' initializer
  ;

storage_class_specifier
  : TYPEDEF
  | EXTERN
  | STATIC
  | AUTO
  | REGISTER
  ;

type_specifier
  : VOID
  | CHAR
  | SHORT
  | INT
  | LONG
  | FLOAT
  | DOUBLE
  | SIGNED
  | UNSIGNED
  | struct_or_union_specifier
  | enum_specifier
  | TYPE_NAME
  ;

struct_or_union_specifier
  : struct_or_union IDENTIFIER '{' struct_declaration_list '}'
  | struct_or_union '{' struct_declaration_list '}'
  | struct_or_union IDENTIFIER
  | struct_or_union IDENTIFIER '{' error '}'
  | struct_or_union '{' error '}'
  ;

struct_or_union
  : STRUCT
  | UNION
  ;

struct_declaration_list
  : struct_declaration
  | struct_declaration_list struct_declaration
  ;

struct_declaration
  : specifier_qualifier_list struct_declarator_list ';'
  | error ';'
  ;

specifier_qualifier_list
  : type_specifier specifier_qualifier_list
  | type_specifier
  | type_qualifier specifier_qualifier_list
  | type_qualifier
  ;

struct_declarator_list
  : struct_declarator
  | struct_declarator_list ',' struct_declarator
  | error ',' struct_declarator
  ;

struct_declarator
  : declarator
  | ':' constant_expression
  | declarator ':' constant_expression
  | error ':' constant_expression
  ;

enum_specifier
  : ENUM '{' enumerator_list '}'
  | ENUM IDENTIFIER '{' enumerator_list '}'
  | ENUM '{' error '}'
  | ENUM IDENTIFIER '{' error '}'
  | ENUM IDENTIFIER
  ;

enumerator_list
  : enumerator
  | enumerator_list ',' enumerator
  | error ',' enumerator
  ;

enumerator
  : IDENTIFIER
  | IDENTIFIER '=' constant_expression
  | error '=' constant_expression
  ;

type_qualifier
  : CONST
  | VOLATILE
  ;

declarator
  : pointer direct_declarator
  | direct_declarator
  ;

direct_declarator
  : IDENTIFIER
  | '(' declarator ')'
  | direct_declarator '[' constant_expression ']'
  | direct_declarator '[' ']'
  | direct_declarator '(' parameter_type_list ')'
  | direct_declarator '(' identifier_list ')'
  | direct_declarator '(' error ')'
  | error '(' error ')'
  | direct_declarator '(' ')'
  | '(' error ')'
  ;

pointer
  : '*'
  | '*' type_qualifier_list
  | '*' pointer
  | '*' type_qualifier_list pointer
  | '*' error pointer
  ;

type_qualifier_list
  : type_qualifier
  | type_qualifier_list type_qualifier
  ;


parameter_type_list
  : parameter_list
  | parameter_list ',' ELLIPSIS
  | error ',' ELLIPSIS
  ;

parameter_list
  : parameter_declaration
  | parameter_list ',' parameter_declaration
  | error ',' parameter_declaration
  ;

parameter_declaration
  : declaration_specifiers declarator
  | declaration_specifiers abstract_declarator
  | declaration_specifiers
  ;

identifier_list
  : IDENTIFIER
  | identifier_list ',' IDENTIFIER
  ;

type_name
  : specifier_qualifier_list
  | specifier_qualifier_list abstract_declarator
  ;

abstract_declarator
  : pointer
  | direct_abstract_declarator
  | pointer direct_abstract_declarator
  ;

direct_abstract_declarator
  : '(' abstract_declarator ')'
  | '[' ']'
  | '[' constant_expression ']'
  | '[' error ']'
  | direct_abstract_declarator '[' ']'
  | direct_abstract_declarator '[' constant_expression ']'
  | '(' ')'
  | '(' parameter_type_list ')'
  | direct_abstract_declarator '(' ')'
  | direct_abstract_declarator '(' parameter_type_list ')'
  | direct_abstract_declarator '(' error ')'
  | direct_abstract_declarator '[' error ']'
  ;

initializer
  : assignment_expression
  | '{' initializer_list '}'
  | '{' initializer_list ',' '}'
  | '{' error '}'
  ;

initializer_list
  : initializer
  | initializer_list ',' initializer
  | error ',' initializer
  ;

statement
  : labeled_statement
  | compound_statement
  | expression_statement
  | selection_statement
  | iteration_statement
  | jump_statement
  ;

labeled_statement
  : IDENTIFIER ':' statement
  | CASE constant_expression ':' statement
  | DEFAULT ':' statement
  ;

compound_statement
  : '{' '}'
  | '{' statement_list '}'
  | '{' declaration_list '}'
  | '{' declaration_list statement_list '}'
  | '{' error '}'
  ;

declaration_list
  : declaration
  | declaration_list declaration
  ;

statement_list
  : statement
  | statement_list statement
  ;

expression_statement
  : error ';'
  | expression ';'
  ;

selection_statement
  : IF '(' expression ')' statement
  | IF '(' expression ')' statement ELSE statement
  | SWITCH '(' expression ')' statement
  | IF '(' error ')' statement
  | IF '(' error ')' statement ELSE statement
  | SWITCH '(' error ')' statement
  ;

iteration_statement
  : WHILE '(' expression ')' statement
  | DO statement WHILE '(' expression ')' ';'
  | FOR '(' expression_statement expression_statement ')' statement
  | FOR '(' expression_statement expression_statement expression ')' statement
  | DO error WHILE '(' expression ')' ';'
  | FOR '(' error')' statement
  ;

jump_statement
  : GOTO IDENTIFIER ';'
  | CONTINUE ';'
  | BREAK ';'
  | RETURN ';'
  | RETURN expression ';'
  | RETURN error ';'
  ;

translation_unit
  : external_declaration
  | translation_unit external_declaration
  ;

external_declaration
  : function_definition
  | declaration
  ;

function_definition
  : declaration_specifiers declarator declaration_list compound_statement
  | declaration_specifiers declarator compound_statement
  | declaration_specifiers error compound_statement
  | declarator declaration_list compound_statement
  | error declaration_list compound_statement
  | declarator compound_statement
  | declarator error compound_statement
  | error compound_statement
  ;

%%
#include <stdio.h>
#include <string.h>
#include "main.h"
#define RESET       "\033[0m"
#define KNRM        "\x1B[0m"
#define KRED        "\x1B[31m"
#define KGRN        "\x1B[32m"
#define KYEL        "\x1B[33m"
#define KBLU        "\x1B[34m"
#define KMAG        "\x1B[35m"
#define KCYN        "\x1B[36m"
#define KWHT        "\x1B[37m"
#define BOLDBLACK   "\033[1m\033[30m"
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

extern int column;
extern int yylineno;
extern int yyleng;
extern char* yytext;
extern char* line_string;
extern void fill_line();
extern void clear_line_string();
extern char* concat(char *s1,char *s2);

extern char* current_file[MAX_INCL];
extern int current_file_i;

int recovering()
  {
  //YYABORT;
  return 0;
  }


void yyerror(const char *s)
{
  /* error_tpye/error_message? */
  fflush(stdout);
  char* original_line_string;
  original_line_string = concat("", line_string);
  //printf("original string:\n%s\n",original_line_string);
  fill_line();
  //printf("\n%*s\n%*s\n", column, "^", column, s);

  char* underline;
  int i;
  underline =malloc(1);
  strcpy(underline,"");
  char *squiggly = malloc(2*sizeof(char));
  squiggly[0] = '~';
  squiggly[1] = '\0';
  for(i=1;i<yyleng;++i)
    {
    char* temp;
    temp = concat(underline,squiggly);
    free(underline);
    underline=temp;
    }
  printf(
        BOLDMAGENTA "\n%s:"           RESET
        BOLDBLACK   "\nl:%d c:%d"     RESET
                    "::= %s at "      RESET
        BOLDMAGENTA "%s\n"            RESET
                    "\n%s"            RESET
        BOLDRED     "\n%*s"           RESET
        BOLDRED     "%s\n"            RESET
        , current_file[current_file_i]
        , (yylineno-1), column
        , s
        , yytext
        , line_string
        , (column-yyleng+1), "^"
        , underline
        );
  free(underline);
  free(line_string);
  line_string = concat("", original_line_string);
  free(original_line_string);
}
