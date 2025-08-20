#include <stdint.h>
#include <stdarg.h>

struct header
{
    struct header* next;
    unsigned int size;
};

typedef struct header Header;

struct header base;

struct header* freep = 0;

void putchar(char c);

// 必要なprintfやputcharなどの前方宣言
int printf(const char* fmt, ...);
void* malloc(unsigned int nbytes);
void free(void* ap);
int strlen(const char* s);
void* memcpy(void* dst, const void* src, unsigned int n);
void* memset(void* dst, int c, unsigned int n);

// K&R mallocの実装（grep.c.cからコピー）
// sbrk, morecore, free, malloc...

int main() {
    printf("--- Malloc Test Start ---\n");

    printf("1. Allocating 10 bytes...\n");
    char* p1 = malloc(10);
    if (p1 == 0) {
        printf("Failed!\n");
        return 1;
    }
    printf("OK. Got pointer: %p\n", p1);
    while(1);
    
    printf("2. Allocating 20 bytes...\n");
    char* p2 = malloc(20);
    if (p2 == 0) {
        printf("Failed!\n");
        return 1;
    }
    printf("OK. Got pointer: %p\n", p2);

    printf("3. Freeing first block...\n");
    free(p1);
    printf("OK.\n");

    printf("4. Allocating 5 bytes (should reuse block)...\n");
    char* p3 = malloc(5);
     if (p3 == 0) {
        printf("Failed!\n");
        return 1;
    }
    printf("OK. Got pointer: %p\n", p3);

    printf("--- Malloc Test Complete ---\n");

    return 0;
}
void* sbrk(long incr){
char* current_brk_3;
void* __result_obj__1;
void* __result_obj__2;
void* __result_obj__3;
void* __result_obj__4;
    current_brk_3=(char*)({register long _a0 asm("a0") =(long)(0);
; register long _a7 asm("a7") =74;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a7): "memory"); (int)_a0; });
    if(    current_brk_3==(char*)-1    ) {
        __result_obj__1 = (void*)-1;
        return __result_obj__1;
    }
    if(    incr==0    ) {
        __result_obj__2 = current_brk_3;
        return __result_obj__2;
    }
    if(    ({register long _a0 asm("a0") =(long)((long)(current_brk_3+incr));
; register long _a7 asm("a7") =74;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a7): "memory"); (int)_a0; })==-1    ) {
        __result_obj__3 = (void*)-1;
        return __result_obj__3;
    }
    __result_obj__4 = current_brk_3;
    return __result_obj__4;
}

struct header* morecore(unsigned int nunits){
char* cp_4;
struct header* up_5;
struct header* __result_obj__5;
struct header* __result_obj__6;
cp_4 = (void*)0;
up_5 = (void*)0;
    if(    nunits<4096    ) {
        nunits=4096;
    }
    cp_4=sbrk(nunits*sizeof(struct header));
    if(    cp_4==(char*)-1    ) {
        __result_obj__5 = (void*)0;
        return __result_obj__5;
    }
    up_5=(struct header*)cp_4;
    up_5->size=nunits;
    free((void*)(up_5+1));
    __result_obj__6 = freep;
    return __result_obj__6;
}

void* malloc(unsigned int nbytes){
struct header* p_6;
struct header* prevp_7;
unsigned int nunits_8;
void* __result_obj__7;
void* __result_obj__8;
memset(&p_6, 0, sizeof(struct header*));
memset(&prevp_7, 0, sizeof(struct header*));
memset(&nunits_8, 0, sizeof(unsigned int));
    nunits_8=(nbytes+sizeof(struct header)-1)/sizeof(struct header)+1;
    if(    (prevp_7=freep)==0    ) {
        base.next=freep=prevp_7=&base;
        base.size=0;
    }
    for(    p_6=prevp_7->next    ;    ;    prevp_7=p_6,p_6=p_6->next    ){
        if(        p_6->size>=nunits_8        ) {
            if(            p_6->size==nunits_8            ) {
                prevp_7->next=p_6->next;
            }
            else {
                p_6->size-=nunits_8;
                p_6+=p_6->size;
                p_6->size=nunits_8;
            }
            freep=prevp_7;
            __result_obj__7 = (void*)(p_6+1);
            return __result_obj__7;
        }
        if(        p_6==freep        ) {
            if(            (p_6=morecore(nunits_8))==0            ) {
                __result_obj__8 = (void*)0;
                return __result_obj__8;
            }
        }
    }
}

