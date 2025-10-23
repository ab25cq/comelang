#pragma once
#include "minux.h"
//#include <elf.h>

#define OP_LOAD 0x03
#define OP_STORE 0x23
#define OP_BRANCH 0x63
#define OP_JAL 0x6F
#define OP_JALR 0x67
#define OP_MISC_MEM 0x0F
#define OP_OP 0x33
#define OP_OPI 0x13
#define OP_OP32 0x3B
#define OP_OPI32 0x1B
#define OP_SYSTEM 0x73
#define OP_LUI 0x37
#define OP_AUIPC 0x17
#define OP_AMO 0x2F
#define OP_LOAD_FP  0x07
#define OP_STORE_FP 0x27

#define END_FORMATION              \
	{                          \
		NULL, NULL, NULL,  \
		{                  \
			0, 0, 0, 0 \
		}                  \
	}

struct bytecode {
	size_t size;
	unsigned char *data;
};

extern const struct bytecode error_bytecode;

/* helper functions */
struct bytecode form_empty_bytecode(void);

struct formation;
struct args;
struct idata;
typedef struct bytecode(form_handler)(const char *, struct idata, struct args,
				      size_t);
typedef struct args arg_parser(char *);
// as.h（既存の arg_parser 群の近く）
arg_parser parse_fltype;  // fld/flw: rd=FREG,  imm(rs1)
arg_parser parse_fstype;  // fsd/fsw: rs2=FREG, imm(rs1)


form_handler form_rtype;
form_handler form_itype;
form_handler form_itype2;
form_handler form_stype;
form_handler form_btype;
form_handler form_utype;
form_handler form_jtype;

struct formation {
	const char *name;
	form_handler *form_handler;
	arg_parser *arg_handler;
	struct idata {
		size_t sz;
		uint8_t opcode;
		uint8_t funct3;
		uint8_t funct7;
	} idata;
};

extern const struct formation zicsr[];

struct reloc_info {
	struct symbol *sym;
	uint32_t type;
	int64_t addend;
};

struct args {
	uint8_t rd;
	uint8_t rs1;
	uint8_t rs2;
	int32_t imm;
	struct symbol *sym;
	struct reloc_info reloc_primary;
	struct reloc_info reloc_secondary;
};

extern const struct args empty_args;

struct formation parse_form(const char *instruction);

extern const struct formation zifencei[];

extern const struct formation rv32i[];
extern const struct formation rv64i[];

enum load_pseudo {
	LOAD_IMM,
	LOAD_ADDR,
};
enum math_pseudo {
	MATH_MV,
	MATH_NOT,
	MATH_NEG,
	MATH_NEGW,
	MATH_SEXTW,
};
enum setif_pseudo {
	SETIF_EQZ,
	SETIF_NEZ,
	SETIF_LTZ,
	SETIF_GTZ,
};
enum branchifz_pseudo {
	BRANCHIFZ_EQZ,
	BRANCHIFZ_NEZ,
	BRANCHIFZ_LEZ,
	BRANCHIFZ_GEZ,
	BRANCHIFZ_LTZ,
	BRANCHIFZ_GTZ,
};
enum branchifr_pseudo {
	BRANCHIFR_GT = 0x4,
	BRANCHIFR_LE = 0x5,
	BRANCHIFR_GTU = 0x6,
	BRANCHIFR_LEU = 0x7,
};
enum jump_pseudo {
	JUMP_J,
	JUMP_JR,
	JUMP_RET,
};

/* shortcut instructions bytecode generation */
form_handler form_nop;
form_handler form_load_pseudo;
form_handler form_math;
form_handler form_setif;
form_handler form_branchifz;
form_handler form_branchifr;
form_handler form_jump;
form_handler form_jr;
form_handler form_ret;

/* basic integer instruction type bytecode generation */
form_handler form_syscall;

/* individual instruction bytecode generation */
form_handler form_jal;
form_handler form_jalr;

extern const struct formation rv32a[];
extern const struct formation rv64a[];

