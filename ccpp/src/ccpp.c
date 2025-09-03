#include <ctype.h>
#include <errno.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/utsname.h>

typedef struct {
    char *name;
    char *value; // replacement text for both object/function macros
    bool is_func;
    char **params; // parameter names if is_func
    size_t nparams;
    bool is_variadic;
} Macro;

typedef struct {
    Macro *items;
    size_t len;
    size_t cap;
} MacroTable;

static void die(const char *msg) {
    perror(msg);
    exit(1);
}

static void *xrealloc(void *p, size_t n) {
    void *q = realloc(p, n);
    if (!q && n != 0) die("realloc");
    return q;
}

static char *xstrdup(const char *s) {
    if (!s) return NULL;
    size_t n = strlen(s) + 1;
    char *p = (char *)malloc(n);
    if (!p) die("malloc");
    memcpy(p, s, n);
    return p;
}

static void mtable_init(MacroTable *t) {
    t->items = NULL;
    t->len = 0;
    t->cap = 0;
}

static void mtable_free(MacroTable *t) {
    if (!t) return;
    for (size_t i = 0; i < t->len; ++i) {
        free(t->items[i].name);
        free(t->items[i].value);
        if (t->items[i].params) {
            for (size_t j=0;j<t->items[i].nparams;++j) free(t->items[i].params[j]);
            free(t->items[i].params);
        }
    }
    free(t->items);
}

static void mtable_unset(MacroTable *t, const char *name) {
    for (size_t i=0; i<t->len; ++i) {
        if (strcmp(t->items[i].name, name)==0) {
            free(t->items[i].name);
            free(t->items[i].value);
            if (t->items[i].params) {
                for (size_t j=0; j<t->items[i].nparams; ++j) free(t->items[i].params[j]);
                free(t->items[i].params);
            }
            // move last into i
            t->items[i] = t->items[t->len-1];
            t->len--;
            return;
        }
    }
}

static Macro *mtable_find(MacroTable *t, const char *name) {
    for (size_t i=0;i<t->len;++i) if (strcmp(t->items[i].name, name)==0) return &t->items[i];
    return NULL;
}

static void mtable_set_obj(MacroTable *t, const char *name, const char *value) {
    // If exists, replace
    Macro *m = mtable_find(t, name);
    if (m) {
        free(m->value);
        if (m->params) { for (size_t j=0;j<m->nparams;++j) free(m->params[j]); free(m->params); m->params=NULL; m->nparams=0; }
        m->is_func = false;
        m->value = xstrdup(value ? value : "");
        return;
    }
    if (t->len == t->cap) {
        size_t ncap = t->cap ? t->cap * 2 : 8;
        Macro *nitems = (Macro *)xrealloc(t->items, ncap * sizeof(Macro));
        t->items = nitems;
        t->cap = ncap;
    }
    t->items[t->len].name = xstrdup(name);
    t->items[t->len].value = xstrdup(value ? value : "");
    t->items[t->len].is_func = false;
    t->items[t->len].params = NULL;
    t->items[t->len].nparams = 0;
    t->items[t->len].is_variadic = false;
    t->len++;
}

static const char *mtable_get(const MacroTable *t, const char *name) {
    for (size_t i = 0; i < t->len; ++i) {
        if (strcmp(t->items[i].name, name) == 0 && !t->items[i].is_func) return t->items[i].value;
    }
    return NULL;
}

static bool starts_with(const char *s, const char *prefix) {
    size_t a = strlen(s), b = strlen(prefix);
    return a >= b && memcmp(s, prefix, b) == 0;
}

static void process_define(MacroTable *t, char *line) {
    // line begins with "#define"; parse: #define NAME[(params)] [VALUE...]
    char *p = line + 7; // after "#define"
    while (*p && isspace((unsigned char)*p)) p++;
    // Parse name (identifier)
    char namebuf[256];
    size_t ni = 0;
    if (!(isalpha((unsigned char)*p) || *p == '_')) return; // invalid; ignore
    while (*p && (isalnum((unsigned char)*p) || *p == '_')) {
        if (ni + 1 < sizeof namebuf) namebuf[ni++] = *p;
        p++;
    }
    namebuf[ni] = '\0';
    // If immediately followed by '(', parse params (no space requirement kept simple: allow spaces)
    char *after_name = p;
    while (*after_name && isspace((unsigned char)*after_name)) after_name++;
    if (*after_name == '(') {
        // function-like
        p = after_name + 1;
        // parse parameters until ')'
        char **params = NULL; size_t np=0, pc=0; bool variadic=false;
        while (1) {
            while (*p && isspace((unsigned char)*p)) p++;
            if (*p == ')') { p++; break; }
            // read identifier
            if (p[0]=='.' && p[1]=='.' && p[2]=='.') { variadic = true; p+=3; while (*p && isspace((unsigned char)*p)) p++; if (*p==')') { p++; } break; }
            char id[256]; size_t j=0;
            if (!(isalpha((unsigned char)*p) || *p=='_')) break;
            while (*p && (isalnum((unsigned char)*p) || *p=='_')) { if (j+1<sizeof id) id[j++]=*p; p++; }
            id[j]='\0';
            if (np==pc) { pc = pc? pc*2:4; params = xrealloc(params, pc*sizeof(char*)); }
            params[np++] = xstrdup(id);
            while (*p && isspace((unsigned char)*p)) p++;
            if (*p == ',') { p++; continue; }
            if (*p == ')') { p++; break; }
            // malformed -> break
            break;
        }
        while (*p && isspace((unsigned char)*p)) p++;
        char *val = p; size_t L = strlen(val); while (L && isspace((unsigned char)val[L-1])) val[--L]='\0';
        // set function-like macro
        Macro *m = mtable_find(t, namebuf);
        if (!m) {
            if (t->len == t->cap) { size_t ncap = t->cap? t->cap*2:8; t->items = xrealloc(t->items, ncap*sizeof(Macro)); t->cap = ncap; }
            m = &t->items[t->len++];
            m->name = xstrdup(namebuf);
        } else {
            free(m->value);
            if (m->params) { for (size_t j=0;j<m->nparams;++j) free(m->params[j]); free(m->params); }
        }
        m->is_func = true;
        m->value = xstrdup(val);
        m->params = params;
        m->nparams = np;
        m->is_variadic = variadic;
    } else {
        p = after_name;
        while (*p && isspace((unsigned char)*p)) p++;
        char *val = p; size_t L = strlen(val); while (L && isspace((unsigned char)val[L-1])) val[--L]='\0';
        mtable_set_obj(t, namebuf, val);
    }
}

typedef struct {
    char *buf;
    size_t len;
    size_t cap;
} Str;