void free(void* ap){
struct header* bp_9;
struct header* p_10;
memset(&bp_9, 0, sizeof(struct header*));
memset(&p_10, 0, sizeof(struct header*));
    if(    ap==0    ) {
        return;
    }
    bp_9=(struct header*)ap-1;
    for(    p_10=freep    ;    !(bp_9>p_10&&bp_9<p_10->next)    ;    p_10=p_10->next    ){
        if(        p_10>=p_10->next&&(bp_9>p_10||bp_9<p_10->next)        ) {
            break;
        }
    }
    if(    bp_9+bp_9->size==p_10->next    ) {
        bp_9->size+=p_10->next->size;
        bp_9->next=p_10->next->next;
    }
    else {
        bp_9->next=p_10->next;
    }
    if(    p_10+p_10->size==bp_9    ) {
        p_10->size+=bp_9->size;
        p_10->next=bp_9->next;
    }
    else {
        p_10->next=bp_9;
    }
    freep=p_10;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_11;
void* __result_obj__9;
void* ptr_12;
void* __result_obj__10;
    total_size_11=nmemb*size;
    if(    total_size_11==0    ) {
        __result_obj__9 = ((void*)0);
        return __result_obj__9;
    }
    ptr_12=malloc(total_size_11);
    if(    ptr_12!=((void*)0)    ) {
        memset(ptr_12,0,total_size_11);
    }
    __result_obj__10 = ptr_12;
    return __result_obj__10;
}

char* strdup(const char* s){
char* s2_13;
unsigned long  int len_14;
char* p_15;
char* __result_obj__11;
    s2_13=s;
    len_14=strlen(s2_13)+1;
    p_15=malloc(len_14);
    if(    p_15    ) {
        memcpy(p_15,s2_13,len_14);
    }
    __result_obj__11 = p_15;
    return __result_obj__11;
}

int strcmp(const char* s1, const char* s2){
    while(    *s1&&(*s1==*s2)    ) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1-(unsigned char)*s2;
}

