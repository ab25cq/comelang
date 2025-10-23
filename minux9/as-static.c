#include "as.h"

// 静的メモリプール
#define AS_POOL_SIZE (1024 * 1024)  // 1MB pool for malloc/calloc

static char AsPool[AS_POOL_SIZE] __attribute__((aligned(16)));
static size_t AsPoolIndex = 0;

// 静的malloc代替関数
static void *static_malloc(size_t size) {
    if (size == 0) return NULL;

    const size_t align = 16;

    // Keep allocations 16-byte aligned even after storing the size header.
    size_t aligned_index = (AsPoolIndex + align - 1) & ~(align - 1);
    size_t data_index = (aligned_index + sizeof(size_t) + align - 1) & ~(align - 1);
    size_t header_index = data_index - sizeof(size_t);
    size_t total = (data_index + size) - aligned_index;

    if (aligned_index + total > AS_POOL_SIZE) {
        puts("As pool exhausted");
        exit(1);
    }

    size_t *header = (size_t*)&AsPool[header_index];
    *header = size;

    void *ptr = &AsPool[data_index];
    AsPoolIndex = aligned_index + total;
    return ptr;
}

// 静的calloc代替関数
static void *static_calloc(size_t nmemb, size_t size) {
    size_t total = nmemb * size;
    void *ptr = static_malloc(total);
    if (ptr) {
        memset(ptr, 0, total);
    }
    return ptr;
}

static void *static_realloc(void* ptr, size_t size) {
    if (ptr == NULL) {
        return static_malloc(size);
    }

    if (size == 0) {
        return ptr;
    }

    size_t old_size = ((size_t*)ptr)[-1];
    void *new_ptr = static_malloc(size);

    size_t copy = old_size < size ? old_size : size;
    memcpy(new_ptr, ptr, copy);
    return new_ptr;
}

#define malloc static_malloc
#define xmalloc static_malloc
#define calloc static_calloc
#define xcalloc static_calloc
#define realloc static_realloc
#define xrealloc static_realloc
#define free(ptr) ((void)0)

static void die(const char *function);

/*
void *xmalloc(size_t sz)
{
    void *ptr = malloc(sz);
    if (!ptr)
        die("malloc");
    return ptr;
}

void *xcalloc(size_t nitems, size_t size)
{
    void *ptr = calloc(nitems, size);
    if (!ptr)
        die("calloc");
    return ptr;
}

void *xrealloc(void *ptr, size_t size)
{
    ptr = realloc(ptr, size);
    if (!ptr)
        die("xrealloc");
    return ptr;
}
*/

void closefiles(void);

static const char strtab_bytes[] =
  "\0" "__global_pointer$" "\0";   // オフセット0は空、次が __global_pointer$
  
enum { STRTAB_OFF_EMPTY = 0, STRTAB_OFF_GP = 1 }; // 今回の並びなら 1 でOK

static const char shstrtab_bytes[] =
  "\0"          // index 0 は空文字
  ".text\0"
  ".data\0"
  ".symtab\0"
  ".strtab\0"
  ".shstrtab\0";

enum {
  SHSTR_OFF_EMPTY    = 0,
  SHSTR_OFF_TEXT     = 1,               // "\0" の直後（".text"）
  SHSTR_OFF_DATA     = 1 + 6,           // ".text\0" で 6 バイト進む
  SHSTR_OFF_SYMTAB   = 1 + 6 + 6,       // ".data\0" でさらに 6
  SHSTR_OFF_STRTAB   = 1 + 6 + 6 + 8,   // ".symtab\0" で 8
  SHSTR_OFF_SHSTRTAB = 1 + 6 + 6 + 8 + 8 // ".strtab\0" で 8
};


#ifndef PAGE_SIZE
#define PAGE_SIZE  4096ull
#endif
#ifndef BASE_ADDR
#define BASE_ADDR  0x1000
#endif

static inline size_t align_up(size_t x, size_t a){
    if (a <= 1) return x;
    return (x + (a - 1)) / a * a;
}
        

// セクション名 → shstrtab 内オフセット

// as.c
static size_t expect_freg(const char* s) {
    ssize_t r = (ssize_t)get_float_register_id(s);
    if (r < 0 || r > 31) {
        logger(ERROR, error_invalid_syntax, "Expected floating register, got '%s'", s);
        return 0;
    }
    return (size_t)r;
}

struct args parse_fltype(char* argstr) {
    // 形式:   fld  fRD, imm(RS1)
    // 例:     fld  fs5, -48(fp)
    char *first = strtok(argstr, ",");
    char *second = strtok(NULL, ",");
    if (!first || !second) {
        logger(ERROR, error_invalid_syntax, "Invalid operands");
        return empty_args;
    }
    first  = trim_whitespace(first);
    second = trim_whitespace(second);

    size_t rd = expect_freg(first);

    // off(reg) を読む
    size_t imm = 0;
    char basebuf[64];
    if (sscanf(second, "%zi(%63[^)])", (ssize_t*)&imm, basebuf) != 2) {
        logger(ERROR, error_invalid_syntax, "Expected off(reg), got '%s'", second);
        return empty_args;
    }
    size_t rs1 = get_register_id(trim_whitespace(basebuf));

    return (struct args){ .rd = (uint8_t)rd, .rs1 = (uint8_t)rs1, .imm = (int32_t)imm };
}

struct args parse_fstype(char* argstr) {
    // 形式:   fsd  fRS2, imm(RS1)
    char *first = strtok(argstr, ",");
    char *second = strtok(NULL, ",");
    if (!first || !second) {
        logger(ERROR, error_invalid_syntax, "Invalid operands");
        return empty_args;
    }
    first  = trim_whitespace(first);
    second = trim_whitespace(second);

    size_t rs2 = expect_freg(first);

    size_t imm = 0;
    char basebuf[64];
    if (sscanf(second, "%zi(%63[^)])", (ssize_t*)&imm, basebuf) != 2) {
        logger(ERROR, error_invalid_syntax, "Expected off(reg), got '%s'", second);
        return empty_args;
    }
    size_t rs1 = get_register_id(trim_whitespace(basebuf));

    return (struct args){ .rs1 = (uint8_t)rs1, .rs2 = (uint8_t)rs2, .imm = (int32_t)imm };
}


const char progname[] = "wrasm";
const struct versioninfo_t versioninfo = { 0, 0, 1, "alpha" };
const char helpstr[] =
    "The wrasm assembler\n"
    "\n"
    "A risc-V macro assembler based on nasm (see https://nasm.us/)\n"
    "Currently still being built\n";

struct cmdargs_t cmdargs;

void *argtable[6];
static void free_argtable(void);

void parse_cmdargs(int argc, char *argv[])
{
    const char *progcall = argv[0];

    argtable[0] = cmdargs.help =
        arg_litn("h", "help", 0, 1, "display this help and exit");
    argtable[1] = cmdargs.version =
        arg_litn("V", "version", 0, 1, "display version info and exit");
    argtable[2] = cmdargs.verbose =
        arg_litn("v", "verbose", 0, 1, "verbose output");
    argtable[3] = cmdargs.inputfile =
        arg_filen(NULL, NULL, "<input>", 1, 3, "input file");
    char output_file_name[32];
    argtable[4] = cmdargs.outputfile =
        arg_filen("o", "output", "<filename>", 1, 3, "output file");
    argtable[5] = cmdargs.end = arg_end(20);

//    atexit(&free_argtable);

    int nerrors = arg_parse(argc, argv, argtable);

    if (cmdargs.help->count) {
        printf("Usage: %s", progcall);
        arg_print_syntax(stdout, argtable, "\n");
        puts(helpstr);
        arg_print_glossary(stdout, argtable, "  %-25s %s\n");
        exit(0);
    }

    if (cmdargs.version->count) {
        printf("%s version %d.%d.%d %s\n", progname, versioninfo.major,
               versioninfo.minor, versioninfo.patch, versioninfo.note);
        exit(0);
    }

    if (cmdargs.inputfile->count > 1 || cmdargs.outputfile->count > 1)
        nerrors++;

    if (nerrors) {
        arg_print_errors(stdout, cmdargs.end, progname);
        printf("Try '%s --help' for more information\n", progcall);
        exit(1);
    }

    if (cmdargs.verbose->count) {
        set_min_loglevel(DEBUG);
    }
}



static void free_argtable(void)
{
    arg_freetable(argtable, ARRAY_LENGTH(argtable));
}

size_t linenumber;

const char *level_names[6] = {
    "debug", "info", "warning", "error", "critical", "none",
};
const char *level_colours[6] = {
    "",
    "\033[0;36;1m",
    "\033[0;35;1m",
    "\033[0;31;1m",
    "\033[1;31;1m",
    "\033[1m",
};
size_t level_instances[6] = { 0 };

static enum loglvl_t minloglevel = WARN;
static enum loglvl_t exitloglevel = ERROR;

void set_min_loglevel(enum loglvl_t level)
{
    minloglevel = level;
    logger(INFO, no_error, "Log level set to %s%s\033[0m",
           level_colours[minloglevel], level_names[minloglevel]);
}

void set_exit_loglevel(enum loglvl_t level)
{
    exitloglevel = level;
    logger(INFO, no_error, "Exit log level set to %s%s\033[0m",
           level_colours[exitloglevel], level_names[exitloglevel]);
}

void logger(enum loglvl_t level, enum error_t id, const char *format, ...)
{
    level_instances[level]++;
    if (level < minloglevel)
        return;

    FILE *out = stdout;

    fprintf(out, "%s: %s0x%x\033[0m / %s%s\033[0m ", progname,
        level_colours[level], id, level_colours[level],
        level_names[level]);
    if (linenumber)
        fprintf(out, "- %sL%lu\033[0m ", level_colours[level],
            (unsigned long)linenumber);

    va_list format_params;
    va_start(format_params, format);
    vfprintf(out, format, format_params);
    va_end(format_params);

    fputc('\n', out);

    if (level >= exitloglevel) {
        closefiles();
        exit(1);
    }
}

int get_clean_exit(enum loglvl_t level)
{
    for (; level <= NODEBUG; level++)
        if (level_instances[level])
            return 1;
    return 0;
}

/*
 * custom getline implementation for cross platform support removes newline at
 * end of line and therefore not compatible with GNU/POSIX getline
 */
size_t getl(char **lineptr, size_t *n, FILE *stream)
{
    char *bufptr = NULL;
    char *p = bufptr;
    size_t size;
    int c;

    if (lineptr == NULL)
        return (size_t)-1;
    if (stream == NULL)
        return (size_t)-1;
    if (n == NULL)
        return (size_t)-1;

    bufptr = *lineptr;
    size = *n;

    c = fgetc(stream);
    if (c == EOF)
        return (size_t)-1;

    if (!bufptr) {
        size = 128;
        bufptr = xmalloc(size);
    }
    p = bufptr;
    while (c != EOF) {
        if ((size_t)(p - bufptr) > (size - 1)) {
            size = size + 128;
            bufptr = xrealloc(bufptr, size);
        }
        if (c == '\n')
            break;
        *p++ = (char)c;
        c = fgetc(stream);
    }

    *(p++) = '\0';
    *lineptr = bufptr;
    *n = size;

    return (size_t)(p - bufptr - 1);
}

struct sectionpos get_outputpos(void);
int parse_line(char *line, struct sectionpos position);

#ifndef SHN_ABS
#define SHN_ABS 0xfff1
#endif
#ifndef BASE_ADDR
#define BASE_ADDR 0x1000ull
#endif

static uint64_t compute_gp_value_abs(void) {
  // .data が空なら固定でもOK。将来は .sdata/.sbss の中央に置くと良い
  return BASE_ADDR + 0x1200;  // 例: 0x2200
}

void parse_file(FILE *ifp, FILE *ofp)
{
    char *line = NULL;
    size_t linesize = 0;
    size_t nread;

    linenumber = 0;

    fseek(ifp, 0L, SEEK_SET);

    while ((nread = getl(&line, &linesize, ifp)) != (size_t)-1) {
        linenumber++;
        logger(DEBUG, no_error, "Parsing line \"%s\"", line);
        if (parse_line(line, get_outputpos()))
            return;
        logger(DEBUG, no_error, " | Finished parsing line");
    }

    linenumber = 0;
    
    struct symbol* gp = get_or_create_symbol("__global_pointer$", SYMBOL_LABEL);
    gp->binding  = (1u<<4) | 1u;                  // STB_GLOBAL | STT_OBJECT（NOTYPEでもよいがOBJECTが無難）
    gp->section = SHN_ABS;                       // ★絶対シンボル（ローダ側の加算不）
    gp->value = compute_gp_value_abs();        // ★完成した仮想アドレスを入れる

    calc_strtab();
    calc_symtab();
    alloc_output();

    write_all();

    free(line);

    linenumber = 0;
    

    fill_strtab();
    fill_symtab();

    flush_output(ofp);
fflush(ofp);

    free_output();
    free_instructions();
    free_data();
    free_symbols();
}

static inline int parse_line_trimmed(char *, struct sectionpos);
int parse_line(char *line, struct sectionpos position)
{
    char *trimmed_line = trim_whitespace(line);
    const int result = parse_line_trimmed(trimmed_line, position);
    free(trimmed_line);
    return result;
}

static inline int parse_line_trimmed(char *line, struct sectionpos position)
{
    logger(DEBUG, no_error, " |-> \"%s\"", line);

    switch (*line) {
    case '\0':
    case ';':
        return 0;
    case '/':
        if (line[1] == '/')
            return 0;
        break;
    }

    // ★ 先にラベルを処理（.L.*: などをディレクティブと誤判定しない）
    if (strchr(line, ':'))
        return parse_label(line, position);

    // ここからディレクティブ判定
    if (*line == '.' || *line == '[')
        return parse_directive(line);

    // 命令
    return parse_asm(line, position);
}



int parse_label(char *line, struct sectionpos position)
{
    char *end = strchr(line, ':');
    /* check for invalid label definition */
    if (end == NULL)
        return 0;

    logger(DEBUG, no_error, "Creating label (%s)", line);

    *(end++) = '\0';
    char *name = trim_whitespace(line);
    struct symbol *label = get_or_create_symbol(name, SYMBOL_LABEL);
    free(name);

    const struct sectionpos fpos = get_outputpos();
    if (fpos.offset == (size_t)-1) {
        logger(CRITICAL, error_system,
               "Unable to determine section file position");
        return 1;
    }

    label->section = fpos.section;
    label->value = (long)fpos.offset;

    logger(DEBUG, no_error, "Moving on to line (%s %p)", end, end);
    return parse_line(end, position);
}

int parse_preprocessor(const char *line)
{
    /* TODO: implement preprocessor stuff */
    (void)line;
    logger(WARN, error_not_implemented, "Preprocessor not implemented");
    return 0;
}


const struct args empty_args = {
    .rd = 0,
    .rs1 = 0,
    .rs2 = 0,
    .imm = 0,
    .sym = NULL,
};

static char *trim_arg(char *s)
{
    const char *tok = strtok(s, ",");
    if (!tok)
        return NULL;
    return trim_whitespace(tok);
}

static uint8_t expect_reg(char *arg)
{
    size_t reg = get_register_id(arg);
    if (reg == (size_t)-1)
        logger(ERROR, error_instruction_other,
               "Expected register but got %s", arg);
    return (uint8_t)reg;
}

