#ifndef AST_H
#define AST_H

#include <stddef.h>

typedef enum AstKind {
    AST_COMPOUND = 1,
    AST_FUNCTION = 2,
} AstKind;

typedef struct AstNode {
    AstKind kind;
} AstNode;

typedef struct AstCompound {
    AstKind kind; /* AST_COMPOUND */
    /* For simplicity, no children list yet */
} AstCompound;

typedef struct AstFunction {
    AstKind kind; /* AST_FUNCTION */
    char* name;
    long param_count;
    AstNode* body; /* AstCompound* */
} AstFunction;

AstCompound* ast_compound_new(void);
AstFunction* ast_function_new(const char* name, long param_count, AstNode* body);

/* Optional: small debug printer */
void ast_print(const AstNode* n, int indent);

/* Simple global list management for demo */
void ast_add(AstNode* n);
void ast_dump(void);
void ast_free_all(void);

#endif /* AST_H */
