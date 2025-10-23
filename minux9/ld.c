#include "minux.h"
#include <stdarg.h>

// ─────────────────────────────────────────────────────────────────────────────
//  Minimal linker for the custom Minux9 object format emitted by as.c
//
//  The linker reads one or more .o files produced by our assembler, resolves
//  symbols/relocations, merges sections according to the Minux9 userland layout
//  (similar to user.ld), and finally writes a static ELF64 executable that can
//  be launched by the Minux9 kernel.  Only the directives and relocation types
//  required by cc.c are supported.
// ─────────────────────────────────────────────────────────────────────────────

#define ARRAY_LEN(x) ((int)(sizeof(x) / sizeof((x)[0])))

static void fatal(const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  fprintf(stderr, "ld: ");
  vfprintf(stderr, fmt, ap);
  fprintf(stderr, "\n");
  va_end(ap);
  exit(1);
}

static void *xmalloc(size_t n) {
  void *p = malloc(n);
  if (!p)
    fatal("out of memory");
  return p;
}

static void *xrealloc(void *ptr, size_t n) {
  void *p = realloc(ptr, n);
  if (!p)
    fatal("out of memory");
  return p;
}

static char *xstrdup(const char *s) {
  char *p = strdup(s);
  if (!p)
    fatal("out of memory");
  return p;
}

// ─────────────────────────────────────────────────────────────────────────────
// Shared struct definitions (match as.c writer)

typedef struct {
  uint32_t magic;      // 'MOBJ'
  uint16_t version;    // 1
  uint16_t section_cnt;
  uint32_t symbol_cnt;
  uint32_t reloc_cnt;
  uint32_t reserved;
} __attribute__((packed)) ObjHeader;

typedef struct {
  char name[32];
  uint64_t size;
  uint64_t align;
  uint8_t flags; // bit0=alloc, bit1=exec, bit2=write
  uint8_t kind;
  uint16_t reserved;
  uint64_t offset; // file offset to raw data
} __attribute__((packed)) ObjSection;

typedef struct {
  char name[32];
  int32_t section; // -1 undef, -2 abs, -3 common, >=0 section index
  uint32_t reserved;
  uint64_t value;
  uint64_t size;
  uint32_t align;
  uint8_t visibility; // 0 local, 1 global
  uint8_t type;       // 0 none, 1 func, 2 obj
  uint16_t pad;
} __attribute__((packed)) ObjSymbol;

typedef struct {
  int32_t section;
  int32_t symbol;
  uint64_t offset;
  int64_t addend;
  uint32_t type;
  uint32_t reserved;
} __attribute__((packed)) ObjReloc;

enum {
  SECTION_FLAG_ALLOC = 1 << 0,
  SECTION_FLAG_EXEC = 1 << 1,
  SECTION_FLAG_WRITE = 1 << 2,
};

enum {
  SYM_UNDEF = -1,
  SYM_ABS = -2,
  SYM_COMMON = -3,
};

enum RelocType {
  RELOC_ABS64,
  RELOC_HI20,
  RELOC_LO12_I,
  RELOC_LO12_S,
  RELOC_PCREL_HI20,
  RELOC_PCREL_LO12_I,
  RELOC_PCREL_LO12_S,
  RELOC_BRANCH,
  RELOC_JAL,
  RELOC_CALL,
  RELOC_TPREL_HI20,
  RELOC_TPREL_LO12_I,
  RELOC_TPREL_LO12_S,
};

// ─────────────────────────────────────────────────────────────────────────────
// Growable vector helper

#define DECL_VEC(Type, Name)                                                   \
  typedef struct {                                                             \
    Type *data;                                                                \
    size_t len;                                                                \
    size_t cap;                                                                \
  } Name;                                                                      \
                                                                              \
  static void Name##_push(Name *vec, Type value) {                             \
    if (vec->len == vec->cap) {                                                \
      size_t new_cap = vec->cap ? vec->cap * 2 : 16;                           \
      vec->data = xrealloc(vec->data, new_cap * sizeof(Type));                 \
      vec->cap = new_cap;                                                      \
    }                                                                          \
    vec->data[vec->len++] = value;                                             \
  }