static void expect_offreg(char *arg, int32_t *offset, uint8_t *reg)
{
    *offset = (int32_t)strtol(arg, &arg, 0);

    while (isspace(*arg))
        arg++;

    if (*arg != '(')
        logger(ERROR, error_instruction_other,
               "Expected '(' but got '%c'", *arg);
    arg++;
    char *closing = arg;
    while (*closing != ')') {
        if (!*closing) {
            logger(ERROR, error_instruction_other,
                   "Expected closing parenthesis");
            return;
        }
        closing++;
    }
    *closing = '\0';

    size_t r = get_register_id(arg);

    if (r == (size_t)-1)
        logger(ERROR, error_instruction_other,
               "Expected register but got %s", arg);

    *reg = (uint8_t)r;

    closing++;
    if (*closing)
        logger(ERROR, error_instruction_other,
               "Received unexpected expression \"%s\"", closing);
}

static uint32_t expect_imm(char *arg)
{
    size_t imm;
    if (get_immediate(arg, &imm))
        logger(ERROR, error_instruction_other,
               "Expected immediate but got %s", arg);
    return (uint32_t)imm;
}

static uint16_t expect_csr(char *arg)
{
    const uint16_t csr = get_csr(arg);
    if (csr == 0xFFFF)
        logger(ERROR, error_instruction_other,
               "Expected valid control/status register but got %s",
               arg);
    return csr;
}

static int expect_one_arg(char *first)
{
    if (strtok(NULL, ",")) {
        logger(ERROR, error_instruction_other,
               "Instruction has more than one argument");
        return 0;
    }

    if (!first) {
        logger(ERROR, error_instruction_other,
               "Expected one argument, not none");
        return 1;
    }
    return 0;
}

static int expect_two_args(char *first, char *second)
{
    if (strtok(NULL, ",")) {
        logger(ERROR, error_instruction_other,
               "Instruction has more than two arguments");
        return 0;
    }

    if (!first) {
        logger(ERROR, error_instruction_other,
               "Expected two arguments, not none");
        return 1;
    }
    if (!second) {
        logger(ERROR, error_instruction_other,
               "Expected two arguments, not one");
        free(first);
        return 1;
    }
    return 0;
}

static int expect_three_args(char *first, char *second, char *third)
{
    if (strtok(NULL, ",")) {
        logger(ERROR, error_instruction_other,
               "Instruction has more than three arguments");
        return 0;
    }

    if (!first) {
        logger(ERROR, error_instruction_other,
               "Expected three arguments, not none");
        return 1;
    }
    if (!second) {
        logger(ERROR, error_instruction_other,
               "Expected three arguments, not one");
        free(first);
        return 1;
    }
    if (!third) {
        logger(ERROR, error_instruction_other,
               "Expected three arguments, not two");
        free(first);
        free(second);
        return 1;
    }
    return 0;
}

int parse_asm(const char *linestr, struct sectionpos position)
{
    logger(DEBUG, no_error, "Parsing assembly %s", linestr);

    char *line = xmalloc(strlen(linestr) + 1);
    strncpy(line, linestr, strlen(linestr) + 1);

//    char *instruction = strtok(line, " \t");
//    char *argstr = strtok(NULL, "");
char *p = line;
while (*p==' ' || *p=='\t') p++;
char *instruction = p;
while (*p && *p!=' ' && *p!='\t') p++;
if (*p) *p++ = '\0';
while (*p==' ' || *p=='\t') p++;





char *argstr = (*p ? strdup(p) : NULL);
    const struct formation formation = parse_form(instruction);
    const struct args args = formation.arg_handler(argstr);

    free(line);

   add_instruction((struct instruction){
        .formation = formation,
        .args = args,
        .line = linenumber,
        .position = position,
    });
    
    inc_outputsize(position.section, formation.idata.sz);
    logger(DEBUG, no_error, "Updated position to offset (%zu)",
           position.offset);

    return 0;
}

struct args parse_none(char *argstr)
{
    logger(DEBUG, no_error,
           "Parsing arguments for no argument instruction");

    if (!argstr)
        return empty_args;

    for (char *c = argstr; *c; c++)
        if (*c == ',')
            logger(ERROR, error_instruction_other,
                   "Expected zero arguments, but got at least one");

    return empty_args;
}

struct args parse_rtype(char *argstr)
{
    logger(DEBUG, no_error, "Parsing arguments for rtype instruction %s",
           argstr);

    char *first = trim_arg(argstr);
    char *second = trim_arg(NULL);
    char *third = trim_arg(NULL);

    logger(DEBUG, no_error, "Parsed %s, %s, %s", first, second, third);

    if (expect_three_args(first, second, third))
        return empty_args;

    const struct args args = {
        .rd = expect_reg(first),
        .rs1 = expect_reg(second),
        .rs2 = expect_reg(third),
        .sym = NULL,
    };

    free(first);
    free(second);
    free(third);

    logger(DEBUG, no_error, "Registers parsed x%d, x%d, x%d", args.rd,
           args.rs1, args.rs2);

    return args;
}

struct args parse_itype(char *argstr)
{
    logger(DEBUG, no_error, "Parsing arguments for itype instruction %s",
           argstr);

    char *first = trim_arg(argstr);
    char *second = trim_arg(NULL);
    char *third = trim_arg(NULL);

    if (expect_three_args(first, second, third))
        return empty_args;

    const struct args args = {
        .rd = expect_reg(first),
        .rs1 = expect_reg(second),
        .imm = expect_imm(third),
        .sym = NULL,
    };

    free(first);
    free(second);
    free(third);

    logger(DEBUG, no_error, "Registers parsed x%d, x%d, %d", args.rd,
           args.rs1, args.imm);

    return args;
}

struct args parse_ltype(char *argstr)
{
    logger(DEBUG, no_error, "Parsing arguments for itype instruction %s",
           argstr);

    char *first = trim_arg(argstr);
    char *second = trim_arg(NULL);

    if (expect_two_args(first, second))
        return empty_args;

    struct args args = {
        .rd = expect_reg(first),
        .sym = NULL,
    };

    expect_offreg(second, &args.imm, &args.rs1);

    free(first);
    free(second);

    logger(DEBUG, no_error, "Registers parsed x%d, %d(x%d)", args.rd,
           args.imm, args.rs1);

    return args;
}

/*
struct args parse_stype(char *argstr)
{
    logger(DEBUG, no_error, "Parsing arguments for itype instruction %s",
           argstr);

    char *first = trim_arg(argstr);
    char *second = trim_arg(NULL);

    if (expect_two_args(first, second))
        return empty_args;

    struct args args = {
        .rs2 = expect_reg(second),
        .sym = NULL,
    };

    expect_offreg(first, &args.imm, &args.rs1);

    free(first);
    free(second);

    logger(DEBUG, no_error, "Registers parsed %d(x%d), x%d", args.imm,
           args.rs1, args.rs2);

    return args;
}
*/

struct args parse_stype(char *argstr)
{
    logger(DEBUG, no_error, "Parsing arguments for stype instruction %s",
           argstr);

    char *first  = trim_arg(argstr);
    char *second = trim_arg(NULL);

    if (expect_two_args(first, second))
        return empty_args;

    struct args args = {
        .rs2 = expect_reg(first),   // ← 1つ目はソースレジスタ rs2
        .sym = NULL,
    };

    // ← 2つ目は off(reg) 形式（imm と base レジスタ rs1）
    expect_offreg(second, &args.imm, &args.rs1);

    free(first);
    free(second);

    logger(DEBUG, no_error, "Registers parsed x%d -> %d(x%d)",
           args.rs2, args.imm, args.rs1);

    return args;
}

struct args parse_utype(char *argstr)
{
    logger(DEBUG, no_error, "Parsing arguments for utype instruction %s",
           argstr);

    char *first = trim_arg(argstr);
    char *second = trim_arg(NULL);

    if (expect_two_args(first, second))
        return empty_args;

    const struct args args = {
        .rd = expect_reg(first),
        .imm = expect_imm(second),
        .sym = NULL,
    };

    free(first);
    free(second);

    logger(DEBUG, no_error, "Registers parsed x%d, %d", args.rd, args.imm);

    return args;
}

struct args parse_btype(char *argstr)
{
    logger(DEBUG, no_error, "Parsing arguments for jtype instruction %s",
           argstr);

    char *first = trim_arg(argstr);
    char *second = trim_arg(NULL);
    char *third = trim_arg(NULL);

    if (expect_three_args(first, second, third))
        return empty_args;

    const struct args args = {
        .rs1 = expect_reg(first),
        .rs2 = expect_reg(second),
        .sym = get_or_create_symbol(third, SYMBOL_LABEL),
    };

    free(first);
    free(second);
    free(third);

    logger(DEBUG, no_error, "Registers parsed x%d, x%d, %s", args.rs1,
           args.rs2, args.sym->name);

    return args;
}

struct args parse_bztype(char *argstr)
{
    logger(DEBUG, no_error, "Parsing arguments for bztype instruction %s",
           argstr);

    char *first = trim_arg(argstr);
    char *second = trim_arg(NULL);

    if (expect_two_args(first, second))
        return empty_args;

    const struct args args = {
        .rs1 = expect_reg(first),
        .sym = get_or_create_symbol(second, SYMBOL_LABEL),
    };

    free(first);
    free(second);

    logger(DEBUG, no_error, "Registers parsed x%d, %s", args.rs1,
           args.sym->name);

    return args;
}

struct args parse_pseudo(char *argstr)
{
    logger(DEBUG, no_error, "Parsing arguments %s for pseudo instruction",
           argstr);

    char *first = trim_arg(argstr);
    char *second = trim_arg(NULL);

    if (expect_two_args(first, second))
        return empty_args;

    const struct args args = {
        .rd = expect_reg(first),
        .rs1 = expect_reg(second),
        .sym = NULL,
    };

    free(first);
    free(second);

    logger(DEBUG, no_error, "Registers parsed x%d, x%d", args.rd, args.rs1);

    return args;
}

static int parse_fence_arg(const char *arg)
{
    const char *key = "iorw";
    int iorw = 0;
    for (const char *c = key; *c; c++) {
        iorw <<= 1;
        if (*c != *arg)
            continue;
        iorw |= 1;
        arg++;
    }
    if (*arg)
        logger(ERROR, error_instruction_other,
               "expected combination of iorw but encountered '%c' character",
               *arg);
    return iorw;
}

struct args parse_fence(char *argstr)
{
    logger(DEBUG, no_error, "Parsing arguments %s for fence instruction",
           argstr);

    char *first = trim_arg(argstr);
    char *second = trim_arg(NULL);

    if (!first)
        return (struct args){
            .rd = 0x0,
            .rs1 = 0x0,
            .imm = 0xFF,
            .sym = NULL,
        };

    if (strtok(NULL, ","))
        logger(ERROR, error_instruction_other,
               "Instruction has more than two arguments");

    if (!second) {
        logger(ERROR, error_instruction_other,
               "Expected two arguments but got one");
        return empty_args;
    }

    const int predecessor = parse_fence_arg(first);
    const int successor = parse_fence_arg(second);

    free(first);
    free(second);

    return (struct args){
        .rd = 0x0,
        .rs1 = 0x0,
        .imm = (predecessor << 4) | successor,
        .sym = NULL,
    };
}

struct args parse_jal(char *argstr)
{
    logger(DEBUG, no_error, "Parsing arguments for jal instruction %s",
           argstr);

    struct args args = { .rd = 1 };

    char *first = trim_arg(argstr);
    char *second = trim_arg(NULL);
    char *sym = first;

    if (strtok(NULL, ","))
        logger(ERROR, error_instruction_other,
               "Expected at most two arguments");

    if (!first) {
        logger(ERROR, error_invalid_instruction,
               "Expected at least one argument");
        return empty_args;
    }

    if (second) {
        args.rd = expect_reg(first);
        free(first);
        sym = second;
        if (!sym)
            logger(ERROR, error_invalid_instruction,
                   "Expected a second argument");
    }

    args.sym = get_or_create_symbol(sym, SYMBOL_LABEL);
    free(sym);

    logger(DEBUG, no_error, "Registers parsed, x%d, %s", args.rd,
           args.sym->name);

    return args;
}

struct args parse_jalr(char *argstr)
{
    logger(DEBUG, no_error, "Parsing arguments for jalr instruction %s",
           argstr);

    char *first = trim_arg(argstr);
    char *second = trim_arg(NULL);
    char *third = trim_arg(NULL);

    if (strtok(NULL, ","))
        logger(ERROR, error_instruction_other,
               "Instruction has more than three arguments");

    if (!first) {
        logger(DEBUG, error_instruction_other,
               "Expected at least one argument");
        return empty_args;
    }

    const uint8_t rd = expect_reg(first);
    free(first);

    if (!second) {
        logger(DEBUG, no_error, "jalr (pseudo) arguments parsed -> x%d",
               rd);
        return (struct args){
            .rd = 0x1,
            .rs1 = rd,
            .imm = 0,
            .sym = NULL,
        };
    }

    if (!third) {
        logger(ERROR, error_instruction_other,
               "Expected one or three arguments but got two");
        free(second);
        return empty_args;
    }

    const uint8_t rs1 = expect_reg(second);
    const uint32_t imm = expect_imm(third);

    free(second);
    free(third);

    logger(DEBUG, no_error, "jalr arguments parsed x%d x%d %d", rd, rs1,
           imm);

    return (struct args){
        .rd = rd,
        .rs1 = rs1,
        .imm = imm,
        .sym = NULL,
    };
}

struct args parse_la(char *argstr)
{
    logger(DEBUG, no_error, "Parsing arguments %s for la instruction",
           argstr);

    char *first = trim_arg(argstr);
    char *second = trim_arg(NULL);

    if (expect_two_args(first, second))
        return empty_args;

    const struct args args = {
        .rd = expect_reg(first),
        .sym = get_or_create_symbol(second, SYMBOL_LABEL),
    };

    free(first);
    free(second);

    logger(DEBUG, no_error, "Registers parsed x%d x%d", args.rd, args.rs1);

    return args;
}

struct args parse_li(char *argstr)
{
    logger(DEBUG, no_error, "Parsing arguments %s for li instruction",
           argstr);

    char *first = trim_arg(argstr);
    char *second = trim_arg(NULL);

    if (expect_two_args(first, second))
        return empty_args;

    const struct args args = {
        .rd = expect_reg(first),
        .imm = expect_imm(second),
        .sym = NULL,
    };

    free(first);
    free(second);

    logger(DEBUG, no_error, "Registers parsed x%d x%d", args.rd, args.rs1);

    return args;
}

struct args parse_j(char *argstr)
{
    logger(DEBUG, no_error, "Parsing arguments %s for li instruction",
           argstr);

    char *first = trim_arg(argstr);

    if (expect_one_arg(first))
        return empty_args;

    const struct args args = {
        .sym = get_or_create_symbol(first, SYMBOL_LABEL),
    };

    logger(DEBUG, no_error, "Symbol parsed %s", args.sym->name);

    return args;
}

struct args parse_jr(char *argstr)
{
    logger(DEBUG, no_error, "Parsing arguments %s for li instruction",
           argstr);

    char *first = trim_arg(argstr);

    if (expect_one_arg(first))
        return empty_args;

    const struct args args = {
        .rs1 = expect_reg(first),
        .sym = NULL,
    };

    free(first);

    logger(DEBUG, no_error, "Register parsed x%d", args.rs1);

    return args;
}

struct args parse_ftso(char *argstr)
{
    logger(DEBUG, no_error,
           "Parsing arguments for no argument instruction");

    const struct args args = {
        .rd = 0x0,
        .rs1 = 0x0,
        .imm = 0x833,
        .sym = NULL,
    };

    if (!argstr)
        return args;

