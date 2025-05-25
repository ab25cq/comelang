#include <stdint.h>

#define PTE_V (1L << 0)
#define PTE_R (1L << 1)
#define PTE_W (1L << 2)
#define PTE_X (1L << 3)
#define PTE_U (1L << 4)

#define VA2VPN(va, level) ((((uint64_t)(va)) >> (12 + (9 * level))) & 0x1FF)

#define MAXVA (1UL << (9 + 9 + 9 + 12 - 1))
#define PTE2PA(pte) (((pte) >> 10) << 12)
#define PA2PTE(pa) ((((uint64_t)pa) >> 12) << 10)
#define PTE_FLAGS(pte) ((pte) & 0x3FF)
#define PXMASK          0x1FF // 9 bits
#define PXSHIFT(level)  (PGSHIFT+(9*(level)))
#define PGSHIFT 12  // bits of offset within a page
#define PX(level, va) ((((uint64_t) (va)) >> PXSHIFT(level)) & PXMASK)

#define PGSIZE 4096 // bytes per page
#define PGROUNDUP(sz)  (((sz)+PGSIZE-1) & ~(PGSIZE-1))
#define PGROUNDDOWN(a) (((a)) & ~(PGSIZE-1))

#define KERNBASE 0x80000000L
#define PHYSTOP (KERNBASE + 128*512)

typedef uint64_t pte_t;
typedef pte_t* pagetable_t; // 512
pagetable_t kernel_pagetable;
typedef uint64_t pde_t;
pte_t * walk(pagetable_t pagetable, uint64_t va, int alloc);

int mappages(pagetable_t pagetable, uint64_t va, uint64_t size, uint64_t pa, int perm);

typedef unsigned long  int size_t;

void *calloc(size_t nmemb, size_t size);
void free(void *ptr);

void* kalloc()
{
    return calloc(1, PGSIZE);
}

void kfree(void* ptr)
{
    free(ptr);
}

void* memset(void *dst, int c, unsigned int n);

extern void puts(const char* s);

int printf(const char* fmt, ...);

pte_t * walk(pagetable_t pagetable, uint64_t va, int alloc)
{
  if(va >= MAXVA)
    puts("walk");

  for(int level = 2; level > 0; level--) {
    pte_t *pte = &pagetable[PX(level, va)];
    if(*pte & PTE_V) {
      pagetable = (pagetable_t)PTE2PA(*pte);
    } else {
      if(!alloc || (pagetable = (pde_t*)kalloc()) == 0)
        return 0;
      memset(pagetable, 0, PGSIZE);
      *pte = PA2PTE(pagetable) | PTE_V;
    }
  }
  return &pagetable[PX(0, va)];
}

int mappages(pagetable_t pagetable, uint64_t va, uint64_t size, uint64_t pa, int perm);

void* memmove(void *dst, const void *src, unsigned int n);


int mappages(pagetable_t pagetable, uint64_t va, uint64_t size, uint64_t pa, int perm)
{
    uint64_t a, last;
    pte_t *pte;

    if((va % PGSIZE) != 0)
        puts("mappages: va not aligned");

    if((size % PGSIZE) != 0)
        puts("mappages: size not aligned");

    if(size == 0)
        puts("mappages: size");
  
    a = va;
    last = va + size - PGSIZE;
    for(;;){
        if((pte = walk(pagetable, a, 1)) == 0)
            return -1;
        if(*pte & PTE_V)
            printf("mappages: remap detected at va %p, existing pte flags 0x%lx, new perm 0x%x\n", va, *pte & 0x3FF, perm);
        *pte = PA2PTE(pa) | perm | PTE_V;
        if(a == last)
            break;
        a += PGSIZE;
        pa += PGSIZE;
    }
    return 0;
}

void dump_physical_memory(uint64_t pa, int count) {
    volatile uint32_t* ptr = (volatile uint32_t*)pa;

    for (int i = 0; i < count; i++) {
        if (i % 4 == 0)
            printf("%p: ", (uint64_t)(ptr + i));

        printf("%p ", ptr[i]);

        if (i % 4 == 3)
            puts("");
    }

    if (count % 4 != 0)
        puts("");
}