// ─────────────────────────────────────────────────────────────────────────────
// In-memory representation of input object

typedef struct {
  char *name;
  ObjHeader hdr;
  ObjSection *secs;
  ObjSymbol *syms;
  ObjReloc *rels;
  uint8_t *raw; // entire file mapping
} Object;

DECL_VEC(Object, ObjectVec)

static ObjectVec objects;

// Output sections
typedef enum {
  OUT_TEXT,
  OUT_RODATA,
  OUT_DATA,
  OUT_BSS,
  OUT_TDATA,
  OUT_TBSS,
  OUT_SEC_COUNT
} OutputSectionId;

typedef struct {
  const char *name;
  bool alloc;
  bool exec;
  bool write;
  uint8_t *data;
  size_t size;
  size_t cap;
  size_t alignment;
  uint64_t vaddr;
  uint64_t fileoff;
} OutputSection;

static OutputSection out_sections[OUT_SEC_COUNT] = {
    [OUT_TEXT] = {.name = ".text", .alloc = true, .exec = true, .write = false},
    [OUT_RODATA] = {.name = ".rodata", .alloc = true, .exec = false, .write = false},
    [OUT_DATA] = {.name = ".data", .alloc = true, .exec = false, .write = true},
    [OUT_BSS] = {.name = ".bss", .alloc = true, .exec = false, .write = true},
    [OUT_TDATA] = {.name = ".tdata", .alloc = true, .exec = false, .write = true},
    [OUT_TBSS] = {.name = ".tbss", .alloc = true, .exec = false, .write = true},
};

typedef struct {
  Object *obj;
  int input_section;     // index into object's sections
  OutputSectionId out_id;
  uint64_t out_offset;   // offset within output section where this chunk starts
} SectionMapping;

DECL_VEC(SectionMapping, SectionMapVec)

static SectionMapVec section_map;

// Global symbol table entry for linker
typedef struct {
  char *name;
  bool defined;
  OutputSectionId out_sec;
  uint64_t value; // address (for defined) or BSS offset for commons
  uint64_t size;
  uint32_t align;
  bool is_common;
  bool is_absolute;
} GlobalSymbol;

DECL_VEC(GlobalSymbol, GlobalSymbolVec)

static GlobalSymbolVec globals;

static GlobalSymbol *find_global(const char *name) {
  for (size_t i = 0; i < globals.len; i++) {
    if (strcmp(globals.data[i].name, name) == 0)
      return &globals.data[i];
  }
  return NULL;
}

static GlobalSymbol *get_or_create_global(const char *name) {
  GlobalSymbol *sym = find_global(name);
  if (sym)
    return sym;
  GlobalSymbol tmp = {
      .name = xstrdup(name),
      .defined = false,
      .out_sec = OUT_TEXT,
      .value = 0,
      .size = 0,
      .align = 1,
      .is_common = false,
      .is_absolute = false,
  };
  GlobalSymbolVec_push(&globals, tmp);
  return &globals.data[globals.len - 1];
}

static OutputSectionId map_section_name(const char *name) {
  if (strcmp(name, ".text") == 0)
    return OUT_TEXT;
  if (strcmp(name, ".rodata") == 0)
    return OUT_RODATA;
  if (strcmp(name, ".data") == 0)
    return OUT_DATA;
  if (strcmp(name, ".bss") == 0)
    return OUT_BSS;
  if (strcmp(name, ".tdata") == 0)
    return OUT_TDATA;
  if (strcmp(name, ".tbss") == 0)
    return OUT_TBSS;
  // default: treat unknown alloc/non-alloc based on flags
  return OUT_DATA;
}