    for (char *c = argstr; *c; c++)
        if (*c == ',')
            logger(ERROR, error_instruction_other,
                   "Expected zero arguments");

    return args;
}

struct args parse_al(char *argstr)
{
    logger(DEBUG, no_error, "Parsing arguments for itype instruction %s",
           argstr);

    char *first = trim_arg(argstr);
    char *second = trim_arg(NULL);

    if (expect_two_args(first, second))
        return empty_args;

    struct args args = {
        .rd = expect_reg(first),
        .rs2 = 0,
        .sym = NULL,
    };

    expect_offreg(second, &args.imm, &args.rs1);

    if (args.imm)
        logger(ERROR, error_invalid_instruction,
               "Optional integer offset must be zero");

    free(first);
    free(second);

    logger(DEBUG, no_error, "Registers parsed x%d %d(x%d)", args.rd,
           args.imm, args.rs1);

    return args;
}

struct args parse_as(char *argstr)
{
    logger(DEBUG, no_error, "Parsing arguments for itype instruction %s",
           argstr);

    char *first = trim_arg(argstr);
    char *second = trim_arg(NULL);
    char *third = trim_arg(NULL);

    if (expect_three_args(first, second, third))
        return empty_args;

    struct args args = {
        .rd = expect_reg(first),
        .rs2 = expect_reg(second),
    };

    expect_offreg(third, &args.imm, &args.rs1);

    if (args.imm)
        logger(ERROR, error_invalid_instruction,
               "Optional integer offset must be zero");

    free(first);
    free(second);
    free(third);

    logger(DEBUG, no_error, "Registers parsed x%d x%d %d(x%d)", args.rd,
           args.rs2, args.imm, args.rs1);

    return args;
}

struct args parse_csr(char *argstr)
{
    logger(DEBUG, no_error, "Parsing arguments for csr instruction %s",
           argstr);

    char *first = trim_arg(argstr);
    char *second = trim_arg(NULL);
    char *third = trim_arg(NULL);

    if (expect_three_args(first, second, third))
        return empty_args;

    struct args args = {
        .rd = expect_reg(first),
        .imm = expect_csr(second),
        .rs1 = expect_reg(third),
    };

    free(first);
    free(second);
    free(third);

    logger(DEBUG, no_error, "Registers parsed x%d, x%d, 0x%x", args.rd,
           args.rs1, args.imm);

    return args;
}

struct args parse_csri(char *argstr)
{
    logger(DEBUG, no_error, "Parsing arguments for csri instruction %s",
           argstr);

    char *first = trim_arg(argstr);
    char *second = trim_arg(NULL);
    char *third = trim_arg(NULL);

    if (expect_three_args(first, second, third))
        return empty_args;

    struct args args = {
        .rd = expect_reg(first),
        .imm = expect_csr(second),
        .rs1 = (uint8_t)(expect_imm(third) & 0x1F),
    };

    free(first);
    free(second);
    free(third);

    logger(DEBUG, no_error, "Registers parsed x%d, 0x%x, 0xX", args.rd,
           args.rs1, args.imm);

    return args;
}


int is_terminating(char c)
{
    return !c || c == ';' || c == '\n';
}

char *trim_whitespace(const char *str)
{
    const char *start = str;
    while (isspace(*start) && !is_terminating(*start))
        start++;

    const char *end = start;
    while (!is_terminating(*end))
        end++;

    while (isspace(*end) && end > start)
        end--;

    char *newstr = xmalloc((size_t)(end - start + 1));
    memcpy(newstr, start, (size_t)(end - start));
    newstr[end - start] = '\0';

    return newstr;
}


static void die(const char *function)
{
    logger(CRITICAL, error_system, "Call to %s failed", function);
    closefiles();
    exit(1);
}

/*
void *xmalloc(size_t sz)
{
    void *ptr = malloc(sz);
    if (!ptr)
        die("malloc");
    return ptr;
}
*/

/*
void *xcalloc(size_t nitems, size_t size)
{
    void *ptr = calloc(nitems, size);
    if (!ptr)
        die("calloc");
    return ptr;
}
*/

/*
void *xrealloc(void *ptr, size_t size)
{
    ptr = realloc(ptr, size);
    if (!ptr)
        die("xrealloc");
    return ptr;
}
*/


#define MAX_INSTRUCTIONS 2048
#define MAX_DATAITEMS 512

static struct instruction instructions[MAX_INSTRUCTIONS];
static size_t instructions_size = 0;
static struct rawdata dataitems[MAX_DATAITEMS];
static size_t dataitems_size = 0;

int add_instruction(struct instruction ins) {
    if (instructions_size >= MAX_INSTRUCTIONS) {
        logger(ERROR, error_internal, 0,
               "Too many instructions (max %d)", MAX_INSTRUCTIONS);
        return 1;
    }
    instructions[instructions_size++] = ins;
    return 0;
}

int add_data(struct rawdata dataitem)
{
    if (dataitems_size >= MAX_DATAITEMS) {
        logger(ERROR, error_internal, 0,
               "Too many data items (max %d)", MAX_DATAITEMS);
        return 1;
    }
    dataitems[dataitems_size++] = dataitem;
    return 0;
}

int write_all(void)
{
    if (write_all_instructions())
        return 1;
    if (write_all_data())
        return 1;
    return 0;
}

int write_all_instructions(void)
{
    linenumber = 0;
    logger(DEBUG, no_error, "Generating all instruction bytecode...");
    for (size_t i = 0; i < instructions_size; i++) {
        if (write_instruction(instructions[i]))
            return 1;
    }
    return 0;
}

int write_instruction(struct instruction i)
{
    linenumber = i.line;
    logger(DEBUG, no_error,
           "Generating bytecode for %s instruction (offset: %zu)",
           i.formation.name, i.position.offset);
    set_section(i.position.section);

    if (i.args.sym)
        if (i.args.sym->section == SECTION_NULL)
            logger(ERROR, error_unknown, "Symbol %s not found",
                   i.args.sym->name);

    struct bytecode bytecode =
        i.formation.form_handler(i.formation.name, i.formation.idata,
                     i.args, calc_fileoffset(i.position));
    logger(DEBUG, no_error, "Bytecode finished generating");
//    if (bytecode.size != i.formation.idata.sz) {
/*
        printf("bytecode size mismatch: instr=%s declared=%u actual=%u line=%u\n",
               i.formation.name,
               (size_t)i.formation.idata.sz,
               (size_t)bytecode.size,
               (size_t)i.line);
*/
//    }
    if (!bytecode.size) {
        logger(WARN, no_error,
               "No bytecode generated from instruction");
        return 0;
    }
    if (!bytecode.data) {
        logger(ERROR, error_internal, "Received invalid bytecode");
        return 1;
    }
    const size_t sz = (size_t)bytecode.size;
    size_t nwritten =
        write_sectiondata((char *)bytecode.data, sz, i.position);
    free(bytecode.data);
    if (nwritten != sz) {
        logger(CRITICAL, error_system, "Error writing bytes to output");
        return 1;
    }
    return 0;
}

int write_all_data(void)
{
    linenumber = 0;
    logger(DEBUG, no_error, "Writing all data bytes...");
    for (size_t i = 0; i < dataitems_size; i++)
        if (write_data(dataitems[i]))
            return 1;
    return 0;
}
enum sections outputsection = SECTION_TEXT;
static struct section outputsections[SECTION_COUNT] = { { .size = 0,
                              .contents = NULL } };

int write_data(struct rawdata data) {
  linenumber = data.line;
  set_section(data.position.section);

  const void *src = data.data;
  char buf8[8];

  if (data.is_abs64 && data.sym && data.size == 8) {
    // ★ここが肝：対象“シンボルのセクション”の最終ファイルオフセットを使う
    uint64_t sect_off = outputsections[data.sym->section].offset;
    uint64_t v = (uint64_t)(BASE_ADDR + sect_off + (uint64_t)data.sym->value + (uint64_t)data.addend);
    memcpy(buf8, &v, 8);
    src = buf8;
  }

  size_t n = write_sectiondata(src, data.size, data.position);
  free(data.data);
  if (n != data.size) {
    logger(CRITICAL, error_system, "Error writing bytes to output");
    return 1;
  }
  return 0;
}

/*
int write_data(struct rawdata data)
{
    linenumber = data.line;
    logger(DEBUG, no_error, "Writing data (offset: %zu)", data.position.offset);
    set_section(data.position.section);

    const void *src = data.data;
    char buf8[8];

    if (data.is_abs64 && data.sym && data.size == 8) {
        // 最終VMA = BASE_ADDR + セクションのファイルオフセット + セクション内オフセット + addend
        uint64_t sect_off = outputsections[data.sym->section].offset;
        uint64_t v = (uint64_t)(BASE_ADDR + sect_off + (uint64_t)data.sym->value + (uint64_t)data.addend);
        memcpy(buf8, &v, 8);
        src = buf8;
    }

    const size_t written = write_sectiondata(src, data.size, data.position);
    free(data.data);
    if (written != data.size) {
        logger(CRITICAL, error_system, "Error writing bytes to output");
        return 1;
    }
    return 0;
}
*/


void free_instructions(void)
{
    // instructions is now static array, just reset size
    instructions_size = 0;
}

void free_data(void)
{
    // dataitems is now static array, just reset size
    dataitems_size = 0;
}

struct directive {
    const char *name;
    int (*parser)(const char *);
};
struct directive directive_map[] = {
    { ".string", parse_asciz }, { ".asciz", parse_asciz },
    { ".ascii", parse_ascii },  { ".section", parse_section },
    { ".globl", parse_global },
    { ".quad",   parse_quad },   // ★ これを追加
};
struct {
    const char *name;
    enum sections section;
} section_map[] = {
    { ".text", SECTION_TEXT },
    { ".data", SECTION_DATA },
};

static struct directive get_directive(const char *name)
{
    for (unsigned long i = 0; i < ARRAY_LENGTH(directive_map); i++)
        if (!strcmp(name, directive_map[i].name))
            return directive_map[i];
    logger(ERROR, error_invalid_instruction,
           "Unknown directive found with name: %s", name);
    return (struct directive){ NULL, NULL };
}

int parse_quad(const char *arg) {
  char *tok = trim_whitespace((char*)arg);
  if (!tok || !*tok) {
    logger(ERROR, error_invalid_instruction, ".quad needs an operand");
    return 1;
  }

  struct sectionpos pos = get_outputpos();

  // 即値？
  size_t imm;
  if (get_immediate(tok, &imm) == 0) {
    uint64_t v = (uint64_t)imm;
    char *buf = xmalloc(8);
    memcpy(buf, &v, 8);
    add_data((struct rawdata){ .data=buf, .size=8, .position=pos, .line=linenumber,
                               .sym=NULL, .is_abs64=0, .addend=0 });
    inc_outputsize(pos.section, 8);
    return 0;
  }

  // シンボル
  struct symbol *sym = get_or_create_symbol(tok, SYMBOL_LABEL);
  char *zeros = xcalloc(1, 8);
  add_data((struct rawdata){ .data=zeros, .size=8, .position=pos, .line=linenumber,
                             .sym=sym, .is_abs64=1, .addend=0 });
  inc_outputsize(pos.section, 8);
  return 0;
}

int parse_directive(char *line)
{
    char *directivename = line;
    while (!isspace(*line))
        line++;
    if (*line)
        *(line++) = '\0';

    struct directive directive = get_directive(directivename);

    if (directive.parser == NULL)
        return 1;

    char *args = trim_whitespace(line);
    const int result = directive.parser(args);
    free(args);
    return result;
}

static char get_escapedchar(const char **str)
{
    switch (**str) {
    case 'x':
    case 'u': {
        char *end;
        long val = strtol(*str + 1, &end, (**str == 'x') ? 16 : 8);
        if (val >= 256 || val < 0) {
            logger(ERROR, error_invalid_instruction,
                   "Escape sequence out of range");
            return '\0';
        }
        *str = end - 1;
        return (char)val;
    }
    case 'a':
        return '\a';
        break;
    case 'b':
        return '\b';
    case 'f':
        return '\f';
    case 'n':
        return '\n';
    case 'r':
        return '\r';
    case 't':
        return '\t';
    case 'v':
        return '\v';
    case '\\':
        return '\\';
    case '"':
        return '"';
    }
    return '\0';
}

static inline size_t parse_nulltermstr(char *dest, const char *str)
{
    if (*str != '"')
        return (size_t)-1;
    str++;
    size_t size = 0;
    while (*str != '"') {
        register char val = *str;
        if (!val) {
            logger(ERROR, error_invalid_syntax,
                   "Expected '\"' (0x22 double quote) character at start or end of "
                   "ascii string");
            return (size_t)-1;
        }
        if (val == '\\') {
            str++;
            val = get_escapedchar(&str);
        }
        dest[size] = val;
        size++;
        str++;
    }
    dest[size] = '\0';
    size++;
    str++;
    return size;
}

static int parse_ascii_generic(const char *str, bool nullterm)
{
    char *parsed = xmalloc(strlen(str) - 1);
    const size_t size = parse_nulltermstr(parsed, str) - !nullterm;
    if (size == (size_t)-1)
        return 1;
    char *data = xmalloc(size);
    memcpy(data, parsed, size);
    free(parsed);
    const struct sectionpos position = get_outputpos();
    const int res = add_data((struct rawdata){ .data = data,
                           .size = size,
                           .position = position,
                           .line = linenumber });
    inc_outputsize(position.section, size);
    return res;
}
int parse_asciz(const char *str)
{
    return parse_ascii_generic(str, true);
}
int parse_ascii(const char *str)
{
    return parse_ascii_generic(str, false);
}
int parse_section(const char *str)
{
    logger(DEBUG, no_error, "Selecting Section \"%s\"", str);
    for (unsigned long i = 0; i < ARRAY_LENGTH(section_map); i++) {
        if (!strcmp(str, section_map[i].name)) {
            change_output(section_map[i].section);
            return 0;
        }
    }
    logger(WARN, error_invalid_instruction, "Unknown Section \"%s\"", str);
    return 1;
}
int parse_global(const char *str)
{
    struct symbol *sym = get_or_create_symbol(str, SYMBOL_LABEL);
    if (!sym) {
        logger(ERROR, error_internal, "Uknown symbol %s encountered",
               str);
        return 1;
    }
    sym->binding = 0x10;
    return 0;
}


