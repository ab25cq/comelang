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

pagetable_t uvmcreate() {
    pagetable_t pagetable = (pagetable_t)kalloc();
    memset(pagetable, 0, PGSIZE);
    return pagetable;
}

extern void puts(const char* s);


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

void uvmunmap(pagetable_t pagetable, uint64_t va, uint64_t npages, int do_free)
{
  uint64_t a;
  pte_t *pte;

  if((va % PGSIZE) != 0)
    puts("uvmunmap: not aligned");

  for(a = va; a < va + npages*PGSIZE; a += PGSIZE){
    if((pte = walk(pagetable, a, 0)) == 0)
      puts("uvmunmap: walk");
    if((*pte & PTE_V) == 0)
      puts("uvmunmap: not mapped");
    if(PTE_FLAGS(*pte) == PTE_V)
      puts("uvmunmap: not a leaf");
    if(do_free){
      uint64_t pa = PTE2PA(*pte);
      kfree((void*)pa);
    }
    *pte = 0;
  }
}

uint64_t uvmdealloc(pagetable_t pagetable, uint64_t oldsz, uint64_t newsz)
{
  if(newsz >= oldsz)
    return oldsz;

  if(PGROUNDUP(newsz) < PGROUNDUP(oldsz)){
    int npages = (PGROUNDUP(oldsz) - PGROUNDUP(newsz)) / PGSIZE;
    uvmunmap(pagetable, PGROUNDUP(newsz), npages, 1);
  }

  return newsz;
}

int mappages(pagetable_t pagetable, uint64_t va, uint64_t size, uint64_t pa, int perm);

uint64_t uvmalloc(pagetable_t pagetable, uint64_t oldsz, uint64_t newsz, int xperm)
{
  char *mem;
  uint64_t a;

  if(newsz < oldsz)
    return oldsz;

  oldsz = PGROUNDUP(oldsz);
  for(a = oldsz; a < newsz; a += PGSIZE){
    mem = kalloc();
    if(mem == 0){
      uvmdealloc(pagetable, a, oldsz);
      return 0;
    }
    memset(mem, 0, PGSIZE);
    if(mappages(pagetable, a, PGSIZE, (uint64_t)mem, PTE_R|PTE_U|xperm) != 0){
      kfree(mem);
      uvmdealloc(pagetable, a, oldsz);
      return 0;
    }
  }
  return newsz;
}

void* memmove(void *dst, const void *src, unsigned int n);

int copyout(pagetable_t pagetable, uint64_t dstva, char *src, uint64_t len)
{
  uint64_t n, va0, pa0;
  pte_t *pte;

  while(len > 0){
    va0 = PGROUNDDOWN(dstva);
    if(va0 >= MAXVA)
      return -1;
    pte = walk(pagetable, va0, 0);
    if(pte == 0 || (*pte & PTE_V) == 0 || (*pte & PTE_U) == 0 ||
       (*pte & PTE_W) == 0)
      return -1;
    pa0 = PTE2PA(*pte);
    n = PGSIZE - (dstva - va0);
    if(n > len)
      n = len;
    memmove((void *)(pa0 + (dstva - va0)), src, n);

    len -= n;
    src += n;
    dstva = va0 + PGSIZE;
  }
  return 0;
}

uint64_t walkaddr(pagetable_t pagetable, uint64_t va)
{
    pte_t *pte;
    uint64_t pa;

    if(va >= MAXVA)
        return 0;

    pte = walk(pagetable, va, 0);
    if(pte == 0)
        return 0;
    if((*pte & PTE_V) == 0)
        return 0;
    if((*pte & PTE_U) == 0)
        return 0;
    pa = PTE2PA(*pte);
    return pa;
}

int copyin(pagetable_t pagetable, char *dst, uint64_t srcva, uint64_t len)
{
    uint64_t n, va0, pa0;

    while(len > 0){
        va0 = PGROUNDDOWN(srcva);
        pa0 = walkaddr(pagetable, va0);
        if(pa0 == 0)
            return -1;
        n = PGSIZE - (srcva - va0);
        if(n > len)
            n = len;
        memmove(dst, (void *)(pa0 + (srcva - va0)), n);

        len -= n;
        dst += n;
        srcva = va0 + PGSIZE;
    }
    
    return 0;
}

int printf(const char* fmt, ...);

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
            printf("mappages: remap %p", va);
        *pte = PA2PTE(pa) | perm | PTE_V;
        if(a == last)
            break;
        a += PGSIZE;
        pa += PGSIZE;
    }
    return 0;
}


pagetable_t kernel_pagetable;

void mmu_init() {
    kernel_pagetable = (pagetable_t)kalloc();
    memset(kernel_pagetable, 0, PGSIZE);

    // 0x80000000
    for (uint64_t addr = KERNBASE; addr < 0x81000000; addr += PGSIZE) {
        mappages(kernel_pagetable, addr, PGSIZE, addr, PTE_R | PTE_W | PTE_X | PTE_V);
    }

    // UART
    mappages(kernel_pagetable, 0x10000000, PGSIZE, 0x10000000, PTE_R | PTE_W | PTE_V);
}