static void out_append(OutputSectionId id, const uint8_t *data, size_t size,
                       size_t align, uint64_t *out_offset) {
  OutputSection *sec = &out_sections[id];
  if (align == 0)
    align = 1;
  if (sec->alignment < align)
    sec->alignment = align;
  size_t mask = align - 1;
  size_t padding = (-sec->size) & mask;
  if (padding) {
    if (sec->cap < sec->size + padding) {
      size_t new_cap = sec->cap ? sec->cap * 2 : 64;
      while (new_cap < sec->size + padding)
        new_cap *= 2;
      sec->data = xrealloc(sec->data, new_cap);
      sec->cap = new_cap;
    }
    memset(sec->data + sec->size, 0, padding);
    sec->size += padding;
  }

  if (out_offset)
    *out_offset = sec->size;

  if (size == 0)
    return;

  if (sec->cap < sec->size + size) {
    size_t new_cap = sec->cap ? sec->cap * 2 : 64;
    while (new_cap < sec->size + size)
      new_cap *= 2;
    sec->data = xrealloc(sec->data, new_cap);
    sec->cap = new_cap;
  }

  memcpy(sec->data + sec->size, data, size);
  sec->size += size;
}

static void load_object(const char *path) {
  int fd = open(path, O_RDONLY, 0);
  if (fd < 0)
    fatal("failed to open %s", path);

  size_t cap = 4096;
  uint8_t *buf = xmalloc(cap);
  size_t size = 0;

  for (;;) {
    if (cap - size < 1024) {
      cap = cap ? cap * 2 : 4096;
      buf = xrealloc(buf, cap);
    }
    long n = read(fd, buf + size, (long)(cap - size));
    if (n < 0)
      fatal("failed to read %s", path);
    if (n == 0)
      break;
    size += (size_t)n;
  }
  close(fd);

  if (size < sizeof(ObjHeader))
    fatal("%s: file too small", path);

  buf = xrealloc(buf, size);

  Object obj = {.name = xstrdup(path), .raw = buf};
  memcpy(&obj.hdr, buf, sizeof(ObjHeader));
  if (obj.hdr.magic != 0x4d4f424a)
    fatal("%s: invalid object magic", path);
  if (obj.hdr.version != 1)
    fatal("%s: unsupported version", path);

  size_t off = sizeof(ObjHeader);
  obj.secs = (ObjSection *)(buf + off);
  off += obj.hdr.section_cnt * sizeof(ObjSection);
  obj.syms = (ObjSymbol *)(buf + off);
  off += obj.hdr.symbol_cnt * sizeof(ObjSymbol);
  obj.rels = (ObjReloc *)(buf + off);
  off += obj.hdr.reloc_cnt * sizeof(ObjReloc);

  if (off > size)
    fatal("%s: truncated object", path);

  ObjectVec_push(&objects, obj);
}

// Build section mapping and copy raw data into output buffers
static void merge_sections(void) {
  for (size_t i = 0; i < objects.len; i++) {
    Object *obj = &objects.data[i];
    for (int s = 0; s < obj->hdr.section_cnt; s++) {
      ObjSection *sec = &obj->secs[s];
      OutputSectionId out_id = map_section_name(sec->name);
      uint64_t out_off = 0;

      const uint8_t *data = obj->raw + sec->offset;
      if (sec->flags & SECTION_FLAG_ALLOC) {
        if (out_id == OUT_BSS || out_id == OUT_TBSS) {
          // BSS: no data copy, just reserve size
          OutputSection *out = &out_sections[out_id];
          size_t align = sec->align ? sec->align : 1;
          if (out->alignment < align)
            out->alignment = align;
          size_t mask = align - 1;
          size_t padding = (-out->size) & mask;
          out->size += padding + sec->size;
          out_off = out->size - sec->size;
        } else {
          out_append(out_id, data, sec->size, sec->align, &out_off);
        }
      }

      SectionMapping map = {
          .obj = obj,
          .input_section = s,
          .out_id = out_id,
          .out_offset = out_off,
      };
      SectionMapVec_push(&section_map, map);
    }
  }
}

static SectionMapping *find_section_mapping(Object *obj, int sec_index) {
  for (size_t i = 0; i < section_map.len; i++) {
    SectionMapping *m = &section_map.data[i];
    if (m->obj == obj && m->input_section == sec_index)
      return m;
  }
  return NULL;
}

