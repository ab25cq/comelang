#ifndef GRAMMAR_AST_BRIDGE_H
#define GRAMMAR_AST_BRIDGE_H

/* Forward declarations to avoid heavy includes here */
struct sNode;
struct sInfo;

#ifdef __cplusplus
extern "C" {
#endif

// Called before parse
void cb_start_translation_unit(void);
// Called after parse
void cb_finish_translation_unit(void);

// Minimal hook to observe a simple function definition like:
//   <ret spec> IDENT '(' params_opt ')' compound
// name, param count, and body node
void cb_on_function_simple(const char* name, long param_count);

// Generic AST bridge API (opaque nodes)
struct sNode* cb_ident(const char* name);
struct sNode* cb_int_literal(const char* text, struct sInfo* info);
void* cb_float_literal(const char* text);
void* cb_char_literal(const char* text);
struct sNode* cb_string_literal(const char* text);

void* cb_unary(const char* op, void* expr);
void* cb_binary(const char* op, void* lhs, void* rhs);
void* cb_assign(const char* op, void* lhs, void* rhs);
void* cb_conditional(void* cond, void* then_e, void* else_e);

void* cb_call(void* callee, void* args);
void* cb_index(void* base, void* index);
void* cb_member(void* base, const char* name, int arrow);

void* cb_list_new(void);
void* cb_list_append(void* list, void* elem);

void* cb_stmt_empty(void);
void* cb_expr_stmt(void* expr);
void* cb_stmt_return(void* expr);
void* cb_compound(void* list);
void* cb_decl(void* specifiers, void* init_declarators);

// Simple function form
void* cb_function_simple(const char* name, long param_count, void* body);

#ifdef __cplusplus
}
#endif

#endif