extern size_t linenumber;

/* ERROR IDs
 *
 * 0x00 No error
 * 0x01 Invalid instruction
 * 0x02 Not implemented
 * 0x03 Internal error
 * 0x04 System error
 * 0x05 Unknown error
 * 0x06 Other error
 */
extern const char *error_ids[];
enum error_t {
	no_error,
	error_invalid_instruction,
	error_instruction_other,
	error_not_implemented,
	error_invalid_syntax,
	error_internal,
	error_system,
	error_unknown,
	error_other,
};

enum loglvl_t {
	DEBUG,
	INFO,
	WARN,
	ERROR,
	CRITICAL,
	NODEBUG,
};

void set_min_loglevel(enum loglvl_t);
void set_exit_loglevel(enum loglvl_t);
void logger(enum loglvl_t, enum error_t, const char *, ...);
int get_clean_exit(enum loglvl_t);

enum sections {
	SECTION_NULL = 0,
	SECTION_SHSTRTAB,
	SECTION_TEXT,
	SECTION_DATA,
	SECTION_RELA_TEXT,
	SECTION_RELA_DATA,
	SECTION_SYMTAB,
	SECTION_STRTAB,
	SECTION_COUNT
};

struct symbol {
	size_t name_sz;
	char *name;
	enum sections section;
	long value;
	unsigned char binding;
enum symbol_types {
		SYMBOL_UNKNOWN,
		SYMBOL_LABEL,
		SYMBOL_VALUE,
		SYMBOL_OTHER,
	} type;
	size_t sym_index;
};

#define SYMBOLMAP_ENTRIES 256
struct symbolmap {
	size_t count;
	struct symbol *data;
};
extern struct symbolmap symbols[SYMBOLMAP_ENTRIES];

struct symbol *get_symbol(const char *);
struct symbol *create_symbol(const char *, enum symbol_types);
struct symbol *get_or_create_symbol(const char *, enum symbol_types);

struct elf64sym create_symtab_entry(const char *);

size_t calc_symtab_str_buf_size(void);
char *create_symtab_str_buf(size_t);

void free_symbols(void);

struct sectionpos {
	enum sections section;
	size_t offset;
};

/* general instruction generation */
void parse_file(FILE *, FILE *);
int parse_line(char *, struct sectionpos);

int parse_label(char *, struct sectionpos);

#define xmalloc wrasm_xmalloc
#define xcalloc wrasm_xcalloc
#define xrealloc wrasm_xrealloc

void *xmalloc(size_t);
void *xcalloc(size_t, size_t);
void *xrealloc(void *, size_t);

extern const struct args empty_args;

arg_parser parse_rtype;
arg_parser parse_itype;
arg_parser parse_stype;
arg_parser parse_utype;
arg_parser parse_btype;
arg_parser parse_bztype;
arg_parser parse_ltype;
arg_parser parse_pseudo;
arg_parser parse_fence;
arg_parser parse_none;

arg_parser parse_jal;
arg_parser parse_jalr;
arg_parser parse_ret;
arg_parser parse_li;
arg_parser parse_la;
arg_parser parse_j;
arg_parser parse_jr;
arg_parser parse_ftso;
arg_parser parse_al;
arg_parser parse_as;
arg_parser parse_csr;
arg_parser parse_csri;

int parse_asm(const char *, struct sectionpos);

int is_terminating(char);
char *trim_whitespace(const char *);

extern const char *reg_abi_map[];
extern const char *float_reg_abi_map[];

size_t get_register_id(const char *);
size_t get_float_register_id(const char *);

int get_immediate(const char *, size_t *);
uint16_t get_csr(const char *);


struct versioninfo_t {
	int major, minor, patch;
	const char *note;
};

extern const char progname[];
extern const char helpstr[];
extern const struct versioninfo_t versioninfo;

struct cmdargs_t {
	struct arg_lit *help, *version;
	struct arg_lit *verbose;
	struct arg_lit *relocatable;
	struct arg_file *inputfile, *outputfile;
	struct arg_end *end;
};
extern struct cmdargs_t cmdargs;