static GlobalSymbol *resolve_symbol(Object *obj, ObjSymbol *sym) {
  if (sym->section == SYM_UNDEF)
    return get_or_create_global(sym->name);

  if (sym->section == SYM_ABS) {
    GlobalSymbol *g = get_or_create_global(sym->name);
    g->defined = true;
    g->is_absolute = true;
    g->value = sym->value;
    return g;
  }

  if (sym->section == SYM_COMMON) {
    GlobalSymbol *g = get_or_create_global(sym->name);
    if (!g->is_common) {
      g->is_common = true;
      g->align = sym->align ? sym->align : 1;
      g->size = sym->size;
      g->value = 0; // will assign later in BSS
    } else {
      if (sym->size > g->size)
        g->size = sym->size;
      if (sym->align > g->align)
        g->align = sym->align;
    }
    return g;
  }

  SectionMapping *map = find_section_mapping(obj, sym->section);
  if (!map)
    fatal("internal: section mapping missing for %s", sym->name);

  GlobalSymbol *g = get_or_create_global(sym->name);
  if (g->defined && !g->is_common && !g->is_absolute)
    fatal("multiple definition of symbol %s", sym->name);

  g->defined = true;
  g->is_absolute = false;
  g->is_common = false;
  g->out_sec = map->out_id;
  g->value = map->out_offset + sym->value;
  g->size = sym->size;
  if (sym->align > g->align)
    g->align = sym->align;
  return g;
}

static void collect_symbols(void) {
  for (size_t i = 0; i < objects.len; i++) {
    Object *obj = &objects.data[i];
    for (uint32_t s = 0; s < obj->hdr.symbol_cnt; s++) {
      ObjSymbol *sym = &obj->syms[s];
      if (sym->visibility == 0 && sym->section >= 0)
        continue; // local symbol - resolved via relocations when needed
      resolve_symbol(obj, sym);
    }
  }
}

static void allocate_commons(void) {
  OutputSection *bss = &out_sections[OUT_BSS];
  for (size_t i = 0; i < globals.len; i++) {
    GlobalSymbol *g = &globals.data[i];
    if (!g->is_common)
      continue;
    size_t align = g->align ? g->align : 1;
    if (bss->alignment < align)
      bss->alignment = align;
    size_t mask = align - 1;
    size_t padding = (-bss->size) & mask;
    bss->size += padding;
    g->value = bss->size;
    g->out_sec = OUT_BSS;
    bss->size += g->size;
    g->defined = true;
  }
}

static uint64_t get_symbol_address(GlobalSymbol *g) {
  if (!g->defined)
    fatal("undefined symbol %s", g->name);
  if (g->is_absolute)
    return g->value;
  OutputSection *out = &out_sections[g->out_sec];
  return out->vaddr + g->value;
}

// helper to write immediate bits for relocations
static void patch_hi20(uint32_t *word, uint32_t imm) {
  *word &= 0x00000fff;
  *word |= (imm & 0xfffff) << 12;
}

static void patch_lo12_i(uint32_t *word, int32_t imm) {
  *word &= 0xfffff000;
  *word |= (imm & 0xfff) << 20;
}

static void patch_lo12_s(uint32_t *word, int32_t imm) {
  uint32_t high = (imm >> 5) & 0x7f;
  uint32_t low = imm & 0x1f;
  *word &= 0x1fff07f;
  *word |= high << 25;
  *word |= low << 7;
}

static void patch_branch(uint32_t *word, int32_t imm) {
  uint32_t b = *word;
  b &= ~(0x80000000u | 0x7e000000u | 0x00000f00u | 0x00000080u);
  b |= ((imm >> 12) & 1) << 31;
  b |= ((imm >> 5) & 0x3f) << 25;
  b |= ((imm >> 1) & 0xf) << 8;
  b |= ((imm >> 11) & 1) << 7;
  *word = b;
}

static void patch_jal(uint32_t *word, int32_t imm) {
  uint32_t j = *word & 0x00000fff;
  j |= ((imm >> 20) & 1) << 31;
  j |= ((imm >> 12) & 0xff) << 12;
  j |= ((imm >> 11) & 1) << 20;
  j |= ((imm >> 1) & 0x3ff) << 21;
  *word = j;
}

static int64_t signed_imm(int bits, int64_t value) {
  int64_t limit = 1LL << (bits - 1);
  if (value < -limit || value >= limit)
    fatal("relocation offset out of range");
  return value;
}