static void sb_init(Str *s) { s->buf = NULL; s->len = 0; s->cap = 0; }
static void sb_free(Str *s) { free(s->buf); }
static void sb_putc(Str *s, char c) {
    if (s->len + 1 >= s->cap) {
        size_t ncap = s->cap ? s->cap * 2 : 128;
        char *nbuf = (char *)xrealloc(s->buf, ncap);
        s->buf = nbuf; s->cap = ncap;
    }
    s->buf[s->len++] = c; s->buf[s->len] = '\0';
}
static void sb_puts(Str *s, const char *t) {
    size_t n = strlen(t);
    if (s->len + n + 1 >= s->cap) {
        size_t ncap = s->cap ? s->cap : 128;
        while (s->len + n + 1 >= ncap) ncap *= 2;
        char *nbuf = (char *)xrealloc(s->buf, ncap);
        s->buf = nbuf; s->cap = ncap;
    }
    memcpy(s->buf + s->len, t, n);
    s->len += n; s->buf[s->len] = '\0';
}

static void expand_into_str(const MacroTable *t, const char *line, Str *out) {
    enum { CODE, STR_DQ, STR_SQ, SL_COMMENT, BL_COMMENT } state = CODE;
    int bl_depth = 0; // for nested block comments
    for (size_t i = 0; line[i] != '\0'; ) {
        char c = line[i];
        if (state == CODE) {
            // handle comments
            if (c == '/' && line[i+1] == '/') { state = SL_COMMENT; sb_puts(out, "//"); i += 2; continue; }
            if (c == '/' && line[i+1] == '*') { state = BL_COMMENT; bl_depth = 1; sb_puts(out, "/*"); i += 2; continue; }
            if (c == '"') { state = STR_DQ; sb_putc(out, c); i++; continue; }
            if (c == '\'') { state = STR_SQ; sb_putc(out, c); i++; continue; }
            if (isalpha((unsigned char)c) || c == '_') {
                // parse identifier
                char ident[256]; size_t k = 0; size_t j = i;
                while (line[j] && (isalnum((unsigned char)line[j]) || line[j] == '_')) {
                    if (k + 1 < sizeof ident) ident[k++] = line[j];
                    j++;
                }
                ident[k] = '\0';
                const char *rep = mtable_get((const MacroTable*)t, ident);
                // Check function-like macro
                const Macro *fm = NULL;
                for (size_t mi=0; mi<t->len; ++mi) {
                    if (strcmp(t->items[mi].name, ident)==0 && t->items[mi].is_func) { fm = &t->items[mi]; break; }
                }
                size_t j2 = j; while (line[j2] && isspace((unsigned char)line[j2])) j2++;
                if (fm && line[j2] == '(') {
                    // parse arguments
                    size_t p = j2 + 1; int depthP = 1, depthB = 0, depthC = 0;
                    enum {AC_CODE, AC_DQ, AC_SQ, AC_SL, AC_BL} ast = AC_CODE;
                    Str cur; sb_init(&cur);
                    char **args_raw = NULL; size_t argc=0, acc=0;
                    while (line[p] != '\0' && (depthP > 0 || depthB > 0 || depthC > 0)) {
                        char ch = line[p];
                        if (ast == AC_CODE) {
                            if (ch == '"') { ast = AC_DQ; sb_putc(&cur, ch); p++; continue; }
                            if (ch == '\'') { ast = AC_SQ; sb_putc(&cur, ch); p++; continue; }
                            if (ch == '/' && line[p+1]=='/') { ast = AC_SL; sb_puts(&cur, "//"); p+=2; continue; }
                            if (ch == '/' && line[p+1]=='*') { ast = AC_BL; sb_puts(&cur, "/*"); p+=2; continue; }
                            if (ch == '(') { depthP++; sb_putc(&cur,ch); p++; continue; }
                            if (ch == ')') {
                                depthP--; if (depthP==0 && depthB==0 && depthC==0) { // finish last arg
                                    // trim cur
                                    while (cur.len>0 && isspace((unsigned char)cur.buf[cur.len-1])) cur.buf[--cur.len]='\0';
                                    size_t lead=0; while (lead<cur.len && isspace((unsigned char)cur.buf[lead])) lead++;
                                    char *astr = xstrdup(cur.buf?cur.buf+lead:"");
                                    if (argc==acc) { acc=acc?acc*2:4; args_raw = xrealloc(args_raw, acc*sizeof(char*)); }
                                    args_raw[argc++] = astr;
                                    p++; break;
                                } else { sb_putc(&cur,ch); p++; continue; }
                            }
                            if (ch == '[') { depthB++; sb_putc(&cur,ch); p++; continue; }
                            if (ch == ']') { if (depthB>0) depthB--; sb_putc(&cur,ch); p++; continue; }
                            if (ch == '{') { depthC++; sb_putc(&cur,ch); p++; continue; }
                            if (ch == '}') { if (depthC>0) depthC--; sb_putc(&cur,ch); p++; continue; }
                            if (ch == ',' && depthP==1 && depthB==0 && depthC==0) {
                                // split arg
                                while (cur.len>0 && isspace((unsigned char)cur.buf[cur.len-1])) cur.buf[--cur.len]='\0';
                                size_t lead=0; while (lead<cur.len && isspace((unsigned char)cur.buf[lead])) lead++;
                                char *astr = xstrdup(cur.buf?cur.buf+lead:"");
                                if (argc==acc) { acc=acc?acc*2:4; args_raw = xrealloc(args_raw, acc*sizeof(char*)); }
                                args_raw[argc++] = astr;
                                cur.len = 0; if (cur.buf) cur.buf[0]='\0';
                                p++; continue;
                            }
                            sb_putc(&cur, ch); p++;
                        } else if (ast == AC_DQ) {
                            sb_putc(&cur, ch);
                            if (ch == '"' && line[p-1] != '\\') ast = AC_CODE;
                            p++;
                        } else if (ast == AC_SQ) {
                            sb_putc(&cur, ch);
                            if (ch == '\'' && line[p-1] != '\\') ast = AC_CODE;
                            p++;
                        } else if (ast == AC_SL) {
                            sb_putc(&cur, ch); p++;
                        } else if (ast == AC_BL) {
                            if (ch == '/' && line[p-1]=='*') { sb_putc(&cur, ch); ast = AC_CODE; p++; }
                            else { sb_putc(&cur, ch); p++; }
                        }
                    }
                    // prescan/expand args (object-like & nested function-like calls on that text)
                    char **args = NULL; size_t acc2 = argc ? argc : 1; args = xrealloc(NULL, acc2*sizeof(char*));
                    for (size_t ai=0; ai<argc; ++ai) {
                        Str ex; sb_init(&ex);
                        expand_into_str(t, args_raw[ai], &ex);
                        args[ai] = xstrdup(ex.buf?ex.buf:"");
                        sb_free(&ex);
                    }
                    // prepare joined varargs strings
                    size_t var_start = fm->nparams;
                    Str join_raw; sb_init(&join_raw);
                    Str join_exp; sb_init(&join_exp);
                    if (fm->is_variadic && argc > var_start) {
                        for (size_t vi=var_start; vi<argc; ++vi) {
                            if (vi>var_start) { sb_puts(&join_raw, ", "); sb_puts(&join_exp, ", "); }
                            sb_puts(&join_raw, args_raw[vi] ? args_raw[vi] : "");
                            sb_puts(&join_exp, args[vi] ? args[vi] : "");
                        }
                    }
                    const char *joined_raw = join_raw.buf ? join_raw.buf : "";
                    const char *joined_exp = join_exp.buf ? join_exp.buf : "";
                    // substitute params into function body with support for # and ##
                    // substitute params into function body
                    const char *body = fm->value ? fm->value : "";
                    enum {RB_CODE, RB_DQ, RB_SQ, RB_SL, RB_BL} rb = RB_CODE;
                    // a small buffer to hold token we are about to paste
                    for (size_t bi=0; body[bi] != '\0'; ) {
                        char bc = body[bi];
                        if (rb == RB_CODE) {
                            if (bc=='"') { rb=RB_DQ; sb_putc(out, bc); bi++; continue; }
                            if (bc=='\'') { rb=RB_SQ; sb_putc(out, bc); bi++; continue; }
                            if (bc=='/' && body[bi+1]=='/') { rb=RB_SL; sb_puts(out, "//"); bi+=2; continue; }
                            if (bc=='/' && body[bi+1]=='*') { rb=RB_BL; sb_puts(out, "/*"); bi+=2; continue; }
                            if (bc=='#') {
                                if (body[bi+1]=='#') {
                                    // token pasting: remove trailing spaces from out, then append next token (param or ident) without spaces
                                    // skip '##'
                                    bi += 2; // eat ##
                                    // skip spaces
                                    while (isspace((unsigned char)body[bi])) bi++;
                                    // capture next token
                                    if (isalpha((unsigned char)body[bi]) || body[bi]=='_') {
                                        char tok[256]; size_t tk=0; size_t bj=bi;
                                        while (body[bj] && (isalnum((unsigned char)body[bj]) || body[bj]=='_')) { if (tk+1<sizeof tok) tok[tk++]=body[bj]; bj++; }
                                        tok[tk]='\0';
                                        // trim trailing spaces in out
                                        while (out->len>0 && isspace((unsigned char)out->buf[out->len-1])) out->buf[--out->len]='\0';
                                        // see if tok is parameter
                                        size_t pi_idx = (size_t)-1;
                                        for (size_t pi=0; pi<fm->nparams; ++pi) { if (strcmp(fm->params[pi], tok)==0) { pi_idx = pi; break; } }
                                        const char *text = NULL;
                                        if ((strcmp(tok, "__VA_ARGS__") == 0 && fm->is_variadic)) {
                                            text = joined_raw;
                                        } else if (pi_idx != (size_t)-1 && pi_idx < argc) {
                                            text = args_raw[pi_idx];
                                        } else {
                                            text = tok;
                                        }
                                        // if empty, remove trailing comma
                                        if ((!text || *text=='\0')) {
                                            while (out->len>0 && isspace((unsigned char)out->buf[out->len-1])) out->buf[--out->len]='\0';
                                            if (out->len>0 && out->buf[out->len-1]==',') out->buf[--out->len]='\0';
                                        }
                                        sb_puts(out, text ? text : "");
                                        bi = bj;
                                        continue;
                                    } else {
                                        // paste with single char
                                        while (out->len>0 && isspace((unsigned char)out->buf[out->len-1])) out->buf[--out->len]='\0';
                                        sb_putc(out, body[bi]);
                                        bi++;
                                        continue;
                                    }
                                } else {
                                    // stringize: # param
                                    bi++; while (isspace((unsigned char)body[bi])) bi++;
                                    if (isalpha((unsigned char)body[bi]) || body[bi]=='_') {
                                        char tok[256]; size_t tk=0; size_t bj=bi;
                                        while (body[bj] && (isalnum((unsigned char)body[bj]) || body[bj]=='_')) { if (tk+1<sizeof tok) tok[tk++]=body[bj]; bj++; }
                                        tok[tk]='\0';
                                        size_t pi_idx = (size_t)-1;
                                        for (size_t pi=0; pi<fm->nparams; ++pi) { if (strcmp(fm->params[pi], tok)==0) { pi_idx = pi; break; } }
                                        if ((strcmp(tok, "__VA_ARGS__") == 0 && fm->is_variadic)) {
                                            // stringize joined raw varargs
                                            sb_putc(out, '"');
                                            const char *s = joined_raw;
                                            bool in_ws=false; for (; *s; ++s) {
                                                unsigned char ch2 = (unsigned char)*s;
                                                if (isspace(ch2)) { in_ws = true; continue; }
                                                if (in_ws) { sb_putc(out, ' '); in_ws = false; }
                                                if (ch2 == '\\' || ch2 == '"') { sb_putc(out, '\\'); sb_putc(out, (char)ch2); }
                                                else { sb_putc(out, (char)ch2); }
                                            }
                                            sb_putc(out, '"');
                                            bi = bj; continue;
                                        } else if (pi_idx != (size_t)-1 && pi_idx < argc) {
                                            // stringize raw args
                                            sb_putc(out, '"');
                                            const char *s = args_raw[pi_idx];
                                            // compress whitespace and escape backslash/quote
                                            bool in_ws=false; for (; *s; ++s) {
                                                unsigned char ch2 = (unsigned char)*s;
                                                if (isspace(ch2)) { in_ws = true; continue; }
                                                if (in_ws) { sb_putc(out, ' '); in_ws = false; }
                                                if (ch2 == '\\' || ch2 == '"') { sb_putc(out, '\\'); sb_putc(out, (char)ch2); }
                                                else { sb_putc(out, (char)ch2); }
                                            }
                                            sb_putc(out, '"');
                                            bi = bj; continue;
                                        }
                                        // not a param; output as literal
                                        sb_putc(out, '#');
                                        for (size_t qq=bi; qq<bj; ++qq) sb_putc(out, body[qq]);
                                        bi = bj; continue;
                                    } else {
                                        sb_putc(out, '#'); sb_putc(out, body[bi]); bi++; continue;
                                    }
                                }
                            }
                            if (isalpha((unsigned char)bc) || bc=='_') {
                                char idb[256]; size_t kk=0; size_t bj=bi;
                                while (body[bj] && (isalnum((unsigned char)body[bj]) || body[bj]=='_')) { if (kk+1<sizeof idb) idb[kk++]=body[bj]; bj++; }
                                idb[kk]='\0';
                                // match parameter
                                size_t pi_idx = (size_t)-1;
                                for (size_t pi=0; pi<fm->nparams; ++pi) { if (strcmp(fm->params[pi], idb)==0) { pi_idx = pi; break; } }
                                if ((strcmp(idb, "__VA_ARGS__") == 0 && fm->is_variadic)) {
                                    sb_puts(out, joined_exp);
                                } else if (pi_idx != (size_t)-1 && pi_idx < argc) {
                                    sb_puts(out, args[pi_idx]);
                                } else {
                                    for (size_t qq=bi; qq<bj; ++qq) sb_putc(out, body[qq]);
                                }
                                bi = bj; continue;
                            }
                            sb_putc(out, bc); bi++;
                        } else if (rb == RB_DQ) { sb_putc(out, bc); if (bc=='"' && body[bi-1] != '\\') rb=RB_CODE; bi++; }
                        else if (rb == RB_SQ) { sb_putc(out, bc); if (bc=='\'' && body[bi-1] != '\\') rb=RB_CODE; bi++; }
                        else if (rb == RB_SL) { sb_putc(out, bc); bi++; }
                        else if (rb == RB_BL) { sb_putc(out, bc); if (bc=='/' && body[bi-1]=='*') rb=RB_CODE; bi++; }
                    }
                    // cleanup args
                    for (size_t ai=0; ai<argc; ++ai) { free(args[ai]); free(args_raw[ai]); }
                    free(args); free(args_raw);
                    sb_free(&join_raw); sb_free(&join_exp);
                    i = p; // advance past arguments
                    continue;
                } else if (rep) {
                    sb_puts(out, rep);
                    i = j;
                } else {
                    // not a macro; copy original slice
                    for (size_t q = i; q < j; ++q) sb_putc(out, line[q]);
                    i = j;
                }
                continue;
            }
            sb_putc(out, c); i++;
        } else if (state == STR_DQ) {
            sb_putc(out, c);
            if (c == '"' && line[i-1] != '\\') state = CODE;
            i++;
        } else if (state == STR_SQ) {
            sb_putc(out, c);
            if (c == '\'' && line[i-1] != '\\') state = CODE;
            i++;
        } else if (state == SL_COMMENT) {
            // copy until end of line
            sb_putc(out, c); i++;
        } else if (state == BL_COMMENT) {
            if (c == '/' && line[i+1] == '*') {
                sb_puts(out, "/*");
                bl_depth++;
                i += 2;
                continue;
            }
            if (c == '*' && line[i+1] == '/') {
                sb_puts(out, "*/");
                i += 2;
                bl_depth--;
                if (bl_depth <= 0) { state = CODE; }
                continue;
            }
            sb_putc(out, c);
            i++;
        }
    }
}

