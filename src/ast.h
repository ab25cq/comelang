#ifndef AST_H
#define AST_H

#include <stddef.h>

typedef enum AstKind {
    AST_COMPOUND = 1,
    AST_FUNCTION = 2,
    AST_RETURN   = 3,
    AST_EXPR_INT = 4,
    AST_EXPR_BINARY = 5,
    AST_EXPR_IDENT = 6,
    AST_EXPR_UNARY = 7,
    AST_EXPR_CALL  = 8,
    AST_EXPR_INDEX = 9,
    AST_EXPR_MEMBER = 10,
    AST_EXPR_ASSIGN = 11,
    AST_EXPR_FLOAT = 12,
    AST_EXPR_CHAR = 13,
    AST_EXPR_STRING = 14,
    AST_TYPEDEF = 15,
    AST_DECL = 16,
    AST_INIT_LIST = 17,
    AST_INIT_DESIG_FIELD = 18,
    AST_INIT_DESIG_INDEX = 19,
    AST_DESIG_FIELD = 20,      /* element: .name */
    AST_DESIG_INDEX = 21,      /* element: [expr] */
    AST_DESIG_RANGE = 22,      /* element: [first ... last] */
    AST_INIT_DESIG = 23,       /* chain of elements + value */
} AstKind;

typedef struct AstNode {
    AstKind kind;
} AstNode;

typedef struct AstCompound {
    AstKind kind; /* AST_COMPOUND */
    struct AstNode** items; /* statements */
    long count;
} AstCompound;

typedef struct AstParam {
    char* type_name; /* e.g., "int", "char**" */
    char* name;      /* e.g., "argc" */
} AstParam;

typedef struct AstFunction {
    AstKind kind; /* AST_FUNCTION */
    char* name;
    char* return_type; /* e.g., "int", "char*" */
    int flags; /* AstFuncFlags bitmask */
    AstParam* params;
    long param_count;
    AstNode* body; /* AstCompound* */
} AstFunction;

typedef enum AstFuncFlags {
    ASTF_EXTERN   = 1<<0,
    ASTF_STATIC   = 1<<1,
    ASTF_INLINE   = 1<<2,
    ASTF_CONST    = 1<<3,
    ASTF_VOLATILE = 1<<4,
    ASTF_RESTRICT = 1<<5,
} AstFuncFlags;

AstCompound* ast_compound_new(void);
AstCompound* ast_compound_new_with(struct AstNode** items, long count);
AstFunction* ast_function_new(const char* name, const char* return_type, int flags, AstParam* params, long param_count, AstNode* body);

/* Optional: small debug printer */
void ast_print(const AstNode* n, int indent);

/* Simple global list management for demo */
void ast_add(AstNode* n);
void ast_dump(void);
void ast_free_all(void);
void ast_validate(void);

/* Expressions and statements */
AstNode* ast_return_new(AstNode* expr);
AstNode* ast_expr_int_new(long value);
AstNode* ast_expr_binary_new(const char* op, AstNode* lhs, AstNode* rhs);
AstNode* ast_expr_ident_new(const char* name);
AstNode* ast_expr_unary_new(const char* op, AstNode* expr, int is_postfix);
AstNode* ast_expr_call_new(AstNode* callee, AstNode** args, long argc);
AstNode* ast_expr_index_new(AstNode* arr, AstNode* index);
AstNode* ast_expr_member_new(AstNode* recv, const char* name, int is_arrow);
AstNode* ast_expr_assign_new(const char* op, AstNode* lhs, AstNode* rhs);
AstNode* ast_expr_float_new(double value);
AstNode* ast_expr_char_new(const char* text);
AstNode* ast_expr_string_new(const char* text);

/* Typedef */
AstNode* ast_typedef_new(const char* type_name, const char* alias_name);

/* Declaration */
AstNode* ast_decl_new(const char* type_name, const char* name, AstNode* init);
AstNode* ast_init_list_new(struct AstNode** items, long count);
AstNode* ast_init_desig_field_new(const char* name, struct AstNode* value);
AstNode* ast_init_desig_index_new(struct AstNode* index_expr, struct AstNode* value);
/* Designator elements and chain */
AstNode* ast_desig_field_new(const char* name);
AstNode* ast_desig_index_new(struct AstNode* index_expr);
AstNode* ast_desig_range_new(struct AstNode* first, struct AstNode* last);
AstNode* ast_init_desig_chain_new(struct AstNode** elems, long count, struct AstNode* value);

#endif /* AST_H */