static void apply_relocations(void) {
  // Temporary global for local symbol reuse
  GlobalSymbol *local_tmp = get_or_create_global("__local_temp");

  for (size_t i = 0; i < objects.len; i++) {
    Object *obj = &objects.data[i];
    for (uint32_t r = 0; r < obj->hdr.reloc_cnt; r++) {
      ObjReloc *rel = &obj->rels[r];
      SectionMapping *map = find_section_mapping(obj, rel->section);
      if (!map)
        fatal("reloc references invalid section");
      OutputSection *out_sec = &out_sections[map->out_id];
      uint8_t *data = out_sec->data;
      uint64_t loc_offset = map->out_offset + rel->offset;
      uint64_t loc_addr = out_sec->vaddr + loc_offset;

      GlobalSymbol *sym;
      ObjSymbol *sym_rec = &obj->syms[rel->symbol];
      if (sym_rec->visibility == 0 && sym_rec->section >= 0) {
        // local symbol; reuse temp holder
        SectionMapping *ls_map = find_section_mapping(obj, sym_rec->section);
        if (!ls_map)
          fatal("missing mapping for local symbol");
        local_tmp->defined = true;
        local_tmp->is_absolute = false;
        local_tmp->out_sec = ls_map->out_id;
        local_tmp->value = ls_map->out_offset + sym_rec->value;
        sym = local_tmp;
      } else {
        sym = get_or_create_global(sym_rec->name);
      }

      uint64_t sym_addr = get_symbol_address(sym);
      int64_t addend = rel->addend;

      uint32_t *word = (uint32_t *)(data + loc_offset);

      switch (rel->type) {
      case RELOC_ABS64: {
        uint64_t val = sym_addr + addend;
        memcpy(data + loc_offset, &val, sizeof(uint64_t));
        break;
      }
      case RELOC_HI20: {
        uint64_t val = sym_addr + addend;
        uint32_t hi = (uint32_t)((val + 0x800) >> 12);
        patch_hi20(word, hi);
        break;
      }
      case RELOC_LO12_I: {
        int32_t imm = (int32_t)((sym_addr + addend) & 0xfff);
        patch_lo12_i(word, imm);
        break;
      }
      case RELOC_LO12_S: {
        int32_t imm = (int32_t)((sym_addr + addend) & 0xfff);
        patch_lo12_s(word, imm);
        break;
      }
      case RELOC_PCREL_HI20: {
        int64_t delta = (int64_t)(sym_addr + addend - loc_addr);
        uint32_t hi = (uint32_t)(((delta + 0x800) >> 12) & 0xfffff);
        patch_hi20(word, hi);
        break;
      }
      case RELOC_PCREL_LO12_I: {
        int64_t delta = (int64_t)(sym_addr + addend - loc_addr);
        int32_t imm = (int32_t)(delta & 0xfff);
        patch_lo12_i(word, imm);
        break;
      }
      case RELOC_PCREL_LO12_S: {
        int64_t delta = (int64_t)(sym_addr + addend - loc_addr);
        int32_t imm = (int32_t)(delta & 0xfff);
        patch_lo12_s(word, imm);
        break;
      }
      case RELOC_BRANCH: {
        int64_t delta = (int64_t)(sym_addr + addend - loc_addr);
        delta = signed_imm(13, delta);
        patch_branch(word, (int32_t)delta);
        break;
      }
      case RELOC_JAL:
      case RELOC_CALL: {
        int64_t delta = (int64_t)(sym_addr + addend - loc_addr);
        delta = signed_imm(21, delta);
        patch_jal(word, (int32_t)delta);
        break;
      }
      case RELOC_TPREL_HI20:
      case RELOC_TPREL_LO12_I:
      case RELOC_TPREL_LO12_S:
        fatal("TLS relocations not supported yet");
        break;
      default:
        fatal("unknown relocation type %u", rel->type);
      }
    }
  }
}

// Layout: mimic user.ld (base 0x20000). We'll create two load segments:
// text|rodata (RX) and data|bss (RW)