char* strstr(const char* haystack, const char* needle){
char* __result_obj__12;
char* __result_obj__13;
char* __result_obj__14;
    if(    !*needle    ) {
        __result_obj__12 = (char*)haystack;
        return __result_obj__12;
    }
    for(    ;    *haystack    ;    haystack++    ){
        const char* h_16=haystack;
        const char* n_17=needle;
        while(        *h_16&&*n_17&&(*h_16==*n_17)        ) {
            h_16++;
            n_17++;
        }
        if(        !*n_17        ) {
            __result_obj__13 = (char*)haystack;
            return __result_obj__13;
        }
    }
    __result_obj__14 = ((void*)0);
    return __result_obj__14;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_18;
int i_19;
void* __result_obj__15;
    cdst_18=(char*)dst;
    for(    i_19=0    ;    i_19<n    ;    i_19++    ){
        cdst_18[i_19]=c;
    }
    __result_obj__15 = dst;
    return __result_obj__15;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_20;
const unsigned char* s2_21;
memset(&s1_20, 0, sizeof(const unsigned char*));
memset(&s2_21, 0, sizeof(const unsigned char*));
    s1_20=v1;
    s2_21=v2;
    while(    n-->0    ) {
        if(        *s1_20!=*s2_21        ) {
            return *s1_20-*s2_21;
        }
        s1_20++,s2_21++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_22;
char* d_23;
void* __result_obj__16;
void* __result_obj__17;
s_22 = (void*)0;
d_23 = (void*)0;
    if(    n==0    ) {
        __result_obj__16 = dst;
        return __result_obj__16;
    }
    s_22=src;
    d_23=dst;
    if(    s_22<d_23&&s_22+n>d_23    ) {
        s_22+=n;
        d_23+=n;
        while(        n-->0        ) {
            *--d_23=*--s_22;
        }
    }
    else {
        while(        n-->0        ) {
            *d_23++=*s_22++;
        }
    }
    __result_obj__17 = dst;
    return __result_obj__17;
}

void* memcpy(void* dst, const void* src, unsigned int n){
void* __result_obj__18;
    __result_obj__18 = memmove(dst,src,n);
    return __result_obj__18;
}

int strncmp(const char* p, const char* q, unsigned int n){
    while(    n>0&&*p&&*p==*q    ) {
        n--,p++,q++;
    }
    if(    n==0    ) {
        return 0;
    }
    return (unsigned char)*p-(unsigned char)*q;
}

char* strncpy(char* s, const char* t, int n){
char* os_24;
char* __result_obj__19;
os_24 = (void*)0;
    os_24=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__19 = os_24;
    return __result_obj__19;
}

int strlen(const char* s){
int n_25;
memset(&n_25, 0, sizeof(int));
    for(    n_25=0    ;    s[n_25]    ;    n_25++    ){
        ;
    }
    return n_25;
}

void puts(const char* s){
    while(    *s    ) {
        putchar(*s++);
    }
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_26;
char* __result_obj__20;
    d_26=dest;
    while(    *d_26    ) {
        d_26++;
    }
    while(    n--&&*src    ) {
        *d_26++=*src++;
    }
    *d_26=0;
    __result_obj__20 = dest;
    return __result_obj__20;
}

char* strtok(char* s, const char* delim){
static char* next_27;
char* start_28;
char* p_29;
char* __result_obj__21;
int is_delim_31;
char* __result_obj__22;
int is_delim_33;
char* __result_obj__23;
next_27 = (void*)0;
start_28 = (void*)0;
p_29 = (void*)0;
    if(    s!=((void*)0)    ) {
        next_27=s;
    }
    if(    next_27==((void*)0)    ) {
        __result_obj__21 = ((void*)0);
        return __result_obj__21;
    }
    start_28=next_27;
    while(    *start_28!=0    ) {
        const char* d_30=delim;
        is_delim_31=0;
        while(        *d_30!=0        ) {
            if(            *start_28==*d_30            ) {
                is_delim_31=1;
                break;
            }
            d_30++;
        }
        if(        !is_delim_31        ) {
            break;
        }
        start_28++;
    }
    if(    *start_28==0    ) {
        next_27=((void*)0);
        __result_obj__22 = ((void*)0);
        return __result_obj__22;
    }
    p_29=start_28;
    while(    *p_29!=0    ) {
        const char* d_32=delim;
        is_delim_33=0;
        while(        *d_32!=0        ) {
            if(            *p_29==*d_32            ) {
                is_delim_33=1;
                break;
            }
            d_32++;
        }
        if(        is_delim_33        ) {
            break;
        }
        p_29++;
    }
    if(    *p_29==0    ) {
        next_27=((void*)0);
    }
    else {
        *p_29=0;
        next_27=p_29+1;
    }
    __result_obj__23 = start_28;
    return __result_obj__23;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed){
char* p_34;
int i_36;
int negative_37;
char* __result_obj__24;
int digit_38;
char* __result_obj__25;
    p_34=buf;
    char tmp_35[32];
    memset(&tmp_35, 0, sizeof(char)    *(32)    );
    i_36=0;
    negative_37=0;
    if(    base<2||base>16    ) {
        *p_34=0;
        __result_obj__24 = p_34;
        return __result_obj__24;
    }
    if(    is_signed&&(long)val_<0    ) {
        negative_37=1;
        val_=(unsigned long  int)(-(long)val_);
    }
    do {
        digit_38=val_%base;
        tmp_35[i_36++]=(((digit_38<10))?(48+digit_38):(97+digit_38-10));
        val_/=base;
    } while(    val_    );
    if(    negative_37    ) {
        *p_34++=45;
    }
    while(    i_36--    ) {
        *p_34++=tmp_35[i_36];
    }
    *p_34=0;
    __result_obj__25 = buf;
    return __result_obj__25;
}

int vasprintf(char** out, const char* fmt, va_list ap){
char* p_40;
const char* s_41;
unsigned long  int remaining_43;
s_41 = (void*)0;
    char out2_39[512];
    memset(&out2_39, 0, sizeof(char)    *(512)    );
    p_40=out2_39;
    char buf_42[32];
    memset(&buf_42, 0, sizeof(char)    *(32)    );
    remaining_43=sizeof(out2_39);
    for(    ;    *fmt&&remaining_43>1    ;    fmt++    ){
        if(        *fmt!=37        ) {
            *p_40++=*fmt;
            remaining_43--;
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 100:
            itoa(buf_42,__builtin_va_arg(ap,int),10,1);
            s_41=buf_42;
            break;
            case 117:
            itoa(buf_42,__builtin_va_arg(ap,unsigned int),10,0);
            s_41=buf_42;
            break;
            case 120:
            itoa(buf_42,__builtin_va_arg(ap,unsigned int),16,0);
            s_41=buf_42;
            break;
            case 115:
            s_41=__builtin_va_arg(ap,const char*);
            if(            !s_41            ) {
                s_41="(null)";
            }
            break;
            case 99:
            buf_42[0]=(char)__builtin_va_arg(ap,int);
            buf_42[1]=0;
            s_41=buf_42;
            break;
            case 112:
            strncpy(buf_42,"0x",32);
            itoa(buf_42+2,(unsigned long  int)(unsigned long  int)__builtin_va_arg(ap,void*),16,0);
            s_41=buf_42;
            break;
            case 37:
            buf_42[0]=37;
            buf_42[1]=0;
            s_41=buf_42;
            break;
            default:
            buf_42[0]=37;
            buf_42[1]=*fmt;
            buf_42[2]=0;
            s_41=buf_42;
            break;
        }
        while(        *s_41&&remaining_43>1        ) {
            *p_40++=*s_41++;
            remaining_43--;
        }
    }
    *p_40=0;
    *out=strdup(out2_39);
    return p_40-out2_39;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_44;
char* p_45;
const char* s_46;
unsigned long  int remaining_48;
memset(&ap_44, 0, sizeof(va_list));
s_46 = (void*)0;
    __builtin_va_start(ap_44,fmt);
    p_45=out;
    char buf_47[32];
    memset(&buf_47, 0, sizeof(char)    *(32)    );
    remaining_48=out_size;
    if(    remaining_48==0    ) {
        __builtin_va_end(ap_44);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_48>1            ) {
                *p_45++=*fmt;
                remaining_48--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_46=__builtin_va_arg(ap_44,const char*);
            while(            *s_46&&remaining_48>1            ) {
                *p_45++=*s_46++;
                remaining_48--;
            }
            break;
            case 100:
            itoa(buf_47,__builtin_va_arg(ap_44,int),10,0);
            s_46=buf_47;
            while(            *s_46&&remaining_48>1            ) {
                *p_45++=*s_46++;
                remaining_48--;
            }
            break;
            case 120:
            itoa(buf_47,(unsigned int)__builtin_va_arg(ap_44,int),16,1);
            s_46=buf_47;
            while(            *s_46&&remaining_48>1            ) {
                *p_45++=*s_46++;
                remaining_48--;
            }
            break;
            case 99:
            if(            remaining_48>1            ) {
                *p_45++=(char)__builtin_va_arg(ap_44,int);
                remaining_48--;
            }
            break;
            case 112:
            s_46="0x";
            while(            *s_46&&remaining_48>1            ) {
                *p_45++=*s_46++;
                remaining_48--;
            }
            itoa(buf_47,(long)__builtin_va_arg(ap_44,void*),16,1);
            s_46=buf_47;
            while(            *s_46&&remaining_48>1            ) {
                *p_45++=*s_46++;
                remaining_48--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_47,__builtin_va_arg(ap_44,long),10,1);
                s_46=buf_47;
                while(                *s_46&&remaining_48>1                ) {
                    *p_45++=*s_46++;
                    remaining_48--;
                }
            }
            break;
            default:
            if(            remaining_48>1            ) {
                *p_45++=37;
                remaining_48--;
                if(                remaining_48>1                ) {
                    *p_45++=*fmt;
                    remaining_48--;
                }
            }
            break;
        }
    }
    *p_45=0;
    __builtin_va_end(ap_44);
    return p_45-out;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_49;