/*
void vmprint_rec(pagetable_t pagetable, int level) {
  for (int i = 0; i < 512; i++) {
    pte_t pte = pagetable[i];
    if (pte & PTE_V) {
      uint64 pa = PTE2PA(pte);
      for (int j = 0; j < level; j++)
        puts(".. ");
      printf("pte %d: pa %p\n", i, pa);


      if ((pte & (PTE_R | PTE_W | PTE_X)) != 0) {
        printf(" [leaf]");
      }
      printf(" flags: ");
      if (pte & PTE_R) printf("R");
      if (pte & PTE_W) printf("W");
      if (pte & PTE_X) printf("X");
      if (pte & PTE_U) printf("U");
      puts("");

      if ((pte & (PTE_R | PTE_W | PTE_X)) == 0) {
        vmprint_rec((pagetable_t)(pa), level + 1);
      }
    }
  }
}
*/

#define pa2kva(pa) ((void *)((uint64_t)(pa) + KERNBASE))

void vmprint_rec(pagetable_t pagetable, uint64_t va, int level) {
  for (int i = 0; i < 512; i++) {
    pte_t pte = pagetable[i];
    if (pte & PTE_V) {
      uint64_t pa = PTE2PA(pte);
      uint64_t child_va = va | ((uint64_t)i << (12 + 9 * (2 - level)));  // va

      for (int j = 0; j < level; j++)
        puts("\n.. ");
      printf("VA %p -> PA %p  (pte[%d]) (level %d)\n", child_va, pa, i, level);
      //dump_physical_memory(pa, 8);

      if ((pte & (PTE_R | PTE_W | PTE_X)) != 0) {
        printf(" [leaf]");
      }

      printf(" flags: ");
      if (pte & PTE_R) printf(" R");
      if (pte & PTE_W) printf(" W");
      if (pte & PTE_X) printf(" X");
      if (pte & PTE_U) printf(" U");
      puts("");

      if ((pte & (PTE_R | PTE_W | PTE_X)) == 0) {
        vmprint_rec((pagetable_t)pa, child_va, level + 1);
      }
    }
  }
}

void vmprint(pagetable_t pagetable) {
  puts("page table:\n");
  vmprint_rec(pagetable, 0, 0);
}

pagetable_t kernel_pagetable;

#define SATP_MODE_SV39 (8L << 60)

uint64_t make_satp(pagetable_t pagetable) {
    // pagetable は物理アドレスである必要がある
    uint64_t pa = (uint64_t)pagetable;
    return SATP_MODE_SV39 | (pa >> 12);
}

void enable_mmu(pagetable_t kernel_pagetable) {
    uint64_t satp = make_satp(kernel_pagetable);
    
    // SATP に書き込み（仮想メモリ有効化）
    asm volatile("csrw satp, %0" :: "r"(satp));
            
    // アドレス変換を反映
    asm volatile("sfence.vma zero, zero");
                    
    // mstatus は不要（SATPだけで切り替わる）
}

void mmu_init() {
    kernel_pagetable = (pagetable_t)kalloc();
    memset(kernel_pagetable, 0, PGSIZE);

    // 0x80000000
    for (uint64_t addr = KERNBASE; addr < KERNBASE + PGSIZE*20; addr += PGSIZE) {
        mappages(kernel_pagetable, addr, PGSIZE, addr, PTE_R | PTE_W | PTE_X | PTE_V);
    }

    // UART
    mappages(kernel_pagetable, 0x10000000, PGSIZE, 0x10000000, PTE_R | PTE_W | PTE_V);
    
    enable_mmu(kernel_pagetable);
}

void user_mmu_init(pagetable_t user_pagetable)
{
    user_pagetable = (pagetable_t)kalloc();
    memset(user_pagetable, 0, PGSIZE);

    // 0x80000000
    for (uint64_t addr = KERNBASE; addr < KERNBASE + PGSIZE*20; addr += PGSIZE) {
        mappages(user_pagetable, addr, PGSIZE, addr, PTE_R | PTE_W | PTE_X | PTE_V);
    }

    // UART
    mappages(user_pagetable, 0x10000000, PGSIZE, 0x10000000, PTE_R | PTE_W | PTE_V);
}
