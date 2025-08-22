/*
 * Minimal C (C17-ish) syntax parser using Bison.
 * - Supports basic declarations, function definitions, statements and expressions.
 * - Pair with Flex lexer in c.l and build via src/Makefile.
 */

%{
#define YYDEBUG 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ast.h"
#include "typedefs.h"

int yylex(void);
void yyerror(const char* s);
extern int yylineno;
extern char* yytext;

/* Simple parameter list builder for the simple_function_definition path */
typedef struct ParamList {
  AstParam* a;
  long n;
  long cap;
} ParamList;

static ParamList* plist_new(void) {
  ParamList* p = (ParamList*)calloc(1, sizeof(ParamList));
  return p;
}
static void plist_push(ParamList* p, const char* type_name, const char* name) {
  if(!p) return;
  if(p->n == p->cap) {
    long nc = p->cap ? p->cap*2 : 4;
    AstParam* na = (AstParam*)realloc(p->a, sizeof(AstParam)*nc);
    if(!na) return;
    p->a = na;
    p->cap = nc;
  }
  p->a[p->n].type_name = type_name ? strdup(type_name) : NULL;
  p->a[p->n].name = name ? strdup(name) : NULL;
  p->n++;
}
static ParamList* plist_merge(ParamList* a, ParamList* b) {
  if(!a) return b;
  if(!b) return a;
  for(long i=0;i<b->n;i++) {
    plist_push(a, b->a[i].type_name, b->a[i].name);
  }
  if(b->a) {
    for(long i=0;i<b->n;i++) {
      free(b->a[i].type_name);
      free(b->a[i].name);
    }
    free(b->a);
  }
  free(b);
  return a;
}

/* Block item (statement) list builder */
typedef struct NodeList {
  struct AstNode** a;
  long n;
  long cap;
} NodeList;
static NodeList* nlist_new(void) {
  return (NodeList*)calloc(1, sizeof(NodeList));
}
static NodeList* nlist_from1(struct AstNode* node) {
  NodeList* nl = nlist_new();
  if(!nl) return NULL;
  if(node) {
    nl->a = (struct AstNode**)calloc(1, sizeof(struct AstNode*));
    if(nl->a) { nl->a[0] = node; nl->n = nl->cap = 1; }
  }
  return nl;
}
static void nlist_push(NodeList* nl, struct AstNode* node) {
  if(!nl || !node) return;
  if(nl->n == nl->cap) {
    long nc = nl->cap ? nl->cap*2 : 4;
    struct AstNode** na = (struct AstNode**)realloc(nl->a, sizeof(struct AstNode*)*nc);
    if(!na) return;
    nl->a = na;
    nl->cap = nc;
  }
  nl->a[nl->n++] = node;
}
static NodeList* nlist_merge(NodeList* a, NodeList* b) {
  if(!a) return b;
  if(!b) return a;
  for(long i=0;i<b->n;i++) nlist_push(a, b->a[i]);
  free(b->a);
  free(b);
  return a;
}

/* Declarator string builder for precise multi-declarations (comma-only) */
typedef struct DStr {
  char* name;
  char* pre;   /* pointer chain like ** */
  char* post;  /* suffix like [10][20] or (int, char*) */
} DStr;

static char* sjoin3(const char* a, const char* b, const char* c){
  size_t na=a?strlen(a):0, nb=b?strlen(b):0, nc=c?strlen(c):0;
  char* r=(char*)malloc(na+nb+nc+1); if(!r) return NULL; r[0]='\0';
  if(a) strcat(r,a); if(b) strcat(r,b); if(c) strcat(r,c); return r;
}
static char* sdup0x(const char* s){ if(!s) return strdup(""); size_t n=strlen(s); char* r=(char*)malloc(n+1); if(r) memcpy(r,s,n+1); return r; }
static void dstr_free(DStr* d){ if(!d) return; free(d->name); free(d->pre); free(d->post); free(d); }
static char* compose_type(const char* base, const DStr* d){
  const char* pre = (d&&d->pre)?d->pre:""; const char* post=(d&&d->post)?d->post:"";
  if(pre[0] && post[0]){ char* mid=sjoin3("(",pre,")"); char* r=sjoin3(base,mid,post); free(mid); return r; }
  return sjoin3(base, pre, post);
}
static char* array_suffix_from_expr(struct AstNode* e){
  if(e && e->kind==AST_EXPR_INT){ typedef struct { int kind; long value; } AstExprInt; char buf[64]; snprintf(buf,sizeof(buf),"[%ld]", ((AstExprInt*)e)->value); return strdup(buf); }
  return strdup("[]");
}
static char* sappend(char* a, const char* b){ size_t na=a?strlen(a):0, nb=b?strlen(b):0; char* r=(char*)malloc(na+nb+1); if(!r) return a; if(na) memcpy(r,a,na); if(nb) memcpy(r+na,b,nb); r[na+nb]='\0'; free(a); return r; }
static char* sappend3(char* a, const char* b, const char* c){ return sappend(sappend(a,b),c); }

%}