char* p_50;
const char* s_51;
unsigned long  int remaining_53;
memset(&ap_49, 0, sizeof(va_list));
s_51 = (void*)0;
    __builtin_va_start(ap_49,fmt);
    p_50=out;
    char buf_52[32];
    memset(&buf_52, 0, sizeof(char)    *(32)    );
    remaining_53=out_size;
    if(    remaining_53==0    ) {
        __builtin_va_end(ap_49);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_53>1            ) {
                *p_50++=*fmt;
                remaining_53--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_51=__builtin_va_arg(ap_49,const char*);
            while(            *s_51&&remaining_53>1            ) {
                *p_50++=*s_51++;
                remaining_53--;
            }
            break;
            case 100:
            itoa(buf_52,__builtin_va_arg(ap_49,int),10,0);
            s_51=buf_52;
            while(            *s_51&&remaining_53>1            ) {
                *p_50++=*s_51++;
                remaining_53--;
            }
            break;
            case 120:
            itoa(buf_52,(unsigned int)__builtin_va_arg(ap_49,int),16,1);
            s_51=buf_52;
            while(            *s_51&&remaining_53>1            ) {
                *p_50++=*s_51++;
                remaining_53--;
            }
            break;
            case 99:
            if(            remaining_53>1            ) {
                *p_50++=(char)__builtin_va_arg(ap_49,int);
                remaining_53--;
            }
            break;
            case 112:
            s_51="0x";
            while(            *s_51&&remaining_53>1            ) {
                *p_50++=*s_51++;
                remaining_53--;
            }
            itoa(buf_52,(long)__builtin_va_arg(ap_49,void*),16,1);
            s_51=buf_52;
            while(            *s_51&&remaining_53>1            ) {
                *p_50++=*s_51++;
                remaining_53--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_52,__builtin_va_arg(ap_49,long),10,1);
                s_51=buf_52;
                while(                *s_51&&remaining_53>1                ) {
                    *p_50++=*s_51++;
                    remaining_53--;
                }
            }
            break;
            default:
            if(            remaining_53>1            ) {
                *p_50++=37;
                remaining_53--;
                if(                remaining_53>1                ) {
                    *p_50++=*fmt;
                    remaining_53--;
                }
            }
            break;
        }
    }
    *p_50=0;
    __builtin_va_end(ap_49);
    return p_50-out;
}