static char *lskip(char *p) {
    while (*p && isspace((unsigned char)*p)) p++;
    return p;
}

static const char *clskip(const char *p) {
    while (*p && isspace((unsigned char)*p)) p++;
    return p;
}

static bool parse_ident(const char *p, size_t *adv, char *buf, size_t bufsz) {
    size_t i = 0;
    if (!(isalpha((unsigned char)p[0]) || p[0] == '_')) return false;
    size_t j = 0;
    while (p[i] && (isalnum((unsigned char)p[i]) || p[i] == '_')) {
        if (j + 1 < bufsz) buf[j++] = p[i];
        i++;
    }
    buf[j] = '\0';
    if (adv) *adv = i;
    return true;
}

// Expression evaluator for #if: supports numbers, identifiers (numeric macros -> value else 0), defined,
// unary ! + -, arithmetic * / + -, relational < <= > >=, equality == !=, logical && ||, parentheses
typedef struct { const char *s; } Expr;

static const char *ex_skip(const char *s) { return clskip(s); }
static long ex_parse_expr(const MacroTable *t, Expr *e);

static long ex_value_of_ident(const MacroTable *t, const char *ident) {
    const char *v = mtable_get(t, ident);
    if (!v) return 0;
    char *end = NULL;
    long n = strtol(v, &end, 0);
    if (end && *end == '\0') return n;
    return 0;
}