static void layout_sections(void) {
  uint64_t base = 0x20000;
  uint64_t addr = base;

  // Text
  OutputSection *text = &out_sections[OUT_TEXT];
  size_t align = text->alignment ? text->alignment : 16;
  addr = (addr + align - 1) & ~(align - 1);
  text->vaddr = addr;
  addr += text->size;

  // Rodata
  OutputSection *rodata = &out_sections[OUT_RODATA];
  align = rodata->alignment ? rodata->alignment : 16;
  addr = (addr + align - 1) & ~(align - 1);
  rodata->vaddr = addr;
  addr += rodata->size;

  // Data
  OutputSection *data = &out_sections[OUT_DATA];
  align = data->alignment ? data->alignment : 16;
  addr = (addr + align - 1) & ~(align - 1);
  data->vaddr = addr;
  addr += data->size;

  // BSS
  OutputSection *bss = &out_sections[OUT_BSS];
  align = bss->alignment ? bss->alignment : 16;
  addr = (addr + align - 1) & ~(align - 1);
  bss->vaddr = addr;
  addr += bss->size;

  // tdata/tbss currently unused but align to data
  OutputSection *tdata = &out_sections[OUT_TDATA];
  if (tdata->size) {
    align = tdata->alignment ? tdata->alignment : 16;
    addr = (addr + align - 1) & ~(align - 1);
    tdata->vaddr = addr;
    addr += tdata->size;
  }
  OutputSection *tbss = &out_sections[OUT_TBSS];
  if (tbss->size) {
    align = tbss->alignment ? tbss->alignment : 16;
    addr = (addr + align - 1) & ~(align - 1);
    tbss->vaddr = addr;
    addr += tbss->size;
  }
}

// ELF constants
#define EI_NIDENT 16

typedef struct {
  unsigned char e_ident[EI_NIDENT];
  uint16_t e_type;
  uint16_t e_machine;
  uint32_t e_version;
  uint64_t e_entry;
  uint64_t e_phoff;
  uint64_t e_shoff;
  uint32_t e_flags;
  uint16_t e_ehsize;
  uint16_t e_phentsize;
  uint16_t e_phnum;
  uint16_t e_shentsize;
  uint16_t e_shnum;
  uint16_t e_shstrndx;
} Elf64_Ehdr;

typedef struct {
  uint32_t p_type;
  uint32_t p_flags;
  uint64_t p_offset;
  uint64_t p_vaddr;
  uint64_t p_paddr;
  uint64_t p_filesz;
  uint64_t p_memsz;
  uint64_t p_align;
} Elf64_Phdr;

typedef struct {
  uint32_t sh_name;
  uint32_t sh_type;
  uint64_t sh_flags;
  uint64_t sh_addr;
  uint64_t sh_offset;
  uint64_t sh_size;
  uint32_t sh_link;
  uint32_t sh_info;
  uint64_t sh_addralign;
  uint64_t sh_entsize;
} Elf64_Shdr;

enum {
  ET_EXEC = 2,
  EM_RISCV = 243,
  EV_CURRENT = 1,
  PT_LOAD = 1,
  PF_X = 1,
  PF_W = 2,
  PF_R = 4,
  SHT_NULL = 0,
  SHT_PROGBITS = 1,
  SHT_NOBITS = 8,
};

static int shstr_add(char *buf, int *len, const char *str) {
  int off = *len;
  size_t sl = strlen(str) + 1;
  memcpy(buf + *len, str, sl);
  *len += sl;
  return off;
}