const struct formation rv32a[] = {
    { "lr.w", &form_rtype, &parse_al, { 4, OP_AMO, 0x2, 0x08 } },
    { "lr.w.rl", &form_rtype, &parse_al, { 4, OP_AMO, 0x2, 0x09 } },
    { "lr.w.aq", &form_rtype, &parse_al, { 4, OP_AMO, 0x2, 0x0A } },
    { "lr.w.aqrl", &form_rtype, &parse_al, { 4, OP_AMO, 0x2, 0x0B } },
    { "sc.w", &form_rtype, &parse_as, { 4, OP_AMO, 0x2, 0x0C } },
    { "sc.w.rl", &form_rtype, &parse_as, { 4, OP_AMO, 0x2, 0x0D } },
    { "sc.w.aq", &form_rtype, &parse_as, { 4, OP_AMO, 0x2, 0x0E } },
    { "sc.w.aqrl", &form_rtype, &parse_as, { 4, OP_AMO, 0x2, 0x0F } },

    { "amoswap.w", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x04 } },
    { "amoswap.w.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x05 } },
    { "amoswap.w.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x06 } },
    { "amoswap.w.aqrl",
      &form_rtype,
      &parse_rtype,
      { 4, OP_AMO, 0x2, 0x07 } },
    { "amoadd.w", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x00 } },
    { "amoadd.w.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x01 } },
    { "amoadd.w.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x02 } },
    { "amoadd.w.aqrl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x03 } },
    { "amoxor.w", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x10 } },
    { "amoxor.w.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x12 } },
    { "amoxor.w.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x11 } },
    { "amoxor.w.aqrl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x13 } },
    { "amoor.w", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x20 } },
    { "amoor.w.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x21 } },
    { "amoor.w.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x22 } },
    { "amoor.w.aqrl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x23 } },
    { "amoand.w", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x30 } },
    { "amoand.w.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x31 } },
    { "amoand.w.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x32 } },
    { "amoand.w.aqrl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x33 } },
    { "amomin.w", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x40 } },
    { "amomin.w.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x41 } },
    { "amomin.w.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x42 } },
    { "amomin.w.aqrl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x43 } },
    { "amomax.w", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x50 } },
    { "amomax.w.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x51 } },
    { "amomax.w.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x52 } },
    { "amomax.w.aqrl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x53 } },
    { "amominu.w", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x60 } },
    { "amominu.w.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x61 } },
    { "amominu.w.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x62 } },
    { "amominu.w.aqrl",
      &form_rtype,
      &parse_rtype,
      { 4, OP_AMO, 0x2, 0x63 } },
    { "amomaxu.w", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x70 } },
    { "amomaxu.w.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x71 } },
    { "amomaxu.w.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x72 } },
    { "amomaxu.w.aqrl",
      &form_rtype,
      &parse_rtype,
      { 4, OP_AMO, 0x2, 0x73 } },

    END_FORMATION
};

const struct formation rv64a[] = {
    { "lr.d", &form_rtype, &parse_al, { 4, OP_AMO, 0x3, 0x08 } },
    { "lr.d.rl", &form_rtype, &parse_al, { 4, OP_AMO, 0x3, 0x09 } },
    { "lr.d.aq", &form_rtype, &parse_al, { 4, OP_AMO, 0x3, 0x0A } },
    { "lr.d.aqrl", &form_rtype, &parse_al, { 4, OP_AMO, 0x3, 0x0B } },
    { "sc.d", &form_rtype, &parse_as, { 4, OP_AMO, 0x3, 0x0C } },
    { "sc.d.rl", &form_rtype, &parse_as, { 4, OP_AMO, 0x3, 0x0D } },
    { "sc.d.aq", &form_rtype, &parse_as, { 4, OP_AMO, 0x3, 0x0E } },
    { "sc.d.aqrl", &form_rtype, &parse_as, { 4, OP_AMO, 0x3, 0x0F } },

    { "amoswap.d", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x04 } },
    { "amoswap.d.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x05 } },
    { "amoswap.d.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x06 } },
    { "amoswap.d.aqrl",
      &form_rtype,
      &parse_rtype,
      { 4, OP_AMO, 0x3, 0x07 } },
    { "amoadd.d", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x00 } },
    { "amoadd.d.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x01 } },
    { "amoadd.d.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x02 } },
    { "amoadd.d.aqrl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x03 } },
    { "amoxor.d", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x10 } },
    { "amoxor.d.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x12 } },
    { "amoxor.d.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x11 } },
    { "amoxor.d.aqrl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x13 } },
    { "amoor.d", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x20 } },
    { "amoor.d.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x21 } },
    { "amoor.d.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x22 } },
    { "amoor.d.aqrl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x23 } },
    { "amoand.d", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x30 } },
    { "amoand.d.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x31 } },
    { "amoand.d.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x32 } },
    { "amoand.d.aqrl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x33 } },
    { "amomin.d", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x40 } },
    { "amomin.d.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x41 } },
    { "amomin.d.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x42 } },
    { "amomin.d.aqrl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x43 } },
    { "amomax.d", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x50 } },
    { "amomax.d.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x51 } },
    { "amomax.d.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x52 } },
    { "amomax.d.aqrl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x53 } },
    { "amominu.d", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x60 } },
    { "amominu.d.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x61 } },
    { "amominu.d.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x62 } },
    { "amominu.d.aqrl",
      &form_rtype,
      &parse_rtype,
      { 4, OP_AMO, 0x3, 0x63 } },
    { "amomaxu.d", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x70 } },
    { "amomaxu.d.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x71 } },
    { "amomaxu.d.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x72 } },
    { "amomaxu.d.aqrl",
      &form_rtype,
      &parse_rtype,
      { 4, OP_AMO, 0x3, 0x73 } },

    END_FORMATION
};


/*
 * Clang can correctly optimise fully defined switches over enumerated values.
 * For other compilers, we create an unreachable segment of code, however for
 * clang we do nothing, as clang will raise an error if the switch is ever not
 * fully defined.
 */
#ifdef __clang__
#define FULLY_DEFINED_SWITCH()
#elif defined(__GNUC__)
#define FULLY_DEFINED_SWITCH() __builtin_unreachable()
#elif defined(_MSC_VER)
#define FULLY_DEFINED_SWITCH() __assume(0)
#else
#warning "compiler does not define __GNUC__ and is not MSVC"
#define FULLY_DEFINED_SWITCH() return error_bytecode
#endif

/* TODO: Add HINT instruction support */
const struct formation rv32i[] = {
    { "nop", &form_nop, &parse_none, { 4, OP_OPI, 0, 0 } },

    { "li", &form_load_pseudo, &parse_li, { 8, LOAD_IMM, 0, 0 } },
    { "la", &form_load_pseudo, &parse_la, { 8, LOAD_ADDR, 0, 0 } },

    { "mv", &form_math, &parse_pseudo, { 4, MATH_MV, 0, 0 } },
    { "not", &form_math, &parse_pseudo, { 4, MATH_NOT, 0, 0 } },
    { "neg", &form_math, &parse_pseudo, { 4, MATH_NEG, 0, 0 } },

    { "seqz", &form_setif, &parse_pseudo, { 4, SETIF_EQZ, 0, 0 } },
    { "snez", &form_setif, &parse_pseudo, { 4, SETIF_NEZ, 0, 0 } },
    { "sltz", &form_setif, &parse_pseudo, { 4, SETIF_LTZ, 0, 0 } },
    { "sgtz", &form_setif, &parse_pseudo, { 4, SETIF_GTZ, 0, 0 } },

    { "beqz", &form_branchifz, &parse_bztype, { 4, BRANCHIFZ_EQZ, 0, 0 } },
    { "bnez", &form_branchifz, &parse_bztype, { 4, BRANCHIFZ_NEZ, 0, 0 } },
    { "blez", &form_branchifz, &parse_bztype, { 4, BRANCHIFZ_LEZ, 0, 0 } },
    { "bgez", &form_branchifz, &parse_bztype, { 4, BRANCHIFZ_GEZ, 0, 0 } },
    { "bltz", &form_branchifz, &parse_bztype, { 4, BRANCHIFZ_LTZ, 0, 0 } },
    { "bgtz", &form_branchifz, &parse_bztype, { 4, BRANCHIFZ_GTZ, 0, 0 } },
    { "bgt", &form_branchifr, &parse_btype, { 4, BRANCHIFR_GT, 0, 0 } },
    { "ble", &form_branchifr, &parse_btype, { 4, BRANCHIFR_LE, 0, 0 } },
    { "bgtu", &form_branchifr, &parse_btype, { 4, BRANCHIFR_GTU, 0, 0 } },
    { "bleu", &form_branchifr, &parse_btype, { 4, BRANCHIFR_LEU, 0, 0 } },

    { "j", &form_jump, &parse_j, { 4, JUMP_J, 0, 0 } },
    { "jr", &form_jump, &parse_jr, { 4, JUMP_JR, 0, 0 } },
    { "ret", &form_jump, &parse_none, { 4, JUMP_RET, 0, 0 } },

    { "fence.tso", &form_itype, &parse_ftso, { 4, OP_MISC_MEM, 0x0, 0 } },

    { "add", &form_rtype, &parse_rtype, { 4, OP_OP, 0x0, 0x00 } },
    { "addi", &form_itype, &parse_itype, { 4, OP_OPI, 0x0, 0 } },
    { "sub", &form_rtype, &parse_rtype, { 4, OP_OP, 0x0, 0x20 } },
    { "and", &form_rtype, &parse_rtype, { 4, OP_OP, 0x7, 0x00 } },
    { "andi", &form_itype, &parse_itype, { 4, OP_OPI, 0x7, 0 } },
    { "or", &form_rtype, &parse_rtype, { 4, OP_OP, 0x6, 0x00 } },
    { "ori", &form_itype, &parse_itype, { 4, OP_OPI, 0x6, 0 } },
    { "xor", &form_rtype, &parse_rtype, { 4, OP_OP, 0x4, 0x00 } },
    { "xori", &form_itype, &parse_itype, { 4, OP_OPI, 0x4, 0 } },
    { "sll", &form_rtype, &parse_rtype, { 4, OP_OP, 0x1, 0x00 } },
    { "srl", &form_rtype, &parse_rtype, { 4, OP_OP, 0x5, 0x00 } },
    { "sra", &form_rtype, &parse_rtype, { 4, OP_OP, 0x5, 0x20 } },
    { "slt", &form_rtype, &parse_rtype, { 4, OP_OP, 0x2, 0x00 } },
    { "slti", &form_itype, &parse_itype, { 4, OP_OPI, 0x2, 0 } },
    { "sltu", &form_rtype, &parse_rtype, { 4, OP_OP, 0x3, 0x00 } },
    { "sltiu", &form_itype, &parse_itype, { 4, OP_OPI, 0x3, 0 } },

    { "beq", &form_btype, &parse_btype, { 4, OP_BRANCH, 0x0, 0 } },
    { "bne", &form_btype, &parse_btype, { 4, OP_BRANCH, 0x1, 0 } },
    { "bge", &form_btype, &parse_btype, { 4, OP_BRANCH, 0x5, 0 } },
    { "bgeu", &form_btype, &parse_btype, { 4, OP_BRANCH, 0x7, 0 } },
    { "blt", &form_btype, &parse_btype, { 4, OP_BRANCH, 0x4, 0 } },
    { "bltu", &form_btype, &parse_btype, { 4, OP_BRANCH, 0x6, 0 } },

    { "jal", &form_jtype, &parse_jal, { 4, OP_JAL, 0, 0 } },
    { "jalr", &form_itype, &parse_jalr, { 4, OP_JALR, 0x0, 0 } },

    { "ecall", &form_syscall, &parse_none, { 4, OP_SYSTEM, 0x0, 0x000 } },
    { "ebreak", &form_syscall, &parse_none, { 4, OP_SYSTEM, 0x0, 0x001 } },

    { "lb", &form_itype, &parse_ltype, { 4, OP_LOAD, 0x0, 0 } },
    { "lh", &form_itype, &parse_ltype, { 4, OP_LOAD, 0x1, 0 } },
    { "lw", &form_itype, &parse_ltype, { 4, OP_LOAD, 0x2, 0 } },
    { "lbu", &form_itype, &parse_ltype, { 4, OP_LOAD, 0x4, 0 } },
    { "lhu", &form_itype, &parse_ltype, { 4, OP_LOAD, 0x5, 0 } },

    { "sb", &form_stype, &parse_stype, { 4, OP_STORE, 0x0, 0 } },
    { "sh", &form_stype, &parse_stype, { 4, OP_STORE, 0x1, 0 } },
    { "sw", &form_stype, &parse_stype, { 4, OP_STORE, 0x2, 0 } },

    { "lui", &form_utype, &parse_utype, { 4, OP_LUI, 0, 0 } },
    { "auipc", &form_utype, &parse_utype, { 4, OP_AUIPC, 0, 0 } },

    { "fence", &form_itype, &parse_fence, { 4, OP_MISC_MEM, 0x0, 0 } },

    END_FORMATION
};

const struct formation rv64i[] = {
    { "negw", &form_math, &parse_pseudo, { 4, MATH_NEGW, 0, 0 } },
    { "sext.w", &form_math, &parse_pseudo, { 4, MATH_SEXTW, 0, 0 } },

    { "addw", &form_rtype, &parse_rtype, { 4, OP_OP32, 0x0, 0x00 } },
    { "addiw", &form_itype, &parse_itype, { 4, OP_OPI32, 0x0, 0 } },
    { "subw", &form_rtype, &parse_rtype, { 4, OP_OP32, 0x0, 0x20 } },

    { "slli", &form_itype, &parse_itype, { 4, OP_OPI, 0x1, 0x00 } },
    { "sllw", &form_rtype, &parse_rtype, { 4, OP_OP32, 0x1, 0x00 } },
    { "slliw", &form_itype, &parse_itype, { 4, OP_OPI32, 0x0, 0x00 } },
    { "srli", &form_itype, &parse_itype, { 4, OP_OPI, 0x5, 0x00 } },
    { "srlw", &form_rtype, &parse_rtype, { 4, OP_OP32, 0x5, 0x00 } },
    { "srliw", &form_itype, &parse_itype, { 4, OP_OPI32, 0x5, 0 } },
    { "srai", &form_itype2, &parse_itype, { 4, OP_OPI, 0x5, 0 } },
    { "sraw", &form_rtype, &parse_rtype, { 4, OP_OP32, 0x5, 0x20 } },
    { "sraiw", &form_itype2, &parse_itype, { 4, OP_OPI32, 0x5, 0 } },

    { "lwu", &form_itype, &parse_ltype, { 4, OP_LOAD, 0x6, 0 } },
    { "ld", &form_itype, &parse_ltype, { 4, OP_LOAD, 0x3, 0 } },
    { "sd", &form_stype, &parse_stype, { 4, OP_STORE, 0x3, 0 } },
{ "lwu", &form_itype, &parse_itype, { 4, OP_LOAD,     0x6, 0 } },
{ "ld",  &form_itype, &parse_itype, { 4, OP_LOAD,     0x3, 0 } },
{ "sd",  &form_stype, &parse_stype, { 4, OP_STORE,    0x3, 0 } },

// ▼ここから追加（FP）
{ "fld", &form_itype, &parse_fltype, { 4, OP_LOAD_FP,  0x3, 0 } }, // 64bit浮動ロード
{ "fsd", &form_stype, &parse_fstype, { 4, OP_STORE_FP, 0x3, 0 } }, // 64bit浮動ストア

    END_FORMATION
};

struct bytecode form_syscall(const char *name, struct idata instruction,
                 struct args args, size_t position)
{
    (void)args;
    (void)position;
    logger(DEBUG, no_error, "Generating syscall %s", name);

    const uint32_t opcode = instruction.opcode;
    const uint32_t funct3 = instruction.funct3;
    const uint32_t funct7 = instruction.funct7;

    assert(instruction.sz == 4);

    struct bytecode res = {
        .size = 4,
        .data = xmalloc(4),
    };
    *(uint32_t *)res.data = opcode | (funct3 << 12) | (funct7 << 20);
    return res;
}

struct bytecode form_nop(const char *name, struct idata instruction,
             struct args args, size_t position)
{
    (void)args;
    (void)position;
    logger(DEBUG, no_error, "Generating nop instruction %s", name);

    return form_itype(name, instruction,
              (struct args){ .rd = 0, .rs1 = 0, .imm = 0 },
              position);
}

int32_t calc_symbol_offset(const struct symbol *sym, size_t position);
int64_t calc_symbol_offset64(const struct symbol *sym, size_t position_fileoff);

struct bytecode form_load_pseudo(const char *name, struct idata instruction,
                 struct args args, size_t position)
{
    logger(DEBUG, no_error, "Generating load instruction %s", name);

    enum load_pseudo type = instruction.opcode;
    uint8_t rd = args.rd;

    uint8_t opcode;
    uint64_t value;
    switch (type) {
    case LOAD_IMM:
        opcode = OP_LUI;
        value = args.imm;
        break;
    case LOAD_ADDR:
        opcode = OP_AUIPC;
        value = (uint64_t)calc_symbol_offset64(args.sym, position);
        break;
    default:
        UNREACHABLE();
#ifdef NO_UNREACHABLE
        /* ensure warnings aren't emitted if the UNREACHABLE hint
         * can't be defined */
        opcode = 0;
        value = 0;
        break;
#endif
    }

    logger(DEBUG, no_error, "Load psuedoinstruction has value %ld", value);

    const char *uppernames[] = { "lui (li)", "auipc (la)" };
    const char *lowernames[] = { "addi (li)", "addi (la)" };

    // delta を 64bit で計算
    int64_t hi20 = (value + 0x800) >> 12;           // 12bit境界で繰上げ
    int32_t lo12 = (int32_t)(value - (hi20 << 12)); // -2048..+2047 に収まる

    // U-type の即値は [31:12] に入るので 12bit 左シフトした“整列値”を渡す
    uint32_t u_imm = (uint32_t)(hi20 << 12);

    struct bytecode upper = form_utype(uppernames[type],
                        (struct idata){ 4, opcode, 0, 0 },
                        (struct args){
                            .rd  = rd,
                            .imm = (int32_t)u_imm,   // U-type: 下位12bitは0のまま
                        },
                        position);

    struct bytecode lower = form_itype(lowernames[type],
                        (struct idata){ 4, OP_OPI, 0x0, 0 },
                        (struct args){
                            .rd  = rd,
                            .rs1 = rd,
                            .imm = lo12,            // I-type: 符号付き12bit
                        },
                        position + 4);

    unsigned char *data = malloc(upper.size + lower.size);
    memcpy(data, upper.data, upper.size);
    memcpy(data + upper.size, lower.data, lower.size);
    free(upper.data);
    free(lower.data);

    return (struct bytecode){
        .size = upper.size + lower.size,
        .data = data,
    };
}

struct bytecode form_math(const char *name, struct idata instruction,
              struct args args, size_t position)
{
    logger(DEBUG, no_error, "Generating math instruction %s", name);

    const enum math_pseudo type = instruction.opcode;
    // op rd, rs1
    switch (type) {
    case MATH_MV: // addi rd, rs, 0
        args.imm = 0;
        return form_itype("mv (addi)",
                  (struct idata){ 4, OP_OPI, 0x0, 0 }, args,
                  position);
    case MATH_NOT: // xori rd, rs, -1
        args.imm = (uint32_t)-1;
        return form_itype("not (xori)",
                  (struct idata){ 4, OP_OPI, 0x4, 0 }, args,
                  position);
    case MATH_NEG: // sub rd, x0, rs
        args.rs2 = args.rs1;
        args.rs1 = 0;
        return form_rtype("neg (sub)",
                  (struct idata){ 4, OP_OP, 0x0, 0x20 }, args,
                  position);
    case MATH_NEGW: // subw rd, x0, rs
        args.rs2 = args.rs1;
        args.rs1 = 0;
        return form_rtype("neg (sub)",
                  (struct idata){ 4, OP_OP32, 0x0, 0x20 }, args,
                  position);
    case MATH_SEXTW: // addiw rd, rs, 0
        args.imm = 0;
        return form_itype("sextw (addiw)",
                  (struct idata){ 4, OP_OPI32, 0x0, 0 }, args,
                  position);
    }
    FULLY_DEFINED_SWITCH();
}

struct bytecode form_setif(const char *name, struct idata instruction,
               struct args args, size_t position)
{
    logger(DEBUG, no_error, "Generating conditional set intruction %s",
           name);
    const enum setif_pseudo type = instruction.opcode;
    // op rd, rs1
    switch (type) {
    case SETIF_EQZ: // sltiu rd, rs, 1
        args.imm = 1;
        return form_itype("sltiu (snez)",
                  (struct idata){ 4, OP_OPI, 0x3, 0x00 }, args,
                  position);
    case SETIF_NEZ: // sltu rd, x0, rs
        args.rs2 = args.rs1;
        args.rs1 = 0;
        return form_rtype("sltu (snez)",
                  (struct idata){ 4, OP_OP, 0x3, 0x00 }, args,
                  position);
    case SETIF_LTZ: // slt rd, rs, x0
        args.rs2 = 0;
        return form_rtype("slt (sltz)",
                  (struct idata){ 4, OP_OP, 0x2, 0x00 }, args,
                  position);
    case SETIF_GTZ: // slt rd, x0, rs
        args.rs2 = args.rs1;
        args.rs1 = 0;
        return form_rtype("slt (sgtz)",
                  (struct idata){ 4, OP_OP, 0x2, 0x00 }, args,
                  position);
    }
    FULLY_DEFINED_SWITCH();
}

struct bytecode form_branchifz(const char *name, struct idata instruction,
                   struct args args, size_t position)
{
    logger(DEBUG, no_error, "Generating conditional branch intruction %s",
           name);
    const enum branchifz_pseudo type = instruction.opcode;
    // op rs1, offset
    switch (type) {
    case BRANCHIFZ_EQZ: // beq rs, x0, offset
        args.rs2 = 0;
        return form_btype("beq (beqz)",
                  (struct idata){ 4, OP_BRANCH, 0x0, 0 }, args,
                  position);
    case BRANCHIFZ_NEZ: // bne rs, x0, offset
        args.rs2 = 0;
        return form_btype("bne (bnez)",
                  (struct idata){ 4, OP_BRANCH, 0x1, 0 }, args,
                  position);
    case BRANCHIFZ_LEZ: // bge x0, rs, offset
        args.rs2 = args.rs1;
        args.rs1 = 0;
        return form_btype("bge (blez)",
                  (struct idata){ 4, OP_BRANCH, 0x5, 0 }, args,
                  position);
    case BRANCHIFZ_GEZ: // bge rs, x0, offset
        args.rs2 = 0;
        return form_btype("bge (blez)",
                  (struct idata){ 4, OP_BRANCH, 0x5, 0 }, args,
                  position);
    case BRANCHIFZ_LTZ: // blt rs, x0, offset
        args.rs2 = 0;
        return form_btype("bge (blez)",
                  (struct idata){ 4, OP_BRANCH, 0x4, 0 }, args,
                  position);
    case BRANCHIFZ_GTZ: // blt x0, rs, offset
        args.rs2 = args.rs1;
        args.rs1 = 0;
        return form_btype("bge (blez)",
                  (struct idata){ 4, OP_BRANCH, 0x4, 0 }, args,
                  position);
    }
    FULLY_DEFINED_SWITCH();
}

struct bytecode form_branchifr(const char *name, struct idata instruction,
                   struct args args, size_t position)
{
    logger(DEBUG, no_error, "Generating conditional branch intruction %s",
           name);
    const enum branchifr_pseudo type = instruction.opcode;

    const uint8_t rs1 = args.rs1;
    args.rs1 = args.rs2;
    args.rs2 = rs1;

    const uint8_t funct3 = (uint8_t)(type);
    const char *names[] = { "blt (bgt)", "bge (ble)", "bltu (bgtu)",
                "bgeu (bleu)" };
    return form_btype(names[type - BRANCHIFR_GT],
              (struct idata){ 4, OP_BRANCH, funct3, 0 }, args,
              position);
}

struct bytecode form_jump(const char *name, struct idata instruction,
              struct args args, size_t position)
{
    logger(DEBUG, no_error, "Generating unconditional jump intruction %s",
           name);
    const enum jump_pseudo type = instruction.opcode;
    switch (type) {
    case JUMP_J:
        args.rd = 0;
        return form_jtype("jal (j)", (struct idata){ 4, OP_JAL, 0, 0 },
                  args, position);
    case JUMP_RET:
        args.rs1 = 1;
        // fall through
    case JUMP_JR:
        args.rd = 0;
        args.imm = 0;
        return form_itype("jalr (jr)",
                  (struct idata){ 4, OP_JALR, 0x0, 0 }, args,
                  position);
    }
    FULLY_DEFINED_SWITCH();
}

const struct formation zicsr[] = {
    { "csrrw", &form_itype, &parse_csr, { 4, OP_SYSTEM, 0x1, 0 } },
    { "csrrs", &form_itype, &parse_csr, { 4, OP_SYSTEM, 0x2, 0 } },
    { "csrrc", &form_itype, &parse_csr, { 4, OP_SYSTEM, 0x3, 0 } },
    { "csrrwi", &form_itype, &parse_csri, { 4, OP_SYSTEM, 0x5, 0 } },
    { "csrrsi", &form_itype, &parse_csri, { 4, OP_SYSTEM, 0x6, 0 } },
    { "csrrci", &form_itype, &parse_csri, { 4, OP_SYSTEM, 0x7, 0 } },

    END_FORMATION
};


const struct formation zifencei[] = {
    { "fence.i", &form_itype, &parse_none, { 4, OP_MISC_MEM, 0x1, 0 } },

    END_FORMATION
};


const struct bytecode error_bytecode = { .size = (size_t)-1, .data = NULL };

int32_t calc_symbol_offset(const struct symbol *sym, size_t position)
{
    const size_t sympos = calc_fileoffset((struct sectionpos){
        .section = sym->section,
        .offset = sym->value,
    });
    return (int32_t)(sympos - position);
}

int64_t calc_symbol_offset64(const struct symbol *sym, size_t position_fileoff) {
    // シンボルの“出力ファイル内オフセット”を求める
    uint64_t sym_fileoff = calc_fileoffset((struct sectionpos){
        .section = sym->section,
        .offset  = sym->value,
    });

    // VMA = BASE_ADDR + fileoff
    uint64_t target_vma = BASE_ADDR + sym_fileoff;
    uint64_t ref_vma    = BASE_ADDR + (uint64_t)position_fileoff;

    // 64bit差分（PC-relative の delta）
    return (int64_t)target_vma - (int64_t)ref_vma;
}

struct bytecode form_empty_bytecode(void)
{
    logger(DEBUG, no_error, "Generating empty bytecode");
    return (struct bytecode){ .size = 0, .data = NULL };
}

struct bytecode form_rtype(const char *name, struct idata instruction,
               struct args args, size_t position)
{
    (void)position;
    logger(DEBUG, no_error, "Generating R type instruction %s", name);

    const uint32_t opcode = instruction.opcode;
    const uint32_t rd = args.rd;
    const uint32_t funct3 = instruction.funct3;
    const uint32_t rs1 = args.rs1;
    const uint32_t rs2 = args.rs2;
    const uint32_t funct7 = instruction.funct7;

    assert(instruction.sz == 4);

    struct bytecode res = {
        .size = 4,
        .data = xmalloc(4),
    };
    *(uint32_t *)res.data = opcode | (rd << 7) | (funct3 << 12) |
                (rs1 << 15) | (rs2 << 20) | (funct7 << 25);
    return res;
}

struct bytecode form_itype(const char *name, struct idata instruction,
               struct args args, size_t position)
{
    (void)position;
    logger(DEBUG, no_error, "Generating I type instruction %s", name);

    const uint32_t opcode = instruction.opcode;
    const uint32_t rd = args.rd;
    const uint32_t funct3 = instruction.funct3;
    const uint32_t rs1 = args.rs1;
    const uint32_t imm_11_0 = args.imm & 0xFFF;

    assert(instruction.sz == 4);

    struct bytecode res = {
        .size = 4,
        .data = xmalloc(4),
    };
    *(uint32_t *)res.data = opcode | (rd << 7) | (funct3 << 12) |
                (rs1 << 15) | (imm_11_0 << 20);
    return res;
}

struct bytecode form_itype2(const char *name, struct idata instruction,
                struct args args, size_t position)
{
    logger(DEBUG, no_error, "Generating I type 2 instruction %s", name);
    struct bytecode res = form_itype(name, instruction, args, position);
    *(uint32_t *)res.data |= 0x40000000; /* set type 2 bit */
    return res;
}

struct bytecode form_stype(const char *name, struct idata instruction,
               struct args args, size_t position)
{
    (void)position;
    logger(DEBUG, no_error, "Generating S type instruction %s", name);

    const uint32_t opcode = instruction.opcode;
    const uint32_t imm_4_0 = args.imm & 0x1F;
    const uint32_t funct3 = instruction.funct3;
    const uint32_t rs1 = args.rs1;
    const uint32_t rs2 = args.rs2;
    const uint32_t imm_11_5 = (args.imm >> 5) & 0x7F;

    assert(instruction.sz == 4);

    struct bytecode res = {
        .size = 4,
        .data = xmalloc(4),
    };
    *(uint32_t *)res.data = opcode | (imm_4_0 << 7) | (funct3 << 12) |
                (rs1 << 15) | (rs2 << 20) | (imm_11_5 << 25);
    return res;
}

struct bytecode form_btype(const char *name, struct idata instruction,
               struct args args, size_t position)
{
    (void)position;
    logger(DEBUG, no_error, "Generating B type instruction %s", name);

    if (args.sym->type != SYMBOL_LABEL)
        logger(ERROR, error_invalid_syntax,
               "Incorrect argument types for instruction %s."
               " Expected label, but got a different symbol",
               args.sym->name);

    const uint32_t offset =
        (uint32_t)calc_symbol_offset(args.sym, position);
    const uint32_t opcode = instruction.opcode;
    const uint32_t imm_11 = (offset >> 11) & 0x1;
    const uint32_t imm_4_1 = (offset >> 1) & 0xF;
    const uint32_t funct3 = instruction.funct3;
    const uint32_t rs1 = args.rs1;
    const uint32_t rs2 = args.rs2;
    const uint32_t imm_10_5 = (offset >> 5) & 0x3F;
    const uint32_t imm_12 = (offset >> 12) & 0x1;

    logger(DEBUG, no_error, "B type instruction has offset of 0x%x",
           offset);

    assert(instruction.sz == 4);

    struct bytecode res = {
        .size = 4,
        .data = xmalloc(4),
    };
    *(uint32_t *)res.data = opcode | (imm_11 << 7) | (imm_4_1 << 8) |
                (funct3 << 12) | (rs1 << 15) | (rs2 << 20) |
                (imm_10_5 << 25) | (imm_12 << 31);
    return res;
}

struct bytecode form_utype(const char *name, struct idata instruction,
               struct args args, size_t position)
{
    (void)position;
    logger(DEBUG, no_error, "Generating U type instruction %s", name);

    const uint32_t opcode = instruction.opcode;
    const uint32_t rd = args.rd & 0x1F;
    const uint32_t imm_12_31 = (args.imm >> 12) & 0xFFFFF;

    assert(instruction.sz == 4);

    struct bytecode res = {
        .size = 4,
        .data = xmalloc(4),
    };
    *(uint32_t *)res.data = opcode | (rd << 7) | (imm_12_31 << 12);
    return res;
}

struct bytecode form_jtype(const char *name, struct idata instruction,
               struct args args, size_t position)
{
    (void)position;
    logger(DEBUG, no_error, "Generating J type instruction %s", name);

    int32_t offset = calc_symbol_offset(args.sym, position);
    logger(DEBUG, no_error, "Offset of J type instruction is 0x%x", offset);

    const uint32_t opcode = instruction.opcode;
    const uint32_t rd = args.rd & 0x1F;
    const uint32_t imm_19_12 = (offset >> 12) & 0xFF;
    const uint32_t imm_11 = (offset >> 11) & 0x1;
    const uint32_t imm_10_1 = (offset >> 1) & 0x3FF;
    const uint32_t imm_20 = (offset >> 20) & 0x1;

    assert(instruction.sz == 4);

    struct bytecode res = {
        .size = 4,
        .data = xmalloc(4),
    };
    *(uint32_t *)res.data = opcode | (rd << 7) | (imm_19_12 << 12) |
                (imm_11 << 20) | (imm_10_1 << 21) |
                (imm_20 << 31);
    return res;
}


struct formation parse_form(const char *instruction)
{
    logger(DEBUG, no_error, "Getting formation for instruction %s",
           instruction);

    const struct formation *sets[] = {
        rv32i, rv64i, rv32a, rv64a, zicsr, zifencei,
    };
    for (size_t i = 0; i < ARRAY_LENGTH(sets); i++) {
        while (sets[i]->name) {
            if (!strcmp(instruction, sets[i]->name))
                return *sets[i];
            sets[i]++;
        }
    }

    logger(ERROR, error_invalid_instruction,
           "Unknown assembly instruction - %s\n", instruction);
    return (struct formation)END_FORMATION;
}


#define ELF_IDENT                                                         \
    0x7f, 0x45, 0x4c, 0x46, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, \
        0x00, 0x00, 0x00, 0x00, 0x00

struct elf64header new_elf64header(void)
{
    return (struct elf64header){
        .ident = { ELF_IDENT },
        .type = 0x02, /* ET_EXEC(excutable) */
        .machine = 0xF3, /* RISC-V */
        .version = 1, /* ELF version 1 */
        .flags = 0x0004, /* RISC-V float abi double flag */
        .headersize = sizeof(struct elf64header),
    };
}

struct elf64sectionheader new_elf64sectionheader(void)
{
    return (struct elf64sectionheader){
        .size = sizeof(struct elf64sectionheader),
        .addr = 0x0,
    };
}


enum sectiontypes_e {
    SHT_NULL = 0x0,
    SHT_PROGBITS = 0x1,
    SHT_SYMTAB = 0x2,
    SHT_STRTAB = 0x3,
};


static struct {
    uint64_t flags;
    uint32_t link;
    uint32_t info;
    uint64_t align;
    uint64_t entrysize;
    uint32_t type;
} sectiondata[SECTION_COUNT] = {
    { 0x00, 0x0, 0x0, 0x1, 0x0, SHT_NULL },
    { 0x00, 0x0, 0x0, 0x1, 0x0, SHT_STRTAB }, // .strtab
    { 0x06, 0x0, 0x0, 0x4, 0x0, SHT_PROGBITS }, // .text
    { 0x03, 0x0, 0x0, 0x1, 0x0, SHT_PROGBITS }, // .data
    { 0x00, 0x1, 0x0, 0x8, 0x18, SHT_SYMTAB }, // .symtab
};

static const char *sectionnames[SECTION_COUNT] = {
    "", ".strtab", ".text", ".data", ".symtab",
};

void change_output(enum sections section)
{
    if (section >= SECTION_COUNT || section < 0)
        return;
    outputsection = section;
}

struct sectionpos get_outputpos(void)
{
    return (struct sectionpos){
        .section = outputsection,
        .offset = outputsections[outputsection].size
    };
}

void inc_outputsize(enum sections section, size_t amount)
{
    outputsections[section].size += amount;
}

void set_section(enum sections section)
{
    outputsection = section;
}

size_t calc_fileoffset(struct sectionpos a)
{
    return outputsections[a.section].offset + a.offset;
}

static inline size_t align_offset(size_t offset, size_t align)
{
    offset--;
    offset /= align;
    offset++;
    offset *= align;
    return offset;
}

void calc_strtab(void)
{
    outputsections[SECTION_STRTAB].size = 0;
    for (int i = 0; i < SECTION_COUNT; i++)
        outputsections[SECTION_STRTAB].size +=
            strlen(sectionnames[i]) + 1;
    outputsections[SECTION_STRTAB].size += calc_symtab_str_buf_size();
}

int fill_strtab(void)
{
    const size_t symtab_strings_sz = calc_symtab_str_buf_size();
    char *symtab_strings = create_symtab_str_buf(symtab_strings_sz);
    const size_t count =
        write_sectiondata(symtab_strings, symtab_strings_sz,
                  (struct sectionpos){
                      .section = SECTION_STRTAB,
                      .offset = 0,
                  });
    free(symtab_strings);
    if (count != symtab_strings_sz) {
        logger(ERROR, error_internal,
               "Unable to write data to memory for section .strtab");
        return 1;
    }
    size_t offset = count;
    for (int i = 0; i < SECTION_COUNT; i++) {
        const size_t sz = strlen(sectionnames[i]) + 1;
        const size_t written =
            write_sectiondata(sectionnames[i], sz,
                      (struct sectionpos){
                          .section = SECTION_STRTAB,
                          .offset = offset,
                      });
        if (sz != written) {
            logger(ERROR, error_internal,
                   "Unable to write data to memory for section .strtab");
            return 1;
        }
        outputsections[i].nameoffset = (uint32_t)offset;
        offset += sz;
    }
    return 0;
}

void calc_symtab(void)
{
    size_t sz = 0;
    for (size_t hash = 0; hash < SYMBOLMAP_ENTRIES; hash++)
        sz += symbols[hash].count;
    outputsections[SECTION_SYMTAB].size =
        (sz + 1) * sizeof(struct elf64sym);
    sectiondata[SECTION_SYMTAB].info = (uint32_t)sz;
}

int fill_symtab(void)
{
    const struct elf64sym blank = (struct elf64sym){ 0, 0, 0, 0, 0, 0 };
    write_sectiondata(&blank, sizeof(blank),
              (struct sectionpos){ .section = SECTION_SYMTAB,
                           .offset = 0 });
    uint32_t strtab_addr = 1;
    size_t count = 1;
    for (size_t hash = 0; hash < SYMBOLMAP_ENTRIES; hash++) {
        for (size_t index = 0; index < symbols[hash].count; index++) {
            const struct symbol *sym = &symbols[hash].data[index];
            struct elf64sym entry = (struct elf64sym){
                .name = strtab_addr,
                .info = sym->binding,
                .other = 0, /* TODO: add other attributes */
                .shndx = (uint16_t)sym->section,
                .value = (uint64_t)sym->value,
                .size = 0, /* TODO: support for symbol sizes? */
            };
            write_sectiondata(
                &entry, sizeof(entry),
                (struct sectionpos){ .section = SECTION_SYMTAB,
                             .offset = count *
                                   sizeof(entry) });
            strtab_addr += (uint32_t)sym->name_sz;
            count++;
        }
    }
    return 0;
}

int alloc_output(void)
{
    size_t offset = sizeof(struct elf64header);
    for (int i = 0; i < SECTION_COUNT; i++) {
    if(outputsections[i].size == 0) {
    }
    else {
        outputsections[i].contents = xmalloc(outputsections[i].size);
        logger(DEBUG, no_error, "%d bytes allocated to section (%p)",
               outputsections[i].size, outputsections[i].contents);
        offset = align_offset(offset, sectiondata[i].align);
        outputsections[i].offset = offset;
        offset += outputsections[i].size;
    }
    }
    outputsections[SECTION_NULL].offset = 0x0;
    return 0;
}

size_t write_sectiondata(const void *bytes, size_t count,
             struct sectionpos position)
{
    logger(DEBUG, no_error, "writing %d bytes to section %s",
           position.section, sectionnames[position.section]);
    if (position.offset + count > outputsections[position.section].size) {
        logger(CRITICAL, error_internal,
               "Too many bytes for allowed size (requested end: %d, allocated: %d)",
               position.offset + count,
               outputsections[position.section].size);
        return 0;
    }
    char *dest =
        outputsections[position.section].contents + position.offset;
    memcpy(dest, bytes, count);
    return count;
}

struct elfsym {
    uint32_t name;       // シンボル名 (文字列テーブルへのインデックス)
    uint8_t  info;       // シンボルの種類とバインディング属性
    uint8_t  other;      // 予約
    uint16_t shndx;      // 関連するセクションのインデックス
    uint64_t value;      // シンボルの値 (アドレスなど)
    uint64_t size;       // シンボルのサイズ
};

int flush_output(FILE *elf)
{
    logger(DEBUG, no_error, "Writing ELF output to file");

    // ===== ELF ヘッダ雛形 =====
    struct elf64header elfheader = new_elf64header();
    elfheader.type        = 0x02; /* ET_EXEC */
    elfheader.shentrysize = sizeof(struct elf64sectionheader);
    elfheader.shcount     = SECTION_COUNT;
    
    // as.c の初期化（flush_output でオフセット計算する“前”にやる）
    outputsections[SECTION_SHSTRTAB].contents = (void*)shstrtab_bytes;
    outputsections[SECTION_SHSTRTAB].size     = sizeof(shstrtab_bytes) - 1; // 末尾NULは書かない

    outputsections[SECTION_NULL].nameoffset      = SHSTR_OFF_EMPTY;
    outputsections[SECTION_TEXT].nameoffset      = SHSTR_OFF_TEXT;
    outputsections[SECTION_DATA].nameoffset      = SHSTR_OFF_DATA;
    outputsections[SECTION_SYMTAB].nameoffset    = SHSTR_OFF_SYMTAB;
    outputsections[SECTION_STRTAB].nameoffset    = SHSTR_OFF_STRTAB;
    outputsections[SECTION_SHSTRTAB].nameoffset  = SHSTR_OFF_SHSTRTAB;

    // ===== セクションヘッダ雛形を sectiondata/outputsections から作る =====
    struct elf64sectionheader sectionheaders[SECTION_COUNT];
    for (int i = 0; i < SECTION_COUNT; i++) {
        sectionheaders[i] = new_elf64sectionheader();

        sectionheaders[i].type       = sectiondata[i].type;
        sectionheaders[i].flags      = sectiondata[i].flags;
        sectionheaders[i].link       = sectiondata[i].link;
        sectionheaders[i].info       = sectiondata[i].info;
        sectionheaders[i].addralign  = sectiondata[i].align;
        sectionheaders[i].entrysize  = sectiondata[i].entrysize;

        sectionheaders[i].name       = outputsections[i].nameoffset;
        sectionheaders[i].size       = outputsections[i].size;
        sectionheaders[i].offset     = outputsections[i].offset; /* この後で最終決定 */
    }

    // ===== セクション本体のファイル配置を EHDR 直後から一括で確定 =====
    // [0] = NULL は 0/0 のまま、書き出さない
    size_t cursor = sizeof(struct elf64header);

    for (int i = 1; i < SECTION_COUNT; i++) {
        size_t al = sectionheaders[i].addralign ? (size_t)sectionheaders[i].addralign : 1;
        cursor = align_offset(cursor, al);

        outputsections[i].offset = cursor;
        sectionheaders[i].offset = cursor;

        // 実行ファイル：SHF_ALLOC セクションには sh_addr を振る
        if (sectionheaders[i].flags & 0x2 /* SHF_ALLOC */) {
            sectionheaders[i].addr = BASE_ADDR + outputsections[i].offset;
        }

        logger(DEBUG, no_error,
               "Section(%s): size=0x%.08x off=0x%.08x addr=0x%.08x",
               sectionnames[i],
               sectionheaders[i].size,
               sectionheaders[i].offset,
               sectionheaders[i].addr);

        cursor += outputsections[i].size;
    }

    // ===== 重要：インデックス/リンクの整合性をここで強制 =====
    // e_shstrndx は **.shstrtab** を指す（SECTION_SHSTRTAB は .shstrtab の実インデックスに一致していること）
    elfheader.shstrindex = SECTION_SHSTRTAB;
    sectionheaders[SECTION_SYMTAB].link = SECTION_STRTAB;  // ここが 5 になる
    sectionheaders[SECTION_SYMTAB].entrysize = 24;         // sizeof(Elf64_Sym)
    
    sectionheaders[SECTION_STRTAB].type   = 3;   // ★ SHT_STRTAB
    sectionheaders[SECTION_STRTAB].type   = 3;   // ★ SHT_STRTAB
    sectionheaders[SECTION_STRTAB].flags  = 0;
    sectionheaders[SECTION_STRTAB].addralign  = 1;
    sectionheaders[SECTION_STRTAB].entrysize = 0;
    outputsections[SECTION_STRTAB].contents = (void*)strtab_bytes;
    outputsections[SECTION_STRTAB].size     = sizeof(strtab_bytes) - 1;


    // .symtab は .strtab を参照（シンボル名用）
//    sectionheaders[SECTION_SYMTAB].link      = SECTION_STRTAB;
//    sectionheaders[SECTION_SYMTAB].entrysize = 24; /* sizeof(Elf64_Sym) */
//    elfheader.shstrindex = SECTION_SHSTRTAB;          // 例: 1  (.shstrtab)
//    sectionheaders[SECTION_SYMTAB].link = SECTION_STRTAB;  // 例: 5  (.strtab)
//    sectionheaders[SECTION_SYMTAB].entrysize = 24;    // sizeof(Elf64_Sym)

    //build_min_symtab();
    //outputsections[SECTION_SYMTAB].contents = (void*)symtab_one;
    //outputsections[SECTION_SYMTAB].size     = sizeof(symtab_one);
    

    sectionheaders[SECTION_SHSTRTAB].type   = 3;  // SHT_STRTAB
    sectionheaders[SECTION_SHSTRTAB].flags  = 0;
    sectionheaders[SECTION_SHSTRTAB].addralign  = 1;

    sectionheaders[SECTION_SYMTAB].type       = 2;             // SHT_SYMTAB
    sectionheaders[SECTION_SYMTAB].addralign      = 8;
    sectionheaders[SECTION_SYMTAB].flags      = 0;
    sectionheaders[SECTION_SYMTAB].entrysize  = 24; //sizeof(Elf64_Sym);
    sectionheaders[SECTION_SYMTAB].link       = SECTION_STRTAB; // .symtab -> .strtab
    
    // 属性
    sectionheaders[SECTION_SYMTAB].type       = 2;  // SHT_SYMTAB
    sectionheaders[SECTION_SYMTAB].addralign      = 8;
    sectionheaders[SECTION_SYMTAB].flags      = 0;  // 非ALLOC
    //sectionheaders[SECTION_SYMTAB].entrysize  = sizeof(Elf64_Sym);
    // ★ .symtab の link は .strtab を指す
    sectionheaders[SECTION_SYMTAB].link       = SECTION_STRTAB;

    elfheader.shstrindex                  = SECTION_SHSTRTAB;      // 例: 1
    sectionheaders[SECTION_SYMTAB].link   = SECTION_STRTAB;        // 例: 5
    sectionheaders[SECTION_SYMTAB].entrysize = 24; // sizeof(Elf64_Sym);

    //outputsections[SECTION_SYMTAB].size = symtab_sz;  // サイズを更新！

    // ===== エントリポイントは .text 先頭（_start がそこにある前提） =====
    struct symbol *s = get_symbol("_start");   // 見つからなければ NULL
    struct symbol *s2 = get_symbol("main");   // 見つからなければ NULL
    if (s && s->section == SECTION_TEXT) {
        elfheader.entry = BASE_ADDR + outputsections[SECTION_TEXT].offset + (uint64_t)s->value;
    } 
    else if (s2 && s2->section == SECTION_TEXT) {
        elfheader.entry = BASE_ADDR + outputsections[SECTION_TEXT].offset + (uint64_t)s2->value;
    } else {
        elfheader.entry = BASE_ADDR + outputsections[SECTION_TEXT].offset; // フォールバック
    }
    
    //elfheader.entry = BASE_ADDR + outputsections[SECTION_TEXT].offset;

    // ===== プログラムヘッダ（PHDR）作成 =====
    //   ※ p_filesz はページ丸め **しない**（実ファイル上の終端まで）
    elfheader.phentrysize = sizeof(struct elf64phdr);

    struct elf64phdr ph[2];
    int phn = 0;

    // text: LOAD (R|X)
    {
        uint64_t o   = outputsections[SECTION_TEXT].offset;
        uint64_t sz  = outputsections[SECTION_TEXT].size;
        uint64_t seg = (o / PAGE_SIZE) * PAGE_SIZE;   // セグメント開始（ページ下げ）
        uint64_t end = o + sz;                        // ファイル上の実終端（丸めない）

        ph[phn].type   = PT_LOAD;
        ph[phn].flags  = PF_R | PF_X;
        ph[phn].offset = seg;
        ph[phn].vaddr  = BASE_ADDR + seg;
        ph[phn].paddr  = 0;
        ph[phn].filesz = (end > seg) ? (end - seg) : 0;
        ph[phn].memsz  = ph[phn].filesz;             // .bss 未導入なら filesz と同じ
        ph[phn].align  = PAGE_SIZE;
        phn++;
    }

    // data: LOAD (R|W) — .data が空でなければ付ける
    if (outputsections[SECTION_DATA].size > 0) {
        uint64_t o   = outputsections[SECTION_DATA].offset;
        uint64_t sz  = outputsections[SECTION_DATA].size;
        uint64_t seg = (o / PAGE_SIZE) * PAGE_SIZE;
        uint64_t end = o + sz;

        ph[phn].type   = PT_LOAD;
        ph[phn].flags  = PF_R | PF_W;
        ph[phn].offset = seg;
        ph[phn].vaddr  = BASE_ADDR + seg;
        ph[phn].paddr  = 0;
        ph[phn].filesz = (end > seg) ? (end - seg) : 0;
        ph[phn].memsz  = ph[phn].filesz;
        ph[phn].align  = PAGE_SIZE;
        phn++;
    }

    elfheader.phcount  = (uint16_t)phn;
    elfheader.phoffset = align_offset(cursor, 8);
    cursor = elfheader.phoffset + (size_t)elfheader.phcount * sizeof(struct elf64phdr);

    // ===== セクションヘッダテーブルは PHDR のさらに後ろ =====
    elfheader.shoffset = align_offset(cursor, 8);

    logger(DEBUG, no_error,
           "Entry=0x%.08x PHOFF=0x%.08x PHNUM=%d SHOFF=0x%.08x SHNUM=%d SHSTRNDX=%d",
           elfheader.entry, elfheader.phoffset, elfheader.phcount,
           elfheader.shoffset, elfheader.shcount, elfheader.shstrindex);

    // ===== 書き出し順：EHDR → セクション本体 → PHDR → SHDR =====

    // EHDR
    fseek(elf, 0L, SEEK_SET);
    fwrite(&elfheader, sizeof(elfheader), 1, elf);

    // セクション本体（NULL を除く。★ .shstrtab / .strtab / .symtab もこの for で書く）
    for (int i = 1; i < SECTION_COUNT; i++) {
        if (outputsections[i].size == 0) continue;
        fseek(elf, (long)outputsections[i].offset, SEEK_SET);
        fwrite(outputsections[i].contents, 1, outputsections[i].size, elf);
    }

    // PHDR
    if (elfheader.phcount > 0) {
        fseek(elf, (long)elfheader.phoffset, SEEK_SET);
        fwrite(ph, sizeof(struct elf64phdr), elfheader.phcount, elf);
    }

    // SHDR
    fseek(elf, (long)elfheader.shoffset, SEEK_SET);
    fwrite(sectionheaders, sizeof(struct elf64sectionheader), SECTION_COUNT, elf);

    return 0;
}

void free_output(void)
{
    for (int i = 0; i < SECTION_COUNT; i++)
        free(outputsections[i].contents);
}

#define __STDC_WANT_LIB_EXT1__ 1


FILE *inputfile = NULL;
FILE *outputtempfile = NULL;
FILE *outputfile = NULL;

static int fopen2(FILE **f, const char *filename, const char *flags)
{
#ifdef __STDC_LIB_EXT1__
    return fopen_s(f, filename, flags);
#else
    *f = fopen(filename, flags);
    return !*f;
#endif
}

void closefiles(void)
{
    if (inputfile)
        fclose(inputfile);
    if (outputtempfile)
        fclose(outputtempfile);
    if (outputfile && outputfile != stdin && outputfile != stdout &&
        outputfile != stderr)
        fclose(outputfile);
}

FILE* as_tmpfile(void) {
    int fd = open("AS_TMP", O_CREAT|O_RDWR, 0600);
    FILE* fp = (FILE*)malloc(sizeof(FILE));
    if (!fp) {
      close(fd);
      return 0;
    }
    fp->fd = fd;
    fp->flags = 1 | 2;
    fp->pos = 0;
    fp->eof = 0;
    fp->err = 0;
    fp->have_push = 0;
    fp->push_ch = 0;
    fp->is_mem = 0;
    fp->ms_bufp = 0;
    fp->ms_sizep = 0;
    fp->ms_buf = 0;
    fp->ms_cap = 0;
    fp->ms_len = 0;
    
    return fp;
}

void open_files(void)
{
    logger(DEBUG, no_error, "Opening files");

    outputtempfile = as_tmpfile();
    if (!outputtempfile) {
        logger(ERROR, error_system, "Unable to create temporary file");
        closefiles();
        exit(1);
    }

    logger(DEBUG, no_error, "Opening %s", *cmdargs.inputfile->filename);
    if (fopen2(&inputfile, *cmdargs.inputfile->filename, "r")) {
        puts("Error: ");
        logger(ERROR, error_system, "Unable to open input file");
        closefiles();
        exit(1);
    }

    if (!**cmdargs.outputfile->filename) {
        logger(DEBUG, no_error, "All files opened successfully");
        outputfile = stdout;
        return;
    }

    logger(DEBUG, no_error, "Opening %s", *cmdargs.outputfile->filename);
    if (fopen2(&outputfile, *cmdargs.outputfile->filename, "wb")) {
        puts("Error: ");
        logger(ERROR, error_system, "Unable to open output file");
        closefiles();
        exit(1);
    }

    logger(DEBUG, no_error, "All files opened successfully");
}

#define BUFSIZ 1024

// copy_files: 安全＆堅牢化
/*
void copy_files(FILE *dest, FILE *src)
{
    const long pos = ftell(src);
    fflush(src);                    // 念のため：書き→読みの切替
    rewind(src);                    // ★ ここを outputtempfile ではなく src にする

    char *buffer = xmalloc(BUFSIZ);
    for (;;) {
        size_t bytes = fread(buffer, 1, BUFSIZ, src);
        if (bytes == 0) break;      // EOF or 読み込み失敗
        fwrite(buffer, 1, bytes, dest);
        if (bytes != BUFSIZ) break; // EOF
    }
    free(buffer);

    fseek(src, pos, SEEK_SET);
    fflush(dest);                   // 念のため
}
*/

void copy_files(FILE *dest, FILE *src)
{
    const long pos = ftell(src);
    fflush(src);
    rewind(src);

    char *buffer = xmalloc(BUFSIZ);
    for (;;) {
        size_t bytes = fread(buffer, 1, BUFSIZ, src);
        if (bytes == 0) break;      // EOF/読取失敗なら終了
        fwrite(buffer, 1, bytes, dest);
        if (bytes != BUFSIZ) break; // EOF
    }
    free(buffer);
    fseek(src, pos, SEEK_SET);
    fflush(dest);
}


/*
void copy_files(FILE *dest, FILE *src)
{
    const long pos = ftell(src);
    rewind(outputtempfile);

    char *buffer = xmalloc(BUFSIZ);
    for (;;) {
        const size_t bytes = fread(buffer, 1, BUFSIZ, src);
        fwrite(buffer, 1, bytes, dest);
        if (bytes != BUFSIZ)
            break;
    }
    free(buffer);

    fseek(src, pos, SEEK_SET);
}
*/


int main(int argc, char *argv[])
{
    parse_cmdargs(argc, argv);
    open_files();
    parse_file(inputfile, outputtempfile);

    logger(DEBUG, no_error, "Done generating bytecode");
    copy_files(outputfile, outputtempfile);
    logger(DEBUG, no_error, "Finished writing bytecode to output");
    closefiles();

    int n = get_clean_exit(CRITICAL);
    
    unlink("AS_TMP");
    
    return n;
}

struct symbolmap symbols[] = { { .count = 0, .data = NULL } };

static size_t hash_str(const char *str)
{
    size_t hash = 5381;

    while (*str) {
        hash = hash * 33 ^ (size_t)*str;
        str++;
    }

    return hash % SYMBOLMAP_ENTRIES;
}

struct symbol *get_symbol(const char *name)
{
    const size_t hash = hash_str(name);
    for (size_t i = 0; i < symbols[hash].count; i++) {
        if (!strcmp(name, symbols[hash].data[i].name)) {
            return &symbols[hash].data[i];
        }
    }
    return NULL;
}

struct symbol *get_or_create_symbol(const char *name, enum symbol_types type)
{
    struct symbol *sym = get_symbol(name);
    if (sym)
        return sym;
    return create_symbol(name, type);
}

struct symbol *create_symbol(const char *name, enum symbol_types type)
{
    const size_t hash = hash_str(name);

    const size_t index = symbols[hash].count;

    for (size_t i = 0; i < symbols[hash].count; i++) {
        if (!strcmp(name, symbols[hash].data[i].name)) {
            logger(ERROR, error_invalid_syntax,
                   "Duplicate symbol %s encountered");
            return NULL;
        }
    }

    symbols[hash].count++;
    symbols[hash].data =
        xrealloc(symbols[hash].data,
             symbols[hash].count * sizeof(*symbols[hash].data));

    const size_t n_sz = strlen(name) + 1;
    char *n = xmalloc(n_sz);
    memcpy(n, name, n_sz);
    symbols[hash].data[index].name = n;
    symbols[hash].data[index].name_sz = n_sz;
    symbols[hash].data[index].type = type;
    symbols[hash].data[index].binding = 0;

    logger(DEBUG, no_error, "Created symbol named \"%s\"", n);

    return &symbols[hash].data[index];
}

size_t calc_symtab_str_buf_size(void)
{
    size_t sz = 1;
    for (size_t hash = 0; hash < SYMBOLMAP_ENTRIES; hash++)
        for (size_t index = 0; index < symbols[hash].count; index++)
            sz += symbols[hash].data[index].name_sz;
    return sz;
}

char *create_symtab_str_buf(size_t sz)
{
    char *buf = malloc(sz);
    buf[0] = '\0';
    size_t offset = 1;
    for (size_t hash = 0; hash < SYMBOLMAP_ENTRIES; hash++) {
        for (size_t index = 0; index < symbols[hash].count; index++) {
            const size_t name_sz =
                symbols[hash].data[index].name_sz;
            memcpy(buf + offset, symbols[hash].data[index].name,
                   name_sz);
            offset += name_sz;
        }
    }
    return buf;
}

void free_symbols(void)
{
    for (size_t hash = 0; hash < SYMBOLMAP_ENTRIES; hash++) {
        for (size_t index = 0; index < symbols[hash].count; index++)
            free(symbols[hash].data[index].name);
        free(symbols[hash].data);
    }
}

const char *reg_abi_map[] = {
    "zero", "ra", "sp", "gp", "tp",     "t0",    "t1", "t2", "s0", "s1", "a0",
    "a1",    "a2", "a3", "a4", "a5",     "a6",    "a7", "s2", "s3", "s4", "s5",
    "s6",    "s7", "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6",
};

const struct {
    const char *name;
    uint16_t encoding;
} csr_map[] = {
    { "fflags", 0x001 },
    { "frm", 0x002 },
    { "fcsr", 0x003 },
    { "cycle", 0xC00 },
    { "time", 0xC01 },
    { "instret", 0xC02 },
    { "hpmcounter3", 0xC03 },
    { "hpmcounter4", 0xC04 },
    { "hpmcounter5", 0xC05 },
    { "hpmcounter6", 0xC06 },
    { "hpmcounter7", 0xC07 },
    { "hpmcounter8", 0xC08 },
    { "hpmcounter9", 0xC09 },
    { "hpmcounter10", 0xC0A },
    { "hpmcounter11", 0xC0B },
    { "hpmcounter12", 0xC0C },
    { "hpmcounter13", 0xC0D },
    { "hpmcounter14", 0xC0E },
    { "hpmcounter15", 0xC0F },
    { "hpmcounter16", 0xC10 },
    { "hpmcounter17", 0xC11 },
    { "hpmcounter18", 0xC12 },
    { "hpmcounter19", 0xC13 },
    { "hpmcounter20", 0xC14 },
    { "hpmcounter21", 0xC15 },
    { "hpmcounter22", 0xC16 },
    { "hpmcounter23", 0xC17 },
    { "hpmcounter24", 0xC18 },
    { "hpmcounter25", 0xC19 },
    { "hpmcounter26", 0xC1A },
    { "hpmcounter27", 0xC1B },
    { "hpmcounter28", 0xC1C },
    { "hpmcounter29", 0xC1D },
    { "hpmcounter30", 0xC1E },
    { "hpmcounter31", 0xC1F },
    { "cycleh", 0xC80 },
    { "timeh", 0xC81 },
    { "instreth", 0xC82 },
    { "hpmcounter3h", 0xC83 },
    { "hpmcounter4h", 0xC84 },
    { "hpmcounter5h", 0xC85 },
    { "hpmcounter6h", 0xC86 },
    { "hpmcounter7h", 0xC87 },
    { "hpmcounter8h", 0xC88 },
    { "hpmcounter9h", 0xC89 },
    { "hpmcounter10h", 0xC8A },
    { "hpmcounter11h", 0xC8B },
    { "hpmcounter12h", 0xC8C },
    { "hpmcounter13h", 0xC8D },
    { "hpmcounter14h", 0xC8E },
    { "hpmcounter15h", 0xC8F },
    { "hpmcounter16h", 0xC90 },
    { "hpmcounter17h", 0xC91 },
    { "hpmcounter18h", 0xC92 },
    { "hpmcounter19h", 0xC93 },
    { "hpmcounter20h", 0xC94 },
    { "hpmcounter21h", 0xC95 },
    { "hpmcounter22h", 0xC96 },
    { "hpmcounter23h", 0xC97 },
    { "hpmcounter24h", 0xC98 },
    { "hpmcounter25h", 0xC99 },
    { "hpmcounter26h", 0xC9A },
    { "hpmcounter27h", 0xC9B },
    { "hpmcounter28h", 0xC9C },
    { "hpmcounter29h", 0xC9D },
    { "hpmcounter30h", 0xC9E },
    { "hpmcounter31h", 0xC9F },
    { "sstatus", 0x100 },
    { "sie", 0x104 },
    { "stvec", 0x105 },
    { "scounteren", 0x106 },
    { "senvcfg", 0x10A },
    { "scountinhibit", 0x120 },
    { "sscratch", 0x140 },
    { "sepc", 0x141 },
    { "scause", 0x142 },
    { "stval", 0x143 },
    { "sip", 0x144 },
    { "scountovf", 0xDA0 },
    { "satp", 0x180 },
    { "scontext", 0x5A8 },
    { "sstateen0", 0x10C },
    { "sstateen1", 0x10D },
    { "sstateen2", 0x10E },
    { "sstateen3", 0x10F },
    { "hstatus", 0x600 },
    { "hedeleg", 0x602 },
    { "hideleg", 0x603 },
    { "hie", 0x604 },
    { "hcounteren", 0x606 },
    { "hgeie", 0x607 },
    { "hedelegh", 0x612 },
    { "htval", 0x643 },
    { "hip", 0x644 },
    { "hvip", 0x645 },
    { "htinst", 0x64A },
    { "hgeip", 0xE12 },
    { "henvcfg", 0x60A },
    { "henvcfgh", 0x61A },
    { "hgatp", 0x680 },
    { "hcontext", 0x6A8 },
    { "htimedelta", 0x605 },
    { "htimedeltah", 0x615 },
    { "hstateen0", 0x60C },
    { "hstateen1", 0x60D },
    { "hstateen2", 0x60E },
    { "hstateen3", 0x60F },
    { "hstateen0h", 0x61C },
    { "hstateen1h", 0x61D },
    { "hstateen2h", 0x61E },
    { "hstateen3h", 0x61F },
    { "vsstatus", 0x200 },
    { "vsie", 0x204 },
    { "vstvec", 0x205 },
    { "vsscratch", 0x240 },
    { "vsepc", 0x241 },
    { "vscause", 0x242 },
    { "vstval", 0x243 },
    { "vsip", 0x244 },
    { "vsatp", 0x280 },
    { "mvendorid", 0xF11 },
    { "marchid", 0xF12 },
    { "mimpid", 0xF13 },
    { "mhartid", 0xF14 },
    { "mconfigptr", 0xF15 },
    { "mstatus", 0x300 },
    { "misa", 0x301 },
    { "medeleg", 0x302 },
    { "mideleg", 0x303 },
    { "mie", 0x304 },
    { "mtvec", 0x305 },
    { "mcounteren", 0x306 },
    { "mstatush", 0x310 },
    { "medelegh", 0x312 },
    { "mscratch", 0x340 },
    { "mepc", 0x341 },
    { "mcause", 0x342 },
    { "mtval", 0x343 },
    { "mip", 0x344 },
    { "mtinst", 0x34A },
    { "mtval2", 0x34B },
    { "menvcfg", 0x30A },
    { "menvcfgh", 0x31A },
    { "mseccfg", 0x747 },
    { "mseccfgh", 0x757 },
    { "pmpcfg0", 0x3A0 },
    { "pmpcfg1", 0x3A1 },
    { "pmpcfg2", 0x3A2 },
    { "pmpcfg3", 0x3A3 },
    { "pmpcfg4", 0x3A4 },
    { "pmpcfg5", 0x3A5 },
    { "pmpcfg6", 0x3A6 },
    { "pmpcfg7", 0x3A7 },
    { "pmpcfg8", 0x3A8 },
    { "pmpcfg9", 0x3A9 },
    { "pmpcfg10", 0x3AA },
    { "pmpcfg11", 0x3AB },
    { "pmpcfg12", 0x3AC },
    { "pmpcfg13", 0x3AD },
    { "pmpcfg14", 0x3AE },
    { "pmpcfg15", 0x3AF },
    { "pmpaddr0", 0x3B0 },
    { "pmpaddr1", 0x3B1 },
    { "pmpaddr2", 0x3B2 },
    { "pmpaddr3", 0x3B3 },
    { "pmpaddr4", 0x3B4 },
    { "pmpaddr5", 0x3B5 },
    { "pmpaddr6", 0x3B6 },
    { "pmpaddr7", 0x3B7 },
    { "pmpaddr8", 0x3B8 },
    { "pmpaddr9", 0x3B9 },
    { "pmpaddr10", 0x3BA },
    { "pmpaddr11", 0x3BB },
    { "pmpaddr12", 0x3BC },
    { "pmpaddr13", 0x3BD },
    { "pmpaddr14", 0x3BE },
    { "pmpaddr15", 0x3BF },
    { "pmpaddr16", 0x3C0 },
    { "pmpaddr17", 0x3C1 },
    { "pmpaddr18", 0x3C2 },
    { "pmpaddr19", 0x3C3 },
    { "pmpaddr20", 0x3C4 },
    { "pmpaddr21", 0x3C5 },
    { "pmpaddr22", 0x3C6 },
    { "pmpaddr23", 0x3C7 },
    { "pmpaddr24", 0x3C8 },
    { "pmpaddr25", 0x3C9 },
    { "pmpaddr26", 0x3CA },
    { "pmpaddr27", 0x3CB },
    { "pmpaddr28", 0x3CC },
    { "pmpaddr29", 0x3CD },
    { "pmpaddr30", 0x3CE },
    { "pmpaddr31", 0x3CF },
    { "pmpaddr32", 0x3D0 },
    { "pmpaddr33", 0x3D1 },
    { "pmpaddr34", 0x3D2 },
    { "pmpaddr35", 0x3D3 },
    { "pmpaddr36", 0x3D4 },
    { "pmpaddr37", 0x3D5 },
    { "pmpaddr38", 0x3D6 },
    { "pmpaddr39", 0x3D7 },
    { "pmpaddr40", 0x3D8 },
    { "pmpaddr41", 0x3D9 },
    { "pmpaddr42", 0x3DA },
    { "pmpaddr43", 0x3DB },
    { "pmpaddr44", 0x3DC },
    { "pmpaddr45", 0x3DD },
    { "pmpaddr46", 0x3DE },
    { "pmpaddr47", 0x3DF },
    { "pmpaddr48", 0x3E0 },
    { "pmpaddr49", 0x3E1 },
    { "pmpaddr50", 0x3E2 },
    { "pmpaddr51", 0x3E3 },
    { "pmpaddr52", 0x3E4 },
    { "pmpaddr53", 0x3E5 },
    { "pmpaddr54", 0x3E6 },
    { "pmpaddr55", 0x3E7 },
    { "pmpaddr56", 0x3E8 },
    { "pmpaddr57", 0x3E9 },
    { "pmpaddr58", 0x3EA },
    { "pmpaddr59", 0x3EB },
    { "pmpaddr60", 0x3EC },
    { "pmpaddr61", 0x3ED },
    { "pmpaddr62", 0x3EE },
    { "pmpaddr63", 0x3EF },
    { "mstateen0", 0x30C },
    { "mstateen1", 0x30D },
    { "mstateen2", 0x30E },
    { "mstateen3", 0x30F },
    { "mstateen0h", 0x31C },
    { "mstateen1h", 0x31D },
    { "mstateen2h", 0x31E },
    { "mstateen3h", 0x31F },
    { "mnscratch", 0x740 },
    { "mnepc", 0x741 },
    { "mncause", 0x742 },
    { "mnstatus", 0x744 },
    { "mcycle", 0xB00 },
    { "minstret", 0xB02 },
    { "mhpmcounter3", 0xB03 },
    { "mhpmcounter4", 0xB04 },
    { "mhpmcounter5", 0xB05 },
    { "mhpmcounter6", 0xB06 },
    { "mhpmcounter7", 0xB07 },
    { "mhpmcounter8", 0xB08 },
    { "mhpmcounter9", 0xB09 },
    { "mhpmcounter10", 0xB0A },
    { "mhpmcounter11", 0xB0B },
    { "mhpmcounter12", 0xB0C },
    { "mhpmcounter13", 0xB0D },
    { "mhpmcounter14", 0xB0E },
    { "mhpmcounter15", 0xB0F },
    { "mhpmcounter16", 0xB10 },
    { "mhpmcounter17", 0xB11 },
    { "mhpmcounter18", 0xB12 },
    { "mhpmcounter19", 0xB13 },
    { "mhpmcounter20", 0xB14 },
    { "mhpmcounter21", 0xB15 },
    { "mhpmcounter22", 0xB16 },
    { "mhpmcounter23", 0xB17 },
    { "mhpmcounter24", 0xB18 },
    { "mhpmcounter25", 0xB19 },
    { "mhpmcounter26", 0xB1A },
    { "mhpmcounter27", 0xB1B },
    { "mhpmcounter28", 0xB1C },
    { "mhpmcounter29", 0xB1D },
    { "mhpmcounter30", 0xB1E },
    { "mhpmcounter31", 0xB1F },
    { "mcycleh", 0xB80 },
    { "minstreth", 0xB82 },
    { "mhpmcounter3h", 0xB83 },
    { "mhpmcounter4h", 0xB84 },
    { "mhpmcounter5h", 0xB85 },
    { "mhpmcounter6h", 0xB86 },
    { "mhpmcounter7h", 0xB87 },
    { "mhpmcounter8h", 0xB88 },
    { "mhpmcounter9h", 0xB89 },
    { "mhpmcounter10h", 0xB8A },
    { "mhpmcounter11h", 0xB8B },
    { "mhpmcounter12h", 0xB8C },
    { "mhpmcounter13h", 0xB8D },
    { "mhpmcounter14h", 0xB8E },
    { "mhpmcounter15h", 0xB8F },
    { "mhpmcounter16h", 0xB90 },
    { "mhpmcounter17h", 0xB91 },
    { "mhpmcounter18h", 0xB92 },
    { "mhpmcounter19h", 0xB93 },
    { "mhpmcounter20h", 0xB94 },
    { "mhpmcounter21h", 0xB95 },
    { "mhpmcounter22h", 0xB96 },
    { "mhpmcounter23h", 0xB97 },
    { "mhpmcounter24h", 0xB98 },
    { "mhpmcounter25h", 0xB99 },
    { "mhpmcounter26h", 0xB9A },
    { "mhpmcounter27h", 0xB9B },
    { "mhpmcounter28h", 0xB9C },
    { "mhpmcounter29h", 0xB9D },
    { "mhpmcounter30h", 0xB9E },
    { "mhpmcounter31h", 0xB9F },
    { "mcountinhibit", 0x320 },
    { "mhpmevent3", 0x323 },
    { "mhpmevent4", 0x324 },
    { "mhpmevent5", 0x325 },
    { "mhpmevent6", 0x326 },
    { "mhpmevent7", 0x327 },
    { "mhpmevent8", 0x328 },
    { "mhpmevent9", 0x329 },
    { "mhpmevent10", 0x32A },
    { "mhpmevent11", 0x32B },
    { "mhpmevent12", 0x32C },
    { "mhpmevent13", 0x32D },
    { "mhpmevent14", 0x32E },
    { "mhpmevent15", 0x32F },
    { "mhpmevent16", 0x330 },
    { "mhpmevent17", 0x331 },
    { "mhpmevent18", 0x332 },
    { "mhpmevent19", 0x333 },
    { "mhpmevent20", 0x334 },
    { "mhpmevent21", 0x335 },
    { "mhpmevent22", 0x336 },
    { "mhpmevent23", 0x337 },
    { "mhpmevent24", 0x338 },
    { "mhpmevent25", 0x339 },
    { "mhpmevent26", 0x33A },
    { "mhpmevent27", 0x33B },
    { "mhpmevent28", 0x33C },
    { "mhpmevent29", 0x33D },
    { "mhpmevent30", 0x33E },
    { "mhpmevent31", 0x33f },
    { "mhpmevent3h", 0x723 },
    { "mhpmevent4h", 0x724 },
    { "mhpmevent5h", 0x725 },
    { "mhpmevent6h", 0x726 },
    { "mhpmevent7h", 0x727 },
    { "mhpmevent8h", 0x728 },
    { "mhpmevent9h", 0x729 },
    { "mhpmevent10h", 0x72A },
    { "mhpmevent11h", 0x72B },
    { "mhpmevent12h", 0x72C },
    { "mhpmevent13h", 0x72D },
    { "mhpmevent14h", 0x72E },
    { "mhpmevent15h", 0x72F },
    { "mhpmevent16h", 0x730 },
    { "mhpmevent17h", 0x731 },
    { "mhpmevent18h", 0x732 },
    { "mhpmevent19h", 0x733 },
    { "mhpmevent20h", 0x734 },
    { "mhpmevent21h", 0x735 },
    { "mhpmevent22h", 0x736 },
    { "mhpmevent23h", 0x737 },
    { "mhpmevent24h", 0x738 },
    { "mhpmevent25h", 0x739 },
    { "mhpmevent26h", 0x73A },
    { "mhpmevent27h", 0x73B },
    { "mhpmevent28h", 0x73C },
    { "mhpmevent29h", 0x73D },
    { "mhpmevent30h", 0x73E },
    { "mhpmevent31h", 0x73f },
    { "tselect", 0x7A0 },
    { "tdata1", 0x7A1 },
    { "tdata2", 0x7A2 },
    { "tdata3", 0x7A3 },
    { "mcontext", 0x7A8 },
    { "dcsr", 0x7B0 },
    { "dpc", 0x7B1 },
    { "dscratch0", 0x7B2 },
    { "dscratch1", 0x7B3 },
};

/* TODO: implement w/ float extension */

size_t get_register_id(const char *reg)
{
    logger(DEBUG, no_error, "Searching for register (%s)", reg);

    /* limit the number of possible characters in the register */
    int l = 0;
    while (reg[l] && reg[l] != ' ')
        l++;
    if (l > 4)
        return (size_t)-1;

    if (*reg == 'x') {
        size_t r = (size_t)atol(reg + 1);
        if (r >= 32)
            return (size_t)-1;
        return r;
    }

    for (size_t i = 0; i < ARRAY_LENGTH(reg_abi_map); i++)
        if (!strcmp(reg, reg_abi_map[i]))
            return i;

    /* Check for "fp" alias of register "s0"/"x8" */
    if (!strcmp(reg, "fp"))
        return 8;

    logger(INFO, no_error, "unknown register (%s)", reg);

    return (size_t)-1;
}

const char *float_reg_abi_map[] = {
    /* f0  - f31 の ABI 名 */
    "ft0","ft1","ft2","ft3","ft4","ft5","ft6","ft7",
    "fs0","fs1",
    "fa0","fa1","fa2","fa3","fa4","fa5","fa6","fa7",
    "fs2","fs3","fs4","fs5","fs6","fs7","fs8","fs9","fs10","fs11",
    "ft8","ft9","ft10","ft11",
    NULL
};

size_t get_float_register_id(const char *reg)
{
    if (*reg != 'f')
        return (size_t)-1;

    if (reg[1] >= '0' && reg[1] <= '9')
        return (size_t)atoi(reg + 1);

    for (size_t i = 0; i < ARRAY_LENGTH(float_reg_abi_map); i++)
        if (!strcmp(reg, float_reg_abi_map[i]))
            return i;

    return (size_t)-1;
}

int get_immediate(const char *imm, size_t *res)
{
    int base = 0;

    if (!*imm)
        return 1;

    /* Attempt to detect base */
    if (imm[0] == '0') {
        switch (imm[1]) {
        case 'b':
            base = 2;
            imm += 2;
            break;
        case 'o':
            base = 8;
            imm += 2;
            break;
        case 'x':
            base = 16;
            imm += 2;
            break;
        }
    }

    char *endptr;
    *res = (size_t)strtoll(imm, &endptr, base);

    return endptr == imm;
}

uint16_t get_csr(const char *csr)
{
    if ((*csr >= '0' && *csr <= '9') || *csr == '-') {
        char *endptr;
        const uint16_t encoding = (uint16_t)strtoll(csr, &endptr, 0);
        if (*endptr)
            return 0xFFFF;
        return encoding;
    }
    for (size_t i = 0; i < ARRAY_LENGTH(csr_map); i++)
        if (!strcmp(csr, csr_map[i].name))
            return csr_map[i].encoding;
    return 0xFFFF;
}