void parse_cmdargs(int argc, char *argv[]);


struct instruction {
	struct formation formation;
	struct args args;
	struct sectionpos position;
	size_t line;
};

struct rawdata {
    void *data;
    size_t size;
    struct sectionpos position;
    size_t line;
    struct symbol *sym; // ← .quad <symbol> 用：解決対象シンボル
    int is_abs64;       // ← これが 1 なら 8B を絶対アドレスに置換して出力
    long addend;        // ← 将来の拡張用（今回は 0 固定）
};

int parse_quad(const char *arg);


int add_instruction(struct instruction);
int add_data(struct rawdata);

int write_all(void);

int write_all_instructions(void);
int write_instruction(struct instruction);

int write_all_data(void);
int write_data(struct rawdata);

void free_instructions(void);
void free_data(void);

#define ARRAY_LENGTH(arr) (sizeof(arr) / sizeof((arr)[0]))

#if defined(__GNUC__)
#define UNREACHABLE() __builtin_unreachable()
#elif defined(_MSC_VER)
#define UNREACHABLE() __assume(0)
#else
#define UNREACHABLE()
#define NO_UNREACHABLE
#endif

/* TODO: implement assembler directives */
int parse_directive(char *);

int get_section_by_name(const char *);

int parse_asciz(const char *);
int parse_ascii(const char *);
int parse_section(const char *);
int parse_global(const char *);



struct section {
	size_t offset;
	size_t size;
	char *contents;
	uint32_t nameoffset;
};

extern enum sections outputsection;

void change_output(enum sections);

struct sectionpos get_outputpos(void);
void inc_outputsize(enum sections, size_t);
void set_section(enum sections);

size_t calc_fileoffset(struct sectionpos);

void calc_strtab(void);
int fill_strtab(void);

void calc_symtab(void);
int fill_symtab(void);

int alloc_output(void);

size_t write_sectiondata(const void *, size_t, struct sectionpos);

int flush_output(FILE *);
void free_output(void);

#define ELF_IDENTSIZE 16

struct elf64header {
	unsigned char ident[ELF_IDENTSIZE];
	uint16_t type;
	uint16_t machine;
	uint32_t version;
	uint64_t entry;
	uint64_t phoffset;
	uint64_t shoffset;
	uint32_t flags;
	uint16_t headersize;
	uint16_t phentrysize;
	uint16_t phcount;
	uint16_t shentrysize;
	uint16_t shcount;
	uint16_t shstrindex;
};

struct elf64sectionheader {
   uint32_t name;
   uint32_t type;
   uint64_t flags;
   uint64_t addr;
   uint64_t offset;
   uint64_t size;
   uint32_t link;
   uint32_t info;
   uint64_t addralign;
   uint64_t entrysize;
 };

/* === Program header (ELF64) === */
struct elf64phdr {
  uint32_t type;     /* PT_* */
  uint32_t flags;    /* PF_* */
  uint64_t offset;   /* file offset */
  uint64_t vaddr;    /* virtual address */
  uint64_t paddr;    /* physical (unused) */
  uint64_t filesz;   /* size in file */
  uint64_t memsz;    /* size in memory */
  uint64_t align;    /* alignment */
};

/* PT_* */
#define PT_NULL  0
#define PT_LOAD  1

/* PF_* */
#define PF_X 0x1
#define PF_W 0x2
#define PF_R 0x4


struct elf64header new_elf64header(void);
struct elf64sectionheader new_elf64sectionheader(void);

struct elf64sym {
	uint32_t name;
	unsigned char info;
	unsigned char other;
	uint16_t shndx;
	uint64_t value;
	uint64_t size;
};

struct elf64rela {
	uint64_t offset;
	uint64_t info;
	int64_t addend;
};

#define ELF64_R_INFO(sym, type) ((((uint64_t)(sym)) << 32) | (uint32_t)(type))

/* TODO: add preprocessor stuff */