static long ex_parse_primary(const MacroTable *t, Expr *e) {
    e->s = ex_skip(e->s);
    if (*e->s == '(') {
        e->s++;
        long v = ex_parse_expr(t, e);
        e->s = ex_skip(e->s);
        if (*e->s == ')') e->s++;
        return v;
    }
    if (starts_with(e->s, "defined")) {
        const char *p = e->s + 7; p = ex_skip(p);
        long v = 0;
        if (*p == '(') {
            p++; p = ex_skip(p);
            char id[256]; size_t a=0; if (parse_ident(p, &a, id, sizeof id)) { p += a; p = ex_skip(p); if (*p == ')') p++; v = mtable_get(t, id) ? 1 : 0; }
        } else {
            char id[256]; size_t a=0; if (parse_ident(p, &a, id, sizeof id)) { p += a; v = mtable_get(t, id) ? 1 : 0; }
        }
        e->s = p;
        return v;
    }
    if (isdigit((unsigned char)*e->s)) {
        char *end = NULL; long v = strtol(e->s, &end, 0); e->s = end; return v;
    }
    char id[256]; size_t a=0;
    if (parse_ident(e->s, &a, id, sizeof id)) { e->s += a; return ex_value_of_ident(t, id); }
    return 0;
}

static long ex_parse_unary(const MacroTable *t, Expr *e) {
    e->s = ex_skip(e->s);
    if (*e->s == '!') { e->s++; long v = ex_parse_unary(t, e); return !v; }
    if (*e->s == '+') { e->s++; return +ex_parse_unary(t, e); }
    if (*e->s == '-') { e->s++; return -ex_parse_unary(t, e); }
    return ex_parse_primary(t, e);
}

static long ex_parse_mul(const MacroTable *t, Expr *e) {
    long v = ex_parse_unary(t, e);
    while (1) {
        const char *s = ex_skip(e->s);
        if (*s == '*') { e->s = s+1; long r = ex_parse_unary(t, e); v = v * r; continue; }
        if (*s == '/') { e->s = s+1; long r = ex_parse_unary(t, e); if (r != 0) v = v / r; else v = 0; continue; }
        if (*s == '%') { e->s = s+1; long r = ex_parse_unary(t, e); if (r != 0) v = v % r; else v = 0; continue; }
        e->s = s; break;
    }
    return v;
}

static long ex_parse_add(const MacroTable *t, Expr *e) {
    long v = ex_parse_mul(t, e);
    while (1) {
        const char *s = ex_skip(e->s);
        if (*s == '+') { e->s = s+1; long r = ex_parse_mul(t, e); v = v + r; continue; }
        if (*s == '-') { e->s = s+1; long r = ex_parse_mul(t, e); v = v - r; continue; }
        e->s = s; break;
    }
    return v;
}

static long ex_parse_shift(const MacroTable *t, Expr *e) {
    long v = ex_parse_add(t, e);
    while (1) {
        const char *s = ex_skip(e->s);
        if (s[0]=='<' && s[1]=='<') { e->s = s+2; long r = ex_parse_add(t, e); v = v << r; continue; }
        if (s[0]=='>' && s[1]=='>' ) { e->s = s+2; long r = ex_parse_add(t, e); v = v >> r; continue; }
        e->s = s; break;
    }
    return v;
}