//%define parse.trace true

%destructor { free($$); } IDENTIFIER STRING_LITERAL INTEGER_CONSTANT
FLOAT_CONSTANT CHAR_CONSTANT type_specifier star_list star_list_opt array_dims

%union {
  char* sval;
  long  ival;
  struct AstNode* node;
  struct ParamList* plist;
  struct NodeList* nlist;
  struct DStr* dstr;
}

/* Identifiers and literals */
%token <sval> IDENTIFIER
%token <sval> TYPE_NAME
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

%type <plist> simple_param_list simple_param_list_opt simple_param
%type <sval> type_specifier star_list star_list_opt struct_or_union_specifier enum_specifier array_dims
%type <sval> fp_param_list_opt fp_param_list fp_param
%type <node> compound_statement
%type <node> statement jump_statement expression_statement
%type <node> expression assignment_expression conditional_expression logical_or_expression logical_and_expression inclusive_or_expression exclusive_or_expression and_expression equality_expression relational_expression shift_expression additive_expression multiplicative_expression unary_expression postfix_expression primary_expression constant_expression
%type <node> expression_opt assignment_expression_opt
%type <nlist> block_item_list_opt block_item_list block_item
%type <nlist> argument_expression_list_opt argument_expression_list
%type <nlist> initializer_list_opt initializer_list designation
%type <node> designator
%type <node> initializer designated_initializer
%type <dstr> sdecl sdir
%type <nlist> sdecl_list

%start translation_unit

%%

translation_unit
  : /* empty */
  | translation_unit external_declaration
  ;