static void write_elf(const char *output_path, const char *entry_symbol) {
  GlobalSymbol *entry = find_global(entry_symbol);
  if (!entry || !entry->defined)
    fatal("entry point symbol %s not defined", entry_symbol);
  uint64_t entry_addr = get_symbol_address(entry);

  // Determine file offsets for sections: we'll write sequentially after headers
  Elf64_Ehdr eh = {0};
  eh.e_ident[0] = 0x7f;
  eh.e_ident[1] = 'E';
  eh.e_ident[2] = 'L';
  eh.e_ident[3] = 'F';
  eh.e_ident[4] = 2; // 64-bit
  eh.e_ident[5] = 1; // little-endian
  eh.e_ident[6] = 1; // version
  eh.e_type = ET_EXEC;
  eh.e_machine = EM_RISCV;
  eh.e_version = EV_CURRENT;
  eh.e_entry = entry_addr;
  eh.e_ehsize = sizeof(Elf64_Ehdr);
  eh.e_phentsize = sizeof(Elf64_Phdr);
  eh.e_shentsize = sizeof(Elf64_Shdr);

  // We'll produce 2 program headers: RX (text+rodata) and RW (data+bss)
  eh.e_phnum = 2;

  // We'll output 5 section headers: NULL, .text, .rodata, .data, .bss, .shstrtab
  eh.e_shnum = 6;
  eh.e_shstrndx = 5;

  size_t offset = sizeof(Elf64_Ehdr) + eh.e_phnum * sizeof(Elf64_Phdr);

  // Align text to 16 bytes
  offset = (offset + 15) & ~15ULL;
  out_sections[OUT_TEXT].fileoff = offset;
  offset += out_sections[OUT_TEXT].size;

  offset = (offset + 15) & ~15ULL;
  out_sections[OUT_RODATA].fileoff = offset;
  offset += out_sections[OUT_RODATA].size;

  offset = (offset + 15) & ~15ULL;
  out_sections[OUT_DATA].fileoff = offset;
  offset += out_sections[OUT_DATA].size;

  // .bss has no file size but needs virtual address (vaddr already computed)
  offset = (offset + 15) & ~15ULL;
  size_t shstr_offset = offset;

  char shstrtab[256];
  int shstrlen = 1; // start with NUL
  shstrtab[0] = '\0';
  int off_text = shstr_add(shstrtab, &shstrlen, ".text");
  int off_rodata = shstr_add(shstrtab, &shstrlen, ".rodata");
  int off_data = shstr_add(shstrtab, &shstrlen, ".data");
  int off_bss = shstr_add(shstrtab, &shstrlen, ".bss");
  int off_shstr = shstr_add(shstrtab, &shstrlen, ".shstrtab");

  eh.e_shoff = shstr_offset + shstrlen;

  Elf64_Phdr ph[2] = {0};

  // RX segment (text + rodata)
  ph[0].p_type = PT_LOAD;
  ph[0].p_flags = PF_R | PF_X;
  ph[0].p_offset = out_sections[OUT_TEXT].fileoff;
  ph[0].p_vaddr = out_sections[OUT_TEXT].vaddr;
  ph[0].p_paddr = ph[0].p_vaddr;
  ph[0].p_filesz = (out_sections[OUT_RODATA].fileoff + out_sections[OUT_RODATA].size) - out_sections[OUT_TEXT].fileoff;
  ph[0].p_memsz = (out_sections[OUT_RODATA].vaddr + out_sections[OUT_RODATA].size) - out_sections[OUT_TEXT].vaddr;
  ph[0].p_align = 0x1000;

  // RW segment (data + bss)
  ph[1].p_type = PT_LOAD;
  ph[1].p_flags = PF_R | PF_W;
  ph[1].p_offset = out_sections[OUT_DATA].fileoff;
  ph[1].p_vaddr = out_sections[OUT_DATA].vaddr;
  ph[1].p_paddr = ph[1].p_vaddr;
  ph[1].p_filesz = out_sections[OUT_DATA].size;
  ph[1].p_memsz = out_sections[OUT_DATA].size + out_sections[OUT_BSS].size;
  ph[1].p_align = 0x1000;

  // Build section headers
  Elf64_Shdr sh[6] = {0};
  sh[1].sh_name = off_text;
  sh[1].sh_type = SHT_PROGBITS;
  sh[1].sh_flags = PF_R | PF_X;
  sh[1].sh_addr = out_sections[OUT_TEXT].vaddr;
  sh[1].sh_offset = out_sections[OUT_TEXT].fileoff;
  sh[1].sh_size = out_sections[OUT_TEXT].size;
  sh[1].sh_addralign = out_sections[OUT_TEXT].alignment ? out_sections[OUT_TEXT].alignment : 16;

  sh[2].sh_name = off_rodata;
  sh[2].sh_type = SHT_PROGBITS;
  sh[2].sh_flags = PF_R;
  sh[2].sh_addr = out_sections[OUT_RODATA].vaddr;
  sh[2].sh_offset = out_sections[OUT_RODATA].fileoff;
  sh[2].sh_size = out_sections[OUT_RODATA].size;
  sh[2].sh_addralign = out_sections[OUT_RODATA].alignment ? out_sections[OUT_RODATA].alignment : 16;

  sh[3].sh_name = off_data;
  sh[3].sh_type = SHT_PROGBITS;
  sh[3].sh_flags = PF_R | PF_W;
  sh[3].sh_addr = out_sections[OUT_DATA].vaddr;
  sh[3].sh_offset = out_sections[OUT_DATA].fileoff;
  sh[3].sh_size = out_sections[OUT_DATA].size;
  sh[3].sh_addralign = out_sections[OUT_DATA].alignment ? out_sections[OUT_DATA].alignment : 16;

  sh[4].sh_name = off_bss;
  sh[4].sh_type = SHT_NOBITS;
  sh[4].sh_flags = PF_R | PF_W;
  sh[4].sh_addr = out_sections[OUT_BSS].vaddr;
  sh[4].sh_offset = 0;
  sh[4].sh_size = out_sections[OUT_BSS].size;
  sh[4].sh_addralign = out_sections[OUT_BSS].alignment ? out_sections[OUT_BSS].alignment : 16;

  sh[5].sh_name = off_shstr;
  sh[5].sh_type = SHT_PROGBITS;
  sh[5].sh_flags = PF_R;
  sh[5].sh_addr = 0;
  sh[5].sh_offset = shstr_offset;
  sh[5].sh_size = shstrlen;
  sh[5].sh_addralign = 1;

  eh.e_shoff = shstr_offset + shstrlen;

  FILE *fp = fopen(output_path, "wb");
  if (!fp)
    fatal("failed to open %s for writing", output_path);

  fwrite(&eh, sizeof(eh), 1, fp);
  fwrite(ph, sizeof(ph[0]), eh.e_phnum, fp);

  size_t cur = sizeof(Elf64_Ehdr) + eh.e_phnum * sizeof(Elf64_Phdr);
  size_t target = out_sections[OUT_TEXT].fileoff;
  if (target > cur)
    fwrite((char[16]){0}, 1, target - cur, fp);
  fwrite(out_sections[OUT_TEXT].data, 1, out_sections[OUT_TEXT].size, fp);

  cur = target + out_sections[OUT_TEXT].size;
  target = out_sections[OUT_RODATA].fileoff;
  if (target > cur)
    fwrite((char[16]){0}, 1, target - cur, fp);
  fwrite(out_sections[OUT_RODATA].data, 1, out_sections[OUT_RODATA].size, fp);

  cur = target + out_sections[OUT_RODATA].size;
  target = out_sections[OUT_DATA].fileoff;
  if (target > cur)
    fwrite((char[16]){0}, 1, target - cur, fp);
  fwrite(out_sections[OUT_DATA].data, 1, out_sections[OUT_DATA].size, fp);

  cur = target + out_sections[OUT_DATA].size;
  target = shstr_offset;
  if (target > cur)
    fwrite((char[16]){0}, 1, target - cur, fp);
  fwrite(shstrtab, 1, shstrlen, fp);

  fwrite(sh, sizeof(sh[0]), eh.e_shnum, fp);

  fclose(fp);
}

// ─────────────────────────────────────────────────────────────────────────────
// Entry point

static void usage(void) {
  fprintf(stderr, "usage: ld [-o output] [-e entry] file.o ...\n");
  exit(1);
}

int main(int argc, char **argv) {
  const char *output_path = "a.out";
  const char *entry_symbol = "_start";

  int i = 1;
  for (; i < argc; i++) {
    if (strcmp(argv[i], "-o") == 0) {
      if (++i >= argc)
        usage();
      output_path = argv[i];
    } else if (strcmp(argv[i], "-e") == 0) {
      if (++i >= argc)
        usage();
      entry_symbol = argv[i];
    } else if (argv[i][0] == '-') {
      usage();
    } else {
      break;
    }
  }

  if (i >= argc)
    usage();

  for (; i < argc; i++)
    load_object(argv[i]);

  merge_sections();
  collect_symbols();
  allocate_commons();
  layout_sections();
  apply_relocations();
  write_elf(output_path, entry_symbol);

  return 0;
}