static long ex_parse_rel(const MacroTable *t, Expr *e) {
    long v = ex_parse_shift(t, e);
    while (1) {
        const char *s = ex_skip(e->s);
        if (s[0]=='<' && s[1]=='=') { e->s = s+2; long r = ex_parse_shift(t, e); v = (v <= r) ? 1 : 0; continue; }
        if (s[0]=='>' && s[1]=='=') { e->s = s+2; long r = ex_parse_shift(t, e); v = (v >= r) ? 1 : 0; continue; }
        if (s[0]=='<') { e->s = s+1; long r = ex_parse_shift(t, e); v = (v < r) ? 1 : 0; continue; }
        if (s[0]=='>') { e->s = s+1; long r = ex_parse_shift(t, e); v = (v > r) ? 1 : 0; continue; }
        e->s = s; break;
    }
    return v;
}

static long ex_parse_eq(const MacroTable *t, Expr *e) {
    long v = ex_parse_rel(t, e);
    while (1) {
        const char *s = ex_skip(e->s);
        if (s[0]=='=' && s[1]=='=') { e->s = s+2; long r = ex_parse_rel(t, e); v = (v == r) ? 1 : 0; continue; }
        if (s[0]=='!' && s[1]=='=') { e->s = s+2; long r = ex_parse_rel(t, e); v = (v != r) ? 1 : 0; continue; }
        e->s = s; break;
    }
    return v;
}

static long ex_parse_band(const MacroTable *t, Expr *e) { long v = ex_parse_eq(t, e); while (1){ const char *s=ex_skip(e->s); if (*s=='&' && s[1] != '&'){ e->s=s+1; long r=ex_parse_eq(t,e); v = v & r; continue;} e->s=s; break;} return v; }
static long ex_parse_bxor(const MacroTable *t, Expr *e) { long v = ex_parse_band(t,e); while (1){ const char *s=ex_skip(e->s); if (*s=='^'){ e->s=s+1; long r=ex_parse_band(t,e); v = v ^ r; continue;} e->s=s; break;} return v; }
static long ex_parse_bor (const MacroTable *t, Expr *e) { long v = ex_parse_bxor(t,e); while (1){ const char *s=ex_skip(e->s); if (*s=='|' && s[1] != '|'){ e->s=s+1; long r=ex_parse_bxor(t,e); v = v | r; continue;} e->s=s; break;} return v; }
static long ex_parse_land(const MacroTable *t, Expr *e) { long v = ex_parse_bor(t,e); while (1){ const char *s=ex_skip(e->s); if (s[0]=='&'&&s[1]=='&'){ e->s=s+2; long r=ex_parse_bor(t,e); v = (v&&r)?1:0; continue;} e->s=s; break;} return v; }
static long ex_parse_lor (const MacroTable *t, Expr *e) { long v = ex_parse_land(t,e); while (1){ const char *s=ex_skip(e->s); if (s[0]=='|'&&s[1]=='|'){ e->s=s+2; long r=ex_parse_land(t,e); v = (v||r)?1:0; continue;} e->s=s; break;} return v; }
static long ex_parse_cond(const MacroTable *t, Expr *e) {
    long v = ex_parse_lor(t, e);
    const char *s = ex_skip(e->s);
    if (*s == '?') {
        e->s = s + 1;
        long vt = ex_parse_cond(t, e);
        s = ex_skip(e->s);
        if (*s == ':') { e->s = s + 1; long vf = ex_parse_cond(t, e); v = v ? vt : vf; }
    }
    return v;
}

static long ex_parse_expr(const MacroTable *t, Expr *e) { return ex_parse_cond(t, e); }

typedef struct { bool parent_active; bool current_active; bool taken; bool saw_else; } IfCtx;

typedef struct {
    const char **incdirs;
    size_t nincdirs;
    const char **sysincdirs;
    size_t nsysincdirs;
    const char **once_paths;
    size_t nonce_paths;
    const char **cmd_defs; size_t ncmd_defs;
    const char **cmd_undefs; size_t ncmd_undefs;
} PPOpts;

static char *path_join(const char *a, const char *b) {
    size_t la = strlen(a), lb = strlen(b);
    bool need_slash = (la > 0 && a[la-1] != '/');
    size_t n = la + (need_slash?1:0) + lb + 1;
    char *p = (char*)malloc(n);
    if (!p) die("malloc");
    memcpy(p, a, la);
    size_t i = la;
    if (need_slash) p[i++] = '/';
    memcpy(p+i, b, lb); i += lb; p[i] = '\0';
    return p;
}

static char *dirname_dup(const char *path) {
    const char *slash = strrchr(path, '/');
    if (!slash) return xstrdup(".");
    size_t n = (size_t)(slash - path);
    char *d = (char*)malloc(n+1);
    if (!d) die("malloc");
    memcpy(d, path, n); d[n] = '\0';
    return d;
}

static FILE *open_in_search(const char *name, bool quoted,
                            const char *curdir, const PPOpts *opts,
                            char **outpath) {
    if (quoted && curdir) {
        char *p = path_join(curdir, name);
        FILE *f = fopen(p, "r");
        if (f) { if (outpath) *outpath = p; else free(p); return f; }
        free(p);
    }
    for (size_t i=0; i<(opts?opts->nincdirs:0); ++i) {
        char *p = path_join(opts->incdirs[i], name);
        FILE *f = fopen(p, "r");
        if (f) { if (outpath) *outpath = p; else free(p); return f; }
        free(p);
    }
    for (size_t i=0; i<(opts?opts->nsysincdirs:0); ++i) {
        char *p = path_join(opts->sysincdirs[i], name);
        FILE *f = fopen(p, "r");
        if (f) { if (outpath) *outpath = p; else free(p); return f; }
        free(p);
    }
    return NULL;
}

static FILE *open_in_search_next(const char *name,
                                 const char *this_path,
                                 const PPOpts *opts,
                                 char **outpath) {
    // Try to determine which list this_path came from, then continue after that index
    long start_inc = 0, start_sys = 0; bool matched_inc=false, matched_sys=false;
    if (this_path && opts) {
        for (size_t i=0; i<opts->nincdirs; ++i) {
            size_t L = strlen(opts->incdirs[i]);
            if (strncmp(this_path, opts->incdirs[i], L) == 0) { start_inc = (long)i + 1; matched_inc = true; break; }
        }
        if (!matched_inc) {
            for (size_t j=0; j<opts->nsysincdirs; ++j) {
                size_t L = strlen(opts->sysincdirs[j]);
                if (strncmp(this_path, opts->sysincdirs[j], L) == 0) { start_sys = (long)j + 1; matched_sys = true; break; }
            }
        }
    }
    if (opts) {
        for (long i=start_inc; i<(long)opts->nincdirs; ++i) {
            char *p = path_join(opts->incdirs[i], name);
            FILE *f = fopen(p, "r");
            if (f) { if (outpath) *outpath = p; else free(p); return f; }
            free(p);
        }
        for (long j=start_sys; j<(long)opts->nsysincdirs; ++j) {
            char *p = path_join(opts->sysincdirs[j], name);
            FILE *f = fopen(p, "r");
            if (f) { if (outpath) *outpath = p; else free(p); return f; }
            free(p);
        }
    }
    return NULL;
}