external_declaration
  : type_specifier star_list_opt IDENTIFIER '=' assignment_expression ';'
    {
      size_t nt = strlen($1) + strlen($2 ? $2 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, $1); if($2) strcat(t, $2); }
      AstNode* d = ast_decl_new(t ? t : $1, $3, $5);
      free(t); free($1); free($2);
      ast_add(d);
    }
  | declaration ';'
  | simple_function_definition
  | function_definition
  | type_specifier sdecl ',' sdecl sdecl_list ';'
    {
      char* base=$1;
      char* t1=compose_type(base,$2); AstNode* d1=ast_decl_new(t1,$2->name,NULL); free(t1); dstr_free($2); ast_add(d1);
      char* t2=compose_type(base,$4); AstNode* d2=ast_decl_new(t2,$4->name,NULL); free(t2); dstr_free($4); ast_add(d2);
      if($5){ for(long i=0;i<$5->n;i++){ DStr* ds=(DStr*)$5->a[i]; char* tx=compose_type(base,ds); AstNode* dn=ast_decl_new(tx, ds->name,NULL); free(tx); dstr_free(ds); ast_add(dn);} free($5->a); free($5); }
      free(base);
    }
  | KW_TYPEDEF type_specifier star_list_opt IDENTIFIER ';'
    {
      size_t nt = strlen($2) + strlen($3 ? $3 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; strcat(t, $2); if($3) strcat(t, $3); }
      AstNode* td = ast_typedef_new(t ? t : $2, $4);
      free(t);
      ast_add(td);
      typedef_add($4);
    }
  | KW_TYPEDEF type_specifier star_list_opt IDENTIFIER array_dims ';'
    {
      size_t nt = strlen($2) + strlen($3 ? $3 : "") + strlen($5 ? $5 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; strcat(t, $2); if($3) strcat(t, $3); if($5) strcat(t, $5); }
      AstNode* td = ast_typedef_new(t ? t : $2, $4);
      free(t);
      free($5);
      ast_add(td);
      typedef_add($4);
    }
  | KW_TYPEDEF type_specifier star_list_opt '(' '*' IDENTIFIER ')' '(' fp_param_list_opt ')' ';'
    {
      size_t nt = strlen($2) + strlen($3 ? $3 : "") + strlen("(*)") + strlen($9 ? $9 : "()") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; strcat(t, $2); if($3) strcat(t, $3); strcat(t, "(*)"); strcat(t, $9 ? $9 : "()"); }
      AstNode* td = ast_typedef_new(t ? t : $2, $6);
      free(t); free($9);
      ast_add(td);
      typedef_add($6);
    }
  | KW_TYPEDEF type_specifier star_list_opt '(' '*' IDENTIFIER array_dims ')' '(' fp_param_list_opt ')' ';'
    {
      size_t nt = strlen($2) + strlen($3 ? $3 : "") + strlen("(*)") + strlen($10 ? $10 : "()") + strlen($7 ? $7 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; strcat(t, $2); if($3) strcat(t, $3); strcat(t, "(*)"); strcat(t, $10 ? $10 : "()"); if($7) strcat(t, $7); }
      AstNode* td = ast_typedef_new(t ? t : $2, $6);
      free(t);
      free($7); free($10);
      ast_add(td);
      typedef_add($6);
    }
  
  | type_specifier star_list_opt IDENTIFIER ';'
    {
      size_t nt = strlen($1) + strlen($2 ? $2 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, $1); if($2) strcat(t, $2); }
      AstNode* d = ast_decl_new(t ? t : $1, $3, NULL);
      free(t); free($1); free($2);
      ast_add(d);
    }
  | type_specifier star_list_opt IDENTIFIER '=' initializer ';'
    {
      size_t nt = strlen($1) + strlen($2 ? $2 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, $1); if($2) strcat(t, $2); }
      AstNode* d = ast_decl_new(t ? t : $1, $3, $5);
      free(t); free($1); free($2);
      ast_add(d);
    }
  | type_specifier star_list_opt IDENTIFIER array_dims '=' initializer ';'
    {
      size_t nt = strlen($1) + strlen($2 ? $2 : "") + strlen($4 ? $4 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, $1); if($2) strcat(t, $2); if($4) strcat(t, $4); }
      AstNode* d = ast_decl_new(t ? t : $1, $3, $6);
      free(t); free($1); free($2); free($4);
      ast_add(d);
    }
  ;

/* Simple function form to produce a function node easily */
simple_function_definition
  : function_declspec IDENTIFIER '(' simple_param_list_opt ')' compound_statement
    {
      AstFunction* f = ast_function_new($2,
        $4 ? $4->a : NULL,
        $4 ? $4->n : 0,
        $6);
      if($4) { free($4); }
      ast_add((AstNode*)f);
    }
  ;

function_declspec
  : type_specifier
  | declaration_specifiers
  ;

simple_param_list_opt
  : /* empty */              { $$ = NULL; }
  | simple_param_list        { $$ = $1; }
  ;

simple_param_list
  : simple_param                                  { $$ = $1; }
  | simple_param_list ',' simple_param            { $$ = plist_merge($1, $3); }
  ;

