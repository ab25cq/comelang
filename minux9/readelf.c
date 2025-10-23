// readelf_min.c - very small readelf for Minux9
#include "minux.h"

#include <stdint.h>

#ifndef SEEK_SET
#define SEEK_SET 0
#define SEEK_CUR 1
#define SEEK_END 2
#endif


// ---- ELF64 structures (LE) ----
typedef struct {
  unsigned char e_ident[16];
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

typedef struct {
  uint32_t st_name;
  unsigned char st_info;
  unsigned char st_other;
  uint16_t st_shndx;
  uint64_t st_value;
  uint64_t st_size;
} Elf64_Sym;


// ---- ELF constants we need ----
#define EI_MAG0 0
#define EI_MAG1 1
#define EI_MAG2 2
#define EI_MAG3 3
#define EI_CLASS 4
#define EI_DATA  5
#define EI_VERSION 6
#define EI_OSABI 7

#define ELFMAG0 0x7f
#define ELFMAG1 'E'
#define ELFMAG2 'L'
#define ELFMAG3 'F'
#define ELFCLASS64 2
#define ELFDATA2LSB 1

#define ET_EXEC 2
#define ET_DYN  3

#define EM_RISCV 243

#define PT_LOAD 1

#define SHT_NULL    0
#define SHT_PROGBITS 1
#define SHT_SYMTAB  2
#define SHT_STRTAB  3
#define SHT_NOBITS  8

#define STB_LOCAL  0
#define STB_GLOBAL 1
#define STT_NOTYPE 0
#define STT_OBJECT 1
#define STT_FUNC   2

#define PF_X 0x1
#define PF_W 0x2
#define PF_R 0x4

static const char* secname(const char* shstr, uint32_t off, uint64_t size) {
  if (!shstr) return "(no-shstrtab)";
  if ((uint64_t)off >= size) return "(bad-name)";
  return shstr + off;
}

static int check_magic(const Elf64_Ehdr* eh) {
  return (eh->e_ident[EI_MAG0]==ELFMAG0 &&
          eh->e_ident[EI_MAG1]==ELFMAG1 &&
          eh->e_ident[EI_MAG2]==ELFMAG2 &&
          eh->e_ident[EI_MAG3]==ELFMAG3);
}

static void print_ehdr(const Elf64_Ehdr* eh) {
  printf("ELF Header:\n");
  printf("  Magic: %02x %02x %02x %02x  Class: %d  Data: %d  OSABI: %d\n",
         eh->e_ident[0], eh->e_ident[1], eh->e_ident[2], eh->e_ident[3],
         eh->e_ident[EI_CLASS], eh->e_ident[EI_DATA], eh->e_ident[EI_OSABI]);
  printf("  Type: %u  Machine: %u  Version: %u\n",
         (unsigned)eh->e_type, (unsigned)eh->e_machine, eh->e_version);
  printf("  Entry: 0x%llx  PHOFF: 0x%llx  SHOFF: 0x%llx\n",
         (unsigned long long)eh->e_entry,
         (unsigned long long)eh->e_phoff,
         (unsigned long long)eh->e_shoff);
  printf("  Flags: 0x%x  EHSize: %u  PHEnt: %u  PHNum: %u\n",
         (unsigned)eh->e_flags, eh->e_ehsize, eh->e_phentsize, eh->e_phnum);
  printf("  SHEnt: %u  SHNum: %u  SHStrNdx: %u\n",
         eh->e_shentsize, eh->e_shnum, eh->e_shstrndx);
}

static void print_phdrs(const unsigned char* buf, const Elf64_Ehdr* eh) {
  if (eh->e_phoff == 0 || eh->e_phnum == 0) {
    printf("Program Headers: (none)\n");
    return;
  }
  printf("Program Headers:\n");
  for (uint16_t i=0;i<eh->e_phnum;i++) {
    const Elf64_Phdr* ph = (const Elf64_Phdr*)(buf + eh->e_phoff + (uint64_t)i * eh->e_phentsize);
    const char* typ = (ph->p_type==PT_LOAD) ? "LOAD" : "OTHER";
    printf("  [%u] Type=%s Flags=%c%c%c Off=0x%llx Vaddr=0x%llx Filesz=0x%llx Memsz=0x%llx Align=0x%llx\n",
      (unsigned)i, typ,
      (ph->p_flags&PF_R)?'R':'-',
      (ph->p_flags&PF_W)?'W':'-',
      (ph->p_flags&PF_X)?'X':'-',
      (unsigned long long)ph->p_offset,
      (unsigned long long)ph->p_vaddr,
      (unsigned long long)ph->p_filesz,
      (unsigned long long)ph->p_memsz,
      (unsigned long long)ph->p_align);
  }
}

static void print_shdrs_and_sym(const unsigned char* buf, const Elf64_Ehdr* eh) {
  if (eh->e_shoff==0 || eh->e_shnum==0) {
    printf("Section Headers: (none)\n");
    return;
  }
  const Elf64_Shdr* sh_base = (const Elf64_Shdr*)(buf + eh->e_shoff);
  const Elf64_Shdr* sh_shstr = 0;
  const char* shstr = 0;
  uint64_t shstrsz = 0;

  if (eh->e_shstrndx < eh->e_shnum) {
    sh_shstr = &sh_base[eh->e_shstrndx];
    if (sh_shstr->sh_type == SHT_STRTAB) {
      shstr = (const char*)(buf + sh_shstr->sh_offset);
      shstrsz = sh_shstr->sh_size;
    }
  }

  printf("Section Headers:\n");
  int idx_sym = -1, idx_str = -1;
  for (uint16_t i=0;i<eh->e_shnum;i++) {
    const Elf64_Shdr* sh = &sh_base[i];
    const char* name = secname(shstr, sh->sh_name, shstrsz);
    printf("  [%u] %-12s type=%u flags=0x%llx addr=0x%llx off=0x%llx size=0x%llx link=%u entsz=0x%llx\n",
      (unsigned)i, name, (unsigned)sh->sh_type,
      (unsigned long long)sh->sh_flags,
      (unsigned long long)sh->sh_addr,
      (unsigned long long)sh->sh_offset,
      (unsigned long long)sh->sh_size,
      (unsigned)sh->sh_link,
      (unsigned long long)sh->sh_entsize);
    if (sh->sh_type == SHT_SYMTAB) idx_sym = i;
    if (sh->sh_type == SHT_STRTAB && i != eh->e_shstrndx) {
      // 普通は .strtab がこれ
      // （.dynstr がある場合は複数になるが、ミニ実装なので最初のを仮定）
      if (idx_str == -1) idx_str = i;
    }
  }

  // __global_pointer$ の位置を探す（main.c の exec が必要としている）
  if (idx_sym >= 0) {
    const Elf64_Shdr* sh_sym = &sh_base[idx_sym];
    // 可能ならリンク先の文字列表を使う
    const Elf64_Shdr* sh_str = (sh_sym->sh_link < eh->e_shnum)
                               ? &sh_base[sh_sym->sh_link]
                               : (idx_str>=0 ? &sh_base[idx_str] : 0);
    const char* strtab = sh_str ? (const char*)(buf + sh_str->sh_offset) : 0;
    uint64_t n = (sh_sym->sh_entsize ? (sh_sym->sh_size / sh_sym->sh_entsize) : 0);
    const Elf64_Sym* syms = (const Elf64_Sym*)(buf + sh_sym->sh_offset);
    uint64_t gp_val = 0;
    int found = 0;
    for (uint64_t i=0;i<n;i++) {
      const char* sname = strtab ? (strtab + syms[i].st_name) : "(no-strtab)";
      if (sname && sname[0] && sname[0]=='_' &&
          sname[1]=='_' && sname[2]=='g' && sname[3]=='l' &&
          sname[4]=='o' && sname[5]=='b' && sname[6]=='a' && sname[7]=='l' &&
          sname[8]=='_' && sname[9]=='p' && sname[10]=='o' && sname[11]=='i' &&
          sname[12]=='n' && sname[13]=='t' && sname[14]=='e' && sname[15]=='r' &&
          sname[16]=='$' && sname[17]=='\0') {
        gp_val = syms[i].st_value;
        found = 1;
        break;
      }
    }
    if (found) {
      printf("Symbol: __global_pointer$ = 0x%llx\n",
             (unsigned long long)gp_val);
    } else {
      printf("Symbol: __global_pointer$ = (not found)\n");
    }
  } else {
    printf("No SHT_SYMTAB found; cannot search __global_pointer$\n");
  }
}

int main(int argc, char** argv) {
  if (argc < 2) {
    printf("usage: readelf_min <elf-file>\n");
    return 1;
  }
  const char* path = argv[1];
  struct stat st;
  if (stat(path, &st) < 0) {
    printf("stat failed: %s\n", path);
    return 1;
  }
  if (st.size < (int)sizeof(Elf64_Ehdr)) {
    printf("too small to be ELF: size=%d\n", st.size);
    return 1;
  }

  int fd = open(path, O_RDONLY, 0);
  if (fd < 0) { printf("open failed: %s\n", path); return 1; }

  // まるごと読み込み
  unsigned long sz = (unsigned long)st.size;
  unsigned char* buf = (unsigned char*)malloc(sz);
  if (!buf) { printf("malloc failed\n"); close(fd); return 1; }

  unsigned long off = 0;
  while (off < sz) {
    int n = read(fd, buf + off, (int)(sz - off));
    if (n <= 0) break;
    off += (unsigned long)n;
  }
  close(fd);
  if (off != sz) { printf("short read: %lu/%lu\n", off, sz); free(buf); return 1; }

  const Elf64_Ehdr* eh = (const Elf64_Ehdr*)buf;
  if (!check_magic(eh)) {
    printf("Not an ELF file (bad magic)\n");
    free(buf);
    return 1;
  }
  if (eh->e_ident[EI_CLASS] != ELFCLASS64 || eh->e_ident[EI_DATA] != ELFDATA2LSB) {
    printf("Unsupported ELF class/data (need 64-bit little-endian)\n");
    free(buf);
    return 1;
  }
  print_ehdr(eh);
  if (eh->e_machine != EM_RISCV) {
    printf("Warning: e_machine=%u (expected %u=RISCV)\n", (unsigned)eh->e_machine, EM_RISCV);
  }

  print_phdrs(buf, eh);
  print_shdrs_and_sym(buf, eh);

  free(buf);
  return 0;
}