void printint(int val_, int base, int sign){
int i_55;
int negative_56;
unsigned int uval_57;
int digit_58;
memset(&uval_57, 0, sizeof(unsigned int));
    char buf_54[33];
    memset(&buf_54, 0, sizeof(char)    *(33)    );
    i_55=0;
    negative_56=0;
    if(    sign&&val_<0    ) {
        negative_56=1;
        uval_57=-val_;
    }
    else {
        uval_57=(unsigned int)val_;
    }
    if(    uval_57==0    ) {
        putchar(48);
        return;
    }
    while(    uval_57>0    ) {
        digit_58=uval_57%base;
        buf_54[i_55++]=((digit_58<10)?(48+digit_58):(97+(digit_58-10)));
        uval_57/=base;
    }
    if(    negative_56    ) {
        putchar(45);
    }
    while(    --i_55>=0    ) {
        putchar(buf_54[i_55]);
    }
}

void printlong(unsigned long  int val_, int base, int sign){
int i_60;
int negative_61;
int digit_62;
    char buf_59[65];
    memset(&buf_59, 0, sizeof(char)    *(65)    );
    i_60=0;
    negative_61=0;
    if(    sign&&(long)val_<0    ) {
        negative_61=1;
        val_=-(long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_62=val_%base;
        buf_59[i_60++]=((digit_62<10)?(48+digit_62):(97+(digit_62-10)));
        val_/=base;
    }
    if(    negative_61    ) {
        putchar(45);
    }
    while(    --i_60>=0    ) {
        putchar(buf_59[i_60]);
    }
}

void printlonglong(unsigned long  long val_, int base, int sign){
int i_64;
int negative_65;
int digit_66;
    char buf_63[65];
    memset(&buf_63, 0, sizeof(char)    *(65)    );
    i_64=0;
    negative_65=0;
    if(    sign&&(long  long)val_<0    ) {
        negative_65=1;
        val_=-(long  long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_66=val_%base;
        buf_63[i_64++]=((digit_66<10)?(48+digit_66):(97+(digit_66-10)));
        val_/=base;
    }
    if(    negative_65    ) {
        putchar(45);
    }
    while(    --i_64>=0    ) {
        putchar(buf_63[i_64]);
    }
}

int printf(const char* fmt, ...){
va_list ap_67;
const char* p_68;
int lcount_69;
unsigned long  int val__70;
unsigned long  long val__71;
long val__72;
long long val__73;
int i_74;
int val__75;
unsigned int val__76;
unsigned long  int val__77;
char c_79;
memset(&ap_67, 0, sizeof(va_list));
p_68 = (void*)0;
    __builtin_va_start(ap_67,fmt);
    for(    p_68=fmt    ;    *p_68    ;    p_68++    ){
        if(        *p_68!=37        ) {
            putchar(*p_68);
            continue;
        }
        p_68++;
        if(        *p_68==108        ) {
            lcount_69=1;
            if(            *(p_68+1)==108            ) {
                lcount_69=2;
                p_68++;
            }
            p_68++;
            switch (            *p_68) {
                case 120:
                {
                    if(                    lcount_69==1                    ) {
                        val__70=__builtin_va_arg(ap_67,unsigned long  int);
                        printlong(val__70,16,0);
                    }
                    else {
                        val__71=__builtin_va_arg(ap_67,unsigned long  long);
                        printlonglong(val__71,16,0);
                    }
                    break;
                }
                case 100:
                {
                    if(                    lcount_69==1                    ) {
                        val__72=__builtin_va_arg(ap_67,long);
                        printlong(val__72,10,1);
                    }
                    else {
                        val__73=__builtin_va_arg(ap_67,long  long);
                        printlonglong(val__73,10,1);
                    }
                    break;
                }
                default:
                {
                    putchar(37);
                    for(                    i_74=0                    ;                    i_74<lcount_69                    ;                    i_74++                    ){
                        putchar(108);
                    }
                    putchar(*p_68);
                    break;
                }
            }
        }
        else {
            switch (            *p_68) {
                case 100:
                {
                    val__75=__builtin_va_arg(ap_67,int);
                    printint(val__75,10,1);
                    break;
                }
                case 120:
                {
                    val__76=__builtin_va_arg(ap_67,unsigned int);
                    printint(val__76,16,0);
                    break;
                }
                case 112:
                {
                    val__77=(unsigned long  int)__builtin_va_arg(ap_67,void*);
                    putchar(48);
                    putchar(120);
                    printlong(val__77,16,0);
                    break;
                }
                case 115:
                {
                    const char* s_78=__builtin_va_arg(ap_67,const char*);
                    if(                    !s_78                    ) {
                        s_78="(null)";
                    }
                    while(                    *s_78                    ) {
                        putchar(*s_78++);
                    }
                    break;
                }
                case 99:
                {
                    c_79=(char)__builtin_va_arg(ap_67,int);
                    putchar(c_79);
                    break;
                }
                case 37:
                {
                    putchar(37);
                    break;
                }
                default:
                {
                    putchar(37);
                    putchar(*p_68);
                    break;
                }
            }
        }
    }
    __builtin_va_end(ap_67);
    return 0;
}


void putchar(char c){
char d_0;
long _ret_1;
memset(&_ret_1, 0, sizeof(long));
    d_0=c;
    ({_ret_1; register long _a0 asm("a0") =(long)(1);
; register long _a1 asm("a1") =(long)(&d_0);
; register long _a2 asm("a2") =(long)(1);
; register long _a7 asm("a7") =64;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a1), "r"(_a2), "r"(_a7): "memory"); _ret_1=_a0; _ret_1; });
}