/* Simple param just supports: <type_specifier> <stars>* IDENTIFIER */
simple_param
  : type_specifier star_list_opt IDENTIFIER
    {
      ParamList* p = plist_new();
      size_t nt = strlen($1) + strlen($2 ? $2 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) {
        t[0] = '\0';
        strcat(t, $1);
        if($2) strcat(t, $2);
      }
      plist_push(p, t ? t : $1, $3);
      free(t);
      $$ = p;
    }
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
  | declarator '=' initializer
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
  : KW_EXTERN
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
  : KW_VOID      { $$ = strdup("void"); }
  | KW_CHAR      { $$ = strdup("char"); }
  | KW_SHORT     { $$ = strdup("short"); }
  | KW_INT       { $$ = strdup("int"); }
  | KW_LONG      { $$ = strdup("long"); }
  | KW_SIGNED    { $$ = strdup("signed"); }
  | KW_UNSIGNED  { $$ = strdup("unsigned"); }
  | KW_FLOAT     { $$ = strdup("float"); }
  | KW_DOUBLE    { $$ = strdup("double"); }
  | struct_or_union_specifier { $$ = $1; }
  | enum_specifier            { $$ = $1; }
  | TYPE_NAME                 { $$ = $1; }
  ;

star_list_opt
  : /* empty */          { $$ = strdup(""); }
  | star_list            { $$ = $1; }
  ;

star_list
  : '*'                  { $$ = strdup("*"); }
  | star_list '*'        {
      size_t n = strlen($1) + 2;
      char* s = (char*)malloc(n);
      if(s) { strcpy(s, $1); strcat(s, "*"); }
      free($1);
      $$ = s;
    }
  ;

/* One or more array dimensions, concatenated like [10][20] */
array_dims
  : '[' INTEGER_CONSTANT ']' {
      size_t n = strlen($2) + 3; /* [ + num + ] + \0 */
      char* s = (char*)malloc(n);
      if(s) { s[0]='\0'; strcat(s, "["); strcat(s, $2); strcat(s, "]"); }
      free($2);
      $$ = s;
    }
  | array_dims '[' INTEGER_CONSTANT ']' {
      size_t n = strlen($1) + 1 + strlen($3) + 2 + 1;
      char* s = (char*)malloc(n);
      if(s) { strcpy(s, $1); strcat(s, "["); strcat(s, $3); strcat(s, "]"); }
      free($1);
      free($3);
      $$ = s;
    }
  ;

struct_or_union_specifier
  : KW_STRUCT IDENTIFIER '{' struct_declaration_list_opt '}' { size_t n=strlen("struct ")+strlen($2)+1; $$=(char*)malloc(n); if($$){ strcpy($$, "struct "); strcat($$, $2);} }
  | KW_UNION  IDENTIFIER '{' struct_declaration_list_opt '}' { size_t n=strlen("union ")+strlen($2)+1; $$=(char*)malloc(n); if($$){ strcpy($$, "union "); strcat($$, $2);} }
  | KW_STRUCT '{' struct_declaration_list_opt '}'            { $$ = strdup("struct"); }
  | KW_UNION  '{' struct_declaration_list_opt '}'            { $$ = strdup("union"); }
  | KW_STRUCT IDENTIFIER                                     { size_t n=strlen("struct ")+strlen($2)+1; $$=(char*)malloc(n); if($$){ strcpy($$, "struct "); strcat($$, $2);} }
  | KW_UNION  IDENTIFIER                                     { size_t n=strlen("union ")+strlen($2)+1; $$=(char*)malloc(n); if($$){ strcpy($$, "union "); strcat($$, $2);} }
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
  : KW_ENUM IDENTIFIER '{' enumerator_list_opt '}'   { size_t n=strlen("enum ")+strlen($2)+1; $$=(char*)malloc(n); if($$){ strcpy($$, "enum "); strcat($$, $2);} }
  | KW_ENUM '{' enumerator_list_opt '}'              { $$ = strdup("enum"); }
  | KW_ENUM IDENTIFIER                               { size_t n=strlen("enum ")+strlen($2)+1; $$=(char*)malloc(n); if($$){ strcpy($$, "enum "); strcat($$, $2);} }
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

/* For function pointer typedef text-only param list building */
fp_param_list_opt
  : /* empty */                    { $$ = strdup("()"); }
  | fp_param_list                  {
      size_t n = strlen($1) + 3;
      char* s = (char*)malloc(n);
      if(s) { s[0]='\0'; strcat(s, "("); strcat(s, $1); strcat(s, ")"); }
      free($1);
      $$ = s;
    }
  ;