// Read one logical line (without trailing \n). Returns true if a line was read.
static bool read_line(FILE *in, Str *line) {
    sb_init(line);
    int ch;
    bool got = false;
    while ((ch = fgetc(in)) != EOF) {
        got = true;
        if (ch == '\r') {
            int ch2 = fgetc(in);
            if (ch2 != '\n' && ch2 != EOF) ungetc(ch2, in);
            // handle line splicing if trailing backslash present
            if (line->len > 0 && line->buf[line->len-1] == '\\') { line->buf[--line->len] = '\0'; continue; }
            break;
        }
        if (ch == '\n') {
            if (line->len > 0 && line->buf[line->len-1] == '\\') { line->buf[--line->len] = '\0'; continue; }
            break;
        }
        sb_putc(line, (char)ch);
    }
    return got;
}

static void preprocess_file(const char *path, FILE *in, const char *curdir, const PPOpts *opts, FILE *out, MacroTable *ptbl);

static void preprocess(FILE *in, FILE *out, const PPOpts *opts, const char *curdir, const char *this_path, MacroTable *ptbl) {
    MacroTable tbl_local;
    MacroTable *tbl = ptbl;
    if (!tbl) { tbl = &tbl_local; mtable_init(tbl); }
    // Apply predefined + command-line macros for top-level preprocess only
    if (!ptbl) {
        // Baseline C macros
        mtable_set_obj(tbl, "__STDC__", "1");
        mtable_set_obj(tbl, "__STDC_VERSION__", "199901L");
        mtable_set_obj(tbl, "__STDC_HOSTED__", "1");
        // Provide common compiler-identification macros so system headers don't complain
        mtable_set_obj(tbl, "__GNUC__", "4");
        mtable_set_obj(tbl, "__GNUC_MINOR__", "2");
        mtable_set_obj(tbl, "__clang__", "1");
        // Detect host OS/arch/endianness at runtime for portability
        struct utsname un;
        memset(&un, 0, sizeof un);
        int have_uname = uname(&un) == 0;
        const char *sys = have_uname ? un.sysname : "";
        const char *mach = have_uname ? un.machine : "";
        int is64 = (sizeof(void*) == 8);
        union { unsigned int u; unsigned char b[4]; } endu; endu.u = 0x01020304u;
        int is_little = (endu.b[0] == 0x04);
        // Common byte order macros
        mtable_set_obj(tbl, "__ORDER_LITTLE_ENDIAN__", "1234");
        mtable_set_obj(tbl, "__ORDER_BIG_ENDIAN__", "4321");
        mtable_set_obj(tbl, "__ORDER_PDP_ENDIAN__", "3412");
        mtable_set_obj(tbl, "__BYTE_ORDER__", is_little ? "1234" : "4321");
        if (is_little) mtable_set_obj(tbl, "__LITTLE_ENDIAN__", "1"); else mtable_set_obj(tbl, "__BIG_ENDIAN__", "1");
        // Provide conservative fallbacks for feature/attribute checks
        process_define(tbl, "#define __has_feature(x) 0");
        process_define(tbl, "#define __has_extension(x) 0");
        process_define(tbl, "#define __has_attribute(x) 0");
        process_define(tbl, "#define __has_builtin(x) 0");
        process_define(tbl, "#define __has_c_attribute(x) 0");
        process_define(tbl, "#define __has_include(x) 0");

        // Host OS/arch defaults (approximate typical compiler predefined macros), runtime-based
        if (sys && strstr(sys, "Linux")) {
            mtable_set_obj(tbl, "__linux__", "1");
            mtable_set_obj(tbl, "linux", "1");
            mtable_set_obj(tbl, "__gnu_linux__", "1");
            mtable_set_obj(tbl, "__unix__", "1");
            mtable_set_obj(tbl, "__unix", "1");
            mtable_set_obj(tbl, "__ELF__", "1");
            if (is64) mtable_set_obj(tbl, "__LP64__", "1");
        } else if (sys && strstr(sys, "Darwin")) {
            mtable_set_obj(tbl, "__APPLE__", "1");
            mtable_set_obj(tbl, "__MACH__", "1");
            if (is64) mtable_set_obj(tbl, "__LP64__", "1");
        } else if (sys && (strstr(sys, "FreeBSD") || strstr(sys, "OpenBSD") || strstr(sys, "NetBSD") || strstr(sys, "DragonFly"))) {
            mtable_set_obj(tbl, "__unix__", "1");
            mtable_set_obj(tbl, "__unix", "1");
            if (is64) mtable_set_obj(tbl, "__LP64__", "1");
        }
        // Arch detection via uname machine
        if (mach && (strstr(mach, "x86_64") || strstr(mach, "amd64"))) {
            mtable_set_obj(tbl, "__x86_64__", "1");
            mtable_set_obj(tbl, "__amd64__", "1");
        } else if (mach && (strstr(mach, "aarch64") || strstr(mach, "arm64"))) {
            mtable_set_obj(tbl, "__aarch64__", "1");
            mtable_set_obj(tbl, "__arm64__", "1");
        } else if (mach && (strstr(mach, "i386") || strstr(mach, "i686") || strstr(mach, "x86"))) {
            mtable_set_obj(tbl, "__i386__", "1");
        } else if (mach && (strstr(mach, "riscv64") || strstr(mach, "riscv32") || strstr(mach, "riscv"))) {
            mtable_set_obj(tbl, "__riscv", "1");
            if (strstr(mach, "64")) { mtable_set_obj(tbl, "__riscv_xlen", "64"); if (is64) mtable_set_obj(tbl, "__LP64__", "1"); }
            else { mtable_set_obj(tbl, "__riscv_xlen", "32"); }
        }
        if (opts) {
            for (size_t di=0; di<opts->ncmd_defs; ++di) {
                const char *d = opts->cmd_defs[di];
                const char *eq = strchr(d, '=');
                if (eq) {
                    char name[256]; size_t nlen = (size_t)(eq - d); if (nlen >= sizeof name) nlen = sizeof name - 1; memcpy(name, d, nlen); name[nlen]='\0';
                    const char *val = eq+1;
                    mtable_set_obj(tbl, name, val);
                } else {
                    mtable_set_obj(tbl, d, "1");
                }
            }
            for (size_t ui=0; ui<opts->ncmd_undefs; ++ui) {
                mtable_unset(tbl, opts->cmd_undefs[ui]);
            }
        }
    }
    Str line;
    Str prev; bool has_prev = false; sb_init(&prev);
    IfCtx *istk = NULL; size_t ilen = 0, icap = 0;
    while (1) {
        if (!read_line(in, &line)) break;
        char *raw = line.buf ? line.buf : "";
        char *p = lskip(raw);
        bool active = (ilen == 0) ? true : istk[ilen-1].current_active;

        if (*p == '#') {
            p++; p = lskip(p);
            char kw[32]; size_t adv = 0; parse_ident(p, &adv, kw, sizeof kw); p += adv; p = lskip(p);
            if (strcmp(kw, "define") == 0) {
                if (active) process_define(tbl, raw);
            } else if (strcmp(kw, "undef") == 0) {
                if (active) {
                    char id[256]; size_t a=0; parse_ident(p, &a, id, sizeof id);
                    if (a>0) mtable_unset(tbl, id);
                }
            } else if (strcmp(kw, "include") == 0 || strcmp(kw, "include_next") == 0) {
                if (active) {
                    // Flush buffered previous line before including
                    if (has_prev) {
                        if (prev.buf) fputs(prev.buf, out);
                        fputc('\n', out);
                        sb_free(&prev); sb_init(&prev); has_prev = false;
                    }
                    // Parse header name
                    bool quoted=false, angled=false; char header[512]; size_t hi=0;
                    if (*p == '"') { quoted = true; p++; while (*p && *p!='"' && hi+1<sizeof header) header[hi++]=*p++; if (*p=='"') p++; }
                    else if (*p == '<') { angled = true; p++; while (*p && *p!='>' && hi+1<sizeof header) header[hi++]=*p++; if (*p=='>') p++; }
                    header[hi]='\0';
                    char *opened_path=NULL;
                    FILE *f = NULL;
                    if (strcmp(kw, "include") == 0) {
                        f = open_in_search(header, quoted, curdir, opts, &opened_path);
                    } else {
                        f = open_in_search_next(header, this_path, opts, &opened_path);
                    }
                    if (f) {
                        // check pragma once cache
                        bool skip = false;
                        for (size_t oi=0; oi<(opts?opts->nonce_paths:0); ++oi) {
                            if (strcmp(opts->once_paths[oi], opened_path)==0) { skip = true; break; }
                        }
                        if (!skip) {
                            char *ndir = dirname_dup(opened_path);
                            preprocess_file(opened_path, f, ndir, opts, out, tbl);
                            fclose(f);
                            free(ndir);
                        }
                        free(opened_path);
                    }
                }
            } else if (strcmp(kw, "line") == 0) {
                if (active) {
                    if (has_prev) {
                        if (prev.buf) fputs(prev.buf, out);
                        fputc('\n', out);
                        sb_free(&prev); sb_init(&prev); has_prev = false;
                    }
                    fputs(raw, out); fputc('\n', out);
                }
            } else if (strcmp(kw, "warning") == 0) {
                if (active) { fprintf(stderr, "warning: %s\n", p); }
            } else if (strcmp(kw, "error") == 0) {
                if (active) {
                    const char *relax_env = getenv("CCPP_RELAX_ERRORS");
                    bool in_sys = false;
                    if (this_path) {
                        if (strstr(this_path, "/usr/include") || strstr(this_path, "MacOSX.sdk/usr/include")) in_sys = true;
                    }
                    if (relax_env || in_sys) {
                        fprintf(stderr, "error(demoted): %s\n", p);
                    } else {
                        fprintf(stderr, "error: %s\n", p);
                        exit(1);
                    }
                }
            } else if (strcmp(kw, "ifdef") == 0) {
                char id[256]; size_t a=0; parse_ident(p, &a, id, sizeof id);
                bool cond = mtable_get(tbl, id) != NULL;
                if (ilen == icap) { icap = icap? icap*2:8; istk = xrealloc(istk, icap*sizeof(IfCtx)); }
                bool parent = active;
                bool curr = parent && cond;
                istk[ilen++] = (IfCtx){ parent, curr, curr, false };
            } else if (strcmp(kw, "ifndef") == 0) {
                char id[256]; size_t a=0; parse_ident(p, &a, id, sizeof id);
                bool cond = mtable_get(tbl, id) == NULL;
                if (ilen == icap) { icap = icap? icap*2:8; istk = xrealloc(istk, icap*sizeof(IfCtx)); }
                bool parent = active;
                bool curr = parent && cond;
                istk[ilen++] = (IfCtx){ parent, curr, curr, false };
            } else if (strcmp(kw, "if") == 0) {
                Expr ex = { .s = p };
                long v = ex_parse_expr(tbl, &ex);
                bool cond = v != 0;
                if (ilen == icap) { icap = icap? icap*2:8; istk = xrealloc(istk, icap*sizeof(IfCtx)); }
                bool parent = active;
                bool curr = parent && cond;
                istk[ilen++] = (IfCtx){ parent, curr, curr, false };
            } else if (strcmp(kw, "elif") == 0) {
                if (ilen > 0) {
                    IfCtx *c = &istk[ilen-1];
                    if (!c->saw_else) {
                        if (c->taken) {
                            c->current_active = false;
                        } else {
                            Expr ex = { .s = p };
                            long v = ex_parse_expr(tbl, &ex);
                            bool cond = v != 0;
                            c->current_active = c->parent_active && cond;
                            if (c->current_active) c->taken = true;
                        }
                    }
                }
            } else if (strcmp(kw, "else") == 0) {
                if (ilen > 0) {
                    IfCtx *c = &istk[ilen-1];
                    if (!c->saw_else) {
                        c->current_active = c->parent_active && !c->taken;
                        if (c->current_active) c->taken = true;
                        c->saw_else = true;
                    }
                }
            } else if (strcmp(kw, "endif") == 0) {
                if (ilen > 0) ilen--;
            } else if (strcmp(kw, "pragma") == 0) {
                // Handle #pragma once
                char w2[32]; size_t a2=0; parse_ident(p, &a2, w2, sizeof w2);
                if (strcmp(w2, "once") == 0 && this_path && *this_path) {
                    // record in opts once list
                    PPOpts *mopts = (PPOpts*)opts; // cast away const; acceptable within our program
                    mopts->once_paths = (const char**)xrealloc((void*)mopts->once_paths, sizeof(char*)*(mopts->nonce_paths+1));
                    mopts->once_paths[mopts->nonce_paths++] = xstrdup(this_path);
                } else if (active) {
                    // pass through other pragmas to output
                    if (has_prev) {
                        if (prev.buf) fputs(prev.buf, out);
                        fputc('\n', out);
                        sb_free(&prev); sb_init(&prev); has_prev = false;
                    }
                    fputs(raw, out); fputc('\n', out);
                }
            } else {
                // Unknown directive: ignore
            }
            sb_free(&line);
            continue; // do not emit directive lines
        }

        if (!active) { sb_free(&line); continue; }

        Str outln; sb_init(&outln);
        expand_into_str(tbl, raw, &outln);
        // Rescan to expand nested macros (with iteration cap to avoid oscillation)
        for (int pass = 0; pass < 50; ++pass) {
            Str next; sb_init(&next);
            expand_into_str(tbl, outln.buf ? outln.buf : "", &next);
            bool same = ((outln.buf == NULL && next.buf == NULL) || (outln.buf && next.buf && strcmp(outln.buf, next.buf) == 0));
            sb_free(&outln);
            outln = next;
            if (same) break;
        }
        if (has_prev) {
            if (prev.buf) fputs(prev.buf, out);
            fputc('\n', out);
            sb_free(&prev);
            sb_init(&prev);
            has_prev = false;
        }
        prev = outln;
        has_prev = true;
        sb_free(&line);
    }
    if (has_prev) {
        if (prev.buf && prev.buf[0] != '\0') {
            fputs(prev.buf, out);
            fputc('\n', out);
        }
        sb_free(&prev);
    }
    free(istk);
    if (tbl == &tbl_local) mtable_free(tbl);
}