fp_param_list
  : fp_param                       { $$ = $1; }
  | fp_param_list ',' fp_param     {
      size_t n = strlen($1) + 2 + strlen($3) + 1;
      char* s = (char*)malloc(n);
      if(s) { strcpy(s, $1); strcat(s, ", "); strcat(s, $3); }
      free($1); free($3);
      $$ = s;
    }
  ;

fp_param
  : type_specifier star_list_opt            {
      size_t n = strlen($1) + strlen($2 ? $2 : "") + 1;
      char* s = (char*)malloc(n);
      if(s) { s[0]='\0'; strcat(s, $1); if($2) strcat(s, $2); }
      $$ = s;
      free($1); free($2);
    }
  | type_specifier star_list_opt IDENTIFIER {
      size_t n = strlen($1) + strlen($2 ? $2 : "") + 1;
      char* s = (char*)malloc(n);
      if(s) { s[0]='\0'; strcat(s, $1); if($2) strcat(s, $2); }
      $$ = s;
      free($1); free($2); free($3);
    }
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
  | type_specifier star_list_opt
  ;

/* Function definition (generic) */
function_definition
  : declaration_specifiers declarator compound_statement
  | type_specifier declarator compound_statement
  ;

/* Statements */
statement
  : compound_statement              { $$ = $1; }
  | expression_statement            { $$ = $1; }
  | selection_statement             { $$ = NULL; }
  | iteration_statement             { $$ = NULL; }
  | jump_statement                  { $$ = $1; }
  ;

compound_statement
  : '{' block_item_list_opt '}'     { $$ = (AstNode*)ast_compound_new_with($2 ? $2->a : NULL, $2 ? $2->n : 0); if($2) free($2); }
  ;

block_item_list_opt
  : /* empty */                     { $$ = NULL; }
  | block_item_list                 { $$ = $1; }
  ;

block_item_list
  : block_item                      { $$ = $1; }
  | block_item_list block_item      { $$ = nlist_merge($1, $2); }
  ;

block_item
  : type_specifier star_list_opt IDENTIFIER ';' {
      size_t nt = strlen($1) + strlen($2 ? $2 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, $1); if($2) strcat(t, $2); }
      AstNode* d = ast_decl_new(t ? t : $1, $3, NULL);
      free(t); free($1); free($2); /* $3 freed by decl */
      $$ = nlist_from1(d);
    }
  | type_specifier star_list_opt IDENTIFIER '=' assignment_expression ';' {
      size_t nt = strlen($1) + strlen($2 ? $2 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, $1); if($2) strcat(t, $2); }
      AstNode* d = ast_decl_new(t ? t : $1, $3, $5);
      free(t); free($1); free($2);
      $$ = nlist_from1(d);
    }
  | type_specifier star_list_opt IDENTIFIER '=' initializer ';' {
      size_t nt = strlen($1) + strlen($2 ? $2 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, $1); if($2) strcat(t, $2); }
      AstNode* d = ast_decl_new(t ? t : $1, $3, $5);
      free(t); free($1); free($2);
      $$ = nlist_from1(d);
    }
  | type_specifier star_list_opt IDENTIFIER array_dims '=' initializer ';' {
      size_t nt = strlen($1) + strlen($2 ? $2 : "") + strlen($4 ? $4 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0]='\0'; strcat(t, $1); if($2) strcat(t, $2); if($4) strcat(t, $4); }
      AstNode* d = ast_decl_new(t ? t : $1, $3, $6);
      free(t); free($1); free($2); free($4);
      $$ = nlist_from1(d);
    }
  | type_specifier sdecl ',' sdecl sdecl_list ';'
    {
      char* base=$1; NodeList* nl=nlist_new();
      char* t1=compose_type(base,$2); AstNode* d1=ast_decl_new(t1,$2->name,NULL); free(t1); dstr_free($2); nlist_push(nl,d1);
      char* t2=compose_type(base,$4); AstNode* d2=ast_decl_new(t2,$4->name,NULL); free(t2); dstr_free($4); nlist_push(nl,d2);
      if($5){ for(long i=0;i<$5->n;i++){ DStr* ds=(DStr*)$5->a[i]; char* tx=compose_type(base,ds); AstNode* dn=ast_decl_new(tx, ds->name,NULL); free(tx); dstr_free(ds); nlist_push(nl,dn);} free($5->a); free($5); }
      free(base);
      $$=nl;
    }
  | statement                       { $$ = nlist_from1($1); }
  
  | KW_TYPEDEF type_specifier star_list_opt IDENTIFIER ';'
    {
      size_t nt = strlen($2) + strlen($3 ? $3 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; strcat(t, $2); if($3) strcat(t, $3); }
      AstNode* td = ast_typedef_new(t ? t : $2, $4);
      free(t);
      $$ = nlist_from1(td);
    }
  | KW_TYPEDEF type_specifier type_specifier star_list_opt IDENTIFIER ';'
    {
      size_t nt = strlen($2) + 1 + strlen($3) + strlen($4 ? $4 : "") + 1;
      char* t = (char*)malloc(nt);
      if(t) { t[0] = '\0'; strcat(t, $2); strcat(t, " "); strcat(t, $3); if($4) strcat(t, $4); }
      AstNode* td = ast_typedef_new(t ? t : $2, $5);
      free(t);
      $$ = nlist_from1(td);
    }
  ;

/* sdecl (smart declarator) supports *, (), [], and params, but only used in comma-separated lists */
sdecl_list
  : /* empty */                    { $$=NULL; }
  | sdecl_list ',' sdecl           { if(!$1){ NodeList* nl=nlist_new(); $$=nl; } nlist_push($1, (AstNode*)$3); $$=$1; }
  ;

/* sdecl produces a DStr; later caller composes with base and creates Decl */
sdecl
  : star_list_opt sdir { DStr* d=(DStr*)calloc(1,sizeof(DStr)); d->name=sdup0x($2->name); d->pre=sdup0x($1); d->post=sdup0x($2->post); dstr_free($2); free($1); $$=d; }
  ;

sdir
  : IDENTIFIER { DStr* d=(DStr*)calloc(1,sizeof(DStr)); d->name=$1; d->pre=strdup(""); d->post=strdup(""); $$=d; }
  | '(' sdecl ')' { $$=$2; }
  | sdir '[' assignment_expression_opt ']' { char* suf=array_suffix_from_expr($3); $1->post=sappend($1->post,suf); free(suf); $$=$1; }
  | sdir '(' fp_param_list_opt ')' { char* params=$3?$3:strdup("()"); $1->post=sappend3($1->post, "(*)", params); free($3); $$=$1; }
  ;

/* (smart declarators temporarily disabled to avoid conflicts) */

expression_statement
  : ';'                              { $$ = NULL; }
  | expression ';'                   { $$ = $1; }
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
  : KW_RETURN expression_opt ';'     { $$ = ast_return_new($2); }
  | KW_BREAK ';'                     { $$ = NULL; }
  | KW_CONTINUE ';'                  { $$ = NULL; }
  | KW_GOTO IDENTIFIER ';'           { $$ = NULL; }
  ;

/* Expressions */
expression_opt
  : /* empty */                      { $$ = NULL; }
  | expression                       { $$ = $1; }
  ;

expression
  : assignment_expression            { $$ = $1; }
  | expression ',' assignment_expression { $$ = $3; }
  ;

assignment_expression_opt
  : /* empty */                      { $$ = NULL; }
  | assignment_expression            { $$ = $1; }
  ;