int main(int argc, char **argv) {
    const char *path = NULL;
    PPOpts opts = {0};
    // parse args: [-I dir]... [-DNAME[=VALUE]] [-UNAME] [input]
    for (int i=1; i<argc; ++i) {
        const char *a = argv[i];
        if (a[0]=='-' && a[1]=='I') {
            const char *dir = NULL;
            if (a[2] != '\0') dir = a+2; else if (i+1 < argc) { dir = argv[++i]; }
            if (dir) {
                opts.incdirs = (const char**)xrealloc((void*)opts.incdirs, sizeof(char*)*(opts.nincdirs+1));
                opts.incdirs[opts.nincdirs++] = dir;
            }
        } else if (a[0]=='-' && a[1]=='D') {
            const char *def = a+2;
            if (*def == '\0' && i+1 < argc) def = argv[++i];
            if (def && *def) {
                opts.cmd_defs = (const char**)xrealloc((void*)opts.cmd_defs, sizeof(char*)*(opts.ncmd_defs+1));
                opts.cmd_defs[opts.ncmd_defs++] = def;
            }
        } else if (a[0]=='-' && a[1]=='U') {
            const char *name = a+2;
            if (*name == '\0' && i+1 < argc) name = argv[++i];
            if (name && *name) {
                opts.cmd_undefs = (const char**)xrealloc((void*)opts.cmd_undefs, sizeof(char*)*(opts.ncmd_undefs+1));
                opts.cmd_undefs[opts.ncmd_undefs++] = name;
            }
        } else if (a[0] == '-') {
            fprintf(stderr, "Unknown option: %s\n", a);
            return 2;
        } else {
            path = a;
        }
    }
    FILE *in = stdin;
    const char *curdir = ".";
    if (path) {
        in = fopen(path, "r");
        if (!in) die("fopen");
        curdir = dirname_dup(path);
    }
    // populate system include paths from env and defaults
    const char *envs[] = { getenv("CPATH"), getenv("C_INCLUDE_PATH") };
    for (size_t ei=0; ei<sizeof(envs)/sizeof(envs[0]); ++ei) {
        const char *v = envs[ei];
        if (!v) continue;
        const char *p = v; const char *seg = p;
        while (*p) {
            if (*p == ':') {
                size_t L = (size_t)(p - seg);
                if (L > 0) {
                    char *dir = (char*)malloc(L+1); if (!dir) die("malloc");
                    memcpy(dir, seg, L); dir[L] = '\0';
                    opts.sysincdirs = (const char**)xrealloc((void*)opts.sysincdirs, sizeof(char*)*(opts.nsysincdirs+1));
                    opts.sysincdirs[opts.nsysincdirs++] = dir;
                }
                seg = p+1;
            }
            p++;
        }
        if (p != seg) {
            size_t L = (size_t)(p - seg);
            char *dir = (char*)malloc(L+1); if (!dir) die("malloc");
            memcpy(dir, seg, L); dir[L] = '\0';
            opts.sysincdirs = (const char**)xrealloc((void*)opts.sysincdirs, sizeof(char*)*(opts.nsysincdirs+1));
            opts.sysincdirs[opts.nsysincdirs++] = dir;
        }
    }
    // add SDKROOT if present
    const char *sdkroot = getenv("SDKROOT");
    if (sdkroot && *sdkroot) {
        char *p1 = path_join(sdkroot, "usr/include");
        opts.sysincdirs = (const char**)xrealloc((void*)opts.sysincdirs, sizeof(char*)*(opts.nsysincdirs+1));
        opts.sysincdirs[opts.nsysincdirs++] = p1;
        char *p2 = path_join(sdkroot, "usr/local/include");
        opts.sysincdirs = (const char**)xrealloc((void*)opts.sysincdirs, sizeof(char*)*(opts.nsysincdirs+1));
        opts.sysincdirs[opts.nsysincdirs++] = p2;
    }
    // add common defaults
    const char *defs[] = { 
        "/usr/local/include",
        "/usr/include",
        "/opt/homebrew/include",
        "/usr/include/x86_64-linux-gnu",
        "/usr/include/aarch64-linux-gnu",
        "/usr/include/i386-linux-gnu",
        "/usr/include/arm-linux-gnueabihf",
        "/usr/include/arm-linux-gnueabi",
        "/usr/include/powerpc64le-linux-gnu",
        "/usr/include/riscv64-linux-gnu",
        "/usr/include/s390x-linux-gnu"
    };
    for (size_t di=0; di<sizeof(defs)/sizeof(defs[0]); ++di) {
        opts.sysincdirs = (const char**)xrealloc((void*)opts.sysincdirs, sizeof(char*)*(opts.nsysincdirs+1));
        opts.sysincdirs[opts.nsysincdirs++] = defs[di];
    }
#ifdef __APPLE__
    // Add common macOS SDK locations (Xcode/CLT). They may not exist; harmless to try.
    {
        const char *mac_defs[] = {
            "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include",
            "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include"
        };
        for (size_t di=0; di<sizeof(mac_defs)/sizeof(mac_defs[0]); ++di) {
            opts.sysincdirs = (const char**)xrealloc((void*)opts.sysincdirs, sizeof(char*)*(opts.nsysincdirs+1));
            opts.sysincdirs[opts.nsysincdirs++] = mac_defs[di];
        }
    }
#endif
    preprocess(in, stdout, &opts, curdir, path, NULL);
    if (path && in) { fclose(in); free((void*)curdir); }
    return 0;
}

static void preprocess_file(const char *path, FILE *in, const char *curdir, const PPOpts *opts, FILE *out, MacroTable *ptbl) {
    preprocess(in, out, opts, curdir, path, ptbl);
}