assignment_expression
  : conditional_expression           { $$ = $1; }
  | unary_expression '=' assignment_expression           { $$ = ast_expr_assign_new("=", $1, $3); }
  | unary_expression ADD_ASSIGN assignment_expression    { $$ = ast_expr_assign_new("+=", $1, $3); }
  | unary_expression SUB_ASSIGN assignment_expression    { $$ = ast_expr_assign_new("-=", $1, $3); }
  | unary_expression MUL_ASSIGN assignment_expression    { $$ = ast_expr_assign_new("*=", $1, $3); }
  | unary_expression DIV_ASSIGN assignment_expression    { $$ = ast_expr_assign_new("/=", $1, $3); }
  | unary_expression MOD_ASSIGN assignment_expression    { $$ = ast_expr_assign_new("%=", $1, $3); }
  | unary_expression AND_ASSIGN assignment_expression    { $$ = ast_expr_assign_new("&=", $1, $3); }
  | unary_expression OR_ASSIGN assignment_expression     { $$ = ast_expr_assign_new("|=", $1, $3); }
  | unary_expression XOR_ASSIGN assignment_expression    { $$ = ast_expr_assign_new("^=", $1, $3); }
  | unary_expression LSHIFT_ASSIGN assignment_expression { $$ = ast_expr_assign_new("<<=", $1, $3); }
  | unary_expression RSHIFT_ASSIGN assignment_expression { $$ = ast_expr_assign_new(">>=", $1, $3); }
  ;

conditional_expression
  : logical_or_expression                              { $$ = $1; }
  | logical_or_expression '?' expression ':' conditional_expression { $$ = NULL; }
  ;

logical_or_expression
  : logical_and_expression                             { $$ = $1; }
  | logical_or_expression LOGOR logical_and_expression { $$ = ast_expr_binary_new("||", $1, $3); }
  ;

logical_and_expression
  : inclusive_or_expression                            { $$ = $1; }
  | logical_and_expression LOGAND inclusive_or_expression { $$ = ast_expr_binary_new("&&", $1, $3); }
  ;

inclusive_or_expression
  : exclusive_or_expression                            { $$ = $1; }
  | inclusive_or_expression '|' exclusive_or_expression { $$ = ast_expr_binary_new("|", $1, $3); }
  ;

exclusive_or_expression
  : and_expression                                     { $$ = $1; }
  | exclusive_or_expression '^' and_expression         { $$ = ast_expr_binary_new("^", $1, $3); }
  ;

and_expression
  : equality_expression                                { $$ = $1; }
  | and_expression '&' equality_expression             { $$ = ast_expr_binary_new("&", $1, $3); }
  ;

equality_expression
  : relational_expression                              { $$ = $1; }
  | equality_expression EQ relational_expression       { $$ = ast_expr_binary_new("==", $1, $3); }
  | equality_expression NE relational_expression       { $$ = ast_expr_binary_new("!=", $1, $3); }
  ;

relational_expression
  : shift_expression                                   { $$ = $1; }
  | relational_expression '<' shift_expression         { $$ = ast_expr_binary_new("<", $1, $3); }
  | relational_expression '>' shift_expression         { $$ = ast_expr_binary_new(">", $1, $3); }
  | relational_expression LE shift_expression          { $$ = ast_expr_binary_new("<=", $1, $3); }
  | relational_expression GE shift_expression          { $$ = ast_expr_binary_new(">=", $1, $3); }
  ;

shift_expression
  : additive_expression                                { $$ = $1; }
  | shift_expression LSHIFT additive_expression        { $$ = ast_expr_binary_new("<<", $1, $3); }
  | shift_expression RSHIFT additive_expression        { $$ = ast_expr_binary_new(">>", $1, $3); }
  ;

additive_expression
  : multiplicative_expression                          { $$ = $1; }
  | additive_expression '+' multiplicative_expression  { $$ = ast_expr_binary_new("+", $1, $3); }
  | additive_expression '-' multiplicative_expression  { $$ = ast_expr_binary_new("-", $1, $3); }
  ;

multiplicative_expression
  : unary_expression                                   { $$ = $1; }
  | multiplicative_expression '*' unary_expression     { $$ = ast_expr_binary_new("*", $1, $3); }
  | multiplicative_expression '/' unary_expression     { $$ = ast_expr_binary_new("/", $1, $3); }
  | multiplicative_expression '%' unary_expression     { $$ = ast_expr_binary_new("%", $1, $3); }
  ;

unary_expression
  : postfix_expression                                 { $$ = $1; }
  | INC unary_expression                               { $$ = ast_expr_unary_new("++", $2, 0); }
  | DEC unary_expression                               { $$ = ast_expr_unary_new("--", $2, 0); }
  | '+' unary_expression                               { $$ = $2; }
  | '-' unary_expression                               { $$ = ast_expr_unary_new("-", $2, 0); }
  | '!' unary_expression                               { $$ = ast_expr_unary_new("!", $2, 0); }
  | '~' unary_expression                               { $$ = ast_expr_unary_new("~", $2, 0); }
  | KW_SIZEOF unary_expression                         { $$ = NULL; }
  | KW_SIZEOF '(' type_specifier ')'                   { $$ = NULL; }
  ;

postfix_expression
  : primary_expression                                 { $$ = $1; }
  | postfix_expression '(' argument_expression_list_opt ')' {
      $$ = ast_expr_call_new($1, $3 ? $3->a : NULL, $3 ? $3->n : 0);
      if($3) { free($3); }
    }
  | postfix_expression '[' expression ']'              { $$ = ast_expr_index_new($1, $3); }
  | postfix_expression '.' IDENTIFIER                  { $$ = ast_expr_member_new($1, $3, 0); free($3); }
  | postfix_expression ARROW IDENTIFIER                { $$ = ast_expr_member_new($1, $3, 1); free($3); }
  | postfix_expression INC                             { $$ = ast_expr_unary_new("++", $1, 1); }
  | postfix_expression DEC                             { $$ = ast_expr_unary_new("--", $1, 1); }
  ;

argument_expression_list_opt
  : /* empty */                      { $$ = NULL; }
  | argument_expression_list         { $$ = $1; }
  ;

argument_expression_list
  : assignment_expression            { $$ = nlist_from1($1); }
  | argument_expression_list ',' assignment_expression { nlist_push($1, $3); $$ = $1; }
  ;

primary_expression
  : IDENTIFIER                                         { $$ = ast_expr_ident_new($1); free($1); }
  | INTEGER_CONSTANT                                   { $$ = ast_expr_int_new(atol($1)); free($1); }
  | FLOAT_CONSTANT                                     { $$ = ast_expr_float_new(atof($1)); free($1); }
  | CHAR_CONSTANT                                      { $$ = ast_expr_char_new($1); free($1); }
  | STRING_LITERAL                                     { $$ = ast_expr_string_new($1); free($1); }
  | '(' expression ')'                                 { $$ = $2; }
  ;

/* Initializers */
initializer
  : assignment_expression            { $$ = $1; }
  | '{' initializer_list_opt '}'     { $$ = (AstNode*)ast_init_list_new($2 ? $2->a : NULL, $2 ? $2->n : 0); if($2) free($2); }
  ;

initializer_list_opt
  : /* empty */                      { $$ = NULL; }
  | initializer_list                 { $$ = $1; }
  ;

initializer_list
  : initializer                      { $$ = nlist_from1($1); }
  | designated_initializer           { $$ = nlist_from1($1); }
  | initializer_list ',' initializer { nlist_push($1, $3); $$ = $1; }
  | initializer_list ',' designated_initializer { nlist_push($1, $3); $$ = $1; }
  ;

designated_initializer
  : '.' IDENTIFIER '=' initializer        { $$ = ast_init_desig_field_new($2, $4); free($2); }
  | '[' constant_expression ']' '=' initializer { $$ = ast_init_desig_index_new($2, $5); }
  | designation '=' initializer           { $$ = ast_init_desig_chain_new($1 ? $1->a : NULL, $1 ? $1->n : 0, $3); if($1) free($1); }
  ;

/* C standard designator list + GNU range [first ... last] */
designation
  : designator                         { $$ = nlist_from1($1); }
  | designation designator             { nlist_push($1, $2); $$ = $1; }
  ;

designator
  : '.' IDENTIFIER                     { $$ = ast_desig_field_new($2); free($2); }
  | '[' constant_expression ']'        { $$ = ast_desig_index_new($2); }
  | '[' constant_expression ELLIPSIS constant_expression ']' { $$ = ast_desig_range_new($2, $4); }
  ;

constant_expression
  : conditional_expression
  ;

%%

void yyerror(const char* s)
{
  fprintf(stderr, "parse error at line %d near '%s': %s\n", yylineno, yytext ? yytext : "", s);
}
