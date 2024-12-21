/// previous struct definition ///
struct __locale_struct;

struct timespec;

struct sigevent;

struct stack_st_OPENSSL_STRING;

struct stack_st_OPENSSL_CSTRING;

struct stack_st_OPENSSL_BLOCK;

struct stack_st_BIGNUM;

struct stack_st_BIGNUM_const;

struct stack_st_void;

struct cpu_set_t;

struct stack_st_BIO;

struct stack_st_X509_ALGOR;

struct stack_st_ASN1_STRING_TABLE;

struct stack_st_ASN1_TYPE;

struct stack_st_ASN1_OBJECT;

struct stack_st_ASN1_INTEGER;

struct stack_st_ASN1_UTF8STRING;

struct stack_st_ASN1_GENERALSTRING;

struct rsa_st;

struct dsa_st;

struct dh_st;

struct ec_key_st;

struct stack_st_X509_NAME;

struct stack_st_X509;

struct stack_st_X509_REVOKED;

struct stack_st_X509_CRL;

struct stack_st_X509_NAME_ENTRY;

struct stack_st_X509_EXTENSION;

struct stack_st_X509_ATTRIBUTE;

struct stack_st_X509_INFO;

struct lhash_st_OPENSSL_STRING;

struct lhash_st_OPENSSL_CSTRING;

struct stack_st_X509_LOOKUP;

struct stack_st_X509_OBJECT;

struct stack_st_X509_VERIFY_PARAM;

struct stack_st_X509_TRUST;

struct stack_st_PKCS7_SIGNER_INFO;

struct stack_st_PKCS7_RECIP_INFO;

struct stack_st_PKCS7;

struct stack_st_CONF_VALUE;

struct lhash_st_CONF_VALUE;

struct conf_st;

struct conf_method_st;

struct stack_st_CONF_MODULE;

struct stack_st_CONF_IMODULE;

struct stack_st_SCT;

struct stack_st_CTLOG;

struct stack_st_SRTP_PROTECTION_PROFILE;

struct stack_st_SSL_CIPHER;

struct stack_st_SSL_COMP;

struct lhash_st_ERR_STRING_DATA;

struct st_ma_pvio;

struct st_ma_connection_plugin;

/// struct definition ///
typedef unsigned long  int size_t;

typedef long ssize_t;

typedef long off_t;

typedef struct _IO_FILE FILE;

typedef __builtin_va_list va_list;

typedef __builtin_va_list __isoc_va_list;

union _G_fpos64_t
{
char __opaque[16];
long  long __lldata;
double __align;
};

typedef union _G_fpos64_t fpos_t;

extern struct _IO_FILE* stdin;
extern struct _IO_FILE* stdout;
extern struct _IO_FILE* stderr;
typedef long (*cookie_read_function_t)(void*,char*,unsigned long  int);

typedef long (*cookie_write_function_t)(void*,const char*,unsigned long  int);

typedef int (*cookie_seek_function_t)(void*,long*,int);

typedef int (*cookie_close_function_t)(void*);

struct _IO_cookie_io_functions_t
{
    long (*read)(void*,char*,unsigned long  int);
    long (*write)(void*,const char*,unsigned long  int);
    int (*seek)(void*,long*,int);
    int (*close)(void*);
};

typedef struct _IO_cookie_io_functions_t cookie_io_functions_t;

typedef unsigned int wchar_t;

struct anonymous_typeX1
{
    int quot;
    int rem;
};

typedef struct anonymous_typeX1 div_t;

struct anonymous_typeX2
{
    long quot;
    long rem;
};

typedef struct anonymous_typeX2 ldiv_t;

struct anonymous_typeX3
{
    long long quot;
    long long rem;
};

typedef struct anonymous_typeX3 lldiv_t;

typedef struct __locale_struct* locale_t;

struct lconv
{
    char* decimal_point;
    char* thousands_sep;
    char* grouping;
    char* int_curr_symbol;
    char* currency_symbol;
    char* mon_decimal_point;
    char* mon_thousands_sep;
    char* mon_grouping;
    char* positive_sign;
    char* negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    char int_p_cs_precedes;
    char int_p_sep_by_space;
    char int_n_cs_precedes;
    char int_n_sep_by_space;
    char int_p_sign_posn;
    char int_n_sign_posn;
};

extern char* program_invocation_short_name;
extern char* program_invocation_name;
typedef void* any;

typedef char* string;

extern char* gComeStackFrameSName[128];

extern int gComeStackFrameSLine[128];

extern int gComeStackFrameID[128];

extern int gNumComeStackFrame;

extern char* gComeStackFrameBuffer;

extern void* wildcard;
struct buffer
{
    char* buf;
    int len;
    int size;
};

struct sMemHeaderTiny
{
    unsigned long  int size;
    int allocated;
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
    struct sMemHeaderTiny* free_next;
};

struct sMemHeader
{
    unsigned long  int size;
    int allocated;
    struct sMemHeader* next;
    struct sMemHeader* prev;
    struct sMemHeader* free_next;
    char* class_name;
    char* sname[16];
    int sline[16];
    int id[16];
};

extern struct sMemHeader* gAllocMem;

extern void* gComeResultObject;

extern void* gComeFunResultObject;

extern _Bool gComeMallocLib;

extern _Bool gComeDebugLib;

extern _Bool gComeGCLib;

extern int gNumAlloc;

extern int gNumFree;

struct sHeapPage
{
    char** mPages;
    int mSizePages;
    char* mTop;
    int mCurrentPages;
    struct sMemHeaderTiny* mFreeMem[2048*2];
};

extern struct sHeapPage gHeapPages;

struct smart_pointer$1char
{
    struct buffer* memory;
    char* p;
};

struct smart_pointer$1short
{
    struct buffer* memory;
    short* p;
};

struct smart_pointer$1int
{
    struct buffer* memory;
    int* p;
};

struct smart_pointer$1long
{
    struct buffer* memory;
    long* p;
};

struct smart_pointer$1charp
{
    struct buffer* memory;
    char** p;
};

struct smart_pointer$1float
{
    struct buffer* memory;
    float* p;
};

struct smart_pointer$1double
{
    struct buffer* memory;
    double* p;
};

struct list_item$1char
{
    char item;
    struct list_item$1char* prev;
    struct list_item$1char* next;
};

struct list$1char
{
    struct list_item$1char* head;
    struct list_item$1char* tail;
    int len;
    struct list_item$1char* it;
};

struct list_item$1charp
{
    char* item;
    struct list_item$1charp* prev;
    struct list_item$1charp* next;
};

struct list$1charp
{
    struct list_item$1charp* head;
    struct list_item$1charp* tail;
    int len;
    struct list_item$1charp* it;
};

struct list_item$1short
{
    short item;
    struct list_item$1short* prev;
    struct list_item$1short* next;
};

struct list$1short
{
    struct list_item$1short* head;
    struct list_item$1short* tail;
    int len;
    struct list_item$1short* it;
};

struct list_item$1int
{
    int item;
    struct list_item$1int* prev;
    struct list_item$1int* next;
};

struct list$1int
{
    struct list_item$1int* head;
    struct list_item$1int* tail;
    int len;
    struct list_item$1int* it;
};

struct list_item$1long
{
    long item;
    struct list_item$1long* prev;
    struct list_item$1long* next;
};

struct list$1long
{
    struct list_item$1long* head;
    struct list_item$1long* tail;
    int len;
    struct list_item$1long* it;
};

struct list_item$1float
{
    float item;
    struct list_item$1float* prev;
    struct list_item$1float* next;
};

struct list$1float
{
    struct list_item$1float* head;
    struct list_item$1float* tail;
    int len;
    struct list_item$1float* it;
};

struct list_item$1double
{
    double item;
    struct list_item$1double* prev;
    struct list_item$1double* next;
};

struct list$1double
{
    struct list_item$1double* head;
    struct list_item$1double* tail;
    int len;
    struct list_item$1double* it;
};

struct vector$1char
{
    char* items;
    int len;
    int size;
    int it;
};

struct vector$1charp
{
    char** items;
    int len;
    int size;
    int it;
};

struct vector$1short
{
    short* items;
    int len;
    int size;
    int it;
};

struct vector$1int
{
    int* items;
    int len;
    int size;
    int it;
};

struct vector$1long
{
    long* items;
    int len;
    int size;
    int it;
};

struct vector$1float
{
    float* items;
    int len;
    int size;
    int it;
};

struct vector$1double
{
    double* items;
    int len;
    int size;
    int it;
};

struct list_item$1charph
{
    char* item;
    struct list_item$1charph* prev;
    struct list_item$1charph* next;
};

struct list$1charph
{
    struct list_item$1charph* head;
    struct list_item$1charph* tail;
    int len;
    struct list_item$1charph* it;
};

typedef long intptr_t;

typedef int pid_t;

typedef unsigned int uid_t;

typedef unsigned int gid_t;

typedef unsigned int useconds_t;

extern char* optarg;
extern int optind;
extern int opterr;
extern int optopt;
extern int optreset;
extern char** environ;
typedef unsigned long  int uintptr_t;

typedef char int8_t;

typedef short int16_t;

typedef int int32_t;

typedef long int64_t;

typedef long intmax_t;

typedef unsigned char uint8_t;

typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;

typedef unsigned long  int uint64_t;

typedef unsigned long  int uintmax_t;

typedef char int_fast8_t;

typedef long int_fast64_t;

typedef char int_least8_t;

typedef short int_least16_t;

typedef int int_least32_t;

typedef long int_least64_t;

typedef unsigned char uint_fast8_t;

typedef unsigned long  int uint_fast64_t;

typedef unsigned char uint_least8_t;

typedef unsigned short int uint_least16_t;

typedef unsigned int uint_least32_t;

typedef unsigned long  int uint_least64_t;

typedef int int_fast16_t;

typedef int int_fast32_t;

typedef unsigned int uint_fast16_t;

typedef unsigned int uint_fast32_t;

struct anonymous_typeX4
{
    long quot;
    long rem;
};

typedef struct anonymous_typeX4 imaxdiv_t;

struct iovec
{
    void* iov_base;
    unsigned long  int iov_len;
};

typedef unsigned int socklen_t;

typedef unsigned short int sa_family_t;

struct msghdr
{
    void* msg_name;
    unsigned int msg_namelen;
    struct iovec* msg_iov;
    int msg_iovlen;
    int __pad1;
    void* msg_control;
    unsigned int msg_controllen;
    int __pad2;
    int msg_flags;
};

struct cmsghdr
{
    unsigned int cmsg_len;
    int __pad1;
    int cmsg_level;
    int cmsg_type;
};

struct ucred
{
    int pid;
    unsigned int uid;
    unsigned int gid;
};

struct mmsghdr
{
    struct msghdr msg_hdr;
    unsigned int msg_len;
};

struct linger
{
    int l_onoff;
    int l_linger;
};

struct sockaddr
{
    unsigned short int sa_family;
    char sa_data[14];
};

struct sockaddr_storage
{
    unsigned short int ss_family;
    char __ss_padding[128-sizeof(long)-sizeof(unsigned short int)];
    unsigned long  int __ss_align;
};

typedef unsigned short int in_port_t;

typedef unsigned int in_addr_t;

struct in_addr
{
    unsigned int s_addr;
};

struct sockaddr_in
{
    unsigned short int sin_family;
    unsigned short int sin_port;
    struct in_addr sin_addr;
    unsigned char sin_zero[8];
};

union anonymous_typeZ5
{
unsigned char __s6_addr[16];
unsigned short int __s6_addr16[8];
unsigned int __s6_addr32[4];
};

union anonymous_typeZ6
{
unsigned char __s6_addr[16];
unsigned short int __s6_addr16[8];
unsigned int __s6_addr32[4];
};

struct in6_addr
{
    union anonymous_typeZ6 __in6_union;
};

struct sockaddr_in6
{
    unsigned short int sin6_family;
    unsigned short int sin6_port;
    unsigned int sin6_flowinfo;
    struct in6_addr sin6_addr;
    unsigned int sin6_scope_id;
};

struct ipv6_mreq
{
    struct in6_addr ipv6mr_multiaddr;
    unsigned int ipv6mr_interface;
};

extern const struct in6_addr in6addr_any;
extern const struct in6_addr in6addr_loopback;
struct ip_opts
{
    struct in_addr ip_dst;
    char ip_opts[40];
};

struct ip_mreq
{
    struct in_addr imr_multiaddr;
    struct in_addr imr_interface;
};

struct ip_mreqn
{
    struct in_addr imr_multiaddr;
    struct in_addr imr_address;
    int imr_ifindex;
};

struct ip_mreq_source
{
    struct in_addr imr_multiaddr;
    struct in_addr imr_interface;
    struct in_addr imr_sourceaddr;
};

struct ip_msfilter
{
    struct in_addr imsf_multiaddr;
    struct in_addr imsf_interface;
    unsigned int imsf_fmode;
    unsigned int imsf_numsrc;
    struct in_addr imsf_slist[1];
};

struct group_req
{
    unsigned int gr_interface;
    struct sockaddr_storage gr_group;
};

struct group_source_req
{
    unsigned int gsr_interface;
    struct sockaddr_storage gsr_group;
    struct sockaddr_storage gsr_source;
};

struct group_filter
{
    unsigned int gf_interface;
    struct sockaddr_storage gf_group;
    unsigned int gf_fmode;
    unsigned int gf_numsrc;
    struct sockaddr_storage gf_slist[1];
};

struct in_pktinfo
{
    int ipi_ifindex;
    struct in_addr ipi_spec_dst;
    struct in_addr ipi_addr;
};

struct in6_pktinfo
{
    struct in6_addr ipi6_addr;
    unsigned int ipi6_ifindex;
};

struct ip6_mtuinfo
{
    struct sockaddr_in6 ip6m_addr;
    unsigned int ip6m_mtu;
};

typedef long ossl_intmax_t;

typedef unsigned long  int ossl_uintmax_t;

typedef long time_t;

typedef long suseconds_t;

struct timeval
{
    long tv_sec;
    long tv_usec;
};

struct timespec
{
    long tv_sec;
    int :8*(sizeof(long)-sizeof(long))*(1234==4321);
    long tv_nsec;
    int :8*(sizeof(long)-sizeof(long))*(1234!=4321);
};

struct __sigset_t
{
    unsigned long  int __bits[128/sizeof(long)];
};

typedef struct __sigset_t sigset_t;

typedef unsigned long  int fd_mask;

struct anonymous_typeX7
{
    unsigned long  int fds_bits[1024/8/sizeof(long)];
};

typedef struct anonymous_typeX7 fd_set;

struct itimerval
{
    struct timeval it_interval;
    struct timeval it_value;
};

typedef void* timer_t;

typedef int clockid_t;

typedef long clock_t;

struct tm
{
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
    long tm_gmtoff;
    const char* tm_zone;
};

struct itimerspec
{
    struct timespec it_interval;
    struct timespec it_value;
};

extern char* tzname[2];
extern int daylight;
extern long timezone;
extern int getdate_err;
typedef struct stack_st OPENSSL_STACK;

typedef int (*OPENSSL_sk_compfunc)(const void*,const void*);

typedef void (*OPENSSL_sk_freefunc)(void*);

typedef void* (*OPENSSL_sk_copyfunc)(const void*);

typedef char* OPENSSL_STRING;

typedef const char* OPENSSL_CSTRING;

typedef int (*sk_OPENSSL_STRING_compfunc)(const char**,const char**);

typedef void (*sk_OPENSSL_STRING_freefunc)(char*);

typedef char* (*sk_OPENSSL_STRING_copyfunc)(const char*);

typedef int (*sk_OPENSSL_CSTRING_compfunc)(const char**,const char**);

typedef void (*sk_OPENSSL_CSTRING_freefunc)(char*);

typedef char* (*sk_OPENSSL_CSTRING_copyfunc)(const char*);

typedef void* OPENSSL_BLOCK;

typedef int (*sk_OPENSSL_BLOCK_compfunc)(const void**,const void**);

typedef void (*sk_OPENSSL_BLOCK_freefunc)(void*);

typedef void* (*sk_OPENSSL_BLOCK_copyfunc)(const void*);

typedef struct ossl_provider_st OSSL_PROVIDER;

typedef struct asn1_string_st ASN1_INTEGER;

typedef struct asn1_string_st ASN1_ENUMERATED;

typedef struct asn1_string_st ASN1_BIT_STRING;

typedef struct asn1_string_st ASN1_OCTET_STRING;

typedef struct asn1_string_st ASN1_PRINTABLESTRING;

typedef struct asn1_string_st ASN1_T61STRING;

typedef struct asn1_string_st ASN1_IA5STRING;

typedef struct asn1_string_st ASN1_GENERALSTRING;

typedef struct asn1_string_st ASN1_UNIVERSALSTRING;

typedef struct asn1_string_st ASN1_BMPSTRING;

typedef struct asn1_string_st ASN1_UTCTIME;

typedef struct asn1_string_st ASN1_TIME;

typedef struct asn1_string_st ASN1_GENERALIZEDTIME;

typedef struct asn1_string_st ASN1_VISIBLESTRING;

typedef struct asn1_string_st ASN1_UTF8STRING;

typedef struct asn1_string_st ASN1_STRING;

typedef int ASN1_BOOLEAN;

typedef int ASN1_NULL;

typedef struct asn1_type_st ASN1_TYPE;

typedef struct asn1_object_st ASN1_OBJECT;

typedef struct asn1_string_table_st ASN1_STRING_TABLE;

typedef struct ASN1_ITEM_st ASN1_ITEM;

typedef struct asn1_pctx_st ASN1_PCTX;

typedef struct asn1_sctx_st ASN1_SCTX;

typedef struct bio_st BIO;

typedef struct bignum_st BIGNUM;

typedef struct bignum_ctx BN_CTX;

typedef struct bn_blinding_st BN_BLINDING;

typedef struct bn_mont_ctx_st BN_MONT_CTX;

typedef struct bn_recp_ctx_st BN_RECP_CTX;

typedef struct bn_gencb_st BN_GENCB;

typedef struct buf_mem_st BUF_MEM;

typedef struct err_state_st ERR_STATE;

typedef struct evp_cipher_st EVP_CIPHER;

typedef struct evp_cipher_ctx_st EVP_CIPHER_CTX;

typedef struct evp_md_st EVP_MD;

typedef struct evp_md_ctx_st EVP_MD_CTX;

typedef struct evp_mac_st EVP_MAC;

typedef struct evp_mac_ctx_st EVP_MAC_CTX;

typedef struct evp_pkey_st EVP_PKEY;

typedef struct evp_pkey_asn1_method_st EVP_PKEY_ASN1_METHOD;

typedef struct evp_pkey_method_st EVP_PKEY_METHOD;

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

typedef struct evp_keymgmt_st EVP_KEYMGMT;

typedef struct evp_kdf_st EVP_KDF;

typedef struct evp_kdf_ctx_st EVP_KDF_CTX;

typedef struct evp_rand_st EVP_RAND;

typedef struct evp_rand_ctx_st EVP_RAND_CTX;

typedef struct evp_keyexch_st EVP_KEYEXCH;

typedef struct evp_signature_st EVP_SIGNATURE;

typedef struct evp_asym_cipher_st EVP_ASYM_CIPHER;

typedef struct evp_kem_st EVP_KEM;

typedef struct evp_Encode_Ctx_st EVP_ENCODE_CTX;

typedef struct hmac_ctx_st HMAC_CTX;

typedef struct dh_st DH;

typedef struct dh_method DH_METHOD;

typedef struct dsa_st DSA;

typedef struct dsa_method DSA_METHOD;

typedef struct rsa_st RSA;

typedef struct rsa_meth_st RSA_METHOD;

typedef struct rsa_pss_params_st RSA_PSS_PARAMS;

typedef struct ec_key_st EC_KEY;

typedef struct ec_key_method_st EC_KEY_METHOD;

typedef struct rand_meth_st RAND_METHOD;

typedef struct rand_drbg_st RAND_DRBG;

typedef struct ssl_dane_st SSL_DANE;

typedef struct x509_st X509;

typedef struct X509_algor_st X509_ALGOR;

typedef struct X509_crl_st X509_CRL;

typedef struct x509_crl_method_st X509_CRL_METHOD;

typedef struct x509_revoked_st X509_REVOKED;

typedef struct X509_name_st X509_NAME;

typedef struct X509_pubkey_st X509_PUBKEY;

typedef struct x509_store_st X509_STORE;

typedef struct x509_store_ctx_st X509_STORE_CTX;

typedef struct x509_object_st X509_OBJECT;

typedef struct x509_lookup_st X509_LOOKUP;

typedef struct x509_lookup_method_st X509_LOOKUP_METHOD;

typedef struct X509_VERIFY_PARAM_st X509_VERIFY_PARAM;

typedef struct x509_sig_info_st X509_SIG_INFO;

typedef struct pkcs8_priv_key_info_st PKCS8_PRIV_KEY_INFO;

typedef struct v3_ext_ctx X509V3_CTX;

typedef struct conf_st CONF;

typedef struct ossl_init_settings_st OPENSSL_INIT_SETTINGS;

typedef struct ui_st UI;

typedef struct ui_method_st UI_METHOD;

typedef struct engine_st ENGINE;

typedef struct ssl_st SSL;

typedef struct ssl_ctx_st SSL_CTX;

typedef struct comp_ctx_st COMP_CTX;

typedef struct comp_method_st COMP_METHOD;

typedef struct X509_POLICY_NODE_st X509_POLICY_NODE;

typedef struct X509_POLICY_LEVEL_st X509_POLICY_LEVEL;

typedef struct X509_POLICY_TREE_st X509_POLICY_TREE;

typedef struct X509_POLICY_CACHE_st X509_POLICY_CACHE;

typedef struct AUTHORITY_KEYID_st AUTHORITY_KEYID;

typedef struct DIST_POINT_st DIST_POINT;

typedef struct ISSUING_DIST_POINT_st ISSUING_DIST_POINT;

typedef struct NAME_CONSTRAINTS_st NAME_CONSTRAINTS;

typedef struct crypto_ex_data_st CRYPTO_EX_DATA;

typedef struct ossl_http_req_ctx_st OSSL_HTTP_REQ_CTX;

typedef struct ocsp_response_st OCSP_RESPONSE;

typedef struct ocsp_responder_id_st OCSP_RESPID;

typedef struct sct_st SCT;

typedef struct sct_ctx_st SCT_CTX;

typedef struct ctlog_st CTLOG;

typedef struct ctlog_store_st CTLOG_STORE;

typedef struct ct_policy_eval_ctx_st CT_POLICY_EVAL_CTX;

typedef struct ossl_store_info_st OSSL_STORE_INFO;

typedef struct ossl_store_search_st OSSL_STORE_SEARCH;

typedef struct ossl_lib_ctx_st OSSL_LIB_CTX;

typedef struct ossl_dispatch_st OSSL_DISPATCH;

typedef struct ossl_item_st OSSL_ITEM;

typedef struct ossl_algorithm_st OSSL_ALGORITHM;

typedef struct ossl_param_st OSSL_PARAM;

typedef struct ossl_param_bld_st OSSL_PARAM_BLD;

typedef int (*pem_password_cb)(char*,int,int,void*);

typedef struct ossl_encoder_st OSSL_ENCODER;

typedef struct ossl_encoder_ctx_st OSSL_ENCODER_CTX;

typedef struct ossl_decoder_st OSSL_DECODER;

typedef struct ossl_decoder_ctx_st OSSL_DECODER_CTX;

typedef struct ossl_self_test_st OSSL_SELF_TEST;

struct anonymous_typeX8
{
    long  long __ll;
    long  double __ld;
};

typedef struct anonymous_typeX8 max_align_t;

typedef long ptrdiff_t;

typedef struct ossl_core_handle_st OSSL_CORE_HANDLE;

typedef struct openssl_core_ctx_st OPENSSL_CORE_CTX;

typedef struct ossl_core_bio_st OSSL_CORE_BIO;

struct ossl_dispatch_st
{
    int function_id;
    void (*function)();
};

struct ossl_item_st
{
    unsigned int id;
    void* ptr;
};

struct ossl_algorithm_st
{
    const char* algorithm_names;
    const char* property_definition;
    const struct ossl_dispatch_st* implementation;
    const char* algorithm_description;
};

struct ossl_param_st
{
    const char* key;
    unsigned int data_type;
    void* data;
    unsigned long  int data_size;
    unsigned long  int return_size;
};

typedef void (*OSSL_thread_stop_handler_fn)(void*);

typedef int (*OSSL_provider_init_fn)(const struct ossl_core_handle_st*,const struct ossl_dispatch_st*,const struct ossl_dispatch_st**,void**);

extern int (*OSSL_provider_init)(const struct ossl_core_handle_st*,const struct ossl_dispatch_st*,const struct ossl_dispatch_st**,void**);
typedef int (*OSSL_CALLBACK)(const struct ossl_param_st*,void*);

typedef int (*OSSL_INOUT_CALLBACK)(const struct ossl_param_st*,struct ossl_param_st*,void*);

typedef int (*OSSL_PASSPHRASE_CALLBACK)(char*,unsigned long  int,unsigned long  int*,const struct ossl_param_st*,void*);

struct anonymous_typeX9
{
    int dummy;
};

typedef struct anonymous_typeX9 CRYPTO_dynlock;

typedef void CRYPTO_RWLOCK;

struct crypto_ex_data_st
{
    struct ossl_lib_ctx_st* ctx;
    struct stack_st_void* sk;
};

typedef int (*sk_void_compfunc)(const void**,const void**);

typedef void (*sk_void_freefunc)(void*);

typedef void* (*sk_void_copyfunc)(const void*);

typedef void (*CRYPTO_EX_new)(void*,void*,struct crypto_ex_data_st*,int,long,void*);

typedef void (*CRYPTO_EX_free)(void*,void*,struct crypto_ex_data_st*,int,long,void*);

typedef int (*CRYPTO_EX_dup)(struct crypto_ex_data_st*,const struct crypto_ex_data_st*,void**,int,long,void*);

struct crypto_threadid_st
{
    int dummy;
};

typedef struct crypto_threadid_st CRYPTO_THREADID;

typedef void* (*CRYPTO_malloc_fn)(unsigned long  int,const char*,int);

typedef void* (*CRYPTO_realloc_fn)(void*,unsigned long  int,const char*,int);

typedef void (*CRYPTO_free_fn)(void*,const char*,int);

typedef struct __pthread* pthread_t;

typedef int pthread_once_t;

typedef unsigned int pthread_key_t;

typedef int pthread_spinlock_t;

struct anonymous_typeX10
{
    unsigned int __attr;
};

typedef struct anonymous_typeX10 pthread_mutexattr_t;

struct anonymous_typeX11
{
    unsigned int __attr;
};

typedef struct anonymous_typeX11 pthread_condattr_t;

struct anonymous_typeX12
{
    unsigned int __attr;
};

typedef struct anonymous_typeX12 pthread_barrierattr_t;

struct anonymous_typeX13
{
    unsigned int __attr[2];
};

typedef struct anonymous_typeX13 pthread_rwlockattr_t;

union anonymous_typeZ15
{
int __i[((sizeof(long)==8)?(14):(9))];
int __vi[((sizeof(long)==8)?(14):(9))];
unsigned long  int __s[((sizeof(long)==8)?(7):(9))];
};

union anonymous_typeZ16
{
int __i[((sizeof(long)==8)?(14):(9))];
int __vi[((sizeof(long)==8)?(14):(9))];
unsigned long  int __s[((sizeof(long)==8)?(7):(9))];
};

struct anonymous_typeX14
{
    union anonymous_typeZ16 __u;
};

typedef struct anonymous_typeX14 pthread_attr_t;

union anonymous_typeZ18
{
int __i[((sizeof(long)==8)?(10):(6))];
int __vi[((sizeof(long)==8)?(10):(6))];
void* __p[((sizeof(long)==8)?(5):(6))];
};

union anonymous_typeZ19
{
int __i[((sizeof(long)==8)?(10):(6))];
int __vi[((sizeof(long)==8)?(10):(6))];
void* __p[((sizeof(long)==8)?(5):(6))];
};

struct anonymous_typeX17
{
    union anonymous_typeZ19 __u;
};

typedef struct anonymous_typeX17 pthread_mutex_t;

union anonymous_typeZ21
{
int __i[12];
int __vi[12];
void* __p[12*sizeof(int)/sizeof(void*)];
};

union anonymous_typeZ22
{
int __i[12];
int __vi[12];
void* __p[12*sizeof(int)/sizeof(void*)];
};

struct anonymous_typeX20
{
    union anonymous_typeZ22 __u;
};

typedef struct anonymous_typeX20 pthread_cond_t;

union anonymous_typeZ24
{
int __i[((sizeof(long)==8)?(14):(8))];
int __vi[((sizeof(long)==8)?(14):(8))];
void* __p[((sizeof(long)==8)?(7):(8))];
};

union anonymous_typeZ25
{
int __i[((sizeof(long)==8)?(14):(8))];
int __vi[((sizeof(long)==8)?(14):(8))];
void* __p[((sizeof(long)==8)?(7):(8))];
};

struct anonymous_typeX23
{
    union anonymous_typeZ25 __u;
};

typedef struct anonymous_typeX23 pthread_rwlock_t;

union anonymous_typeZ27
{
int __i[((sizeof(long)==8)?(8):(5))];
int __vi[((sizeof(long)==8)?(8):(5))];
void* __p[((sizeof(long)==8)?(4):(5))];
};

union anonymous_typeZ28
{
int __i[((sizeof(long)==8)?(8):(5))];
int __vi[((sizeof(long)==8)?(8):(5))];
void* __p[((sizeof(long)==8)?(4):(5))];
};

struct anonymous_typeX26
{
    union anonymous_typeZ28 __u;
};

typedef struct anonymous_typeX26 pthread_barrier_t;

struct anonymous_typeX29
{
    long __reserved1;
    long __reserved2;
};

struct anonymous_typeX30
{
    long __reserved1;
    long __reserved2;
};

struct sched_param
{
    int sched_priority;
    int __reserved1;
    struct anonymous_typeX30 __reserved2[2];
    int __reserved3;
};

struct cpu_set_t
{
    unsigned long  int __bits[128/sizeof(long)];
};

typedef struct cpu_set_t cpu_set_t;

struct __ptcb
{
    void (*__f)(void*);
    void* __x;
    struct __ptcb* __next;
};

typedef int CRYPTO_ONCE;

typedef unsigned int CRYPTO_THREAD_LOCAL;

typedef struct __pthread* CRYPTO_THREAD_ID;

typedef union bio_addr_st BIO_ADDR;

typedef struct bio_addrinfo_st BIO_ADDRINFO;

typedef long (*BIO_callback_fn)(struct bio_st*,int,const char*,int,long,long);

typedef long (*BIO_callback_fn_ex)(struct bio_st*,int,const char*,unsigned long  int,int,long,int,unsigned long  int*);

typedef struct bio_method_st BIO_METHOD;

typedef int (*BIO_info_cb)(struct bio_st*,int,int);

typedef int (*bio_info_cb)(struct bio_st*,int,int);

typedef int (*sk_BIO_compfunc)(const struct bio_st**,const struct bio_st**);

typedef void (*sk_BIO_freefunc)(struct bio_st*);

typedef struct bio_st* (*sk_BIO_copyfunc)(const struct bio_st*);

typedef int (*asn1_ps_func)(struct bio_st*,unsigned char**,int*,void*);

typedef void (*BIO_dgram_sctp_notification_handler_fn)(struct bio_st*,void*,void*);

struct bio_msg_st
{
    void* data;
    unsigned long  int data_len;
    union bio_addr_st* peer;
    union bio_addr_st* local;
    unsigned long  int flags;
};

typedef struct bio_msg_st BIO_MSG;

struct bio_mmsg_cb_args_st
{
    struct bio_msg_st* msg;
    unsigned long  int stride;
    unsigned long  int num_msg;
    unsigned long  int flags;
    unsigned long  int* msgs_processed;
};

typedef struct bio_mmsg_cb_args_st BIO_MMSG_CB_ARGS;

union anonymous_typeZ31
{
int fd;
void* custom;
unsigned long  int custom_ui;
struct ssl_st* ssl;
};

union anonymous_typeZ32
{
int fd;
void* custom;
unsigned long  int custom_ui;
struct ssl_st* ssl;
};

struct bio_poll_descriptor_st
{
    unsigned int type;
    union anonymous_typeZ32 value;
};

typedef struct bio_poll_descriptor_st BIO_POLL_DESCRIPTOR;

enum BIO_hostserv_priorities { BIO_PARSE_PRIO_HOST
,BIO_PARSE_PRIO_SERV
};

enum BIO_lookup_type { BIO_LOOKUP_CLIENT
,BIO_LOOKUP_SERVER
};

union BIO_sock_info_u
{
union bio_addr_st* addr;
};

enum BIO_sock_info_type { BIO_SOCK_INFO_ADDRESS
};

typedef int blksize_t;

typedef unsigned int nlink_t;

typedef long register_t;

typedef unsigned long  int u_int64_t;

typedef unsigned int mode_t;

typedef unsigned long  int ino_t;

typedef unsigned long  int dev_t;

typedef long blkcnt_t;

typedef unsigned long  int fsblkcnt_t;

typedef unsigned long  int fsfilcnt_t;

typedef unsigned int id_t;

typedef int key_t;

typedef unsigned char u_int8_t;

typedef unsigned short int u_int16_t;

typedef unsigned int u_int32_t;

typedef char* caddr_t;

typedef unsigned char u_char;

typedef unsigned short int u_short;

typedef unsigned short int ushort;

typedef unsigned int u_int;

typedef unsigned int uint;

typedef unsigned long  int u_long;

typedef unsigned long  int ulong;

typedef long long quad_t;

typedef unsigned long  long u_quad_t;

struct buf_mem_st
{
    unsigned long  int length;
    char* data;
    unsigned long  int max;
    unsigned long  int flags;
};

typedef const struct ossl_param_st* (*OSSL_FUNC_core_gettable_params_fn)(const struct ossl_core_handle_st*);

typedef int (*OSSL_FUNC_core_get_params_fn)(const struct ossl_core_handle_st*,struct ossl_param_st*);

typedef int (*OSSL_FUNC_core_thread_start_fn)(const struct ossl_core_handle_st*,void (*)(void*),void*);

typedef struct openssl_core_ctx_st* (*OSSL_FUNC_core_get_libctx_fn)(const struct ossl_core_handle_st*);

typedef void (*OSSL_FUNC_core_new_error_fn)(const struct ossl_core_handle_st*);

typedef void (*OSSL_FUNC_core_set_error_debug_fn)(const struct ossl_core_handle_st*,const char*,int,const char*);

typedef void (*OSSL_FUNC_core_vset_error_fn)(const struct ossl_core_handle_st*,unsigned int,const char*,va_list);

typedef int (*OSSL_FUNC_core_set_error_mark_fn)(const struct ossl_core_handle_st*);

typedef int (*OSSL_FUNC_core_clear_last_error_mark_fn)(const struct ossl_core_handle_st*);

typedef int (*OSSL_FUNC_core_pop_error_to_mark_fn)(const struct ossl_core_handle_st*);

typedef int (*OSSL_FUNC_core_obj_add_sigid_fn)(const struct ossl_core_handle_st*,const char*,const char*,const char*);

typedef int (*OSSL_FUNC_core_obj_create_fn)(const struct ossl_core_handle_st*,const char*,const char*,const char*);

typedef void* (*OSSL_FUNC_CRYPTO_malloc_fn)(unsigned long  int,const char*,int);

typedef void* (*OSSL_FUNC_CRYPTO_zalloc_fn)(unsigned long  int,const char*,int);

typedef void (*OSSL_FUNC_CRYPTO_free_fn)(void*,const char*,int);

typedef void (*OSSL_FUNC_CRYPTO_clear_free_fn)(void*,unsigned long  int,const char*,int);

typedef void* (*OSSL_FUNC_CRYPTO_realloc_fn)(void*,unsigned long  int,const char*,int);

typedef void* (*OSSL_FUNC_CRYPTO_clear_realloc_fn)(void*,unsigned long  int,unsigned long  int,const char*,int);

typedef void* (*OSSL_FUNC_CRYPTO_secure_malloc_fn)(unsigned long  int,const char*,int);

typedef void* (*OSSL_FUNC_CRYPTO_secure_zalloc_fn)(unsigned long  int,const char*,int);

typedef void (*OSSL_FUNC_CRYPTO_secure_free_fn)(void*,const char*,int);

typedef void (*OSSL_FUNC_CRYPTO_secure_clear_free_fn)(void*,unsigned long  int,const char*,int);

typedef int (*OSSL_FUNC_CRYPTO_secure_allocated_fn)(const void*);

typedef void (*OSSL_FUNC_OPENSSL_cleanse_fn)(void*,unsigned long  int);

typedef struct ossl_core_bio_st* (*OSSL_FUNC_BIO_new_file_fn)(const char*,const char*);

typedef struct ossl_core_bio_st* (*OSSL_FUNC_BIO_new_membuf_fn)(const void*,int);

typedef int (*OSSL_FUNC_BIO_read_ex_fn)(struct ossl_core_bio_st*,void*,unsigned long  int,unsigned long  int*);

typedef int (*OSSL_FUNC_BIO_write_ex_fn)(struct ossl_core_bio_st*,const void*,unsigned long  int,unsigned long  int*);

typedef int (*OSSL_FUNC_BIO_gets_fn)(struct ossl_core_bio_st*,char*,int);

typedef int (*OSSL_FUNC_BIO_puts_fn)(struct ossl_core_bio_st*,const char*);

typedef int (*OSSL_FUNC_BIO_up_ref_fn)(struct ossl_core_bio_st*);

typedef int (*OSSL_FUNC_BIO_free_fn)(struct ossl_core_bio_st*);

typedef int (*OSSL_FUNC_BIO_vprintf_fn)(struct ossl_core_bio_st*,const char*,va_list);

typedef int (*OSSL_FUNC_BIO_vsnprintf_fn)(char*,unsigned long  int,const char*,va_list);

typedef int (*OSSL_FUNC_BIO_ctrl_fn)(struct ossl_core_bio_st*,int,long,void*);

typedef void (*OSSL_FUNC_self_test_cb_fn)(struct openssl_core_ctx_st*,int (*)(const struct ossl_param_st*,void*),void**);

typedef unsigned long  int (*OSSL_FUNC_get_entropy_fn)(const struct ossl_core_handle_st*,unsigned char**,int,unsigned long  int,unsigned long  int);

typedef unsigned long  int (*OSSL_FUNC_get_user_entropy_fn)(const struct ossl_core_handle_st*,unsigned char**,int,unsigned long  int,unsigned long  int);

typedef void (*OSSL_FUNC_cleanup_entropy_fn)(const struct ossl_core_handle_st*,unsigned char*,unsigned long  int);

typedef void (*OSSL_FUNC_cleanup_user_entropy_fn)(const struct ossl_core_handle_st*,unsigned char*,unsigned long  int);

typedef unsigned long  int (*OSSL_FUNC_get_nonce_fn)(const struct ossl_core_handle_st*,unsigned char**,unsigned long  int,unsigned long  int,const void*,unsigned long  int);

typedef unsigned long  int (*OSSL_FUNC_get_user_nonce_fn)(const struct ossl_core_handle_st*,unsigned char**,unsigned long  int,unsigned long  int,const void*,unsigned long  int);

typedef void (*OSSL_FUNC_cleanup_nonce_fn)(const struct ossl_core_handle_st*,unsigned char*,unsigned long  int);

typedef void (*OSSL_FUNC_cleanup_user_nonce_fn)(const struct ossl_core_handle_st*,unsigned char*,unsigned long  int);

typedef int (*OSSL_FUNC_provider_register_child_cb_fn)(const struct ossl_core_handle_st*,int (*)(const struct ossl_core_handle_st*,void*),int (*)(const struct ossl_core_handle_st*,void*),int (*)(const char*,void*),void*);

typedef void (*OSSL_FUNC_provider_deregister_child_cb_fn)(const struct ossl_core_handle_st*);

typedef const char* (*OSSL_FUNC_provider_name_fn)(const struct ossl_core_handle_st*);

typedef void* (*OSSL_FUNC_provider_get0_provider_ctx_fn)(const struct ossl_core_handle_st*);

typedef const struct ossl_dispatch_st* (*OSSL_FUNC_provider_get0_dispatch_fn)(const struct ossl_core_handle_st*);

typedef int (*OSSL_FUNC_provider_up_ref_fn)(const struct ossl_core_handle_st*,int);

typedef int (*OSSL_FUNC_provider_free_fn)(const struct ossl_core_handle_st*,int);

typedef void (*OSSL_FUNC_provider_teardown_fn)(void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_provider_gettable_params_fn)(void*);

typedef int (*OSSL_FUNC_provider_get_params_fn)(void*,struct ossl_param_st*);

typedef const struct ossl_algorithm_st* (*OSSL_FUNC_provider_query_operation_fn)(void*,int,int*);

typedef void (*OSSL_FUNC_provider_unquery_operation_fn)(void*,int,const struct ossl_algorithm_st*);

typedef const struct ossl_item_st* (*OSSL_FUNC_provider_get_reason_strings_fn)(void*);

typedef int (*OSSL_FUNC_provider_get_capabilities_fn)(void*,const char*,int (*)(const struct ossl_param_st*,void*),void*);

typedef int (*OSSL_FUNC_provider_self_test_fn)(void*);

typedef void* (*OSSL_FUNC_digest_newctx_fn)(void*);

typedef int (*OSSL_FUNC_digest_init_fn)(void*,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_digest_update_fn)(void*,const unsigned char*,unsigned long  int);

typedef int (*OSSL_FUNC_digest_final_fn)(void*,unsigned char*,unsigned long  int*,unsigned long  int);

typedef int (*OSSL_FUNC_digest_squeeze_fn)(void*,unsigned char*,unsigned long  int*,unsigned long  int);

typedef int (*OSSL_FUNC_digest_digest_fn)(void*,const unsigned char*,unsigned long  int,unsigned char*,unsigned long  int*,unsigned long  int);

typedef void (*OSSL_FUNC_digest_freectx_fn)(void*);

typedef void* (*OSSL_FUNC_digest_dupctx_fn)(void*);

typedef int (*OSSL_FUNC_digest_get_params_fn)(struct ossl_param_st*);

typedef int (*OSSL_FUNC_digest_set_ctx_params_fn)(void*,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_digest_get_ctx_params_fn)(void*,struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_digest_gettable_params_fn)(void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_digest_settable_ctx_params_fn)(void*,void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_digest_gettable_ctx_params_fn)(void*,void*);

typedef void* (*OSSL_FUNC_cipher_newctx_fn)(void*);

typedef int (*OSSL_FUNC_cipher_encrypt_init_fn)(void*,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_cipher_decrypt_init_fn)(void*,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_cipher_update_fn)(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int);

typedef int (*OSSL_FUNC_cipher_final_fn)(void*,unsigned char*,unsigned long  int*,unsigned long  int);

typedef int (*OSSL_FUNC_cipher_cipher_fn)(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int);

typedef void (*OSSL_FUNC_cipher_freectx_fn)(void*);

typedef void* (*OSSL_FUNC_cipher_dupctx_fn)(void*);

typedef int (*OSSL_FUNC_cipher_get_params_fn)(struct ossl_param_st*);

typedef int (*OSSL_FUNC_cipher_get_ctx_params_fn)(void*,struct ossl_param_st*);

typedef int (*OSSL_FUNC_cipher_set_ctx_params_fn)(void*,const struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_cipher_gettable_params_fn)(void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_cipher_settable_ctx_params_fn)(void*,void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_cipher_gettable_ctx_params_fn)(void*,void*);

typedef void* (*OSSL_FUNC_mac_newctx_fn)(void*);

typedef void* (*OSSL_FUNC_mac_dupctx_fn)(void*);

typedef void (*OSSL_FUNC_mac_freectx_fn)(void*);

typedef int (*OSSL_FUNC_mac_init_fn)(void*,const unsigned char*,unsigned long  int,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_mac_update_fn)(void*,const unsigned char*,unsigned long  int);

typedef int (*OSSL_FUNC_mac_final_fn)(void*,unsigned char*,unsigned long  int*,unsigned long  int);

typedef const struct ossl_param_st* (*OSSL_FUNC_mac_gettable_params_fn)(void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_mac_gettable_ctx_params_fn)(void*,void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_mac_settable_ctx_params_fn)(void*,void*);

typedef int (*OSSL_FUNC_mac_get_params_fn)(struct ossl_param_st*);

typedef int (*OSSL_FUNC_mac_get_ctx_params_fn)(void*,struct ossl_param_st*);

typedef int (*OSSL_FUNC_mac_set_ctx_params_fn)(void*,const struct ossl_param_st*);

typedef void* (*OSSL_FUNC_kdf_newctx_fn)(void*);

typedef void* (*OSSL_FUNC_kdf_dupctx_fn)(void*);

typedef void (*OSSL_FUNC_kdf_freectx_fn)(void*);

typedef void (*OSSL_FUNC_kdf_reset_fn)(void*);

typedef int (*OSSL_FUNC_kdf_derive_fn)(void*,unsigned char*,unsigned long  int,const struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_kdf_gettable_params_fn)(void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_kdf_gettable_ctx_params_fn)(void*,void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_kdf_settable_ctx_params_fn)(void*,void*);

typedef int (*OSSL_FUNC_kdf_get_params_fn)(struct ossl_param_st*);

typedef int (*OSSL_FUNC_kdf_get_ctx_params_fn)(void*,struct ossl_param_st*);

typedef int (*OSSL_FUNC_kdf_set_ctx_params_fn)(void*,const struct ossl_param_st*);

typedef void* (*OSSL_FUNC_rand_newctx_fn)(void*,void*,const struct ossl_dispatch_st*);

typedef void (*OSSL_FUNC_rand_freectx_fn)(void*);

typedef int (*OSSL_FUNC_rand_instantiate_fn)(void*,unsigned int,int,const unsigned char*,unsigned long  int,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_rand_uninstantiate_fn)(void*);

typedef int (*OSSL_FUNC_rand_generate_fn)(void*,unsigned char*,unsigned long  int,unsigned int,int,const unsigned char*,unsigned long  int);

typedef int (*OSSL_FUNC_rand_reseed_fn)(void*,int,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int);

typedef unsigned long  int (*OSSL_FUNC_rand_nonce_fn)(void*,unsigned char*,unsigned int,unsigned long  int,unsigned long  int);

typedef int (*OSSL_FUNC_rand_enable_locking_fn)(void*);

typedef int (*OSSL_FUNC_rand_lock_fn)(void*);

typedef void (*OSSL_FUNC_rand_unlock_fn)(void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_rand_gettable_params_fn)(void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_rand_gettable_ctx_params_fn)(void*,void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_rand_settable_ctx_params_fn)(void*,void*);

typedef int (*OSSL_FUNC_rand_get_params_fn)(struct ossl_param_st*);

typedef int (*OSSL_FUNC_rand_get_ctx_params_fn)(void*,struct ossl_param_st*);

typedef int (*OSSL_FUNC_rand_set_ctx_params_fn)(void*,const struct ossl_param_st*);

typedef void (*OSSL_FUNC_rand_set_callbacks_fn)(void*,int (*)(const struct ossl_param_st*,struct ossl_param_st*,void*),int (*)(const struct ossl_param_st*,void*),int (*)(const struct ossl_param_st*,struct ossl_param_st*,void*),int (*)(const struct ossl_param_st*,void*),void*);

typedef int (*OSSL_FUNC_rand_verify_zeroization_fn)(void*);

typedef unsigned long  int (*OSSL_FUNC_rand_get_seed_fn)(void*,unsigned char**,int,unsigned long  int,unsigned long  int,int,const unsigned char*,unsigned long  int);

typedef void (*OSSL_FUNC_rand_clear_seed_fn)(void*,unsigned char*,unsigned long  int);

typedef void* (*OSSL_FUNC_keymgmt_new_fn)(void*);

typedef void* (*OSSL_FUNC_keymgmt_gen_init_fn)(void*,int,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_keymgmt_gen_set_template_fn)(void*,void*);

typedef int (*OSSL_FUNC_keymgmt_gen_set_params_fn)(void*,const struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_keymgmt_gen_settable_params_fn)(void*,void*);

typedef void* (*OSSL_FUNC_keymgmt_gen_fn)(void*,int (*)(const struct ossl_param_st*,void*),void*);

typedef void (*OSSL_FUNC_keymgmt_gen_cleanup_fn)(void*);

typedef void* (*OSSL_FUNC_keymgmt_load_fn)(const void*,unsigned long  int);

typedef void (*OSSL_FUNC_keymgmt_free_fn)(void*);

typedef int (*OSSL_FUNC_keymgmt_get_params_fn)(void*,struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_keymgmt_gettable_params_fn)(void*);

typedef int (*OSSL_FUNC_keymgmt_set_params_fn)(void*,const struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_keymgmt_settable_params_fn)(void*);

typedef const char* (*OSSL_FUNC_keymgmt_query_operation_name_fn)(int);

typedef int (*OSSL_FUNC_keymgmt_has_fn)(const void*,int);

typedef int (*OSSL_FUNC_keymgmt_validate_fn)(const void*,int,int);

typedef int (*OSSL_FUNC_keymgmt_match_fn)(const void*,const void*,int);

typedef int (*OSSL_FUNC_keymgmt_import_fn)(void*,int,const struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_keymgmt_import_types_fn)(int);

typedef int (*OSSL_FUNC_keymgmt_export_fn)(void*,int,int (*)(const struct ossl_param_st*,void*),void*);

typedef const struct ossl_param_st* (*OSSL_FUNC_keymgmt_export_types_fn)(int);

typedef void* (*OSSL_FUNC_keymgmt_dup_fn)(const void*,int);

typedef const struct ossl_param_st* (*OSSL_FUNC_keymgmt_import_types_ex_fn)(void*,int);

typedef const struct ossl_param_st* (*OSSL_FUNC_keymgmt_export_types_ex_fn)(void*,int);

typedef void* (*OSSL_FUNC_keyexch_newctx_fn)(void*);

typedef int (*OSSL_FUNC_keyexch_init_fn)(void*,void*,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_keyexch_derive_fn)(void*,unsigned char*,unsigned long  int*,unsigned long  int);

typedef int (*OSSL_FUNC_keyexch_set_peer_fn)(void*,void*);

typedef void (*OSSL_FUNC_keyexch_freectx_fn)(void*);

typedef void* (*OSSL_FUNC_keyexch_dupctx_fn)(void*);

typedef int (*OSSL_FUNC_keyexch_set_ctx_params_fn)(void*,const struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_keyexch_settable_ctx_params_fn)(void*,void*);

typedef int (*OSSL_FUNC_keyexch_get_ctx_params_fn)(void*,struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_keyexch_gettable_ctx_params_fn)(void*,void*);

typedef void* (*OSSL_FUNC_signature_newctx_fn)(void*,const char*);

typedef int (*OSSL_FUNC_signature_sign_init_fn)(void*,void*,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_signature_sign_fn)(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int);

typedef int (*OSSL_FUNC_signature_verify_init_fn)(void*,void*,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_signature_verify_fn)(void*,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int);

typedef int (*OSSL_FUNC_signature_verify_recover_init_fn)(void*,void*,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_signature_verify_recover_fn)(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int);

typedef int (*OSSL_FUNC_signature_digest_sign_init_fn)(void*,const char*,void*,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_signature_digest_sign_update_fn)(void*,const unsigned char*,unsigned long  int);

typedef int (*OSSL_FUNC_signature_digest_sign_final_fn)(void*,unsigned char*,unsigned long  int*,unsigned long  int);

typedef int (*OSSL_FUNC_signature_digest_sign_fn)(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int);

typedef int (*OSSL_FUNC_signature_digest_verify_init_fn)(void*,const char*,void*,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_signature_digest_verify_update_fn)(void*,const unsigned char*,unsigned long  int);

typedef int (*OSSL_FUNC_signature_digest_verify_final_fn)(void*,const unsigned char*,unsigned long  int);

typedef int (*OSSL_FUNC_signature_digest_verify_fn)(void*,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int);

typedef void (*OSSL_FUNC_signature_freectx_fn)(void*);

typedef void* (*OSSL_FUNC_signature_dupctx_fn)(void*);

typedef int (*OSSL_FUNC_signature_get_ctx_params_fn)(void*,struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_signature_gettable_ctx_params_fn)(void*,void*);

typedef int (*OSSL_FUNC_signature_set_ctx_params_fn)(void*,const struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_signature_settable_ctx_params_fn)(void*,void*);

typedef int (*OSSL_FUNC_signature_get_ctx_md_params_fn)(void*,struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_signature_gettable_ctx_md_params_fn)(void*);

typedef int (*OSSL_FUNC_signature_set_ctx_md_params_fn)(void*,const struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_signature_settable_ctx_md_params_fn)(void*);

typedef void* (*OSSL_FUNC_asym_cipher_newctx_fn)(void*);

typedef int (*OSSL_FUNC_asym_cipher_encrypt_init_fn)(void*,void*,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_asym_cipher_encrypt_fn)(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int);

typedef int (*OSSL_FUNC_asym_cipher_decrypt_init_fn)(void*,void*,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_asym_cipher_decrypt_fn)(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int);

typedef void (*OSSL_FUNC_asym_cipher_freectx_fn)(void*);

typedef void* (*OSSL_FUNC_asym_cipher_dupctx_fn)(void*);

typedef int (*OSSL_FUNC_asym_cipher_get_ctx_params_fn)(void*,struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_asym_cipher_gettable_ctx_params_fn)(void*,void*);

typedef int (*OSSL_FUNC_asym_cipher_set_ctx_params_fn)(void*,const struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_asym_cipher_settable_ctx_params_fn)(void*,void*);

typedef void* (*OSSL_FUNC_kem_newctx_fn)(void*);

typedef int (*OSSL_FUNC_kem_encapsulate_init_fn)(void*,void*,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_kem_auth_encapsulate_init_fn)(void*,void*,void*,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_kem_encapsulate_fn)(void*,unsigned char*,unsigned long  int*,unsigned char*,unsigned long  int*);

typedef int (*OSSL_FUNC_kem_decapsulate_init_fn)(void*,void*,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_kem_auth_decapsulate_init_fn)(void*,void*,void*,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_kem_decapsulate_fn)(void*,unsigned char*,unsigned long  int*,const unsigned char*,unsigned long  int);

typedef void (*OSSL_FUNC_kem_freectx_fn)(void*);

typedef void* (*OSSL_FUNC_kem_dupctx_fn)(void*);

typedef int (*OSSL_FUNC_kem_get_ctx_params_fn)(void*,struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_kem_gettable_ctx_params_fn)(void*,void*);

typedef int (*OSSL_FUNC_kem_set_ctx_params_fn)(void*,const struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_kem_settable_ctx_params_fn)(void*,void*);

typedef void* (*OSSL_FUNC_encoder_newctx_fn)(void*);

typedef void (*OSSL_FUNC_encoder_freectx_fn)(void*);

typedef int (*OSSL_FUNC_encoder_get_params_fn)(struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_encoder_gettable_params_fn)(void*);

typedef int (*OSSL_FUNC_encoder_set_ctx_params_fn)(void*,const struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_encoder_settable_ctx_params_fn)(void*);

typedef int (*OSSL_FUNC_encoder_does_selection_fn)(void*,int);

typedef int (*OSSL_FUNC_encoder_encode_fn)(void*,struct ossl_core_bio_st*,const void*,const struct ossl_param_st*,int,int (*)(char*,unsigned long  int,unsigned long  int*,const struct ossl_param_st*,void*),void*);

typedef void* (*OSSL_FUNC_encoder_import_object_fn)(void*,int,const struct ossl_param_st*);

typedef void (*OSSL_FUNC_encoder_free_object_fn)(void*);

typedef void* (*OSSL_FUNC_decoder_newctx_fn)(void*);

typedef void (*OSSL_FUNC_decoder_freectx_fn)(void*);

typedef int (*OSSL_FUNC_decoder_get_params_fn)(struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_decoder_gettable_params_fn)(void*);

typedef int (*OSSL_FUNC_decoder_set_ctx_params_fn)(void*,const struct ossl_param_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_decoder_settable_ctx_params_fn)(void*);

typedef int (*OSSL_FUNC_decoder_does_selection_fn)(void*,int);

typedef int (*OSSL_FUNC_decoder_decode_fn)(void*,struct ossl_core_bio_st*,int,int (*)(const struct ossl_param_st*,void*),void*,int (*)(char*,unsigned long  int,unsigned long  int*,const struct ossl_param_st*,void*),void*);

typedef int (*OSSL_FUNC_decoder_export_object_fn)(void*,const void*,unsigned long  int,int (*)(const struct ossl_param_st*,void*),void*);

typedef void* (*OSSL_FUNC_store_open_fn)(void*,const char*);

typedef void* (*OSSL_FUNC_store_attach_fn)(void*,struct ossl_core_bio_st*);

typedef const struct ossl_param_st* (*OSSL_FUNC_store_settable_ctx_params_fn)(void*);

typedef int (*OSSL_FUNC_store_set_ctx_params_fn)(void*,const struct ossl_param_st*);

typedef int (*OSSL_FUNC_store_load_fn)(void*,int (*)(const struct ossl_param_st*,void*),void*,int (*)(char*,unsigned long  int,unsigned long  int*,const struct ossl_param_st*,void*),void*);

typedef int (*OSSL_FUNC_store_eof_fn)(void*);

typedef int (*OSSL_FUNC_store_close_fn)(void*);

typedef int (*OSSL_FUNC_store_export_object_fn)(void*,const void*,unsigned long  int,int (*)(const struct ossl_param_st*,void*),void*);

typedef int (*OSSL_FUNC_store_delete_fn)(void*,const char*,const struct ossl_param_st*,int (*)(char*,unsigned long  int,unsigned long  int*,const struct ossl_param_st*,void*),void*);

typedef void* (*OSSL_FUNC_store_open_ex_fn)(void*,const char*,const struct ossl_param_st*,int (*)(char*,unsigned long  int,unsigned long  int*,const struct ossl_param_st*,void*),void*);

typedef int (*sk_X509_ALGOR_compfunc)(const struct X509_algor_st**,const struct X509_algor_st**);

typedef void (*sk_X509_ALGOR_freefunc)(struct X509_algor_st*);

typedef struct X509_algor_st* (*sk_X509_ALGOR_copyfunc)(const struct X509_algor_st*);

struct asn1_string_st
{
    int length;
    int type;
    unsigned char* data;
    long flags;
};

struct ASN1_ENCODING_st
{
    unsigned char* enc;
    long len;
    int modified;
};

typedef struct ASN1_ENCODING_st ASN1_ENCODING;

struct asn1_string_table_st
{
    int nid;
    long minsize;
    long maxsize;
    unsigned long  int mask;
    unsigned long  int flags;
};

typedef int (*sk_ASN1_STRING_TABLE_compfunc)(const struct asn1_string_table_st**,const struct asn1_string_table_st**);

typedef void (*sk_ASN1_STRING_TABLE_freefunc)(struct asn1_string_table_st*);

typedef struct asn1_string_table_st* (*sk_ASN1_STRING_TABLE_copyfunc)(const struct asn1_string_table_st*);

typedef struct ASN1_TEMPLATE_st ASN1_TEMPLATE;

typedef struct ASN1_TLC_st ASN1_TLC;

typedef struct ASN1_VALUE_st ASN1_VALUE;

typedef void* (*d2i_of_void)(void**,const unsigned char**,long);

typedef int (*i2d_of_void)(const void*,unsigned char**);

typedef const struct ASN1_ITEM_st* (*ASN1_ITEM_EXP)();

union anonymous_typeZ33
{
char* ptr;
int boolean;
struct asn1_string_st* asn1_string;
struct asn1_object_st* object;
struct asn1_string_st* integer;
struct asn1_string_st* enumerated;
struct asn1_string_st* bit_string;
struct asn1_string_st* octet_string;
struct asn1_string_st* printablestring;
struct asn1_string_st* t61string;
struct asn1_string_st* ia5string;
struct asn1_string_st* generalstring;
struct asn1_string_st* bmpstring;
struct asn1_string_st* universalstring;
struct asn1_string_st* utctime;
struct asn1_string_st* generalizedtime;
struct asn1_string_st* visiblestring;
struct asn1_string_st* utf8string;
struct asn1_string_st* set;
struct asn1_string_st* sequence;
struct ASN1_VALUE_st* asn1_value;
};

union anonymous_typeZ34
{
char* ptr;
int boolean;
struct asn1_string_st* asn1_string;
struct asn1_object_st* object;
struct asn1_string_st* integer;
struct asn1_string_st* enumerated;
struct asn1_string_st* bit_string;
struct asn1_string_st* octet_string;
struct asn1_string_st* printablestring;
struct asn1_string_st* t61string;
struct asn1_string_st* ia5string;
struct asn1_string_st* generalstring;
struct asn1_string_st* bmpstring;
struct asn1_string_st* universalstring;
struct asn1_string_st* utctime;
struct asn1_string_st* generalizedtime;
struct asn1_string_st* visiblestring;
struct asn1_string_st* utf8string;
struct asn1_string_st* set;
struct asn1_string_st* sequence;
struct ASN1_VALUE_st* asn1_value;
};

struct asn1_type_st
{
    int type;
    union anonymous_typeZ34 value;
};

typedef int (*sk_ASN1_TYPE_compfunc)(const struct asn1_type_st**,const struct asn1_type_st**);

typedef void (*sk_ASN1_TYPE_freefunc)(struct asn1_type_st*);

typedef struct asn1_type_st* (*sk_ASN1_TYPE_copyfunc)(const struct asn1_type_st*);

typedef struct stack_st_ASN1_TYPE ASN1_SEQUENCE_ANY;

struct BIT_STRING_BITNAME_st
{
    int bitnum;
    const char* lname;
    const char* sname;
};

typedef struct BIT_STRING_BITNAME_st BIT_STRING_BITNAME;

typedef int (*sk_ASN1_OBJECT_compfunc)(const struct asn1_object_st**,const struct asn1_object_st**);

typedef void (*sk_ASN1_OBJECT_freefunc)(struct asn1_object_st*);

typedef struct asn1_object_st* (*sk_ASN1_OBJECT_copyfunc)(const struct asn1_object_st*);

typedef int (*sk_ASN1_INTEGER_compfunc)(const struct asn1_string_st**,const struct asn1_string_st**);

typedef void (*sk_ASN1_INTEGER_freefunc)(struct asn1_string_st*);

typedef struct asn1_string_st* (*sk_ASN1_INTEGER_copyfunc)(const struct asn1_string_st*);

typedef int (*sk_ASN1_UTF8STRING_compfunc)(const struct asn1_string_st**,const struct asn1_string_st**);

typedef void (*sk_ASN1_UTF8STRING_freefunc)(struct asn1_string_st*);

typedef struct asn1_string_st* (*sk_ASN1_UTF8STRING_copyfunc)(const struct asn1_string_st*);

typedef int (*sk_ASN1_GENERALSTRING_compfunc)(const struct asn1_string_st**,const struct asn1_string_st**);

typedef void (*sk_ASN1_GENERALSTRING_freefunc)(struct asn1_string_st*);

typedef struct asn1_string_st* (*sk_ASN1_GENERALSTRING_copyfunc)(const struct asn1_string_st*);

struct obj_name_st
{
    int type;
    int alias;
    const char* name;
    const char* data;
};

typedef struct obj_name_st OBJ_NAME;

struct anonymous_typeX35
{
    unsigned char* out;
    const unsigned char* inp;
    unsigned long  int len;
    unsigned int interleave;
};

typedef struct anonymous_typeX35 EVP_CTRL_TLS1_1_MULTIBLOCK_PARAM;

struct evp_cipher_info_st
{
    const struct evp_cipher_st* cipher;
    unsigned char iv[16];
};

typedef struct evp_cipher_info_st EVP_CIPHER_INFO;

typedef int (*EVP_PBE_KEYGEN)(struct evp_cipher_ctx_st*,const char*,int,struct asn1_type_st*,const struct evp_cipher_st*,const struct evp_md_st*,int);

typedef int (*EVP_PBE_KEYGEN_EX)(struct evp_cipher_ctx_st*,const char*,int,struct asn1_type_st*,const struct evp_cipher_st*,const struct evp_md_st*,int,struct ossl_lib_ctx_st*,const char*);

typedef int (*EVP_PKEY_gen_cb)(struct evp_pkey_ctx_st*);

enum anonymous_typeY36 { POINT_CONVERSION_COMPRESSED=(2),
POINT_CONVERSION_UNCOMPRESSED=(4),
POINT_CONVERSION_HYBRID=(6)
};

typedef enum anonymous_typeY36 point_conversion_form_t;

typedef struct ec_method_st EC_METHOD;

typedef struct ec_group_st EC_GROUP;

typedef struct ec_point_st EC_POINT;

typedef struct ecpk_parameters_st ECPKPARAMETERS;

typedef struct ec_parameters_st ECPARAMETERS;

struct anonymous_typeX37
{
    int nid;
    const char* comment;
};

typedef struct anonymous_typeX37 EC_builtin_curve;

typedef struct ECDSA_SIG_st ECDSA_SIG;

struct rsa_pss_params_st
{
    struct X509_algor_st* hashAlgorithm;
    struct X509_algor_st* maskGenAlgorithm;
    struct asn1_string_st* saltLength;
    struct asn1_string_st* trailerField;
    struct X509_algor_st* maskHash;
};

struct rsa_oaep_params_st
{
    struct X509_algor_st* hashFunc;
    struct X509_algor_st* maskGenFunc;
    struct X509_algor_st* pSourceFunc;
    struct X509_algor_st* maskHash;
};

typedef struct rsa_oaep_params_st RSA_OAEP_PARAMS;

typedef struct DSA_SIG_st DSA_SIG;

struct SHAstate_st
{
    unsigned int h0;
    unsigned int h1;
    unsigned int h2;
    unsigned int h3;
    unsigned int h4;
    unsigned int Nl;
    unsigned int Nh;
    unsigned int data[16];
    unsigned int num;
};

typedef struct SHAstate_st SHA_CTX;

struct SHA256state_st
{
    unsigned int h[8];
    unsigned int Nl;
    unsigned int Nh;
    unsigned int data[16];
    unsigned int num;
    unsigned int md_len;
};

typedef struct SHA256state_st SHA256_CTX;

union anonymous_typeZ38
{
unsigned long  long d[16];
unsigned char p[(16*8)];
};

union anonymous_typeZ39
{
unsigned long  long d[16];
unsigned char p[(16*8)];
};

struct SHA512state_st
{
    unsigned long  long h[8];
    unsigned long  long Nl;
    unsigned long  long Nh;
    union anonymous_typeZ39 u;
    unsigned int num;
    unsigned int md_len;
};

typedef struct SHA512state_st SHA512_CTX;

typedef int (*sk_X509_NAME_compfunc)(const struct X509_name_st**,const struct X509_name_st**);

typedef void (*sk_X509_NAME_freefunc)(struct X509_name_st*);

typedef struct X509_name_st* (*sk_X509_NAME_copyfunc)(const struct X509_name_st*);

typedef int (*sk_X509_compfunc)(const struct x509_st**,const struct x509_st**);

typedef void (*sk_X509_freefunc)(struct x509_st*);

typedef struct x509_st* (*sk_X509_copyfunc)(const struct x509_st*);

typedef int (*sk_X509_REVOKED_compfunc)(const struct x509_revoked_st**,const struct x509_revoked_st**);

typedef void (*sk_X509_REVOKED_freefunc)(struct x509_revoked_st*);

typedef struct x509_revoked_st* (*sk_X509_REVOKED_copyfunc)(const struct x509_revoked_st*);

typedef int (*sk_X509_CRL_compfunc)(const struct X509_crl_st**,const struct X509_crl_st**);

typedef void (*sk_X509_CRL_freefunc)(struct X509_crl_st*);

typedef struct X509_crl_st* (*sk_X509_CRL_copyfunc)(const struct X509_crl_st*);

struct X509_algor_st
{
    struct asn1_object_st* algorithm;
    struct asn1_type_st* parameter;
};

typedef struct stack_st_X509_ALGOR X509_ALGORS;

struct X509_val_st
{
    struct asn1_string_st* notBefore;
    struct asn1_string_st* notAfter;
};

typedef struct X509_val_st X509_VAL;

typedef struct X509_sig_st X509_SIG;

typedef struct X509_name_entry_st X509_NAME_ENTRY;

typedef int (*sk_X509_NAME_ENTRY_compfunc)(const struct X509_name_entry_st**,const struct X509_name_entry_st**);

typedef void (*sk_X509_NAME_ENTRY_freefunc)(struct X509_name_entry_st*);

typedef struct X509_name_entry_st* (*sk_X509_NAME_ENTRY_copyfunc)(const struct X509_name_entry_st*);

typedef struct X509_extension_st X509_EXTENSION;

typedef int (*sk_X509_EXTENSION_compfunc)(const struct X509_extension_st**,const struct X509_extension_st**);

typedef void (*sk_X509_EXTENSION_freefunc)(struct X509_extension_st*);

typedef struct X509_extension_st* (*sk_X509_EXTENSION_copyfunc)(const struct X509_extension_st*);

typedef struct stack_st_X509_EXTENSION X509_EXTENSIONS;

typedef struct x509_attributes_st X509_ATTRIBUTE;

typedef int (*sk_X509_ATTRIBUTE_compfunc)(const struct x509_attributes_st**,const struct x509_attributes_st**);

typedef void (*sk_X509_ATTRIBUTE_freefunc)(struct x509_attributes_st*);

typedef struct x509_attributes_st* (*sk_X509_ATTRIBUTE_copyfunc)(const struct x509_attributes_st*);

typedef struct X509_req_info_st X509_REQ_INFO;

typedef struct X509_req_st X509_REQ;

typedef struct x509_cert_aux_st X509_CERT_AUX;

typedef struct x509_cinf_st X509_CINF;

typedef struct X509_crl_info_st X509_CRL_INFO;

struct private_key_st
{
    int version;
    struct X509_algor_st* enc_algor;
    struct asn1_string_st* enc_pkey;
    struct evp_pkey_st* dec_pkey;
    int key_length;
    char* key_data;
    int key_free;
    struct evp_cipher_info_st cipher;
};

typedef struct private_key_st X509_PKEY;

struct X509_info_st
{
    struct x509_st* x509;
    struct X509_crl_st* crl;
    struct private_key_st* x_pkey;
    struct evp_cipher_info_st enc_cipher;
    int enc_len;
    char* enc_data;
};

typedef struct X509_info_st X509_INFO;

typedef int (*sk_X509_INFO_compfunc)(const struct X509_info_st**,const struct X509_info_st**);

typedef void (*sk_X509_INFO_freefunc)(struct X509_info_st*);

typedef struct X509_info_st* (*sk_X509_INFO_copyfunc)(const struct X509_info_st*);

struct Netscape_spkac_st
{
    struct X509_pubkey_st* pubkey;
    struct asn1_string_st* challenge;
};

typedef struct Netscape_spkac_st NETSCAPE_SPKAC;

struct Netscape_spki_st
{
    struct Netscape_spkac_st* spkac;
    struct X509_algor_st sig_algor;
    struct asn1_string_st* signature;
};

typedef struct Netscape_spki_st NETSCAPE_SPKI;

struct Netscape_certificate_sequence
{
    struct asn1_object_st* type;
    struct stack_st_X509* certs;
};

typedef struct Netscape_certificate_sequence NETSCAPE_CERT_SEQUENCE;

struct PBEPARAM_st
{
    struct asn1_string_st* salt;
    struct asn1_string_st* iter;
};

typedef struct PBEPARAM_st PBEPARAM;

struct PBE2PARAM_st
{
    struct X509_algor_st* keyfunc;
    struct X509_algor_st* encryption;
};

typedef struct PBE2PARAM_st PBE2PARAM;

struct PBKDF2PARAM_st
{
    struct asn1_type_st* salt;
    struct asn1_string_st* iter;
    struct asn1_string_st* keylength;
    struct X509_algor_st* prf;
};

typedef struct PBKDF2PARAM_st PBKDF2PARAM;

struct SCRYPT_PARAMS_st
{
    struct asn1_string_st* salt;
    struct asn1_string_st* costParameter;
    struct asn1_string_st* blockSize;
    struct asn1_string_st* parallelizationParameter;
    struct asn1_string_st* keyLength;
};

typedef struct SCRYPT_PARAMS_st SCRYPT_PARAMS;

typedef struct lhash_node_st OPENSSL_LH_NODE;

typedef int (*OPENSSL_LH_COMPFUNC)(const void*,const void*);

typedef int (*OPENSSL_LH_COMPFUNCTHUNK)(const void*,const void*,int (*)(const void*,const void*));

typedef unsigned long  int (*OPENSSL_LH_HASHFUNC)(const void*);

typedef unsigned long  int (*OPENSSL_LH_HASHFUNCTHUNK)(const void*,unsigned long  int (*)(const void*));

typedef void (*OPENSSL_LH_DOALL_FUNC)(void*);

typedef void (*OPENSSL_LH_DOALL_FUNC_THUNK)(void*,void (*)(void*));

typedef void (*OPENSSL_LH_DOALL_FUNCARG)(void*,void*);

typedef void (*OPENSSL_LH_DOALL_FUNCARG_THUNK)(void*,void*,void (*)(void*,void*));

typedef struct lhash_st OPENSSL_LHASH;

union lh_OPENSSL_STRING_dummy
{
void* d1;
unsigned long  int d2;
int d3;
};

struct lhash_st_OPENSSL_STRING
{
    union lh_OPENSSL_STRING_dummy dummy;
};

typedef int (*lh_OPENSSL_STRING_compfunc)(const char**,const char**);

typedef unsigned long  int (*lh_OPENSSL_STRING_hashfunc)(const char**);

typedef void (*lh_OPENSSL_STRING_doallfunc)(char**);

union lh_OPENSSL_CSTRING_dummy
{
void* d1;
unsigned long  int d2;
int d3;
};

struct lhash_st_OPENSSL_CSTRING
{
    union lh_OPENSSL_CSTRING_dummy dummy;
};

typedef int (*lh_OPENSSL_CSTRING_compfunc)(const char**,const char**);

typedef unsigned long  int (*lh_OPENSSL_CSTRING_hashfunc)(const char**);

typedef void (*lh_OPENSSL_CSTRING_doallfunc)(const char**);

enum anonymous_typeY40 { X509_LU_NONE=(0),
X509_LU_X509
,X509_LU_CRL
};

typedef enum anonymous_typeY40 X509_LOOKUP_TYPE;

typedef int (*sk_X509_LOOKUP_compfunc)(const struct x509_lookup_st**,const struct x509_lookup_st**);

typedef void (*sk_X509_LOOKUP_freefunc)(struct x509_lookup_st*);

typedef struct x509_lookup_st* (*sk_X509_LOOKUP_copyfunc)(const struct x509_lookup_st*);

typedef int (*sk_X509_OBJECT_compfunc)(const struct x509_object_st**,const struct x509_object_st**);

typedef void (*sk_X509_OBJECT_freefunc)(struct x509_object_st*);

typedef struct x509_object_st* (*sk_X509_OBJECT_copyfunc)(const struct x509_object_st*);

typedef int (*sk_X509_VERIFY_PARAM_compfunc)(const struct X509_VERIFY_PARAM_st**,const struct X509_VERIFY_PARAM_st**);

typedef void (*sk_X509_VERIFY_PARAM_freefunc)(struct X509_VERIFY_PARAM_st*);

typedef struct X509_VERIFY_PARAM_st* (*sk_X509_VERIFY_PARAM_copyfunc)(const struct X509_VERIFY_PARAM_st*);

struct x509_trust_st
{
    int trust;
    int flags;
    int (*check_trust)(struct x509_trust_st*,struct x509_st*,int);
    char* name;
    int arg1;
    void* arg2;
};

typedef struct x509_trust_st X509_TRUST;

typedef int (*sk_X509_TRUST_compfunc)(const struct x509_trust_st**,const struct x509_trust_st**);

typedef void (*sk_X509_TRUST_freefunc)(struct x509_trust_st*);

typedef struct x509_trust_st* (*sk_X509_TRUST_copyfunc)(const struct x509_trust_st*);

typedef int (*X509_STORE_CTX_verify_cb)(int,struct x509_store_ctx_st*);

typedef int (*X509_STORE_CTX_verify_fn)(struct x509_store_ctx_st*);

typedef int (*X509_STORE_CTX_get_issuer_fn)(struct x509_st**,struct x509_store_ctx_st*,struct x509_st*);

typedef int (*X509_STORE_CTX_check_issued_fn)(struct x509_store_ctx_st*,struct x509_st*,struct x509_st*);

typedef int (*X509_STORE_CTX_check_revocation_fn)(struct x509_store_ctx_st*);

typedef int (*X509_STORE_CTX_get_crl_fn)(struct x509_store_ctx_st*,struct X509_crl_st**,struct x509_st*);

typedef int (*X509_STORE_CTX_check_crl_fn)(struct x509_store_ctx_st*,struct X509_crl_st*);

typedef int (*X509_STORE_CTX_cert_crl_fn)(struct x509_store_ctx_st*,struct X509_crl_st*,struct x509_st*);

typedef int (*X509_STORE_CTX_check_policy_fn)(struct x509_store_ctx_st*);

typedef struct stack_st_X509* (*X509_STORE_CTX_lookup_certs_fn)(struct x509_store_ctx_st*,const struct X509_name_st*);

typedef struct stack_st_X509_CRL* (*X509_STORE_CTX_lookup_crls_fn)(const struct x509_store_ctx_st*,const struct X509_name_st*);

typedef int (*X509_STORE_CTX_cleanup_fn)(struct x509_store_ctx_st*);

typedef int (*X509_LOOKUP_ctrl_fn)(struct x509_lookup_st*,int,const char*,long,char**);

typedef int (*X509_LOOKUP_ctrl_ex_fn)(struct x509_lookup_st*,int,const char*,long,char**,struct ossl_lib_ctx_st*,const char*);

typedef int (*X509_LOOKUP_get_by_subject_fn)(struct x509_lookup_st*,enum anonymous_typeY40,const struct X509_name_st*,struct x509_object_st*);

typedef int (*X509_LOOKUP_get_by_subject_ex_fn)(struct x509_lookup_st*,enum anonymous_typeY40,const struct X509_name_st*,struct x509_object_st*,struct ossl_lib_ctx_st*,const char*);

typedef int (*X509_LOOKUP_get_by_issuer_serial_fn)(struct x509_lookup_st*,enum anonymous_typeY40,const struct X509_name_st*,const struct asn1_string_st*,struct x509_object_st*);

typedef int (*X509_LOOKUP_get_by_fingerprint_fn)(struct x509_lookup_st*,enum anonymous_typeY40,const unsigned char*,int,struct x509_object_st*);

typedef int (*X509_LOOKUP_get_by_alias_fn)(struct x509_lookup_st*,enum anonymous_typeY40,const char*,int,struct x509_object_st*);

struct PKCS7_CTX_st
{
    struct ossl_lib_ctx_st* libctx;
    char* propq;
};

typedef struct PKCS7_CTX_st PKCS7_CTX;

struct pkcs7_issuer_and_serial_st
{
    struct X509_name_st* issuer;
    struct asn1_string_st* serial;
};

typedef struct pkcs7_issuer_and_serial_st PKCS7_ISSUER_AND_SERIAL;

struct pkcs7_signer_info_st
{
    struct asn1_string_st* version;
    struct pkcs7_issuer_and_serial_st* issuer_and_serial;
    struct X509_algor_st* digest_alg;
    struct stack_st_X509_ATTRIBUTE* auth_attr;
    struct X509_algor_st* digest_enc_alg;
    struct asn1_string_st* enc_digest;
    struct stack_st_X509_ATTRIBUTE* unauth_attr;
    struct evp_pkey_st* pkey;
    const struct PKCS7_CTX_st* ctx;
};

typedef struct pkcs7_signer_info_st PKCS7_SIGNER_INFO;

typedef int (*sk_PKCS7_SIGNER_INFO_compfunc)(const struct pkcs7_signer_info_st**,const struct pkcs7_signer_info_st**);

typedef void (*sk_PKCS7_SIGNER_INFO_freefunc)(struct pkcs7_signer_info_st*);

typedef struct pkcs7_signer_info_st* (*sk_PKCS7_SIGNER_INFO_copyfunc)(const struct pkcs7_signer_info_st*);

struct pkcs7_recip_info_st
{
    struct asn1_string_st* version;
    struct pkcs7_issuer_and_serial_st* issuer_and_serial;
    struct X509_algor_st* key_enc_algor;
    struct asn1_string_st* enc_key;
    struct x509_st* cert;
    const struct PKCS7_CTX_st* ctx;
};

typedef struct pkcs7_recip_info_st PKCS7_RECIP_INFO;

typedef int (*sk_PKCS7_RECIP_INFO_compfunc)(const struct pkcs7_recip_info_st**,const struct pkcs7_recip_info_st**);

typedef void (*sk_PKCS7_RECIP_INFO_freefunc)(struct pkcs7_recip_info_st*);

typedef struct pkcs7_recip_info_st* (*sk_PKCS7_RECIP_INFO_copyfunc)(const struct pkcs7_recip_info_st*);

struct pkcs7_signed_st
{
    struct asn1_string_st* version;
    struct stack_st_X509_ALGOR* md_algs;
    struct stack_st_X509* cert;
    struct stack_st_X509_CRL* crl;
    struct stack_st_PKCS7_SIGNER_INFO* signer_info;
    struct pkcs7_st* contents;
};

typedef struct pkcs7_signed_st PKCS7_SIGNED;

struct pkcs7_enc_content_st
{
    struct asn1_object_st* content_type;
    struct X509_algor_st* algorithm;
    struct asn1_string_st* enc_data;
    const struct evp_cipher_st* cipher;
    const struct PKCS7_CTX_st* ctx;
};

typedef struct pkcs7_enc_content_st PKCS7_ENC_CONTENT;

struct pkcs7_enveloped_st
{
    struct asn1_string_st* version;
    struct stack_st_PKCS7_RECIP_INFO* recipientinfo;
    struct pkcs7_enc_content_st* enc_data;
};

typedef struct pkcs7_enveloped_st PKCS7_ENVELOPE;

struct pkcs7_signedandenveloped_st
{
    struct asn1_string_st* version;
    struct stack_st_X509_ALGOR* md_algs;
    struct stack_st_X509* cert;
    struct stack_st_X509_CRL* crl;
    struct stack_st_PKCS7_SIGNER_INFO* signer_info;
    struct pkcs7_enc_content_st* enc_data;
    struct stack_st_PKCS7_RECIP_INFO* recipientinfo;
};

typedef struct pkcs7_signedandenveloped_st PKCS7_SIGN_ENVELOPE;

struct pkcs7_digest_st
{
    struct asn1_string_st* version;
    struct X509_algor_st* md;
    struct pkcs7_st* contents;
    struct asn1_string_st* digest;
};

typedef struct pkcs7_digest_st PKCS7_DIGEST;

struct pkcs7_encrypted_st
{
    struct asn1_string_st* version;
    struct pkcs7_enc_content_st* enc_data;
};

typedef struct pkcs7_encrypted_st PKCS7_ENCRYPT;

union anonymous_typeZ41
{
char* ptr;
struct asn1_string_st* data;
struct pkcs7_signed_st* sign;
struct pkcs7_enveloped_st* enveloped;
struct pkcs7_signedandenveloped_st* signed_and_enveloped;
struct pkcs7_digest_st* digest;
struct pkcs7_encrypted_st* encrypted;
struct asn1_type_st* other;
};

union anonymous_typeZ42
{
char* ptr;
struct asn1_string_st* data;
struct pkcs7_signed_st* sign;
struct pkcs7_enveloped_st* enveloped;
struct pkcs7_signedandenveloped_st* signed_and_enveloped;
struct pkcs7_digest_st* digest;
struct pkcs7_encrypted_st* encrypted;
struct asn1_type_st* other;
};

struct pkcs7_st
{
    unsigned char* asn1;
    long length;
    int state;
    int detached;
    struct asn1_object_st* type;
    union anonymous_typeZ42 d;
    struct PKCS7_CTX_st ctx;
};

typedef struct pkcs7_st PKCS7;

typedef int (*sk_PKCS7_compfunc)(const struct pkcs7_st**,const struct pkcs7_st**);

typedef void (*sk_PKCS7_freefunc)(struct pkcs7_st*);

typedef struct pkcs7_st* (*sk_PKCS7_copyfunc)(const struct pkcs7_st*);

struct anonymous_typeX43
{
    char* section;
    char* name;
    char* value;
};

typedef struct anonymous_typeX43 CONF_VALUE;

typedef int (*sk_CONF_VALUE_compfunc)(const struct anonymous_typeX43**,const struct anonymous_typeX43**);

typedef void (*sk_CONF_VALUE_freefunc)(struct anonymous_typeX43*);

typedef struct anonymous_typeX43* (*sk_CONF_VALUE_copyfunc)(const struct anonymous_typeX43*);

union lh_CONF_VALUE_dummy
{
void* d1;
unsigned long  int d2;
int d3;
};

struct lhash_st_CONF_VALUE
{
    union lh_CONF_VALUE_dummy dummy;
};

typedef int (*lh_CONF_VALUE_compfunc)(const struct anonymous_typeX43*,const struct anonymous_typeX43*);

typedef unsigned long  int (*lh_CONF_VALUE_hashfunc)(const struct anonymous_typeX43*);

typedef void (*lh_CONF_VALUE_doallfunc)(struct anonymous_typeX43*);

typedef struct conf_method_st CONF_METHOD;

struct conf_method_st
{
    const char* name;
    struct conf_st* (*create)(struct conf_method_st*);
    int (*init)(struct conf_st*);
    int (*destroy)(struct conf_st*);
    int (*destroy_data)(struct conf_st*);
    int (*load_bio)(struct conf_st*,struct bio_st*,long*);
    int (*dump)(const struct conf_st*,struct bio_st*);
    int (*is_number)(const struct conf_st*,char);
    int (*to_int)(const struct conf_st*,char);
    int (*load)(struct conf_st*,const char*,long*);
};

struct conf_st
{
    struct conf_method_st* meth;
    void* meth_data;
    struct lhash_st_CONF_VALUE* data;
    int flag_dollarid;
    int flag_abspath;
    char* includedir;
    struct ossl_lib_ctx_st* libctx;
};

typedef struct conf_imodule_st CONF_IMODULE;

typedef struct conf_module_st CONF_MODULE;

typedef int (*conf_init_func)(struct conf_imodule_st*,const struct conf_st*);

typedef void (*conf_finish_func)(struct conf_imodule_st*);

typedef struct bio_st* (*OSSL_HTTP_bio_cb_t)(struct bio_st*,void*,int,int);

typedef struct async_job_st ASYNC_JOB;

typedef struct async_wait_ctx_st ASYNC_WAIT_CTX;

typedef int (*ASYNC_callback_fn)(void*);

typedef void* (*ASYNC_stack_alloc_fn)(unsigned long  int*);

typedef void (*ASYNC_stack_free_fn)(void*);

typedef int (*sk_SCT_compfunc)(const struct sct_st**,const struct sct_st**);

typedef void (*sk_SCT_freefunc)(struct sct_st*);

typedef struct sct_st* (*sk_SCT_copyfunc)(const struct sct_st*);

typedef int (*sk_CTLOG_compfunc)(const struct ctlog_st**,const struct ctlog_st**);

typedef void (*sk_CTLOG_freefunc)(struct ctlog_st*);

typedef struct ctlog_st* (*sk_CTLOG_copyfunc)(const struct ctlog_st*);

enum anonymous_typeY44 { CT_LOG_ENTRY_TYPE_NOT_SET=(-1),
CT_LOG_ENTRY_TYPE_X509=(0),
CT_LOG_ENTRY_TYPE_PRECERT=(1)
};

typedef enum anonymous_typeY44 ct_log_entry_type_t;

enum anonymous_typeY45 { SCT_VERSION_NOT_SET=(-1),
SCT_VERSION_V1=(0)
};

typedef enum anonymous_typeY45 sct_version_t;

enum anonymous_typeY46 { SCT_SOURCE_UNKNOWN
,SCT_SOURCE_TLS_EXTENSION
,SCT_SOURCE_X509V3_EXTENSION
,SCT_SOURCE_OCSP_STAPLED_RESPONSE
};

typedef enum anonymous_typeY46 sct_source_t;

enum anonymous_typeY47 { SCT_VALIDATION_STATUS_NOT_SET
,SCT_VALIDATION_STATUS_UNKNOWN_LOG
,SCT_VALIDATION_STATUS_VALID
,SCT_VALIDATION_STATUS_INVALID
,SCT_VALIDATION_STATUS_UNVERIFIED
,SCT_VALIDATION_STATUS_UNKNOWN_VERSION
};

typedef enum anonymous_typeY47 sct_validation_status_t;

typedef struct ssl_st* ssl_crock_st;

typedef struct tls_session_ticket_ext_st TLS_SESSION_TICKET_EXT;

typedef struct ssl_method_st SSL_METHOD;

typedef struct ssl_cipher_st SSL_CIPHER;

typedef struct ssl_session_st SSL_SESSION;

typedef struct tls_sigalgs_st TLS_SIGALGS;

typedef struct ssl_conf_ctx_st SSL_CONF_CTX;

typedef struct ssl_comp_st SSL_COMP;

struct srtp_protection_profile_st
{
    const char* name;
    unsigned long  int id;
};

typedef struct srtp_protection_profile_st SRTP_PROTECTION_PROFILE;

typedef int (*sk_SRTP_PROTECTION_PROFILE_compfunc)(const struct srtp_protection_profile_st**,const struct srtp_protection_profile_st**);

typedef void (*sk_SRTP_PROTECTION_PROFILE_freefunc)(struct srtp_protection_profile_st*);

typedef struct srtp_protection_profile_st* (*sk_SRTP_PROTECTION_PROFILE_copyfunc)(const struct srtp_protection_profile_st*);

typedef int (*tls_session_ticket_ext_cb_fn)(struct ssl_st*,const unsigned char*,int,void*);

typedef int (*tls_session_secret_cb_fn)(struct ssl_st*,void*,int*,struct stack_st_SSL_CIPHER*,const struct ssl_cipher_st**,void*);

typedef int (*custom_ext_add_cb)(struct ssl_st*,unsigned int,const unsigned char**,unsigned long  int*,int*,void*);

typedef void (*custom_ext_free_cb)(struct ssl_st*,unsigned int,const unsigned char*,void*);

typedef int (*custom_ext_parse_cb)(struct ssl_st*,unsigned int,const unsigned char*,unsigned long  int,int*,void*);

typedef int (*SSL_custom_ext_add_cb_ex)(struct ssl_st*,unsigned int,unsigned int,const unsigned char**,unsigned long  int*,struct x509_st*,unsigned long  int,int*,void*);

typedef void (*SSL_custom_ext_free_cb_ex)(struct ssl_st*,unsigned int,unsigned int,const unsigned char*,void*);

typedef int (*SSL_custom_ext_parse_cb_ex)(struct ssl_st*,unsigned int,unsigned int,const unsigned char*,unsigned long  int,struct x509_st*,unsigned long  int,int*,void*);

typedef int (*SSL_verify_cb)(int,struct x509_store_ctx_st*);

typedef int (*SSL_async_callback_fn)(struct ssl_st*,void*);

typedef int (*GEN_SESSION_CB)(struct ssl_st*,unsigned char*,unsigned int*);

typedef int (*SSL_CTX_npn_advertised_cb_func)(struct ssl_st*,const unsigned char**,unsigned int*,void*);

typedef int (*SSL_CTX_npn_select_cb_func)(struct ssl_st*,unsigned char**,unsigned char*,const unsigned char*,unsigned int,void*);

typedef int (*SSL_CTX_alpn_select_cb_func)(struct ssl_st*,const unsigned char**,unsigned char*,const unsigned char*,unsigned int,void*);

typedef unsigned int (*SSL_psk_client_cb_func)(struct ssl_st*,const char*,char*,unsigned int,unsigned char*,unsigned int);

typedef unsigned int (*SSL_psk_server_cb_func)(struct ssl_st*,const char*,unsigned char*,unsigned int);

typedef int (*SSL_psk_find_session_cb_func)(struct ssl_st*,const unsigned char*,unsigned long  int,struct ssl_session_st**);

typedef int (*SSL_psk_use_session_cb_func)(struct ssl_st*,const struct evp_md_st*,const unsigned char**,unsigned long  int*,struct ssl_session_st**);

typedef void (*SSL_CTX_keylog_cb_func)(const struct ssl_st*,const char*);

struct tls_session_ticket_ext_st
{
    unsigned short int length;
    void* data;
};

typedef int (*sk_SSL_CIPHER_compfunc)(const struct ssl_cipher_st**,const struct ssl_cipher_st**);

typedef void (*sk_SSL_CIPHER_freefunc)(struct ssl_cipher_st*);

typedef struct ssl_cipher_st* (*sk_SSL_CIPHER_copyfunc)(const struct ssl_cipher_st*);

typedef int (*sk_SSL_COMP_compfunc)(const struct ssl_comp_st**,const struct ssl_comp_st**);

typedef void (*sk_SSL_COMP_freefunc)(struct ssl_comp_st*);

typedef struct ssl_comp_st* (*sk_SSL_COMP_copyfunc)(const struct ssl_comp_st*);

enum anonymous_typeY48 { TLS_ST_BEFORE
,TLS_ST_OK
,DTLS_ST_CR_HELLO_VERIFY_REQUEST
,TLS_ST_CR_SRVR_HELLO
,TLS_ST_CR_CERT
,TLS_ST_CR_COMP_CERT
,TLS_ST_CR_CERT_STATUS
,TLS_ST_CR_KEY_EXCH
,TLS_ST_CR_CERT_REQ
,TLS_ST_CR_SRVR_DONE
,TLS_ST_CR_SESSION_TICKET
,TLS_ST_CR_CHANGE
,TLS_ST_CR_FINISHED
,TLS_ST_CW_CLNT_HELLO
,TLS_ST_CW_CERT
,TLS_ST_CW_COMP_CERT
,TLS_ST_CW_KEY_EXCH
,TLS_ST_CW_CERT_VRFY
,TLS_ST_CW_CHANGE
,TLS_ST_CW_NEXT_PROTO
,TLS_ST_CW_FINISHED
,TLS_ST_SW_HELLO_REQ
,TLS_ST_SR_CLNT_HELLO
,DTLS_ST_SW_HELLO_VERIFY_REQUEST
,TLS_ST_SW_SRVR_HELLO
,TLS_ST_SW_CERT
,TLS_ST_SW_COMP_CERT
,TLS_ST_SW_KEY_EXCH
,TLS_ST_SW_CERT_REQ
,TLS_ST_SW_SRVR_DONE
,TLS_ST_SR_CERT
,TLS_ST_SR_COMP_CERT
,TLS_ST_SR_KEY_EXCH
,TLS_ST_SR_CERT_VRFY
,TLS_ST_SR_NEXT_PROTO
,TLS_ST_SR_CHANGE
,TLS_ST_SR_FINISHED
,TLS_ST_SW_SESSION_TICKET
,TLS_ST_SW_CERT_STATUS
,TLS_ST_SW_CHANGE
,TLS_ST_SW_FINISHED
,TLS_ST_SW_ENCRYPTED_EXTENSIONS
,TLS_ST_CR_ENCRYPTED_EXTENSIONS
,TLS_ST_CR_CERT_VRFY
,TLS_ST_SW_CERT_VRFY
,TLS_ST_CR_HELLO_REQ
,TLS_ST_SW_KEY_UPDATE
,TLS_ST_CW_KEY_UPDATE
,TLS_ST_SR_KEY_UPDATE
,TLS_ST_CR_KEY_UPDATE
,TLS_ST_EARLY_DATA
,TLS_ST_PENDING_EARLY_DATA_END
,TLS_ST_CW_END_OF_EARLY_DATA
,TLS_ST_SR_END_OF_EARLY_DATA
};

typedef enum anonymous_typeY48 OSSL_HANDSHAKE_STATE;

typedef int (*SSL_client_hello_cb_fn)(struct ssl_st*,int*,void*);

struct ssl_shutdown_ex_args_st
{
    unsigned long  int quic_error_code;
    const char* quic_reason;
};

typedef struct ssl_shutdown_ex_args_st SSL_SHUTDOWN_EX_ARGS;

struct ssl_stream_reset_args_st
{
    unsigned long  int quic_error_code;
};

typedef struct ssl_stream_reset_args_st SSL_STREAM_RESET_ARGS;

struct ssl_conn_close_info_st
{
    unsigned long  int error_code;
    unsigned long  int frame_type;
    const char* reason;
    unsigned long  int reason_len;
    unsigned int flags;
};

typedef struct ssl_conn_close_info_st SSL_CONN_CLOSE_INFO;

struct ssl_poll_item_st
{
    struct bio_poll_descriptor_st desc;
    unsigned long  int events;
    unsigned long  int revents;
};

typedef struct ssl_poll_item_st SSL_POLL_ITEM;

typedef int (*ssl_ct_validation_cb)(const struct ct_policy_eval_ctx_st*,const struct stack_st_SCT*,void*);

enum { SSL_CT_VALIDATION_PERMISSIVE=(0),
SSL_CT_VALIDATION_STRICT
};

typedef int SSL_TICKET_STATUS;

typedef int SSL_TICKET_RETURN;

typedef int (*SSL_CTX_generate_session_ticket_fn)(struct ssl_st*,void*);

typedef int (*SSL_CTX_decrypt_session_ticket_fn)(struct ssl_st*,struct ssl_session_st*,const unsigned char*,unsigned long  int,int,void*);

typedef unsigned int (*DTLS_timer_cb)(struct ssl_st*,unsigned int);

typedef int (*SSL_allow_early_data_cb_fn)(struct ssl_st*,void*);

struct err_state_st
{
    int err_flags[16];
    int err_marks[16];
    unsigned long  int err_buffer[16];
    char* err_data[16];
    unsigned long  int err_data_size[16];
    int err_data_flags[16];
    char* err_file[16];
    int err_line[16];
    char* err_func[16];
    int top;
    int bottom;
};

struct ERR_string_data_st
{
    unsigned long  int error;
    const char* string;
};

typedef struct ERR_string_data_st ERR_STRING_DATA;

union lh_ERR_STRING_DATA_dummy
{
void* d1;
unsigned long  int d2;
int d3;
};

struct lhash_st_ERR_STRING_DATA
{
    union lh_ERR_STRING_DATA_dummy dummy;
};

typedef int (*lh_ERR_STRING_DATA_compfunc)(const struct ERR_string_data_st*,const struct ERR_string_data_st*);

typedef unsigned long  int (*lh_ERR_STRING_DATA_hashfunc)(const struct ERR_string_data_st*);

typedef void (*lh_ERR_STRING_DATA_doallfunc)(struct ERR_string_data_st*);

typedef int socket_fd;

struct list_item$1list$1charphph
{
    struct list$1charph* item;
    struct list_item$1list$1charphph* prev;
    struct list_item$1list$1charphph* next;
};

struct list$1list$1charphph
{
    struct list_item$1list$1charphph* head;
    struct list_item$1list$1charphph* tail;
    int len;
    struct list_item$1list$1charphph* it;
};

typedef char my_bool;

typedef unsigned long  long my_ulonglong;

typedef int my_socket;

enum mysql_enum_shutdown_level { SHUTDOWN_DEFAULT=(0),
KILL_QUERY=(254),
KILL_CONNECTION=(255)
};

enum enum_server_command { COM_SLEEP=(0),
COM_QUIT
,COM_INIT_DB
,COM_QUERY
,COM_FIELD_LIST
,COM_CREATE_DB
,COM_DROP_DB
,COM_REFRESH
,COM_SHUTDOWN
,COM_STATISTICS
,COM_PROCESS_INFO
,COM_CONNECT
,COM_PROCESS_KILL
,COM_DEBUG
,COM_PING
,COM_TIME=(15),
COM_DELAYED_INSERT
,COM_CHANGE_USER
,COM_BINLOG_DUMP
,COM_TABLE_DUMP
,COM_CONNECT_OUT=(20),
COM_REGISTER_SLAVE
,COM_STMT_PREPARE=(22),
COM_STMT_EXECUTE=(23),
COM_STMT_SEND_LONG_DATA=(24),
COM_STMT_CLOSE=(25),
COM_STMT_RESET=(26),
COM_SET_OPTION=(27),
COM_STMT_FETCH=(28),
COM_DAEMON=(29),
COM_UNSUPPORTED=(30),
COM_RESET_CONNECTION=(31),
COM_STMT_BULK_EXECUTE=(250),
COM_RESERVED_1=(254),
COM_END
};

typedef struct st_ma_pvio MARIADB_PVIO;

struct st_net
{
    struct st_ma_pvio* pvio;
    unsigned char* buff;
    unsigned char* buff_end;
    unsigned char* write_pos;
    unsigned char* read_pos;
    int fd;
    unsigned long  int remain_in_buf;
    unsigned long  int length;
    unsigned long  int buf_length;
    unsigned long  int where_b;
    unsigned long  int max_packet;
    unsigned long  int max_packet_size;
    unsigned int pkt_nr;
    unsigned int compress_pkt_nr;
    unsigned int write_timeout;
    unsigned int read_timeout;
    unsigned int retry_count;
    int fcntl;
    unsigned int* return_status;
    unsigned char reading_or_writing;
    char save_char;
    char unused_1;
    char unused_2;
    char compress;
    char unused_3;
    void* unused_4;
    unsigned int last_errno;
    unsigned char error;
    char unused_5;
    char unused_6;
    char last_error[512];
    char sqlstate[5+1];
    struct st_mariadb_net_extension* extension;
};

typedef struct st_net NET;

enum enum_mysql_set_option { MYSQL_OPTION_MULTI_STATEMENTS_ON
,MYSQL_OPTION_MULTI_STATEMENTS_OFF
};

enum enum_mariadb_status_info { STATUS_TYPE=(0),
SESSION_TRACK_TYPE
};

enum enum_session_state_type { SESSION_TRACK_SYSTEM_VARIABLES=(0),
SESSION_TRACK_SCHEMA
,SESSION_TRACK_STATE_CHANGE
,SESSION_TRACK_GTIDS
,SESSION_TRACK_TRANSACTION_CHARACTERISTICS
,SESSION_TRACK_TRANSACTION_STATE
};

enum enum_field_types { MYSQL_TYPE_DECIMAL
,MYSQL_TYPE_TINY
,MYSQL_TYPE_SHORT
,MYSQL_TYPE_LONG
,MYSQL_TYPE_FLOAT
,MYSQL_TYPE_DOUBLE
,MYSQL_TYPE_NULL
,MYSQL_TYPE_TIMESTAMP
,MYSQL_TYPE_LONGLONG
,MYSQL_TYPE_INT24
,MYSQL_TYPE_DATE
,MYSQL_TYPE_TIME
,MYSQL_TYPE_DATETIME
,MYSQL_TYPE_YEAR
,MYSQL_TYPE_NEWDATE
,MYSQL_TYPE_VARCHAR
,MYSQL_TYPE_BIT
,MYSQL_TYPE_TIMESTAMP2
,MYSQL_TYPE_DATETIME2
,MYSQL_TYPE_TIME2
,MYSQL_TYPE_JSON=(245),
MYSQL_TYPE_NEWDECIMAL=(246),
MYSQL_TYPE_ENUM=(247),
MYSQL_TYPE_SET=(248),
MYSQL_TYPE_TINY_BLOB=(249),
MYSQL_TYPE_MEDIUM_BLOB=(250),
MYSQL_TYPE_LONG_BLOB=(251),
MYSQL_TYPE_BLOB=(252),
MYSQL_TYPE_VAR_STRING=(253),
MYSQL_TYPE_STRING=(254),
MYSQL_TYPE_GEOMETRY=(255),
MAX_NO_FIELD_TYPES
};

extern unsigned long  int max_allowed_packet;
extern unsigned long  int net_buffer_length;
struct rand_struct
{
    unsigned long  int seed1;
    unsigned long  int seed2;
    unsigned long  int max_value;
    double max_value_dbl;
};

enum Item_result { STRING_RESULT
,REAL_RESULT
,INT_RESULT
,ROW_RESULT
,DECIMAL_RESULT
};

struct st_udf_args
{
    unsigned int arg_count;
    enum Item_result* arg_type;
    char** args;
    unsigned long  int* lengths;
    char* maybe_null;
};

typedef struct st_udf_args UDF_ARGS;

struct st_udf_init
{
    char maybe_null;
    unsigned int decimals;
    unsigned int max_length;
    char* ptr;
    char const_item;
};

typedef struct st_udf_init UDF_INIT;

struct st_list
{
    struct st_list* prev;
    struct st_list* next;
    void* data;
};

typedef struct st_list LIST;

typedef int (*list_walk_action)(void*,void*);

struct ma_charset_info_st
{
    unsigned int nr;
    unsigned int state;
    const char* csname;
    const char* name;
    const char* dir;
    unsigned int codepage;
    const char* encoding;
    unsigned int char_minlen;
    unsigned int char_maxlen;
    unsigned int (*mb_charlen)(unsigned int);
    unsigned int (*mb_valid)(const char*,const char*);
};

typedef struct ma_charset_info_st MARIADB_CHARSET_INFO;

extern const struct ma_charset_info_st mariadb_compiled_charsets[];
extern struct ma_charset_info_st* ma_default_charset_info;
extern struct ma_charset_info_st* ma_charset_bin;
extern struct ma_charset_info_st* ma_charset_latin1;
extern struct ma_charset_info_st* ma_charset_utf8_general_ci;
extern struct ma_charset_info_st* ma_charset_utf16le_general_ci;
struct st_ma_const_string
{
    const char* str;
    unsigned long  int length;
};

typedef struct st_ma_const_string MARIADB_CONST_STRING;

struct st_ma_const_data
{
    const unsigned char* data;
    unsigned long  int length;
};

typedef struct st_ma_const_data MARIADB_CONST_DATA;

struct st_ma_used_mem
{
    struct st_ma_used_mem* next;
    unsigned long  int left;
    unsigned long  int size;
};

typedef struct st_ma_used_mem MA_USED_MEM;

struct st_ma_mem_root
{
    struct st_ma_used_mem* free;
    struct st_ma_used_mem* used;
    struct st_ma_used_mem* pre_alloc;
    unsigned long  int min_malloc;
    unsigned long  int block_size;
    unsigned int block_num;
    unsigned int first_block_usage;
    void (*error_handler)();
};

typedef struct st_ma_mem_root MA_MEM_ROOT;

extern unsigned int mysql_port;
extern char* mysql_unix_port;
extern unsigned int mariadb_deinitialize_ssl;
struct st_mysql_field
{
    char* name;
    char* org_name;
    char* table;
    char* org_table;
    char* db;
    char* catalog;
    char* def;
    unsigned long  int length;
    unsigned long  int max_length;
    unsigned int name_length;
    unsigned int org_name_length;
    unsigned int table_length;
    unsigned int org_table_length;
    unsigned int db_length;
    unsigned int catalog_length;
    unsigned int def_length;
    unsigned int flags;
    unsigned int decimals;
    unsigned int charsetnr;
    enum enum_field_types type;
    void* extension;
};

typedef struct st_mysql_field MYSQL_FIELD;

typedef char** MYSQL_ROW;

typedef unsigned int MYSQL_FIELD_OFFSET;

extern const char* SQLSTATE_UNKNOWN;
struct st_mysql_rows
{
    struct st_mysql_rows* next;
    char** data;
    unsigned long  int length;
};

typedef struct st_mysql_rows MYSQL_ROWS;

typedef struct st_mysql_rows* MYSQL_ROW_OFFSET;

struct st_mysql_data
{
    struct st_mysql_rows* data;
    void* embedded_info;
    struct st_ma_mem_root alloc;
    unsigned long  long rows;
    unsigned int fields;
    void* extension;
};

typedef struct st_mysql_data MYSQL_DATA;

enum mysql_option { MYSQL_OPT_CONNECT_TIMEOUT
,MYSQL_OPT_COMPRESS
,MYSQL_OPT_NAMED_PIPE
,MYSQL_INIT_COMMAND
,MYSQL_READ_DEFAULT_FILE
,MYSQL_READ_DEFAULT_GROUP
,MYSQL_SET_CHARSET_DIR
,MYSQL_SET_CHARSET_NAME
,MYSQL_OPT_LOCAL_INFILE
,MYSQL_OPT_PROTOCOL
,MYSQL_SHARED_MEMORY_BASE_NAME
,MYSQL_OPT_READ_TIMEOUT
,MYSQL_OPT_WRITE_TIMEOUT
,MYSQL_OPT_USE_RESULT
,MYSQL_OPT_USE_REMOTE_CONNECTION
,MYSQL_OPT_USE_EMBEDDED_CONNECTION
,MYSQL_OPT_GUESS_CONNECTION
,MYSQL_SET_CLIENT_IP
,MYSQL_SECURE_AUTH
,MYSQL_REPORT_DATA_TRUNCATION
,MYSQL_OPT_RECONNECT
,MYSQL_OPT_SSL_VERIFY_SERVER_CERT
,MYSQL_PLUGIN_DIR
,MYSQL_DEFAULT_AUTH
,MYSQL_OPT_BIND
,MYSQL_OPT_SSL_KEY
,MYSQL_OPT_SSL_CERT
,MYSQL_OPT_SSL_CA
,MYSQL_OPT_SSL_CAPATH
,MYSQL_OPT_SSL_CIPHER
,MYSQL_OPT_SSL_CRL
,MYSQL_OPT_SSL_CRLPATH
,MYSQL_OPT_CONNECT_ATTR_RESET
,MYSQL_OPT_CONNECT_ATTR_ADD
,MYSQL_OPT_CONNECT_ATTR_DELETE
,MYSQL_SERVER_PUBLIC_KEY
,MYSQL_ENABLE_CLEARTEXT_PLUGIN
,MYSQL_OPT_CAN_HANDLE_EXPIRED_PASSWORDS
,MYSQL_OPT_SSL_ENFORCE
,MYSQL_OPT_MAX_ALLOWED_PACKET
,MYSQL_OPT_NET_BUFFER_LENGTH
,MYSQL_OPT_TLS_VERSION
,MYSQL_PROGRESS_CALLBACK=(5999),
MYSQL_OPT_NONBLOCK
,MYSQL_DATABASE_DRIVER=(7000),
MARIADB_OPT_SSL_FP
,MARIADB_OPT_SSL_FP_LIST
,MARIADB_OPT_TLS_PASSPHRASE
,MARIADB_OPT_TLS_CIPHER_STRENGTH
,MARIADB_OPT_TLS_VERSION
,MARIADB_OPT_TLS_PEER_FP
,MARIADB_OPT_TLS_PEER_FP_LIST
,MARIADB_OPT_CONNECTION_READ_ONLY
,MYSQL_OPT_CONNECT_ATTRS
,MARIADB_OPT_USERDATA
,MARIADB_OPT_CONNECTION_HANDLER
,MARIADB_OPT_PORT
,MARIADB_OPT_UNIXSOCKET
,MARIADB_OPT_PASSWORD
,MARIADB_OPT_HOST
,MARIADB_OPT_USER
,MARIADB_OPT_SCHEMA
,MARIADB_OPT_DEBUG
,MARIADB_OPT_FOUND_ROWS
,MARIADB_OPT_MULTI_RESULTS
,MARIADB_OPT_MULTI_STATEMENTS
,MARIADB_OPT_INTERACTIVE
,MARIADB_OPT_PROXY_HEADER
,MARIADB_OPT_IO_WAIT
,MARIADB_OPT_SKIP_READ_RESPONSE
,MARIADB_OPT_RESTRICTED_AUTH
,MARIADB_OPT_RPL_REGISTER_REPLICA
,MARIADB_OPT_STATUS_CALLBACK
,MARIADB_OPT_SERVER_PLUGINS
};

enum mariadb_value { MARIADB_CHARSET_ID
,MARIADB_CHARSET_NAME
,MARIADB_CLIENT_ERRORS
,MARIADB_CLIENT_VERSION
,MARIADB_CLIENT_VERSION_ID
,MARIADB_CONNECTION_ASYNC_TIMEOUT
,MARIADB_CONNECTION_ASYNC_TIMEOUT_MS
,MARIADB_CONNECTION_MARIADB_CHARSET_INFO
,MARIADB_CONNECTION_ERROR
,MARIADB_CONNECTION_ERROR_ID
,MARIADB_CONNECTION_HOST
,MARIADB_CONNECTION_INFO
,MARIADB_CONNECTION_PORT
,MARIADB_CONNECTION_PROTOCOL_VERSION_ID
,MARIADB_CONNECTION_PVIO_TYPE
,MARIADB_CONNECTION_SCHEMA
,MARIADB_CONNECTION_SERVER_TYPE
,MARIADB_CONNECTION_SERVER_VERSION
,MARIADB_CONNECTION_SERVER_VERSION_ID
,MARIADB_CONNECTION_SOCKET
,MARIADB_CONNECTION_SQLSTATE
,MARIADB_CONNECTION_SSL_CIPHER
,MARIADB_TLS_LIBRARY
,MARIADB_CONNECTION_TLS_VERSION
,MARIADB_CONNECTION_TLS_VERSION_ID
,MARIADB_CONNECTION_TYPE
,MARIADB_CONNECTION_UNIX_SOCKET
,MARIADB_CONNECTION_USER
,MARIADB_MAX_ALLOWED_PACKET
,MARIADB_NET_BUFFER_LENGTH
,MARIADB_CONNECTION_SERVER_STATUS
,MARIADB_CONNECTION_SERVER_CAPABILITIES
,MARIADB_CONNECTION_EXTENDED_SERVER_CAPABILITIES
,MARIADB_CONNECTION_CLIENT_CAPABILITIES
,MARIADB_CONNECTION_BYTES_READ
,MARIADB_CONNECTION_BYTES_SENT
};

enum mysql_status { MYSQL_STATUS_READY
,MYSQL_STATUS_GET_RESULT
,MYSQL_STATUS_USE_RESULT
,MYSQL_STATUS_QUERY_SENT
,MYSQL_STATUS_SENDING_LOAD_DATA
,MYSQL_STATUS_FETCHING_DATA
,MYSQL_STATUS_NEXT_RESULT_PENDING
,MYSQL_STATUS_QUIT_SENT
,MYSQL_STATUS_STMT_RESULT
};

enum mysql_protocol_type { MYSQL_PROTOCOL_DEFAULT
,MYSQL_PROTOCOL_TCP
,MYSQL_PROTOCOL_SOCKET
,MYSQL_PROTOCOL_PIPE
,MYSQL_PROTOCOL_MEMORY
};

struct st_mysql_options
{
    unsigned int connect_timeout;
    unsigned int read_timeout;
    unsigned int write_timeout;
    unsigned int port;
    unsigned int protocol;
    unsigned long  int client_flag;
    char* host;
    char* user;
    char* password;
    char* unix_socket;
    char* db;
    struct st_dynamic_array* init_command;
    char* my_cnf_file;
    char* my_cnf_group;
    char* charset_dir;
    char* charset_name;
    char* ssl_key;
    char* ssl_cert;
    char* ssl_ca;
    char* ssl_capath;
    char* ssl_cipher;
    char* shared_memory_base_name;
    unsigned long  int max_allowed_packet;
    char use_ssl;
    char compress;
    char named_pipe;
    char reconnect;
    char unused_1;
    char unused_2;
    char unused_3;
    enum mysql_option methods_to_use;
    char* bind_address;
    char secure_auth;
    char report_data_truncation;
    int (*local_infile_init)(void**,const char*,void*);
    int (*local_infile_read)(void*,char*,unsigned int);
    void (*local_infile_end)(void*);
    int (*local_infile_error)(void*,char*,unsigned int);
    void* local_infile_userdata;
    struct st_mysql_options_extension* extension;
};

struct st_mysql
{
    struct st_net net;
    void* unused_0;
    char* host;
    char* user;
    char* passwd;
    char* unix_socket;
    char* server_version;
    char* host_info;
    char* info;
    char* db;
    const struct ma_charset_info_st* charset;
    struct st_mysql_field* fields;
    struct st_ma_mem_root field_alloc;
    unsigned long  long affected_rows;
    unsigned long  long insert_id;
    unsigned long  long extra_info;
    unsigned long  int thread_id;
    unsigned long  int packet_length;
    unsigned int port;
    unsigned long  int client_flag;
    unsigned long  int server_capabilities;
    unsigned int protocol_version;
    unsigned int field_count;
    unsigned int server_status;
    unsigned int server_language;
    unsigned int warning_count;
    struct st_mysql_options options;
    enum mysql_status status;
    char free_me;
    char unused_1;
    char scramble_buff[20+1];
    char unused_2;
    void* unused_3;
    void* unused_4;
    void* unused_5;
    void* unused_6;
    struct st_list* stmts;
    const struct st_mariadb_methods* methods;
    void* thd;
    char* unbuffered_fetch_owner;
    char* info_buffer;
    struct st_mariadb_extension* extension;
};

typedef struct st_mysql MYSQL;

struct st_mysql_res
{
    unsigned long  long row_count;
    unsigned int field_count;
    unsigned int current_field;
    struct st_mysql_field* fields;
    struct st_mysql_data* data;
    struct st_mysql_rows* data_cursor;
    struct st_ma_mem_root field_alloc;
    char** row;
    char** current_row;
    unsigned long  int* lengths;
    struct st_mysql* handle;
    char eof;
    char is_ps;
};

typedef struct st_mysql_res MYSQL_RES;

struct anonymous_typeX49
{
    unsigned long  int* p_max_allowed_packet;
    unsigned long  int* p_net_buffer_length;
    void* extension;
};

typedef struct anonymous_typeX49 MYSQL_PARAMETERS;

enum mariadb_field_attr_t { MARIADB_FIELD_ATTR_DATA_TYPE_NAME=(0),
MARIADB_FIELD_ATTR_FORMAT_NAME=(1)
};

enum enum_mysql_timestamp_type { MYSQL_TIMESTAMP_NONE=(-2),
MYSQL_TIMESTAMP_ERROR=(-1),
MYSQL_TIMESTAMP_DATE=(0),
MYSQL_TIMESTAMP_DATETIME=(1),
MYSQL_TIMESTAMP_TIME=(2)
};

struct st_mysql_time
{
    unsigned int year;
    unsigned int month;
    unsigned int day;
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
    unsigned long  int second_part;
    char neg;
    enum enum_mysql_timestamp_type time_type;
};

typedef struct st_mysql_time MYSQL_TIME;

struct character_set
{
    unsigned int number;
    unsigned int state;
    const char* csname;
    const char* name;
    const char* comment;
    const char* dir;
    unsigned int mbminlen;
    unsigned int mbmaxlen;
};

typedef struct character_set MY_CHARSET_INFO;

typedef struct st_mysql_stmt MYSQL_STMT;

typedef struct st_mysql_res* (*mysql_stmt_use_or_store_func)(struct st_mysql_stmt*);

enum enum_stmt_attr_type { STMT_ATTR_UPDATE_MAX_LENGTH
,STMT_ATTR_CURSOR_TYPE
,STMT_ATTR_PREFETCH_ROWS
,STMT_ATTR_PREBIND_PARAMS=(200),
STMT_ATTR_ARRAY_SIZE
,STMT_ATTR_ROW_SIZE
,STMT_ATTR_STATE
,STMT_ATTR_CB_USER_DATA
,STMT_ATTR_CB_PARAM
,STMT_ATTR_CB_RESULT
};

enum enum_cursor_type { CURSOR_TYPE_NO_CURSOR=(0),
CURSOR_TYPE_READ_ONLY=(1),
CURSOR_TYPE_FOR_UPDATE=(2),
CURSOR_TYPE_SCROLLABLE=(4)
};

enum enum_indicator_type { STMT_INDICATOR_NTS=(-1),
STMT_INDICATOR_NONE=(0),
STMT_INDICATOR_NULL=(1),
STMT_INDICATOR_DEFAULT=(2),
STMT_INDICATOR_IGNORE=(3),
STMT_INDICATOR_IGNORE_ROW=(4)
};

enum mysql_stmt_state { MYSQL_STMT_INITTED=(0),
MYSQL_STMT_PREPARED
,MYSQL_STMT_EXECUTED
,MYSQL_STMT_WAITING_USE_OR_STORE
,MYSQL_STMT_USE_OR_STORE_CALLED
,MYSQL_STMT_USER_FETCHING
,MYSQL_STMT_FETCH_DONE
};

typedef enum mysql_stmt_state enum_mysqlnd_stmt_state;

union anonymous_typeZ50
{
unsigned char* row_ptr;
char* indicator;
};

union anonymous_typeZ51
{
unsigned char* row_ptr;
char* indicator;
};

struct st_mysql_bind
{
    unsigned long  int* length;
    char* is_null;
    void* buffer;
    char* error;
    union anonymous_typeZ51 u;
    void (*store_param_func)(struct st_net*,struct st_mysql_bind*);
    void (*fetch_result)(struct st_mysql_bind*,struct st_mysql_field*,unsigned char**);
    void (*skip_result)(struct st_mysql_bind*,struct st_mysql_field*,unsigned char**);
    unsigned long  int buffer_length;
    unsigned long  int offset;
    unsigned long  int length_value;
    unsigned int flags;
    unsigned int pack_length;
    enum enum_field_types buffer_type;
    char error_value;
    char is_unsigned;
    char long_data_used;
    char is_null_value;
    void* extension;
};

typedef struct st_mysql_bind MYSQL_BIND;

struct st_mysqlnd_upsert_result
{
    unsigned int warning_count;
    unsigned int server_status;
    unsigned long  long affected_rows;
    unsigned long  long last_insert_id;
};

typedef struct st_mysqlnd_upsert_result mysql_upsert_status;

struct st_mysql_cmd_buffer
{
    unsigned char* buffer;
    unsigned long  int length;
};

typedef struct st_mysql_cmd_buffer MYSQL_CMD_BUFFER;

struct st_mysql_error_info
{
    unsigned int error_no;
    char error[512+1];
    char sqlstate[5+1];
};

typedef struct st_mysql_error_info mysql_error_info;

typedef int (*mysql_stmt_fetch_row_func)(struct st_mysql_stmt*,unsigned char**);

typedef void (*ps_result_callback)(void*,unsigned int,unsigned char**);

typedef char* (*ps_param_callback)(void*,struct st_mysql_bind*,unsigned int);

struct st_mysql_stmt
{
    struct st_ma_mem_root mem_root;
    struct st_mysql* mysql;
    unsigned long  int stmt_id;
    unsigned long  int flags;
    enum mysql_stmt_state state;
    struct st_mysql_field* fields;
    unsigned int field_count;
    unsigned int param_count;
    unsigned char send_types_to_server;
    struct st_mysql_bind* params;
    struct st_mysql_bind* bind;
    struct st_mysql_data result;
    struct st_mysql_rows* result_cursor;
    char bind_result_done;
    char bind_param_done;
    struct st_mysqlnd_upsert_result upsert_status;
    unsigned int last_errno;
    char last_error[512+1];
    char sqlstate[5+1];
    char update_max_length;
    unsigned long  int prefetch_rows;
    struct st_list list;
    char cursor_exists;
    void* extension;
    int (*fetch_row_func)(struct st_mysql_stmt*,unsigned char**);
    unsigned int execute_count;
    struct st_mysql_res* (*default_rset_handler)(struct st_mysql_stmt*);
    unsigned char* request_buffer;
    unsigned int array_size;
    unsigned long  int row_size;
    unsigned int prebind_params;
    void* user_data;
    void (*result_callback)(void*,unsigned int,unsigned char**);
    char* (*param_callback)(void*,struct st_mysql_bind*,unsigned int);
    unsigned long  int request_length;
};

typedef void (*ps_field_fetch_func)(struct st_mysql_bind*,const struct st_mysql_field*,unsigned char**);

struct st_mysql_perm_bind
{
    void (*func)(struct st_mysql_bind*,const struct st_mysql_field*,unsigned char**);
    int pack_len;
    unsigned long  int max_len;
};

typedef struct st_mysql_perm_bind MYSQL_PS_CONVERSION;

extern struct st_mysql_perm_bind mysql_ps_fetch_functions[(255)+1];
struct st_mysql_client_plugin
{
    int type;
    unsigned int interface_version;
    const char* name;
    const char* author;
    const char* desc;
    unsigned int version[3];
    const char* license;
    void* mysql_api;
    int (*init)(char*,unsigned long  int,int,va_list);
    int (*deinit)();
    int (*options)(const char*,const void*);
};

struct st_mariadb_api
{
    unsigned long  long (*mysql_num_rows)(struct st_mysql_res*);
    unsigned int (*mysql_num_fields)(struct st_mysql_res*);
    char (*mysql_eof)(struct st_mysql_res*);
    struct st_mysql_field* (*mysql_fetch_field_direct)(struct st_mysql_res*,unsigned int);
    struct st_mysql_field* (*mysql_fetch_fields)(struct st_mysql_res*);
    struct st_mysql_rows* (*mysql_row_tell)(struct st_mysql_res*);
    unsigned int (*mysql_field_tell)(struct st_mysql_res*);
    unsigned int (*mysql_field_count)(struct st_mysql*);
    char (*mysql_more_results)(struct st_mysql*);
    int (*mysql_next_result)(struct st_mysql*);
    unsigned long  long (*mysql_affected_rows)(struct st_mysql*);
    char (*mysql_autocommit)(struct st_mysql*,char);
    char (*mysql_commit)(struct st_mysql*);
    char (*mysql_rollback)(struct st_mysql*);
    unsigned long  long (*mysql_insert_id)(struct st_mysql*);
    unsigned int (*mysql_errno)(struct st_mysql*);
    const char* (*mysql_error)(struct st_mysql*);
    const char* (*mysql_info)(struct st_mysql*);
    unsigned long  int (*mysql_thread_id)(struct st_mysql*);
    const char* (*mysql_character_set_name)(struct st_mysql*);
    void (*mysql_get_character_set_info)(struct st_mysql*,struct character_set*);
    int (*mysql_set_character_set)(struct st_mysql*,const char*);
    char (*mariadb_get_infov)(struct st_mysql*,enum mariadb_value,void*);
    char (*mariadb_get_info)(struct st_mysql*,enum mariadb_value,void*);
    struct st_mysql* (*mysql_init)(struct st_mysql*);
    int (*mysql_ssl_set)(struct st_mysql*,const char*,const char*,const char*,const char*,const char*);
    const char* (*mysql_get_ssl_cipher)(struct st_mysql*);
    char (*mysql_change_user)(struct st_mysql*,const char*,const char*,const char*);
    struct st_mysql* (*mysql_real_connect)(struct st_mysql*,const char*,const char*,const char*,const char*,unsigned int,const char*,unsigned long  int);
    void (*mysql_close)(struct st_mysql*);
    int (*mysql_select_db)(struct st_mysql*,const char*);
    int (*mysql_query)(struct st_mysql*,const char*);
    int (*mysql_send_query)(struct st_mysql*,const char*,unsigned long  int);
    char (*mysql_read_query_result)(struct st_mysql*);
    int (*mysql_real_query)(struct st_mysql*,const char*,unsigned long  int);
    int (*mysql_shutdown)(struct st_mysql*,enum mysql_enum_shutdown_level);
    int (*mysql_dump_debug_info)(struct st_mysql*);
    int (*mysql_refresh)(struct st_mysql*,unsigned int);
    int (*mysql_kill)(struct st_mysql*,unsigned long  int);
    int (*mysql_ping)(struct st_mysql*);
    char* (*mysql_stat)(struct st_mysql*);
    char* (*mysql_get_server_info)(struct st_mysql*);
    unsigned long  int (*mysql_get_server_version)(struct st_mysql*);
    char* (*mysql_get_host_info)(struct st_mysql*);
    unsigned int (*mysql_get_proto_info)(struct st_mysql*);
    struct st_mysql_res* (*mysql_list_dbs)(struct st_mysql*,const char*);
    struct st_mysql_res* (*mysql_list_tables)(struct st_mysql*,const char*);
    struct st_mysql_res* (*mysql_list_fields)(struct st_mysql*,const char*,const char*);
    struct st_mysql_res* (*mysql_list_processes)(struct st_mysql*);
    struct st_mysql_res* (*mysql_store_result)(struct st_mysql*);
    struct st_mysql_res* (*mysql_use_result)(struct st_mysql*);
    int (*mysql_options)(struct st_mysql*,enum mysql_option,const void*);
    void (*mysql_free_result)(struct st_mysql_res*);
    void (*mysql_data_seek)(struct st_mysql_res*,unsigned long  long);
    struct st_mysql_rows* (*mysql_row_seek)(struct st_mysql_res*,struct st_mysql_rows*);
    unsigned int (*mysql_field_seek)(struct st_mysql_res*,unsigned int);
    char** (*mysql_fetch_row)(struct st_mysql_res*);
    unsigned long  int* (*mysql_fetch_lengths)(struct st_mysql_res*);
    struct st_mysql_field* (*mysql_fetch_field)(struct st_mysql_res*);
    unsigned long  int (*mysql_escape_string)(char*,const char*,unsigned long  int);
    unsigned long  int (*mysql_real_escape_string)(struct st_mysql*,char*,const char*,unsigned long  int);
    unsigned int (*mysql_thread_safe)();
    unsigned int (*mysql_warning_count)(struct st_mysql*);
    const char* (*mysql_sqlstate)(struct st_mysql*);
    int (*mysql_server_init)(int,char**,char**);
    void (*mysql_server_end)();
    void (*mysql_thread_end)();
    char (*mysql_thread_init)();
    int (*mysql_set_server_option)(struct st_mysql*,enum enum_mysql_set_option);
    const char* (*mysql_get_client_info)();
    unsigned long  int (*mysql_get_client_version)();
    char (*mariadb_connection)(struct st_mysql*);
    const char* (*mysql_get_server_name)(struct st_mysql*);
    struct ma_charset_info_st* (*mariadb_get_charset_by_name)(const char*);
    struct ma_charset_info_st* (*mariadb_get_charset_by_nr)(unsigned int);
    unsigned long  int (*mariadb_convert_string)(const char*,unsigned long  int*,struct ma_charset_info_st*,char*,unsigned long  int*,struct ma_charset_info_st*,int*);
    int (*mysql_optionsv)(struct st_mysql*,enum mysql_option);
    int (*mysql_get_optionv)(struct st_mysql*,enum mysql_option,void*);
    int (*mysql_get_option)(struct st_mysql*,enum mysql_option,void*);
    unsigned long  int (*mysql_hex_string)(char*,const char*,unsigned long  int);
    int (*mysql_get_socket)(struct st_mysql*);
    unsigned int (*mysql_get_timeout_value)(const struct st_mysql*);
    unsigned int (*mysql_get_timeout_value_ms)(const struct st_mysql*);
    char (*mariadb_reconnect)(struct st_mysql*);
    struct st_mysql_stmt* (*mysql_stmt_init)(struct st_mysql*);
    int (*mysql_stmt_prepare)(struct st_mysql_stmt*,const char*,unsigned long  int);
    int (*mysql_stmt_execute)(struct st_mysql_stmt*);
    int (*mysql_stmt_fetch)(struct st_mysql_stmt*);
    int (*mysql_stmt_fetch_column)(struct st_mysql_stmt*,struct st_mysql_bind*,unsigned int,unsigned long  int);
    int (*mysql_stmt_store_result)(struct st_mysql_stmt*);
    unsigned long  int (*mysql_stmt_param_count)(struct st_mysql_stmt*);
    char (*mysql_stmt_attr_set)(struct st_mysql_stmt*,enum enum_stmt_attr_type,const void*);
    char (*mysql_stmt_attr_get)(struct st_mysql_stmt*,enum enum_stmt_attr_type,void*);
    char (*mysql_stmt_bind_param)(struct st_mysql_stmt*,struct st_mysql_bind*);
    char (*mysql_stmt_bind_result)(struct st_mysql_stmt*,struct st_mysql_bind*);
    char (*mysql_stmt_close)(struct st_mysql_stmt*);
    char (*mysql_stmt_reset)(struct st_mysql_stmt*);
    char (*mysql_stmt_free_result)(struct st_mysql_stmt*);
    char (*mysql_stmt_send_long_data)(struct st_mysql_stmt*,unsigned int,const char*,unsigned long  int);
    struct st_mysql_res* (*mysql_stmt_result_metadata)(struct st_mysql_stmt*);
    struct st_mysql_res* (*mysql_stmt_param_metadata)(struct st_mysql_stmt*);
    unsigned int (*mysql_stmt_errno)(struct st_mysql_stmt*);
    const char* (*mysql_stmt_error)(struct st_mysql_stmt*);
    const char* (*mysql_stmt_sqlstate)(struct st_mysql_stmt*);
    struct st_mysql_rows* (*mysql_stmt_row_seek)(struct st_mysql_stmt*,struct st_mysql_rows*);
    struct st_mysql_rows* (*mysql_stmt_row_tell)(struct st_mysql_stmt*);
    void (*mysql_stmt_data_seek)(struct st_mysql_stmt*,unsigned long  long);
    unsigned long  long (*mysql_stmt_num_rows)(struct st_mysql_stmt*);
    unsigned long  long (*mysql_stmt_affected_rows)(struct st_mysql_stmt*);
    unsigned long  long (*mysql_stmt_insert_id)(struct st_mysql_stmt*);
    unsigned int (*mysql_stmt_field_count)(struct st_mysql_stmt*);
    int (*mysql_stmt_next_result)(struct st_mysql_stmt*);
    char (*mysql_stmt_more_results)(struct st_mysql_stmt*);
    int (*mariadb_stmt_execute_direct)(struct st_mysql_stmt*,const char*,unsigned long  int);
    int (*mysql_reset_connection)(struct st_mysql*);
};

struct st_mariadb_methods
{
    struct st_mysql* (*db_connect)(struct st_mysql*,const char*,const char*,const char*,const char*,unsigned int,const char*,unsigned long  int);
    void (*db_close)(struct st_mysql*);
    int (*db_command)(struct st_mysql*,enum enum_server_command,const char*,unsigned long  int,char,void*);
    void (*db_skip_result)(struct st_mysql*);
    int (*db_read_query_result)(struct st_mysql*);
    struct st_mysql_data* (*db_read_rows)(struct st_mysql*,struct st_mysql_field*,unsigned int);
    int (*db_read_one_row)(struct st_mysql*,unsigned int,char**,unsigned long  int*);
    char (*db_supported_buffer_type)(enum enum_field_types);
    char (*db_read_prepare_response)(struct st_mysql_stmt*);
    int (*db_read_stmt_result)(struct st_mysql*);
    char (*db_stmt_get_result_metadata)(struct st_mysql_stmt*);
    char (*db_stmt_get_param_metadata)(struct st_mysql_stmt*);
    int (*db_stmt_read_all_rows)(struct st_mysql_stmt*);
    int (*db_stmt_fetch)(struct st_mysql_stmt*,unsigned char**);
    int (*db_stmt_fetch_to_bind)(struct st_mysql_stmt*,unsigned char*);
    void (*db_stmt_flush_unbuffered)(struct st_mysql_stmt*);
    void (*set_error)(struct st_mysql*,unsigned int,const char*,const char*);
    void (*invalidate_stmts)(struct st_mysql*,const char*);
    struct st_mariadb_api* api;
    int (*db_read_execute_response)(struct st_mysql_stmt*);
    unsigned char* (*db_execute_generate_request)(struct st_mysql_stmt*,unsigned long  int*,char);
};

struct st_mysql* gComeMySQL=((void*)0);
// source head

// header function
struct _IO_FILE* fopen(const char* anonymous_var_nameX1, const char* anonymous_var_nameX2);
struct _IO_FILE* freopen(const char* anonymous_var_nameX3, const char* anonymous_var_nameX4, struct _IO_FILE* anonymous_var_nameX5);
int fclose(struct _IO_FILE* anonymous_var_nameX6);
int remove(const char* anonymous_var_nameX7);
int rename(const char* anonymous_var_nameX8, const char* anonymous_var_nameX9);
int feof(struct _IO_FILE* anonymous_var_nameX10);
int ferror(struct _IO_FILE* anonymous_var_nameX11);
int fflush(struct _IO_FILE* anonymous_var_nameX12);
void clearerr(struct _IO_FILE* anonymous_var_nameX13);
int fseek(struct _IO_FILE* anonymous_var_nameX14, long anonymous_var_nameX15, int anonymous_var_nameX16);
long ftell(struct _IO_FILE* anonymous_var_nameX17);
void rewind(struct _IO_FILE* anonymous_var_nameX18);
int fgetpos(struct _IO_FILE* anonymous_var_nameX19, union _G_fpos64_t* anonymous_var_nameX20);
int fsetpos(struct _IO_FILE* anonymous_var_nameX21, const union _G_fpos64_t* anonymous_var_nameX22);
unsigned long  int fread(void* anonymous_var_nameX23, unsigned long  int anonymous_var_nameX24, unsigned long  int anonymous_var_nameX25, struct _IO_FILE* anonymous_var_nameX26);
unsigned long  int fwrite(const void* anonymous_var_nameX27, unsigned long  int anonymous_var_nameX28, unsigned long  int anonymous_var_nameX29, struct _IO_FILE* anonymous_var_nameX30);
int fgetc(struct _IO_FILE* anonymous_var_nameX31);
int getc(struct _IO_FILE* anonymous_var_nameX32);
int getchar();
int ungetc(int anonymous_var_nameX33, struct _IO_FILE* anonymous_var_nameX34);
int fputc(int anonymous_var_nameX35, struct _IO_FILE* anonymous_var_nameX36);
int putc(int anonymous_var_nameX37, struct _IO_FILE* anonymous_var_nameX38);
int putchar(int anonymous_var_nameX39);
char* fgets(char* anonymous_var_nameX40, int anonymous_var_nameX41, struct _IO_FILE* anonymous_var_nameX42);
int fputs(const char* anonymous_var_nameX43, struct _IO_FILE* anonymous_var_nameX44);
int puts(const char* anonymous_var_nameX45);
int printf(const char* anonymous_var_nameX46, ...);
int fprintf(struct _IO_FILE* anonymous_var_nameX47, const char* anonymous_var_nameX48, ...);
int sprintf(char* anonymous_var_nameX49, const char* anonymous_var_nameX50, ...);
int snprintf(char* anonymous_var_nameX51, unsigned long  int anonymous_var_nameX52, const char* anonymous_var_nameX53, ...);
int vprintf(const char* anonymous_var_nameX54, va_list anonymous_var_nameX55);
int vfprintf(struct _IO_FILE* anonymous_var_nameX56, const char* anonymous_var_nameX57, va_list anonymous_var_nameX58);
int vsprintf(char* anonymous_var_nameX59, const char* anonymous_var_nameX60, va_list anonymous_var_nameX61);
int vsnprintf(char* anonymous_var_nameX62, unsigned long  int anonymous_var_nameX63, const char* anonymous_var_nameX64, va_list anonymous_var_nameX65);
int scanf(const char* anonymous_var_nameX66, ...);
int fscanf(struct _IO_FILE* anonymous_var_nameX67, const char* anonymous_var_nameX68, ...);
int sscanf(const char* anonymous_var_nameX69, const char* anonymous_var_nameX70, ...);
int vscanf(const char* anonymous_var_nameX71, va_list anonymous_var_nameX72);
int vfscanf(struct _IO_FILE* anonymous_var_nameX73, const char* anonymous_var_nameX74, va_list anonymous_var_nameX75);
int vsscanf(const char* anonymous_var_nameX76, const char* anonymous_var_nameX77, va_list anonymous_var_nameX78);
void perror(const char* anonymous_var_nameX79);
int setvbuf(struct _IO_FILE* anonymous_var_nameX80, char* anonymous_var_nameX81, int anonymous_var_nameX82, unsigned long  int anonymous_var_nameX83);
void setbuf(struct _IO_FILE* anonymous_var_nameX84, char* anonymous_var_nameX85);
char* tmpnam(char* anonymous_var_nameX86);
struct _IO_FILE* tmpfile();
struct _IO_FILE* fmemopen(void* anonymous_var_nameX87, unsigned long  int anonymous_var_nameX88, const char* anonymous_var_nameX89);
struct _IO_FILE* open_memstream(char** anonymous_var_nameX90, unsigned long  int* anonymous_var_nameX91);
struct _IO_FILE* fdopen(int anonymous_var_nameX92, const char* anonymous_var_nameX93);
struct _IO_FILE* popen(const char* anonymous_var_nameX94, const char* anonymous_var_nameX95);
int pclose(struct _IO_FILE* anonymous_var_nameX96);
int fileno(struct _IO_FILE* anonymous_var_nameX97);
int fseeko(struct _IO_FILE* anonymous_var_nameX98, long anonymous_var_nameX99, int anonymous_var_nameX100);
long ftello(struct _IO_FILE* anonymous_var_nameX101);
int dprintf(int anonymous_var_nameX102, const char* anonymous_var_nameX103, ...);
int vdprintf(int anonymous_var_nameX104, const char* anonymous_var_nameX105, va_list anonymous_var_nameX106);
void flockfile(struct _IO_FILE* anonymous_var_nameX107);
int ftrylockfile(struct _IO_FILE* anonymous_var_nameX108);
void funlockfile(struct _IO_FILE* anonymous_var_nameX109);
int getc_unlocked(struct _IO_FILE* anonymous_var_nameX110);
int getchar_unlocked();
int putc_unlocked(int anonymous_var_nameX111, struct _IO_FILE* anonymous_var_nameX112);
int putchar_unlocked(int anonymous_var_nameX113);
long getdelim(char** anonymous_var_nameX114, unsigned long  int* anonymous_var_nameX115, int anonymous_var_nameX116, struct _IO_FILE* anonymous_var_nameX117);
long getline(char** anonymous_var_nameX118, unsigned long  int* anonymous_var_nameX119, struct _IO_FILE* anonymous_var_nameX120);
int renameat(int anonymous_var_nameX121, const char* anonymous_var_nameX122, int anonymous_var_nameX123, const char* anonymous_var_nameX124);
char* tempnam(const char* anonymous_var_nameX126, const char* anonymous_var_nameX127);
char* cuserid(char* anonymous_var_nameX128);
void setlinebuf(struct _IO_FILE* anonymous_var_nameX129);
void setbuffer(struct _IO_FILE* anonymous_var_nameX130, char* anonymous_var_nameX131, unsigned long  int anonymous_var_nameX132);
int fgetc_unlocked(struct _IO_FILE* anonymous_var_nameX133);
int fputc_unlocked(int anonymous_var_nameX134, struct _IO_FILE* anonymous_var_nameX135);
int fflush_unlocked(struct _IO_FILE* anonymous_var_nameX136);
unsigned long  int fread_unlocked(void* anonymous_var_nameX137, unsigned long  int anonymous_var_nameX138, unsigned long  int anonymous_var_nameX139, struct _IO_FILE* anonymous_var_nameX140);
unsigned long  int fwrite_unlocked(const void* anonymous_var_nameX141, unsigned long  int anonymous_var_nameX142, unsigned long  int anonymous_var_nameX143, struct _IO_FILE* anonymous_var_nameX144);
void clearerr_unlocked(struct _IO_FILE* anonymous_var_nameX145);
int feof_unlocked(struct _IO_FILE* anonymous_var_nameX146);
int ferror_unlocked(struct _IO_FILE* anonymous_var_nameX147);
int fileno_unlocked(struct _IO_FILE* anonymous_var_nameX148);
int getw(struct _IO_FILE* anonymous_var_nameX149);
int putw(int anonymous_var_nameX150, struct _IO_FILE* anonymous_var_nameX151);
char* fgetln(struct _IO_FILE* anonymous_var_nameX152, unsigned long  int* anonymous_var_nameX153);
int asprintf(char** anonymous_var_nameX154, const char* anonymous_var_nameX155, ...);
int vasprintf(char** anonymous_var_nameX156, const char* anonymous_var_nameX157, va_list anonymous_var_nameX158);
char* fgets_unlocked(char* anonymous_var_nameX159, int anonymous_var_nameX160, struct _IO_FILE* anonymous_var_nameX161);
int fputs_unlocked(const char* anonymous_var_nameX162, struct _IO_FILE* anonymous_var_nameX163);
struct _IO_FILE* fopencookie(void* anonymous_var_nameX174, const char* anonymous_var_nameX175, struct _IO_cookie_io_functions_t anonymous_var_nameX176);
int atoi(const char* anonymous_var_nameX177);
long atol(const char* anonymous_var_nameX178);
long long atoll(const char* anonymous_var_nameX179);
double atof(const char* anonymous_var_nameX180);
float strtof(const char* anonymous_var_nameX181, char** anonymous_var_nameX182);
double strtod(const char* anonymous_var_nameX183, char** anonymous_var_nameX184);
long  double strtold(const char* anonymous_var_nameX185, char** anonymous_var_nameX186);
long strtol(const char* anonymous_var_nameX187, char** anonymous_var_nameX188, int anonymous_var_nameX189);
unsigned long  int strtoul(const char* anonymous_var_nameX190, char** anonymous_var_nameX191, int anonymous_var_nameX192);
long long strtoll(const char* anonymous_var_nameX193, char** anonymous_var_nameX194, int anonymous_var_nameX195);
unsigned long  long strtoull(const char* anonymous_var_nameX196, char** anonymous_var_nameX197, int anonymous_var_nameX198);
int rand();
void srand(unsigned int anonymous_var_nameX199);
void* malloc(unsigned long  int anonymous_var_nameX200);
void* realloc(void* anonymous_var_nameX203, unsigned long  int anonymous_var_nameX204);
void* aligned_alloc(unsigned long  int anonymous_var_nameX206, unsigned long  int anonymous_var_nameX207);
void abort();
int atexit(void (*anonymous_lambda_var_nameZ1)());
void exit(int anonymous_var_nameX208);
void _Exit(int anonymous_var_nameX209);
int at_quick_exit(void (*anonymous_lambda_var_nameZ2)());
void quick_exit(int anonymous_var_nameX210);
char* getenv(const char* anonymous_var_nameX211);
int system(const char* anonymous_var_nameX212);
void* bsearch(const void* anonymous_var_nameX213, const void* anonymous_var_nameX214, unsigned long  int anonymous_var_nameX215, unsigned long  int anonymous_var_nameX216, int (*anonymous_lambda_var_nameZ3)(const void*,const void*));
void qsort(void* anonymous_var_nameX219, unsigned long  int anonymous_var_nameX220, unsigned long  int anonymous_var_nameX221, int (*anonymous_lambda_var_nameZ4)(const void*,const void*));
int abs(int anonymous_var_nameX224);
long labs(long anonymous_var_nameX225);
long long llabs(long  long anonymous_var_nameX226);
struct anonymous_typeX1 div(int anonymous_var_nameX227, int anonymous_var_nameX228);
struct anonymous_typeX2 ldiv(long anonymous_var_nameX229, long anonymous_var_nameX230);
struct anonymous_typeX3 lldiv(long  long anonymous_var_nameX231, long  long anonymous_var_nameX232);
int mblen(const char* anonymous_var_nameX233, unsigned long  int anonymous_var_nameX234);
int mbtowc(unsigned int* anonymous_var_nameX235, const char* anonymous_var_nameX236, unsigned long  int anonymous_var_nameX237);
int wctomb(char* anonymous_var_nameX238, unsigned int anonymous_var_nameX239);
unsigned long  int mbstowcs(unsigned int* anonymous_var_nameX240, const char* anonymous_var_nameX241, unsigned long  int anonymous_var_nameX242);
unsigned long  int wcstombs(char* anonymous_var_nameX243, const unsigned int* anonymous_var_nameX244, unsigned long  int anonymous_var_nameX245);
unsigned long  int __ctype_get_mb_cur_max();
int posix_memalign(void** anonymous_var_nameX246, unsigned long  int anonymous_var_nameX247, unsigned long  int anonymous_var_nameX248);
int setenv(const char* anonymous_var_nameX249, const char* anonymous_var_nameX250, int anonymous_var_nameX251);
int unsetenv(const char* anonymous_var_nameX252);
int mkstemp(char* anonymous_var_nameX253);
int mkostemp(char* anonymous_var_nameX254, int anonymous_var_nameX255);
char* mkdtemp(char* anonymous_var_nameX256);
int getsubopt(char** anonymous_var_nameX257, char** anonymous_var_nameX258, char** anonymous_var_nameX259);
int rand_r(unsigned int* anonymous_var_nameX260);
char* realpath(const char* anonymous_var_nameX261, char* anonymous_var_nameX262);
long  int random();
void srandom(unsigned int anonymous_var_nameX263);
char* initstate(unsigned int anonymous_var_nameX264, char* anonymous_var_nameX265, unsigned long  int anonymous_var_nameX266);
char* setstate(char* anonymous_var_nameX267);
int putenv(char* anonymous_var_nameX268);
int posix_openpt(int anonymous_var_nameX269);
int grantpt(int anonymous_var_nameX270);
int unlockpt(int anonymous_var_nameX271);
char* ptsname(int anonymous_var_nameX272);
char* l64a(long anonymous_var_nameX273);
long a64l(const char* anonymous_var_nameX274);
void setkey(const char* anonymous_var_nameX275);
double drand48();
double erand48(unsigned short int anonymous_var_nameX276[3]);
long  int lrand48();
long  int nrand48(unsigned short int anonymous_var_nameX277[3]);
long mrand48();
long jrand48(unsigned short int anonymous_var_nameX278[3]);
void srand48(long anonymous_var_nameX279);
unsigned short int* seed48(unsigned short int anonymous_var_nameX280[3]);
void lcong48(unsigned short int anonymous_var_nameX281[7]);
void* alloca(unsigned long  int anonymous_var_nameX282);
char* mktemp(char* anonymous_var_nameX283);
int mkstemps(char* anonymous_var_nameX284, int anonymous_var_nameX285);
int mkostemps(char* anonymous_var_nameX286, int anonymous_var_nameX287, int anonymous_var_nameX288);
void* valloc(unsigned long  int anonymous_var_nameX289);
void* memalign(unsigned long  int anonymous_var_nameX290, unsigned long  int anonymous_var_nameX291);
int getloadavg(double* anonymous_var_nameX292, int anonymous_var_nameX293);
int clearenv();
void* reallocarray(void* anonymous_var_nameX294, unsigned long  int anonymous_var_nameX295, unsigned long  int anonymous_var_nameX296);
void qsort_r(void* anonymous_var_nameX297, unsigned long  int anonymous_var_nameX298, unsigned long  int anonymous_var_nameX299, int (*anonymous_lambda_var_nameZ5)(const void*,const void*,void*), void* anonymous_var_nameX303);
int ptsname_r(int anonymous_var_nameX304, char* anonymous_var_nameX305, unsigned long  int anonymous_var_nameX306);
char* ecvt(double anonymous_var_nameX307, int anonymous_var_nameX308, int* anonymous_var_nameX309, int* anonymous_var_nameX310);
char* fcvt(double anonymous_var_nameX311, int anonymous_var_nameX312, int* anonymous_var_nameX313, int* anonymous_var_nameX314);
char* gcvt(double anonymous_var_nameX315, int anonymous_var_nameX316, char* anonymous_var_nameX317);
char* secure_getenv(const char* anonymous_var_nameX318);
float strtof_l(const char* anonymous_var_nameX319, char** anonymous_var_nameX320, struct __locale_struct* anonymous_var_nameX321);
double strtod_l(const char* anonymous_var_nameX322, char** anonymous_var_nameX323, struct __locale_struct* anonymous_var_nameX324);
long  double strtold_l(const char* anonymous_var_nameX325, char** anonymous_var_nameX326, struct __locale_struct* anonymous_var_nameX327);
void* memmove(void* anonymous_var_nameX331, const void* anonymous_var_nameX332, unsigned long  int anonymous_var_nameX333);
void* memchr(const void* anonymous_var_nameX340, int anonymous_var_nameX341, unsigned long  int anonymous_var_nameX342);
char* strcpy(char* anonymous_var_nameX343, const char* anonymous_var_nameX344);
char* strncpy(char* anonymous_var_nameX345, const char* anonymous_var_nameX346, unsigned long  int anonymous_var_nameX347);
char* strcat(char* anonymous_var_nameX348, const char* anonymous_var_nameX349);
char* strncat(char* anonymous_var_nameX350, const char* anonymous_var_nameX351, unsigned long  int anonymous_var_nameX352);
int strcmp(const char* anonymous_var_nameX353, const char* anonymous_var_nameX354);
int strncmp(const char* anonymous_var_nameX355, const char* anonymous_var_nameX356, unsigned long  int anonymous_var_nameX357);
int strcoll(const char* anonymous_var_nameX358, const char* anonymous_var_nameX359);
unsigned long  int strxfrm(char* anonymous_var_nameX360, const char* anonymous_var_nameX361, unsigned long  int anonymous_var_nameX362);
char* strchr(const char* anonymous_var_nameX363, int anonymous_var_nameX364);
char* strrchr(const char* anonymous_var_nameX365, int anonymous_var_nameX366);
unsigned long  int strcspn(const char* anonymous_var_nameX367, const char* anonymous_var_nameX368);
unsigned long  int strspn(const char* anonymous_var_nameX369, const char* anonymous_var_nameX370);
char* strpbrk(const char* anonymous_var_nameX371, const char* anonymous_var_nameX372);
char* strstr(const char* anonymous_var_nameX373, const char* anonymous_var_nameX374);
char* strtok(char* anonymous_var_nameX375, const char* anonymous_var_nameX376);
unsigned long  int strlen(const char* anonymous_var_nameX377);
char* strerror(int anonymous_var_nameX378);
int bcmp(const void* anonymous_var_nameX379, const void* anonymous_var_nameX380, unsigned long  int anonymous_var_nameX381);
void bcopy(const void* anonymous_var_nameX382, void* anonymous_var_nameX383, unsigned long  int anonymous_var_nameX384);
void bzero(void* anonymous_var_nameX385, unsigned long  int anonymous_var_nameX386);
char* index(const char* anonymous_var_nameX387, int anonymous_var_nameX388);
char* rindex(const char* anonymous_var_nameX389, int anonymous_var_nameX390);
int ffs(int anonymous_var_nameX391);
int ffsl(long anonymous_var_nameX392);
int ffsll(long  long anonymous_var_nameX393);
int strcasecmp(const char* anonymous_var_nameX394, const char* anonymous_var_nameX395);
int strncasecmp(const char* anonymous_var_nameX396, const char* anonymous_var_nameX397, unsigned long  int anonymous_var_nameX398);
int strcasecmp_l(const char* anonymous_var_nameX399, const char* anonymous_var_nameX400, struct __locale_struct* anonymous_var_nameX401);
int strncasecmp_l(const char* anonymous_var_nameX402, const char* anonymous_var_nameX403, unsigned long  int anonymous_var_nameX404, struct __locale_struct* anonymous_var_nameX405);
char* strtok_r(char* anonymous_var_nameX406, const char* anonymous_var_nameX407, char** anonymous_var_nameX408);
int strerror_r(int anonymous_var_nameX409, char* anonymous_var_nameX410, unsigned long  int anonymous_var_nameX411);
char* stpcpy(char* anonymous_var_nameX412, const char* anonymous_var_nameX413);
char* stpncpy(char* anonymous_var_nameX414, const char* anonymous_var_nameX415, unsigned long  int anonymous_var_nameX416);
unsigned long  int strnlen(const char* anonymous_var_nameX417, unsigned long  int anonymous_var_nameX418);
char* strdup(const char* anonymous_var_nameX419);
char* strndup(const char* anonymous_var_nameX420, unsigned long  int anonymous_var_nameX421);
char* strsignal(int anonymous_var_nameX422);
char* strerror_l(int anonymous_var_nameX423, struct __locale_struct* anonymous_var_nameX424);
int strcoll_l(const char* anonymous_var_nameX425, const char* anonymous_var_nameX426, struct __locale_struct* anonymous_var_nameX427);
unsigned long  int strxfrm_l(char* anonymous_var_nameX428, const char* anonymous_var_nameX429, unsigned long  int anonymous_var_nameX430, struct __locale_struct* anonymous_var_nameX431);
void* memmem(const void* anonymous_var_nameX432, unsigned long  int anonymous_var_nameX433, const void* anonymous_var_nameX434, unsigned long  int anonymous_var_nameX435);
void* memccpy(void* anonymous_var_nameX436, const void* anonymous_var_nameX437, int anonymous_var_nameX438, unsigned long  int anonymous_var_nameX439);
char* strsep(char** anonymous_var_nameX440, const char* anonymous_var_nameX441);
unsigned long  int strlcat(char* anonymous_var_nameX442, const char* anonymous_var_nameX443, unsigned long  int anonymous_var_nameX444);
unsigned long  int strlcpy(char* anonymous_var_nameX445, const char* anonymous_var_nameX446, unsigned long  int anonymous_var_nameX447);
void explicit_bzero(void* anonymous_var_nameX448, unsigned long  int anonymous_var_nameX449);
int strverscmp(const char* anonymous_var_nameX450, const char* anonymous_var_nameX451);
char* strchrnul(const char* anonymous_var_nameX452, int anonymous_var_nameX453);
char* strcasestr(const char* anonymous_var_nameX454, const char* anonymous_var_nameX455);
void* memrchr(const void* anonymous_var_nameX456, int anonymous_var_nameX457, unsigned long  int anonymous_var_nameX458);
void* mempcpy(void* anonymous_var_nameX459, const void* anonymous_var_nameX460, unsigned long  int anonymous_var_nameX461);
char* setlocale(int anonymous_var_nameX462, const char* anonymous_var_nameX463);
struct lconv* localeconv();
struct __locale_struct* duplocale(struct __locale_struct* anonymous_var_nameX464);
void freelocale(struct __locale_struct* anonymous_var_nameX465);
struct __locale_struct* newlocale(int anonymous_var_nameX466, const char* anonymous_var_nameX467, struct __locale_struct* anonymous_var_nameX468);
struct __locale_struct* uselocale(struct __locale_struct* anonymous_var_nameX469);
int* __errno_location();
void __assert_fail(const char* anonymous_var_nameX470, const char* anonymous_var_nameX471, int anonymous_var_nameX472, const char* anonymous_var_nameX473);
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void come_save_stackframe(char* sname, int sline);
static void buffer_finalize(struct buffer* self);
void stackframe();
char* come_get_stackframe();
void* come_null_check(void* mem, char* sname, int sline, int id);
void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);
_Bool bool_expect(_Bool self, void* parent, void (*block)(void*));
_Bool bool_value(_Bool self);
int int_catch(int self, void* parent, void (*block)(void*));
int int_expect(int self, void* parent, void (*block)(void*));
int int_value(int self);
int int_except(int self, void* parent, void (*block)(void*));
_Bool bool_except(_Bool self, void* parent, void (*block)(void*));
_Bool bool_catch(_Bool self, void* parent, void (*block)(void*));
void xassert(char* msg, _Bool test);
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
void* alloc_from_pages(unsigned long  int size);
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_mem_of_heap_pool(void* mem);
char* come_dynamic_typeof(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_object(void* mem);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);
void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);
void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
char* __builtin_string(char* str);
_Bool come_is_contained_element(void** array, int len, void* element);
struct buffer* buffer_initialize(struct buffer* self);
struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size);
struct buffer* buffer_clone(struct buffer* self);
int buffer_length(struct buffer* self);
void buffer_reset(struct buffer* self);
void buffer_trim(struct buffer* self, int len);
struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long  int size);
struct buffer* buffer_append_char(struct buffer* self, char c);
struct buffer* buffer_append_str(struct buffer* self, char* mem);
struct buffer* buffer_append_format(struct buffer* self, char* msg, ...);
static void va_list_finalize(va_list self);
struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem);
struct buffer* buffer_append_int(struct buffer* self, int value);
struct buffer* buffer_append_long(struct buffer* self, long value);
struct buffer* buffer_append_short(struct buffer* self, short value);
struct buffer* buffer_alignment(struct buffer* self);
int buffer_compare(struct buffer* left, struct buffer* right);
struct buffer* string_to_buffer(char* self);
struct buffer* charp_to_buffer(char* self);
char* buffer_to_string(struct buffer* self);
char* buffer_printable(struct buffer* self);
static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value);
static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self);
static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value);
static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self);
static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value);
static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self);
static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value);
static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self);
static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value);
static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self);
static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value);
static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self);
static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value);
static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self);
static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values);
static struct list$1char* list$1char_push_back(struct list$1char* self, char item);
static void list$1charp_finalize(struct list$1char* self);
static void list_item$1charp_finalize(struct list_item$1char* self);
static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values);
static struct list$1short* list$1short_push_back(struct list$1short* self, short item);
static void list$1shortp_finalize(struct list$1short* self);
static void list_item$1shortp_finalize(struct list_item$1short* self);
static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values);
static struct list$1int* list$1int_push_back(struct list$1int* self, int item);
static void list$1intp_finalize(struct list$1int* self);
static void list_item$1intp_finalize(struct list_item$1int* self);
static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values);
static struct list$1long* list$1long_push_back(struct list$1long* self, long item);
static void list$1longp_finalize(struct list$1long* self);
static void list_item$1longp_finalize(struct list_item$1long* self);
static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values);
static struct list$1float* list$1float_push_back(struct list$1float* self, float item);
static void list$1floatp_finalize(struct list$1float* self);
static void list_item$1floatp_finalize(struct list_item$1float* self);
static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values);
static struct list$1double* list$1double_push_back(struct list$1double* self, double item);
static void list$1doublep_finalize(struct list$1double* self);
static void list_item$1doublep_finalize(struct list_item$1double* self);
static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values);
static void vector$1charp_finalize(struct vector$1char* self);
static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values);
static void vector$1charpp_finalize(struct vector$1charp* self);
static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values);
static void vector$1shortp_finalize(struct vector$1short* self);
static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values);
static void vector$1intp_finalize(struct vector$1int* self);
static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values);
static void vector$1longp_finalize(struct vector$1long* self);
static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values);
static void vector$1floatp_finalize(struct vector$1float* self);
static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values);
static void vector$1doublep_finalize(struct vector$1double* self);
_Bool bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool short_equals(short self, short right);
_Bool int_equals(int self, int right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(unsigned long  int self, unsigned long  int right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool bool_operator_equals(_Bool self, _Bool right);
_Bool char_operator_equals(char self, char right);
_Bool short_operator_equals(short self, short right);
_Bool int_operator_equals(int self, int right);
_Bool long_operator_equals(long self, long right);
_Bool bool_operator_not_equals(_Bool self, _Bool right);
_Bool char_operator_not_equals(char self, char right);
_Bool short_operator_not_equals(short self, short right);
_Bool int_operator_not_equals(int self, int right);
_Bool long_operator_not_equals(long self, long right);
_Bool string_equals(char* self, char* right);
_Bool charp_equals(char* self, char* right);
_Bool voidp_equals(void* self, void* right);
_Bool string_operator_equals(char* self, char* right);
_Bool charp_operator_equals(char* self, char* right);
_Bool voidp_operator_equals(char* self, char* right);
_Bool voidp_operator_not_equals(char* self, char* right);
_Bool string_operator_not_equals(char* self, char* right);
_Bool charp_operator_not_equals(char* self, char* right);
char* charp_operator_add(char* self, char* right);
char* string_operator_add(char* self, char* right);
char* charp_operator_mult(char* self, int right);
char* string_operator_mult(char* self, int right);
unsigned int bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short int value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(unsigned long  int value);
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int string_get_hash_key(char* value);
unsigned int charp_get_hash_key(char* value);
_Bool bool_clone(_Bool self);
char char_clone(char self);
short int short_clone(short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long  int size_t_clone(unsigned long  int self);
double double_clone(double self);
float float_clone(float self);
char* charp_clone(char* self);
char* string_clone(char* self);
_Bool xiswalpha(unsigned int c);
_Bool xiswblank(unsigned int c);
_Bool xiswdigit(unsigned int c);
_Bool xiswalnum(unsigned int c);
_Bool xisalpha(char c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xiswascii(unsigned int c);
int string_length(char* str);
int charp_length(char* str);
char* string_reverse(char* str);
char* charp_reverse(char* str);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_substring(char* str, int head, int tail);
char* string_substring(char* str, int head, int tail);
char* xsprintf(char* msg, ...);
char* charp_delete(char* str, int head, int tail);
char* string_delete(char* str, int head, int tail);
struct list$1charph* charp_split_char(char* self, char c);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
struct list$1charph* string_split_char(char* self, char c);
char* charp_printable(char* str);
char* xbasename(char* path);
char* xnoextname(char* path);
char* xextname(char* path);
char* bool_to_string(_Bool self);
char* char_to_string(char self);
char* short_to_string(short self);
char* int_to_string(int self);
char* long_to_string(long self);
char* size_t_to_string(unsigned long  int self);
char* float_to_string(float self);
char* double_to_string(double self);
char* string_to_string(char* self);
char* charp_to_string(char* self);
int bool_compare(_Bool left, _Bool right);
int char_compare(char left, char right);
int short_compare(short left, short right);
int int_compare(int left, int right);
int long_compare(long left, long right);
int size_t_compare(unsigned long  int left, unsigned long  int right);
int float_compare(float left, float right);
int double_compare(double left, double right);
int string_compare(char* left, char* right);
int charp_compare(char* left, char* right);
char* FILE_read(struct _IO_FILE* f);
int FILE_write(struct _IO_FILE* f, char* str);
int FILE_fclose(struct _IO_FILE* f);
struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);
int string_write(char* self, char* file_name, _Bool append);
int charp_write(char* self, char* file_name, _Bool append);
char* string_read(char* file_name);
char* charp_read(char* file_name);
struct list$1charph* FILE_readlines(struct _IO_FILE* f);
int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));
char* charp_puts(char* self);
char* charp_print(char* self);
char* string_printf(char* self, ...);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
char* string_puts(char* self);
void int_times(int self, void* parent, void (*block)(void*,int));
int assert_v2(int exp);
int pipe(int anonymous_var_nameX765[2]);
int pipe2(int anonymous_var_nameX766[2], int anonymous_var_nameX767);
int close(int anonymous_var_nameX768);
int posix_close(int anonymous_var_nameX769, int anonymous_var_nameX770);
int dup(int anonymous_var_nameX771);
int dup2(int anonymous_var_nameX772, int anonymous_var_nameX773);
int dup3(int anonymous_var_nameX774, int anonymous_var_nameX775, int anonymous_var_nameX776);
long lseek(int anonymous_var_nameX777, long anonymous_var_nameX778, int anonymous_var_nameX779);
int fsync(int anonymous_var_nameX780);
int fdatasync(int anonymous_var_nameX781);
long read(int anonymous_var_nameX782, void* anonymous_var_nameX783, unsigned long  int anonymous_var_nameX784);
long write(int anonymous_var_nameX785, const void* anonymous_var_nameX786, unsigned long  int anonymous_var_nameX787);
long pread(int anonymous_var_nameX788, void* anonymous_var_nameX789, unsigned long  int anonymous_var_nameX790, long anonymous_var_nameX791);
long pwrite(int anonymous_var_nameX792, const void* anonymous_var_nameX793, unsigned long  int anonymous_var_nameX794, long anonymous_var_nameX795);
int chown(const char* anonymous_var_nameX796, unsigned int anonymous_var_nameX797, unsigned int anonymous_var_nameX798);
int fchown(int anonymous_var_nameX799, unsigned int anonymous_var_nameX800, unsigned int anonymous_var_nameX801);
int lchown(const char* anonymous_var_nameX802, unsigned int anonymous_var_nameX803, unsigned int anonymous_var_nameX804);
int fchownat(int anonymous_var_nameX805, const char* anonymous_var_nameX806, unsigned int anonymous_var_nameX807, unsigned int anonymous_var_nameX808, int anonymous_var_nameX809);
int link(const char* anonymous_var_nameX810, const char* anonymous_var_nameX811);
int linkat(int anonymous_var_nameX812, const char* anonymous_var_nameX813, int anonymous_var_nameX814, const char* anonymous_var_nameX815, int anonymous_var_nameX816);
int symlink(const char* anonymous_var_nameX817, const char* anonymous_var_nameX818);
int symlinkat(const char* anonymous_var_nameX819, int anonymous_var_nameX820, const char* anonymous_var_nameX821);
long readlink(const char* anonymous_var_nameX822, char* anonymous_var_nameX823, unsigned long  int anonymous_var_nameX824);
long readlinkat(int anonymous_var_nameX825, const char* anonymous_var_nameX826, char* anonymous_var_nameX827, unsigned long  int anonymous_var_nameX828);
int unlink(const char* anonymous_var_nameX829);
int unlinkat(int anonymous_var_nameX830, const char* anonymous_var_nameX831, int anonymous_var_nameX832);
int rmdir(const char* anonymous_var_nameX833);
int truncate(const char* anonymous_var_nameX834, long anonymous_var_nameX835);
int ftruncate(int anonymous_var_nameX836, long anonymous_var_nameX837);
int access(const char* anonymous_var_nameX838, int anonymous_var_nameX839);
int faccessat(int anonymous_var_nameX840, const char* anonymous_var_nameX841, int anonymous_var_nameX842, int anonymous_var_nameX843);
int chdir(const char* anonymous_var_nameX844);
int fchdir(int anonymous_var_nameX845);
char* getcwd(char* anonymous_var_nameX846, unsigned long  int anonymous_var_nameX847);
unsigned int alarm(unsigned int anonymous_var_nameX848);
unsigned int sleep(unsigned int anonymous_var_nameX849);
int pause();
int fork();
int _Fork();
int execve(const char* anonymous_var_nameX850, char* anonymous_var_nameX851[], char* anonymous_var_nameX852[]);
int execv(const char* anonymous_var_nameX853, char* anonymous_var_nameX854[]);
int execle(const char* anonymous_var_nameX855, const char* anonymous_var_nameX856, ...);
int execl(const char* anonymous_var_nameX857, const char* anonymous_var_nameX858, ...);
int execvp(const char* anonymous_var_nameX859, char* anonymous_var_nameX860[]);
int execlp(const char* anonymous_var_nameX861, const char* anonymous_var_nameX862, ...);
int fexecve(int anonymous_var_nameX863, char* anonymous_var_nameX864[], char* anonymous_var_nameX865[]);
void _exit(int anonymous_var_nameX866);
int getpid();
int getppid();
int getpgrp();
int getpgid(int anonymous_var_nameX867);
int setpgid(int anonymous_var_nameX868, int anonymous_var_nameX869);
int setsid();
int getsid(int anonymous_var_nameX870);
char* ttyname(int anonymous_var_nameX871);
int ttyname_r(int anonymous_var_nameX872, char* anonymous_var_nameX873, unsigned long  int anonymous_var_nameX874);
int isatty(int anonymous_var_nameX875);
int tcgetpgrp(int anonymous_var_nameX876);
int tcsetpgrp(int anonymous_var_nameX877, int anonymous_var_nameX878);
unsigned int getuid();
unsigned int geteuid();
unsigned int getgid();
unsigned int getegid();
int getgroups(int anonymous_var_nameX879, unsigned int anonymous_var_nameX880[]);
int setuid(unsigned int anonymous_var_nameX881);
int seteuid(unsigned int anonymous_var_nameX882);
int setgid(unsigned int anonymous_var_nameX883);
int setegid(unsigned int anonymous_var_nameX884);
char* getlogin();
int getlogin_r(char* anonymous_var_nameX885, unsigned long  int anonymous_var_nameX886);
int gethostname(char* anonymous_var_nameX887, unsigned long  int anonymous_var_nameX888);
char* ctermid(char* anonymous_var_nameX889);
int getopt(int anonymous_var_nameX890, char* anonymous_var_nameX891[], const char* anonymous_var_nameX892);
long pathconf(const char* anonymous_var_nameX893, int anonymous_var_nameX894);
long fpathconf(int anonymous_var_nameX895, int anonymous_var_nameX896);
long sysconf(int anonymous_var_nameX897);
unsigned long  int confstr(int anonymous_var_nameX898, char* anonymous_var_nameX899, unsigned long  int anonymous_var_nameX900);
int setreuid(unsigned int anonymous_var_nameX901, unsigned int anonymous_var_nameX902);
int setregid(unsigned int anonymous_var_nameX903, unsigned int anonymous_var_nameX904);
int lockf(int anonymous_var_nameX905, int anonymous_var_nameX906, long anonymous_var_nameX907);
long gethostid();
int nice(int anonymous_var_nameX908);
void sync();
int setpgrp();
char* crypt(const char* anonymous_var_nameX909, const char* anonymous_var_nameX910);
void encrypt(char* anonymous_var_nameX911, int anonymous_var_nameX912);
void swab(const void* anonymous_var_nameX913, void* anonymous_var_nameX914, long anonymous_var_nameX915);
int usleep(unsigned int anonymous_var_nameX916);
unsigned int ualarm(unsigned int anonymous_var_nameX917, unsigned int anonymous_var_nameX918);
int brk(void* anonymous_var_nameX919);
void* sbrk(long anonymous_var_nameX920);
int vfork();
int vhangup();
int chroot(const char* anonymous_var_nameX921);
int getpagesize();
int getdtablesize();
int sethostname(const char* anonymous_var_nameX922, unsigned long  int anonymous_var_nameX923);
int getdomainname(char* anonymous_var_nameX924, unsigned long  int anonymous_var_nameX925);
int setdomainname(const char* anonymous_var_nameX926, unsigned long  int anonymous_var_nameX927);
int setgroups(unsigned long  int anonymous_var_nameX928, const unsigned int* anonymous_var_nameX929);
char* getpass(const char* anonymous_var_nameX930);
int daemon(int anonymous_var_nameX931, int anonymous_var_nameX932);
void setusershell();
void endusershell();
char* getusershell();
int acct(const char* anonymous_var_nameX933);
long syscall(long anonymous_var_nameX934, ...);
int execvpe(const char* anonymous_var_nameX935, char* anonymous_var_nameX936[], char* anonymous_var_nameX937[]);
int issetugid();
int getentropy(void* anonymous_var_nameX938, unsigned long  int anonymous_var_nameX939);
int setresuid(unsigned int anonymous_var_nameX940, unsigned int anonymous_var_nameX941, unsigned int anonymous_var_nameX942);
int setresgid(unsigned int anonymous_var_nameX943, unsigned int anonymous_var_nameX944, unsigned int anonymous_var_nameX945);
int getresuid(unsigned int* anonymous_var_nameX946, unsigned int* anonymous_var_nameX947, unsigned int* anonymous_var_nameX948);
int getresgid(unsigned int* anonymous_var_nameX949, unsigned int* anonymous_var_nameX950, unsigned int* anonymous_var_nameX951);
char* get_current_dir_name();
int syncfs(int anonymous_var_nameX952);
int euidaccess(const char* anonymous_var_nameX953, int anonymous_var_nameX954);
int eaccess(const char* anonymous_var_nameX955, int anonymous_var_nameX956);
long copy_file_range(int anonymous_var_nameX957, long* anonymous_var_nameX958, int anonymous_var_nameX959, long* anonymous_var_nameX960, unsigned long  int anonymous_var_nameX961, unsigned int anonymous_var_nameX962);
int gettid();
long imaxabs(long anonymous_var_nameX963);
struct anonymous_typeX4 imaxdiv(long anonymous_var_nameX964, long anonymous_var_nameX965);
long strtoimax(const char* anonymous_var_nameX966, char** anonymous_var_nameX967, int anonymous_var_nameX968);
unsigned long  int strtoumax(const char* anonymous_var_nameX969, char** anonymous_var_nameX970, int anonymous_var_nameX971);
long wcstoimax(const unsigned int* anonymous_var_nameX972, unsigned int** anonymous_var_nameX973, int anonymous_var_nameX974);
unsigned long  int wcstoumax(const unsigned int* anonymous_var_nameX975, unsigned int** anonymous_var_nameX976, int anonymous_var_nameX977);
int sendmmsg(int anonymous_var_nameX978, struct mmsghdr* anonymous_var_nameX979, unsigned int anonymous_var_nameX980, unsigned int anonymous_var_nameX981);
int recvmmsg(int anonymous_var_nameX982, struct mmsghdr* anonymous_var_nameX983, unsigned int anonymous_var_nameX984, unsigned int anonymous_var_nameX985, struct timespec* anonymous_var_nameX986);
int socket(int anonymous_var_nameX987, int anonymous_var_nameX988, int anonymous_var_nameX989);
int socketpair(int anonymous_var_nameX990, int anonymous_var_nameX991, int anonymous_var_nameX992, int anonymous_var_nameX993[2]);
int shutdown(int anonymous_var_nameX994, int anonymous_var_nameX995);
int bind(int anonymous_var_nameX996, const struct sockaddr* anonymous_var_nameX997, unsigned int anonymous_var_nameX998);
int connect(int anonymous_var_nameX999, const struct sockaddr* anonymous_var_nameX1000, unsigned int anonymous_var_nameX1001);
int listen(int anonymous_var_nameX1002, int anonymous_var_nameX1003);
int accept(int anonymous_var_nameX1004, struct sockaddr* anonymous_var_nameX1005, unsigned int* anonymous_var_nameX1006);
int accept4(int anonymous_var_nameX1007, struct sockaddr* anonymous_var_nameX1008, unsigned int* anonymous_var_nameX1009, int anonymous_var_nameX1010);
int getsockname(int anonymous_var_nameX1011, struct sockaddr* anonymous_var_nameX1012, unsigned int* anonymous_var_nameX1013);
int getpeername(int anonymous_var_nameX1014, struct sockaddr* anonymous_var_nameX1015, unsigned int* anonymous_var_nameX1016);
long send(int anonymous_var_nameX1017, const void* anonymous_var_nameX1018, unsigned long  int anonymous_var_nameX1019, int anonymous_var_nameX1020);
long recv(int anonymous_var_nameX1021, void* anonymous_var_nameX1022, unsigned long  int anonymous_var_nameX1023, int anonymous_var_nameX1024);
long sendto(int anonymous_var_nameX1025, const void* anonymous_var_nameX1026, unsigned long  int anonymous_var_nameX1027, int anonymous_var_nameX1028, const struct sockaddr* anonymous_var_nameX1029, unsigned int anonymous_var_nameX1030);
long recvfrom(int anonymous_var_nameX1031, void* anonymous_var_nameX1032, unsigned long  int anonymous_var_nameX1033, int anonymous_var_nameX1034, struct sockaddr* anonymous_var_nameX1035, unsigned int* anonymous_var_nameX1036);
long sendmsg(int anonymous_var_nameX1037, const struct msghdr* anonymous_var_nameX1038, int anonymous_var_nameX1039);
long recvmsg(int anonymous_var_nameX1040, struct msghdr* anonymous_var_nameX1041, int anonymous_var_nameX1042);
int getsockopt(int anonymous_var_nameX1043, int anonymous_var_nameX1044, int anonymous_var_nameX1045, void* anonymous_var_nameX1046, unsigned int* anonymous_var_nameX1047);
int setsockopt(int anonymous_var_nameX1048, int anonymous_var_nameX1049, int anonymous_var_nameX1050, const void* anonymous_var_nameX1051, unsigned int anonymous_var_nameX1052);
int sockatmark(int anonymous_var_nameX1053);
unsigned int htonl(unsigned int anonymous_var_nameX1058);
unsigned short int htons(unsigned short int anonymous_var_nameX1059);
unsigned int ntohl(unsigned int anonymous_var_nameX1060);
unsigned short int ntohs(unsigned short int anonymous_var_nameX1061);
unsigned int inet_addr(const char* anonymous_var_nameX1062);
unsigned int inet_network(const char* anonymous_var_nameX1063);
char* inet_ntoa(struct in_addr anonymous_var_nameX1064);
int inet_pton(int anonymous_var_nameX1065, const char* anonymous_var_nameX1066, void* anonymous_var_nameX1067);
const char* inet_ntop(int anonymous_var_nameX1068, const void* anonymous_var_nameX1069, char* anonymous_var_nameX1070, unsigned int anonymous_var_nameX1071);
int inet_aton(const char* anonymous_var_nameX1072, struct in_addr* anonymous_var_nameX1073);
struct in_addr inet_makeaddr(unsigned int anonymous_var_nameX1074, unsigned int anonymous_var_nameX1075);
unsigned int inet_lnaof(struct in_addr anonymous_var_nameX1076);
unsigned int inet_netof(struct in_addr anonymous_var_nameX1077);
int select(int anonymous_var_nameX1078, struct anonymous_typeX7* anonymous_var_nameX1079, struct anonymous_typeX7* anonymous_var_nameX1080, struct anonymous_typeX7* anonymous_var_nameX1081, struct timeval* anonymous_var_nameX1082);
int pselect(int anonymous_var_nameX1083, struct anonymous_typeX7* anonymous_var_nameX1084, struct anonymous_typeX7* anonymous_var_nameX1085, struct anonymous_typeX7* anonymous_var_nameX1086, const struct timespec* anonymous_var_nameX1087, const struct __sigset_t* anonymous_var_nameX1088);
int gettimeofday(struct timeval* anonymous_var_nameX1089, void* anonymous_var_nameX1090);
int getitimer(int anonymous_var_nameX1091, struct itimerval* anonymous_var_nameX1092);
int setitimer(int anonymous_var_nameX1093, const struct itimerval* anonymous_var_nameX1094, struct itimerval* anonymous_var_nameX1095);
int utimes(const char* anonymous_var_nameX1096, const struct timeval anonymous_var_nameX1097[2]);
int futimes(int anonymous_var_nameX1098, const struct timeval anonymous_var_nameX1099[2]);
int futimesat(int anonymous_var_nameX1100, const char* anonymous_var_nameX1101, const struct timeval anonymous_var_nameX1102[2]);
int lutimes(const char* anonymous_var_nameX1103, const struct timeval anonymous_var_nameX1104[2]);
int settimeofday(const struct timeval* anonymous_var_nameX1105, const struct timezone* anonymous_var_nameX1106);
int adjtime(const struct timeval* anonymous_var_nameX1107, struct timeval* anonymous_var_nameX1108);
long clock();
long time(long* anonymous_var_nameX1109);
double difftime(long anonymous_var_nameX1110, long anonymous_var_nameX1111);
long mktime(struct tm* anonymous_var_nameX1112);
unsigned long  int strftime(char* anonymous_var_nameX1113, unsigned long  int anonymous_var_nameX1114, const char* anonymous_var_nameX1115, const struct tm* anonymous_var_nameX1116);
struct tm* gmtime(const long* anonymous_var_nameX1117);
struct tm* localtime(const long* anonymous_var_nameX1118);
char* asctime(const struct tm* anonymous_var_nameX1119);
char* ctime(const long* anonymous_var_nameX1120);
int timespec_get(struct timespec* anonymous_var_nameX1121, int anonymous_var_nameX1122);
unsigned long  int strftime_l(char* anonymous_var_nameX1123, unsigned long  int anonymous_var_nameX1124, const char* anonymous_var_nameX1125, const struct tm* anonymous_var_nameX1126, struct __locale_struct* anonymous_var_nameX1127);
struct tm* gmtime_r(const long* anonymous_var_nameX1128, struct tm* anonymous_var_nameX1129);
struct tm* localtime_r(const long* anonymous_var_nameX1130, struct tm* anonymous_var_nameX1131);
char* asctime_r(const struct tm* anonymous_var_nameX1132, char* anonymous_var_nameX1133);
char* ctime_r(const long* anonymous_var_nameX1134, char* anonymous_var_nameX1135);
void tzset();
int nanosleep(const struct timespec* anonymous_var_nameX1136, struct timespec* anonymous_var_nameX1137);
int clock_getres(int anonymous_var_nameX1138, struct timespec* anonymous_var_nameX1139);
int clock_gettime(int anonymous_var_nameX1140, struct timespec* anonymous_var_nameX1141);
int clock_settime(int anonymous_var_nameX1142, const struct timespec* anonymous_var_nameX1143);
int clock_nanosleep(int anonymous_var_nameX1144, int anonymous_var_nameX1145, const struct timespec* anonymous_var_nameX1146, struct timespec* anonymous_var_nameX1147);
int clock_getcpuclockid(int anonymous_var_nameX1148, int* anonymous_var_nameX1149);
int timer_create(int anonymous_var_nameX1150, struct sigevent* anonymous_var_nameX1151, void** anonymous_var_nameX1152);
int timer_delete(void* anonymous_var_nameX1153);
int timer_settime(void* anonymous_var_nameX1154, int anonymous_var_nameX1155, const struct itimerspec* anonymous_var_nameX1156, struct itimerspec* anonymous_var_nameX1157);
int timer_gettime(void* anonymous_var_nameX1158, struct itimerspec* anonymous_var_nameX1159);
int timer_getoverrun(void* anonymous_var_nameX1160);
char* strptime(const char* anonymous_var_nameX1161, const char* anonymous_var_nameX1162, struct tm* anonymous_var_nameX1163);
struct tm* getdate(const char* anonymous_var_nameX1164);
int stime(const long* anonymous_var_nameX1165);
long timegm(struct tm* anonymous_var_nameX1166);
int OPENSSL_sk_num(const struct stack_st* anonymous_var_nameX1171);
void* OPENSSL_sk_value(const struct stack_st* anonymous_var_nameX1172, int anonymous_var_nameX1173);
void* OPENSSL_sk_set(struct stack_st* st, int i, const void* data);
struct stack_st* OPENSSL_sk_new(int (*cmp)(const void*,const void*));
struct stack_st* OPENSSL_sk_new_null();
struct stack_st* OPENSSL_sk_new_reserve(int (*c)(const void*,const void*), int n);
int OPENSSL_sk_reserve(struct stack_st* st, int n);
void OPENSSL_sk_free(struct stack_st* anonymous_var_nameX1174);
void OPENSSL_sk_pop_free(struct stack_st* st, void (*func)(void*));
struct stack_st* OPENSSL_sk_deep_copy(const struct stack_st* anonymous_var_nameX1176, void* (*c)(const void*), void (*f)(void*));
int OPENSSL_sk_insert(struct stack_st* sk, const void* data, int where);
void* OPENSSL_sk_delete(struct stack_st* st, int loc);
void* OPENSSL_sk_delete_ptr(struct stack_st* st, const void* p);
int OPENSSL_sk_find(struct stack_st* st, const void* data);
int OPENSSL_sk_find_ex(struct stack_st* st, const void* data);
int OPENSSL_sk_find_all(struct stack_st* st, const void* data, int* pnum);
int OPENSSL_sk_push(struct stack_st* st, const void* data);
int OPENSSL_sk_unshift(struct stack_st* st, const void* data);
void* OPENSSL_sk_shift(struct stack_st* st);
void* OPENSSL_sk_pop(struct stack_st* st);
void OPENSSL_sk_zero(struct stack_st* st);
int (*OPENSSL_sk_set_cmp_func(struct stack_st* sk, int (*cmp)(const void*,const void*)))(const void*,const void*);
struct stack_st* OPENSSL_sk_dup(const struct stack_st* st);
void OPENSSL_sk_sort(struct stack_st* st);
int OPENSSL_sk_is_sorted(const struct stack_st* st);
int ERR_load_ASN1_strings();
int ERR_load_ASYNC_strings();
int ERR_load_BIO_strings();
int ERR_load_BN_strings();
int ERR_load_BUF_strings();
int ERR_load_CMS_strings();
int ERR_load_CONF_strings();
int ERR_load_CRYPTO_strings();
int ERR_load_CT_strings();
int ERR_load_DH_strings();
int ERR_load_DSA_strings();
int ERR_load_EC_strings();
int ERR_load_ENGINE_strings();
int ERR_load_ERR_strings();
int ERR_load_EVP_strings();
int ERR_load_KDF_strings();
int ERR_load_OBJ_strings();
int ERR_load_OCSP_strings();
int ERR_load_PEM_strings();
int ERR_load_PKCS12_strings();
int ERR_load_PKCS7_strings();
int ERR_load_RAND_strings();
int ERR_load_RSA_strings();
int ERR_load_OSSL_STORE_strings();
int ERR_load_TS_strings();
int ERR_load_UI_strings();
int ERR_load_X509_strings();
int ERR_load_X509V3_strings();
void* CRYPTO_THREAD_lock_new();
int CRYPTO_THREAD_read_lock(void* lock);
int CRYPTO_THREAD_write_lock(void* lock);
int CRYPTO_THREAD_unlock(void* lock);
void CRYPTO_THREAD_lock_free(void* lock);
int CRYPTO_atomic_add(int* val, int amount, int* ret, void* lock);
int CRYPTO_atomic_or(unsigned long  int* val, unsigned long  int op, unsigned long  int* ret, void* lock);
int CRYPTO_atomic_load(unsigned long  int* val, unsigned long  int* ret, void* lock);
int CRYPTO_atomic_load_int(int* val, int* ret, void* lock);
unsigned long  int OPENSSL_strlcpy(char* dst, const char* src, unsigned long  int siz);
unsigned long  int OPENSSL_strlcat(char* dst, const char* src, unsigned long  int siz);
unsigned long  int OPENSSL_strnlen(const char* str, unsigned long  int maxlen);
int OPENSSL_buf2hexstr_ex(char* str, unsigned long  int str_n, unsigned long  int* strlength, const unsigned char* buf, unsigned long  int buflen, const char sep);
char* OPENSSL_buf2hexstr(const unsigned char* buf, long buflen);
int OPENSSL_hexstr2buf_ex(unsigned char* buf, unsigned long  int buf_n, unsigned long  int* buflen, const char* str, const char sep);
unsigned char* OPENSSL_hexstr2buf(const char* str, long* buflen);
int OPENSSL_hexchar2int(unsigned char c);
int OPENSSL_strcasecmp(const char* s1, const char* s2);
int OPENSSL_strncasecmp(const char* s1, const char* s2, unsigned long  int n);
unsigned int OPENSSL_version_major();
unsigned int OPENSSL_version_minor();
unsigned int OPENSSL_version_patch();
const char* OPENSSL_version_pre_release();
const char* OPENSSL_version_build_metadata();
unsigned long  int OpenSSL_version_num();
const char* OpenSSL_version(int type);
const char* OPENSSL_info(int type);
int OPENSSL_issetugid();
int CRYPTO_get_ex_new_index(int class_index, long argl, void* argp, void (*new_func)(void*,void*,struct crypto_ex_data_st*,int,long,void*), int (*dup_func)(struct crypto_ex_data_st*,const struct crypto_ex_data_st*,void**,int,long,void*), void (*free_func)(void*,void*,struct crypto_ex_data_st*,int,long,void*));
int CRYPTO_free_ex_index(int class_index, int idx);
int CRYPTO_new_ex_data(int class_index, void* obj, struct crypto_ex_data_st* ad);
int CRYPTO_dup_ex_data(int class_index, struct crypto_ex_data_st* to, const struct crypto_ex_data_st* from);
void CRYPTO_free_ex_data(int class_index, void* obj, struct crypto_ex_data_st* ad);
int CRYPTO_alloc_ex_data(int class_index, void* obj, struct crypto_ex_data_st* ad, int idx);
int CRYPTO_set_ex_data(struct crypto_ex_data_st* ad, int idx, void* val);
void* CRYPTO_get_ex_data(const struct crypto_ex_data_st* ad, int idx);
int CRYPTO_set_mem_functions(void* (*malloc_fn)(unsigned long  int,const char*,int), void* (*realloc_fn)(void*,unsigned long  int,const char*,int), void (*free_fn)(void*,const char*,int));
void CRYPTO_get_mem_functions(void* (*malloc_fn)(unsigned long  int,const char*,int), void* (*realloc_fn)(void*,unsigned long  int,const char*,int), void (*free_fn)(void*,const char*,int));
void* CRYPTO_malloc(unsigned long  int num, const char* file, int line);
void* CRYPTO_zalloc(unsigned long  int num, const char* file, int line);
void* CRYPTO_memdup(const void* str, unsigned long  int siz, const char* file, int line);
char* CRYPTO_strdup(const char* str, const char* file, int line);
char* CRYPTO_strndup(const char* str, unsigned long  int s, const char* file, int line);
void CRYPTO_free(void* ptr, const char* file, int line);
void CRYPTO_clear_free(void* ptr, unsigned long  int num, const char* file, int line);
void* CRYPTO_realloc(void* addr, unsigned long  int num, const char* file, int line);
void* CRYPTO_clear_realloc(void* addr, unsigned long  int old_num, unsigned long  int num, const char* file, int line);
int CRYPTO_secure_malloc_init(unsigned long  int sz, unsigned long  int minsize);
int CRYPTO_secure_malloc_done();
void* CRYPTO_secure_malloc(unsigned long  int num, const char* file, int line);
void* CRYPTO_secure_zalloc(unsigned long  int num, const char* file, int line);
void CRYPTO_secure_free(void* ptr, const char* file, int line);
void CRYPTO_secure_clear_free(void* ptr, unsigned long  int num, const char* file, int line);
int CRYPTO_secure_allocated(const void* ptr);
int CRYPTO_secure_malloc_initialized();
unsigned long  int CRYPTO_secure_actual_size(void* ptr);
unsigned long  int CRYPTO_secure_used();
void OPENSSL_cleanse(void* ptr, unsigned long  int len);
void OPENSSL_die(const char* assertion, const char* file, int line);
int OPENSSL_isservice();
void OPENSSL_init();
void OPENSSL_fork_prepare();
void OPENSSL_fork_parent();
void OPENSSL_fork_child();
struct tm* OPENSSL_gmtime(const long* timer, struct tm* result);
int OPENSSL_gmtime_adj(struct tm* tm, int offset_day, long offset_sec);
int OPENSSL_gmtime_diff(int* pday, int* psec, const struct tm* from, const struct tm* to);
int CRYPTO_memcmp(const void* in_a, const void* in_b, unsigned long  int len);
void OPENSSL_cleanup();
int OPENSSL_init_crypto(unsigned long  int opts, const struct ossl_init_settings_st* settings);
int OPENSSL_atexit(void (*handler)());
void OPENSSL_thread_stop();
void OPENSSL_thread_stop_ex(struct ossl_lib_ctx_st* ctx);
struct ossl_init_settings_st* OPENSSL_INIT_new();
int OPENSSL_INIT_set_config_filename(struct ossl_init_settings_st* settings, const char* config_filename);
void OPENSSL_INIT_set_config_file_flags(struct ossl_init_settings_st* settings, unsigned long  int flags);
int OPENSSL_INIT_set_config_appname(struct ossl_init_settings_st* settings, const char* config_appname);
void OPENSSL_INIT_free(struct ossl_init_settings_st* settings);
int sched_get_priority_max(int anonymous_var_nameX1177);
int sched_get_priority_min(int anonymous_var_nameX1178);
int sched_getparam(int anonymous_var_nameX1179, struct sched_param* anonymous_var_nameX1180);
int sched_getscheduler(int anonymous_var_nameX1181);
int sched_rr_get_interval(int anonymous_var_nameX1182, struct timespec* anonymous_var_nameX1183);
int sched_setparam(int anonymous_var_nameX1184, const struct sched_param* anonymous_var_nameX1185);
int sched_setscheduler(int anonymous_var_nameX1186, int anonymous_var_nameX1187, const struct sched_param* anonymous_var_nameX1188);
int sched_yield();
int clone(int (*anonymous_lambda_var_nameZ6)(void*), void* anonymous_var_nameX1190, int anonymous_var_nameX1191, void* anonymous_var_nameX1192, ...);
int unshare(int anonymous_var_nameX1193);
int setns(int anonymous_var_nameX1194, int anonymous_var_nameX1195);
void* memcpy(void* anonymous_var_nameX1196, const void* anonymous_var_nameX1197, unsigned long  int anonymous_var_nameX1198);
int memcmp(const void* anonymous_var_nameX1199, const void* anonymous_var_nameX1200, unsigned long  int anonymous_var_nameX1201);
void* memset(void* anonymous_var_nameX1202, int anonymous_var_nameX1203, unsigned long  int anonymous_var_nameX1204);
void* calloc(unsigned long  int anonymous_var_nameX1205, unsigned long  int anonymous_var_nameX1206);
void free(void* anonymous_var_nameX1207);
int __sched_cpucount(unsigned long  int anonymous_var_nameX1208, const struct cpu_set_t* anonymous_var_nameX1209);
int sched_getcpu();
int sched_getaffinity(int anonymous_var_nameX1210, unsigned long  int anonymous_var_nameX1211, struct cpu_set_t* anonymous_var_nameX1212);
int sched_setaffinity(int anonymous_var_nameX1213, unsigned long  int anonymous_var_nameX1214, const struct cpu_set_t* anonymous_var_nameX1215);
int pthread_create(struct __pthread** anonymous_var_nameX1216, const struct anonymous_typeX14* anonymous_var_nameX1217, void* (*anonymous_lambda_var_nameZ7)(void*), void* anonymous_var_nameX1219);
int pthread_detach(struct __pthread* anonymous_var_nameX1220);
void pthread_exit(void* anonymous_var_nameX1221);
int pthread_join(struct __pthread* anonymous_var_nameX1222, void** anonymous_var_nameX1223);
struct __pthread* pthread_self();
int pthread_equal(struct __pthread* anonymous_var_nameX1224, struct __pthread* anonymous_var_nameX1225);
int pthread_setcancelstate(int anonymous_var_nameX1226, int* anonymous_var_nameX1227);
int pthread_setcanceltype(int anonymous_var_nameX1228, int* anonymous_var_nameX1229);
void pthread_testcancel();
int pthread_cancel(struct __pthread* anonymous_var_nameX1230);
int pthread_getschedparam(struct __pthread* anonymous_var_nameX1231, int* anonymous_var_nameX1232, struct sched_param* anonymous_var_nameX1233);
int pthread_setschedparam(struct __pthread* anonymous_var_nameX1234, int anonymous_var_nameX1235, const struct sched_param* anonymous_var_nameX1236);
int pthread_setschedprio(struct __pthread* anonymous_var_nameX1237, int anonymous_var_nameX1238);
int pthread_once(int* anonymous_var_nameX1239, void (*anonymous_lambda_var_nameZ8)());
int pthread_mutex_init(struct anonymous_typeX17* anonymous_var_nameX1240, const struct anonymous_typeX10* anonymous_var_nameX1241);
int pthread_mutex_lock(struct anonymous_typeX17* anonymous_var_nameX1242);
int pthread_mutex_unlock(struct anonymous_typeX17* anonymous_var_nameX1243);
int pthread_mutex_trylock(struct anonymous_typeX17* anonymous_var_nameX1244);
int pthread_mutex_timedlock(struct anonymous_typeX17* anonymous_var_nameX1245, const struct timespec* anonymous_var_nameX1246);
int pthread_mutex_destroy(struct anonymous_typeX17* anonymous_var_nameX1247);
int pthread_mutex_consistent(struct anonymous_typeX17* anonymous_var_nameX1248);
int pthread_mutex_getprioceiling(const struct anonymous_typeX17* anonymous_var_nameX1249, int* anonymous_var_nameX1250);
int pthread_mutex_setprioceiling(struct anonymous_typeX17* anonymous_var_nameX1251, int anonymous_var_nameX1252, int* anonymous_var_nameX1253);
int pthread_cond_init(struct anonymous_typeX20* anonymous_var_nameX1254, const struct anonymous_typeX11* anonymous_var_nameX1255);
int pthread_cond_destroy(struct anonymous_typeX20* anonymous_var_nameX1256);
int pthread_cond_wait(struct anonymous_typeX20* anonymous_var_nameX1257, struct anonymous_typeX17* anonymous_var_nameX1258);
int pthread_cond_timedwait(struct anonymous_typeX20* anonymous_var_nameX1259, struct anonymous_typeX17* anonymous_var_nameX1260, const struct timespec* anonymous_var_nameX1261);
int pthread_cond_broadcast(struct anonymous_typeX20* anonymous_var_nameX1262);
int pthread_cond_signal(struct anonymous_typeX20* anonymous_var_nameX1263);
int pthread_rwlock_init(struct anonymous_typeX23* anonymous_var_nameX1264, const struct anonymous_typeX13* anonymous_var_nameX1265);
int pthread_rwlock_destroy(struct anonymous_typeX23* anonymous_var_nameX1266);
int pthread_rwlock_rdlock(struct anonymous_typeX23* anonymous_var_nameX1267);
int pthread_rwlock_tryrdlock(struct anonymous_typeX23* anonymous_var_nameX1268);
int pthread_rwlock_timedrdlock(struct anonymous_typeX23* anonymous_var_nameX1269, const struct timespec* anonymous_var_nameX1270);
int pthread_rwlock_wrlock(struct anonymous_typeX23* anonymous_var_nameX1271);
int pthread_rwlock_trywrlock(struct anonymous_typeX23* anonymous_var_nameX1272);
int pthread_rwlock_timedwrlock(struct anonymous_typeX23* anonymous_var_nameX1273, const struct timespec* anonymous_var_nameX1274);
int pthread_rwlock_unlock(struct anonymous_typeX23* anonymous_var_nameX1275);
int pthread_spin_init(int* anonymous_var_nameX1276, int anonymous_var_nameX1277);
int pthread_spin_destroy(int* anonymous_var_nameX1278);
int pthread_spin_lock(int* anonymous_var_nameX1279);
int pthread_spin_trylock(int* anonymous_var_nameX1280);
int pthread_spin_unlock(int* anonymous_var_nameX1281);
int pthread_barrier_init(struct anonymous_typeX26* anonymous_var_nameX1282, const struct anonymous_typeX12* anonymous_var_nameX1283, unsigned int anonymous_var_nameX1284);
int pthread_barrier_destroy(struct anonymous_typeX26* anonymous_var_nameX1285);
int pthread_barrier_wait(struct anonymous_typeX26* anonymous_var_nameX1286);
int pthread_key_create(unsigned int* anonymous_var_nameX1287, void (*anonymous_lambda_var_nameZ9)(void*));
int pthread_key_delete(unsigned int anonymous_var_nameX1289);
void* pthread_getspecific(unsigned int anonymous_var_nameX1290);
int pthread_setspecific(unsigned int anonymous_var_nameX1291, const void* anonymous_var_nameX1292);
int pthread_attr_init(struct anonymous_typeX14* anonymous_var_nameX1293);
int pthread_attr_destroy(struct anonymous_typeX14* anonymous_var_nameX1294);
int pthread_attr_getguardsize(const struct anonymous_typeX14* anonymous_var_nameX1295, unsigned long  int* anonymous_var_nameX1296);
int pthread_attr_setguardsize(struct anonymous_typeX14* anonymous_var_nameX1297, unsigned long  int anonymous_var_nameX1298);
int pthread_attr_getstacksize(const struct anonymous_typeX14* anonymous_var_nameX1299, unsigned long  int* anonymous_var_nameX1300);
int pthread_attr_setstacksize(struct anonymous_typeX14* anonymous_var_nameX1301, unsigned long  int anonymous_var_nameX1302);
int pthread_attr_getdetachstate(const struct anonymous_typeX14* anonymous_var_nameX1303, int* anonymous_var_nameX1304);
int pthread_attr_setdetachstate(struct anonymous_typeX14* anonymous_var_nameX1305, int anonymous_var_nameX1306);
int pthread_attr_getstack(const struct anonymous_typeX14* anonymous_var_nameX1307, void** anonymous_var_nameX1308, unsigned long  int* anonymous_var_nameX1309);
int pthread_attr_setstack(struct anonymous_typeX14* anonymous_var_nameX1310, void* anonymous_var_nameX1311, unsigned long  int anonymous_var_nameX1312);
int pthread_attr_getscope(const struct anonymous_typeX14* anonymous_var_nameX1313, int* anonymous_var_nameX1314);
int pthread_attr_setscope(struct anonymous_typeX14* anonymous_var_nameX1315, int anonymous_var_nameX1316);
int pthread_attr_getschedpolicy(const struct anonymous_typeX14* anonymous_var_nameX1317, int* anonymous_var_nameX1318);
int pthread_attr_setschedpolicy(struct anonymous_typeX14* anonymous_var_nameX1319, int anonymous_var_nameX1320);
int pthread_attr_getschedparam(const struct anonymous_typeX14* anonymous_var_nameX1321, struct sched_param* anonymous_var_nameX1322);
int pthread_attr_setschedparam(struct anonymous_typeX14* anonymous_var_nameX1323, const struct sched_param* anonymous_var_nameX1324);
int pthread_attr_getinheritsched(const struct anonymous_typeX14* anonymous_var_nameX1325, int* anonymous_var_nameX1326);
int pthread_attr_setinheritsched(struct anonymous_typeX14* anonymous_var_nameX1327, int anonymous_var_nameX1328);
int pthread_mutexattr_destroy(struct anonymous_typeX10* anonymous_var_nameX1329);
int pthread_mutexattr_getprioceiling(const struct anonymous_typeX10* anonymous_var_nameX1330, int* anonymous_var_nameX1331);
int pthread_mutexattr_getprotocol(const struct anonymous_typeX10* anonymous_var_nameX1332, int* anonymous_var_nameX1333);
int pthread_mutexattr_getpshared(const struct anonymous_typeX10* anonymous_var_nameX1334, int* anonymous_var_nameX1335);
int pthread_mutexattr_getrobust(const struct anonymous_typeX10* anonymous_var_nameX1336, int* anonymous_var_nameX1337);
int pthread_mutexattr_gettype(const struct anonymous_typeX10* anonymous_var_nameX1338, int* anonymous_var_nameX1339);
int pthread_mutexattr_init(struct anonymous_typeX10* anonymous_var_nameX1340);
int pthread_mutexattr_setprioceiling(struct anonymous_typeX10* anonymous_var_nameX1341, int anonymous_var_nameX1342);
int pthread_mutexattr_setprotocol(struct anonymous_typeX10* anonymous_var_nameX1343, int anonymous_var_nameX1344);
int pthread_mutexattr_setpshared(struct anonymous_typeX10* anonymous_var_nameX1345, int anonymous_var_nameX1346);
int pthread_mutexattr_setrobust(struct anonymous_typeX10* anonymous_var_nameX1347, int anonymous_var_nameX1348);
int pthread_mutexattr_settype(struct anonymous_typeX10* anonymous_var_nameX1349, int anonymous_var_nameX1350);
int pthread_condattr_init(struct anonymous_typeX11* anonymous_var_nameX1351);
int pthread_condattr_destroy(struct anonymous_typeX11* anonymous_var_nameX1352);
int pthread_condattr_setclock(struct anonymous_typeX11* anonymous_var_nameX1353, int anonymous_var_nameX1354);
int pthread_condattr_setpshared(struct anonymous_typeX11* anonymous_var_nameX1355, int anonymous_var_nameX1356);
int pthread_condattr_getclock(const struct anonymous_typeX11* anonymous_var_nameX1357, int* anonymous_var_nameX1358);
int pthread_condattr_getpshared(const struct anonymous_typeX11* anonymous_var_nameX1359, int* anonymous_var_nameX1360);
int pthread_rwlockattr_init(struct anonymous_typeX13* anonymous_var_nameX1361);
int pthread_rwlockattr_destroy(struct anonymous_typeX13* anonymous_var_nameX1362);
int pthread_rwlockattr_setpshared(struct anonymous_typeX13* anonymous_var_nameX1363, int anonymous_var_nameX1364);
int pthread_rwlockattr_getpshared(const struct anonymous_typeX13* anonymous_var_nameX1365, int* anonymous_var_nameX1366);
int pthread_barrierattr_destroy(struct anonymous_typeX12* anonymous_var_nameX1367);
int pthread_barrierattr_getpshared(const struct anonymous_typeX12* anonymous_var_nameX1368, int* anonymous_var_nameX1369);
int pthread_barrierattr_init(struct anonymous_typeX12* anonymous_var_nameX1370);
int pthread_barrierattr_setpshared(struct anonymous_typeX12* anonymous_var_nameX1371, int anonymous_var_nameX1372);
int pthread_atfork(void (*anonymous_lambda_var_nameZ10)(), void (*anonymous_lambda_var_nameZ11)(), void (*anonymous_lambda_var_nameZ12)());
int pthread_getconcurrency();
int pthread_setconcurrency(int anonymous_var_nameX1373);
int pthread_getcpuclockid(struct __pthread* anonymous_var_nameX1374, int* anonymous_var_nameX1375);
void _pthread_cleanup_push(struct __ptcb* anonymous_var_nameX1378, void (*anonymous_lambda_var_nameZ13)(void*), void* anonymous_var_nameX1380);
void _pthread_cleanup_pop(struct __ptcb* anonymous_var_nameX1381, int anonymous_var_nameX1382);
int pthread_getaffinity_np(struct __pthread* anonymous_var_nameX1383, unsigned long  int anonymous_var_nameX1384, struct cpu_set_t* anonymous_var_nameX1385);
int pthread_setaffinity_np(struct __pthread* anonymous_var_nameX1386, unsigned long  int anonymous_var_nameX1387, const struct cpu_set_t* anonymous_var_nameX1388);
int pthread_getattr_np(struct __pthread* anonymous_var_nameX1389, struct anonymous_typeX14* anonymous_var_nameX1390);
int pthread_setname_np(struct __pthread* anonymous_var_nameX1391, const char* anonymous_var_nameX1392);
int pthread_getname_np(struct __pthread* anonymous_var_nameX1393, char* anonymous_var_nameX1394, unsigned long  int anonymous_var_nameX1395);
int pthread_getattr_default_np(struct anonymous_typeX14* anonymous_var_nameX1396);
int pthread_setattr_default_np(const struct anonymous_typeX14* anonymous_var_nameX1397);
int pthread_tryjoin_np(struct __pthread* anonymous_var_nameX1398, void** anonymous_var_nameX1399);
int pthread_timedjoin_np(struct __pthread* anonymous_var_nameX1400, void** anonymous_var_nameX1401, const struct timespec* anonymous_var_nameX1402);
int CRYPTO_THREAD_run_once(int* once, void (*init)());
int CRYPTO_THREAD_init_local(unsigned int* key, void (*cleanup)(void*));
void* CRYPTO_THREAD_get_local(unsigned int* key);
int CRYPTO_THREAD_set_local(unsigned int* key, void* val);
int CRYPTO_THREAD_cleanup_local(unsigned int* key);
struct __pthread* CRYPTO_THREAD_get_current_id();
int CRYPTO_THREAD_compare_id(struct __pthread* a, struct __pthread* b);
struct ossl_lib_ctx_st* OSSL_LIB_CTX_new();
struct ossl_lib_ctx_st* OSSL_LIB_CTX_new_from_dispatch(const struct ossl_core_handle_st* handle, const struct ossl_dispatch_st* in);
struct ossl_lib_ctx_st* OSSL_LIB_CTX_new_child(const struct ossl_core_handle_st* handle, const struct ossl_dispatch_st* in);
int OSSL_LIB_CTX_load_config(struct ossl_lib_ctx_st* ctx, const char* config_file);
void OSSL_LIB_CTX_free(struct ossl_lib_ctx_st* anonymous_var_nameX1404);
struct ossl_lib_ctx_st* OSSL_LIB_CTX_get0_global_default();
struct ossl_lib_ctx_st* OSSL_LIB_CTX_set0_default(struct ossl_lib_ctx_st* libctx);
void OSSL_sleep(unsigned long  int millis);
int BIO_get_new_index();
void BIO_set_flags(struct bio_st* b, int flags);
int BIO_test_flags(const struct bio_st* b, int flags);
void BIO_clear_flags(struct bio_st* b, int flags);
long (*BIO_get_callback(const struct bio_st* b))(struct bio_st*,int,const char*,int,long,long);
void BIO_set_callback(struct bio_st* b, long (*callback)(struct bio_st*,int,const char*,int,long,long));
long BIO_debug_callback(struct bio_st* bio, int cmd, const char* argp, int argi, long argl, long ret);
long (*BIO_get_callback_ex(const struct bio_st* b))(struct bio_st*,int,const char*,unsigned long  int,int,long,int,unsigned long  int*);
void BIO_set_callback_ex(struct bio_st* b, long (*callback)(struct bio_st*,int,const char*,unsigned long  int,int,long,int,unsigned long  int*));
long BIO_debug_callback_ex(struct bio_st* bio, int oper, const char* argp, unsigned long  int len, int argi, long argl, int ret, unsigned long  int* processed);
char* BIO_get_callback_arg(const struct bio_st* b);
void BIO_set_callback_arg(struct bio_st* b, char* arg);
const char* BIO_method_name(const struct bio_st* b);
int BIO_method_type(const struct bio_st* b);
unsigned long  int BIO_ctrl_pending(struct bio_st* b);
unsigned long  int BIO_ctrl_wpending(struct bio_st* b);
unsigned long  int BIO_ctrl_get_write_guarantee(struct bio_st* b);
unsigned long  int BIO_ctrl_get_read_request(struct bio_st* b);
int BIO_ctrl_reset_read_request(struct bio_st* b);
int BIO_set_ex_data(struct bio_st* bio, int idx, void* data);
void* BIO_get_ex_data(const struct bio_st* bio, int idx);
unsigned long  int BIO_number_read(struct bio_st* bio);
unsigned long  int BIO_number_written(struct bio_st* bio);
int BIO_asn1_set_prefix(struct bio_st* b, int (*prefix)(struct bio_st*,unsigned char**,int*,void*), int (*prefix_free)(struct bio_st*,unsigned char**,int*,void*));
int BIO_asn1_get_prefix(struct bio_st* b, int (*pprefix)(struct bio_st*,unsigned char**,int*,void*), int (*pprefix_free)(struct bio_st*,unsigned char**,int*,void*));
int BIO_asn1_set_suffix(struct bio_st* b, int (*suffix)(struct bio_st*,unsigned char**,int*,void*), int (*suffix_free)(struct bio_st*,unsigned char**,int*,void*));
int BIO_asn1_get_suffix(struct bio_st* b, int (*psuffix)(struct bio_st*,unsigned char**,int*,void*), int (*psuffix_free)(struct bio_st*,unsigned char**,int*,void*));
const struct bio_method_st* BIO_s_file();
struct bio_st* BIO_new_file(const char* filename, const char* mode);
struct bio_st* BIO_new_from_core_bio(struct ossl_lib_ctx_st* libctx, struct ossl_core_bio_st* corebio);
struct bio_st* BIO_new_fp(struct _IO_FILE* stream, int close_flag);
struct bio_st* BIO_new_ex(struct ossl_lib_ctx_st* libctx, const struct bio_method_st* method);
struct bio_st* BIO_new(const struct bio_method_st* type);
int BIO_free(struct bio_st* a);
void BIO_set_data(struct bio_st* a, void* ptr);
void* BIO_get_data(struct bio_st* a);
void BIO_set_init(struct bio_st* a, int init);
int BIO_get_init(struct bio_st* a);
void BIO_set_shutdown(struct bio_st* a, int shut);
int BIO_get_shutdown(struct bio_st* a);
void BIO_vfree(struct bio_st* a);
int BIO_up_ref(struct bio_st* a);
int BIO_read(struct bio_st* b, void* data, int dlen);
int BIO_read_ex(struct bio_st* b, void* data, unsigned long  int dlen, unsigned long  int* readbytes);
int BIO_recvmmsg(struct bio_st* b, struct bio_msg_st* msg, unsigned long  int stride, unsigned long  int num_msg, unsigned long  int flags, unsigned long  int* msgs_processed);
int BIO_gets(struct bio_st* bp, char* buf, int size);
int BIO_get_line(struct bio_st* bio, char* buf, int size);
int BIO_write(struct bio_st* b, const void* data, int dlen);
int BIO_write_ex(struct bio_st* b, const void* data, unsigned long  int dlen, unsigned long  int* written);
int BIO_sendmmsg(struct bio_st* b, struct bio_msg_st* msg, unsigned long  int stride, unsigned long  int num_msg, unsigned long  int flags, unsigned long  int* msgs_processed);
int BIO_get_rpoll_descriptor(struct bio_st* b, struct bio_poll_descriptor_st* desc);
int BIO_get_wpoll_descriptor(struct bio_st* b, struct bio_poll_descriptor_st* desc);
int BIO_puts(struct bio_st* bp, const char* buf);
int BIO_indent(struct bio_st* b, int indent, int max);
long BIO_ctrl(struct bio_st* bp, int cmd, long larg, void* parg);
long BIO_callback_ctrl(struct bio_st* b, int cmd, int (*fp)(struct bio_st*,int,int));
void* BIO_ptr_ctrl(struct bio_st* bp, int cmd, long larg);
long BIO_int_ctrl(struct bio_st* bp, int cmd, long larg, int iarg);
struct bio_st* BIO_push(struct bio_st* b, struct bio_st* append);
struct bio_st* BIO_pop(struct bio_st* b);
void BIO_free_all(struct bio_st* a);
struct bio_st* BIO_find_type(struct bio_st* b, int bio_type);
struct bio_st* BIO_next(struct bio_st* b);
void BIO_set_next(struct bio_st* b, struct bio_st* next);
struct bio_st* BIO_get_retry_BIO(struct bio_st* bio, int* reason);
int BIO_get_retry_reason(struct bio_st* bio);
void BIO_set_retry_reason(struct bio_st* bio, int reason);
struct bio_st* BIO_dup_chain(struct bio_st* in);
int BIO_nread0(struct bio_st* bio, char** buf);
int BIO_nread(struct bio_st* bio, char** buf, int num);
int BIO_nwrite0(struct bio_st* bio, char** buf);
int BIO_nwrite(struct bio_st* bio, char** buf, int num);
const struct bio_method_st* BIO_s_mem();
const struct bio_method_st* BIO_s_dgram_mem();
const struct bio_method_st* BIO_s_secmem();
struct bio_st* BIO_new_mem_buf(const void* buf, int len);
const struct bio_method_st* BIO_s_socket();
const struct bio_method_st* BIO_s_connect();
const struct bio_method_st* BIO_s_accept();
const struct bio_method_st* BIO_s_fd();
const struct bio_method_st* BIO_s_log();
const struct bio_method_st* BIO_s_bio();
const struct bio_method_st* BIO_s_null();
const struct bio_method_st* BIO_f_null();
const struct bio_method_st* BIO_f_buffer();
const struct bio_method_st* BIO_f_readbuffer();
const struct bio_method_st* BIO_f_linebuffer();
const struct bio_method_st* BIO_f_nbio_test();
const struct bio_method_st* BIO_f_prefix();
const struct bio_method_st* BIO_s_core();
const struct bio_method_st* BIO_s_dgram_pair();
const struct bio_method_st* BIO_s_datagram();
int BIO_dgram_non_fatal_error(int error);
struct bio_st* BIO_new_dgram(int fd, int close_flag);
int BIO_sock_should_retry(int i);
int BIO_sock_non_fatal_error(int error);
int BIO_err_is_non_fatal(unsigned int errcode);
int BIO_socket_wait(int fd, int for_read, long max_time);
int BIO_wait(struct bio_st* bio, long max_time, unsigned int nap_milliseconds);
int BIO_do_connect_retry(struct bio_st* bio, int timeout, int nap_milliseconds);
int BIO_fd_should_retry(int i);
int BIO_fd_non_fatal_error(int error);
int BIO_dump_cb(int (*cb)(const void*,unsigned long  int,void*), void* u, const void* s, int len);
int BIO_dump_indent_cb(int (*cb)(const void*,unsigned long  int,void*), void* u, const void* s, int len, int indent);
int BIO_dump(struct bio_st* b, const void* bytes, int len);
int BIO_dump_indent(struct bio_st* b, const void* bytes, int len, int indent);
int BIO_dump_fp(struct _IO_FILE* fp, const void* s, int len);
int BIO_dump_indent_fp(struct _IO_FILE* fp, const void* s, int len, int indent);
int BIO_hex_string(struct bio_st* out, int indent, int width, const void* data, int datalen);
union bio_addr_st* BIO_ADDR_new();
int BIO_ADDR_copy(union bio_addr_st* dst, const union bio_addr_st* src);
union bio_addr_st* BIO_ADDR_dup(const union bio_addr_st* ap);
int BIO_ADDR_rawmake(union bio_addr_st* ap, int family, const void* where, unsigned long  int wherelen, unsigned short int port);
void BIO_ADDR_free(union bio_addr_st* anonymous_var_nameX1408);
void BIO_ADDR_clear(union bio_addr_st* ap);
int BIO_ADDR_family(const union bio_addr_st* ap);
int BIO_ADDR_rawaddress(const union bio_addr_st* ap, void* p, unsigned long  int* l);
unsigned short int BIO_ADDR_rawport(const union bio_addr_st* ap);
char* BIO_ADDR_hostname_string(const union bio_addr_st* ap, int numeric);
char* BIO_ADDR_service_string(const union bio_addr_st* ap, int numeric);
char* BIO_ADDR_path_string(const union bio_addr_st* ap);
const struct bio_addrinfo_st* BIO_ADDRINFO_next(const struct bio_addrinfo_st* bai);
int BIO_ADDRINFO_family(const struct bio_addrinfo_st* bai);
int BIO_ADDRINFO_socktype(const struct bio_addrinfo_st* bai);
int BIO_ADDRINFO_protocol(const struct bio_addrinfo_st* bai);
const union bio_addr_st* BIO_ADDRINFO_address(const struct bio_addrinfo_st* bai);
void BIO_ADDRINFO_free(struct bio_addrinfo_st* bai);
int BIO_parse_hostserv(const char* hostserv, char** host, char** service, enum BIO_hostserv_priorities hostserv_prio);
int BIO_lookup(const char* host, const char* service, enum BIO_lookup_type lookup_type, int family, int socktype, struct bio_addrinfo_st** res);
int BIO_lookup_ex(const char* host, const char* service, int lookup_type, int family, int socktype, int protocol, struct bio_addrinfo_st** res);
int BIO_sock_error(int sock);
int BIO_socket_ioctl(int fd, long type, void* arg);
int BIO_socket_nbio(int fd, int mode);
int BIO_sock_init();
int BIO_set_tcp_ndelay(int sock, int turn_on);
struct hostent* BIO_gethostbyname(const char* name);
int BIO_get_port(const char* str, unsigned short int* port_ptr);
int BIO_get_host_ip(const char* str, unsigned char* ip);
int BIO_get_accept_socket(char* host_port, int mode);
int BIO_accept(int sock, char** ip_port);
int BIO_sock_info(int sock, enum BIO_sock_info_type type, union BIO_sock_info_u* info);
int BIO_socket(int domain, int socktype, int protocol, int options);
int BIO_connect(int sock, const union bio_addr_st* addr, int options);
int BIO_bind(int sock, const union bio_addr_st* addr, int options);
int BIO_listen(int sock, const union bio_addr_st* addr, int options);
int BIO_accept_ex(int accept_sock, union bio_addr_st* addr, int options);
int BIO_closesocket(int sock);
struct bio_st* BIO_new_socket(int sock, int close_flag);
struct bio_st* BIO_new_connect(const char* host_port);
struct bio_st* BIO_new_accept(const char* host_port);
struct bio_st* BIO_new_fd(int fd, int close_flag);
int BIO_new_bio_pair(struct bio_st** bio1, unsigned long  int writebuf1, struct bio_st** bio2, unsigned long  int writebuf2);
int BIO_new_bio_dgram_pair(struct bio_st** bio1, unsigned long  int writebuf1, struct bio_st** bio2, unsigned long  int writebuf2);
void BIO_copy_next_retry(struct bio_st* b);
int BIO_printf(struct bio_st* bio, const char* format, ...);
int BIO_vprintf(struct bio_st* bio, const char* format, va_list args);
int BIO_snprintf(char* buf, unsigned long  int n, const char* format, ...);
int BIO_vsnprintf(char* buf, unsigned long  int n, const char* format, va_list args);
struct bio_method_st* BIO_meth_new(int type, const char* name);
void BIO_meth_free(struct bio_method_st* biom);
int (*BIO_meth_get_write(const struct bio_method_st* _function_pointer_result_var_name_a1))(struct bio_st*,const char*,int);
int (*BIO_meth_get_write_ex(const struct bio_method_st* _function_pointer_result_var_name_a2))(struct bio_st*,const char*,unsigned long  int,unsigned long  int*);
int BIO_meth_set_write(struct bio_method_st* biom, int (*write)(struct bio_st*,const char*,int));
int BIO_meth_set_write_ex(struct bio_method_st* biom, int (*bwrite)(struct bio_st*,const char*,unsigned long  int,unsigned long  int*));
int BIO_meth_set_sendmmsg(struct bio_method_st* biom, int (*f)(struct bio_st*,struct bio_msg_st*,unsigned long  int,unsigned long  int,unsigned long  int,unsigned long  int*));
int (*BIO_meth_get_sendmmsg(const struct bio_method_st* _function_pointer_result_var_name_a3))(struct bio_st*,struct bio_msg_st*,unsigned long  int,unsigned long  int,unsigned long  int,unsigned long  int*);
int (*BIO_meth_get_read(const struct bio_method_st* _function_pointer_result_var_name_a4))(struct bio_st*,char*,int);
int (*BIO_meth_get_read_ex(const struct bio_method_st* _function_pointer_result_var_name_a5))(struct bio_st*,char*,unsigned long  int,unsigned long  int*);
int BIO_meth_set_read(struct bio_method_st* biom, int (*read)(struct bio_st*,char*,int));
int BIO_meth_set_read_ex(struct bio_method_st* biom, int (*bread)(struct bio_st*,char*,unsigned long  int,unsigned long  int*));
int BIO_meth_set_recvmmsg(struct bio_method_st* biom, int (*f)(struct bio_st*,struct bio_msg_st*,unsigned long  int,unsigned long  int,unsigned long  int,unsigned long  int*));
int (*BIO_meth_get_recvmmsg(const struct bio_method_st* _function_pointer_result_var_name_a6))(struct bio_st*,struct bio_msg_st*,unsigned long  int,unsigned long  int,unsigned long  int,unsigned long  int*);
int (*BIO_meth_get_puts(const struct bio_method_st* _function_pointer_result_var_name_a7))(struct bio_st*,const char*);
int BIO_meth_set_puts(struct bio_method_st* biom, int (*puts)(struct bio_st*,const char*));
int (*BIO_meth_get_gets(const struct bio_method_st* _function_pointer_result_var_name_a8))(struct bio_st*,char*,int);
int BIO_meth_set_gets(struct bio_method_st* biom, int (*ossl_gets)(struct bio_st*,char*,int));
long (*BIO_meth_get_ctrl(const struct bio_method_st* _function_pointer_result_var_name_a9))(struct bio_st*,int,long,void*);
int BIO_meth_set_ctrl(struct bio_method_st* biom, long (*ctrl)(struct bio_st*,int,long,void*));
int (*BIO_meth_get_create(const struct bio_method_st* _function_pointer_result_var_name_a10))(struct bio_st*);
int BIO_meth_set_create(struct bio_method_st* biom, int (*create)(struct bio_st*));
int (*BIO_meth_get_destroy(const struct bio_method_st* _function_pointer_result_var_name_a11))(struct bio_st*);
int BIO_meth_set_destroy(struct bio_method_st* biom, int (*destroy)(struct bio_st*));
long (*BIO_meth_get_callback_ctrl(const struct bio_method_st* _function_pointer_result_var_name_a12))(struct bio_st*,int,int (*)(struct bio_st*,int,int));
int BIO_meth_set_callback_ctrl(struct bio_method_st* biom, long (*callback_ctrl)(struct bio_st*,int,int (*)(struct bio_st*,int,int)));
struct buf_mem_st* BUF_MEM_new();
struct buf_mem_st* BUF_MEM_new_ex(unsigned long  int flags);
void BUF_MEM_free(struct buf_mem_st* a);
unsigned long  int BUF_MEM_grow(struct buf_mem_st* str, unsigned long  int len);
unsigned long  int BUF_MEM_grow_clean(struct buf_mem_st* str, unsigned long  int len);
void BUF_reverse(unsigned char* out, const unsigned char* in, unsigned long  int siz);
void BN_set_flags(struct bignum_st* b, int n);
int BN_get_flags(const struct bignum_st* b, int n);
void BN_with_flags(struct bignum_st* dest, const struct bignum_st* b, int flags);
int BN_GENCB_call(struct bn_gencb_st* cb, int a, int b);
struct bn_gencb_st* BN_GENCB_new();
void BN_GENCB_free(struct bn_gencb_st* cb);
void BN_GENCB_set_old(struct bn_gencb_st* gencb, void (*callback)(int,int,void*), void* cb_arg);
void BN_GENCB_set(struct bn_gencb_st* gencb, int (*callback)(int,int,struct bn_gencb_st*), void* cb_arg);
void* BN_GENCB_get_arg(struct bn_gencb_st* cb);
int BN_abs_is_word(const struct bignum_st* a, const unsigned long  int w);
int BN_is_zero(const struct bignum_st* a);
int BN_is_one(const struct bignum_st* a);
int BN_is_word(const struct bignum_st* a, const unsigned long  int w);
int BN_is_odd(const struct bignum_st* a);
void BN_zero_ex(struct bignum_st* a);
const struct bignum_st* BN_value_one();
char* BN_options();
struct bignum_ctx* BN_CTX_new_ex(struct ossl_lib_ctx_st* ctx);
struct bignum_ctx* BN_CTX_new();
struct bignum_ctx* BN_CTX_secure_new_ex(struct ossl_lib_ctx_st* ctx);
struct bignum_ctx* BN_CTX_secure_new();
void BN_CTX_free(struct bignum_ctx* c);
void BN_CTX_start(struct bignum_ctx* ctx);
struct bignum_st* BN_CTX_get(struct bignum_ctx* ctx);
void BN_CTX_end(struct bignum_ctx* ctx);
int BN_rand_ex(struct bignum_st* rnd, int bits, int top, int bottom, unsigned int strength, struct bignum_ctx* ctx);
int BN_rand(struct bignum_st* rnd, int bits, int top, int bottom);
int BN_priv_rand_ex(struct bignum_st* rnd, int bits, int top, int bottom, unsigned int strength, struct bignum_ctx* ctx);
int BN_priv_rand(struct bignum_st* rnd, int bits, int top, int bottom);
int BN_rand_range_ex(struct bignum_st* r, const struct bignum_st* range, unsigned int strength, struct bignum_ctx* ctx);
int BN_rand_range(struct bignum_st* rnd, const struct bignum_st* range);
int BN_priv_rand_range_ex(struct bignum_st* r, const struct bignum_st* range, unsigned int strength, struct bignum_ctx* ctx);
int BN_priv_rand_range(struct bignum_st* rnd, const struct bignum_st* range);
int BN_pseudo_rand(struct bignum_st* rnd, int bits, int top, int bottom);
int BN_pseudo_rand_range(struct bignum_st* rnd, const struct bignum_st* range);
int BN_num_bits(const struct bignum_st* a);
int BN_num_bits_word(unsigned long  int l);
int BN_security_bits(int L, int N);
struct bignum_st* BN_new();
struct bignum_st* BN_secure_new();
void BN_clear_free(struct bignum_st* a);
struct bignum_st* BN_copy(struct bignum_st* a, const struct bignum_st* b);
void BN_swap(struct bignum_st* a, struct bignum_st* b);
struct bignum_st* BN_bin2bn(const unsigned char* s, int len, struct bignum_st* ret);
struct bignum_st* BN_signed_bin2bn(const unsigned char* s, int len, struct bignum_st* ret);
int BN_bn2bin(const struct bignum_st* a, unsigned char* to);
int BN_bn2binpad(const struct bignum_st* a, unsigned char* to, int tolen);
int BN_signed_bn2bin(const struct bignum_st* a, unsigned char* to, int tolen);
struct bignum_st* BN_lebin2bn(const unsigned char* s, int len, struct bignum_st* ret);
struct bignum_st* BN_signed_lebin2bn(const unsigned char* s, int len, struct bignum_st* ret);
int BN_bn2lebinpad(const struct bignum_st* a, unsigned char* to, int tolen);
int BN_signed_bn2lebin(const struct bignum_st* a, unsigned char* to, int tolen);
struct bignum_st* BN_native2bn(const unsigned char* s, int len, struct bignum_st* ret);
struct bignum_st* BN_signed_native2bn(const unsigned char* s, int len, struct bignum_st* ret);
int BN_bn2nativepad(const struct bignum_st* a, unsigned char* to, int tolen);
int BN_signed_bn2native(const struct bignum_st* a, unsigned char* to, int tolen);
struct bignum_st* BN_mpi2bn(const unsigned char* s, int len, struct bignum_st* ret);
int BN_bn2mpi(const struct bignum_st* a, unsigned char* to);
int BN_sub(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* b);
int BN_usub(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* b);
int BN_uadd(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* b);
int BN_add(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* b);
int BN_mul(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* b, struct bignum_ctx* ctx);
int BN_sqr(struct bignum_st* r, const struct bignum_st* a, struct bignum_ctx* ctx);
void BN_set_negative(struct bignum_st* b, int n);
int BN_is_negative(const struct bignum_st* b);
int BN_div(struct bignum_st* dv, struct bignum_st* rem, const struct bignum_st* m, const struct bignum_st* d, struct bignum_ctx* ctx);
int BN_nnmod(struct bignum_st* r, const struct bignum_st* m, const struct bignum_st* d, struct bignum_ctx* ctx);
int BN_mod_add(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* b, const struct bignum_st* m, struct bignum_ctx* ctx);
int BN_mod_add_quick(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* b, const struct bignum_st* m);
int BN_mod_sub(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* b, const struct bignum_st* m, struct bignum_ctx* ctx);
int BN_mod_sub_quick(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* b, const struct bignum_st* m);
int BN_mod_mul(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* b, const struct bignum_st* m, struct bignum_ctx* ctx);
int BN_mod_sqr(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* m, struct bignum_ctx* ctx);
int BN_mod_lshift1(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* m, struct bignum_ctx* ctx);
int BN_mod_lshift1_quick(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* m);
int BN_mod_lshift(struct bignum_st* r, const struct bignum_st* a, int n, const struct bignum_st* m, struct bignum_ctx* ctx);
int BN_mod_lshift_quick(struct bignum_st* r, const struct bignum_st* a, int n, const struct bignum_st* m);
unsigned long  int BN_mod_word(const struct bignum_st* a, unsigned long  int w);
unsigned long  int BN_div_word(struct bignum_st* a, unsigned long  int w);
int BN_mul_word(struct bignum_st* a, unsigned long  int w);
int BN_add_word(struct bignum_st* a, unsigned long  int w);
int BN_sub_word(struct bignum_st* a, unsigned long  int w);
int BN_set_word(struct bignum_st* a, unsigned long  int w);
unsigned long  int BN_get_word(const struct bignum_st* a);
int BN_cmp(const struct bignum_st* a, const struct bignum_st* b);
void BN_free(struct bignum_st* a);
int BN_is_bit_set(const struct bignum_st* a, int n);
int BN_lshift(struct bignum_st* r, const struct bignum_st* a, int n);
int BN_lshift1(struct bignum_st* r, const struct bignum_st* a);
int BN_exp(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* p, struct bignum_ctx* ctx);
int BN_mod_exp(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* p, const struct bignum_st* m, struct bignum_ctx* ctx);
int BN_mod_exp_mont(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* p, const struct bignum_st* m, struct bignum_ctx* ctx, struct bn_mont_ctx_st* m_ctx);
int BN_mod_exp_mont_consttime(struct bignum_st* rr, const struct bignum_st* a, const struct bignum_st* p, const struct bignum_st* m, struct bignum_ctx* ctx, struct bn_mont_ctx_st* in_mont);
int BN_mod_exp_mont_word(struct bignum_st* r, unsigned long  int a, const struct bignum_st* p, const struct bignum_st* m, struct bignum_ctx* ctx, struct bn_mont_ctx_st* m_ctx);
int BN_mod_exp2_mont(struct bignum_st* r, const struct bignum_st* a1, const struct bignum_st* p1, const struct bignum_st* a2, const struct bignum_st* p2, const struct bignum_st* m, struct bignum_ctx* ctx, struct bn_mont_ctx_st* m_ctx);
int BN_mod_exp_simple(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* p, const struct bignum_st* m, struct bignum_ctx* ctx);
int BN_mod_exp_mont_consttime_x2(struct bignum_st* rr1, const struct bignum_st* a1, const struct bignum_st* p1, const struct bignum_st* m1, struct bn_mont_ctx_st* in_mont1, struct bignum_st* rr2, const struct bignum_st* a2, const struct bignum_st* p2, const struct bignum_st* m2, struct bn_mont_ctx_st* in_mont2, struct bignum_ctx* ctx);
int BN_mask_bits(struct bignum_st* a, int n);
int BN_print_fp(struct _IO_FILE* fp, const struct bignum_st* a);
int BN_print(struct bio_st* bio, const struct bignum_st* a);
int BN_reciprocal(struct bignum_st* r, const struct bignum_st* m, int len, struct bignum_ctx* ctx);
int BN_rshift(struct bignum_st* r, const struct bignum_st* a, int n);
int BN_rshift1(struct bignum_st* r, const struct bignum_st* a);
void BN_clear(struct bignum_st* a);
struct bignum_st* BN_dup(const struct bignum_st* a);
int BN_ucmp(const struct bignum_st* a, const struct bignum_st* b);
int BN_set_bit(struct bignum_st* a, int n);
int BN_clear_bit(struct bignum_st* a, int n);
char* BN_bn2hex(const struct bignum_st* a);
char* BN_bn2dec(const struct bignum_st* a);
int BN_hex2bn(struct bignum_st** a, const char* str);
int BN_dec2bn(struct bignum_st** a, const char* str);
int BN_asc2bn(struct bignum_st** a, const char* str);
int BN_gcd(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* b, struct bignum_ctx* ctx);
int BN_kronecker(const struct bignum_st* a, const struct bignum_st* b, struct bignum_ctx* ctx);
int BN_are_coprime(struct bignum_st* a, const struct bignum_st* b, struct bignum_ctx* ctx);
struct bignum_st* BN_mod_inverse(struct bignum_st* ret, const struct bignum_st* a, const struct bignum_st* n, struct bignum_ctx* ctx);
struct bignum_st* BN_mod_sqrt(struct bignum_st* ret, const struct bignum_st* a, const struct bignum_st* n, struct bignum_ctx* ctx);
void BN_consttime_swap(unsigned long  int swap, struct bignum_st* a, struct bignum_st* b, int nwords);
struct bignum_st* BN_generate_prime(struct bignum_st* ret, int bits, int safe, const struct bignum_st* add, const struct bignum_st* rem, void (*callback)(int,int,void*), void* cb_arg);
int BN_is_prime(const struct bignum_st* p, int nchecks, void (*callback)(int,int,void*), struct bignum_ctx* ctx, void* cb_arg);
int BN_is_prime_fasttest(const struct bignum_st* p, int nchecks, void (*callback)(int,int,void*), struct bignum_ctx* ctx, void* cb_arg, int do_trial_division);
int BN_is_prime_ex(const struct bignum_st* p, int nchecks, struct bignum_ctx* ctx, struct bn_gencb_st* cb);
int BN_is_prime_fasttest_ex(const struct bignum_st* p, int nchecks, struct bignum_ctx* ctx, int do_trial_division, struct bn_gencb_st* cb);
int BN_generate_prime_ex2(struct bignum_st* ret, int bits, int safe, const struct bignum_st* add, const struct bignum_st* rem, struct bn_gencb_st* cb, struct bignum_ctx* ctx);
int BN_generate_prime_ex(struct bignum_st* ret, int bits, int safe, const struct bignum_st* add, const struct bignum_st* rem, struct bn_gencb_st* cb);
int BN_check_prime(const struct bignum_st* p, struct bignum_ctx* ctx, struct bn_gencb_st* cb);
int BN_X931_generate_Xpq(struct bignum_st* Xp, struct bignum_st* Xq, int nbits, struct bignum_ctx* ctx);
int BN_X931_derive_prime_ex(struct bignum_st* p, struct bignum_st* p1, struct bignum_st* p2, const struct bignum_st* Xp, const struct bignum_st* Xp1, const struct bignum_st* Xp2, const struct bignum_st* e, struct bignum_ctx* ctx, struct bn_gencb_st* cb);
int BN_X931_generate_prime_ex(struct bignum_st* p, struct bignum_st* p1, struct bignum_st* p2, struct bignum_st* Xp1, struct bignum_st* Xp2, const struct bignum_st* Xp, const struct bignum_st* e, struct bignum_ctx* ctx, struct bn_gencb_st* cb);
struct bn_mont_ctx_st* BN_MONT_CTX_new();
int BN_mod_mul_montgomery(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* b, struct bn_mont_ctx_st* mont, struct bignum_ctx* ctx);
int BN_to_montgomery(struct bignum_st* r, const struct bignum_st* a, struct bn_mont_ctx_st* mont, struct bignum_ctx* ctx);
int BN_from_montgomery(struct bignum_st* r, const struct bignum_st* a, struct bn_mont_ctx_st* mont, struct bignum_ctx* ctx);
void BN_MONT_CTX_free(struct bn_mont_ctx_st* mont);
int BN_MONT_CTX_set(struct bn_mont_ctx_st* mont, const struct bignum_st* mod, struct bignum_ctx* ctx);
struct bn_mont_ctx_st* BN_MONT_CTX_copy(struct bn_mont_ctx_st* to, struct bn_mont_ctx_st* from);
struct bn_mont_ctx_st* BN_MONT_CTX_set_locked(struct bn_mont_ctx_st** pmont, void* lock, const struct bignum_st* mod, struct bignum_ctx* ctx);
struct bn_blinding_st* BN_BLINDING_new(const struct bignum_st* A, const struct bignum_st* Ai, struct bignum_st* mod);
void BN_BLINDING_free(struct bn_blinding_st* b);
int BN_BLINDING_update(struct bn_blinding_st* b, struct bignum_ctx* ctx);
int BN_BLINDING_convert(struct bignum_st* n, struct bn_blinding_st* b, struct bignum_ctx* ctx);
int BN_BLINDING_invert(struct bignum_st* n, struct bn_blinding_st* b, struct bignum_ctx* ctx);
int BN_BLINDING_convert_ex(struct bignum_st* n, struct bignum_st* r, struct bn_blinding_st* b, struct bignum_ctx* anonymous_var_nameX1465);
int BN_BLINDING_invert_ex(struct bignum_st* n, const struct bignum_st* r, struct bn_blinding_st* b, struct bignum_ctx* anonymous_var_nameX1466);
int BN_BLINDING_is_current_thread(struct bn_blinding_st* b);
void BN_BLINDING_set_current_thread(struct bn_blinding_st* b);
int BN_BLINDING_lock(struct bn_blinding_st* b);
int BN_BLINDING_unlock(struct bn_blinding_st* b);
unsigned long  int BN_BLINDING_get_flags(const struct bn_blinding_st* anonymous_var_nameX1467);
void BN_BLINDING_set_flags(struct bn_blinding_st* anonymous_var_nameX1468, unsigned long  int anonymous_var_nameX1469);
struct bn_blinding_st* BN_BLINDING_create_param(struct bn_blinding_st* b, const struct bignum_st* e, struct bignum_st* m, struct bignum_ctx* ctx, int (*bn_mod_exp)(struct bignum_st*,const struct bignum_st*,const struct bignum_st*,const struct bignum_st*,struct bignum_ctx*,struct bn_mont_ctx_st*), struct bn_mont_ctx_st* m_ctx);
void BN_set_params(int mul, int high, int low, int mont);
int BN_get_params(int which);
struct bn_recp_ctx_st* BN_RECP_CTX_new();
void BN_RECP_CTX_free(struct bn_recp_ctx_st* recp);
int BN_RECP_CTX_set(struct bn_recp_ctx_st* recp, const struct bignum_st* rdiv, struct bignum_ctx* ctx);
int BN_mod_mul_reciprocal(struct bignum_st* r, const struct bignum_st* x, const struct bignum_st* y, struct bn_recp_ctx_st* recp, struct bignum_ctx* ctx);
int BN_mod_exp_recp(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* p, const struct bignum_st* m, struct bignum_ctx* ctx);
int BN_div_recp(struct bignum_st* dv, struct bignum_st* rem, const struct bignum_st* m, struct bn_recp_ctx_st* recp, struct bignum_ctx* ctx);
int BN_nist_mod_192(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* p, struct bignum_ctx* ctx);
int BN_nist_mod_224(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* p, struct bignum_ctx* ctx);
int BN_nist_mod_256(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* p, struct bignum_ctx* ctx);
int BN_nist_mod_384(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* p, struct bignum_ctx* ctx);
int BN_nist_mod_521(struct bignum_st* r, const struct bignum_st* a, const struct bignum_st* p, struct bignum_ctx* ctx);
const struct bignum_st* BN_get0_nist_prime_192();
const struct bignum_st* BN_get0_nist_prime_224();
const struct bignum_st* BN_get0_nist_prime_256();
const struct bignum_st* BN_get0_nist_prime_384();
const struct bignum_st* BN_get0_nist_prime_521();
int (*BN_nist_mod_func(const struct bignum_st* _function_pointer_result_var_name_a13))(struct bignum_st*,const struct bignum_st*,const struct bignum_st*,struct bignum_ctx*);
int BN_generate_dsa_nonce(struct bignum_st* out, const struct bignum_st* range, const struct bignum_st* priv, const unsigned char* message, unsigned long  int message_len, struct bignum_ctx* ctx);
struct bignum_st* BN_get_rfc2409_prime_768(struct bignum_st* bn);
struct bignum_st* BN_get_rfc2409_prime_1024(struct bignum_st* bn);
struct bignum_st* BN_get_rfc3526_prime_1536(struct bignum_st* bn);
struct bignum_st* BN_get_rfc3526_prime_2048(struct bignum_st* bn);
struct bignum_st* BN_get_rfc3526_prime_3072(struct bignum_st* bn);
struct bignum_st* BN_get_rfc3526_prime_4096(struct bignum_st* bn);
struct bignum_st* BN_get_rfc3526_prime_6144(struct bignum_st* bn);
struct bignum_st* BN_get_rfc3526_prime_8192(struct bignum_st* bn);
int BN_bntest_rand(struct bignum_st* rnd, int bits, int top, int bottom);
struct ossl_param_st* OSSL_PARAM_locate(struct ossl_param_st* p, const char* key);
const struct ossl_param_st* OSSL_PARAM_locate_const(const struct ossl_param_st* p, const char* key);
struct ossl_param_st OSSL_PARAM_construct_int(const char* key, int* buf);
struct ossl_param_st OSSL_PARAM_construct_uint(const char* key, unsigned int* buf);
struct ossl_param_st OSSL_PARAM_construct_long(const char* key, long  int* buf);
struct ossl_param_st OSSL_PARAM_construct_ulong(const char* key, unsigned long  int* buf);
struct ossl_param_st OSSL_PARAM_construct_int32(const char* key, int* buf);
struct ossl_param_st OSSL_PARAM_construct_uint32(const char* key, unsigned int* buf);
struct ossl_param_st OSSL_PARAM_construct_int64(const char* key, long* buf);
struct ossl_param_st OSSL_PARAM_construct_uint64(const char* key, unsigned long  int* buf);
struct ossl_param_st OSSL_PARAM_construct_size_t(const char* key, unsigned long  int* buf);
struct ossl_param_st OSSL_PARAM_construct_time_t(const char* key, long* buf);
struct ossl_param_st OSSL_PARAM_construct_BN(const char* key, unsigned char* buf, unsigned long  int bsize);
struct ossl_param_st OSSL_PARAM_construct_double(const char* key, double* buf);
struct ossl_param_st OSSL_PARAM_construct_utf8_string(const char* key, char* buf, unsigned long  int bsize);
struct ossl_param_st OSSL_PARAM_construct_utf8_ptr(const char* key, char** buf, unsigned long  int bsize);
struct ossl_param_st OSSL_PARAM_construct_octet_string(const char* key, void* buf, unsigned long  int bsize);
struct ossl_param_st OSSL_PARAM_construct_octet_ptr(const char* key, void** buf, unsigned long  int bsize);
struct ossl_param_st OSSL_PARAM_construct_end();
int OSSL_PARAM_allocate_from_text(struct ossl_param_st* to, const struct ossl_param_st* paramdefs, const char* key, const char* value, unsigned long  int value_n, int* found);
int OSSL_PARAM_get_int(const struct ossl_param_st* p, int* val);
int OSSL_PARAM_get_uint(const struct ossl_param_st* p, unsigned int* val);
int OSSL_PARAM_get_long(const struct ossl_param_st* p, long  int* val);
int OSSL_PARAM_get_ulong(const struct ossl_param_st* p, unsigned long  int* val);
int OSSL_PARAM_get_int32(const struct ossl_param_st* p, int* val);
int OSSL_PARAM_get_uint32(const struct ossl_param_st* p, unsigned int* val);
int OSSL_PARAM_get_int64(const struct ossl_param_st* p, long* val);
int OSSL_PARAM_get_uint64(const struct ossl_param_st* p, unsigned long  int* val);
int OSSL_PARAM_get_size_t(const struct ossl_param_st* p, unsigned long  int* val);
int OSSL_PARAM_get_time_t(const struct ossl_param_st* p, long* val);
int OSSL_PARAM_set_int(struct ossl_param_st* p, int val);
int OSSL_PARAM_set_uint(struct ossl_param_st* p, unsigned int val);
int OSSL_PARAM_set_long(struct ossl_param_st* p, long  int val);
int OSSL_PARAM_set_ulong(struct ossl_param_st* p, unsigned long  int val);
int OSSL_PARAM_set_int32(struct ossl_param_st* p, int val);
int OSSL_PARAM_set_uint32(struct ossl_param_st* p, unsigned int val);
int OSSL_PARAM_set_int64(struct ossl_param_st* p, long val);
int OSSL_PARAM_set_uint64(struct ossl_param_st* p, unsigned long  int val);
int OSSL_PARAM_set_size_t(struct ossl_param_st* p, unsigned long  int val);
int OSSL_PARAM_set_time_t(struct ossl_param_st* p, long val);
int OSSL_PARAM_get_double(const struct ossl_param_st* p, double* val);
int OSSL_PARAM_set_double(struct ossl_param_st* p, double val);
int OSSL_PARAM_get_BN(const struct ossl_param_st* p, struct bignum_st** val);
int OSSL_PARAM_set_BN(struct ossl_param_st* p, const struct bignum_st* val);
int OSSL_PARAM_get_utf8_string(const struct ossl_param_st* p, char** val, unsigned long  int max_len);
int OSSL_PARAM_set_utf8_string(struct ossl_param_st* p, const char* val);
int OSSL_PARAM_get_octet_string(const struct ossl_param_st* p, void** val, unsigned long  int max_len, unsigned long  int* used_len);
int OSSL_PARAM_set_octet_string(struct ossl_param_st* p, const void* val, unsigned long  int len);
int OSSL_PARAM_get_utf8_ptr(const struct ossl_param_st* p, const char** val);
int OSSL_PARAM_set_utf8_ptr(struct ossl_param_st* p, const char* val);
int OSSL_PARAM_get_octet_ptr(const struct ossl_param_st* p, const void** val, unsigned long  int* used_len);
int OSSL_PARAM_set_octet_ptr(struct ossl_param_st* p, const void* val, unsigned long  int used_len);
int OSSL_PARAM_get_utf8_string_ptr(const struct ossl_param_st* p, const char** val);
int OSSL_PARAM_get_octet_string_ptr(const struct ossl_param_st* p, const void** val, unsigned long  int* used_len);
int OSSL_PARAM_modified(const struct ossl_param_st* p);
void OSSL_PARAM_set_all_unmodified(struct ossl_param_st* p);
struct ossl_param_st* OSSL_PARAM_dup(const struct ossl_param_st* p);
struct ossl_param_st* OSSL_PARAM_merge(const struct ossl_param_st* p1, const struct ossl_param_st* p2);
void OSSL_PARAM_free(struct ossl_param_st* p);
struct stack_st_ASN1_TYPE* d2i_ASN1_SEQUENCE_ANY(struct stack_st_ASN1_TYPE** a, const unsigned char** in, long len);
int i2d_ASN1_SEQUENCE_ANY(const struct stack_st_ASN1_TYPE* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_SEQUENCE_ANY_it();
struct stack_st_ASN1_TYPE* d2i_ASN1_SET_ANY(struct stack_st_ASN1_TYPE** a, const unsigned char** in, long len);
int i2d_ASN1_SET_ANY(const struct stack_st_ASN1_TYPE* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_SET_ANY_it();
struct asn1_type_st* ASN1_TYPE_new();
void ASN1_TYPE_free(struct asn1_type_st* a);
struct asn1_type_st* d2i_ASN1_TYPE(struct asn1_type_st** a, const unsigned char** in, long len);
int i2d_ASN1_TYPE(const struct asn1_type_st* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_ANY_it();
int ASN1_TYPE_get(const struct asn1_type_st* a);
void ASN1_TYPE_set(struct asn1_type_st* a, int type, void* value);
int ASN1_TYPE_set1(struct asn1_type_st* a, int type, const void* value);
int ASN1_TYPE_cmp(const struct asn1_type_st* a, const struct asn1_type_st* b);
struct asn1_type_st* ASN1_TYPE_pack_sequence(const struct ASN1_ITEM_st* it, void* s, struct asn1_type_st** t);
void* ASN1_TYPE_unpack_sequence(const struct ASN1_ITEM_st* it, const struct asn1_type_st* t);
struct asn1_object_st* ASN1_OBJECT_new();
void ASN1_OBJECT_free(struct asn1_object_st* a);
struct asn1_object_st* d2i_ASN1_OBJECT(struct asn1_object_st** a, const unsigned char** in, long len);
int i2d_ASN1_OBJECT(const struct asn1_object_st* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_OBJECT_it();
struct asn1_string_st* ASN1_STRING_new();
void ASN1_STRING_free(struct asn1_string_st* a);
void ASN1_STRING_clear_free(struct asn1_string_st* a);
int ASN1_STRING_copy(struct asn1_string_st* dst, const struct asn1_string_st* str);
struct asn1_string_st* ASN1_STRING_dup(const struct asn1_string_st* a);
struct asn1_string_st* ASN1_STRING_type_new(int type);
int ASN1_STRING_cmp(const struct asn1_string_st* a, const struct asn1_string_st* b);
int ASN1_STRING_set(struct asn1_string_st* str, const void* data, int len);
void ASN1_STRING_set0(struct asn1_string_st* str, void* data, int len);
int ASN1_STRING_length(const struct asn1_string_st* x);
void ASN1_STRING_length_set(struct asn1_string_st* x, int n);
int ASN1_STRING_type(const struct asn1_string_st* x);
unsigned char* ASN1_STRING_data(struct asn1_string_st* x);
const unsigned char* ASN1_STRING_get0_data(const struct asn1_string_st* x);
struct asn1_string_st* ASN1_BIT_STRING_new();
void ASN1_BIT_STRING_free(struct asn1_string_st* a);
struct asn1_string_st* d2i_ASN1_BIT_STRING(struct asn1_string_st** a, const unsigned char** in, long len);
int i2d_ASN1_BIT_STRING(const struct asn1_string_st* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_BIT_STRING_it();
int ASN1_BIT_STRING_set(struct asn1_string_st* a, unsigned char* d, int length);
int ASN1_BIT_STRING_set_bit(struct asn1_string_st* a, int n, int value);
int ASN1_BIT_STRING_get_bit(const struct asn1_string_st* a, int n);
int ASN1_BIT_STRING_check(const struct asn1_string_st* a, const unsigned char* flags, int flags_len);
int ASN1_BIT_STRING_name_print(struct bio_st* out, struct asn1_string_st* bs, struct BIT_STRING_BITNAME_st* tbl, int indent);
int ASN1_BIT_STRING_num_asc(const char* name, struct BIT_STRING_BITNAME_st* tbl);
int ASN1_BIT_STRING_set_asc(struct asn1_string_st* bs, const char* name, int value, struct BIT_STRING_BITNAME_st* tbl);
struct asn1_string_st* ASN1_INTEGER_new();
void ASN1_INTEGER_free(struct asn1_string_st* a);
struct asn1_string_st* d2i_ASN1_INTEGER(struct asn1_string_st** a, const unsigned char** in, long len);
int i2d_ASN1_INTEGER(const struct asn1_string_st* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_INTEGER_it();
struct asn1_string_st* d2i_ASN1_UINTEGER(struct asn1_string_st** a, const unsigned char** pp, long length);
struct asn1_string_st* ASN1_INTEGER_dup(const struct asn1_string_st* a);
int ASN1_INTEGER_cmp(const struct asn1_string_st* x, const struct asn1_string_st* y);
struct asn1_string_st* ASN1_ENUMERATED_new();
void ASN1_ENUMERATED_free(struct asn1_string_st* a);
struct asn1_string_st* d2i_ASN1_ENUMERATED(struct asn1_string_st** a, const unsigned char** in, long len);
int i2d_ASN1_ENUMERATED(const struct asn1_string_st* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_ENUMERATED_it();
int ASN1_UTCTIME_check(const struct asn1_string_st* a);
struct asn1_string_st* ASN1_UTCTIME_set(struct asn1_string_st* s, long t);
struct asn1_string_st* ASN1_UTCTIME_adj(struct asn1_string_st* s, long t, int offset_day, long offset_sec);
int ASN1_UTCTIME_set_string(struct asn1_string_st* s, const char* str);
int ASN1_UTCTIME_cmp_time_t(const struct asn1_string_st* s, long t);
int ASN1_GENERALIZEDTIME_check(const struct asn1_string_st* a);
struct asn1_string_st* ASN1_GENERALIZEDTIME_set(struct asn1_string_st* s, long t);
struct asn1_string_st* ASN1_GENERALIZEDTIME_adj(struct asn1_string_st* s, long t, int offset_day, long offset_sec);
int ASN1_GENERALIZEDTIME_set_string(struct asn1_string_st* s, const char* str);
int ASN1_TIME_diff(int* pday, int* psec, const struct asn1_string_st* from, const struct asn1_string_st* to);
struct asn1_string_st* ASN1_OCTET_STRING_new();
void ASN1_OCTET_STRING_free(struct asn1_string_st* a);
struct asn1_string_st* d2i_ASN1_OCTET_STRING(struct asn1_string_st** a, const unsigned char** in, long len);
int i2d_ASN1_OCTET_STRING(const struct asn1_string_st* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_OCTET_STRING_it();
struct asn1_string_st* ASN1_OCTET_STRING_dup(const struct asn1_string_st* a);
int ASN1_OCTET_STRING_cmp(const struct asn1_string_st* a, const struct asn1_string_st* b);
int ASN1_OCTET_STRING_set(struct asn1_string_st* str, const unsigned char* data, int len);
struct asn1_string_st* ASN1_VISIBLESTRING_new();
void ASN1_VISIBLESTRING_free(struct asn1_string_st* a);
struct asn1_string_st* d2i_ASN1_VISIBLESTRING(struct asn1_string_st** a, const unsigned char** in, long len);
int i2d_ASN1_VISIBLESTRING(const struct asn1_string_st* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_VISIBLESTRING_it();
struct asn1_string_st* ASN1_UNIVERSALSTRING_new();
void ASN1_UNIVERSALSTRING_free(struct asn1_string_st* a);
struct asn1_string_st* d2i_ASN1_UNIVERSALSTRING(struct asn1_string_st** a, const unsigned char** in, long len);
int i2d_ASN1_UNIVERSALSTRING(const struct asn1_string_st* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_UNIVERSALSTRING_it();
struct asn1_string_st* ASN1_UTF8STRING_new();
void ASN1_UTF8STRING_free(struct asn1_string_st* a);
struct asn1_string_st* d2i_ASN1_UTF8STRING(struct asn1_string_st** a, const unsigned char** in, long len);
int i2d_ASN1_UTF8STRING(const struct asn1_string_st* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_UTF8STRING_it();
int* ASN1_NULL_new();
void ASN1_NULL_free(int* a);
int* d2i_ASN1_NULL(int** a, const unsigned char** in, long len);
int i2d_ASN1_NULL(const int* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_NULL_it();
struct asn1_string_st* ASN1_BMPSTRING_new();
void ASN1_BMPSTRING_free(struct asn1_string_st* a);
struct asn1_string_st* d2i_ASN1_BMPSTRING(struct asn1_string_st** a, const unsigned char** in, long len);
int i2d_ASN1_BMPSTRING(const struct asn1_string_st* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_BMPSTRING_it();
int UTF8_getc(const unsigned char* str, int len, unsigned long  int* val);
int UTF8_putc(unsigned char* str, int len, unsigned long  int value);
struct asn1_string_st* ASN1_PRINTABLE_new();
void ASN1_PRINTABLE_free(struct asn1_string_st* a);
struct asn1_string_st* d2i_ASN1_PRINTABLE(struct asn1_string_st** a, const unsigned char** in, long len);
int i2d_ASN1_PRINTABLE(const struct asn1_string_st* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_PRINTABLE_it();
struct asn1_string_st* DIRECTORYSTRING_new();
void DIRECTORYSTRING_free(struct asn1_string_st* a);
struct asn1_string_st* d2i_DIRECTORYSTRING(struct asn1_string_st** a, const unsigned char** in, long len);
int i2d_DIRECTORYSTRING(const struct asn1_string_st* a, unsigned char** out);
const struct ASN1_ITEM_st* DIRECTORYSTRING_it();
struct asn1_string_st* DISPLAYTEXT_new();
void DISPLAYTEXT_free(struct asn1_string_st* a);
struct asn1_string_st* d2i_DISPLAYTEXT(struct asn1_string_st** a, const unsigned char** in, long len);
int i2d_DISPLAYTEXT(const struct asn1_string_st* a, unsigned char** out);
const struct ASN1_ITEM_st* DISPLAYTEXT_it();
struct asn1_string_st* ASN1_PRINTABLESTRING_new();
void ASN1_PRINTABLESTRING_free(struct asn1_string_st* a);
struct asn1_string_st* d2i_ASN1_PRINTABLESTRING(struct asn1_string_st** a, const unsigned char** in, long len);
int i2d_ASN1_PRINTABLESTRING(const struct asn1_string_st* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_PRINTABLESTRING_it();
struct asn1_string_st* ASN1_T61STRING_new();
void ASN1_T61STRING_free(struct asn1_string_st* a);
struct asn1_string_st* d2i_ASN1_T61STRING(struct asn1_string_st** a, const unsigned char** in, long len);
int i2d_ASN1_T61STRING(const struct asn1_string_st* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_T61STRING_it();
struct asn1_string_st* ASN1_IA5STRING_new();
void ASN1_IA5STRING_free(struct asn1_string_st* a);
struct asn1_string_st* d2i_ASN1_IA5STRING(struct asn1_string_st** a, const unsigned char** in, long len);
int i2d_ASN1_IA5STRING(const struct asn1_string_st* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_IA5STRING_it();
struct asn1_string_st* ASN1_GENERALSTRING_new();
void ASN1_GENERALSTRING_free(struct asn1_string_st* a);
struct asn1_string_st* d2i_ASN1_GENERALSTRING(struct asn1_string_st** a, const unsigned char** in, long len);
int i2d_ASN1_GENERALSTRING(const struct asn1_string_st* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_GENERALSTRING_it();
struct asn1_string_st* ASN1_UTCTIME_new();
void ASN1_UTCTIME_free(struct asn1_string_st* a);
struct asn1_string_st* d2i_ASN1_UTCTIME(struct asn1_string_st** a, const unsigned char** in, long len);
int i2d_ASN1_UTCTIME(const struct asn1_string_st* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_UTCTIME_it();
struct asn1_string_st* ASN1_GENERALIZEDTIME_new();
void ASN1_GENERALIZEDTIME_free(struct asn1_string_st* a);
struct asn1_string_st* d2i_ASN1_GENERALIZEDTIME(struct asn1_string_st** a, const unsigned char** in, long len);
int i2d_ASN1_GENERALIZEDTIME(const struct asn1_string_st* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_GENERALIZEDTIME_it();
struct asn1_string_st* ASN1_TIME_new();
void ASN1_TIME_free(struct asn1_string_st* a);
struct asn1_string_st* d2i_ASN1_TIME(struct asn1_string_st** a, const unsigned char** in, long len);
int i2d_ASN1_TIME(const struct asn1_string_st* a, unsigned char** out);
const struct ASN1_ITEM_st* ASN1_TIME_it();
struct asn1_string_st* ASN1_TIME_dup(const struct asn1_string_st* a);
struct asn1_string_st* ASN1_UTCTIME_dup(const struct asn1_string_st* a);
struct asn1_string_st* ASN1_GENERALIZEDTIME_dup(const struct asn1_string_st* a);
const struct ASN1_ITEM_st* ASN1_OCTET_STRING_NDEF_it();
struct asn1_string_st* ASN1_TIME_set(struct asn1_string_st* s, long t);
struct asn1_string_st* ASN1_TIME_adj(struct asn1_string_st* s, long t, int offset_day, long offset_sec);
int ASN1_TIME_check(const struct asn1_string_st* t);
struct asn1_string_st* ASN1_TIME_to_generalizedtime(const struct asn1_string_st* t, struct asn1_string_st** out);
int ASN1_TIME_set_string(struct asn1_string_st* s, const char* str);
int ASN1_TIME_set_string_X509(struct asn1_string_st* s, const char* str);
int ASN1_TIME_to_tm(const struct asn1_string_st* s, struct tm* tm);
int ASN1_TIME_normalize(struct asn1_string_st* s);
int ASN1_TIME_cmp_time_t(const struct asn1_string_st* s, long t);
int ASN1_TIME_compare(const struct asn1_string_st* a, const struct asn1_string_st* b);
int i2a_ASN1_INTEGER(struct bio_st* bp, const struct asn1_string_st* a);
int a2i_ASN1_INTEGER(struct bio_st* bp, struct asn1_string_st* bs, char* buf, int size);
int i2a_ASN1_ENUMERATED(struct bio_st* bp, const struct asn1_string_st* a);
int a2i_ASN1_ENUMERATED(struct bio_st* bp, struct asn1_string_st* bs, char* buf, int size);
int i2a_ASN1_OBJECT(struct bio_st* bp, const struct asn1_object_st* a);
int a2i_ASN1_STRING(struct bio_st* bp, struct asn1_string_st* bs, char* buf, int size);
int i2a_ASN1_STRING(struct bio_st* bp, const struct asn1_string_st* a, int type);
int i2t_ASN1_OBJECT(char* buf, int buf_len, const struct asn1_object_st* a);
int a2d_ASN1_OBJECT(unsigned char* out, int olen, const char* buf, int num);
struct asn1_object_st* ASN1_OBJECT_create(int nid, unsigned char* data, int len, const char* sn, const char* ln);
int ASN1_INTEGER_get_int64(long* pr, const struct asn1_string_st* a);
int ASN1_INTEGER_set_int64(struct asn1_string_st* a, long r);
int ASN1_INTEGER_get_uint64(unsigned long  int* pr, const struct asn1_string_st* a);
int ASN1_INTEGER_set_uint64(struct asn1_string_st* a, unsigned long  int r);
int ASN1_INTEGER_set(struct asn1_string_st* a, long v);
long ASN1_INTEGER_get(const struct asn1_string_st* a);
struct asn1_string_st* BN_to_ASN1_INTEGER(const struct bignum_st* bn, struct asn1_string_st* ai);
struct bignum_st* ASN1_INTEGER_to_BN(const struct asn1_string_st* ai, struct bignum_st* bn);
int ASN1_ENUMERATED_get_int64(long* pr, const struct asn1_string_st* a);
int ASN1_ENUMERATED_set_int64(struct asn1_string_st* a, long r);
int ASN1_ENUMERATED_set(struct asn1_string_st* a, long v);
long ASN1_ENUMERATED_get(const struct asn1_string_st* a);
struct asn1_string_st* BN_to_ASN1_ENUMERATED(const struct bignum_st* bn, struct asn1_string_st* ai);
struct bignum_st* ASN1_ENUMERATED_to_BN(const struct asn1_string_st* ai, struct bignum_st* bn);
int ASN1_PRINTABLE_type(const unsigned char* s, int max);
unsigned long  int ASN1_tag2bit(int tag);
int ASN1_get_object(const unsigned char** pp, long* plength, int* ptag, int* pclass, long omax);
int ASN1_check_infinite_end(unsigned char** p, long len);
int ASN1_const_check_infinite_end(const unsigned char** p, long len);
void ASN1_put_object(unsigned char** pp, int constructed, int length, int tag, int xclass);
int ASN1_put_eoc(unsigned char** pp);
int ASN1_object_size(int constructed, int length, int tag);
void* ASN1_dup(int (*i2d)(const void*,unsigned char**), void* (*d2i)(void**,const unsigned char**,long), const void* x);
void* ASN1_item_dup(const struct ASN1_ITEM_st* it, const void* x);
int ASN1_item_sign_ex(const struct ASN1_ITEM_st* it, struct X509_algor_st* algor1, struct X509_algor_st* algor2, struct asn1_string_st* signature, const void* data, const struct asn1_string_st* id, struct evp_pkey_st* pkey, const struct evp_md_st* md, struct ossl_lib_ctx_st* libctx, const char* propq);
int ASN1_item_verify_ex(const struct ASN1_ITEM_st* it, const struct X509_algor_st* alg, const struct asn1_string_st* signature, const void* data, const struct asn1_string_st* id, struct evp_pkey_st* pkey, struct ossl_lib_ctx_st* libctx, const char* propq);
void* ASN1_d2i_fp(void* (*xnew)(), void* (*d2i)(void**,const unsigned char**,long), struct _IO_FILE* in, void** x);
void* ASN1_item_d2i_fp_ex(const struct ASN1_ITEM_st* it, struct _IO_FILE* in, void* x, struct ossl_lib_ctx_st* libctx, const char* propq);
void* ASN1_item_d2i_fp(const struct ASN1_ITEM_st* it, struct _IO_FILE* in, void* x);
int ASN1_i2d_fp(int (*i2d)(const void*,unsigned char**), struct _IO_FILE* out, const void* x);
int ASN1_item_i2d_fp(const struct ASN1_ITEM_st* it, struct _IO_FILE* out, const void* x);
int ASN1_STRING_print_ex_fp(struct _IO_FILE* fp, const struct asn1_string_st* str, unsigned long  int flags);
int ASN1_STRING_to_UTF8(unsigned char** out, const struct asn1_string_st* in);
void* ASN1_d2i_bio(void* (*xnew)(), void* (*d2i)(void**,const unsigned char**,long), struct bio_st* in, void** x);
void* ASN1_item_d2i_bio_ex(const struct ASN1_ITEM_st* it, struct bio_st* in, void* pval, struct ossl_lib_ctx_st* libctx, const char* propq);
void* ASN1_item_d2i_bio(const struct ASN1_ITEM_st* it, struct bio_st* in, void* pval);
int ASN1_i2d_bio(int (*i2d)(const void*,unsigned char**), struct bio_st* out, const void* x);
int ASN1_item_i2d_bio(const struct ASN1_ITEM_st* it, struct bio_st* out, const void* x);
struct bio_st* ASN1_item_i2d_mem_bio(const struct ASN1_ITEM_st* it, const struct ASN1_VALUE_st* val);
int ASN1_UTCTIME_print(struct bio_st* fp, const struct asn1_string_st* a);
int ASN1_GENERALIZEDTIME_print(struct bio_st* fp, const struct asn1_string_st* a);
int ASN1_TIME_print(struct bio_st* bp, const struct asn1_string_st* tm);
int ASN1_TIME_print_ex(struct bio_st* bp, const struct asn1_string_st* tm, unsigned long  int flags);
int ASN1_STRING_print(struct bio_st* bp, const struct asn1_string_st* v);
int ASN1_STRING_print_ex(struct bio_st* out, const struct asn1_string_st* str, unsigned long  int flags);
int ASN1_buf_print(struct bio_st* bp, const unsigned char* buf, unsigned long  int buflen, int off);
int ASN1_bn_print(struct bio_st* bp, const char* number, const struct bignum_st* num, unsigned char* buf, int off);
int ASN1_parse(struct bio_st* bp, const unsigned char* pp, long len, int indent);
int ASN1_parse_dump(struct bio_st* bp, const unsigned char* pp, long len, int indent, int dump);
const char* ASN1_tag2str(int tag);
int ASN1_UNIVERSALSTRING_to_string(struct asn1_string_st* s);
int ASN1_TYPE_set_octetstring(struct asn1_type_st* a, unsigned char* data, int len);
int ASN1_TYPE_get_octetstring(const struct asn1_type_st* a, unsigned char* data, int max_len);
int ASN1_TYPE_set_int_octetstring(struct asn1_type_st* a, long num, unsigned char* data, int len);
int ASN1_TYPE_get_int_octetstring(const struct asn1_type_st* a, long* num, unsigned char* data, int max_len);
void* ASN1_item_unpack(const struct asn1_string_st* oct, const struct ASN1_ITEM_st* it);
void* ASN1_item_unpack_ex(const struct asn1_string_st* oct, const struct ASN1_ITEM_st* it, struct ossl_lib_ctx_st* libctx, const char* propq);
struct asn1_string_st* ASN1_item_pack(void* obj, const struct ASN1_ITEM_st* it, struct asn1_string_st** oct);
void ASN1_STRING_set_default_mask(unsigned long  int mask);
int ASN1_STRING_set_default_mask_asc(const char* p);
unsigned long  int ASN1_STRING_get_default_mask();
int ASN1_mbstring_copy(struct asn1_string_st** out, const unsigned char* in, int len, int inform, unsigned long  int mask);
int ASN1_mbstring_ncopy(struct asn1_string_st** out, const unsigned char* in, int len, int inform, unsigned long  int mask, long minsize, long maxsize);
struct asn1_string_st* ASN1_STRING_set_by_NID(struct asn1_string_st** out, const unsigned char* in, int inlen, int inform, int nid);
struct asn1_string_table_st* ASN1_STRING_TABLE_get(int nid);
int ASN1_STRING_TABLE_add(int anonymous_var_nameX1475, long anonymous_var_nameX1476, long anonymous_var_nameX1477, unsigned long  int anonymous_var_nameX1478, unsigned long  int anonymous_var_nameX1479);
void ASN1_STRING_TABLE_cleanup();
struct ASN1_VALUE_st* ASN1_item_new(const struct ASN1_ITEM_st* it);
struct ASN1_VALUE_st* ASN1_item_new_ex(const struct ASN1_ITEM_st* it, struct ossl_lib_ctx_st* libctx, const char* propq);
void ASN1_item_free(struct ASN1_VALUE_st* val, const struct ASN1_ITEM_st* it);
struct ASN1_VALUE_st* ASN1_item_d2i_ex(struct ASN1_VALUE_st** val, const unsigned char** in, long len, const struct ASN1_ITEM_st* it, struct ossl_lib_ctx_st* libctx, const char* propq);
struct ASN1_VALUE_st* ASN1_item_d2i(struct ASN1_VALUE_st** val, const unsigned char** in, long len, const struct ASN1_ITEM_st* it);
int ASN1_item_i2d(const struct ASN1_VALUE_st* val, unsigned char** out, const struct ASN1_ITEM_st* it);
int ASN1_item_ndef_i2d(const struct ASN1_VALUE_st* val, unsigned char** out, const struct ASN1_ITEM_st* it);
void ASN1_add_oid_module();
void ASN1_add_stable_module();
struct asn1_type_st* ASN1_generate_nconf(const char* str, struct conf_st* nconf);
struct asn1_type_st* ASN1_generate_v3(const char* str, struct v3_ext_ctx* cnf);
int ASN1_str2mask(const char* str, unsigned long  int* pmask);
int ASN1_item_print(struct bio_st* out, const struct ASN1_VALUE_st* ifld, int indent, const struct ASN1_ITEM_st* it, const struct asn1_pctx_st* pctx);
struct asn1_pctx_st* ASN1_PCTX_new();
void ASN1_PCTX_free(struct asn1_pctx_st* p);
unsigned long  int ASN1_PCTX_get_flags(const struct asn1_pctx_st* p);
void ASN1_PCTX_set_flags(struct asn1_pctx_st* p, unsigned long  int flags);
unsigned long  int ASN1_PCTX_get_nm_flags(const struct asn1_pctx_st* p);
void ASN1_PCTX_set_nm_flags(struct asn1_pctx_st* p, unsigned long  int flags);
unsigned long  int ASN1_PCTX_get_cert_flags(const struct asn1_pctx_st* p);
void ASN1_PCTX_set_cert_flags(struct asn1_pctx_st* p, unsigned long  int flags);
unsigned long  int ASN1_PCTX_get_oid_flags(const struct asn1_pctx_st* p);
void ASN1_PCTX_set_oid_flags(struct asn1_pctx_st* p, unsigned long  int flags);
unsigned long  int ASN1_PCTX_get_str_flags(const struct asn1_pctx_st* p);
void ASN1_PCTX_set_str_flags(struct asn1_pctx_st* p, unsigned long  int flags);
struct asn1_sctx_st* ASN1_SCTX_new(int (*scan_cb)(struct asn1_sctx_st*));
void ASN1_SCTX_free(struct asn1_sctx_st* p);
const struct ASN1_ITEM_st* ASN1_SCTX_get_item(struct asn1_sctx_st* p);
const struct ASN1_TEMPLATE_st* ASN1_SCTX_get_template(struct asn1_sctx_st* p);
unsigned long  int ASN1_SCTX_get_flags(struct asn1_sctx_st* p);
void ASN1_SCTX_set_app_data(struct asn1_sctx_st* p, void* data);
void* ASN1_SCTX_get_app_data(struct asn1_sctx_st* p);
const struct bio_method_st* BIO_f_asn1();
struct bio_st* BIO_new_NDEF(struct bio_st* out, struct ASN1_VALUE_st* val, const struct ASN1_ITEM_st* it);
int i2d_ASN1_bio_stream(struct bio_st* out, struct ASN1_VALUE_st* val, struct bio_st* in, int flags, const struct ASN1_ITEM_st* it);
int PEM_write_bio_ASN1_stream(struct bio_st* out, struct ASN1_VALUE_st* val, struct bio_st* in, int flags, const char* hdr, const struct ASN1_ITEM_st* it);
int SMIME_write_ASN1(struct bio_st* bio, struct ASN1_VALUE_st* val, struct bio_st* data, int flags, int ctype_nid, int econt_nid, struct stack_st_X509_ALGOR* mdalgs, const struct ASN1_ITEM_st* it);
int SMIME_write_ASN1_ex(struct bio_st* bio, struct ASN1_VALUE_st* val, struct bio_st* data, int flags, int ctype_nid, int econt_nid, struct stack_st_X509_ALGOR* mdalgs, const struct ASN1_ITEM_st* it, struct ossl_lib_ctx_st* libctx, const char* propq);
struct ASN1_VALUE_st* SMIME_read_ASN1(struct bio_st* bio, struct bio_st** bcont, const struct ASN1_ITEM_st* it);
struct ASN1_VALUE_st* SMIME_read_ASN1_ex(struct bio_st* bio, int flags, struct bio_st** bcont, const struct ASN1_ITEM_st* it, struct ASN1_VALUE_st** x, struct ossl_lib_ctx_st* libctx, const char* propq);
int SMIME_crlf_copy(struct bio_st* in, struct bio_st* out, int flags);
int SMIME_text(struct bio_st* in, struct bio_st* out);
const struct ASN1_ITEM_st* ASN1_ITEM_lookup(const char* name);
const struct ASN1_ITEM_st* ASN1_ITEM_get(unsigned long  int i);
int OBJ_NAME_init();
int OBJ_NAME_new_index(unsigned long  int (*hash_func)(const char*), int (*cmp_func)(const char*,const char*), void (*free_func)(const char*,int,const char*));
const char* OBJ_NAME_get(const char* name, int type);
int OBJ_NAME_add(const char* name, int type, const char* data);
int OBJ_NAME_remove(const char* name, int type);
void OBJ_NAME_cleanup(int type);
void OBJ_NAME_do_all(int type, void (*fn)(const struct obj_name_st*,void*), void* arg);
void OBJ_NAME_do_all_sorted(int type, void (*fn)(const struct obj_name_st*,void*), void* arg);
struct asn1_object_st* OBJ_dup(const struct asn1_object_st* a);
struct asn1_object_st* OBJ_nid2obj(int n);
const char* OBJ_nid2ln(int n);
const char* OBJ_nid2sn(int n);
int OBJ_obj2nid(const struct asn1_object_st* o);
struct asn1_object_st* OBJ_txt2obj(const char* s, int no_name);
int OBJ_obj2txt(char* buf, int buf_len, const struct asn1_object_st* a, int no_name);
int OBJ_txt2nid(const char* s);
int OBJ_ln2nid(const char* s);
int OBJ_sn2nid(const char* s);
int OBJ_cmp(const struct asn1_object_st* a, const struct asn1_object_st* b);
const void* OBJ_bsearch_(const void* key, const void* base, int num, int size, int (*cmp)(const void*,const void*));
const void* OBJ_bsearch_ex_(const void* key, const void* base, int num, int size, int (*cmp)(const void*,const void*), int flags);
int OBJ_new_nid(int num);
int OBJ_add_object(const struct asn1_object_st* obj);
int OBJ_create(const char* oid, const char* sn, const char* ln);
int OBJ_create_objects(struct bio_st* in);
unsigned long  int OBJ_length(const struct asn1_object_st* obj);
const unsigned char* OBJ_get0_data(const struct asn1_object_st* obj);
int OBJ_find_sigid_algs(int signid, int* pdig_nid, int* ppkey_nid);
int OBJ_find_sigid_by_algs(int* psignid, int dig_nid, int pkey_nid);
int OBJ_add_sigid(int signid, int dig_id, int pkey_id);
void OBJ_sigid_free();
int EVP_set_default_properties(struct ossl_lib_ctx_st* libctx, const char* propq);
int EVP_default_properties_is_fips_enabled(struct ossl_lib_ctx_st* libctx);
int EVP_default_properties_enable_fips(struct ossl_lib_ctx_st* libctx, int enable);
struct evp_md_st* EVP_MD_meth_new(int md_type, int pkey_type);
struct evp_md_st* EVP_MD_meth_dup(const struct evp_md_st* md);
void EVP_MD_meth_free(struct evp_md_st* md);
int EVP_MD_meth_set_input_blocksize(struct evp_md_st* md, int blocksize);
int EVP_MD_meth_set_result_size(struct evp_md_st* md, int resultsize);
int EVP_MD_meth_set_app_datasize(struct evp_md_st* md, int datasize);
int EVP_MD_meth_set_flags(struct evp_md_st* md, unsigned long  int flags);
int EVP_MD_meth_set_init(struct evp_md_st* md, int (*init)(struct evp_md_ctx_st*));
int EVP_MD_meth_set_update(struct evp_md_st* md, int (*update)(struct evp_md_ctx_st*,const void*,unsigned long  int));
int EVP_MD_meth_set_final(struct evp_md_st* md, int (*final)(struct evp_md_ctx_st*,unsigned char*));
int EVP_MD_meth_set_copy(struct evp_md_st* md, int (*copy)(struct evp_md_ctx_st*,const struct evp_md_ctx_st*));
int EVP_MD_meth_set_cleanup(struct evp_md_st* md, int (*cleanup)(struct evp_md_ctx_st*));
int EVP_MD_meth_set_ctrl(struct evp_md_st* md, int (*ctrl)(struct evp_md_ctx_st*,int,int,void*));
int EVP_MD_meth_get_input_blocksize(const struct evp_md_st* md);
int EVP_MD_meth_get_result_size(const struct evp_md_st* md);
int EVP_MD_meth_get_app_datasize(const struct evp_md_st* md);
unsigned long  int EVP_MD_meth_get_flags(const struct evp_md_st* md);
int (*EVP_MD_meth_get_init(const struct evp_md_st* _function_pointer_result_var_name_a14))(struct evp_md_ctx_st*);
int (*EVP_MD_meth_get_update(const struct evp_md_st* _function_pointer_result_var_name_a15))(struct evp_md_ctx_st*,const void*,unsigned long  int);
int (*EVP_MD_meth_get_final(const struct evp_md_st* _function_pointer_result_var_name_a16))(struct evp_md_ctx_st*,unsigned char*);
int (*EVP_MD_meth_get_copy(const struct evp_md_st* _function_pointer_result_var_name_a17))(struct evp_md_ctx_st*,const struct evp_md_ctx_st*);
int (*EVP_MD_meth_get_cleanup(const struct evp_md_st* _function_pointer_result_var_name_a18))(struct evp_md_ctx_st*);
int (*EVP_MD_meth_get_ctrl(const struct evp_md_st* _function_pointer_result_var_name_a19))(struct evp_md_ctx_st*,int,int,void*);
struct evp_cipher_st* EVP_CIPHER_meth_new(int cipher_type, int block_size, int key_len);
struct evp_cipher_st* EVP_CIPHER_meth_dup(const struct evp_cipher_st* cipher);
void EVP_CIPHER_meth_free(struct evp_cipher_st* cipher);
int EVP_CIPHER_meth_set_iv_length(struct evp_cipher_st* cipher, int iv_len);
int EVP_CIPHER_meth_set_flags(struct evp_cipher_st* cipher, unsigned long  int flags);
int EVP_CIPHER_meth_set_impl_ctx_size(struct evp_cipher_st* cipher, int ctx_size);
int EVP_CIPHER_meth_set_init(struct evp_cipher_st* cipher, int (*init)(struct evp_cipher_ctx_st*,const unsigned char*,const unsigned char*,int));
int EVP_CIPHER_meth_set_do_cipher(struct evp_cipher_st* cipher, int (*do_cipher)(struct evp_cipher_ctx_st*,unsigned char*,const unsigned char*,unsigned long  int));
int EVP_CIPHER_meth_set_cleanup(struct evp_cipher_st* cipher, int (*cleanup)(struct evp_cipher_ctx_st*));
int EVP_CIPHER_meth_set_set_asn1_params(struct evp_cipher_st* cipher, int (*set_asn1_parameters)(struct evp_cipher_ctx_st*,struct asn1_type_st*));
int EVP_CIPHER_meth_set_get_asn1_params(struct evp_cipher_st* cipher, int (*get_asn1_parameters)(struct evp_cipher_ctx_st*,struct asn1_type_st*));
int EVP_CIPHER_meth_set_ctrl(struct evp_cipher_st* cipher, int (*ctrl)(struct evp_cipher_ctx_st*,int,int,void*));
int (*EVP_CIPHER_meth_get_init(const struct evp_cipher_st* _function_pointer_result_var_name_a20))(struct evp_cipher_ctx_st*,const unsigned char*,const unsigned char*,int);
int (*EVP_CIPHER_meth_get_do_cipher(const struct evp_cipher_st* _function_pointer_result_var_name_a21))(struct evp_cipher_ctx_st*,unsigned char*,const unsigned char*,unsigned long  int);
int (*EVP_CIPHER_meth_get_cleanup(const struct evp_cipher_st* _function_pointer_result_var_name_a22))(struct evp_cipher_ctx_st*);
int (*EVP_CIPHER_meth_get_set_asn1_params(const struct evp_cipher_st* _function_pointer_result_var_name_a23))(struct evp_cipher_ctx_st*,struct asn1_type_st*);
int (*EVP_CIPHER_meth_get_get_asn1_params(const struct evp_cipher_st* _function_pointer_result_var_name_a24))(struct evp_cipher_ctx_st*,struct asn1_type_st*);
int (*EVP_CIPHER_meth_get_ctrl(const struct evp_cipher_st* _function_pointer_result_var_name_a25))(struct evp_cipher_ctx_st*,int,int,void*);
int EVP_MD_get_type(const struct evp_md_st* md);
const char* EVP_MD_get0_name(const struct evp_md_st* md);
const char* EVP_MD_get0_description(const struct evp_md_st* md);
int EVP_MD_is_a(const struct evp_md_st* md, const char* name);
int EVP_MD_names_do_all(const struct evp_md_st* md, void (*fn)(const char*,void*), void* data);
const struct ossl_provider_st* EVP_MD_get0_provider(const struct evp_md_st* md);
int EVP_MD_get_pkey_type(const struct evp_md_st* md);
int EVP_MD_get_size(const struct evp_md_st* md);
int EVP_MD_get_block_size(const struct evp_md_st* md);
unsigned long  int EVP_MD_get_flags(const struct evp_md_st* md);
const struct evp_md_st* EVP_MD_CTX_get0_md(const struct evp_md_ctx_st* ctx);
struct evp_md_st* EVP_MD_CTX_get1_md(struct evp_md_ctx_st* ctx);
const struct evp_md_st* EVP_MD_CTX_md(const struct evp_md_ctx_st* ctx);
int (*EVP_MD_CTX_update_fn(struct evp_md_ctx_st* _function_pointer_result_var_name_a26))(struct evp_md_ctx_st*,const void*,unsigned long  int);
void EVP_MD_CTX_set_update_fn(struct evp_md_ctx_st* ctx, int (*update)(struct evp_md_ctx_st*,const void*,unsigned long  int));
struct evp_pkey_ctx_st* EVP_MD_CTX_get_pkey_ctx(const struct evp_md_ctx_st* ctx);
void EVP_MD_CTX_set_pkey_ctx(struct evp_md_ctx_st* ctx, struct evp_pkey_ctx_st* pctx);
void* EVP_MD_CTX_get0_md_data(const struct evp_md_ctx_st* ctx);
int EVP_CIPHER_get_nid(const struct evp_cipher_st* cipher);
const char* EVP_CIPHER_get0_name(const struct evp_cipher_st* cipher);
const char* EVP_CIPHER_get0_description(const struct evp_cipher_st* cipher);
int EVP_CIPHER_is_a(const struct evp_cipher_st* cipher, const char* name);
int EVP_CIPHER_names_do_all(const struct evp_cipher_st* cipher, void (*fn)(const char*,void*), void* data);
const struct ossl_provider_st* EVP_CIPHER_get0_provider(const struct evp_cipher_st* cipher);
int EVP_CIPHER_get_block_size(const struct evp_cipher_st* cipher);
int EVP_CIPHER_impl_ctx_size(const struct evp_cipher_st* cipher);
int EVP_CIPHER_get_key_length(const struct evp_cipher_st* cipher);
int EVP_CIPHER_get_iv_length(const struct evp_cipher_st* cipher);
unsigned long  int EVP_CIPHER_get_flags(const struct evp_cipher_st* cipher);
int EVP_CIPHER_get_mode(const struct evp_cipher_st* cipher);
int EVP_CIPHER_get_type(const struct evp_cipher_st* cipher);
struct evp_cipher_st* EVP_CIPHER_fetch(struct ossl_lib_ctx_st* ctx, const char* algorithm, const char* properties);
int EVP_CIPHER_up_ref(struct evp_cipher_st* cipher);
void EVP_CIPHER_free(struct evp_cipher_st* cipher);
const struct evp_cipher_st* EVP_CIPHER_CTX_get0_cipher(const struct evp_cipher_ctx_st* ctx);
struct evp_cipher_st* EVP_CIPHER_CTX_get1_cipher(struct evp_cipher_ctx_st* ctx);
int EVP_CIPHER_CTX_is_encrypting(const struct evp_cipher_ctx_st* ctx);
int EVP_CIPHER_CTX_get_nid(const struct evp_cipher_ctx_st* ctx);
int EVP_CIPHER_CTX_get_block_size(const struct evp_cipher_ctx_st* ctx);
int EVP_CIPHER_CTX_get_key_length(const struct evp_cipher_ctx_st* ctx);
int EVP_CIPHER_CTX_get_iv_length(const struct evp_cipher_ctx_st* ctx);
int EVP_CIPHER_CTX_get_tag_length(const struct evp_cipher_ctx_st* ctx);
const struct evp_cipher_st* EVP_CIPHER_CTX_cipher(const struct evp_cipher_ctx_st* ctx);
const unsigned char* EVP_CIPHER_CTX_iv(const struct evp_cipher_ctx_st* ctx);
const unsigned char* EVP_CIPHER_CTX_original_iv(const struct evp_cipher_ctx_st* ctx);
unsigned char* EVP_CIPHER_CTX_iv_noconst(struct evp_cipher_ctx_st* ctx);
int EVP_CIPHER_CTX_get_updated_iv(struct evp_cipher_ctx_st* ctx, void* buf, unsigned long  int len);
int EVP_CIPHER_CTX_get_original_iv(struct evp_cipher_ctx_st* ctx, void* buf, unsigned long  int len);
unsigned char* EVP_CIPHER_CTX_buf_noconst(struct evp_cipher_ctx_st* ctx);
int EVP_CIPHER_CTX_get_num(const struct evp_cipher_ctx_st* ctx);
int EVP_CIPHER_CTX_set_num(struct evp_cipher_ctx_st* ctx, int num);
struct evp_cipher_ctx_st* EVP_CIPHER_CTX_dup(const struct evp_cipher_ctx_st* in);
int EVP_CIPHER_CTX_copy(struct evp_cipher_ctx_st* out, const struct evp_cipher_ctx_st* in);
void* EVP_CIPHER_CTX_get_app_data(const struct evp_cipher_ctx_st* ctx);
void EVP_CIPHER_CTX_set_app_data(struct evp_cipher_ctx_st* ctx, void* data);
void* EVP_CIPHER_CTX_get_cipher_data(const struct evp_cipher_ctx_st* ctx);
void* EVP_CIPHER_CTX_set_cipher_data(struct evp_cipher_ctx_st* ctx, void* cipher_data);
int EVP_Cipher(struct evp_cipher_ctx_st* c, unsigned char* out, const unsigned char* in, unsigned int inl);
int EVP_MD_get_params(const struct evp_md_st* digest, struct ossl_param_st params[]);
int EVP_MD_CTX_set_params(struct evp_md_ctx_st* ctx, const struct ossl_param_st params[]);
int EVP_MD_CTX_get_params(struct evp_md_ctx_st* ctx, struct ossl_param_st params[]);
const struct ossl_param_st* EVP_MD_gettable_params(const struct evp_md_st* digest);
const struct ossl_param_st* EVP_MD_settable_ctx_params(const struct evp_md_st* md);
const struct ossl_param_st* EVP_MD_gettable_ctx_params(const struct evp_md_st* md);
const struct ossl_param_st* EVP_MD_CTX_settable_params(struct evp_md_ctx_st* ctx);
const struct ossl_param_st* EVP_MD_CTX_gettable_params(struct evp_md_ctx_st* ctx);
int EVP_MD_CTX_ctrl(struct evp_md_ctx_st* ctx, int cmd, int p1, void* p2);
struct evp_md_ctx_st* EVP_MD_CTX_new();
int EVP_MD_CTX_reset(struct evp_md_ctx_st* ctx);
void EVP_MD_CTX_free(struct evp_md_ctx_st* ctx);
struct evp_md_ctx_st* EVP_MD_CTX_dup(const struct evp_md_ctx_st* in);
int EVP_MD_CTX_copy_ex(struct evp_md_ctx_st* out, const struct evp_md_ctx_st* in);
void EVP_MD_CTX_set_flags(struct evp_md_ctx_st* ctx, int flags);
void EVP_MD_CTX_clear_flags(struct evp_md_ctx_st* ctx, int flags);
int EVP_MD_CTX_test_flags(const struct evp_md_ctx_st* ctx, int flags);
int EVP_DigestInit_ex2(struct evp_md_ctx_st* ctx, const struct evp_md_st* type, const struct ossl_param_st params[]);
int EVP_DigestInit_ex(struct evp_md_ctx_st* ctx, const struct evp_md_st* type, struct engine_st* impl);
int EVP_DigestUpdate(struct evp_md_ctx_st* ctx, const void* d, unsigned long  int cnt);
int EVP_DigestFinal_ex(struct evp_md_ctx_st* ctx, unsigned char* md, unsigned int* s);
int EVP_Digest(const void* data, unsigned long  int count, unsigned char* md, unsigned int* size, const struct evp_md_st* type, struct engine_st* impl);
int EVP_Q_digest(struct ossl_lib_ctx_st* libctx, const char* name, const char* propq, const void* data, unsigned long  int datalen, unsigned char* md, unsigned long  int* mdlen);
int EVP_MD_CTX_copy(struct evp_md_ctx_st* out, const struct evp_md_ctx_st* in);
int EVP_DigestInit(struct evp_md_ctx_st* ctx, const struct evp_md_st* type);
int EVP_DigestFinal(struct evp_md_ctx_st* ctx, unsigned char* md, unsigned int* s);
int EVP_DigestFinalXOF(struct evp_md_ctx_st* ctx, unsigned char* out, unsigned long  int outlen);
int EVP_DigestSqueeze(struct evp_md_ctx_st* ctx, unsigned char* out, unsigned long  int outlen);
struct evp_md_st* EVP_MD_fetch(struct ossl_lib_ctx_st* ctx, const char* algorithm, const char* properties);
int EVP_MD_up_ref(struct evp_md_st* md);
void EVP_MD_free(struct evp_md_st* md);
int EVP_read_pw_string(char* buf, int length, const char* prompt, int verify);
int EVP_read_pw_string_min(char* buf, int minlen, int maxlen, const char* prompt, int verify);
void EVP_set_pw_prompt(const char* prompt);
char* EVP_get_pw_prompt();
int EVP_BytesToKey(const struct evp_cipher_st* type, const struct evp_md_st* md, const unsigned char* salt, const unsigned char* data, int datal, int count, unsigned char* key, unsigned char* iv);
void EVP_CIPHER_CTX_set_flags(struct evp_cipher_ctx_st* ctx, int flags);
void EVP_CIPHER_CTX_clear_flags(struct evp_cipher_ctx_st* ctx, int flags);
int EVP_CIPHER_CTX_test_flags(const struct evp_cipher_ctx_st* ctx, int flags);
int EVP_EncryptInit(struct evp_cipher_ctx_st* ctx, const struct evp_cipher_st* cipher, const unsigned char* key, const unsigned char* iv);
int EVP_EncryptInit_ex(struct evp_cipher_ctx_st* ctx, const struct evp_cipher_st* cipher, struct engine_st* impl, const unsigned char* key, const unsigned char* iv);
int EVP_EncryptInit_ex2(struct evp_cipher_ctx_st* ctx, const struct evp_cipher_st* cipher, const unsigned char* key, const unsigned char* iv, const struct ossl_param_st params[]);
int EVP_EncryptUpdate(struct evp_cipher_ctx_st* ctx, unsigned char* out, int* outl, const unsigned char* in, int inl);
int EVP_EncryptFinal_ex(struct evp_cipher_ctx_st* ctx, unsigned char* out, int* outl);
int EVP_EncryptFinal(struct evp_cipher_ctx_st* ctx, unsigned char* out, int* outl);
int EVP_DecryptInit(struct evp_cipher_ctx_st* ctx, const struct evp_cipher_st* cipher, const unsigned char* key, const unsigned char* iv);
int EVP_DecryptInit_ex(struct evp_cipher_ctx_st* ctx, const struct evp_cipher_st* cipher, struct engine_st* impl, const unsigned char* key, const unsigned char* iv);
int EVP_DecryptInit_ex2(struct evp_cipher_ctx_st* ctx, const struct evp_cipher_st* cipher, const unsigned char* key, const unsigned char* iv, const struct ossl_param_st params[]);
int EVP_DecryptUpdate(struct evp_cipher_ctx_st* ctx, unsigned char* out, int* outl, const unsigned char* in, int inl);
int EVP_DecryptFinal(struct evp_cipher_ctx_st* ctx, unsigned char* outm, int* outl);
int EVP_DecryptFinal_ex(struct evp_cipher_ctx_st* ctx, unsigned char* outm, int* outl);
int EVP_CipherInit(struct evp_cipher_ctx_st* ctx, const struct evp_cipher_st* cipher, const unsigned char* key, const unsigned char* iv, int enc);
int EVP_CipherInit_ex(struct evp_cipher_ctx_st* ctx, const struct evp_cipher_st* cipher, struct engine_st* impl, const unsigned char* key, const unsigned char* iv, int enc);
int EVP_CipherInit_ex2(struct evp_cipher_ctx_st* ctx, const struct evp_cipher_st* cipher, const unsigned char* key, const unsigned char* iv, int enc, const struct ossl_param_st params[]);
int EVP_CipherUpdate(struct evp_cipher_ctx_st* ctx, unsigned char* out, int* outl, const unsigned char* in, int inl);
int EVP_CipherFinal(struct evp_cipher_ctx_st* ctx, unsigned char* outm, int* outl);
int EVP_CipherFinal_ex(struct evp_cipher_ctx_st* ctx, unsigned char* outm, int* outl);
int EVP_SignFinal(struct evp_md_ctx_st* ctx, unsigned char* md, unsigned int* s, struct evp_pkey_st* pkey);
int EVP_SignFinal_ex(struct evp_md_ctx_st* ctx, unsigned char* md, unsigned int* s, struct evp_pkey_st* pkey, struct ossl_lib_ctx_st* libctx, const char* propq);
int EVP_DigestSign(struct evp_md_ctx_st* ctx, unsigned char* sigret, unsigned long  int* siglen, const unsigned char* tbs, unsigned long  int tbslen);
int EVP_VerifyFinal(struct evp_md_ctx_st* ctx, const unsigned char* sigbuf, unsigned int siglen, struct evp_pkey_st* pkey);
int EVP_VerifyFinal_ex(struct evp_md_ctx_st* ctx, const unsigned char* sigbuf, unsigned int siglen, struct evp_pkey_st* pkey, struct ossl_lib_ctx_st* libctx, const char* propq);
int EVP_DigestVerify(struct evp_md_ctx_st* ctx, const unsigned char* sigret, unsigned long  int siglen, const unsigned char* tbs, unsigned long  int tbslen);
int EVP_DigestSignInit_ex(struct evp_md_ctx_st* ctx, struct evp_pkey_ctx_st** pctx, const char* mdname, struct ossl_lib_ctx_st* libctx, const char* props, struct evp_pkey_st* pkey, const struct ossl_param_st params[]);
int EVP_DigestSignInit(struct evp_md_ctx_st* ctx, struct evp_pkey_ctx_st** pctx, const struct evp_md_st* type, struct engine_st* e, struct evp_pkey_st* pkey);
int EVP_DigestSignUpdate(struct evp_md_ctx_st* ctx, const void* data, unsigned long  int dsize);
int EVP_DigestSignFinal(struct evp_md_ctx_st* ctx, unsigned char* sigret, unsigned long  int* siglen);
int EVP_DigestVerifyInit_ex(struct evp_md_ctx_st* ctx, struct evp_pkey_ctx_st** pctx, const char* mdname, struct ossl_lib_ctx_st* libctx, const char* props, struct evp_pkey_st* pkey, const struct ossl_param_st params[]);
int EVP_DigestVerifyInit(struct evp_md_ctx_st* ctx, struct evp_pkey_ctx_st** pctx, const struct evp_md_st* type, struct engine_st* e, struct evp_pkey_st* pkey);
int EVP_DigestVerifyUpdate(struct evp_md_ctx_st* ctx, const void* data, unsigned long  int dsize);
int EVP_DigestVerifyFinal(struct evp_md_ctx_st* ctx, const unsigned char* sig, unsigned long  int siglen);
int EVP_OpenInit(struct evp_cipher_ctx_st* ctx, const struct evp_cipher_st* type, const unsigned char* ek, int ekl, const unsigned char* iv, struct evp_pkey_st* priv);
int EVP_OpenFinal(struct evp_cipher_ctx_st* ctx, unsigned char* out, int* outl);
int EVP_SealInit(struct evp_cipher_ctx_st* ctx, const struct evp_cipher_st* type, unsigned char** ek, int* ekl, unsigned char* iv, struct evp_pkey_st** pubk, int npubk);
int EVP_SealFinal(struct evp_cipher_ctx_st* ctx, unsigned char* out, int* outl);
struct evp_Encode_Ctx_st* EVP_ENCODE_CTX_new();
void EVP_ENCODE_CTX_free(struct evp_Encode_Ctx_st* ctx);
int EVP_ENCODE_CTX_copy(struct evp_Encode_Ctx_st* dctx, const struct evp_Encode_Ctx_st* sctx);
int EVP_ENCODE_CTX_num(struct evp_Encode_Ctx_st* ctx);
void EVP_EncodeInit(struct evp_Encode_Ctx_st* ctx);
int EVP_EncodeUpdate(struct evp_Encode_Ctx_st* ctx, unsigned char* out, int* outl, const unsigned char* in, int inl);
void EVP_EncodeFinal(struct evp_Encode_Ctx_st* ctx, unsigned char* out, int* outl);
int EVP_EncodeBlock(unsigned char* t, const unsigned char* f, int n);
void EVP_DecodeInit(struct evp_Encode_Ctx_st* ctx);
int EVP_DecodeUpdate(struct evp_Encode_Ctx_st* ctx, unsigned char* out, int* outl, const unsigned char* in, int inl);
int EVP_DecodeFinal(struct evp_Encode_Ctx_st* ctx, unsigned char* out, int* outl);
int EVP_DecodeBlock(unsigned char* t, const unsigned char* f, int n);
struct evp_cipher_ctx_st* EVP_CIPHER_CTX_new();
int EVP_CIPHER_CTX_reset(struct evp_cipher_ctx_st* c);
void EVP_CIPHER_CTX_free(struct evp_cipher_ctx_st* c);
int EVP_CIPHER_CTX_set_key_length(struct evp_cipher_ctx_st* x, int keylen);
int EVP_CIPHER_CTX_set_padding(struct evp_cipher_ctx_st* c, int pad);
int EVP_CIPHER_CTX_ctrl(struct evp_cipher_ctx_st* ctx, int type, int arg, void* ptr);
int EVP_CIPHER_CTX_rand_key(struct evp_cipher_ctx_st* ctx, unsigned char* key);
int EVP_CIPHER_get_params(struct evp_cipher_st* cipher, struct ossl_param_st params[]);
int EVP_CIPHER_CTX_set_params(struct evp_cipher_ctx_st* ctx, const struct ossl_param_st params[]);
int EVP_CIPHER_CTX_get_params(struct evp_cipher_ctx_st* ctx, struct ossl_param_st params[]);
const struct ossl_param_st* EVP_CIPHER_gettable_params(const struct evp_cipher_st* cipher);
const struct ossl_param_st* EVP_CIPHER_settable_ctx_params(const struct evp_cipher_st* cipher);
const struct ossl_param_st* EVP_CIPHER_gettable_ctx_params(const struct evp_cipher_st* cipher);
const struct ossl_param_st* EVP_CIPHER_CTX_settable_params(struct evp_cipher_ctx_st* ctx);
const struct ossl_param_st* EVP_CIPHER_CTX_gettable_params(struct evp_cipher_ctx_st* ctx);
const struct bio_method_st* BIO_f_md();
const struct bio_method_st* BIO_f_base64();
const struct bio_method_st* BIO_f_cipher();
const struct bio_method_st* BIO_f_reliable();
int BIO_set_cipher(struct bio_st* b, const struct evp_cipher_st* c, const unsigned char* k, const unsigned char* i, int enc);
const struct evp_md_st* EVP_md_null();
const struct evp_md_st* EVP_md4();
const struct evp_md_st* EVP_md5();
const struct evp_md_st* EVP_md5_sha1();
const struct evp_md_st* EVP_blake2b512();
const struct evp_md_st* EVP_blake2s256();
const struct evp_md_st* EVP_sha1();
const struct evp_md_st* EVP_sha224();
const struct evp_md_st* EVP_sha256();
const struct evp_md_st* EVP_sha384();
const struct evp_md_st* EVP_sha512();
const struct evp_md_st* EVP_sha512_224();
const struct evp_md_st* EVP_sha512_256();
const struct evp_md_st* EVP_sha3_224();
const struct evp_md_st* EVP_sha3_256();
const struct evp_md_st* EVP_sha3_384();
const struct evp_md_st* EVP_sha3_512();
const struct evp_md_st* EVP_shake128();
const struct evp_md_st* EVP_shake256();
const struct evp_md_st* EVP_ripemd160();
const struct evp_md_st* EVP_whirlpool();
const struct evp_md_st* EVP_sm3();
const struct evp_cipher_st* EVP_enc_null();
const struct evp_cipher_st* EVP_des_ecb();
const struct evp_cipher_st* EVP_des_ede();
const struct evp_cipher_st* EVP_des_ede3();
const struct evp_cipher_st* EVP_des_ede_ecb();
const struct evp_cipher_st* EVP_des_ede3_ecb();
const struct evp_cipher_st* EVP_des_cfb64();
const struct evp_cipher_st* EVP_des_cfb1();
const struct evp_cipher_st* EVP_des_cfb8();
const struct evp_cipher_st* EVP_des_ede_cfb64();
const struct evp_cipher_st* EVP_des_ede3_cfb64();
const struct evp_cipher_st* EVP_des_ede3_cfb1();
const struct evp_cipher_st* EVP_des_ede3_cfb8();
const struct evp_cipher_st* EVP_des_ofb();
const struct evp_cipher_st* EVP_des_ede_ofb();
const struct evp_cipher_st* EVP_des_ede3_ofb();
const struct evp_cipher_st* EVP_des_cbc();
const struct evp_cipher_st* EVP_des_ede_cbc();
const struct evp_cipher_st* EVP_des_ede3_cbc();
const struct evp_cipher_st* EVP_desx_cbc();
const struct evp_cipher_st* EVP_des_ede3_wrap();
const struct evp_cipher_st* EVP_rc4();
const struct evp_cipher_st* EVP_rc4_40();
const struct evp_cipher_st* EVP_rc4_hmac_md5();
const struct evp_cipher_st* EVP_rc2_ecb();
const struct evp_cipher_st* EVP_rc2_cbc();
const struct evp_cipher_st* EVP_rc2_40_cbc();
const struct evp_cipher_st* EVP_rc2_64_cbc();
const struct evp_cipher_st* EVP_rc2_cfb64();
const struct evp_cipher_st* EVP_rc2_ofb();
const struct evp_cipher_st* EVP_bf_ecb();
const struct evp_cipher_st* EVP_bf_cbc();
const struct evp_cipher_st* EVP_bf_cfb64();
const struct evp_cipher_st* EVP_bf_ofb();
const struct evp_cipher_st* EVP_cast5_ecb();
const struct evp_cipher_st* EVP_cast5_cbc();
const struct evp_cipher_st* EVP_cast5_cfb64();
const struct evp_cipher_st* EVP_cast5_ofb();
const struct evp_cipher_st* EVP_aes_128_ecb();
const struct evp_cipher_st* EVP_aes_128_cbc();
const struct evp_cipher_st* EVP_aes_128_cfb1();
const struct evp_cipher_st* EVP_aes_128_cfb8();
const struct evp_cipher_st* EVP_aes_128_cfb128();
const struct evp_cipher_st* EVP_aes_128_ofb();
const struct evp_cipher_st* EVP_aes_128_ctr();
const struct evp_cipher_st* EVP_aes_128_ccm();
const struct evp_cipher_st* EVP_aes_128_gcm();
const struct evp_cipher_st* EVP_aes_128_xts();
const struct evp_cipher_st* EVP_aes_128_wrap();
const struct evp_cipher_st* EVP_aes_128_wrap_pad();
const struct evp_cipher_st* EVP_aes_128_ocb();
const struct evp_cipher_st* EVP_aes_192_ecb();
const struct evp_cipher_st* EVP_aes_192_cbc();
const struct evp_cipher_st* EVP_aes_192_cfb1();
const struct evp_cipher_st* EVP_aes_192_cfb8();
const struct evp_cipher_st* EVP_aes_192_cfb128();
const struct evp_cipher_st* EVP_aes_192_ofb();
const struct evp_cipher_st* EVP_aes_192_ctr();
const struct evp_cipher_st* EVP_aes_192_ccm();
const struct evp_cipher_st* EVP_aes_192_gcm();
const struct evp_cipher_st* EVP_aes_192_wrap();
const struct evp_cipher_st* EVP_aes_192_wrap_pad();
const struct evp_cipher_st* EVP_aes_192_ocb();
const struct evp_cipher_st* EVP_aes_256_ecb();
const struct evp_cipher_st* EVP_aes_256_cbc();
const struct evp_cipher_st* EVP_aes_256_cfb1();
const struct evp_cipher_st* EVP_aes_256_cfb8();
const struct evp_cipher_st* EVP_aes_256_cfb128();
const struct evp_cipher_st* EVP_aes_256_ofb();
const struct evp_cipher_st* EVP_aes_256_ctr();
const struct evp_cipher_st* EVP_aes_256_ccm();
const struct evp_cipher_st* EVP_aes_256_gcm();
const struct evp_cipher_st* EVP_aes_256_xts();
const struct evp_cipher_st* EVP_aes_256_wrap();
const struct evp_cipher_st* EVP_aes_256_wrap_pad();
const struct evp_cipher_st* EVP_aes_256_ocb();
const struct evp_cipher_st* EVP_aes_128_cbc_hmac_sha1();
const struct evp_cipher_st* EVP_aes_256_cbc_hmac_sha1();
const struct evp_cipher_st* EVP_aes_128_cbc_hmac_sha256();
const struct evp_cipher_st* EVP_aes_256_cbc_hmac_sha256();
const struct evp_cipher_st* EVP_aria_128_ecb();
const struct evp_cipher_st* EVP_aria_128_cbc();
const struct evp_cipher_st* EVP_aria_128_cfb1();
const struct evp_cipher_st* EVP_aria_128_cfb8();
const struct evp_cipher_st* EVP_aria_128_cfb128();
const struct evp_cipher_st* EVP_aria_128_ctr();
const struct evp_cipher_st* EVP_aria_128_ofb();
const struct evp_cipher_st* EVP_aria_128_gcm();
const struct evp_cipher_st* EVP_aria_128_ccm();
const struct evp_cipher_st* EVP_aria_192_ecb();
const struct evp_cipher_st* EVP_aria_192_cbc();
const struct evp_cipher_st* EVP_aria_192_cfb1();
const struct evp_cipher_st* EVP_aria_192_cfb8();
const struct evp_cipher_st* EVP_aria_192_cfb128();
const struct evp_cipher_st* EVP_aria_192_ctr();
const struct evp_cipher_st* EVP_aria_192_ofb();
const struct evp_cipher_st* EVP_aria_192_gcm();
const struct evp_cipher_st* EVP_aria_192_ccm();
const struct evp_cipher_st* EVP_aria_256_ecb();
const struct evp_cipher_st* EVP_aria_256_cbc();
const struct evp_cipher_st* EVP_aria_256_cfb1();
const struct evp_cipher_st* EVP_aria_256_cfb8();
const struct evp_cipher_st* EVP_aria_256_cfb128();
const struct evp_cipher_st* EVP_aria_256_ctr();
const struct evp_cipher_st* EVP_aria_256_ofb();
const struct evp_cipher_st* EVP_aria_256_gcm();
const struct evp_cipher_st* EVP_aria_256_ccm();
const struct evp_cipher_st* EVP_camellia_128_ecb();
const struct evp_cipher_st* EVP_camellia_128_cbc();
const struct evp_cipher_st* EVP_camellia_128_cfb1();
const struct evp_cipher_st* EVP_camellia_128_cfb8();
const struct evp_cipher_st* EVP_camellia_128_cfb128();
const struct evp_cipher_st* EVP_camellia_128_ofb();
const struct evp_cipher_st* EVP_camellia_128_ctr();
const struct evp_cipher_st* EVP_camellia_192_ecb();
const struct evp_cipher_st* EVP_camellia_192_cbc();
const struct evp_cipher_st* EVP_camellia_192_cfb1();
const struct evp_cipher_st* EVP_camellia_192_cfb8();
const struct evp_cipher_st* EVP_camellia_192_cfb128();
const struct evp_cipher_st* EVP_camellia_192_ofb();
const struct evp_cipher_st* EVP_camellia_192_ctr();
const struct evp_cipher_st* EVP_camellia_256_ecb();
const struct evp_cipher_st* EVP_camellia_256_cbc();
const struct evp_cipher_st* EVP_camellia_256_cfb1();
const struct evp_cipher_st* EVP_camellia_256_cfb8();
const struct evp_cipher_st* EVP_camellia_256_cfb128();
const struct evp_cipher_st* EVP_camellia_256_ofb();
const struct evp_cipher_st* EVP_camellia_256_ctr();
const struct evp_cipher_st* EVP_chacha20();
const struct evp_cipher_st* EVP_chacha20_poly1305();
const struct evp_cipher_st* EVP_sm4_ecb();
const struct evp_cipher_st* EVP_sm4_cbc();
const struct evp_cipher_st* EVP_sm4_cfb128();
const struct evp_cipher_st* EVP_sm4_ofb();
const struct evp_cipher_st* EVP_sm4_ctr();
int EVP_add_cipher(const struct evp_cipher_st* cipher);
int EVP_add_digest(const struct evp_md_st* digest);
const struct evp_cipher_st* EVP_get_cipherbyname(const char* name);
const struct evp_md_st* EVP_get_digestbyname(const char* name);
void EVP_CIPHER_do_all(void (*fn)(const struct evp_cipher_st*,const char*,const char*,void*), void* arg);
void EVP_CIPHER_do_all_sorted(void (*fn)(const struct evp_cipher_st*,const char*,const char*,void*), void* arg);
void EVP_CIPHER_do_all_provided(struct ossl_lib_ctx_st* libctx, void (*fn)(struct evp_cipher_st*,void*), void* arg);
void EVP_MD_do_all(void (*fn)(const struct evp_md_st*,const char*,const char*,void*), void* arg);
void EVP_MD_do_all_sorted(void (*fn)(const struct evp_md_st*,const char*,const char*,void*), void* arg);
void EVP_MD_do_all_provided(struct ossl_lib_ctx_st* libctx, void (*fn)(struct evp_md_st*,void*), void* arg);
struct evp_mac_st* EVP_MAC_fetch(struct ossl_lib_ctx_st* libctx, const char* algorithm, const char* properties);
int EVP_MAC_up_ref(struct evp_mac_st* mac);
void EVP_MAC_free(struct evp_mac_st* mac);
const char* EVP_MAC_get0_name(const struct evp_mac_st* mac);
const char* EVP_MAC_get0_description(const struct evp_mac_st* mac);
int EVP_MAC_is_a(const struct evp_mac_st* mac, const char* name);
const struct ossl_provider_st* EVP_MAC_get0_provider(const struct evp_mac_st* mac);
int EVP_MAC_get_params(struct evp_mac_st* mac, struct ossl_param_st params[]);
struct evp_mac_ctx_st* EVP_MAC_CTX_new(struct evp_mac_st* mac);
void EVP_MAC_CTX_free(struct evp_mac_ctx_st* ctx);
struct evp_mac_ctx_st* EVP_MAC_CTX_dup(const struct evp_mac_ctx_st* src);
struct evp_mac_st* EVP_MAC_CTX_get0_mac(struct evp_mac_ctx_st* ctx);
int EVP_MAC_CTX_get_params(struct evp_mac_ctx_st* ctx, struct ossl_param_st params[]);
int EVP_MAC_CTX_set_params(struct evp_mac_ctx_st* ctx, const struct ossl_param_st params[]);
unsigned long  int EVP_MAC_CTX_get_mac_size(struct evp_mac_ctx_st* ctx);
unsigned long  int EVP_MAC_CTX_get_block_size(struct evp_mac_ctx_st* ctx);
unsigned char* EVP_Q_mac(struct ossl_lib_ctx_st* libctx, const char* name, const char* propq, const char* subalg, const struct ossl_param_st* params, const void* key, unsigned long  int keylen, const unsigned char* data, unsigned long  int datalen, unsigned char* out, unsigned long  int outsize, unsigned long  int* outlen);
int EVP_MAC_init(struct evp_mac_ctx_st* ctx, const unsigned char* key, unsigned long  int keylen, const struct ossl_param_st params[]);
int EVP_MAC_update(struct evp_mac_ctx_st* ctx, const unsigned char* data, unsigned long  int datalen);
int EVP_MAC_final(struct evp_mac_ctx_st* ctx, unsigned char* out, unsigned long  int* outl, unsigned long  int outsize);
int EVP_MAC_finalXOF(struct evp_mac_ctx_st* ctx, unsigned char* out, unsigned long  int outsize);
const struct ossl_param_st* EVP_MAC_gettable_params(const struct evp_mac_st* mac);
const struct ossl_param_st* EVP_MAC_gettable_ctx_params(const struct evp_mac_st* mac);
const struct ossl_param_st* EVP_MAC_settable_ctx_params(const struct evp_mac_st* mac);
const struct ossl_param_st* EVP_MAC_CTX_gettable_params(struct evp_mac_ctx_st* ctx);
const struct ossl_param_st* EVP_MAC_CTX_settable_params(struct evp_mac_ctx_st* ctx);
void EVP_MAC_do_all_provided(struct ossl_lib_ctx_st* libctx, void (*fn)(struct evp_mac_st*,void*), void* arg);
int EVP_MAC_names_do_all(const struct evp_mac_st* mac, void (*fn)(const char*,void*), void* data);
struct evp_rand_st* EVP_RAND_fetch(struct ossl_lib_ctx_st* libctx, const char* algorithm, const char* properties);
int EVP_RAND_up_ref(struct evp_rand_st* rand);
void EVP_RAND_free(struct evp_rand_st* rand);
const char* EVP_RAND_get0_name(const struct evp_rand_st* rand);
const char* EVP_RAND_get0_description(const struct evp_rand_st* md);
int EVP_RAND_is_a(const struct evp_rand_st* rand, const char* name);
const struct ossl_provider_st* EVP_RAND_get0_provider(const struct evp_rand_st* rand);
int EVP_RAND_get_params(struct evp_rand_st* rand, struct ossl_param_st params[]);
struct evp_rand_ctx_st* EVP_RAND_CTX_new(struct evp_rand_st* rand, struct evp_rand_ctx_st* parent);
int EVP_RAND_CTX_up_ref(struct evp_rand_ctx_st* ctx);
void EVP_RAND_CTX_free(struct evp_rand_ctx_st* ctx);
struct evp_rand_st* EVP_RAND_CTX_get0_rand(struct evp_rand_ctx_st* ctx);
int EVP_RAND_CTX_get_params(struct evp_rand_ctx_st* ctx, struct ossl_param_st params[]);
int EVP_RAND_CTX_set_params(struct evp_rand_ctx_st* ctx, const struct ossl_param_st params[]);
const struct ossl_param_st* EVP_RAND_gettable_params(const struct evp_rand_st* rand);
const struct ossl_param_st* EVP_RAND_gettable_ctx_params(const struct evp_rand_st* rand);
const struct ossl_param_st* EVP_RAND_settable_ctx_params(const struct evp_rand_st* rand);
const struct ossl_param_st* EVP_RAND_CTX_gettable_params(struct evp_rand_ctx_st* ctx);
const struct ossl_param_st* EVP_RAND_CTX_settable_params(struct evp_rand_ctx_st* ctx);
void EVP_RAND_do_all_provided(struct ossl_lib_ctx_st* libctx, void (*fn)(struct evp_rand_st*,void*), void* arg);
int EVP_RAND_names_do_all(const struct evp_rand_st* rand, void (*fn)(const char*,void*), void* data);
int EVP_RAND_instantiate(struct evp_rand_ctx_st* ctx, unsigned int strength, int prediction_resistance, const unsigned char* pstr, unsigned long  int pstr_len, const struct ossl_param_st params[]);
int EVP_RAND_uninstantiate(struct evp_rand_ctx_st* ctx);
int EVP_RAND_generate(struct evp_rand_ctx_st* ctx, unsigned char* out, unsigned long  int outlen, unsigned int strength, int prediction_resistance, const unsigned char* addin, unsigned long  int addin_len);
int EVP_RAND_reseed(struct evp_rand_ctx_st* ctx, int prediction_resistance, const unsigned char* ent, unsigned long  int ent_len, const unsigned char* addin, unsigned long  int addin_len);
int EVP_RAND_nonce(struct evp_rand_ctx_st* ctx, unsigned char* out, unsigned long  int outlen);
int EVP_RAND_enable_locking(struct evp_rand_ctx_st* ctx);
int EVP_RAND_verify_zeroization(struct evp_rand_ctx_st* ctx);
unsigned int EVP_RAND_get_strength(struct evp_rand_ctx_st* ctx);
int EVP_RAND_get_state(struct evp_rand_ctx_st* ctx);
int EVP_PKEY_decrypt_old(unsigned char* dec_key, const unsigned char* enc_key, int enc_key_len, struct evp_pkey_st* private_key);
int EVP_PKEY_encrypt_old(unsigned char* enc_key, const unsigned char* key, int key_len, struct evp_pkey_st* pub_key);
int EVP_PKEY_is_a(const struct evp_pkey_st* pkey, const char* name);
int EVP_PKEY_type_names_do_all(const struct evp_pkey_st* pkey, void (*fn)(const char*,void*), void* data);
int EVP_PKEY_type(int type);
int EVP_PKEY_get_id(const struct evp_pkey_st* pkey);
int EVP_PKEY_get_base_id(const struct evp_pkey_st* pkey);
int EVP_PKEY_get_bits(const struct evp_pkey_st* pkey);
int EVP_PKEY_get_security_bits(const struct evp_pkey_st* pkey);
int EVP_PKEY_get_size(const struct evp_pkey_st* pkey);
int EVP_PKEY_can_sign(const struct evp_pkey_st* pkey);
int EVP_PKEY_set_type(struct evp_pkey_st* pkey, int type);
int EVP_PKEY_set_type_str(struct evp_pkey_st* pkey, const char* str, int len);
int EVP_PKEY_set_type_by_keymgmt(struct evp_pkey_st* pkey, struct evp_keymgmt_st* keymgmt);
int EVP_PKEY_set1_engine(struct evp_pkey_st* pkey, struct engine_st* e);
struct engine_st* EVP_PKEY_get0_engine(const struct evp_pkey_st* pkey);
int EVP_PKEY_assign(struct evp_pkey_st* pkey, int type, void* key);
void* EVP_PKEY_get0(const struct evp_pkey_st* pkey);
const unsigned char* EVP_PKEY_get0_hmac(const struct evp_pkey_st* pkey, unsigned long  int* len);
const unsigned char* EVP_PKEY_get0_poly1305(const struct evp_pkey_st* pkey, unsigned long  int* len);
const unsigned char* EVP_PKEY_get0_siphash(const struct evp_pkey_st* pkey, unsigned long  int* len);
int EVP_PKEY_set1_RSA(struct evp_pkey_st* pkey, struct rsa_st* key);
const struct rsa_st* EVP_PKEY_get0_RSA(const struct evp_pkey_st* pkey);
struct rsa_st* EVP_PKEY_get1_RSA(struct evp_pkey_st* pkey);
int EVP_PKEY_set1_DSA(struct evp_pkey_st* pkey, struct dsa_st* key);
const struct dsa_st* EVP_PKEY_get0_DSA(const struct evp_pkey_st* pkey);
struct dsa_st* EVP_PKEY_get1_DSA(struct evp_pkey_st* pkey);
int EVP_PKEY_set1_DH(struct evp_pkey_st* pkey, struct dh_st* key);
const struct dh_st* EVP_PKEY_get0_DH(const struct evp_pkey_st* pkey);
struct dh_st* EVP_PKEY_get1_DH(struct evp_pkey_st* pkey);
int EVP_PKEY_set1_EC_KEY(struct evp_pkey_st* pkey, struct ec_key_st* key);
const struct ec_key_st* EVP_PKEY_get0_EC_KEY(const struct evp_pkey_st* pkey);
struct ec_key_st* EVP_PKEY_get1_EC_KEY(struct evp_pkey_st* pkey);
struct evp_pkey_st* EVP_PKEY_new();
int EVP_PKEY_up_ref(struct evp_pkey_st* pkey);
struct evp_pkey_st* EVP_PKEY_dup(struct evp_pkey_st* pkey);
void EVP_PKEY_free(struct evp_pkey_st* pkey);
const char* EVP_PKEY_get0_description(const struct evp_pkey_st* pkey);
const struct ossl_provider_st* EVP_PKEY_get0_provider(const struct evp_pkey_st* key);
struct evp_pkey_st* d2i_PublicKey(int type, struct evp_pkey_st** a, const unsigned char** pp, long length);
int i2d_PublicKey(const struct evp_pkey_st* a, unsigned char** pp);
struct evp_pkey_st* d2i_PrivateKey_ex(int type, struct evp_pkey_st** a, const unsigned char** pp, long length, struct ossl_lib_ctx_st* libctx, const char* propq);
struct evp_pkey_st* d2i_PrivateKey(int type, struct evp_pkey_st** a, const unsigned char** pp, long length);
struct evp_pkey_st* d2i_AutoPrivateKey_ex(struct evp_pkey_st** a, const unsigned char** pp, long length, struct ossl_lib_ctx_st* libctx, const char* propq);
struct evp_pkey_st* d2i_AutoPrivateKey(struct evp_pkey_st** a, const unsigned char** pp, long length);
int i2d_PrivateKey(const struct evp_pkey_st* a, unsigned char** pp);
int i2d_KeyParams(const struct evp_pkey_st* a, unsigned char** pp);
struct evp_pkey_st* d2i_KeyParams(int type, struct evp_pkey_st** a, const unsigned char** pp, long length);
int i2d_KeyParams_bio(struct bio_st* bp, const struct evp_pkey_st* pkey);
struct evp_pkey_st* d2i_KeyParams_bio(int type, struct evp_pkey_st** a, struct bio_st* in);
int EVP_PKEY_copy_parameters(struct evp_pkey_st* to, const struct evp_pkey_st* from);
int EVP_PKEY_missing_parameters(const struct evp_pkey_st* pkey);
int EVP_PKEY_save_parameters(struct evp_pkey_st* pkey, int mode);
int EVP_PKEY_parameters_eq(const struct evp_pkey_st* a, const struct evp_pkey_st* b);
int EVP_PKEY_eq(const struct evp_pkey_st* a, const struct evp_pkey_st* b);
int EVP_PKEY_cmp_parameters(const struct evp_pkey_st* a, const struct evp_pkey_st* b);
int EVP_PKEY_cmp(const struct evp_pkey_st* a, const struct evp_pkey_st* b);
int EVP_PKEY_print_public(struct bio_st* out, const struct evp_pkey_st* pkey, int indent, struct asn1_pctx_st* pctx);
int EVP_PKEY_print_private(struct bio_st* out, const struct evp_pkey_st* pkey, int indent, struct asn1_pctx_st* pctx);
int EVP_PKEY_print_params(struct bio_st* out, const struct evp_pkey_st* pkey, int indent, struct asn1_pctx_st* pctx);
int EVP_PKEY_print_public_fp(struct _IO_FILE* fp, const struct evp_pkey_st* pkey, int indent, struct asn1_pctx_st* pctx);
int EVP_PKEY_print_private_fp(struct _IO_FILE* fp, const struct evp_pkey_st* pkey, int indent, struct asn1_pctx_st* pctx);
int EVP_PKEY_print_params_fp(struct _IO_FILE* fp, const struct evp_pkey_st* pkey, int indent, struct asn1_pctx_st* pctx);
int EVP_PKEY_get_default_digest_nid(struct evp_pkey_st* pkey, int* pnid);
int EVP_PKEY_get_default_digest_name(struct evp_pkey_st* pkey, char* mdname, unsigned long  int mdname_sz);
int EVP_PKEY_digestsign_supports_digest(struct evp_pkey_st* pkey, struct ossl_lib_ctx_st* libctx, const char* name, const char* propq);
int EVP_PKEY_set1_encoded_public_key(struct evp_pkey_st* pkey, const unsigned char* pub, unsigned long  int publen);
unsigned long  int EVP_PKEY_get1_encoded_public_key(struct evp_pkey_st* pkey, unsigned char** ppub);
int EVP_CIPHER_param_to_asn1(struct evp_cipher_ctx_st* c, struct asn1_type_st* type);
int EVP_CIPHER_asn1_to_param(struct evp_cipher_ctx_st* c, struct asn1_type_st* type);
int EVP_CIPHER_set_asn1_iv(struct evp_cipher_ctx_st* c, struct asn1_type_st* type);
int EVP_CIPHER_get_asn1_iv(struct evp_cipher_ctx_st* c, struct asn1_type_st* type);
int PKCS5_PBE_keyivgen(struct evp_cipher_ctx_st* ctx, const char* pass, int passlen, struct asn1_type_st* param, const struct evp_cipher_st* cipher, const struct evp_md_st* md, int en_de);
int PKCS5_PBE_keyivgen_ex(struct evp_cipher_ctx_st* cctx, const char* pass, int passlen, struct asn1_type_st* param, const struct evp_cipher_st* cipher, const struct evp_md_st* md, int en_de, struct ossl_lib_ctx_st* libctx, const char* propq);
int PKCS5_PBKDF2_HMAC_SHA1(const char* pass, int passlen, const unsigned char* salt, int saltlen, int iter, int keylen, unsigned char* out);
int PKCS5_PBKDF2_HMAC(const char* pass, int passlen, const unsigned char* salt, int saltlen, int iter, const struct evp_md_st* digest, int keylen, unsigned char* out);
int PKCS5_v2_PBE_keyivgen(struct evp_cipher_ctx_st* ctx, const char* pass, int passlen, struct asn1_type_st* param, const struct evp_cipher_st* cipher, const struct evp_md_st* md, int en_de);
int PKCS5_v2_PBE_keyivgen_ex(struct evp_cipher_ctx_st* ctx, const char* pass, int passlen, struct asn1_type_st* param, const struct evp_cipher_st* cipher, const struct evp_md_st* md, int en_de, struct ossl_lib_ctx_st* libctx, const char* propq);
int EVP_PBE_scrypt(const char* pass, unsigned long  int passlen, const unsigned char* salt, unsigned long  int saltlen, unsigned long  int N, unsigned long  int r, unsigned long  int p, unsigned long  int maxmem, unsigned char* key, unsigned long  int keylen);
int EVP_PBE_scrypt_ex(const char* pass, unsigned long  int passlen, const unsigned char* salt, unsigned long  int saltlen, unsigned long  int N, unsigned long  int r, unsigned long  int p, unsigned long  int maxmem, unsigned char* key, unsigned long  int keylen, struct ossl_lib_ctx_st* ctx, const char* propq);
int PKCS5_v2_scrypt_keyivgen(struct evp_cipher_ctx_st* ctx, const char* pass, int passlen, struct asn1_type_st* param, const struct evp_cipher_st* c, const struct evp_md_st* md, int en_de);
int PKCS5_v2_scrypt_keyivgen_ex(struct evp_cipher_ctx_st* ctx, const char* pass, int passlen, struct asn1_type_st* param, const struct evp_cipher_st* c, const struct evp_md_st* md, int en_de, struct ossl_lib_ctx_st* libctx, const char* propq);
void PKCS5_PBE_add();
int EVP_PBE_CipherInit(struct asn1_object_st* pbe_obj, const char* pass, int passlen, struct asn1_type_st* param, struct evp_cipher_ctx_st* ctx, int en_de);
int EVP_PBE_CipherInit_ex(struct asn1_object_st* pbe_obj, const char* pass, int passlen, struct asn1_type_st* param, struct evp_cipher_ctx_st* ctx, int en_de, struct ossl_lib_ctx_st* libctx, const char* propq);
int EVP_PBE_alg_add_type(int pbe_type, int pbe_nid, int cipher_nid, int md_nid, int (*keygen)(struct evp_cipher_ctx_st*,const char*,int,struct asn1_type_st*,const struct evp_cipher_st*,const struct evp_md_st*,int));
int EVP_PBE_alg_add(int nid, const struct evp_cipher_st* cipher, const struct evp_md_st* md, int (*keygen)(struct evp_cipher_ctx_st*,const char*,int,struct asn1_type_st*,const struct evp_cipher_st*,const struct evp_md_st*,int));
int EVP_PBE_find(int type, int pbe_nid, int* pcnid, int* pmnid, int (*pkeygen)(struct evp_cipher_ctx_st*,const char*,int,struct asn1_type_st*,const struct evp_cipher_st*,const struct evp_md_st*,int));
int EVP_PBE_find_ex(int type, int pbe_nid, int* pcnid, int* pmnid, int (*pkeygen)(struct evp_cipher_ctx_st*,const char*,int,struct asn1_type_st*,const struct evp_cipher_st*,const struct evp_md_st*,int), int (*pkeygen_ex)(struct evp_cipher_ctx_st*,const char*,int,struct asn1_type_st*,const struct evp_cipher_st*,const struct evp_md_st*,int,struct ossl_lib_ctx_st*,const char*));
void EVP_PBE_cleanup();
int EVP_PBE_get(int* ptype, int* ppbe_nid, unsigned long  int num);
int EVP_PKEY_asn1_get_count();
const struct evp_pkey_asn1_method_st* EVP_PKEY_asn1_get0(int idx);
const struct evp_pkey_asn1_method_st* EVP_PKEY_asn1_find(struct engine_st** pe, int type);
const struct evp_pkey_asn1_method_st* EVP_PKEY_asn1_find_str(struct engine_st** pe, const char* str, int len);
int EVP_PKEY_asn1_add0(const struct evp_pkey_asn1_method_st* ameth);
int EVP_PKEY_asn1_add_alias(int to, int from);
int EVP_PKEY_asn1_get0_info(int* ppkey_id, int* pkey_base_id, int* ppkey_flags, const char** pinfo, const char** ppem_str, const struct evp_pkey_asn1_method_st* ameth);
const struct evp_pkey_asn1_method_st* EVP_PKEY_get0_asn1(const struct evp_pkey_st* pkey);
struct evp_pkey_asn1_method_st* EVP_PKEY_asn1_new(int id, int flags, const char* pem_str, const char* info);
void EVP_PKEY_asn1_copy(struct evp_pkey_asn1_method_st* dst, const struct evp_pkey_asn1_method_st* src);
void EVP_PKEY_asn1_free(struct evp_pkey_asn1_method_st* ameth);
void EVP_PKEY_asn1_set_public(struct evp_pkey_asn1_method_st* ameth, int (*pub_decode)(struct evp_pkey_st*,const struct X509_pubkey_st*), int (*pub_encode)(struct X509_pubkey_st*,const struct evp_pkey_st*), int (*pub_cmp)(const struct evp_pkey_st*,const struct evp_pkey_st*), int (*pub_print)(struct bio_st*,const struct evp_pkey_st*,int,struct asn1_pctx_st*), int (*pkey_size)(const struct evp_pkey_st*), int (*pkey_bits)(const struct evp_pkey_st*));
void EVP_PKEY_asn1_set_private(struct evp_pkey_asn1_method_st* ameth, int (*priv_decode)(struct evp_pkey_st*,const struct pkcs8_priv_key_info_st*), int (*priv_encode)(struct pkcs8_priv_key_info_st*,const struct evp_pkey_st*), int (*priv_print)(struct bio_st*,const struct evp_pkey_st*,int,struct asn1_pctx_st*));
void EVP_PKEY_asn1_set_param(struct evp_pkey_asn1_method_st* ameth, int (*param_decode)(struct evp_pkey_st*,const unsigned char**,int), int (*param_encode)(const struct evp_pkey_st*,unsigned char**), int (*param_missing)(const struct evp_pkey_st*), int (*param_copy)(struct evp_pkey_st*,const struct evp_pkey_st*), int (*param_cmp)(const struct evp_pkey_st*,const struct evp_pkey_st*), int (*param_print)(struct bio_st*,const struct evp_pkey_st*,int,struct asn1_pctx_st*));
void EVP_PKEY_asn1_set_free(struct evp_pkey_asn1_method_st* ameth, void (*pkey_free)(struct evp_pkey_st*));
void EVP_PKEY_asn1_set_ctrl(struct evp_pkey_asn1_method_st* ameth, int (*pkey_ctrl)(struct evp_pkey_st*,int,long,void*));
void EVP_PKEY_asn1_set_item(struct evp_pkey_asn1_method_st* ameth, int (*item_verify)(struct evp_md_ctx_st*,const struct ASN1_ITEM_st*,const void*,const struct X509_algor_st*,const struct asn1_string_st*,struct evp_pkey_st*), int (*item_sign)(struct evp_md_ctx_st*,const struct ASN1_ITEM_st*,const void*,struct X509_algor_st*,struct X509_algor_st*,struct asn1_string_st*));
void EVP_PKEY_asn1_set_siginf(struct evp_pkey_asn1_method_st* ameth, int (*siginf_set)(struct x509_sig_info_st*,const struct X509_algor_st*,const struct asn1_string_st*));
void EVP_PKEY_asn1_set_check(struct evp_pkey_asn1_method_st* ameth, int (*pkey_check)(const struct evp_pkey_st*));
void EVP_PKEY_asn1_set_public_check(struct evp_pkey_asn1_method_st* ameth, int (*pkey_pub_check)(const struct evp_pkey_st*));
void EVP_PKEY_asn1_set_param_check(struct evp_pkey_asn1_method_st* ameth, int (*pkey_param_check)(const struct evp_pkey_st*));
void EVP_PKEY_asn1_set_set_priv_key(struct evp_pkey_asn1_method_st* ameth, int (*set_priv_key)(struct evp_pkey_st*,const unsigned char*,unsigned long  int));
void EVP_PKEY_asn1_set_set_pub_key(struct evp_pkey_asn1_method_st* ameth, int (*set_pub_key)(struct evp_pkey_st*,const unsigned char*,unsigned long  int));
void EVP_PKEY_asn1_set_get_priv_key(struct evp_pkey_asn1_method_st* ameth, int (*get_priv_key)(const struct evp_pkey_st*,unsigned char*,unsigned long  int*));
void EVP_PKEY_asn1_set_get_pub_key(struct evp_pkey_asn1_method_st* ameth, int (*get_pub_key)(const struct evp_pkey_st*,unsigned char*,unsigned long  int*));
void EVP_PKEY_asn1_set_security_bits(struct evp_pkey_asn1_method_st* ameth, int (*pkey_security_bits)(const struct evp_pkey_st*));
int EVP_PKEY_CTX_get_signature_md(struct evp_pkey_ctx_st* ctx, const struct evp_md_st** md);
int EVP_PKEY_CTX_set_signature_md(struct evp_pkey_ctx_st* ctx, const struct evp_md_st* md);
int EVP_PKEY_CTX_set1_id(struct evp_pkey_ctx_st* ctx, const void* id, int len);
int EVP_PKEY_CTX_get1_id(struct evp_pkey_ctx_st* ctx, void* id);
int EVP_PKEY_CTX_get1_id_len(struct evp_pkey_ctx_st* ctx, unsigned long  int* id_len);
int EVP_PKEY_CTX_set_kem_op(struct evp_pkey_ctx_st* ctx, const char* op);
const char* EVP_PKEY_get0_type_name(const struct evp_pkey_st* key);
int EVP_PKEY_CTX_set_mac_key(struct evp_pkey_ctx_st* ctx, const unsigned char* key, int keylen);
const struct evp_pkey_method_st* EVP_PKEY_meth_find(int type);
struct evp_pkey_method_st* EVP_PKEY_meth_new(int id, int flags);
void EVP_PKEY_meth_get0_info(int* ppkey_id, int* pflags, const struct evp_pkey_method_st* meth);
void EVP_PKEY_meth_copy(struct evp_pkey_method_st* dst, const struct evp_pkey_method_st* src);
void EVP_PKEY_meth_free(struct evp_pkey_method_st* pmeth);
int EVP_PKEY_meth_add0(const struct evp_pkey_method_st* pmeth);
int EVP_PKEY_meth_remove(const struct evp_pkey_method_st* pmeth);
unsigned long  int EVP_PKEY_meth_get_count();
const struct evp_pkey_method_st* EVP_PKEY_meth_get0(unsigned long  int idx);
struct evp_keymgmt_st* EVP_KEYMGMT_fetch(struct ossl_lib_ctx_st* ctx, const char* algorithm, const char* properties);
int EVP_KEYMGMT_up_ref(struct evp_keymgmt_st* keymgmt);
void EVP_KEYMGMT_free(struct evp_keymgmt_st* keymgmt);
const struct ossl_provider_st* EVP_KEYMGMT_get0_provider(const struct evp_keymgmt_st* keymgmt);
const char* EVP_KEYMGMT_get0_name(const struct evp_keymgmt_st* keymgmt);
const char* EVP_KEYMGMT_get0_description(const struct evp_keymgmt_st* keymgmt);
int EVP_KEYMGMT_is_a(const struct evp_keymgmt_st* keymgmt, const char* name);
void EVP_KEYMGMT_do_all_provided(struct ossl_lib_ctx_st* libctx, void (*fn)(struct evp_keymgmt_st*,void*), void* arg);
int EVP_KEYMGMT_names_do_all(const struct evp_keymgmt_st* keymgmt, void (*fn)(const char*,void*), void* data);
const struct ossl_param_st* EVP_KEYMGMT_gettable_params(const struct evp_keymgmt_st* keymgmt);
const struct ossl_param_st* EVP_KEYMGMT_settable_params(const struct evp_keymgmt_st* keymgmt);
const struct ossl_param_st* EVP_KEYMGMT_gen_settable_params(const struct evp_keymgmt_st* keymgmt);
struct evp_pkey_ctx_st* EVP_PKEY_CTX_new(struct evp_pkey_st* pkey, struct engine_st* e);
struct evp_pkey_ctx_st* EVP_PKEY_CTX_new_id(int id, struct engine_st* e);
struct evp_pkey_ctx_st* EVP_PKEY_CTX_new_from_name(struct ossl_lib_ctx_st* libctx, const char* name, const char* propquery);
struct evp_pkey_ctx_st* EVP_PKEY_CTX_new_from_pkey(struct ossl_lib_ctx_st* libctx, struct evp_pkey_st* pkey, const char* propquery);
struct evp_pkey_ctx_st* EVP_PKEY_CTX_dup(const struct evp_pkey_ctx_st* ctx);
void EVP_PKEY_CTX_free(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_CTX_is_a(struct evp_pkey_ctx_st* ctx, const char* keytype);
int EVP_PKEY_CTX_get_params(struct evp_pkey_ctx_st* ctx, struct ossl_param_st* params);
const struct ossl_param_st* EVP_PKEY_CTX_gettable_params(const struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_CTX_set_params(struct evp_pkey_ctx_st* ctx, const struct ossl_param_st* params);
const struct ossl_param_st* EVP_PKEY_CTX_settable_params(const struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_CTX_ctrl(struct evp_pkey_ctx_st* ctx, int keytype, int optype, int cmd, int p1, void* p2);
int EVP_PKEY_CTX_ctrl_str(struct evp_pkey_ctx_st* ctx, const char* type, const char* value);
int EVP_PKEY_CTX_ctrl_uint64(struct evp_pkey_ctx_st* ctx, int keytype, int optype, int cmd, unsigned long  int value);
int EVP_PKEY_CTX_str2ctrl(struct evp_pkey_ctx_st* ctx, int cmd, const char* str);
int EVP_PKEY_CTX_hex2ctrl(struct evp_pkey_ctx_st* ctx, int cmd, const char* hex);
int EVP_PKEY_CTX_md(struct evp_pkey_ctx_st* ctx, int optype, int cmd, const char* md);
int EVP_PKEY_CTX_get_operation(struct evp_pkey_ctx_st* ctx);
void EVP_PKEY_CTX_set0_keygen_info(struct evp_pkey_ctx_st* ctx, int* dat, int datlen);
struct evp_pkey_st* EVP_PKEY_new_mac_key(int type, struct engine_st* e, const unsigned char* key, int keylen);
struct evp_pkey_st* EVP_PKEY_new_raw_private_key_ex(struct ossl_lib_ctx_st* libctx, const char* keytype, const char* propq, const unsigned char* priv, unsigned long  int len);
struct evp_pkey_st* EVP_PKEY_new_raw_private_key(int type, struct engine_st* e, const unsigned char* priv, unsigned long  int len);
struct evp_pkey_st* EVP_PKEY_new_raw_public_key_ex(struct ossl_lib_ctx_st* libctx, const char* keytype, const char* propq, const unsigned char* pub, unsigned long  int len);
struct evp_pkey_st* EVP_PKEY_new_raw_public_key(int type, struct engine_st* e, const unsigned char* pub, unsigned long  int len);
int EVP_PKEY_get_raw_private_key(const struct evp_pkey_st* pkey, unsigned char* priv, unsigned long  int* len);
int EVP_PKEY_get_raw_public_key(const struct evp_pkey_st* pkey, unsigned char* pub, unsigned long  int* len);
struct evp_pkey_st* EVP_PKEY_new_CMAC_key(struct engine_st* e, const unsigned char* priv, unsigned long  int len, const struct evp_cipher_st* cipher);
void EVP_PKEY_CTX_set_data(struct evp_pkey_ctx_st* ctx, void* data);
void* EVP_PKEY_CTX_get_data(const struct evp_pkey_ctx_st* ctx);
struct evp_pkey_st* EVP_PKEY_CTX_get0_pkey(struct evp_pkey_ctx_st* ctx);
struct evp_pkey_st* EVP_PKEY_CTX_get0_peerkey(struct evp_pkey_ctx_st* ctx);
void EVP_PKEY_CTX_set_app_data(struct evp_pkey_ctx_st* ctx, void* data);
void* EVP_PKEY_CTX_get_app_data(struct evp_pkey_ctx_st* ctx);
void EVP_SIGNATURE_free(struct evp_signature_st* signature);
int EVP_SIGNATURE_up_ref(struct evp_signature_st* signature);
struct ossl_provider_st* EVP_SIGNATURE_get0_provider(const struct evp_signature_st* signature);
struct evp_signature_st* EVP_SIGNATURE_fetch(struct ossl_lib_ctx_st* ctx, const char* algorithm, const char* properties);
int EVP_SIGNATURE_is_a(const struct evp_signature_st* signature, const char* name);
const char* EVP_SIGNATURE_get0_name(const struct evp_signature_st* signature);
const char* EVP_SIGNATURE_get0_description(const struct evp_signature_st* signature);
void EVP_SIGNATURE_do_all_provided(struct ossl_lib_ctx_st* libctx, void (*fn)(struct evp_signature_st*,void*), void* data);
int EVP_SIGNATURE_names_do_all(const struct evp_signature_st* signature, void (*fn)(const char*,void*), void* data);
const struct ossl_param_st* EVP_SIGNATURE_gettable_ctx_params(const struct evp_signature_st* sig);
const struct ossl_param_st* EVP_SIGNATURE_settable_ctx_params(const struct evp_signature_st* sig);
void EVP_ASYM_CIPHER_free(struct evp_asym_cipher_st* cipher);
int EVP_ASYM_CIPHER_up_ref(struct evp_asym_cipher_st* cipher);
struct ossl_provider_st* EVP_ASYM_CIPHER_get0_provider(const struct evp_asym_cipher_st* cipher);
struct evp_asym_cipher_st* EVP_ASYM_CIPHER_fetch(struct ossl_lib_ctx_st* ctx, const char* algorithm, const char* properties);
int EVP_ASYM_CIPHER_is_a(const struct evp_asym_cipher_st* cipher, const char* name);
const char* EVP_ASYM_CIPHER_get0_name(const struct evp_asym_cipher_st* cipher);
const char* EVP_ASYM_CIPHER_get0_description(const struct evp_asym_cipher_st* cipher);
void EVP_ASYM_CIPHER_do_all_provided(struct ossl_lib_ctx_st* libctx, void (*fn)(struct evp_asym_cipher_st*,void*), void* arg);
int EVP_ASYM_CIPHER_names_do_all(const struct evp_asym_cipher_st* cipher, void (*fn)(const char*,void*), void* data);
const struct ossl_param_st* EVP_ASYM_CIPHER_gettable_ctx_params(const struct evp_asym_cipher_st* ciph);
const struct ossl_param_st* EVP_ASYM_CIPHER_settable_ctx_params(const struct evp_asym_cipher_st* ciph);
void EVP_KEM_free(struct evp_kem_st* wrap);
int EVP_KEM_up_ref(struct evp_kem_st* wrap);
struct ossl_provider_st* EVP_KEM_get0_provider(const struct evp_kem_st* wrap);
struct evp_kem_st* EVP_KEM_fetch(struct ossl_lib_ctx_st* ctx, const char* algorithm, const char* properties);
int EVP_KEM_is_a(const struct evp_kem_st* wrap, const char* name);
const char* EVP_KEM_get0_name(const struct evp_kem_st* wrap);
const char* EVP_KEM_get0_description(const struct evp_kem_st* wrap);
void EVP_KEM_do_all_provided(struct ossl_lib_ctx_st* libctx, void (*fn)(struct evp_kem_st*,void*), void* arg);
int EVP_KEM_names_do_all(const struct evp_kem_st* wrap, void (*fn)(const char*,void*), void* data);
const struct ossl_param_st* EVP_KEM_gettable_ctx_params(const struct evp_kem_st* kem);
const struct ossl_param_st* EVP_KEM_settable_ctx_params(const struct evp_kem_st* kem);
int EVP_PKEY_sign_init(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_sign_init_ex(struct evp_pkey_ctx_st* ctx, const struct ossl_param_st params[]);
int EVP_PKEY_sign(struct evp_pkey_ctx_st* ctx, unsigned char* sig, unsigned long  int* siglen, const unsigned char* tbs, unsigned long  int tbslen);
int EVP_PKEY_verify_init(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_verify_init_ex(struct evp_pkey_ctx_st* ctx, const struct ossl_param_st params[]);
int EVP_PKEY_verify(struct evp_pkey_ctx_st* ctx, const unsigned char* sig, unsigned long  int siglen, const unsigned char* tbs, unsigned long  int tbslen);
int EVP_PKEY_verify_recover_init(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_verify_recover_init_ex(struct evp_pkey_ctx_st* ctx, const struct ossl_param_st params[]);
int EVP_PKEY_verify_recover(struct evp_pkey_ctx_st* ctx, unsigned char* rout, unsigned long  int* routlen, const unsigned char* sig, unsigned long  int siglen);
int EVP_PKEY_encrypt_init(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_encrypt_init_ex(struct evp_pkey_ctx_st* ctx, const struct ossl_param_st params[]);
int EVP_PKEY_encrypt(struct evp_pkey_ctx_st* ctx, unsigned char* out, unsigned long  int* outlen, const unsigned char* in, unsigned long  int inlen);
int EVP_PKEY_decrypt_init(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_decrypt_init_ex(struct evp_pkey_ctx_st* ctx, const struct ossl_param_st params[]);
int EVP_PKEY_decrypt(struct evp_pkey_ctx_st* ctx, unsigned char* out, unsigned long  int* outlen, const unsigned char* in, unsigned long  int inlen);
int EVP_PKEY_derive_init(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_derive_init_ex(struct evp_pkey_ctx_st* ctx, const struct ossl_param_st params[]);
int EVP_PKEY_derive_set_peer_ex(struct evp_pkey_ctx_st* ctx, struct evp_pkey_st* peer, int validate_peer);
int EVP_PKEY_derive_set_peer(struct evp_pkey_ctx_st* ctx, struct evp_pkey_st* peer);
int EVP_PKEY_derive(struct evp_pkey_ctx_st* ctx, unsigned char* key, unsigned long  int* keylen);
int EVP_PKEY_encapsulate_init(struct evp_pkey_ctx_st* ctx, const struct ossl_param_st params[]);
int EVP_PKEY_auth_encapsulate_init(struct evp_pkey_ctx_st* ctx, struct evp_pkey_st* authpriv, const struct ossl_param_st params[]);
int EVP_PKEY_encapsulate(struct evp_pkey_ctx_st* ctx, unsigned char* wrappedkey, unsigned long  int* wrappedkeylen, unsigned char* genkey, unsigned long  int* genkeylen);
int EVP_PKEY_decapsulate_init(struct evp_pkey_ctx_st* ctx, const struct ossl_param_st params[]);
int EVP_PKEY_auth_decapsulate_init(struct evp_pkey_ctx_st* ctx, struct evp_pkey_st* authpub, const struct ossl_param_st params[]);
int EVP_PKEY_decapsulate(struct evp_pkey_ctx_st* ctx, unsigned char* unwrapped, unsigned long  int* unwrappedlen, const unsigned char* wrapped, unsigned long  int wrappedlen);
int EVP_PKEY_fromdata_init(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_fromdata(struct evp_pkey_ctx_st* ctx, struct evp_pkey_st** ppkey, int selection, struct ossl_param_st param[]);
const struct ossl_param_st* EVP_PKEY_fromdata_settable(struct evp_pkey_ctx_st* ctx, int selection);
int EVP_PKEY_todata(const struct evp_pkey_st* pkey, int selection, struct ossl_param_st** params);
int EVP_PKEY_export(const struct evp_pkey_st* pkey, int selection, int (*export_cb)(const struct ossl_param_st*,void*), void* export_cbarg);
const struct ossl_param_st* EVP_PKEY_gettable_params(const struct evp_pkey_st* pkey);
int EVP_PKEY_get_params(const struct evp_pkey_st* pkey, struct ossl_param_st params[]);
int EVP_PKEY_get_int_param(const struct evp_pkey_st* pkey, const char* key_name, int* out);
int EVP_PKEY_get_size_t_param(const struct evp_pkey_st* pkey, const char* key_name, unsigned long  int* out);
int EVP_PKEY_get_bn_param(const struct evp_pkey_st* pkey, const char* key_name, struct bignum_st** bn);
int EVP_PKEY_get_utf8_string_param(const struct evp_pkey_st* pkey, const char* key_name, char* str, unsigned long  int max_buf_sz, unsigned long  int* out_sz);
int EVP_PKEY_get_octet_string_param(const struct evp_pkey_st* pkey, const char* key_name, unsigned char* buf, unsigned long  int max_buf_sz, unsigned long  int* out_sz);
const struct ossl_param_st* EVP_PKEY_settable_params(const struct evp_pkey_st* pkey);
int EVP_PKEY_set_params(struct evp_pkey_st* pkey, struct ossl_param_st params[]);
int EVP_PKEY_set_int_param(struct evp_pkey_st* pkey, const char* key_name, int in);
int EVP_PKEY_set_size_t_param(struct evp_pkey_st* pkey, const char* key_name, unsigned long  int in);
int EVP_PKEY_set_bn_param(struct evp_pkey_st* pkey, const char* key_name, const struct bignum_st* bn);
int EVP_PKEY_set_utf8_string_param(struct evp_pkey_st* pkey, const char* key_name, const char* str);
int EVP_PKEY_set_octet_string_param(struct evp_pkey_st* pkey, const char* key_name, const unsigned char* buf, unsigned long  int bsize);
int EVP_PKEY_get_ec_point_conv_form(const struct evp_pkey_st* pkey);
int EVP_PKEY_get_field_type(const struct evp_pkey_st* pkey);
struct evp_pkey_st* EVP_PKEY_Q_keygen(struct ossl_lib_ctx_st* libctx, const char* propq, const char* type, ...);
int EVP_PKEY_paramgen_init(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_paramgen(struct evp_pkey_ctx_st* ctx, struct evp_pkey_st** ppkey);
int EVP_PKEY_keygen_init(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_keygen(struct evp_pkey_ctx_st* ctx, struct evp_pkey_st** ppkey);
int EVP_PKEY_generate(struct evp_pkey_ctx_st* ctx, struct evp_pkey_st** ppkey);
int EVP_PKEY_check(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_public_check(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_public_check_quick(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_param_check(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_param_check_quick(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_private_check(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_pairwise_check(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_set_ex_data(struct evp_pkey_st* key, int idx, void* arg);
void* EVP_PKEY_get_ex_data(const struct evp_pkey_st* key, int idx);
void EVP_PKEY_CTX_set_cb(struct evp_pkey_ctx_st* ctx, int (*cb)(struct evp_pkey_ctx_st*));
int (*EVP_PKEY_CTX_get_cb(struct evp_pkey_ctx_st* ctx))(struct evp_pkey_ctx_st*);
int EVP_PKEY_CTX_get_keygen_info(struct evp_pkey_ctx_st* ctx, int idx);
void EVP_PKEY_meth_set_init(struct evp_pkey_method_st* pmeth, int (*init)(struct evp_pkey_ctx_st*));
void EVP_PKEY_meth_set_copy(struct evp_pkey_method_st* pmeth, int (*copy)(struct evp_pkey_ctx_st*,const struct evp_pkey_ctx_st*));
void EVP_PKEY_meth_set_cleanup(struct evp_pkey_method_st* pmeth, void (*cleanup)(struct evp_pkey_ctx_st*));
void EVP_PKEY_meth_set_paramgen(struct evp_pkey_method_st* pmeth, int (*paramgen_init)(struct evp_pkey_ctx_st*), int (*paramgen)(struct evp_pkey_ctx_st*,struct evp_pkey_st*));
void EVP_PKEY_meth_set_keygen(struct evp_pkey_method_st* pmeth, int (*keygen_init)(struct evp_pkey_ctx_st*), int (*keygen)(struct evp_pkey_ctx_st*,struct evp_pkey_st*));
void EVP_PKEY_meth_set_sign(struct evp_pkey_method_st* pmeth, int (*sign_init)(struct evp_pkey_ctx_st*), int (*sign)(struct evp_pkey_ctx_st*,unsigned char*,unsigned long  int*,const unsigned char*,unsigned long  int));
void EVP_PKEY_meth_set_verify(struct evp_pkey_method_st* pmeth, int (*verify_init)(struct evp_pkey_ctx_st*), int (*verify)(struct evp_pkey_ctx_st*,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int));
void EVP_PKEY_meth_set_verify_recover(struct evp_pkey_method_st* pmeth, int (*verify_recover_init)(struct evp_pkey_ctx_st*), int (*verify_recover)(struct evp_pkey_ctx_st*,unsigned char*,unsigned long  int*,const unsigned char*,unsigned long  int));
void EVP_PKEY_meth_set_signctx(struct evp_pkey_method_st* pmeth, int (*signctx_init)(struct evp_pkey_ctx_st*,struct evp_md_ctx_st*), int (*signctx)(struct evp_pkey_ctx_st*,unsigned char*,unsigned long  int*,struct evp_md_ctx_st*));
void EVP_PKEY_meth_set_verifyctx(struct evp_pkey_method_st* pmeth, int (*verifyctx_init)(struct evp_pkey_ctx_st*,struct evp_md_ctx_st*), int (*verifyctx)(struct evp_pkey_ctx_st*,const unsigned char*,int,struct evp_md_ctx_st*));
void EVP_PKEY_meth_set_encrypt(struct evp_pkey_method_st* pmeth, int (*encrypt_init)(struct evp_pkey_ctx_st*), int (*encryptfn)(struct evp_pkey_ctx_st*,unsigned char*,unsigned long  int*,const unsigned char*,unsigned long  int));
void EVP_PKEY_meth_set_decrypt(struct evp_pkey_method_st* pmeth, int (*decrypt_init)(struct evp_pkey_ctx_st*), int (*decrypt)(struct evp_pkey_ctx_st*,unsigned char*,unsigned long  int*,const unsigned char*,unsigned long  int));
void EVP_PKEY_meth_set_derive(struct evp_pkey_method_st* pmeth, int (*derive_init)(struct evp_pkey_ctx_st*), int (*derive)(struct evp_pkey_ctx_st*,unsigned char*,unsigned long  int*));
void EVP_PKEY_meth_set_ctrl(struct evp_pkey_method_st* pmeth, int (*ctrl)(struct evp_pkey_ctx_st*,int,int,void*), int (*ctrl_str)(struct evp_pkey_ctx_st*,const char*,const char*));
void EVP_PKEY_meth_set_digestsign(struct evp_pkey_method_st* pmeth, int (*digestsign)(struct evp_md_ctx_st*,unsigned char*,unsigned long  int*,const unsigned char*,unsigned long  int));
void EVP_PKEY_meth_set_digestverify(struct evp_pkey_method_st* pmeth, int (*digestverify)(struct evp_md_ctx_st*,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int));
void EVP_PKEY_meth_set_check(struct evp_pkey_method_st* pmeth, int (*check)(struct evp_pkey_st*));
void EVP_PKEY_meth_set_public_check(struct evp_pkey_method_st* pmeth, int (*check)(struct evp_pkey_st*));
void EVP_PKEY_meth_set_param_check(struct evp_pkey_method_st* pmeth, int (*check)(struct evp_pkey_st*));
void EVP_PKEY_meth_set_digest_custom(struct evp_pkey_method_st* pmeth, int (*digest_custom)(struct evp_pkey_ctx_st*,struct evp_md_ctx_st*));
void EVP_PKEY_meth_get_init(const struct evp_pkey_method_st* pmeth, int (**pinit)(struct evp_pkey_ctx_st*));
void EVP_PKEY_meth_get_copy(const struct evp_pkey_method_st* pmeth, int (**pcopy)(struct evp_pkey_ctx_st*,const struct evp_pkey_ctx_st*));
void EVP_PKEY_meth_get_cleanup(const struct evp_pkey_method_st* pmeth, void (**pcleanup)(struct evp_pkey_ctx_st*));
void EVP_PKEY_meth_get_paramgen(const struct evp_pkey_method_st* pmeth, int (**pparamgen_init)(struct evp_pkey_ctx_st*), int (**pparamgen)(struct evp_pkey_ctx_st*,struct evp_pkey_st*));
void EVP_PKEY_meth_get_keygen(const struct evp_pkey_method_st* pmeth, int (**pkeygen_init)(struct evp_pkey_ctx_st*), int (**pkeygen)(struct evp_pkey_ctx_st*,struct evp_pkey_st*));
void EVP_PKEY_meth_get_sign(const struct evp_pkey_method_st* pmeth, int (**psign_init)(struct evp_pkey_ctx_st*), int (**psign)(struct evp_pkey_ctx_st*,unsigned char*,unsigned long  int*,const unsigned char*,unsigned long  int));
void EVP_PKEY_meth_get_verify(const struct evp_pkey_method_st* pmeth, int (**pverify_init)(struct evp_pkey_ctx_st*), int (**pverify)(struct evp_pkey_ctx_st*,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int));
void EVP_PKEY_meth_get_verify_recover(const struct evp_pkey_method_st* pmeth, int (**pverify_recover_init)(struct evp_pkey_ctx_st*), int (**pverify_recover)(struct evp_pkey_ctx_st*,unsigned char*,unsigned long  int*,const unsigned char*,unsigned long  int));
void EVP_PKEY_meth_get_signctx(const struct evp_pkey_method_st* pmeth, int (**psignctx_init)(struct evp_pkey_ctx_st*,struct evp_md_ctx_st*), int (**psignctx)(struct evp_pkey_ctx_st*,unsigned char*,unsigned long  int*,struct evp_md_ctx_st*));
void EVP_PKEY_meth_get_verifyctx(const struct evp_pkey_method_st* pmeth, int (**pverifyctx_init)(struct evp_pkey_ctx_st*,struct evp_md_ctx_st*), int (**pverifyctx)(struct evp_pkey_ctx_st*,const unsigned char*,int,struct evp_md_ctx_st*));
void EVP_PKEY_meth_get_encrypt(const struct evp_pkey_method_st* pmeth, int (**pencrypt_init)(struct evp_pkey_ctx_st*), int (**pencryptfn)(struct evp_pkey_ctx_st*,unsigned char*,unsigned long  int*,const unsigned char*,unsigned long  int));
void EVP_PKEY_meth_get_decrypt(const struct evp_pkey_method_st* pmeth, int (**pdecrypt_init)(struct evp_pkey_ctx_st*), int (**pdecrypt)(struct evp_pkey_ctx_st*,unsigned char*,unsigned long  int*,const unsigned char*,unsigned long  int));
void EVP_PKEY_meth_get_derive(const struct evp_pkey_method_st* pmeth, int (**pderive_init)(struct evp_pkey_ctx_st*), int (**pderive)(struct evp_pkey_ctx_st*,unsigned char*,unsigned long  int*));
void EVP_PKEY_meth_get_ctrl(const struct evp_pkey_method_st* pmeth, int (**pctrl)(struct evp_pkey_ctx_st*,int,int,void*), int (**pctrl_str)(struct evp_pkey_ctx_st*,const char*,const char*));
void EVP_PKEY_meth_get_digestsign(const struct evp_pkey_method_st* pmeth, int (**digestsign)(struct evp_md_ctx_st*,unsigned char*,unsigned long  int*,const unsigned char*,unsigned long  int));
void EVP_PKEY_meth_get_digestverify(const struct evp_pkey_method_st* pmeth, int (**digestverify)(struct evp_md_ctx_st*,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int));
void EVP_PKEY_meth_get_check(const struct evp_pkey_method_st* pmeth, int (**pcheck)(struct evp_pkey_st*));
void EVP_PKEY_meth_get_public_check(const struct evp_pkey_method_st* pmeth, int (**pcheck)(struct evp_pkey_st*));
void EVP_PKEY_meth_get_param_check(const struct evp_pkey_method_st* pmeth, int (**pcheck)(struct evp_pkey_st*));
void EVP_PKEY_meth_get_digest_custom(const struct evp_pkey_method_st* pmeth, int (**pdigest_custom)(struct evp_pkey_ctx_st*,struct evp_md_ctx_st*));
void EVP_KEYEXCH_free(struct evp_keyexch_st* exchange);
int EVP_KEYEXCH_up_ref(struct evp_keyexch_st* exchange);
struct evp_keyexch_st* EVP_KEYEXCH_fetch(struct ossl_lib_ctx_st* ctx, const char* algorithm, const char* properties);
struct ossl_provider_st* EVP_KEYEXCH_get0_provider(const struct evp_keyexch_st* exchange);
int EVP_KEYEXCH_is_a(const struct evp_keyexch_st* keyexch, const char* name);
const char* EVP_KEYEXCH_get0_name(const struct evp_keyexch_st* keyexch);
const char* EVP_KEYEXCH_get0_description(const struct evp_keyexch_st* keyexch);
void EVP_KEYEXCH_do_all_provided(struct ossl_lib_ctx_st* libctx, void (*fn)(struct evp_keyexch_st*,void*), void* data);
int EVP_KEYEXCH_names_do_all(const struct evp_keyexch_st* keyexch, void (*fn)(const char*,void*), void* data);
const struct ossl_param_st* EVP_KEYEXCH_gettable_ctx_params(const struct evp_keyexch_st* keyexch);
const struct ossl_param_st* EVP_KEYEXCH_settable_ctx_params(const struct evp_keyexch_st* keyexch);
void EVP_add_alg_module();
int EVP_PKEY_CTX_set_group_name(struct evp_pkey_ctx_st* ctx, const char* name);
int EVP_PKEY_CTX_get_group_name(struct evp_pkey_ctx_st* ctx, char* name, unsigned long  int namelen);
int EVP_PKEY_get_group_name(const struct evp_pkey_st* pkey, char* name, unsigned long  int name_sz, unsigned long  int* gname_len);
struct ossl_lib_ctx_st* EVP_PKEY_CTX_get0_libctx(struct evp_pkey_ctx_st* ctx);
const char* EVP_PKEY_CTX_get0_propq(const struct evp_pkey_ctx_st* ctx);
const struct ossl_provider_st* EVP_PKEY_CTX_get0_provider(const struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_CTX_set_ec_paramgen_curve_nid(struct evp_pkey_ctx_st* ctx, int nid);
int EVP_PKEY_CTX_set_ec_param_enc(struct evp_pkey_ctx_st* ctx, int param_enc);
int EVP_PKEY_CTX_set_ecdh_cofactor_mode(struct evp_pkey_ctx_st* ctx, int cofactor_mode);
int EVP_PKEY_CTX_get_ecdh_cofactor_mode(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_CTX_set_ecdh_kdf_type(struct evp_pkey_ctx_st* ctx, int kdf);
int EVP_PKEY_CTX_get_ecdh_kdf_type(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_CTX_set_ecdh_kdf_md(struct evp_pkey_ctx_st* ctx, const struct evp_md_st* md);
int EVP_PKEY_CTX_get_ecdh_kdf_md(struct evp_pkey_ctx_st* ctx, const struct evp_md_st** md);
int EVP_PKEY_CTX_set_ecdh_kdf_outlen(struct evp_pkey_ctx_st* ctx, int len);
int EVP_PKEY_CTX_get_ecdh_kdf_outlen(struct evp_pkey_ctx_st* ctx, int* len);
int EVP_PKEY_CTX_set0_ecdh_kdf_ukm(struct evp_pkey_ctx_st* ctx, unsigned char* ukm, int len);
int EVP_PKEY_CTX_get0_ecdh_kdf_ukm(struct evp_pkey_ctx_st* ctx, unsigned char** ukm);
const char* OSSL_EC_curve_nid2name(int nid);
const struct ec_method_st* EC_GFp_simple_method();
const struct ec_method_st* EC_GFp_mont_method();
const struct ec_method_st* EC_GFp_nist_method();
struct ec_group_st* EC_GROUP_new(const struct ec_method_st* meth);
void EC_GROUP_clear_free(struct ec_group_st* group);
const struct ec_method_st* EC_GROUP_method_of(const struct ec_group_st* group);
int EC_METHOD_get_field_type(const struct ec_method_st* meth);
void EC_GROUP_free(struct ec_group_st* group);
int EC_GROUP_copy(struct ec_group_st* dst, const struct ec_group_st* src);
struct ec_group_st* EC_GROUP_dup(const struct ec_group_st* src);
int EC_GROUP_set_generator(struct ec_group_st* group, const struct ec_point_st* generator, const struct bignum_st* order, const struct bignum_st* cofactor);
const struct ec_point_st* EC_GROUP_get0_generator(const struct ec_group_st* group);
struct bn_mont_ctx_st* EC_GROUP_get_mont_data(const struct ec_group_st* group);
int EC_GROUP_get_order(const struct ec_group_st* group, struct bignum_st* order, struct bignum_ctx* ctx);
const struct bignum_st* EC_GROUP_get0_order(const struct ec_group_st* group);
int EC_GROUP_order_bits(const struct ec_group_st* group);
int EC_GROUP_get_cofactor(const struct ec_group_st* group, struct bignum_st* cofactor, struct bignum_ctx* ctx);
const struct bignum_st* EC_GROUP_get0_cofactor(const struct ec_group_st* group);
void EC_GROUP_set_curve_name(struct ec_group_st* group, int nid);
int EC_GROUP_get_curve_name(const struct ec_group_st* group);
const struct bignum_st* EC_GROUP_get0_field(const struct ec_group_st* group);
int EC_GROUP_get_field_type(const struct ec_group_st* group);
void EC_GROUP_set_asn1_flag(struct ec_group_st* group, int flag);
int EC_GROUP_get_asn1_flag(const struct ec_group_st* group);
void EC_GROUP_set_point_conversion_form(struct ec_group_st* group, enum anonymous_typeY36 form);
enum anonymous_typeY36 EC_GROUP_get_point_conversion_form(const struct ec_group_st* anonymous_var_nameX1498);
unsigned char* EC_GROUP_get0_seed(const struct ec_group_st* x);
unsigned long  int EC_GROUP_get_seed_len(const struct ec_group_st* anonymous_var_nameX1499);
unsigned long  int EC_GROUP_set_seed(struct ec_group_st* anonymous_var_nameX1500, const unsigned char* anonymous_var_nameX1501, unsigned long  int len);
int EC_GROUP_set_curve(struct ec_group_st* group, const struct bignum_st* p, const struct bignum_st* a, const struct bignum_st* b, struct bignum_ctx* ctx);
int EC_GROUP_get_curve(const struct ec_group_st* group, struct bignum_st* p, struct bignum_st* a, struct bignum_st* b, struct bignum_ctx* ctx);
int EC_GROUP_set_curve_GFp(struct ec_group_st* group, const struct bignum_st* p, const struct bignum_st* a, const struct bignum_st* b, struct bignum_ctx* ctx);
int EC_GROUP_get_curve_GFp(const struct ec_group_st* group, struct bignum_st* p, struct bignum_st* a, struct bignum_st* b, struct bignum_ctx* ctx);
int EC_GROUP_get_degree(const struct ec_group_st* group);
int EC_GROUP_check(const struct ec_group_st* group, struct bignum_ctx* ctx);
int EC_GROUP_check_discriminant(const struct ec_group_st* group, struct bignum_ctx* ctx);
int EC_GROUP_cmp(const struct ec_group_st* a, const struct ec_group_st* b, struct bignum_ctx* ctx);
struct ec_group_st* EC_GROUP_new_curve_GFp(const struct bignum_st* p, const struct bignum_st* a, const struct bignum_st* b, struct bignum_ctx* ctx);
struct ec_group_st* EC_GROUP_new_from_params(const struct ossl_param_st params[], struct ossl_lib_ctx_st* libctx, const char* propq);
struct ossl_param_st* EC_GROUP_to_params(const struct ec_group_st* group, struct ossl_lib_ctx_st* libctx, const char* propq, struct bignum_ctx* bnctx);
struct ec_group_st* EC_GROUP_new_by_curve_name_ex(struct ossl_lib_ctx_st* libctx, const char* propq, int nid);
struct ec_group_st* EC_GROUP_new_by_curve_name(int nid);
struct ec_group_st* EC_GROUP_new_from_ecparameters(const struct ec_parameters_st* params);
struct ec_parameters_st* EC_GROUP_get_ecparameters(const struct ec_group_st* group, struct ec_parameters_st* params);
struct ec_group_st* EC_GROUP_new_from_ecpkparameters(const struct ecpk_parameters_st* params);
struct ecpk_parameters_st* EC_GROUP_get_ecpkparameters(const struct ec_group_st* group, struct ecpk_parameters_st* params);
unsigned long  int EC_get_builtin_curves(struct anonymous_typeX37* r, unsigned long  int nitems);
const char* EC_curve_nid2nist(int nid);
int EC_curve_nist2nid(const char* name);
int EC_GROUP_check_named_curve(const struct ec_group_st* group, int nist_only, struct bignum_ctx* ctx);
struct ec_point_st* EC_POINT_new(const struct ec_group_st* group);
void EC_POINT_free(struct ec_point_st* point);
void EC_POINT_clear_free(struct ec_point_st* point);
int EC_POINT_copy(struct ec_point_st* dst, const struct ec_point_st* src);
struct ec_point_st* EC_POINT_dup(const struct ec_point_st* src, const struct ec_group_st* group);
int EC_POINT_set_to_infinity(const struct ec_group_st* group, struct ec_point_st* point);
const struct ec_method_st* EC_POINT_method_of(const struct ec_point_st* point);
int EC_POINT_set_Jprojective_coordinates_GFp(const struct ec_group_st* group, struct ec_point_st* p, const struct bignum_st* x, const struct bignum_st* y, const struct bignum_st* z, struct bignum_ctx* ctx);
int EC_POINT_get_Jprojective_coordinates_GFp(const struct ec_group_st* group, const struct ec_point_st* p, struct bignum_st* x, struct bignum_st* y, struct bignum_st* z, struct bignum_ctx* ctx);
int EC_POINT_set_affine_coordinates(const struct ec_group_st* group, struct ec_point_st* p, const struct bignum_st* x, const struct bignum_st* y, struct bignum_ctx* ctx);
int EC_POINT_get_affine_coordinates(const struct ec_group_st* group, const struct ec_point_st* p, struct bignum_st* x, struct bignum_st* y, struct bignum_ctx* ctx);
int EC_POINT_set_affine_coordinates_GFp(const struct ec_group_st* group, struct ec_point_st* p, const struct bignum_st* x, const struct bignum_st* y, struct bignum_ctx* ctx);
int EC_POINT_get_affine_coordinates_GFp(const struct ec_group_st* group, const struct ec_point_st* p, struct bignum_st* x, struct bignum_st* y, struct bignum_ctx* ctx);
int EC_POINT_set_compressed_coordinates(const struct ec_group_st* group, struct ec_point_st* p, const struct bignum_st* x, int y_bit, struct bignum_ctx* ctx);
int EC_POINT_set_compressed_coordinates_GFp(const struct ec_group_st* group, struct ec_point_st* p, const struct bignum_st* x, int y_bit, struct bignum_ctx* ctx);
unsigned long  int EC_POINT_point2oct(const struct ec_group_st* group, const struct ec_point_st* p, enum anonymous_typeY36 form, unsigned char* buf, unsigned long  int len, struct bignum_ctx* ctx);
int EC_POINT_oct2point(const struct ec_group_st* group, struct ec_point_st* p, const unsigned char* buf, unsigned long  int len, struct bignum_ctx* ctx);
unsigned long  int EC_POINT_point2buf(const struct ec_group_st* group, const struct ec_point_st* point, enum anonymous_typeY36 form, unsigned char** pbuf, struct bignum_ctx* ctx);
struct bignum_st* EC_POINT_point2bn(const struct ec_group_st* anonymous_var_nameX1502, const struct ec_point_st* anonymous_var_nameX1503, enum anonymous_typeY36 form, struct bignum_st* anonymous_var_nameX1504, struct bignum_ctx* anonymous_var_nameX1505);
struct ec_point_st* EC_POINT_bn2point(const struct ec_group_st* anonymous_var_nameX1506, const struct bignum_st* anonymous_var_nameX1507, struct ec_point_st* anonymous_var_nameX1508, struct bignum_ctx* anonymous_var_nameX1509);
char* EC_POINT_point2hex(const struct ec_group_st* anonymous_var_nameX1510, const struct ec_point_st* anonymous_var_nameX1511, enum anonymous_typeY36 form, struct bignum_ctx* anonymous_var_nameX1512);
struct ec_point_st* EC_POINT_hex2point(const struct ec_group_st* anonymous_var_nameX1513, const char* anonymous_var_nameX1514, struct ec_point_st* anonymous_var_nameX1515, struct bignum_ctx* anonymous_var_nameX1516);
int EC_POINT_add(const struct ec_group_st* group, struct ec_point_st* r, const struct ec_point_st* a, const struct ec_point_st* b, struct bignum_ctx* ctx);
int EC_POINT_dbl(const struct ec_group_st* group, struct ec_point_st* r, const struct ec_point_st* a, struct bignum_ctx* ctx);
int EC_POINT_invert(const struct ec_group_st* group, struct ec_point_st* a, struct bignum_ctx* ctx);
int EC_POINT_is_at_infinity(const struct ec_group_st* group, const struct ec_point_st* p);
int EC_POINT_is_on_curve(const struct ec_group_st* group, const struct ec_point_st* point, struct bignum_ctx* ctx);
int EC_POINT_cmp(const struct ec_group_st* group, const struct ec_point_st* a, const struct ec_point_st* b, struct bignum_ctx* ctx);
int EC_POINT_make_affine(const struct ec_group_st* group, struct ec_point_st* point, struct bignum_ctx* ctx);
int EC_POINTs_make_affine(const struct ec_group_st* group, unsigned long  int num, struct ec_point_st* points[], struct bignum_ctx* ctx);
int EC_POINTs_mul(const struct ec_group_st* group, struct ec_point_st* r, const struct bignum_st* n, unsigned long  int num, const struct ec_point_st* p[], const struct bignum_st* m[], struct bignum_ctx* ctx);
int EC_POINT_mul(const struct ec_group_st* group, struct ec_point_st* r, const struct bignum_st* n, const struct ec_point_st* q, const struct bignum_st* m, struct bignum_ctx* ctx);
int EC_GROUP_precompute_mult(struct ec_group_st* group, struct bignum_ctx* ctx);
int EC_GROUP_have_precompute_mult(const struct ec_group_st* group);
const struct ASN1_ITEM_st* ECPKPARAMETERS_it();
struct ecpk_parameters_st* ECPKPARAMETERS_new();
void ECPKPARAMETERS_free(struct ecpk_parameters_st* a);
const struct ASN1_ITEM_st* ECPARAMETERS_it();
struct ec_parameters_st* ECPARAMETERS_new();
void ECPARAMETERS_free(struct ec_parameters_st* a);
int EC_GROUP_get_basis_type(const struct ec_group_st* anonymous_var_nameX1517);
struct ec_group_st* d2i_ECPKParameters(struct ec_group_st** anonymous_var_nameX1518, const unsigned char** in, long len);
int i2d_ECPKParameters(const struct ec_group_st* anonymous_var_nameX1519, unsigned char** out);
int ECPKParameters_print(struct bio_st* bp, const struct ec_group_st* x, int off);
int ECPKParameters_print_fp(struct _IO_FILE* fp, const struct ec_group_st* x, int off);
struct ec_key_st* EC_KEY_new_ex(struct ossl_lib_ctx_st* ctx, const char* propq);
struct ec_key_st* EC_KEY_new();
int EC_KEY_get_flags(const struct ec_key_st* key);
void EC_KEY_set_flags(struct ec_key_st* key, int flags);
void EC_KEY_clear_flags(struct ec_key_st* key, int flags);
int EC_KEY_decoded_from_explicit_params(const struct ec_key_st* key);
struct ec_key_st* EC_KEY_new_by_curve_name_ex(struct ossl_lib_ctx_st* ctx, const char* propq, int nid);
struct ec_key_st* EC_KEY_new_by_curve_name(int nid);
void EC_KEY_free(struct ec_key_st* key);
struct ec_key_st* EC_KEY_copy(struct ec_key_st* dst, const struct ec_key_st* src);
struct ec_key_st* EC_KEY_dup(const struct ec_key_st* src);
int EC_KEY_up_ref(struct ec_key_st* key);
struct engine_st* EC_KEY_get0_engine(const struct ec_key_st* eckey);
const struct ec_group_st* EC_KEY_get0_group(const struct ec_key_st* key);
int EC_KEY_set_group(struct ec_key_st* key, const struct ec_group_st* group);
const struct bignum_st* EC_KEY_get0_private_key(const struct ec_key_st* key);
int EC_KEY_set_private_key(struct ec_key_st* key, const struct bignum_st* prv);
const struct ec_point_st* EC_KEY_get0_public_key(const struct ec_key_st* key);
int EC_KEY_set_public_key(struct ec_key_st* key, const struct ec_point_st* pub);
unsigned int EC_KEY_get_enc_flags(const struct ec_key_st* key);
void EC_KEY_set_enc_flags(struct ec_key_st* eckey, unsigned int flags);
enum anonymous_typeY36 EC_KEY_get_conv_form(const struct ec_key_st* key);
void EC_KEY_set_conv_form(struct ec_key_st* eckey, enum anonymous_typeY36 cform);
int EC_KEY_set_ex_data(struct ec_key_st* key, int idx, void* arg);
void* EC_KEY_get_ex_data(const struct ec_key_st* key, int idx);
void EC_KEY_set_asn1_flag(struct ec_key_st* eckey, int asn1_flag);
int EC_KEY_precompute_mult(struct ec_key_st* key, struct bignum_ctx* ctx);
int EC_KEY_generate_key(struct ec_key_st* key);
int EC_KEY_check_key(const struct ec_key_st* key);
int EC_KEY_can_sign(const struct ec_key_st* eckey);
int EC_KEY_set_public_key_affine_coordinates(struct ec_key_st* key, struct bignum_st* x, struct bignum_st* y);
unsigned long  int EC_KEY_key2buf(const struct ec_key_st* key, enum anonymous_typeY36 form, unsigned char** pbuf, struct bignum_ctx* ctx);
int EC_KEY_oct2key(struct ec_key_st* key, const unsigned char* buf, unsigned long  int len, struct bignum_ctx* ctx);
int EC_KEY_oct2priv(struct ec_key_st* key, const unsigned char* buf, unsigned long  int len);
unsigned long  int EC_KEY_priv2oct(const struct ec_key_st* key, unsigned char* buf, unsigned long  int len);
unsigned long  int EC_KEY_priv2buf(const struct ec_key_st* eckey, unsigned char** pbuf);
struct ec_key_st* d2i_ECPrivateKey(struct ec_key_st** key, const unsigned char** in, long len);
int i2d_ECPrivateKey(const struct ec_key_st* key, unsigned char** out);
struct ec_key_st* d2i_ECParameters(struct ec_key_st** key, const unsigned char** in, long len);
int i2d_ECParameters(const struct ec_key_st* key, unsigned char** out);
struct ec_key_st* o2i_ECPublicKey(struct ec_key_st** key, const unsigned char** in, long len);
int i2o_ECPublicKey(const struct ec_key_st* key, unsigned char** out);
int ECParameters_print(struct bio_st* bp, const struct ec_key_st* key);
int EC_KEY_print(struct bio_st* bp, const struct ec_key_st* key, int off);
int ECParameters_print_fp(struct _IO_FILE* fp, const struct ec_key_st* key);
int EC_KEY_print_fp(struct _IO_FILE* fp, const struct ec_key_st* key, int off);
const struct ec_key_method_st* EC_KEY_OpenSSL();
const struct ec_key_method_st* EC_KEY_get_default_method();
void EC_KEY_set_default_method(const struct ec_key_method_st* meth);
const struct ec_key_method_st* EC_KEY_get_method(const struct ec_key_st* key);
int EC_KEY_set_method(struct ec_key_st* key, const struct ec_key_method_st* meth);
struct ec_key_st* EC_KEY_new_method(struct engine_st* engine);
int ECDH_KDF_X9_62(unsigned char* out, unsigned long  int outlen, const unsigned char* Z, unsigned long  int Zlen, const unsigned char* sinfo, unsigned long  int sinfolen, const struct evp_md_st* md);
int ECDH_compute_key(void* out, unsigned long  int outlen, const struct ec_point_st* pub_key, const struct ec_key_st* ecdh, void* (*KDF)(const void*,unsigned long  int,void*,unsigned long  int*));
struct ECDSA_SIG_st* ECDSA_SIG_new();
void ECDSA_SIG_free(struct ECDSA_SIG_st* sig);
struct ECDSA_SIG_st* d2i_ECDSA_SIG(struct ECDSA_SIG_st** a, const unsigned char** in, long len);
int i2d_ECDSA_SIG(const struct ECDSA_SIG_st* a, unsigned char** out);
void ECDSA_SIG_get0(const struct ECDSA_SIG_st* sig, const struct bignum_st** pr, const struct bignum_st** ps);
const struct bignum_st* ECDSA_SIG_get0_r(const struct ECDSA_SIG_st* sig);
const struct bignum_st* ECDSA_SIG_get0_s(const struct ECDSA_SIG_st* sig);
int ECDSA_SIG_set0(struct ECDSA_SIG_st* sig, struct bignum_st* r, struct bignum_st* s);
struct ECDSA_SIG_st* ECDSA_do_sign(const unsigned char* dgst, int dgst_len, struct ec_key_st* eckey);
struct ECDSA_SIG_st* ECDSA_do_sign_ex(const unsigned char* dgst, int dgstlen, const struct bignum_st* kinv, const struct bignum_st* rp, struct ec_key_st* eckey);
int ECDSA_do_verify(const unsigned char* dgst, int dgst_len, const struct ECDSA_SIG_st* sig, struct ec_key_st* eckey);
int ECDSA_sign_setup(struct ec_key_st* eckey, struct bignum_ctx* ctx, struct bignum_st** kinv, struct bignum_st** rp);
int ECDSA_sign(int type, const unsigned char* dgst, int dgstlen, unsigned char* sig, unsigned int* siglen, struct ec_key_st* eckey);
int ECDSA_sign_ex(int type, const unsigned char* dgst, int dgstlen, unsigned char* sig, unsigned int* siglen, const struct bignum_st* kinv, const struct bignum_st* rp, struct ec_key_st* eckey);
int ECDSA_verify(int type, const unsigned char* dgst, int dgstlen, const unsigned char* sig, int siglen, struct ec_key_st* eckey);
int ECDSA_size(const struct ec_key_st* eckey);
struct ec_key_method_st* EC_KEY_METHOD_new(const struct ec_key_method_st* meth);
void EC_KEY_METHOD_free(struct ec_key_method_st* meth);
void EC_KEY_METHOD_set_init(struct ec_key_method_st* meth, int (*init)(struct ec_key_st*), void (*finish)(struct ec_key_st*), int (*copy)(struct ec_key_st*,const struct ec_key_st*), int (*set_group)(struct ec_key_st*,const struct ec_group_st*), int (*set_private)(struct ec_key_st*,const struct bignum_st*), int (*set_public)(struct ec_key_st*,const struct ec_point_st*));
void EC_KEY_METHOD_set_keygen(struct ec_key_method_st* meth, int (*keygen)(struct ec_key_st*));
void EC_KEY_METHOD_set_compute_key(struct ec_key_method_st* meth, int (*ckey)(unsigned char**,unsigned long  int*,const struct ec_point_st*,const struct ec_key_st*));
void EC_KEY_METHOD_set_sign(struct ec_key_method_st* meth, int (*sign)(int,const unsigned char*,int,unsigned char*,unsigned int*,const struct bignum_st*,const struct bignum_st*,struct ec_key_st*), int (*sign_setup)(struct ec_key_st*,struct bignum_ctx*,struct bignum_st**,struct bignum_st**), struct ECDSA_SIG_st* (*sign_sig)(const unsigned char*,int,const struct bignum_st*,const struct bignum_st*,struct ec_key_st*));
void EC_KEY_METHOD_set_verify(struct ec_key_method_st* meth, int (*verify)(int,const unsigned char*,int,const unsigned char*,int,struct ec_key_st*), int (*verify_sig)(const unsigned char*,int,const struct ECDSA_SIG_st*,struct ec_key_st*));
void EC_KEY_METHOD_get_init(const struct ec_key_method_st* meth, int (**pinit)(struct ec_key_st*), void (**pfinish)(struct ec_key_st*), int (**pcopy)(struct ec_key_st*,const struct ec_key_st*), int (**pset_group)(struct ec_key_st*,const struct ec_group_st*), int (**pset_private)(struct ec_key_st*,const struct bignum_st*), int (**pset_public)(struct ec_key_st*,const struct ec_point_st*));
void EC_KEY_METHOD_get_keygen(const struct ec_key_method_st* meth, int (**pkeygen)(struct ec_key_st*));
void EC_KEY_METHOD_get_compute_key(const struct ec_key_method_st* meth, int (**pck)(unsigned char**,unsigned long  int*,const struct ec_point_st*,const struct ec_key_st*));
void EC_KEY_METHOD_get_sign(const struct ec_key_method_st* meth, int (**psign)(int,const unsigned char*,int,unsigned char*,unsigned int*,const struct bignum_st*,const struct bignum_st*,struct ec_key_st*), int (**psign_setup)(struct ec_key_st*,struct bignum_ctx*,struct bignum_st**,struct bignum_st**), struct ECDSA_SIG_st* (**psign_sig)(const unsigned char*,int,const struct bignum_st*,const struct bignum_st*,struct ec_key_st*));
void EC_KEY_METHOD_get_verify(const struct ec_key_method_st* meth, int (**pverify)(int,const unsigned char*,int,const unsigned char*,int,struct ec_key_st*), int (**pverify_sig)(const unsigned char*,int,const struct ECDSA_SIG_st*,struct ec_key_st*));
int EVP_PKEY_CTX_set_rsa_padding(struct evp_pkey_ctx_st* ctx, int pad_mode);
int EVP_PKEY_CTX_get_rsa_padding(struct evp_pkey_ctx_st* ctx, int* pad_mode);
int EVP_PKEY_CTX_set_rsa_pss_saltlen(struct evp_pkey_ctx_st* ctx, int saltlen);
int EVP_PKEY_CTX_get_rsa_pss_saltlen(struct evp_pkey_ctx_st* ctx, int* saltlen);
int EVP_PKEY_CTX_set_rsa_keygen_bits(struct evp_pkey_ctx_st* ctx, int bits);
int EVP_PKEY_CTX_set1_rsa_keygen_pubexp(struct evp_pkey_ctx_st* ctx, struct bignum_st* pubexp);
int EVP_PKEY_CTX_set_rsa_keygen_primes(struct evp_pkey_ctx_st* ctx, int primes);
int EVP_PKEY_CTX_set_rsa_pss_keygen_saltlen(struct evp_pkey_ctx_st* ctx, int saltlen);
int EVP_PKEY_CTX_set_rsa_keygen_pubexp(struct evp_pkey_ctx_st* ctx, struct bignum_st* pubexp);
int EVP_PKEY_CTX_set_rsa_mgf1_md(struct evp_pkey_ctx_st* ctx, const struct evp_md_st* md);
int EVP_PKEY_CTX_set_rsa_mgf1_md_name(struct evp_pkey_ctx_st* ctx, const char* mdname, const char* mdprops);
int EVP_PKEY_CTX_get_rsa_mgf1_md(struct evp_pkey_ctx_st* ctx, const struct evp_md_st** md);
int EVP_PKEY_CTX_get_rsa_mgf1_md_name(struct evp_pkey_ctx_st* ctx, char* name, unsigned long  int namelen);
int EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md(struct evp_pkey_ctx_st* ctx, const struct evp_md_st* md);
int EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md_name(struct evp_pkey_ctx_st* ctx, const char* mdname);
int EVP_PKEY_CTX_set_rsa_pss_keygen_md(struct evp_pkey_ctx_st* ctx, const struct evp_md_st* md);
int EVP_PKEY_CTX_set_rsa_pss_keygen_md_name(struct evp_pkey_ctx_st* ctx, const char* mdname, const char* mdprops);
int EVP_PKEY_CTX_set_rsa_oaep_md(struct evp_pkey_ctx_st* ctx, const struct evp_md_st* md);
int EVP_PKEY_CTX_set_rsa_oaep_md_name(struct evp_pkey_ctx_st* ctx, const char* mdname, const char* mdprops);
int EVP_PKEY_CTX_get_rsa_oaep_md(struct evp_pkey_ctx_st* ctx, const struct evp_md_st** md);
int EVP_PKEY_CTX_get_rsa_oaep_md_name(struct evp_pkey_ctx_st* ctx, char* name, unsigned long  int namelen);
int EVP_PKEY_CTX_set0_rsa_oaep_label(struct evp_pkey_ctx_st* ctx, void* label, int llen);
int EVP_PKEY_CTX_get0_rsa_oaep_label(struct evp_pkey_ctx_st* ctx, unsigned char** label);
struct rsa_st* RSA_new();
struct rsa_st* RSA_new_method(struct engine_st* engine);
int RSA_bits(const struct rsa_st* rsa);
int RSA_size(const struct rsa_st* rsa);
int RSA_security_bits(const struct rsa_st* rsa);
int RSA_set0_key(struct rsa_st* r, struct bignum_st* n, struct bignum_st* e, struct bignum_st* d);
int RSA_set0_factors(struct rsa_st* r, struct bignum_st* p, struct bignum_st* q);
int RSA_set0_crt_params(struct rsa_st* r, struct bignum_st* dmp1, struct bignum_st* dmq1, struct bignum_st* iqmp);
int RSA_set0_multi_prime_params(struct rsa_st* r, struct bignum_st* primes[], struct bignum_st* exps[], struct bignum_st* coeffs[], int pnum);
void RSA_get0_key(const struct rsa_st* r, const struct bignum_st** n, const struct bignum_st** e, const struct bignum_st** d);
void RSA_get0_factors(const struct rsa_st* r, const struct bignum_st** p, const struct bignum_st** q);
int RSA_get_multi_prime_extra_count(const struct rsa_st* r);
int RSA_get0_multi_prime_factors(const struct rsa_st* r, const struct bignum_st* primes[]);
void RSA_get0_crt_params(const struct rsa_st* r, const struct bignum_st** dmp1, const struct bignum_st** dmq1, const struct bignum_st** iqmp);
int RSA_get0_multi_prime_crt_params(const struct rsa_st* r, const struct bignum_st* exps[], const struct bignum_st* coeffs[]);
const struct bignum_st* RSA_get0_n(const struct rsa_st* d);
const struct bignum_st* RSA_get0_e(const struct rsa_st* d);
const struct bignum_st* RSA_get0_d(const struct rsa_st* d);
const struct bignum_st* RSA_get0_p(const struct rsa_st* d);
const struct bignum_st* RSA_get0_q(const struct rsa_st* d);
const struct bignum_st* RSA_get0_dmp1(const struct rsa_st* r);
const struct bignum_st* RSA_get0_dmq1(const struct rsa_st* r);
const struct bignum_st* RSA_get0_iqmp(const struct rsa_st* r);
const struct rsa_pss_params_st* RSA_get0_pss_params(const struct rsa_st* r);
void RSA_clear_flags(struct rsa_st* r, int flags);
int RSA_test_flags(const struct rsa_st* r, int flags);
void RSA_set_flags(struct rsa_st* r, int flags);
int RSA_get_version(struct rsa_st* r);
struct engine_st* RSA_get0_engine(const struct rsa_st* r);
struct rsa_st* RSA_generate_key(int bits, unsigned long  int e, void (*callback)(int,int,void*), void* cb_arg);
int RSA_generate_key_ex(struct rsa_st* rsa, int bits, struct bignum_st* e, struct bn_gencb_st* cb);
int RSA_generate_multi_prime_key(struct rsa_st* rsa, int bits, int primes, struct bignum_st* e, struct bn_gencb_st* cb);
int RSA_X931_derive_ex(struct rsa_st* rsa, struct bignum_st* p1, struct bignum_st* p2, struct bignum_st* q1, struct bignum_st* q2, const struct bignum_st* Xp1, const struct bignum_st* Xp2, const struct bignum_st* Xp, const struct bignum_st* Xq1, const struct bignum_st* Xq2, const struct bignum_st* Xq, const struct bignum_st* e, struct bn_gencb_st* cb);
int RSA_X931_generate_key_ex(struct rsa_st* rsa, int bits, const struct bignum_st* e, struct bn_gencb_st* cb);
int RSA_check_key(const struct rsa_st* anonymous_var_nameX1523);
int RSA_check_key_ex(const struct rsa_st* anonymous_var_nameX1524, struct bn_gencb_st* cb);
int RSA_public_encrypt(int flen, const unsigned char* from, unsigned char* to, struct rsa_st* rsa, int padding);
int RSA_private_encrypt(int flen, const unsigned char* from, unsigned char* to, struct rsa_st* rsa, int padding);
int RSA_public_decrypt(int flen, const unsigned char* from, unsigned char* to, struct rsa_st* rsa, int padding);
int RSA_private_decrypt(int flen, const unsigned char* from, unsigned char* to, struct rsa_st* rsa, int padding);
void RSA_free(struct rsa_st* r);
int RSA_up_ref(struct rsa_st* r);
int RSA_flags(const struct rsa_st* r);
void RSA_set_default_method(const struct rsa_meth_st* meth);
const struct rsa_meth_st* RSA_get_default_method();
const struct rsa_meth_st* RSA_null_method();
const struct rsa_meth_st* RSA_get_method(const struct rsa_st* rsa);
int RSA_set_method(struct rsa_st* rsa, const struct rsa_meth_st* meth);
const struct rsa_meth_st* RSA_PKCS1_OpenSSL();
struct rsa_st* d2i_RSAPublicKey(struct rsa_st** a, const unsigned char** in, long len);
int i2d_RSAPublicKey(const struct rsa_st* a, unsigned char** out);
const struct ASN1_ITEM_st* RSAPublicKey_it();
struct rsa_st* d2i_RSAPrivateKey(struct rsa_st** a, const unsigned char** in, long len);
int i2d_RSAPrivateKey(const struct rsa_st* a, unsigned char** out);
const struct ASN1_ITEM_st* RSAPrivateKey_it();
int RSA_pkey_ctx_ctrl(struct evp_pkey_ctx_st* ctx, int optype, int cmd, int p1, void* p2);
struct rsa_pss_params_st* RSA_PSS_PARAMS_new();
void RSA_PSS_PARAMS_free(struct rsa_pss_params_st* a);
struct rsa_pss_params_st* d2i_RSA_PSS_PARAMS(struct rsa_pss_params_st** a, const unsigned char** in, long len);
int i2d_RSA_PSS_PARAMS(const struct rsa_pss_params_st* a, unsigned char** out);
const struct ASN1_ITEM_st* RSA_PSS_PARAMS_it();
struct rsa_pss_params_st* RSA_PSS_PARAMS_dup(const struct rsa_pss_params_st* a);
struct rsa_oaep_params_st* RSA_OAEP_PARAMS_new();
void RSA_OAEP_PARAMS_free(struct rsa_oaep_params_st* a);
struct rsa_oaep_params_st* d2i_RSA_OAEP_PARAMS(struct rsa_oaep_params_st** a, const unsigned char** in, long len);
int i2d_RSA_OAEP_PARAMS(const struct rsa_oaep_params_st* a, unsigned char** out);
const struct ASN1_ITEM_st* RSA_OAEP_PARAMS_it();
int RSA_print_fp(struct _IO_FILE* fp, const struct rsa_st* r, int offset);
int RSA_print(struct bio_st* bp, const struct rsa_st* r, int offset);
int RSA_sign(int type, const unsigned char* m, unsigned int m_length, unsigned char* sigret, unsigned int* siglen, struct rsa_st* rsa);
int RSA_verify(int type, const unsigned char* m, unsigned int m_length, const unsigned char* sigbuf, unsigned int siglen, struct rsa_st* rsa);
int RSA_sign_ASN1_OCTET_STRING(int type, const unsigned char* m, unsigned int m_length, unsigned char* sigret, unsigned int* siglen, struct rsa_st* rsa);
int RSA_verify_ASN1_OCTET_STRING(int type, const unsigned char* m, unsigned int m_length, unsigned char* sigbuf, unsigned int siglen, struct rsa_st* rsa);
int RSA_blinding_on(struct rsa_st* rsa, struct bignum_ctx* ctx);
void RSA_blinding_off(struct rsa_st* rsa);
struct bn_blinding_st* RSA_setup_blinding(struct rsa_st* rsa, struct bignum_ctx* ctx);
int RSA_padding_add_PKCS1_type_1(unsigned char* to, int tlen, const unsigned char* f, int fl);
int RSA_padding_check_PKCS1_type_1(unsigned char* to, int tlen, const unsigned char* f, int fl, int rsa_len);
int RSA_padding_add_PKCS1_type_2(unsigned char* to, int tlen, const unsigned char* f, int fl);
int RSA_padding_check_PKCS1_type_2(unsigned char* to, int tlen, const unsigned char* f, int fl, int rsa_len);
int PKCS1_MGF1(unsigned char* mask, long len, const unsigned char* seed, long seedlen, const struct evp_md_st* dgst);
int RSA_padding_add_PKCS1_OAEP(unsigned char* to, int tlen, const unsigned char* f, int fl, const unsigned char* p, int pl);
int RSA_padding_check_PKCS1_OAEP(unsigned char* to, int tlen, const unsigned char* f, int fl, int rsa_len, const unsigned char* p, int pl);
int RSA_padding_add_PKCS1_OAEP_mgf1(unsigned char* to, int tlen, const unsigned char* from, int flen, const unsigned char* param, int plen, const struct evp_md_st* md, const struct evp_md_st* mgf1md);
int RSA_padding_check_PKCS1_OAEP_mgf1(unsigned char* to, int tlen, const unsigned char* from, int flen, int num, const unsigned char* param, int plen, const struct evp_md_st* md, const struct evp_md_st* mgf1md);
int RSA_padding_add_none(unsigned char* to, int tlen, const unsigned char* f, int fl);
int RSA_padding_check_none(unsigned char* to, int tlen, const unsigned char* f, int fl, int rsa_len);
int RSA_padding_add_X931(unsigned char* to, int tlen, const unsigned char* f, int fl);
int RSA_padding_check_X931(unsigned char* to, int tlen, const unsigned char* f, int fl, int rsa_len);
int RSA_X931_hash_id(int nid);
int RSA_verify_PKCS1_PSS(struct rsa_st* rsa, const unsigned char* mHash, const struct evp_md_st* Hash, const unsigned char* EM, int sLen);
int RSA_padding_add_PKCS1_PSS(struct rsa_st* rsa, unsigned char* EM, const unsigned char* mHash, const struct evp_md_st* Hash, int sLen);
int RSA_verify_PKCS1_PSS_mgf1(struct rsa_st* rsa, const unsigned char* mHash, const struct evp_md_st* Hash, const struct evp_md_st* mgf1Hash, const unsigned char* EM, int sLen);
int RSA_padding_add_PKCS1_PSS_mgf1(struct rsa_st* rsa, unsigned char* EM, const unsigned char* mHash, const struct evp_md_st* Hash, const struct evp_md_st* mgf1Hash, int sLen);
int RSA_set_ex_data(struct rsa_st* r, int idx, void* arg);
void* RSA_get_ex_data(const struct rsa_st* r, int idx);
struct rsa_st* RSAPublicKey_dup(const struct rsa_st* a);
struct rsa_st* RSAPrivateKey_dup(const struct rsa_st* a);
struct rsa_meth_st* RSA_meth_new(const char* name, int flags);
void RSA_meth_free(struct rsa_meth_st* meth);
struct rsa_meth_st* RSA_meth_dup(const struct rsa_meth_st* meth);
const char* RSA_meth_get0_name(const struct rsa_meth_st* meth);
int RSA_meth_set1_name(struct rsa_meth_st* meth, const char* name);
int RSA_meth_get_flags(const struct rsa_meth_st* meth);
int RSA_meth_set_flags(struct rsa_meth_st* meth, int flags);
void* RSA_meth_get0_app_data(const struct rsa_meth_st* meth);
int RSA_meth_set0_app_data(struct rsa_meth_st* meth, void* app_data);
int (*RSA_meth_get_pub_enc(const struct rsa_meth_st* _function_pointer_result_var_name_a27))(int,const unsigned char*,unsigned char*,struct rsa_st*,int);
int RSA_meth_set_pub_enc(struct rsa_meth_st* rsa, int (*pub_enc)(int,const unsigned char*,unsigned char*,struct rsa_st*,int));
int (*RSA_meth_get_pub_dec(const struct rsa_meth_st* _function_pointer_result_var_name_a28))(int,const unsigned char*,unsigned char*,struct rsa_st*,int);
int RSA_meth_set_pub_dec(struct rsa_meth_st* rsa, int (*pub_dec)(int,const unsigned char*,unsigned char*,struct rsa_st*,int));
int (*RSA_meth_get_priv_enc(const struct rsa_meth_st* _function_pointer_result_var_name_a29))(int,const unsigned char*,unsigned char*,struct rsa_st*,int);
int RSA_meth_set_priv_enc(struct rsa_meth_st* rsa, int (*priv_enc)(int,const unsigned char*,unsigned char*,struct rsa_st*,int));
int (*RSA_meth_get_priv_dec(const struct rsa_meth_st* _function_pointer_result_var_name_a30))(int,const unsigned char*,unsigned char*,struct rsa_st*,int);
int RSA_meth_set_priv_dec(struct rsa_meth_st* rsa, int (*priv_dec)(int,const unsigned char*,unsigned char*,struct rsa_st*,int));
int (*RSA_meth_get_mod_exp(const struct rsa_meth_st* _function_pointer_result_var_name_a31))(struct bignum_st*,const struct bignum_st*,struct rsa_st*,struct bignum_ctx*);
int RSA_meth_set_mod_exp(struct rsa_meth_st* rsa, int (*mod_exp)(struct bignum_st*,const struct bignum_st*,struct rsa_st*,struct bignum_ctx*));
int (*RSA_meth_get_bn_mod_exp(const struct rsa_meth_st* _function_pointer_result_var_name_a32))(struct bignum_st*,const struct bignum_st*,const struct bignum_st*,const struct bignum_st*,struct bignum_ctx*,struct bn_mont_ctx_st*);
int RSA_meth_set_bn_mod_exp(struct rsa_meth_st* rsa, int (*bn_mod_exp)(struct bignum_st*,const struct bignum_st*,const struct bignum_st*,const struct bignum_st*,struct bignum_ctx*,struct bn_mont_ctx_st*));
int (*RSA_meth_get_init(const struct rsa_meth_st* _function_pointer_result_var_name_a33))(struct rsa_st*);
int RSA_meth_set_init(struct rsa_meth_st* rsa, int (*init)(struct rsa_st*));
int (*RSA_meth_get_finish(const struct rsa_meth_st* _function_pointer_result_var_name_a34))(struct rsa_st*);
int RSA_meth_set_finish(struct rsa_meth_st* rsa, int (*finish)(struct rsa_st*));
int (*RSA_meth_get_sign(const struct rsa_meth_st* _function_pointer_result_var_name_a35))(int,const unsigned char*,unsigned int,unsigned char*,unsigned int*,const struct rsa_st*);
int RSA_meth_set_sign(struct rsa_meth_st* rsa, int (*sign)(int,const unsigned char*,unsigned int,unsigned char*,unsigned int*,const struct rsa_st*));
int (*RSA_meth_get_verify(const struct rsa_meth_st* _function_pointer_result_var_name_a36))(int,const unsigned char*,unsigned int,const unsigned char*,unsigned int,const struct rsa_st*);
int RSA_meth_set_verify(struct rsa_meth_st* rsa, int (*verify)(int,const unsigned char*,unsigned int,const unsigned char*,unsigned int,const struct rsa_st*));
int (*RSA_meth_get_keygen(const struct rsa_meth_st* _function_pointer_result_var_name_a37))(struct rsa_st*,int,struct bignum_st*,struct bn_gencb_st*);
int RSA_meth_set_keygen(struct rsa_meth_st* rsa, int (*keygen)(struct rsa_st*,int,struct bignum_st*,struct bn_gencb_st*));
int (*RSA_meth_get_multi_prime_keygen(const struct rsa_meth_st* _function_pointer_result_var_name_a38))(struct rsa_st*,int,int,struct bignum_st*,struct bn_gencb_st*);
int RSA_meth_set_multi_prime_keygen(struct rsa_meth_st* meth, int (*keygen)(struct rsa_st*,int,int,struct bignum_st*,struct bn_gencb_st*));
int EVP_PKEY_CTX_set_dh_paramgen_type(struct evp_pkey_ctx_st* ctx, int typ);
int EVP_PKEY_CTX_set_dh_paramgen_gindex(struct evp_pkey_ctx_st* ctx, int gindex);
int EVP_PKEY_CTX_set_dh_paramgen_seed(struct evp_pkey_ctx_st* ctx, const unsigned char* seed, unsigned long  int seedlen);
int EVP_PKEY_CTX_set_dh_paramgen_prime_len(struct evp_pkey_ctx_st* ctx, int pbits);
int EVP_PKEY_CTX_set_dh_paramgen_subprime_len(struct evp_pkey_ctx_st* ctx, int qlen);
int EVP_PKEY_CTX_set_dh_paramgen_generator(struct evp_pkey_ctx_st* ctx, int gen);
int EVP_PKEY_CTX_set_dh_nid(struct evp_pkey_ctx_st* ctx, int nid);
int EVP_PKEY_CTX_set_dh_rfc5114(struct evp_pkey_ctx_st* ctx, int gen);
int EVP_PKEY_CTX_set_dhx_rfc5114(struct evp_pkey_ctx_st* ctx, int gen);
int EVP_PKEY_CTX_set_dh_pad(struct evp_pkey_ctx_st* ctx, int pad);
int EVP_PKEY_CTX_set_dh_kdf_type(struct evp_pkey_ctx_st* ctx, int kdf);
int EVP_PKEY_CTX_get_dh_kdf_type(struct evp_pkey_ctx_st* ctx);
int EVP_PKEY_CTX_set0_dh_kdf_oid(struct evp_pkey_ctx_st* ctx, struct asn1_object_st* oid);
int EVP_PKEY_CTX_get0_dh_kdf_oid(struct evp_pkey_ctx_st* ctx, struct asn1_object_st** oid);
int EVP_PKEY_CTX_set_dh_kdf_md(struct evp_pkey_ctx_st* ctx, const struct evp_md_st* md);
int EVP_PKEY_CTX_get_dh_kdf_md(struct evp_pkey_ctx_st* ctx, const struct evp_md_st** md);
int EVP_PKEY_CTX_set_dh_kdf_outlen(struct evp_pkey_ctx_st* ctx, int len);
int EVP_PKEY_CTX_get_dh_kdf_outlen(struct evp_pkey_ctx_st* ctx, int* len);
int EVP_PKEY_CTX_set0_dh_kdf_ukm(struct evp_pkey_ctx_st* ctx, unsigned char* ukm, int len);
int EVP_PKEY_CTX_get0_dh_kdf_ukm(struct evp_pkey_ctx_st* ctx, unsigned char** ukm);
const struct ASN1_ITEM_st* DHparams_it();
struct dh_st* DHparams_dup(const struct dh_st* a);
const struct dh_method* DH_OpenSSL();
void DH_set_default_method(const struct dh_method* meth);
const struct dh_method* DH_get_default_method();
int DH_set_method(struct dh_st* dh, const struct dh_method* meth);
struct dh_st* DH_new_method(struct engine_st* engine);
struct dh_st* DH_new();
void DH_free(struct dh_st* dh);
int DH_up_ref(struct dh_st* dh);
int DH_bits(const struct dh_st* dh);
int DH_size(const struct dh_st* dh);
int DH_security_bits(const struct dh_st* dh);
int DH_set_ex_data(struct dh_st* d, int idx, void* arg);
void* DH_get_ex_data(const struct dh_st* d, int idx);
int DH_generate_parameters_ex(struct dh_st* dh, int prime_len, int generator, struct bn_gencb_st* cb);
int DH_check_params_ex(const struct dh_st* dh);
int DH_check_ex(const struct dh_st* dh);
int DH_check_pub_key_ex(const struct dh_st* dh, const struct bignum_st* pub_key);
int DH_check_params(const struct dh_st* dh, int* ret);
int DH_check(const struct dh_st* dh, int* codes);
int DH_check_pub_key(const struct dh_st* dh, const struct bignum_st* pub_key, int* codes);
int DH_generate_key(struct dh_st* dh);
int DH_compute_key(unsigned char* key, const struct bignum_st* pub_key, struct dh_st* dh);
int DH_compute_key_padded(unsigned char* key, const struct bignum_st* pub_key, struct dh_st* dh);
struct dh_st* d2i_DHparams(struct dh_st** a, const unsigned char** in, long len);
int i2d_DHparams(const struct dh_st* a, unsigned char** out);
struct dh_st* d2i_DHxparams(struct dh_st** a, const unsigned char** in, long len);
int i2d_DHxparams(const struct dh_st* a, unsigned char** out);
int DHparams_print_fp(struct _IO_FILE* fp, const struct dh_st* x);
int DHparams_print(struct bio_st* bp, const struct dh_st* x);
struct dh_st* DH_get_1024_160();
struct dh_st* DH_get_2048_224();
struct dh_st* DH_get_2048_256();
struct dh_st* DH_new_by_nid(int nid);
int DH_get_nid(const struct dh_st* dh);
int DH_KDF_X9_42(unsigned char* out, unsigned long  int outlen, const unsigned char* Z, unsigned long  int Zlen, struct asn1_object_st* key_oid, const unsigned char* ukm, unsigned long  int ukmlen, const struct evp_md_st* md);
void DH_get0_pqg(const struct dh_st* dh, const struct bignum_st** p, const struct bignum_st** q, const struct bignum_st** g);
int DH_set0_pqg(struct dh_st* dh, struct bignum_st* p, struct bignum_st* q, struct bignum_st* g);
void DH_get0_key(const struct dh_st* dh, const struct bignum_st** pub_key, const struct bignum_st** priv_key);
int DH_set0_key(struct dh_st* dh, struct bignum_st* pub_key, struct bignum_st* priv_key);
const struct bignum_st* DH_get0_p(const struct dh_st* dh);
const struct bignum_st* DH_get0_q(const struct dh_st* dh);
const struct bignum_st* DH_get0_g(const struct dh_st* dh);
const struct bignum_st* DH_get0_priv_key(const struct dh_st* dh);
const struct bignum_st* DH_get0_pub_key(const struct dh_st* dh);
void DH_clear_flags(struct dh_st* dh, int flags);
int DH_test_flags(const struct dh_st* dh, int flags);
void DH_set_flags(struct dh_st* dh, int flags);
struct engine_st* DH_get0_engine(struct dh_st* d);
long DH_get_length(const struct dh_st* dh);
int DH_set_length(struct dh_st* dh, long length);
struct dh_method* DH_meth_new(const char* name, int flags);
void DH_meth_free(struct dh_method* dhm);
struct dh_method* DH_meth_dup(const struct dh_method* dhm);
const char* DH_meth_get0_name(const struct dh_method* dhm);
int DH_meth_set1_name(struct dh_method* dhm, const char* name);
int DH_meth_get_flags(const struct dh_method* dhm);
int DH_meth_set_flags(struct dh_method* dhm, int flags);
void* DH_meth_get0_app_data(const struct dh_method* dhm);
int DH_meth_set0_app_data(struct dh_method* dhm, void* app_data);
int (*DH_meth_get_generate_key(const struct dh_method* _function_pointer_result_var_name_a39))(struct dh_st*);
int DH_meth_set_generate_key(struct dh_method* dhm, int (*generate_key)(struct dh_st*));
int (*DH_meth_get_compute_key(const struct dh_method* _function_pointer_result_var_name_a40))(unsigned char*,const struct bignum_st*,struct dh_st*);
int DH_meth_set_compute_key(struct dh_method* dhm, int (*compute_key)(unsigned char*,const struct bignum_st*,struct dh_st*));
int (*DH_meth_get_bn_mod_exp(const struct dh_method* _function_pointer_result_var_name_a41))(const struct dh_st*,struct bignum_st*,const struct bignum_st*,const struct bignum_st*,const struct bignum_st*,struct bignum_ctx*,struct bn_mont_ctx_st*);
int DH_meth_set_bn_mod_exp(struct dh_method* dhm, int (*bn_mod_exp)(const struct dh_st*,struct bignum_st*,const struct bignum_st*,const struct bignum_st*,const struct bignum_st*,struct bignum_ctx*,struct bn_mont_ctx_st*));
int (*DH_meth_get_init(const struct dh_method* _function_pointer_result_var_name_a42))(struct dh_st*);
int DH_meth_set_init(struct dh_method* dhm, int (*init)(struct dh_st*));
int (*DH_meth_get_finish(const struct dh_method* _function_pointer_result_var_name_a43))(struct dh_st*);
int DH_meth_set_finish(struct dh_method* dhm, int (*finish)(struct dh_st*));
int (*DH_meth_get_generate_params(const struct dh_method* _function_pointer_result_var_name_a44))(struct dh_st*,int,int,struct bn_gencb_st*);
int DH_meth_set_generate_params(struct dh_method* dhm, int (*generate_params)(struct dh_st*,int,int,struct bn_gencb_st*));
struct dh_st* DH_generate_parameters(int prime_len, int generator, void (*callback)(int,int,void*), void* cb_arg);
int EVP_PKEY_CTX_set_dsa_paramgen_bits(struct evp_pkey_ctx_st* ctx, int nbits);
int EVP_PKEY_CTX_set_dsa_paramgen_q_bits(struct evp_pkey_ctx_st* ctx, int qbits);
int EVP_PKEY_CTX_set_dsa_paramgen_md_props(struct evp_pkey_ctx_st* ctx, const char* md_name, const char* md_properties);
int EVP_PKEY_CTX_set_dsa_paramgen_gindex(struct evp_pkey_ctx_st* ctx, int gindex);
int EVP_PKEY_CTX_set_dsa_paramgen_type(struct evp_pkey_ctx_st* ctx, const char* name);
int EVP_PKEY_CTX_set_dsa_paramgen_seed(struct evp_pkey_ctx_st* ctx, const unsigned char* seed, unsigned long  int seedlen);
int EVP_PKEY_CTX_set_dsa_paramgen_md(struct evp_pkey_ctx_st* ctx, const struct evp_md_st* md);
struct DSA_SIG_st* DSA_SIG_new();
void DSA_SIG_free(struct DSA_SIG_st* a);
struct DSA_SIG_st* d2i_DSA_SIG(struct DSA_SIG_st** a, const unsigned char** in, long len);
int i2d_DSA_SIG(const struct DSA_SIG_st* a, unsigned char** out);
void DSA_SIG_get0(const struct DSA_SIG_st* sig, const struct bignum_st** pr, const struct bignum_st** ps);
int DSA_SIG_set0(struct DSA_SIG_st* sig, struct bignum_st* r, struct bignum_st* s);
struct dsa_st* DSAparams_dup(const struct dsa_st* a);
struct DSA_SIG_st* DSA_do_sign(const unsigned char* dgst, int dlen, struct dsa_st* dsa);
int DSA_do_verify(const unsigned char* dgst, int dgst_len, struct DSA_SIG_st* sig, struct dsa_st* dsa);
const struct dsa_method* DSA_OpenSSL();
void DSA_set_default_method(const struct dsa_method* anonymous_var_nameX1542);
const struct dsa_method* DSA_get_default_method();
int DSA_set_method(struct dsa_st* dsa, const struct dsa_method* anonymous_var_nameX1543);
const struct dsa_method* DSA_get_method(struct dsa_st* d);
struct dsa_st* DSA_new();
struct dsa_st* DSA_new_method(struct engine_st* engine);
void DSA_free(struct dsa_st* r);
int DSA_up_ref(struct dsa_st* r);
int DSA_size(const struct dsa_st* anonymous_var_nameX1544);
int DSA_bits(const struct dsa_st* d);
int DSA_security_bits(const struct dsa_st* d);
int DSA_sign_setup(struct dsa_st* dsa, struct bignum_ctx* ctx_in, struct bignum_st** kinvp, struct bignum_st** rp);
int DSA_sign(int type, const unsigned char* dgst, int dlen, unsigned char* sig, unsigned int* siglen, struct dsa_st* dsa);
int DSA_verify(int type, const unsigned char* dgst, int dgst_len, const unsigned char* sigbuf, int siglen, struct dsa_st* dsa);
int DSA_set_ex_data(struct dsa_st* d, int idx, void* arg);
void* DSA_get_ex_data(const struct dsa_st* d, int idx);
struct dsa_st* d2i_DSAPublicKey(struct dsa_st** a, const unsigned char** in, long len);
int i2d_DSAPublicKey(const struct dsa_st* a, unsigned char** out);
struct dsa_st* d2i_DSAPrivateKey(struct dsa_st** a, const unsigned char** in, long len);
int i2d_DSAPrivateKey(const struct dsa_st* a, unsigned char** out);
struct dsa_st* d2i_DSAparams(struct dsa_st** a, const unsigned char** in, long len);
int i2d_DSAparams(const struct dsa_st* a, unsigned char** out);
struct dsa_st* DSA_generate_parameters(int bits, unsigned char* seed, int seed_len, int* counter_ret, unsigned long  int* h_ret, void (*callback)(int,int,void*), void* cb_arg);
int DSA_generate_parameters_ex(struct dsa_st* dsa, int bits, const unsigned char* seed, int seed_len, int* counter_ret, unsigned long  int* h_ret, struct bn_gencb_st* cb);
int DSA_generate_key(struct dsa_st* a);
int DSAparams_print(struct bio_st* bp, const struct dsa_st* x);
int DSA_print(struct bio_st* bp, const struct dsa_st* x, int off);
int DSAparams_print_fp(struct _IO_FILE* fp, const struct dsa_st* x);
int DSA_print_fp(struct _IO_FILE* bp, const struct dsa_st* x, int off);
struct dh_st* DSA_dup_DH(const struct dsa_st* r);
void DSA_get0_pqg(const struct dsa_st* d, const struct bignum_st** p, const struct bignum_st** q, const struct bignum_st** g);
int DSA_set0_pqg(struct dsa_st* d, struct bignum_st* p, struct bignum_st* q, struct bignum_st* g);
void DSA_get0_key(const struct dsa_st* d, const struct bignum_st** pub_key, const struct bignum_st** priv_key);
int DSA_set0_key(struct dsa_st* d, struct bignum_st* pub_key, struct bignum_st* priv_key);
const struct bignum_st* DSA_get0_p(const struct dsa_st* d);
const struct bignum_st* DSA_get0_q(const struct dsa_st* d);
const struct bignum_st* DSA_get0_g(const struct dsa_st* d);
const struct bignum_st* DSA_get0_pub_key(const struct dsa_st* d);
const struct bignum_st* DSA_get0_priv_key(const struct dsa_st* d);
void DSA_clear_flags(struct dsa_st* d, int flags);
int DSA_test_flags(const struct dsa_st* d, int flags);
void DSA_set_flags(struct dsa_st* d, int flags);
struct engine_st* DSA_get0_engine(struct dsa_st* d);
struct dsa_method* DSA_meth_new(const char* name, int flags);
void DSA_meth_free(struct dsa_method* dsam);
struct dsa_method* DSA_meth_dup(const struct dsa_method* dsam);
const char* DSA_meth_get0_name(const struct dsa_method* dsam);
int DSA_meth_set1_name(struct dsa_method* dsam, const char* name);
int DSA_meth_get_flags(const struct dsa_method* dsam);
int DSA_meth_set_flags(struct dsa_method* dsam, int flags);
void* DSA_meth_get0_app_data(const struct dsa_method* dsam);
int DSA_meth_set0_app_data(struct dsa_method* dsam, void* app_data);
struct DSA_SIG_st* (*DSA_meth_get_sign(const struct dsa_method* _function_pointer_result_var_name_a45))(const unsigned char*,int,struct dsa_st*);
int DSA_meth_set_sign(struct dsa_method* dsam, struct DSA_SIG_st* (*sign)(const unsigned char*,int,struct dsa_st*));
int (*DSA_meth_get_sign_setup(const struct dsa_method* _function_pointer_result_var_name_a46))(struct dsa_st*,struct bignum_ctx*,struct bignum_st**,struct bignum_st**);
int DSA_meth_set_sign_setup(struct dsa_method* dsam, int (*sign_setup)(struct dsa_st*,struct bignum_ctx*,struct bignum_st**,struct bignum_st**));
int (*DSA_meth_get_verify(const struct dsa_method* _function_pointer_result_var_name_a47))(const unsigned char*,int,struct DSA_SIG_st*,struct dsa_st*);
int DSA_meth_set_verify(struct dsa_method* dsam, int (*verify)(const unsigned char*,int,struct DSA_SIG_st*,struct dsa_st*));
int (*DSA_meth_get_mod_exp(const struct dsa_method* _function_pointer_result_var_name_a48))(struct dsa_st*,struct bignum_st*,const struct bignum_st*,const struct bignum_st*,const struct bignum_st*,const struct bignum_st*,const struct bignum_st*,struct bignum_ctx*,struct bn_mont_ctx_st*);
int DSA_meth_set_mod_exp(struct dsa_method* dsam, int (*mod_exp)(struct dsa_st*,struct bignum_st*,const struct bignum_st*,const struct bignum_st*,const struct bignum_st*,const struct bignum_st*,const struct bignum_st*,struct bignum_ctx*,struct bn_mont_ctx_st*));
int (*DSA_meth_get_bn_mod_exp(const struct dsa_method* _function_pointer_result_var_name_a49))(struct dsa_st*,struct bignum_st*,const struct bignum_st*,const struct bignum_st*,const struct bignum_st*,struct bignum_ctx*,struct bn_mont_ctx_st*);
int DSA_meth_set_bn_mod_exp(struct dsa_method* dsam, int (*bn_mod_exp)(struct dsa_st*,struct bignum_st*,const struct bignum_st*,const struct bignum_st*,const struct bignum_st*,struct bignum_ctx*,struct bn_mont_ctx_st*));
int (*DSA_meth_get_init(const struct dsa_method* _function_pointer_result_var_name_a50))(struct dsa_st*);
int DSA_meth_set_init(struct dsa_method* dsam, int (*init)(struct dsa_st*));
int (*DSA_meth_get_finish(const struct dsa_method* _function_pointer_result_var_name_a51))(struct dsa_st*);
int DSA_meth_set_finish(struct dsa_method* dsam, int (*finish)(struct dsa_st*));
int (*DSA_meth_get_paramgen(const struct dsa_method* _function_pointer_result_var_name_a52))(struct dsa_st*,int,const unsigned char*,int,int*,unsigned long  int*,struct bn_gencb_st*);
int DSA_meth_set_paramgen(struct dsa_method* dsam, int (*paramgen)(struct dsa_st*,int,const unsigned char*,int,int*,unsigned long  int*,struct bn_gencb_st*));
int (*DSA_meth_get_keygen(const struct dsa_method* _function_pointer_result_var_name_a53))(struct dsa_st*);
int DSA_meth_set_keygen(struct dsa_method* dsam, int (*keygen)(struct dsa_st*));
int SHA1_Init(struct SHAstate_st* c);
int SHA1_Update(struct SHAstate_st* c, const void* data, unsigned long  int len);
int SHA1_Final(unsigned char* md, struct SHAstate_st* c);
void SHA1_Transform(struct SHAstate_st* c, const unsigned char* data);
unsigned char* SHA1(const unsigned char* d, unsigned long  int n, unsigned char* md);
int SHA224_Init(struct SHA256state_st* c);
int SHA224_Update(struct SHA256state_st* c, const void* data, unsigned long  int len);
int SHA224_Final(unsigned char* md, struct SHA256state_st* c);
int SHA256_Init(struct SHA256state_st* c);
int SHA256_Update(struct SHA256state_st* c, const void* data, unsigned long  int len);
int SHA256_Final(unsigned char* md, struct SHA256state_st* c);
void SHA256_Transform(struct SHA256state_st* c, const unsigned char* data);
unsigned char* SHA224(const unsigned char* d, unsigned long  int n, unsigned char* md);
unsigned char* SHA256(const unsigned char* d, unsigned long  int n, unsigned char* md);
int SHA384_Init(struct SHA512state_st* c);
int SHA384_Update(struct SHA512state_st* c, const void* data, unsigned long  int len);
int SHA384_Final(unsigned char* md, struct SHA512state_st* c);
int SHA512_Init(struct SHA512state_st* c);
int SHA512_Update(struct SHA512state_st* c, const void* data, unsigned long  int len);
int SHA512_Final(unsigned char* md, struct SHA512state_st* c);
void SHA512_Transform(struct SHA512state_st* c, const unsigned char* data);
unsigned char* SHA384(const unsigned char* d, unsigned long  int n, unsigned char* md);
unsigned char* SHA512(const unsigned char* d, unsigned long  int n, unsigned char* md);
int OPENSSL_LH_error(struct lhash_st* lh);
struct lhash_st* OPENSSL_LH_new(unsigned long  int (*h)(const void*), int (*c)(const void*,const void*));
struct lhash_st* OPENSSL_LH_set_thunks(struct lhash_st* lh, unsigned long  int (*hw)(const void*,unsigned long  int (*)(const void*)), int (*cw)(const void*,const void*,int (*)(const void*,const void*)), void (*daw)(void*,void (*)(void*)), void (*daaw)(void*,void*,void (*)(void*,void*)));
void OPENSSL_LH_free(struct lhash_st* lh);
void OPENSSL_LH_flush(struct lhash_st* lh);
void* OPENSSL_LH_insert(struct lhash_st* lh, void* data);
void* OPENSSL_LH_delete(struct lhash_st* lh, const void* data);
void* OPENSSL_LH_retrieve(struct lhash_st* lh, const void* data);
void OPENSSL_LH_doall(struct lhash_st* lh, void (*func)(void*));
void OPENSSL_LH_doall_arg(struct lhash_st* lh, void (*func)(void*,void*), void* arg);
void OPENSSL_LH_doall_arg_thunk(struct lhash_st* lh, void (*daaw)(void*,void*,void (*)(void*,void*)), void (*fn)(void*,void*), void* arg);
unsigned long  int OPENSSL_LH_strhash(const char* c);
unsigned long  int OPENSSL_LH_num_items(const struct lhash_st* lh);
unsigned long  int OPENSSL_LH_get_down_load(const struct lhash_st* lh);
void OPENSSL_LH_set_down_load(struct lhash_st* lh, unsigned long  int down_load);
void OPENSSL_LH_stats(const struct lhash_st* lh, struct _IO_FILE* fp);
void OPENSSL_LH_node_stats(const struct lhash_st* lh, struct _IO_FILE* fp);
void OPENSSL_LH_node_usage_stats(const struct lhash_st* lh, struct _IO_FILE* fp);
void OPENSSL_LH_stats_bio(const struct lhash_st* lh, struct bio_st* out);
void OPENSSL_LH_node_stats_bio(const struct lhash_st* lh, struct bio_st* out);
void OPENSSL_LH_node_usage_stats_bio(const struct lhash_st* lh, struct bio_st* out);
int X509_TRUST_set(int* t, int trust);
int X509_TRUST_get_count();
struct x509_trust_st* X509_TRUST_get0(int idx);
int X509_TRUST_get_by_id(int id);
int X509_TRUST_add(int id, int flags, int (*ck)(struct x509_trust_st*,struct x509_st*,int), const char* name, int arg1, void* arg2);
void X509_TRUST_cleanup();
int X509_TRUST_get_flags(const struct x509_trust_st* xp);
char* X509_TRUST_get0_name(const struct x509_trust_st* xp);
int X509_TRUST_get_trust(const struct x509_trust_st* xp);
int X509_trusted(const struct x509_st* x);
int X509_add1_trust_object(struct x509_st* x, const struct asn1_object_st* obj);
int X509_add1_reject_object(struct x509_st* x, const struct asn1_object_st* obj);
void X509_trust_clear(struct x509_st* x);
void X509_reject_clear(struct x509_st* x);
struct stack_st_ASN1_OBJECT* X509_get0_trust_objects(struct x509_st* x);
struct stack_st_ASN1_OBJECT* X509_get0_reject_objects(struct x509_st* x);
int (*X509_TRUST_set_default(int (*_function_pointer_result_var_name_a54)(int,struct x509_st*,int)))(int,struct x509_st*,int);
int X509_check_trust(struct x509_st* x, int id, int flags);
int X509_verify_cert(struct x509_store_ctx_st* ctx);
int X509_STORE_CTX_verify(struct x509_store_ctx_st* ctx);
struct stack_st_X509* X509_build_chain(struct x509_st* target, struct stack_st_X509* certs, struct x509_store_st* store, int with_self_signed, struct ossl_lib_ctx_st* libctx, const char* propq);
int X509_STORE_set_depth(struct x509_store_st* store, int depth);
int X509_STORE_CTX_print_verify_cb(int ok, struct x509_store_ctx_st* ctx);
void X509_STORE_CTX_set_depth(struct x509_store_ctx_st* ctx, int depth);
int X509_OBJECT_idx_by_subject(struct stack_st_X509_OBJECT* h, enum anonymous_typeY40 type, const struct X509_name_st* name);
struct x509_object_st* X509_OBJECT_retrieve_by_subject(struct stack_st_X509_OBJECT* h, enum anonymous_typeY40 type, const struct X509_name_st* name);
struct x509_object_st* X509_OBJECT_retrieve_match(struct stack_st_X509_OBJECT* h, struct x509_object_st* x);
int X509_OBJECT_up_ref_count(struct x509_object_st* a);
struct x509_object_st* X509_OBJECT_new();
void X509_OBJECT_free(struct x509_object_st* a);
enum anonymous_typeY40 X509_OBJECT_get_type(const struct x509_object_st* a);
struct x509_st* X509_OBJECT_get0_X509(const struct x509_object_st* a);
int X509_OBJECT_set1_X509(struct x509_object_st* a, struct x509_st* obj);
struct X509_crl_st* X509_OBJECT_get0_X509_CRL(const struct x509_object_st* a);
int X509_OBJECT_set1_X509_CRL(struct x509_object_st* a, struct X509_crl_st* obj);
struct x509_store_st* X509_STORE_new();
void X509_STORE_free(struct x509_store_st* xs);
int X509_STORE_lock(struct x509_store_st* xs);
int X509_STORE_unlock(struct x509_store_st* xs);
int X509_STORE_up_ref(struct x509_store_st* xs);
struct stack_st_X509_OBJECT* X509_STORE_get0_objects(const struct x509_store_st* xs);
struct stack_st_X509_OBJECT* X509_STORE_get1_objects(struct x509_store_st* xs);
struct stack_st_X509* X509_STORE_get1_all_certs(struct x509_store_st* xs);
struct stack_st_X509* X509_STORE_CTX_get1_certs(struct x509_store_ctx_st* xs, const struct X509_name_st* nm);
struct stack_st_X509_CRL* X509_STORE_CTX_get1_crls(const struct x509_store_ctx_st* st, const struct X509_name_st* nm);
int X509_STORE_set_flags(struct x509_store_st* xs, unsigned long  int flags);
int X509_STORE_set_purpose(struct x509_store_st* xs, int purpose);
int X509_STORE_set_trust(struct x509_store_st* xs, int trust);
int X509_STORE_set1_param(struct x509_store_st* xs, const struct X509_VERIFY_PARAM_st* pm);
struct X509_VERIFY_PARAM_st* X509_STORE_get0_param(const struct x509_store_st* xs);
void X509_STORE_set_verify(struct x509_store_st* xs, int (*verify)(struct x509_store_ctx_st*));
void X509_STORE_CTX_set_verify(struct x509_store_ctx_st* ctx, int (*verify)(struct x509_store_ctx_st*));
int (*X509_STORE_get_verify(const struct x509_store_st* xs))(struct x509_store_ctx_st*);
void X509_STORE_set_verify_cb(struct x509_store_st* xs, int (*verify_cb)(int,struct x509_store_ctx_st*));
int (*X509_STORE_get_verify_cb(const struct x509_store_st* xs))(int,struct x509_store_ctx_st*);
void X509_STORE_set_get_issuer(struct x509_store_st* xs, int (*get_issuer)(struct x509_st**,struct x509_store_ctx_st*,struct x509_st*));
int (*X509_STORE_get_get_issuer(const struct x509_store_st* xs))(struct x509_st**,struct x509_store_ctx_st*,struct x509_st*);
void X509_STORE_set_check_issued(struct x509_store_st* xs, int (*check_issued)(struct x509_store_ctx_st*,struct x509_st*,struct x509_st*));
int (*X509_STORE_get_check_issued(const struct x509_store_st* s))(struct x509_store_ctx_st*,struct x509_st*,struct x509_st*);
void X509_STORE_set_check_revocation(struct x509_store_st* xs, int (*check_revocation)(struct x509_store_ctx_st*));
int (*X509_STORE_get_check_revocation(const struct x509_store_st* xs))(struct x509_store_ctx_st*);
void X509_STORE_set_get_crl(struct x509_store_st* xs, int (*get_crl)(struct x509_store_ctx_st*,struct X509_crl_st**,struct x509_st*));
int (*X509_STORE_get_get_crl(const struct x509_store_st* xs))(struct x509_store_ctx_st*,struct X509_crl_st**,struct x509_st*);
void X509_STORE_set_check_crl(struct x509_store_st* xs, int (*check_crl)(struct x509_store_ctx_st*,struct X509_crl_st*));
int (*X509_STORE_get_check_crl(const struct x509_store_st* xs))(struct x509_store_ctx_st*,struct X509_crl_st*);
void X509_STORE_set_cert_crl(struct x509_store_st* xs, int (*cert_crl)(struct x509_store_ctx_st*,struct X509_crl_st*,struct x509_st*));
int (*X509_STORE_get_cert_crl(const struct x509_store_st* xs))(struct x509_store_ctx_st*,struct X509_crl_st*,struct x509_st*);
void X509_STORE_set_check_policy(struct x509_store_st* xs, int (*check_policy)(struct x509_store_ctx_st*));
int (*X509_STORE_get_check_policy(const struct x509_store_st* s))(struct x509_store_ctx_st*);
void X509_STORE_set_lookup_certs(struct x509_store_st* xs, struct stack_st_X509* (*lookup_certs)(struct x509_store_ctx_st*,const struct X509_name_st*));
struct stack_st_X509* (*X509_STORE_get_lookup_certs(const struct x509_store_st* s))(struct x509_store_ctx_st*,const struct X509_name_st*);
void X509_STORE_set_lookup_crls(struct x509_store_st* xs, struct stack_st_X509_CRL* (*lookup_crls)(const struct x509_store_ctx_st*,const struct X509_name_st*));
struct stack_st_X509_CRL* (*X509_STORE_get_lookup_crls(const struct x509_store_st* xs))(const struct x509_store_ctx_st*,const struct X509_name_st*);
void X509_STORE_set_cleanup(struct x509_store_st* xs, int (*cleanup)(struct x509_store_ctx_st*));
int (*X509_STORE_get_cleanup(const struct x509_store_st* xs))(struct x509_store_ctx_st*);
int X509_STORE_set_ex_data(struct x509_store_st* xs, int idx, void* data);
void* X509_STORE_get_ex_data(const struct x509_store_st* xs, int idx);
struct x509_store_ctx_st* X509_STORE_CTX_new_ex(struct ossl_lib_ctx_st* libctx, const char* propq);
struct x509_store_ctx_st* X509_STORE_CTX_new();
int X509_STORE_CTX_get1_issuer(struct x509_st** issuer, struct x509_store_ctx_st* ctx, struct x509_st* x);
void X509_STORE_CTX_free(struct x509_store_ctx_st* ctx);
int X509_STORE_CTX_init(struct x509_store_ctx_st* ctx, struct x509_store_st* trust_store, struct x509_st* target, struct stack_st_X509* untrusted);
int X509_STORE_CTX_init_rpk(struct x509_store_ctx_st* ctx, struct x509_store_st* trust_store, struct evp_pkey_st* rpk);
void X509_STORE_CTX_set0_trusted_stack(struct x509_store_ctx_st* ctx, struct stack_st_X509* sk);
void X509_STORE_CTX_cleanup(struct x509_store_ctx_st* ctx);
struct x509_store_st* X509_STORE_CTX_get0_store(const struct x509_store_ctx_st* ctx);
struct x509_st* X509_STORE_CTX_get0_cert(const struct x509_store_ctx_st* ctx);
struct evp_pkey_st* X509_STORE_CTX_get0_rpk(const struct x509_store_ctx_st* ctx);
struct stack_st_X509* X509_STORE_CTX_get0_untrusted(const struct x509_store_ctx_st* ctx);
void X509_STORE_CTX_set0_untrusted(struct x509_store_ctx_st* ctx, struct stack_st_X509* sk);
void X509_STORE_CTX_set_verify_cb(struct x509_store_ctx_st* ctx, int (*verify)(int,struct x509_store_ctx_st*));
int (*X509_STORE_CTX_get_verify_cb(const struct x509_store_ctx_st* ctx))(int,struct x509_store_ctx_st*);
int (*X509_STORE_CTX_get_verify(const struct x509_store_ctx_st* ctx))(struct x509_store_ctx_st*);
int (*X509_STORE_CTX_get_get_issuer(const struct x509_store_ctx_st* ctx))(struct x509_st**,struct x509_store_ctx_st*,struct x509_st*);
int (*X509_STORE_CTX_get_check_issued(const struct x509_store_ctx_st* ctx))(struct x509_store_ctx_st*,struct x509_st*,struct x509_st*);
int (*X509_STORE_CTX_get_check_revocation(const struct x509_store_ctx_st* ctx))(struct x509_store_ctx_st*);
void X509_STORE_CTX_set_get_crl(struct x509_store_ctx_st* ctx, int (*get_crl)(struct x509_store_ctx_st*,struct X509_crl_st**,struct x509_st*));
int (*X509_STORE_CTX_get_get_crl(const struct x509_store_ctx_st* ctx))(struct x509_store_ctx_st*,struct X509_crl_st**,struct x509_st*);
int (*X509_STORE_CTX_get_check_crl(const struct x509_store_ctx_st* ctx))(struct x509_store_ctx_st*,struct X509_crl_st*);
int (*X509_STORE_CTX_get_cert_crl(const struct x509_store_ctx_st* ctx))(struct x509_store_ctx_st*,struct X509_crl_st*,struct x509_st*);
int (*X509_STORE_CTX_get_check_policy(const struct x509_store_ctx_st* ctx))(struct x509_store_ctx_st*);
struct stack_st_X509* (*X509_STORE_CTX_get_lookup_certs(const struct x509_store_ctx_st* ctx))(struct x509_store_ctx_st*,const struct X509_name_st*);
struct stack_st_X509_CRL* (*X509_STORE_CTX_get_lookup_crls(const struct x509_store_ctx_st* ctx))(const struct x509_store_ctx_st*,const struct X509_name_st*);
int (*X509_STORE_CTX_get_cleanup(const struct x509_store_ctx_st* ctx))(struct x509_store_ctx_st*);
struct x509_lookup_st* X509_STORE_add_lookup(struct x509_store_st* xs, struct x509_lookup_method_st* m);
struct x509_lookup_method_st* X509_LOOKUP_hash_dir();
struct x509_lookup_method_st* X509_LOOKUP_file();
struct x509_lookup_method_st* X509_LOOKUP_store();
struct x509_lookup_method_st* X509_LOOKUP_meth_new(const char* name);
void X509_LOOKUP_meth_free(struct x509_lookup_method_st* method);
int X509_LOOKUP_meth_set_new_item(struct x509_lookup_method_st* method, int (*new_item)(struct x509_lookup_st*));
int (*X509_LOOKUP_meth_get_new_item(const struct x509_lookup_method_st* _function_pointer_result_var_name_a55))(struct x509_lookup_st*);
int X509_LOOKUP_meth_set_free(struct x509_lookup_method_st* method, void (*free_fn)(struct x509_lookup_st*));
void (*X509_LOOKUP_meth_get_free(const struct x509_lookup_method_st* _function_pointer_result_var_name_a56))(struct x509_lookup_st*);
int X509_LOOKUP_meth_set_init(struct x509_lookup_method_st* method, int (*init)(struct x509_lookup_st*));
int (*X509_LOOKUP_meth_get_init(const struct x509_lookup_method_st* _function_pointer_result_var_name_a57))(struct x509_lookup_st*);
int X509_LOOKUP_meth_set_shutdown(struct x509_lookup_method_st* method, int (*shutdown)(struct x509_lookup_st*));
int (*X509_LOOKUP_meth_get_shutdown(const struct x509_lookup_method_st* _function_pointer_result_var_name_a58))(struct x509_lookup_st*);
int X509_LOOKUP_meth_set_ctrl(struct x509_lookup_method_st* method, int (*ctrl_fn)(struct x509_lookup_st*,int,const char*,long,char**));
int (*X509_LOOKUP_meth_get_ctrl(const struct x509_lookup_method_st* method))(struct x509_lookup_st*,int,const char*,long,char**);
int X509_LOOKUP_meth_set_get_by_subject(struct x509_lookup_method_st* method, int (*fn)(struct x509_lookup_st*,enum anonymous_typeY40,const struct X509_name_st*,struct x509_object_st*));
int (*X509_LOOKUP_meth_get_get_by_subject(const struct x509_lookup_method_st* method))(struct x509_lookup_st*,enum anonymous_typeY40,const struct X509_name_st*,struct x509_object_st*);
int X509_LOOKUP_meth_set_get_by_issuer_serial(struct x509_lookup_method_st* method, int (*fn)(struct x509_lookup_st*,enum anonymous_typeY40,const struct X509_name_st*,const struct asn1_string_st*,struct x509_object_st*));
int (*X509_LOOKUP_meth_get_get_by_issuer_serial(const struct x509_lookup_method_st* method))(struct x509_lookup_st*,enum anonymous_typeY40,const struct X509_name_st*,const struct asn1_string_st*,struct x509_object_st*);
int X509_LOOKUP_meth_set_get_by_fingerprint(struct x509_lookup_method_st* method, int (*fn)(struct x509_lookup_st*,enum anonymous_typeY40,const unsigned char*,int,struct x509_object_st*));
int (*X509_LOOKUP_meth_get_get_by_fingerprint(const struct x509_lookup_method_st* method))(struct x509_lookup_st*,enum anonymous_typeY40,const unsigned char*,int,struct x509_object_st*);
int X509_LOOKUP_meth_set_get_by_alias(struct x509_lookup_method_st* method, int (*fn)(struct x509_lookup_st*,enum anonymous_typeY40,const char*,int,struct x509_object_st*));
int (*X509_LOOKUP_meth_get_get_by_alias(const struct x509_lookup_method_st* method))(struct x509_lookup_st*,enum anonymous_typeY40,const char*,int,struct x509_object_st*);
int X509_STORE_add_cert(struct x509_store_st* xs, struct x509_st* x);
int X509_STORE_add_crl(struct x509_store_st* xs, struct X509_crl_st* x);
int X509_STORE_CTX_get_by_subject(const struct x509_store_ctx_st* vs, enum anonymous_typeY40 type, const struct X509_name_st* name, struct x509_object_st* ret);
struct x509_object_st* X509_STORE_CTX_get_obj_by_subject(struct x509_store_ctx_st* vs, enum anonymous_typeY40 type, const struct X509_name_st* name);
int X509_LOOKUP_ctrl(struct x509_lookup_st* ctx, int cmd, const char* argc, long argl, char** ret);
int X509_LOOKUP_ctrl_ex(struct x509_lookup_st* ctx, int cmd, const char* argc, long argl, char** ret, struct ossl_lib_ctx_st* libctx, const char* propq);
int X509_load_cert_file(struct x509_lookup_st* ctx, const char* file, int type);
int X509_load_cert_file_ex(struct x509_lookup_st* ctx, const char* file, int type, struct ossl_lib_ctx_st* libctx, const char* propq);
int X509_load_crl_file(struct x509_lookup_st* ctx, const char* file, int type);
int X509_load_cert_crl_file(struct x509_lookup_st* ctx, const char* file, int type);
int X509_load_cert_crl_file_ex(struct x509_lookup_st* ctx, const char* file, int type, struct ossl_lib_ctx_st* libctx, const char* propq);
struct x509_lookup_st* X509_LOOKUP_new(struct x509_lookup_method_st* method);
void X509_LOOKUP_free(struct x509_lookup_st* ctx);
int X509_LOOKUP_init(struct x509_lookup_st* ctx);
int X509_LOOKUP_by_subject(struct x509_lookup_st* ctx, enum anonymous_typeY40 type, const struct X509_name_st* name, struct x509_object_st* ret);
int X509_LOOKUP_by_subject_ex(struct x509_lookup_st* ctx, enum anonymous_typeY40 type, const struct X509_name_st* name, struct x509_object_st* ret, struct ossl_lib_ctx_st* libctx, const char* propq);
int X509_LOOKUP_by_issuer_serial(struct x509_lookup_st* ctx, enum anonymous_typeY40 type, const struct X509_name_st* name, const struct asn1_string_st* serial, struct x509_object_st* ret);
int X509_LOOKUP_by_fingerprint(struct x509_lookup_st* ctx, enum anonymous_typeY40 type, const unsigned char* bytes, int len, struct x509_object_st* ret);
int X509_LOOKUP_by_alias(struct x509_lookup_st* ctx, enum anonymous_typeY40 type, const char* str, int len, struct x509_object_st* ret);
int X509_LOOKUP_set_method_data(struct x509_lookup_st* ctx, void* data);
void* X509_LOOKUP_get_method_data(const struct x509_lookup_st* ctx);
struct x509_store_st* X509_LOOKUP_get_store(const struct x509_lookup_st* ctx);
int X509_LOOKUP_shutdown(struct x509_lookup_st* ctx);
int X509_STORE_load_file(struct x509_store_st* xs, const char* file);
int X509_STORE_load_path(struct x509_store_st* xs, const char* path);
int X509_STORE_load_store(struct x509_store_st* xs, const char* store);
int X509_STORE_load_locations(struct x509_store_st* s, const char* file, const char* dir);
int X509_STORE_set_default_paths(struct x509_store_st* xs);
int X509_STORE_load_file_ex(struct x509_store_st* xs, const char* file, struct ossl_lib_ctx_st* libctx, const char* propq);
int X509_STORE_load_store_ex(struct x509_store_st* xs, const char* store, struct ossl_lib_ctx_st* libctx, const char* propq);
int X509_STORE_load_locations_ex(struct x509_store_st* xs, const char* file, const char* dir, struct ossl_lib_ctx_st* libctx, const char* propq);
int X509_STORE_set_default_paths_ex(struct x509_store_st* xs, struct ossl_lib_ctx_st* libctx, const char* propq);
int X509_STORE_CTX_set_ex_data(struct x509_store_ctx_st* ctx, int idx, void* data);
void* X509_STORE_CTX_get_ex_data(const struct x509_store_ctx_st* ctx, int idx);
int X509_STORE_CTX_get_error(const struct x509_store_ctx_st* ctx);
void X509_STORE_CTX_set_error(struct x509_store_ctx_st* ctx, int s);
int X509_STORE_CTX_get_error_depth(const struct x509_store_ctx_st* ctx);
void X509_STORE_CTX_set_error_depth(struct x509_store_ctx_st* ctx, int depth);
struct x509_st* X509_STORE_CTX_get_current_cert(const struct x509_store_ctx_st* ctx);
void X509_STORE_CTX_set_current_cert(struct x509_store_ctx_st* ctx, struct x509_st* x);
struct x509_st* X509_STORE_CTX_get0_current_issuer(const struct x509_store_ctx_st* ctx);
struct X509_crl_st* X509_STORE_CTX_get0_current_crl(const struct x509_store_ctx_st* ctx);
struct x509_store_ctx_st* X509_STORE_CTX_get0_parent_ctx(const struct x509_store_ctx_st* ctx);
struct stack_st_X509* X509_STORE_CTX_get0_chain(const struct x509_store_ctx_st* ctx);
struct stack_st_X509* X509_STORE_CTX_get1_chain(const struct x509_store_ctx_st* ctx);
void X509_STORE_CTX_set_cert(struct x509_store_ctx_st* ctx, struct x509_st* target);
void X509_STORE_CTX_set0_rpk(struct x509_store_ctx_st* ctx, struct evp_pkey_st* target);
void X509_STORE_CTX_set0_verified_chain(struct x509_store_ctx_st* c, struct stack_st_X509* sk);
void X509_STORE_CTX_set0_crls(struct x509_store_ctx_st* ctx, struct stack_st_X509_CRL* sk);
int X509_STORE_CTX_set_purpose(struct x509_store_ctx_st* ctx, int purpose);
int X509_STORE_CTX_set_trust(struct x509_store_ctx_st* ctx, int trust);
int X509_STORE_CTX_purpose_inherit(struct x509_store_ctx_st* ctx, int def_purpose, int purpose, int trust);
void X509_STORE_CTX_set_flags(struct x509_store_ctx_st* ctx, unsigned long  int flags);
void X509_STORE_CTX_set_time(struct x509_store_ctx_st* ctx, unsigned long  int flags, long t);
void X509_STORE_CTX_set_current_reasons(struct x509_store_ctx_st* ctx, unsigned int current_reasons);
struct X509_POLICY_TREE_st* X509_STORE_CTX_get0_policy_tree(const struct x509_store_ctx_st* ctx);
int X509_STORE_CTX_get_explicit_policy(const struct x509_store_ctx_st* ctx);
int X509_STORE_CTX_get_num_untrusted(const struct x509_store_ctx_st* ctx);
struct X509_VERIFY_PARAM_st* X509_STORE_CTX_get0_param(const struct x509_store_ctx_st* ctx);
void X509_STORE_CTX_set0_param(struct x509_store_ctx_st* ctx, struct X509_VERIFY_PARAM_st* param);
int X509_STORE_CTX_set_default(struct x509_store_ctx_st* ctx, const char* name);
void X509_STORE_CTX_set0_dane(struct x509_store_ctx_st* ctx, struct ssl_dane_st* dane);
struct X509_VERIFY_PARAM_st* X509_VERIFY_PARAM_new();
void X509_VERIFY_PARAM_free(struct X509_VERIFY_PARAM_st* param);
int X509_VERIFY_PARAM_inherit(struct X509_VERIFY_PARAM_st* to, const struct X509_VERIFY_PARAM_st* from);
int X509_VERIFY_PARAM_set1(struct X509_VERIFY_PARAM_st* to, const struct X509_VERIFY_PARAM_st* from);
int X509_VERIFY_PARAM_set1_name(struct X509_VERIFY_PARAM_st* param, const char* name);
int X509_VERIFY_PARAM_set_flags(struct X509_VERIFY_PARAM_st* param, unsigned long  int flags);
int X509_VERIFY_PARAM_clear_flags(struct X509_VERIFY_PARAM_st* param, unsigned long  int flags);
unsigned long  int X509_VERIFY_PARAM_get_flags(const struct X509_VERIFY_PARAM_st* param);
int X509_VERIFY_PARAM_set_purpose(struct X509_VERIFY_PARAM_st* param, int purpose);
int X509_VERIFY_PARAM_set_trust(struct X509_VERIFY_PARAM_st* param, int trust);
void X509_VERIFY_PARAM_set_depth(struct X509_VERIFY_PARAM_st* param, int depth);
void X509_VERIFY_PARAM_set_auth_level(struct X509_VERIFY_PARAM_st* param, int auth_level);
long X509_VERIFY_PARAM_get_time(const struct X509_VERIFY_PARAM_st* param);
void X509_VERIFY_PARAM_set_time(struct X509_VERIFY_PARAM_st* param, long t);
int X509_VERIFY_PARAM_add0_policy(struct X509_VERIFY_PARAM_st* param, struct asn1_object_st* policy);
int X509_VERIFY_PARAM_set1_policies(struct X509_VERIFY_PARAM_st* param, struct stack_st_ASN1_OBJECT* policies);
int X509_VERIFY_PARAM_set_inh_flags(struct X509_VERIFY_PARAM_st* param, unsigned int flags);
unsigned int X509_VERIFY_PARAM_get_inh_flags(const struct X509_VERIFY_PARAM_st* param);
char* X509_VERIFY_PARAM_get0_host(struct X509_VERIFY_PARAM_st* param, int idx);
int X509_VERIFY_PARAM_set1_host(struct X509_VERIFY_PARAM_st* param, const char* name, unsigned long  int namelen);
int X509_VERIFY_PARAM_add1_host(struct X509_VERIFY_PARAM_st* param, const char* name, unsigned long  int namelen);
void X509_VERIFY_PARAM_set_hostflags(struct X509_VERIFY_PARAM_st* param, unsigned int flags);
unsigned int X509_VERIFY_PARAM_get_hostflags(const struct X509_VERIFY_PARAM_st* param);
char* X509_VERIFY_PARAM_get0_peername(const struct X509_VERIFY_PARAM_st* param);
void X509_VERIFY_PARAM_move_peername(struct X509_VERIFY_PARAM_st* anonymous_var_nameX1672, struct X509_VERIFY_PARAM_st* anonymous_var_nameX1673);
char* X509_VERIFY_PARAM_get0_email(struct X509_VERIFY_PARAM_st* param);
int X509_VERIFY_PARAM_set1_email(struct X509_VERIFY_PARAM_st* param, const char* email, unsigned long  int emaillen);
char* X509_VERIFY_PARAM_get1_ip_asc(struct X509_VERIFY_PARAM_st* param);
int X509_VERIFY_PARAM_set1_ip(struct X509_VERIFY_PARAM_st* param, const unsigned char* ip, unsigned long  int iplen);
int X509_VERIFY_PARAM_set1_ip_asc(struct X509_VERIFY_PARAM_st* param, const char* ipasc);
int X509_VERIFY_PARAM_get_depth(const struct X509_VERIFY_PARAM_st* param);
int X509_VERIFY_PARAM_get_auth_level(const struct X509_VERIFY_PARAM_st* param);
const char* X509_VERIFY_PARAM_get0_name(const struct X509_VERIFY_PARAM_st* param);
int X509_VERIFY_PARAM_add0_table(struct X509_VERIFY_PARAM_st* param);
int X509_VERIFY_PARAM_get_count();
const struct X509_VERIFY_PARAM_st* X509_VERIFY_PARAM_get0(int id);
const struct X509_VERIFY_PARAM_st* X509_VERIFY_PARAM_lookup(const char* name);
void X509_VERIFY_PARAM_table_cleanup();
int X509_policy_check(struct X509_POLICY_TREE_st** ptree, int* pexplicit_policy, struct stack_st_X509* certs, struct stack_st_ASN1_OBJECT* policy_oids, unsigned int flags);
void X509_policy_tree_free(struct X509_POLICY_TREE_st* tree);
int X509_policy_tree_level_count(const struct X509_POLICY_TREE_st* tree);
struct X509_POLICY_LEVEL_st* X509_policy_tree_get0_level(const struct X509_POLICY_TREE_st* tree, int i);
struct stack_st_X509_POLICY_NODE* X509_policy_tree_get0_policies(const struct X509_POLICY_TREE_st* tree);
struct stack_st_X509_POLICY_NODE* X509_policy_tree_get0_user_policies(const struct X509_POLICY_TREE_st* tree);
int X509_policy_level_node_count(struct X509_POLICY_LEVEL_st* level);
struct X509_POLICY_NODE_st* X509_policy_level_get0_node(const struct X509_POLICY_LEVEL_st* level, int i);
const struct asn1_object_st* X509_policy_node_get0_policy(const struct X509_POLICY_NODE_st* node);
struct stack_st_POLICYQUALINFO* X509_policy_node_get0_qualifiers(const struct X509_POLICY_NODE_st* node);
const struct X509_POLICY_NODE_st* X509_policy_node_get0_parent(const struct X509_POLICY_NODE_st* node);
struct pkcs7_issuer_and_serial_st* PKCS7_ISSUER_AND_SERIAL_new();
void PKCS7_ISSUER_AND_SERIAL_free(struct pkcs7_issuer_and_serial_st* a);
struct pkcs7_issuer_and_serial_st* d2i_PKCS7_ISSUER_AND_SERIAL(struct pkcs7_issuer_and_serial_st** a, const unsigned char** in, long len);
int i2d_PKCS7_ISSUER_AND_SERIAL(const struct pkcs7_issuer_and_serial_st* a, unsigned char** out);
const struct ASN1_ITEM_st* PKCS7_ISSUER_AND_SERIAL_it();
int PKCS7_ISSUER_AND_SERIAL_digest(struct pkcs7_issuer_and_serial_st* data, const struct evp_md_st* type, unsigned char* md, unsigned int* len);
struct pkcs7_st* d2i_PKCS7_fp(struct _IO_FILE* fp, struct pkcs7_st** p7);
int i2d_PKCS7_fp(struct _IO_FILE* fp, const struct pkcs7_st* p7);
struct pkcs7_st* PKCS7_dup(const struct pkcs7_st* a);
struct pkcs7_st* d2i_PKCS7_bio(struct bio_st* bp, struct pkcs7_st** p7);
int i2d_PKCS7_bio(struct bio_st* bp, const struct pkcs7_st* p7);
int i2d_PKCS7_bio_stream(struct bio_st* out, struct pkcs7_st* p7, struct bio_st* in, int flags);
int PEM_write_bio_PKCS7_stream(struct bio_st* out, struct pkcs7_st* p7, struct bio_st* in, int flags);
struct pkcs7_signer_info_st* PKCS7_SIGNER_INFO_new();
void PKCS7_SIGNER_INFO_free(struct pkcs7_signer_info_st* a);
struct pkcs7_signer_info_st* d2i_PKCS7_SIGNER_INFO(struct pkcs7_signer_info_st** a, const unsigned char** in, long len);
int i2d_PKCS7_SIGNER_INFO(const struct pkcs7_signer_info_st* a, unsigned char** out);
const struct ASN1_ITEM_st* PKCS7_SIGNER_INFO_it();
struct pkcs7_recip_info_st* PKCS7_RECIP_INFO_new();
void PKCS7_RECIP_INFO_free(struct pkcs7_recip_info_st* a);
struct pkcs7_recip_info_st* d2i_PKCS7_RECIP_INFO(struct pkcs7_recip_info_st** a, const unsigned char** in, long len);
int i2d_PKCS7_RECIP_INFO(const struct pkcs7_recip_info_st* a, unsigned char** out);
const struct ASN1_ITEM_st* PKCS7_RECIP_INFO_it();
struct pkcs7_signed_st* PKCS7_SIGNED_new();
void PKCS7_SIGNED_free(struct pkcs7_signed_st* a);
struct pkcs7_signed_st* d2i_PKCS7_SIGNED(struct pkcs7_signed_st** a, const unsigned char** in, long len);
int i2d_PKCS7_SIGNED(const struct pkcs7_signed_st* a, unsigned char** out);
const struct ASN1_ITEM_st* PKCS7_SIGNED_it();
struct pkcs7_enc_content_st* PKCS7_ENC_CONTENT_new();
void PKCS7_ENC_CONTENT_free(struct pkcs7_enc_content_st* a);
struct pkcs7_enc_content_st* d2i_PKCS7_ENC_CONTENT(struct pkcs7_enc_content_st** a, const unsigned char** in, long len);
int i2d_PKCS7_ENC_CONTENT(const struct pkcs7_enc_content_st* a, unsigned char** out);
const struct ASN1_ITEM_st* PKCS7_ENC_CONTENT_it();
struct pkcs7_enveloped_st* PKCS7_ENVELOPE_new();
void PKCS7_ENVELOPE_free(struct pkcs7_enveloped_st* a);
struct pkcs7_enveloped_st* d2i_PKCS7_ENVELOPE(struct pkcs7_enveloped_st** a, const unsigned char** in, long len);
int i2d_PKCS7_ENVELOPE(const struct pkcs7_enveloped_st* a, unsigned char** out);
const struct ASN1_ITEM_st* PKCS7_ENVELOPE_it();
struct pkcs7_signedandenveloped_st* PKCS7_SIGN_ENVELOPE_new();
void PKCS7_SIGN_ENVELOPE_free(struct pkcs7_signedandenveloped_st* a);
struct pkcs7_signedandenveloped_st* d2i_PKCS7_SIGN_ENVELOPE(struct pkcs7_signedandenveloped_st** a, const unsigned char** in, long len);
int i2d_PKCS7_SIGN_ENVELOPE(const struct pkcs7_signedandenveloped_st* a, unsigned char** out);
const struct ASN1_ITEM_st* PKCS7_SIGN_ENVELOPE_it();
struct pkcs7_digest_st* PKCS7_DIGEST_new();
void PKCS7_DIGEST_free(struct pkcs7_digest_st* a);
struct pkcs7_digest_st* d2i_PKCS7_DIGEST(struct pkcs7_digest_st** a, const unsigned char** in, long len);
int i2d_PKCS7_DIGEST(const struct pkcs7_digest_st* a, unsigned char** out);
const struct ASN1_ITEM_st* PKCS7_DIGEST_it();
struct pkcs7_encrypted_st* PKCS7_ENCRYPT_new();
void PKCS7_ENCRYPT_free(struct pkcs7_encrypted_st* a);
struct pkcs7_encrypted_st* d2i_PKCS7_ENCRYPT(struct pkcs7_encrypted_st** a, const unsigned char** in, long len);
int i2d_PKCS7_ENCRYPT(const struct pkcs7_encrypted_st* a, unsigned char** out);
const struct ASN1_ITEM_st* PKCS7_ENCRYPT_it();
struct pkcs7_st* PKCS7_new();
void PKCS7_free(struct pkcs7_st* a);
struct pkcs7_st* d2i_PKCS7(struct pkcs7_st** a, const unsigned char** in, long len);
int i2d_PKCS7(const struct pkcs7_st* a, unsigned char** out);
const struct ASN1_ITEM_st* PKCS7_it();
struct pkcs7_st* PKCS7_new_ex(struct ossl_lib_ctx_st* libctx, const char* propq);
const struct ASN1_ITEM_st* PKCS7_ATTR_SIGN_it();
const struct ASN1_ITEM_st* PKCS7_ATTR_VERIFY_it();
int i2d_PKCS7_NDEF(const struct pkcs7_st* a, unsigned char** out);
int PKCS7_print_ctx(struct bio_st* out, const struct pkcs7_st* x, int indent, const struct asn1_pctx_st* pctx);
long PKCS7_ctrl(struct pkcs7_st* p7, int cmd, long larg, char* parg);
int PKCS7_type_is_other(struct pkcs7_st* p7);
int PKCS7_set_type(struct pkcs7_st* p7, int type);
int PKCS7_set0_type_other(struct pkcs7_st* p7, int type, struct asn1_type_st* other);
int PKCS7_set_content(struct pkcs7_st* p7, struct pkcs7_st* p7_data);
int PKCS7_SIGNER_INFO_set(struct pkcs7_signer_info_st* p7i, struct x509_st* x509, struct evp_pkey_st* pkey, const struct evp_md_st* dgst);
int PKCS7_SIGNER_INFO_sign(struct pkcs7_signer_info_st* si);
int PKCS7_add_signer(struct pkcs7_st* p7, struct pkcs7_signer_info_st* p7i);
int PKCS7_add_certificate(struct pkcs7_st* p7, struct x509_st* cert);
int PKCS7_add_crl(struct pkcs7_st* p7, struct X509_crl_st* crl);
int PKCS7_content_new(struct pkcs7_st* p7, int nid);
int PKCS7_dataVerify(struct x509_store_st* cert_store, struct x509_store_ctx_st* ctx, struct bio_st* bio, struct pkcs7_st* p7, struct pkcs7_signer_info_st* si);
int PKCS7_signatureVerify(struct bio_st* bio, struct pkcs7_st* p7, struct pkcs7_signer_info_st* si, struct x509_st* signer);
struct bio_st* PKCS7_dataInit(struct pkcs7_st* p7, struct bio_st* bio);
int PKCS7_dataFinal(struct pkcs7_st* p7, struct bio_st* bio);
struct bio_st* PKCS7_dataDecode(struct pkcs7_st* p7, struct evp_pkey_st* pkey, struct bio_st* in_bio, struct x509_st* pcert);
struct pkcs7_signer_info_st* PKCS7_add_signature(struct pkcs7_st* p7, struct x509_st* x509, struct evp_pkey_st* pkey, const struct evp_md_st* dgst);
struct x509_st* PKCS7_cert_from_signer_info(struct pkcs7_st* p7, struct pkcs7_signer_info_st* si);
int PKCS7_set_digest(struct pkcs7_st* p7, const struct evp_md_st* md);
struct stack_st_PKCS7_SIGNER_INFO* PKCS7_get_signer_info(struct pkcs7_st* p7);
struct pkcs7_recip_info_st* PKCS7_add_recipient(struct pkcs7_st* p7, struct x509_st* x509);
void PKCS7_SIGNER_INFO_get0_algs(struct pkcs7_signer_info_st* si, struct evp_pkey_st** pk, struct X509_algor_st** pdig, struct X509_algor_st** psig);
void PKCS7_RECIP_INFO_get0_alg(struct pkcs7_recip_info_st* ri, struct X509_algor_st** penc);
int PKCS7_add_recipient_info(struct pkcs7_st* p7, struct pkcs7_recip_info_st* ri);
int PKCS7_RECIP_INFO_set(struct pkcs7_recip_info_st* p7i, struct x509_st* x509);
int PKCS7_set_cipher(struct pkcs7_st* p7, const struct evp_cipher_st* cipher);
int PKCS7_stream(unsigned char*** boundary, struct pkcs7_st* p7);
struct pkcs7_issuer_and_serial_st* PKCS7_get_issuer_and_serial(struct pkcs7_st* p7, int idx);
struct asn1_string_st* PKCS7_get_octet_string(struct pkcs7_st* p7);
struct asn1_string_st* PKCS7_digest_from_attributes(struct stack_st_X509_ATTRIBUTE* sk);
int PKCS7_add_signed_attribute(struct pkcs7_signer_info_st* p7si, int nid, int type, void* data);
int PKCS7_add_attribute(struct pkcs7_signer_info_st* p7si, int nid, int atrtype, void* value);
struct asn1_type_st* PKCS7_get_attribute(const struct pkcs7_signer_info_st* si, int nid);
struct asn1_type_st* PKCS7_get_signed_attribute(const struct pkcs7_signer_info_st* si, int nid);
int PKCS7_set_signed_attributes(struct pkcs7_signer_info_st* p7si, struct stack_st_X509_ATTRIBUTE* sk);
int PKCS7_set_attributes(struct pkcs7_signer_info_st* p7si, struct stack_st_X509_ATTRIBUTE* sk);
struct pkcs7_st* PKCS7_sign(struct x509_st* signcert, struct evp_pkey_st* pkey, struct stack_st_X509* certs, struct bio_st* data, int flags);
struct pkcs7_st* PKCS7_sign_ex(struct x509_st* signcert, struct evp_pkey_st* pkey, struct stack_st_X509* certs, struct bio_st* data, int flags, struct ossl_lib_ctx_st* libctx, const char* propq);
struct pkcs7_signer_info_st* PKCS7_sign_add_signer(struct pkcs7_st* p7, struct x509_st* signcert, struct evp_pkey_st* pkey, const struct evp_md_st* md, int flags);
int PKCS7_final(struct pkcs7_st* p7, struct bio_st* data, int flags);
int PKCS7_verify(struct pkcs7_st* p7, struct stack_st_X509* certs, struct x509_store_st* store, struct bio_st* indata, struct bio_st* out, int flags);
struct stack_st_X509* PKCS7_get0_signers(struct pkcs7_st* p7, struct stack_st_X509* certs, int flags);
struct pkcs7_st* PKCS7_encrypt(struct stack_st_X509* certs, struct bio_st* in, const struct evp_cipher_st* cipher, int flags);
struct pkcs7_st* PKCS7_encrypt_ex(struct stack_st_X509* certs, struct bio_st* in, const struct evp_cipher_st* cipher, int flags, struct ossl_lib_ctx_st* libctx, const char* propq);
int PKCS7_decrypt(struct pkcs7_st* p7, struct evp_pkey_st* pkey, struct x509_st* cert, struct bio_st* data, int flags);
int PKCS7_add_attrib_smimecap(struct pkcs7_signer_info_st* si, struct stack_st_X509_ALGOR* cap);
struct stack_st_X509_ALGOR* PKCS7_get_smimecap(struct pkcs7_signer_info_st* si);
int PKCS7_simple_smimecap(struct stack_st_X509_ALGOR* sk, int nid, int arg);
int PKCS7_add_attrib_content_type(struct pkcs7_signer_info_st* si, struct asn1_object_st* coid);
int PKCS7_add0_attrib_signing_time(struct pkcs7_signer_info_st* si, struct asn1_string_st* t);
int PKCS7_add1_attrib_digest(struct pkcs7_signer_info_st* si, const unsigned char* md, int mdlen);
int SMIME_write_PKCS7(struct bio_st* bio, struct pkcs7_st* p7, struct bio_st* data, int flags);
struct pkcs7_st* SMIME_read_PKCS7_ex(struct bio_st* bio, struct bio_st** bcont, struct pkcs7_st** p7);
struct pkcs7_st* SMIME_read_PKCS7(struct bio_st* bio, struct bio_st** bcont);
struct bio_st* BIO_new_PKCS7(struct bio_st* out, struct pkcs7_st* p7);
void X509_CRL_set_default_method(const struct x509_crl_method_st* meth);
struct x509_crl_method_st* X509_CRL_METHOD_new(int (*crl_init)(struct X509_crl_st*), int (*crl_free)(struct X509_crl_st*), int (*crl_lookup)(struct X509_crl_st*,struct x509_revoked_st**,const struct asn1_string_st*,const struct X509_name_st*), int (*crl_verify)(struct X509_crl_st*,struct evp_pkey_st*));
void X509_CRL_METHOD_free(struct x509_crl_method_st* m);
void X509_CRL_set_meth_data(struct X509_crl_st* crl, void* dat);
void* X509_CRL_get_meth_data(struct X509_crl_st* crl);
const char* X509_verify_cert_error_string(long n);
int X509_verify(struct x509_st* a, struct evp_pkey_st* r);
int X509_self_signed(struct x509_st* cert, int verify_signature);
int X509_REQ_verify_ex(struct X509_req_st* a, struct evp_pkey_st* r, struct ossl_lib_ctx_st* libctx, const char* propq);
int X509_REQ_verify(struct X509_req_st* a, struct evp_pkey_st* r);
int X509_CRL_verify(struct X509_crl_st* a, struct evp_pkey_st* r);
int NETSCAPE_SPKI_verify(struct Netscape_spki_st* a, struct evp_pkey_st* r);
struct Netscape_spki_st* NETSCAPE_SPKI_b64_decode(const char* str, int len);
char* NETSCAPE_SPKI_b64_encode(struct Netscape_spki_st* x);
struct evp_pkey_st* NETSCAPE_SPKI_get_pubkey(struct Netscape_spki_st* x);
int NETSCAPE_SPKI_set_pubkey(struct Netscape_spki_st* x, struct evp_pkey_st* pkey);
int NETSCAPE_SPKI_print(struct bio_st* out, struct Netscape_spki_st* spki);
int X509_signature_dump(struct bio_st* bp, const struct asn1_string_st* sig, int indent);
int X509_signature_print(struct bio_st* bp, const struct X509_algor_st* alg, const struct asn1_string_st* sig);
int X509_sign(struct x509_st* x, struct evp_pkey_st* pkey, const struct evp_md_st* md);
int X509_sign_ctx(struct x509_st* x, struct evp_md_ctx_st* ctx);
int X509_REQ_sign(struct X509_req_st* x, struct evp_pkey_st* pkey, const struct evp_md_st* md);
int X509_REQ_sign_ctx(struct X509_req_st* x, struct evp_md_ctx_st* ctx);
int X509_CRL_sign(struct X509_crl_st* x, struct evp_pkey_st* pkey, const struct evp_md_st* md);
int X509_CRL_sign_ctx(struct X509_crl_st* x, struct evp_md_ctx_st* ctx);
int NETSCAPE_SPKI_sign(struct Netscape_spki_st* x, struct evp_pkey_st* pkey, const struct evp_md_st* md);
int X509_pubkey_digest(const struct x509_st* data, const struct evp_md_st* type, unsigned char* md, unsigned int* len);
int X509_digest(const struct x509_st* data, const struct evp_md_st* type, unsigned char* md, unsigned int* len);
struct asn1_string_st* X509_digest_sig(const struct x509_st* cert, struct evp_md_st** md_used, int* md_is_fallback);
int X509_CRL_digest(const struct X509_crl_st* data, const struct evp_md_st* type, unsigned char* md, unsigned int* len);
int X509_REQ_digest(const struct X509_req_st* data, const struct evp_md_st* type, unsigned char* md, unsigned int* len);
int X509_NAME_digest(const struct X509_name_st* data, const struct evp_md_st* type, unsigned char* md, unsigned int* len);
struct x509_st* X509_load_http(const char* url, struct bio_st* bio, struct bio_st* rbio, int timeout);
struct X509_crl_st* X509_CRL_load_http(const char* url, struct bio_st* bio, struct bio_st* rbio, int timeout);
int CONF_set_default_method(struct conf_method_st* meth);
void CONF_set_nconf(struct conf_st* conf, struct lhash_st_CONF_VALUE* hash);
struct lhash_st_CONF_VALUE* CONF_load(struct lhash_st_CONF_VALUE* conf, const char* file, long* eline);
struct lhash_st_CONF_VALUE* CONF_load_fp(struct lhash_st_CONF_VALUE* conf, struct _IO_FILE* fp, long* eline);
struct lhash_st_CONF_VALUE* CONF_load_bio(struct lhash_st_CONF_VALUE* conf, struct bio_st* bp, long* eline);
struct stack_st_CONF_VALUE* CONF_get_section(struct lhash_st_CONF_VALUE* conf, const char* section);
char* CONF_get_string(struct lhash_st_CONF_VALUE* conf, const char* group, const char* name);
long CONF_get_number(struct lhash_st_CONF_VALUE* conf, const char* group, const char* name);
void CONF_free(struct lhash_st_CONF_VALUE* conf);
int CONF_dump_fp(struct lhash_st_CONF_VALUE* conf, struct _IO_FILE* out);
int CONF_dump_bio(struct lhash_st_CONF_VALUE* conf, struct bio_st* out);
void OPENSSL_config(const char* config_name);
struct conf_st* NCONF_new_ex(struct ossl_lib_ctx_st* libctx, struct conf_method_st* meth);
struct ossl_lib_ctx_st* NCONF_get0_libctx(const struct conf_st* conf);
struct conf_st* NCONF_new(struct conf_method_st* meth);
struct conf_method_st* NCONF_default();
struct conf_method_st* NCONF_WIN32();
void NCONF_free(struct conf_st* conf);
void NCONF_free_data(struct conf_st* conf);
int NCONF_load(struct conf_st* conf, const char* file, long* eline);
int NCONF_load_fp(struct conf_st* conf, struct _IO_FILE* fp, long* eline);
int NCONF_load_bio(struct conf_st* conf, struct bio_st* bp, long* eline);
struct stack_st_OPENSSL_CSTRING* NCONF_get_section_names(const struct conf_st* conf);
struct stack_st_CONF_VALUE* NCONF_get_section(const struct conf_st* conf, const char* section);
char* NCONF_get_string(const struct conf_st* conf, const char* group, const char* name);
int NCONF_get_number_e(const struct conf_st* conf, const char* group, const char* name, long* result);
int NCONF_dump_fp(const struct conf_st* conf, struct _IO_FILE* out);
int NCONF_dump_bio(const struct conf_st* conf, struct bio_st* out);
int CONF_modules_load(const struct conf_st* cnf, const char* appname, unsigned long  int flags);
int CONF_modules_load_file_ex(struct ossl_lib_ctx_st* libctx, const char* filename, const char* appname, unsigned long  int flags);
int CONF_modules_load_file(const char* filename, const char* appname, unsigned long  int flags);
void CONF_modules_unload(int all);
void CONF_modules_finish();
int CONF_module_add(const char* name, int (*ifunc)(struct conf_imodule_st*,const struct conf_st*), void (*ffunc)(struct conf_imodule_st*));
const char* CONF_imodule_get_name(const struct conf_imodule_st* md);
const char* CONF_imodule_get_value(const struct conf_imodule_st* md);
void* CONF_imodule_get_usr_data(const struct conf_imodule_st* md);
void CONF_imodule_set_usr_data(struct conf_imodule_st* md, void* usr_data);
struct conf_module_st* CONF_imodule_get_module(const struct conf_imodule_st* md);
unsigned long  int CONF_imodule_get_flags(const struct conf_imodule_st* md);
void CONF_imodule_set_flags(struct conf_imodule_st* md, unsigned long  int flags);
void* CONF_module_get_usr_data(struct conf_module_st* pmod);
void CONF_module_set_usr_data(struct conf_module_st* pmod, void* usr_data);
char* CONF_get1_default_config_file();
int CONF_parse_list(const char* list, int sep, int nospc, int (*list_cb)(const char*,int,void*), void* arg);
void OPENSSL_load_builtin_modules();
struct ossl_http_req_ctx_st* OSSL_HTTP_REQ_CTX_new(struct bio_st* wbio, struct bio_st* rbio, int buf_size);
void OSSL_HTTP_REQ_CTX_free(struct ossl_http_req_ctx_st* rctx);
int OSSL_HTTP_REQ_CTX_set_request_line(struct ossl_http_req_ctx_st* rctx, int method_POST, const char* server, const char* port, const char* path);
int OSSL_HTTP_REQ_CTX_add1_header(struct ossl_http_req_ctx_st* rctx, const char* name, const char* value);
int OSSL_HTTP_REQ_CTX_set_expected(struct ossl_http_req_ctx_st* rctx, const char* content_type, int asn1, int timeout, int keep_alive);
int OSSL_HTTP_REQ_CTX_set1_req(struct ossl_http_req_ctx_st* rctx, const char* content_type, const struct ASN1_ITEM_st* it, const struct ASN1_VALUE_st* req);
int OSSL_HTTP_REQ_CTX_nbio(struct ossl_http_req_ctx_st* rctx);
int OSSL_HTTP_REQ_CTX_nbio_d2i(struct ossl_http_req_ctx_st* rctx, struct ASN1_VALUE_st** pval, const struct ASN1_ITEM_st* it);
struct bio_st* OSSL_HTTP_REQ_CTX_exchange(struct ossl_http_req_ctx_st* rctx);
struct bio_st* OSSL_HTTP_REQ_CTX_get0_mem_bio(const struct ossl_http_req_ctx_st* rctx);
unsigned long  int OSSL_HTTP_REQ_CTX_get_resp_len(const struct ossl_http_req_ctx_st* rctx);
void OSSL_HTTP_REQ_CTX_set_max_response_length(struct ossl_http_req_ctx_st* rctx, unsigned long  int len);
int OSSL_HTTP_is_alive(const struct ossl_http_req_ctx_st* rctx);
struct ossl_http_req_ctx_st* OSSL_HTTP_open(const char* server, const char* port, const char* proxy, const char* no_proxy, int use_ssl, struct bio_st* bio, struct bio_st* rbio, struct bio_st* (*bio_update_fn)(struct bio_st*,void*,int,int), void* arg, int buf_size, int overall_timeout);
int OSSL_HTTP_proxy_connect(struct bio_st* bio, const char* server, const char* port, const char* proxyuser, const char* proxypass, int timeout, struct bio_st* bio_err, const char* prog);
int OSSL_HTTP_set1_request(struct ossl_http_req_ctx_st* rctx, const char* path, const struct stack_st_CONF_VALUE* headers, const char* content_type, struct bio_st* req, const char* expected_content_type, int expect_asn1, unsigned long  int max_resp_len, int timeout, int keep_alive);
struct bio_st* OSSL_HTTP_exchange(struct ossl_http_req_ctx_st* rctx, char** redirection_url);
struct bio_st* OSSL_HTTP_get(const char* url, const char* proxy, const char* no_proxy, struct bio_st* bio, struct bio_st* rbio, struct bio_st* (*bio_update_fn)(struct bio_st*,void*,int,int), void* arg, int buf_size, const struct stack_st_CONF_VALUE* headers, const char* expected_content_type, int expect_asn1, unsigned long  int max_resp_len, int timeout);
struct bio_st* OSSL_HTTP_transfer(struct ossl_http_req_ctx_st** prctx, const char* server, const char* port, const char* path, int use_ssl, const char* proxy, const char* no_proxy, struct bio_st* bio, struct bio_st* rbio, struct bio_st* (*bio_update_fn)(struct bio_st*,void*,int,int), void* arg, int buf_size, const struct stack_st_CONF_VALUE* headers, const char* content_type, struct bio_st* req, const char* expected_content_type, int expect_asn1, unsigned long  int max_resp_len, int timeout, int keep_alive);
int OSSL_HTTP_close(struct ossl_http_req_ctx_st* rctx, int ok);
int OSSL_parse_url(const char* url, char** pscheme, char** puser, char** phost, char** pport, int* pport_num, char** ppath, char** pquery, char** pfrag);
int OSSL_HTTP_parse_url(const char* url, int* pssl, char** puser, char** phost, char** pport, int* pport_num, char** ppath, char** pquery, char** pfrag);
const char* OSSL_HTTP_adapt_proxy(const char* proxy, const char* no_proxy, const char* server, int use_ssl);
void OSSL_HTTP_REQ_CTX_set_max_response_hdr_lines(struct ossl_http_req_ctx_st* rctx, unsigned long  int count);
struct x509_st* d2i_X509_fp(struct _IO_FILE* fp, struct x509_st** x509);
int i2d_X509_fp(struct _IO_FILE* fp, const struct x509_st* x509);
struct X509_crl_st* d2i_X509_CRL_fp(struct _IO_FILE* fp, struct X509_crl_st** crl);
int i2d_X509_CRL_fp(struct _IO_FILE* fp, const struct X509_crl_st* crl);
struct X509_req_st* d2i_X509_REQ_fp(struct _IO_FILE* fp, struct X509_req_st** req);
int i2d_X509_REQ_fp(struct _IO_FILE* fp, const struct X509_req_st* req);
struct rsa_st* d2i_RSAPrivateKey_fp(struct _IO_FILE* fp, struct rsa_st** rsa);
int i2d_RSAPrivateKey_fp(struct _IO_FILE* fp, const struct rsa_st* rsa);
struct rsa_st* d2i_RSAPublicKey_fp(struct _IO_FILE* fp, struct rsa_st** rsa);
int i2d_RSAPublicKey_fp(struct _IO_FILE* fp, const struct rsa_st* rsa);
struct rsa_st* d2i_RSA_PUBKEY_fp(struct _IO_FILE* fp, struct rsa_st** rsa);
int i2d_RSA_PUBKEY_fp(struct _IO_FILE* fp, const struct rsa_st* rsa);
struct dsa_st* d2i_DSA_PUBKEY_fp(struct _IO_FILE* fp, struct dsa_st** dsa);
int i2d_DSA_PUBKEY_fp(struct _IO_FILE* fp, const struct dsa_st* dsa);
struct dsa_st* d2i_DSAPrivateKey_fp(struct _IO_FILE* fp, struct dsa_st** dsa);
int i2d_DSAPrivateKey_fp(struct _IO_FILE* fp, const struct dsa_st* dsa);
struct ec_key_st* d2i_EC_PUBKEY_fp(struct _IO_FILE* fp, struct ec_key_st** eckey);
int i2d_EC_PUBKEY_fp(struct _IO_FILE* fp, const struct ec_key_st* eckey);
struct ec_key_st* d2i_ECPrivateKey_fp(struct _IO_FILE* fp, struct ec_key_st** eckey);
int i2d_ECPrivateKey_fp(struct _IO_FILE* fp, const struct ec_key_st* eckey);
struct X509_sig_st* d2i_PKCS8_fp(struct _IO_FILE* fp, struct X509_sig_st** p8);
int i2d_PKCS8_fp(struct _IO_FILE* fp, const struct X509_sig_st* p8);
struct X509_pubkey_st* d2i_X509_PUBKEY_fp(struct _IO_FILE* fp, struct X509_pubkey_st** xpk);
int i2d_X509_PUBKEY_fp(struct _IO_FILE* fp, const struct X509_pubkey_st* xpk);
struct pkcs8_priv_key_info_st* d2i_PKCS8_PRIV_KEY_INFO_fp(struct _IO_FILE* fp, struct pkcs8_priv_key_info_st** p8inf);
int i2d_PKCS8_PRIV_KEY_INFO_fp(struct _IO_FILE* fp, const struct pkcs8_priv_key_info_st* p8inf);
int i2d_PKCS8PrivateKeyInfo_fp(struct _IO_FILE* fp, const struct evp_pkey_st* key);
int i2d_PrivateKey_fp(struct _IO_FILE* fp, const struct evp_pkey_st* pkey);
struct evp_pkey_st* d2i_PrivateKey_ex_fp(struct _IO_FILE* fp, struct evp_pkey_st** a, struct ossl_lib_ctx_st* libctx, const char* propq);
struct evp_pkey_st* d2i_PrivateKey_fp(struct _IO_FILE* fp, struct evp_pkey_st** a);
int i2d_PUBKEY_fp(struct _IO_FILE* fp, const struct evp_pkey_st* pkey);
struct evp_pkey_st* d2i_PUBKEY_ex_fp(struct _IO_FILE* fp, struct evp_pkey_st** a, struct ossl_lib_ctx_st* libctx, const char* propq);
struct evp_pkey_st* d2i_PUBKEY_fp(struct _IO_FILE* fp, struct evp_pkey_st** a);
struct x509_st* d2i_X509_bio(struct bio_st* bp, struct x509_st** x509);
int i2d_X509_bio(struct bio_st* bp, const struct x509_st* x509);
struct X509_crl_st* d2i_X509_CRL_bio(struct bio_st* bp, struct X509_crl_st** crl);
int i2d_X509_CRL_bio(struct bio_st* bp, const struct X509_crl_st* crl);
struct X509_req_st* d2i_X509_REQ_bio(struct bio_st* bp, struct X509_req_st** req);
int i2d_X509_REQ_bio(struct bio_st* bp, const struct X509_req_st* req);
struct rsa_st* d2i_RSAPrivateKey_bio(struct bio_st* bp, struct rsa_st** rsa);
int i2d_RSAPrivateKey_bio(struct bio_st* bp, const struct rsa_st* rsa);
struct rsa_st* d2i_RSAPublicKey_bio(struct bio_st* bp, struct rsa_st** rsa);
int i2d_RSAPublicKey_bio(struct bio_st* bp, const struct rsa_st* rsa);
struct rsa_st* d2i_RSA_PUBKEY_bio(struct bio_st* bp, struct rsa_st** rsa);
int i2d_RSA_PUBKEY_bio(struct bio_st* bp, const struct rsa_st* rsa);
struct dsa_st* d2i_DSA_PUBKEY_bio(struct bio_st* bp, struct dsa_st** dsa);
int i2d_DSA_PUBKEY_bio(struct bio_st* bp, const struct dsa_st* dsa);
struct dsa_st* d2i_DSAPrivateKey_bio(struct bio_st* bp, struct dsa_st** dsa);
int i2d_DSAPrivateKey_bio(struct bio_st* bp, const struct dsa_st* dsa);
struct ec_key_st* d2i_EC_PUBKEY_bio(struct bio_st* bp, struct ec_key_st** eckey);
int i2d_EC_PUBKEY_bio(struct bio_st* bp, const struct ec_key_st* eckey);
struct ec_key_st* d2i_ECPrivateKey_bio(struct bio_st* bp, struct ec_key_st** eckey);
int i2d_ECPrivateKey_bio(struct bio_st* bp, const struct ec_key_st* eckey);
struct X509_sig_st* d2i_PKCS8_bio(struct bio_st* bp, struct X509_sig_st** p8);
int i2d_PKCS8_bio(struct bio_st* bp, const struct X509_sig_st* p8);
struct X509_pubkey_st* d2i_X509_PUBKEY_bio(struct bio_st* bp, struct X509_pubkey_st** xpk);
int i2d_X509_PUBKEY_bio(struct bio_st* bp, const struct X509_pubkey_st* xpk);
struct pkcs8_priv_key_info_st* d2i_PKCS8_PRIV_KEY_INFO_bio(struct bio_st* bp, struct pkcs8_priv_key_info_st** p8inf);
int i2d_PKCS8_PRIV_KEY_INFO_bio(struct bio_st* bp, const struct pkcs8_priv_key_info_st* p8inf);
int i2d_PKCS8PrivateKeyInfo_bio(struct bio_st* bp, const struct evp_pkey_st* key);
int i2d_PrivateKey_bio(struct bio_st* bp, const struct evp_pkey_st* pkey);
struct evp_pkey_st* d2i_PrivateKey_ex_bio(struct bio_st* bp, struct evp_pkey_st** a, struct ossl_lib_ctx_st* libctx, const char* propq);
struct evp_pkey_st* d2i_PrivateKey_bio(struct bio_st* bp, struct evp_pkey_st** a);
int i2d_PUBKEY_bio(struct bio_st* bp, const struct evp_pkey_st* pkey);
struct evp_pkey_st* d2i_PUBKEY_ex_bio(struct bio_st* bp, struct evp_pkey_st** a, struct ossl_lib_ctx_st* libctx, const char* propq);
struct evp_pkey_st* d2i_PUBKEY_bio(struct bio_st* bp, struct evp_pkey_st** a);
struct x509_st* X509_dup(const struct x509_st* a);
struct X509_algor_st* X509_ALGOR_dup(const struct X509_algor_st* a);
struct x509_attributes_st* X509_ATTRIBUTE_dup(const struct x509_attributes_st* a);
struct X509_crl_st* X509_CRL_dup(const struct X509_crl_st* a);
struct X509_extension_st* X509_EXTENSION_dup(const struct X509_extension_st* a);
struct X509_pubkey_st* X509_PUBKEY_dup(const struct X509_pubkey_st* a);
struct X509_req_st* X509_REQ_dup(const struct X509_req_st* a);
struct x509_revoked_st* X509_REVOKED_dup(const struct x509_revoked_st* a);
int X509_ALGOR_set0(struct X509_algor_st* alg, struct asn1_object_st* aobj, int ptype, void* pval);
void X509_ALGOR_get0(const struct asn1_object_st** paobj, int* pptype, const void** ppval, const struct X509_algor_st* algor);
void X509_ALGOR_set_md(struct X509_algor_st* alg, const struct evp_md_st* md);
int X509_ALGOR_cmp(const struct X509_algor_st* a, const struct X509_algor_st* b);
int X509_ALGOR_copy(struct X509_algor_st* dest, const struct X509_algor_st* src);
struct X509_name_st* X509_NAME_dup(const struct X509_name_st* a);
struct X509_name_entry_st* X509_NAME_ENTRY_dup(const struct X509_name_entry_st* a);
int X509_cmp_time(const struct asn1_string_st* s, long* t);
int X509_cmp_current_time(const struct asn1_string_st* s);
int X509_cmp_timeframe(const struct X509_VERIFY_PARAM_st* vpm, const struct asn1_string_st* start, const struct asn1_string_st* end);
struct asn1_string_st* X509_time_adj(struct asn1_string_st* s, long adj, long* t);
struct asn1_string_st* X509_time_adj_ex(struct asn1_string_st* s, int offset_day, long offset_sec, long* t);
struct asn1_string_st* X509_gmtime_adj(struct asn1_string_st* s, long adj);
const char* X509_get_default_cert_area();
const char* X509_get_default_cert_dir();
const char* X509_get_default_cert_file();
const char* X509_get_default_cert_dir_env();
const char* X509_get_default_cert_file_env();
const char* X509_get_default_private_dir();
struct X509_req_st* X509_to_X509_REQ(struct x509_st* x, struct evp_pkey_st* pkey, const struct evp_md_st* md);
struct x509_st* X509_REQ_to_X509(struct X509_req_st* r, int days, struct evp_pkey_st* pkey);
struct X509_algor_st* X509_ALGOR_new();
void X509_ALGOR_free(struct X509_algor_st* a);
struct X509_algor_st* d2i_X509_ALGOR(struct X509_algor_st** a, const unsigned char** in, long len);
int i2d_X509_ALGOR(const struct X509_algor_st* a, unsigned char** out);
const struct ASN1_ITEM_st* X509_ALGOR_it();
struct stack_st_X509_ALGOR* d2i_X509_ALGORS(struct stack_st_X509_ALGOR** a, const unsigned char** in, long len);
int i2d_X509_ALGORS(const struct stack_st_X509_ALGOR* a, unsigned char** out);
const struct ASN1_ITEM_st* X509_ALGORS_it();
struct X509_val_st* X509_VAL_new();
void X509_VAL_free(struct X509_val_st* a);
struct X509_val_st* d2i_X509_VAL(struct X509_val_st** a, const unsigned char** in, long len);
int i2d_X509_VAL(const struct X509_val_st* a, unsigned char** out);
const struct ASN1_ITEM_st* X509_VAL_it();
struct X509_pubkey_st* X509_PUBKEY_new();
void X509_PUBKEY_free(struct X509_pubkey_st* a);
struct X509_pubkey_st* d2i_X509_PUBKEY(struct X509_pubkey_st** a, const unsigned char** in, long len);
int i2d_X509_PUBKEY(const struct X509_pubkey_st* a, unsigned char** out);
const struct ASN1_ITEM_st* X509_PUBKEY_it();
struct X509_pubkey_st* X509_PUBKEY_new_ex(struct ossl_lib_ctx_st* libctx, const char* propq);
int X509_PUBKEY_set(struct X509_pubkey_st** x, struct evp_pkey_st* pkey);
struct evp_pkey_st* X509_PUBKEY_get0(const struct X509_pubkey_st* key);
struct evp_pkey_st* X509_PUBKEY_get(const struct X509_pubkey_st* key);
int X509_get_pubkey_parameters(struct evp_pkey_st* pkey, struct stack_st_X509* chain);
long X509_get_pathlen(struct x509_st* x);
struct evp_pkey_st* d2i_PUBKEY(struct evp_pkey_st** a, const unsigned char** in, long len);
int i2d_PUBKEY(const struct evp_pkey_st* a, unsigned char** out);
struct evp_pkey_st* d2i_PUBKEY_ex(struct evp_pkey_st** a, const unsigned char** pp, long length, struct ossl_lib_ctx_st* libctx, const char* propq);
struct rsa_st* d2i_RSA_PUBKEY(struct rsa_st** a, const unsigned char** in, long len);
int i2d_RSA_PUBKEY(const struct rsa_st* a, unsigned char** out);
struct dsa_st* d2i_DSA_PUBKEY(struct dsa_st** a, const unsigned char** in, long len);
int i2d_DSA_PUBKEY(const struct dsa_st* a, unsigned char** out);
struct ec_key_st* d2i_EC_PUBKEY(struct ec_key_st** a, const unsigned char** in, long len);
int i2d_EC_PUBKEY(const struct ec_key_st* a, unsigned char** out);
struct X509_sig_st* X509_SIG_new();
void X509_SIG_free(struct X509_sig_st* a);
struct X509_sig_st* d2i_X509_SIG(struct X509_sig_st** a, const unsigned char** in, long len);
int i2d_X509_SIG(const struct X509_sig_st* a, unsigned char** out);
const struct ASN1_ITEM_st* X509_SIG_it();
void X509_SIG_get0(const struct X509_sig_st* sig, const struct X509_algor_st** palg, const struct asn1_string_st** pdigest);
void X509_SIG_getm(struct X509_sig_st* sig, struct X509_algor_st** palg, struct asn1_string_st** pdigest);
struct X509_req_info_st* X509_REQ_INFO_new();
void X509_REQ_INFO_free(struct X509_req_info_st* a);
struct X509_req_info_st* d2i_X509_REQ_INFO(struct X509_req_info_st** a, const unsigned char** in, long len);
int i2d_X509_REQ_INFO(const struct X509_req_info_st* a, unsigned char** out);
const struct ASN1_ITEM_st* X509_REQ_INFO_it();
struct X509_req_st* X509_REQ_new();
void X509_REQ_free(struct X509_req_st* a);
struct X509_req_st* d2i_X509_REQ(struct X509_req_st** a, const unsigned char** in, long len);
int i2d_X509_REQ(const struct X509_req_st* a, unsigned char** out);
const struct ASN1_ITEM_st* X509_REQ_it();
struct X509_req_st* X509_REQ_new_ex(struct ossl_lib_ctx_st* libctx, const char* propq);
struct x509_attributes_st* X509_ATTRIBUTE_new();
void X509_ATTRIBUTE_free(struct x509_attributes_st* a);
struct x509_attributes_st* d2i_X509_ATTRIBUTE(struct x509_attributes_st** a, const unsigned char** in, long len);
int i2d_X509_ATTRIBUTE(const struct x509_attributes_st* a, unsigned char** out);
const struct ASN1_ITEM_st* X509_ATTRIBUTE_it();
struct x509_attributes_st* X509_ATTRIBUTE_create(int nid, int atrtype, void* value);
struct X509_extension_st* X509_EXTENSION_new();
void X509_EXTENSION_free(struct X509_extension_st* a);
struct X509_extension_st* d2i_X509_EXTENSION(struct X509_extension_st** a, const unsigned char** in, long len);
int i2d_X509_EXTENSION(const struct X509_extension_st* a, unsigned char** out);
const struct ASN1_ITEM_st* X509_EXTENSION_it();
struct stack_st_X509_EXTENSION* d2i_X509_EXTENSIONS(struct stack_st_X509_EXTENSION** a, const unsigned char** in, long len);
int i2d_X509_EXTENSIONS(const struct stack_st_X509_EXTENSION* a, unsigned char** out);
const struct ASN1_ITEM_st* X509_EXTENSIONS_it();
struct X509_name_entry_st* X509_NAME_ENTRY_new();
void X509_NAME_ENTRY_free(struct X509_name_entry_st* a);
struct X509_name_entry_st* d2i_X509_NAME_ENTRY(struct X509_name_entry_st** a, const unsigned char** in, long len);
int i2d_X509_NAME_ENTRY(const struct X509_name_entry_st* a, unsigned char** out);
const struct ASN1_ITEM_st* X509_NAME_ENTRY_it();
struct X509_name_st* X509_NAME_new();
void X509_NAME_free(struct X509_name_st* a);
struct X509_name_st* d2i_X509_NAME(struct X509_name_st** a, const unsigned char** in, long len);
int i2d_X509_NAME(const struct X509_name_st* a, unsigned char** out);
const struct ASN1_ITEM_st* X509_NAME_it();
int X509_NAME_set(struct X509_name_st** xn, const struct X509_name_st* name);
struct x509_cinf_st* X509_CINF_new();
void X509_CINF_free(struct x509_cinf_st* a);
struct x509_cinf_st* d2i_X509_CINF(struct x509_cinf_st** a, const unsigned char** in, long len);
int i2d_X509_CINF(const struct x509_cinf_st* a, unsigned char** out);
const struct ASN1_ITEM_st* X509_CINF_it();
struct x509_st* X509_new();
void X509_free(struct x509_st* a);
struct x509_st* d2i_X509(struct x509_st** a, const unsigned char** in, long len);
int i2d_X509(const struct x509_st* a, unsigned char** out);
const struct ASN1_ITEM_st* X509_it();
struct x509_st* X509_new_ex(struct ossl_lib_ctx_st* libctx, const char* propq);
struct x509_cert_aux_st* X509_CERT_AUX_new();
void X509_CERT_AUX_free(struct x509_cert_aux_st* a);
struct x509_cert_aux_st* d2i_X509_CERT_AUX(struct x509_cert_aux_st** a, const unsigned char** in, long len);
int i2d_X509_CERT_AUX(const struct x509_cert_aux_st* a, unsigned char** out);
const struct ASN1_ITEM_st* X509_CERT_AUX_it();
int X509_set_ex_data(struct x509_st* r, int idx, void* arg);
void* X509_get_ex_data(const struct x509_st* r, int idx);
struct x509_st* d2i_X509_AUX(struct x509_st** a, const unsigned char** in, long len);
int i2d_X509_AUX(const struct x509_st* a, unsigned char** out);
int i2d_re_X509_tbs(struct x509_st* x, unsigned char** pp);
int X509_SIG_INFO_get(const struct x509_sig_info_st* siginf, int* mdnid, int* pknid, int* secbits, unsigned int* flags);
void X509_SIG_INFO_set(struct x509_sig_info_st* siginf, int mdnid, int pknid, int secbits, unsigned int flags);
int X509_get_signature_info(struct x509_st* x, int* mdnid, int* pknid, int* secbits, unsigned int* flags);
void X509_get0_signature(const struct asn1_string_st** psig, const struct X509_algor_st** palg, const struct x509_st* x);
int X509_get_signature_nid(const struct x509_st* x);
void X509_set0_distinguishing_id(struct x509_st* x, struct asn1_string_st* d_id);
struct asn1_string_st* X509_get0_distinguishing_id(struct x509_st* x);
void X509_REQ_set0_distinguishing_id(struct X509_req_st* x, struct asn1_string_st* d_id);
struct asn1_string_st* X509_REQ_get0_distinguishing_id(struct X509_req_st* x);
int X509_alias_set1(struct x509_st* x, const unsigned char* name, int len);
int X509_keyid_set1(struct x509_st* x, const unsigned char* id, int len);
unsigned char* X509_alias_get0(struct x509_st* x, int* len);
unsigned char* X509_keyid_get0(struct x509_st* x, int* len);
struct x509_revoked_st* X509_REVOKED_new();
void X509_REVOKED_free(struct x509_revoked_st* a);
struct x509_revoked_st* d2i_X509_REVOKED(struct x509_revoked_st** a, const unsigned char** in, long len);
int i2d_X509_REVOKED(const struct x509_revoked_st* a, unsigned char** out);
const struct ASN1_ITEM_st* X509_REVOKED_it();
struct X509_crl_info_st* X509_CRL_INFO_new();
void X509_CRL_INFO_free(struct X509_crl_info_st* a);
struct X509_crl_info_st* d2i_X509_CRL_INFO(struct X509_crl_info_st** a, const unsigned char** in, long len);
int i2d_X509_CRL_INFO(const struct X509_crl_info_st* a, unsigned char** out);
const struct ASN1_ITEM_st* X509_CRL_INFO_it();
struct X509_crl_st* X509_CRL_new();
void X509_CRL_free(struct X509_crl_st* a);
struct X509_crl_st* d2i_X509_CRL(struct X509_crl_st** a, const unsigned char** in, long len);
int i2d_X509_CRL(const struct X509_crl_st* a, unsigned char** out);
const struct ASN1_ITEM_st* X509_CRL_it();
struct X509_crl_st* X509_CRL_new_ex(struct ossl_lib_ctx_st* libctx, const char* propq);
int X509_CRL_add0_revoked(struct X509_crl_st* crl, struct x509_revoked_st* rev);
int X509_CRL_get0_by_serial(struct X509_crl_st* crl, struct x509_revoked_st** ret, const struct asn1_string_st* serial);
int X509_CRL_get0_by_cert(struct X509_crl_st* crl, struct x509_revoked_st** ret, struct x509_st* x);
struct private_key_st* X509_PKEY_new();
void X509_PKEY_free(struct private_key_st* a);
struct Netscape_spki_st* NETSCAPE_SPKI_new();
void NETSCAPE_SPKI_free(struct Netscape_spki_st* a);
struct Netscape_spki_st* d2i_NETSCAPE_SPKI(struct Netscape_spki_st** a, const unsigned char** in, long len);
int i2d_NETSCAPE_SPKI(const struct Netscape_spki_st* a, unsigned char** out);
const struct ASN1_ITEM_st* NETSCAPE_SPKI_it();
struct Netscape_spkac_st* NETSCAPE_SPKAC_new();
void NETSCAPE_SPKAC_free(struct Netscape_spkac_st* a);
struct Netscape_spkac_st* d2i_NETSCAPE_SPKAC(struct Netscape_spkac_st** a, const unsigned char** in, long len);
int i2d_NETSCAPE_SPKAC(const struct Netscape_spkac_st* a, unsigned char** out);
const struct ASN1_ITEM_st* NETSCAPE_SPKAC_it();
struct Netscape_certificate_sequence* NETSCAPE_CERT_SEQUENCE_new();
void NETSCAPE_CERT_SEQUENCE_free(struct Netscape_certificate_sequence* a);
struct Netscape_certificate_sequence* d2i_NETSCAPE_CERT_SEQUENCE(struct Netscape_certificate_sequence** a, const unsigned char** in, long len);
int i2d_NETSCAPE_CERT_SEQUENCE(const struct Netscape_certificate_sequence* a, unsigned char** out);
const struct ASN1_ITEM_st* NETSCAPE_CERT_SEQUENCE_it();
struct X509_info_st* X509_INFO_new();
void X509_INFO_free(struct X509_info_st* a);
char* X509_NAME_oneline(const struct X509_name_st* a, char* buf, int size);
int ASN1_verify(int (*i2d)(const void*,unsigned char**), struct X509_algor_st* algor1, struct asn1_string_st* signature, char* data, struct evp_pkey_st* pkey);
int ASN1_digest(int (*i2d)(const void*,unsigned char**), const struct evp_md_st* type, char* data, unsigned char* md, unsigned int* len);
int ASN1_sign(int (*i2d)(const void*,unsigned char**), struct X509_algor_st* algor1, struct X509_algor_st* algor2, struct asn1_string_st* signature, char* data, struct evp_pkey_st* pkey, const struct evp_md_st* type);
int ASN1_item_digest(const struct ASN1_ITEM_st* it, const struct evp_md_st* type, void* data, unsigned char* md, unsigned int* len);
int ASN1_item_verify(const struct ASN1_ITEM_st* it, const struct X509_algor_st* alg, const struct asn1_string_st* signature, const void* data, struct evp_pkey_st* pkey);
int ASN1_item_verify_ctx(const struct ASN1_ITEM_st* it, const struct X509_algor_st* alg, const struct asn1_string_st* signature, const void* data, struct evp_md_ctx_st* ctx);
int ASN1_item_sign(const struct ASN1_ITEM_st* it, struct X509_algor_st* algor1, struct X509_algor_st* algor2, struct asn1_string_st* signature, const void* data, struct evp_pkey_st* pkey, const struct evp_md_st* md);
int ASN1_item_sign_ctx(const struct ASN1_ITEM_st* it, struct X509_algor_st* algor1, struct X509_algor_st* algor2, struct asn1_string_st* signature, const void* data, struct evp_md_ctx_st* ctx);
long X509_get_version(const struct x509_st* x);
int X509_set_version(struct x509_st* x, long version);
int X509_set_serialNumber(struct x509_st* x, struct asn1_string_st* serial);
struct asn1_string_st* X509_get_serialNumber(struct x509_st* x);
const struct asn1_string_st* X509_get0_serialNumber(const struct x509_st* x);
int X509_set_issuer_name(struct x509_st* x, const struct X509_name_st* name);
struct X509_name_st* X509_get_issuer_name(const struct x509_st* a);
int X509_set_subject_name(struct x509_st* x, const struct X509_name_st* name);
struct X509_name_st* X509_get_subject_name(const struct x509_st* a);
const struct asn1_string_st* X509_get0_notBefore(const struct x509_st* x);
struct asn1_string_st* X509_getm_notBefore(const struct x509_st* x);
int X509_set1_notBefore(struct x509_st* x, const struct asn1_string_st* tm);
const struct asn1_string_st* X509_get0_notAfter(const struct x509_st* x);
struct asn1_string_st* X509_getm_notAfter(const struct x509_st* x);
int X509_set1_notAfter(struct x509_st* x, const struct asn1_string_st* tm);
int X509_set_pubkey(struct x509_st* x, struct evp_pkey_st* pkey);
int X509_up_ref(struct x509_st* x);
int X509_get_signature_type(const struct x509_st* x);
struct X509_pubkey_st* X509_get_X509_PUBKEY(const struct x509_st* x);
const struct stack_st_X509_EXTENSION* X509_get0_extensions(const struct x509_st* x);
void X509_get0_uids(const struct x509_st* x, const struct asn1_string_st** piuid, const struct asn1_string_st** psuid);
const struct X509_algor_st* X509_get0_tbs_sigalg(const struct x509_st* x);
struct evp_pkey_st* X509_get0_pubkey(const struct x509_st* x);
struct evp_pkey_st* X509_get_pubkey(struct x509_st* x);
struct asn1_string_st* X509_get0_pubkey_bitstr(const struct x509_st* x);
long X509_REQ_get_version(const struct X509_req_st* req);
int X509_REQ_set_version(struct X509_req_st* x, long version);
struct X509_name_st* X509_REQ_get_subject_name(const struct X509_req_st* req);
int X509_REQ_set_subject_name(struct X509_req_st* req, const struct X509_name_st* name);
void X509_REQ_get0_signature(const struct X509_req_st* req, const struct asn1_string_st** psig, const struct X509_algor_st** palg);
void X509_REQ_set0_signature(struct X509_req_st* req, struct asn1_string_st* psig);
int X509_REQ_set1_signature_algo(struct X509_req_st* req, struct X509_algor_st* palg);
int X509_REQ_get_signature_nid(const struct X509_req_st* req);
int i2d_re_X509_REQ_tbs(struct X509_req_st* req, unsigned char** pp);
int X509_REQ_set_pubkey(struct X509_req_st* x, struct evp_pkey_st* pkey);
struct evp_pkey_st* X509_REQ_get_pubkey(struct X509_req_st* req);
struct evp_pkey_st* X509_REQ_get0_pubkey(const struct X509_req_st* req);
struct X509_pubkey_st* X509_REQ_get_X509_PUBKEY(struct X509_req_st* req);
int X509_REQ_extension_nid(int nid);
int* X509_REQ_get_extension_nids();
void X509_REQ_set_extension_nids(int* nids);
struct stack_st_X509_EXTENSION* X509_REQ_get_extensions(struct X509_req_st* req);
int X509_REQ_add_extensions_nid(struct X509_req_st* req, const struct stack_st_X509_EXTENSION* exts, int nid);
int X509_REQ_add_extensions(struct X509_req_st* req, const struct stack_st_X509_EXTENSION* ext);
int X509_REQ_get_attr_count(const struct X509_req_st* req);
int X509_REQ_get_attr_by_NID(const struct X509_req_st* req, int nid, int lastpos);
int X509_REQ_get_attr_by_OBJ(const struct X509_req_st* req, const struct asn1_object_st* obj, int lastpos);
struct x509_attributes_st* X509_REQ_get_attr(const struct X509_req_st* req, int loc);
struct x509_attributes_st* X509_REQ_delete_attr(struct X509_req_st* req, int loc);
int X509_REQ_add1_attr(struct X509_req_st* req, struct x509_attributes_st* attr);
int X509_REQ_add1_attr_by_OBJ(struct X509_req_st* req, const struct asn1_object_st* obj, int type, const unsigned char* bytes, int len);
int X509_REQ_add1_attr_by_NID(struct X509_req_st* req, int nid, int type, const unsigned char* bytes, int len);
int X509_REQ_add1_attr_by_txt(struct X509_req_st* req, const char* attrname, int type, const unsigned char* bytes, int len);
int X509_CRL_set_version(struct X509_crl_st* x, long version);
int X509_CRL_set_issuer_name(struct X509_crl_st* x, const struct X509_name_st* name);
int X509_CRL_set1_lastUpdate(struct X509_crl_st* x, const struct asn1_string_st* tm);
int X509_CRL_set1_nextUpdate(struct X509_crl_st* x, const struct asn1_string_st* tm);
int X509_CRL_sort(struct X509_crl_st* crl);
int X509_CRL_up_ref(struct X509_crl_st* crl);
long X509_CRL_get_version(const struct X509_crl_st* crl);
const struct asn1_string_st* X509_CRL_get0_lastUpdate(const struct X509_crl_st* crl);
const struct asn1_string_st* X509_CRL_get0_nextUpdate(const struct X509_crl_st* crl);
struct asn1_string_st* X509_CRL_get_lastUpdate(struct X509_crl_st* crl);
struct asn1_string_st* X509_CRL_get_nextUpdate(struct X509_crl_st* crl);
struct X509_name_st* X509_CRL_get_issuer(const struct X509_crl_st* crl);
const struct stack_st_X509_EXTENSION* X509_CRL_get0_extensions(const struct X509_crl_st* crl);
struct stack_st_X509_REVOKED* X509_CRL_get_REVOKED(struct X509_crl_st* crl);
void X509_CRL_get0_signature(const struct X509_crl_st* crl, const struct asn1_string_st** psig, const struct X509_algor_st** palg);
int X509_CRL_get_signature_nid(const struct X509_crl_st* crl);
int i2d_re_X509_CRL_tbs(struct X509_crl_st* req, unsigned char** pp);
const struct asn1_string_st* X509_REVOKED_get0_serialNumber(const struct x509_revoked_st* x);
int X509_REVOKED_set_serialNumber(struct x509_revoked_st* x, struct asn1_string_st* serial);
const struct asn1_string_st* X509_REVOKED_get0_revocationDate(const struct x509_revoked_st* x);
int X509_REVOKED_set_revocationDate(struct x509_revoked_st* r, struct asn1_string_st* tm);
const struct stack_st_X509_EXTENSION* X509_REVOKED_get0_extensions(const struct x509_revoked_st* r);
struct X509_crl_st* X509_CRL_diff(struct X509_crl_st* base, struct X509_crl_st* newer, struct evp_pkey_st* skey, const struct evp_md_st* md, unsigned int flags);
int X509_REQ_check_private_key(const struct X509_req_st* req, struct evp_pkey_st* pkey);
int X509_check_private_key(const struct x509_st* cert, const struct evp_pkey_st* pkey);
int X509_chain_check_suiteb(int* perror_depth, struct x509_st* x, struct stack_st_X509* chain, unsigned long  int flags);
int X509_CRL_check_suiteb(struct X509_crl_st* crl, struct evp_pkey_st* pk, unsigned long  int flags);
void OSSL_STACK_OF_X509_free(struct stack_st_X509* certs);
struct stack_st_X509* X509_chain_up_ref(struct stack_st_X509* chain);
int X509_issuer_and_serial_cmp(const struct x509_st* a, const struct x509_st* b);
unsigned long  int X509_issuer_and_serial_hash(struct x509_st* a);
int X509_issuer_name_cmp(const struct x509_st* a, const struct x509_st* b);
unsigned long  int X509_issuer_name_hash(struct x509_st* a);
int X509_subject_name_cmp(const struct x509_st* a, const struct x509_st* b);
unsigned long  int X509_subject_name_hash(struct x509_st* x);
unsigned long  int X509_issuer_name_hash_old(struct x509_st* a);
unsigned long  int X509_subject_name_hash_old(struct x509_st* x);
int X509_add_cert(struct stack_st_X509* sk, struct x509_st* cert, int flags);
int X509_add_certs(struct stack_st_X509* sk, struct stack_st_X509* certs, int flags);
int X509_cmp(const struct x509_st* a, const struct x509_st* b);
int X509_NAME_cmp(const struct X509_name_st* a, const struct X509_name_st* b);
int X509_certificate_type(const struct x509_st* x, const struct evp_pkey_st* pubkey);
unsigned long  int X509_NAME_hash_ex(const struct X509_name_st* x, struct ossl_lib_ctx_st* libctx, const char* propq, int* ok);
unsigned long  int X509_NAME_hash_old(const struct X509_name_st* x);
int X509_CRL_cmp(const struct X509_crl_st* a, const struct X509_crl_st* b);
int X509_CRL_match(const struct X509_crl_st* a, const struct X509_crl_st* b);
int X509_aux_print(struct bio_st* out, struct x509_st* x, int indent);
int X509_print_ex_fp(struct _IO_FILE* bp, struct x509_st* x, unsigned long  int nmflag, unsigned long  int cflag);
int X509_print_fp(struct _IO_FILE* bp, struct x509_st* x);
int X509_CRL_print_fp(struct _IO_FILE* bp, struct X509_crl_st* x);
int X509_REQ_print_fp(struct _IO_FILE* bp, struct X509_req_st* req);
int X509_NAME_print_ex_fp(struct _IO_FILE* fp, const struct X509_name_st* nm, int indent, unsigned long  int flags);
int X509_NAME_print(struct bio_st* bp, const struct X509_name_st* name, int obase);
int X509_NAME_print_ex(struct bio_st* out, const struct X509_name_st* nm, int indent, unsigned long  int flags);
int X509_print_ex(struct bio_st* bp, struct x509_st* x, unsigned long  int nmflag, unsigned long  int cflag);
int X509_print(struct bio_st* bp, struct x509_st* x);
int X509_ocspid_print(struct bio_st* bp, struct x509_st* x);
int X509_CRL_print_ex(struct bio_st* out, struct X509_crl_st* x, unsigned long  int nmflag);
int X509_CRL_print(struct bio_st* bp, struct X509_crl_st* x);
int X509_REQ_print_ex(struct bio_st* bp, struct X509_req_st* x, unsigned long  int nmflag, unsigned long  int cflag);
int X509_REQ_print(struct bio_st* bp, struct X509_req_st* req);
int X509_NAME_entry_count(const struct X509_name_st* name);
int X509_NAME_get_text_by_NID(const struct X509_name_st* name, int nid, char* buf, int len);
int X509_NAME_get_text_by_OBJ(const struct X509_name_st* name, const struct asn1_object_st* obj, char* buf, int len);
int X509_NAME_get_index_by_NID(const struct X509_name_st* name, int nid, int lastpos);
int X509_NAME_get_index_by_OBJ(const struct X509_name_st* name, const struct asn1_object_st* obj, int lastpos);
struct X509_name_entry_st* X509_NAME_get_entry(const struct X509_name_st* name, int loc);
struct X509_name_entry_st* X509_NAME_delete_entry(struct X509_name_st* name, int loc);
int X509_NAME_add_entry(struct X509_name_st* name, const struct X509_name_entry_st* ne, int loc, int set);
int X509_NAME_add_entry_by_OBJ(struct X509_name_st* name, const struct asn1_object_st* obj, int type, const unsigned char* bytes, int len, int loc, int set);
int X509_NAME_add_entry_by_NID(struct X509_name_st* name, int nid, int type, const unsigned char* bytes, int len, int loc, int set);
struct X509_name_entry_st* X509_NAME_ENTRY_create_by_txt(struct X509_name_entry_st** ne, const char* field, int type, const unsigned char* bytes, int len);
struct X509_name_entry_st* X509_NAME_ENTRY_create_by_NID(struct X509_name_entry_st** ne, int nid, int type, const unsigned char* bytes, int len);
int X509_NAME_add_entry_by_txt(struct X509_name_st* name, const char* field, int type, const unsigned char* bytes, int len, int loc, int set);
struct X509_name_entry_st* X509_NAME_ENTRY_create_by_OBJ(struct X509_name_entry_st** ne, const struct asn1_object_st* obj, int type, const unsigned char* bytes, int len);
int X509_NAME_ENTRY_set_object(struct X509_name_entry_st* ne, const struct asn1_object_st* obj);
int X509_NAME_ENTRY_set_data(struct X509_name_entry_st* ne, int type, const unsigned char* bytes, int len);
struct asn1_object_st* X509_NAME_ENTRY_get_object(const struct X509_name_entry_st* ne);
struct asn1_string_st* X509_NAME_ENTRY_get_data(const struct X509_name_entry_st* ne);
int X509_NAME_ENTRY_set(const struct X509_name_entry_st* ne);
int X509_NAME_get0_der(const struct X509_name_st* nm, const unsigned char** pder, unsigned long  int* pderlen);
int X509v3_get_ext_count(const struct stack_st_X509_EXTENSION* x);
int X509v3_get_ext_by_NID(const struct stack_st_X509_EXTENSION* x, int nid, int lastpos);
int X509v3_get_ext_by_OBJ(const struct stack_st_X509_EXTENSION* x, const struct asn1_object_st* obj, int lastpos);
int X509v3_get_ext_by_critical(const struct stack_st_X509_EXTENSION* x, int crit, int lastpos);
struct X509_extension_st* X509v3_get_ext(const struct stack_st_X509_EXTENSION* x, int loc);
struct X509_extension_st* X509v3_delete_ext(struct stack_st_X509_EXTENSION* x, int loc);
struct stack_st_X509_EXTENSION* X509v3_add_ext(struct stack_st_X509_EXTENSION** x, struct X509_extension_st* ex, int loc);
int X509_get_ext_count(const struct x509_st* x);
int X509_get_ext_by_NID(const struct x509_st* x, int nid, int lastpos);
int X509_get_ext_by_OBJ(const struct x509_st* x, const struct asn1_object_st* obj, int lastpos);
int X509_get_ext_by_critical(const struct x509_st* x, int crit, int lastpos);
struct X509_extension_st* X509_get_ext(const struct x509_st* x, int loc);
struct X509_extension_st* X509_delete_ext(struct x509_st* x, int loc);
int X509_add_ext(struct x509_st* x, struct X509_extension_st* ex, int loc);
void* X509_get_ext_d2i(const struct x509_st* x, int nid, int* crit, int* idx);
int X509_add1_ext_i2d(struct x509_st* x, int nid, void* value, int crit, unsigned long  int flags);
int X509_CRL_get_ext_count(const struct X509_crl_st* x);
int X509_CRL_get_ext_by_NID(const struct X509_crl_st* x, int nid, int lastpos);
int X509_CRL_get_ext_by_OBJ(const struct X509_crl_st* x, const struct asn1_object_st* obj, int lastpos);
int X509_CRL_get_ext_by_critical(const struct X509_crl_st* x, int crit, int lastpos);
struct X509_extension_st* X509_CRL_get_ext(const struct X509_crl_st* x, int loc);
struct X509_extension_st* X509_CRL_delete_ext(struct X509_crl_st* x, int loc);
int X509_CRL_add_ext(struct X509_crl_st* x, struct X509_extension_st* ex, int loc);
void* X509_CRL_get_ext_d2i(const struct X509_crl_st* x, int nid, int* crit, int* idx);
int X509_CRL_add1_ext_i2d(struct X509_crl_st* x, int nid, void* value, int crit, unsigned long  int flags);
int X509_REVOKED_get_ext_count(const struct x509_revoked_st* x);
int X509_REVOKED_get_ext_by_NID(const struct x509_revoked_st* x, int nid, int lastpos);
int X509_REVOKED_get_ext_by_OBJ(const struct x509_revoked_st* x, const struct asn1_object_st* obj, int lastpos);
int X509_REVOKED_get_ext_by_critical(const struct x509_revoked_st* x, int crit, int lastpos);
struct X509_extension_st* X509_REVOKED_get_ext(const struct x509_revoked_st* x, int loc);
struct X509_extension_st* X509_REVOKED_delete_ext(struct x509_revoked_st* x, int loc);
int X509_REVOKED_add_ext(struct x509_revoked_st* x, struct X509_extension_st* ex, int loc);
void* X509_REVOKED_get_ext_d2i(const struct x509_revoked_st* x, int nid, int* crit, int* idx);
int X509_REVOKED_add1_ext_i2d(struct x509_revoked_st* x, int nid, void* value, int crit, unsigned long  int flags);
struct X509_extension_st* X509_EXTENSION_create_by_NID(struct X509_extension_st** ex, int nid, int crit, struct asn1_string_st* data);
struct X509_extension_st* X509_EXTENSION_create_by_OBJ(struct X509_extension_st** ex, const struct asn1_object_st* obj, int crit, struct asn1_string_st* data);
int X509_EXTENSION_set_object(struct X509_extension_st* ex, const struct asn1_object_st* obj);
int X509_EXTENSION_set_critical(struct X509_extension_st* ex, int crit);
int X509_EXTENSION_set_data(struct X509_extension_st* ex, struct asn1_string_st* data);
struct asn1_object_st* X509_EXTENSION_get_object(struct X509_extension_st* ex);
struct asn1_string_st* X509_EXTENSION_get_data(struct X509_extension_st* ne);
int X509_EXTENSION_get_critical(const struct X509_extension_st* ex);
int X509at_get_attr_count(const struct stack_st_X509_ATTRIBUTE* x);
int X509at_get_attr_by_NID(const struct stack_st_X509_ATTRIBUTE* x, int nid, int lastpos);
int X509at_get_attr_by_OBJ(const struct stack_st_X509_ATTRIBUTE* sk, const struct asn1_object_st* obj, int lastpos);
struct x509_attributes_st* X509at_get_attr(const struct stack_st_X509_ATTRIBUTE* x, int loc);
struct x509_attributes_st* X509at_delete_attr(struct stack_st_X509_ATTRIBUTE* x, int loc);
struct stack_st_X509_ATTRIBUTE* X509at_add1_attr(struct stack_st_X509_ATTRIBUTE** x, struct x509_attributes_st* attr);
struct stack_st_X509_ATTRIBUTE* X509at_add1_attr_by_OBJ(struct stack_st_X509_ATTRIBUTE** x, const struct asn1_object_st* obj, int type, const unsigned char* bytes, int len);
struct stack_st_X509_ATTRIBUTE* X509at_add1_attr_by_NID(struct stack_st_X509_ATTRIBUTE** x, int nid, int type, const unsigned char* bytes, int len);
struct stack_st_X509_ATTRIBUTE* X509at_add1_attr_by_txt(struct stack_st_X509_ATTRIBUTE** x, const char* attrname, int type, const unsigned char* bytes, int len);
void* X509at_get0_data_by_OBJ(const struct stack_st_X509_ATTRIBUTE* x, const struct asn1_object_st* obj, int lastpos, int type);
struct x509_attributes_st* X509_ATTRIBUTE_create_by_NID(struct x509_attributes_st** attr, int nid, int atrtype, const void* data, int len);
struct x509_attributes_st* X509_ATTRIBUTE_create_by_OBJ(struct x509_attributes_st** attr, const struct asn1_object_st* obj, int atrtype, const void* data, int len);
struct x509_attributes_st* X509_ATTRIBUTE_create_by_txt(struct x509_attributes_st** attr, const char* atrname, int type, const unsigned char* bytes, int len);
int X509_ATTRIBUTE_set1_object(struct x509_attributes_st* attr, const struct asn1_object_st* obj);
int X509_ATTRIBUTE_set1_data(struct x509_attributes_st* attr, int attrtype, const void* data, int len);
void* X509_ATTRIBUTE_get0_data(struct x509_attributes_st* attr, int idx, int atrtype, void* data);
int X509_ATTRIBUTE_count(const struct x509_attributes_st* attr);
struct asn1_object_st* X509_ATTRIBUTE_get0_object(struct x509_attributes_st* attr);
struct asn1_type_st* X509_ATTRIBUTE_get0_type(struct x509_attributes_st* attr, int idx);
int EVP_PKEY_get_attr_count(const struct evp_pkey_st* key);
int EVP_PKEY_get_attr_by_NID(const struct evp_pkey_st* key, int nid, int lastpos);
int EVP_PKEY_get_attr_by_OBJ(const struct evp_pkey_st* key, const struct asn1_object_st* obj, int lastpos);
struct x509_attributes_st* EVP_PKEY_get_attr(const struct evp_pkey_st* key, int loc);
struct x509_attributes_st* EVP_PKEY_delete_attr(struct evp_pkey_st* key, int loc);
int EVP_PKEY_add1_attr(struct evp_pkey_st* key, struct x509_attributes_st* attr);
int EVP_PKEY_add1_attr_by_OBJ(struct evp_pkey_st* key, const struct asn1_object_st* obj, int type, const unsigned char* bytes, int len);
int EVP_PKEY_add1_attr_by_NID(struct evp_pkey_st* key, int nid, int type, const unsigned char* bytes, int len);
int EVP_PKEY_add1_attr_by_txt(struct evp_pkey_st* key, const char* attrname, int type, const unsigned char* bytes, int len);
struct x509_st* X509_find_by_issuer_and_serial(struct stack_st_X509* sk, const struct X509_name_st* name, const struct asn1_string_st* serial);
struct x509_st* X509_find_by_subject(struct stack_st_X509* sk, const struct X509_name_st* name);
struct PBEPARAM_st* PBEPARAM_new();
void PBEPARAM_free(struct PBEPARAM_st* a);
struct PBEPARAM_st* d2i_PBEPARAM(struct PBEPARAM_st** a, const unsigned char** in, long len);
int i2d_PBEPARAM(const struct PBEPARAM_st* a, unsigned char** out);
const struct ASN1_ITEM_st* PBEPARAM_it();
struct PBE2PARAM_st* PBE2PARAM_new();
void PBE2PARAM_free(struct PBE2PARAM_st* a);
struct PBE2PARAM_st* d2i_PBE2PARAM(struct PBE2PARAM_st** a, const unsigned char** in, long len);
int i2d_PBE2PARAM(const struct PBE2PARAM_st* a, unsigned char** out);
const struct ASN1_ITEM_st* PBE2PARAM_it();
struct PBKDF2PARAM_st* PBKDF2PARAM_new();
void PBKDF2PARAM_free(struct PBKDF2PARAM_st* a);
struct PBKDF2PARAM_st* d2i_PBKDF2PARAM(struct PBKDF2PARAM_st** a, const unsigned char** in, long len);
int i2d_PBKDF2PARAM(const struct PBKDF2PARAM_st* a, unsigned char** out);
const struct ASN1_ITEM_st* PBKDF2PARAM_it();
struct SCRYPT_PARAMS_st* SCRYPT_PARAMS_new();
void SCRYPT_PARAMS_free(struct SCRYPT_PARAMS_st* a);
struct SCRYPT_PARAMS_st* d2i_SCRYPT_PARAMS(struct SCRYPT_PARAMS_st** a, const unsigned char** in, long len);
int i2d_SCRYPT_PARAMS(const struct SCRYPT_PARAMS_st* a, unsigned char** out);
const struct ASN1_ITEM_st* SCRYPT_PARAMS_it();
int PKCS5_pbe_set0_algor(struct X509_algor_st* algor, int alg, int iter, const unsigned char* salt, int saltlen);
int PKCS5_pbe_set0_algor_ex(struct X509_algor_st* algor, int alg, int iter, const unsigned char* salt, int saltlen, struct ossl_lib_ctx_st* libctx);
struct X509_algor_st* PKCS5_pbe_set(int alg, int iter, const unsigned char* salt, int saltlen);
struct X509_algor_st* PKCS5_pbe_set_ex(int alg, int iter, const unsigned char* salt, int saltlen, struct ossl_lib_ctx_st* libctx);
struct X509_algor_st* PKCS5_pbe2_set(const struct evp_cipher_st* cipher, int iter, unsigned char* salt, int saltlen);
struct X509_algor_st* PKCS5_pbe2_set_iv(const struct evp_cipher_st* cipher, int iter, unsigned char* salt, int saltlen, unsigned char* aiv, int prf_nid);
struct X509_algor_st* PKCS5_pbe2_set_iv_ex(const struct evp_cipher_st* cipher, int iter, unsigned char* salt, int saltlen, unsigned char* aiv, int prf_nid, struct ossl_lib_ctx_st* libctx);
struct X509_algor_st* PKCS5_pbe2_set_scrypt(const struct evp_cipher_st* cipher, const unsigned char* salt, int saltlen, unsigned char* aiv, unsigned long  int N, unsigned long  int r, unsigned long  int p);
struct X509_algor_st* PKCS5_pbkdf2_set(int iter, unsigned char* salt, int saltlen, int prf_nid, int keylen);
struct X509_algor_st* PKCS5_pbkdf2_set_ex(int iter, unsigned char* salt, int saltlen, int prf_nid, int keylen, struct ossl_lib_ctx_st* libctx);
struct pkcs8_priv_key_info_st* PKCS8_PRIV_KEY_INFO_new();
void PKCS8_PRIV_KEY_INFO_free(struct pkcs8_priv_key_info_st* a);
struct pkcs8_priv_key_info_st* d2i_PKCS8_PRIV_KEY_INFO(struct pkcs8_priv_key_info_st** a, const unsigned char** in, long len);
int i2d_PKCS8_PRIV_KEY_INFO(const struct pkcs8_priv_key_info_st* a, unsigned char** out);
const struct ASN1_ITEM_st* PKCS8_PRIV_KEY_INFO_it();
struct evp_pkey_st* EVP_PKCS82PKEY(const struct pkcs8_priv_key_info_st* p8);
struct evp_pkey_st* EVP_PKCS82PKEY_ex(const struct pkcs8_priv_key_info_st* p8, struct ossl_lib_ctx_st* libctx, const char* propq);
struct pkcs8_priv_key_info_st* EVP_PKEY2PKCS8(const struct evp_pkey_st* pkey);
int PKCS8_pkey_set0(struct pkcs8_priv_key_info_st* priv, struct asn1_object_st* aobj, int version, int ptype, void* pval, unsigned char* penc, int penclen);
int PKCS8_pkey_get0(const struct asn1_object_st** ppkalg, const unsigned char** pk, int* ppklen, const struct X509_algor_st** pa, const struct pkcs8_priv_key_info_st* p8);
const struct stack_st_X509_ATTRIBUTE* PKCS8_pkey_get0_attrs(const struct pkcs8_priv_key_info_st* p8);
int PKCS8_pkey_add1_attr(struct pkcs8_priv_key_info_st* p8, struct x509_attributes_st* attr);
int PKCS8_pkey_add1_attr_by_NID(struct pkcs8_priv_key_info_st* p8, int nid, int type, const unsigned char* bytes, int len);
int PKCS8_pkey_add1_attr_by_OBJ(struct pkcs8_priv_key_info_st* p8, const struct asn1_object_st* obj, int type, const unsigned char* bytes, int len);
void X509_PUBKEY_set0_public_key(struct X509_pubkey_st* pub, unsigned char* penc, int penclen);
int X509_PUBKEY_set0_param(struct X509_pubkey_st* pub, struct asn1_object_st* aobj, int ptype, void* pval, unsigned char* penc, int penclen);
int X509_PUBKEY_get0_param(struct asn1_object_st** ppkalg, const unsigned char** pk, int* ppklen, struct X509_algor_st** pa, const struct X509_pubkey_st* pub);
int X509_PUBKEY_eq(const struct X509_pubkey_st* a, const struct X509_pubkey_st* b);
int PEM_get_EVP_CIPHER_INFO(char* header, struct evp_cipher_info_st* cipher);
int PEM_do_header(struct evp_cipher_info_st* cipher, unsigned char* data, long* len, int (*callback)(char*,int,int,void*), void* u);
int PEM_read_bio(struct bio_st* bp, char** name, char** header, unsigned char** data, long* len);
int PEM_read_bio_ex(struct bio_st* bp, char** name, char** header, unsigned char** data, long* len, unsigned int flags);
int PEM_bytes_read_bio_secmem(unsigned char** pdata, long* plen, char** pnm, const char* name, struct bio_st* bp, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio(struct bio_st* bp, const char* name, const char* hdr, const unsigned char* data, long len);
int PEM_bytes_read_bio(unsigned char** pdata, long* plen, char** pnm, const char* name, struct bio_st* bp, int (*cb)(char*,int,int,void*), void* u);
void* PEM_ASN1_read_bio(void* (*d2i)(void**,const unsigned char**,long), const char* name, struct bio_st* bp, void** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_ASN1_write_bio(int (*i2d)(const void*,unsigned char**), const char* name, struct bio_st* bp, const void* x, const struct evp_cipher_st* enc, const unsigned char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u);
struct stack_st_X509_INFO* PEM_X509_INFO_read_bio(struct bio_st* bp, struct stack_st_X509_INFO* sk, int (*cb)(char*,int,int,void*), void* u);
struct stack_st_X509_INFO* PEM_X509_INFO_read_bio_ex(struct bio_st* bp, struct stack_st_X509_INFO* sk, int (*cb)(char*,int,int,void*), void* u, struct ossl_lib_ctx_st* libctx, const char* propq);
int PEM_X509_INFO_write_bio(struct bio_st* bp, const struct X509_info_st* xi, struct evp_cipher_st* enc, const unsigned char* kstr, int klen, int (*cd)(char*,int,int,void*), void* u);
int PEM_read(struct _IO_FILE* fp, char** name, char** header, unsigned char** data, long* len);
int PEM_write(struct _IO_FILE* fp, const char* name, const char* hdr, const unsigned char* data, long len);
void* PEM_ASN1_read(void* (*d2i)(void**,const unsigned char**,long), const char* name, struct _IO_FILE* fp, void** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_ASN1_write(int (*i2d)(const void*,unsigned char**), const char* name, struct _IO_FILE* fp, const void* x, const struct evp_cipher_st* enc, const unsigned char* kstr, int klen, int (*callback)(char*,int,int,void*), void* u);
struct stack_st_X509_INFO* PEM_X509_INFO_read(struct _IO_FILE* fp, struct stack_st_X509_INFO* sk, int (*cb)(char*,int,int,void*), void* u);
struct stack_st_X509_INFO* PEM_X509_INFO_read_ex(struct _IO_FILE* fp, struct stack_st_X509_INFO* sk, int (*cb)(char*,int,int,void*), void* u, struct ossl_lib_ctx_st* libctx, const char* propq);
int PEM_SignInit(struct evp_md_ctx_st* ctx, struct evp_md_st* type);
int PEM_SignUpdate(struct evp_md_ctx_st* ctx, const unsigned char* d, unsigned int cnt);
int PEM_SignFinal(struct evp_md_ctx_st* ctx, unsigned char* sigret, unsigned int* siglen, struct evp_pkey_st* pkey);
int PEM_def_callback(char* buf, int num, int rwflag, void* userdata);
void PEM_proc_type(char* buf, int type);
void PEM_dek_info(char* buf, const char* type, int len, const char* str);
struct x509_st* PEM_read_bio_X509(struct bio_st* out, struct x509_st** x, int (*cb)(char*,int,int,void*), void* u);
struct x509_st* PEM_read_X509(struct _IO_FILE* out, struct x509_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_X509(struct bio_st* out, const struct x509_st* x);
int PEM_write_X509(struct _IO_FILE* out, const struct x509_st* x);
struct x509_st* PEM_read_bio_X509_AUX(struct bio_st* out, struct x509_st** x, int (*cb)(char*,int,int,void*), void* u);
struct x509_st* PEM_read_X509_AUX(struct _IO_FILE* out, struct x509_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_X509_AUX(struct bio_st* out, const struct x509_st* x);
int PEM_write_X509_AUX(struct _IO_FILE* out, const struct x509_st* x);
struct X509_req_st* PEM_read_bio_X509_REQ(struct bio_st* out, struct X509_req_st** x, int (*cb)(char*,int,int,void*), void* u);
struct X509_req_st* PEM_read_X509_REQ(struct _IO_FILE* out, struct X509_req_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_X509_REQ(struct bio_st* out, const struct X509_req_st* x);
int PEM_write_X509_REQ(struct _IO_FILE* out, const struct X509_req_st* x);
int PEM_write_bio_X509_REQ_NEW(struct bio_st* out, const struct X509_req_st* x);
int PEM_write_X509_REQ_NEW(struct _IO_FILE* out, const struct X509_req_st* x);
struct X509_crl_st* PEM_read_bio_X509_CRL(struct bio_st* out, struct X509_crl_st** x, int (*cb)(char*,int,int,void*), void* u);
struct X509_crl_st* PEM_read_X509_CRL(struct _IO_FILE* out, struct X509_crl_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_X509_CRL(struct bio_st* out, const struct X509_crl_st* x);
int PEM_write_X509_CRL(struct _IO_FILE* out, const struct X509_crl_st* x);
struct X509_pubkey_st* PEM_read_bio_X509_PUBKEY(struct bio_st* out, struct X509_pubkey_st** x, int (*cb)(char*,int,int,void*), void* u);
struct X509_pubkey_st* PEM_read_X509_PUBKEY(struct _IO_FILE* out, struct X509_pubkey_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_X509_PUBKEY(struct bio_st* out, const struct X509_pubkey_st* x);
int PEM_write_X509_PUBKEY(struct _IO_FILE* out, const struct X509_pubkey_st* x);
struct pkcs7_st* PEM_read_bio_PKCS7(struct bio_st* out, struct pkcs7_st** x, int (*cb)(char*,int,int,void*), void* u);
struct pkcs7_st* PEM_read_PKCS7(struct _IO_FILE* out, struct pkcs7_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_PKCS7(struct bio_st* out, const struct pkcs7_st* x);
int PEM_write_PKCS7(struct _IO_FILE* out, const struct pkcs7_st* x);
struct Netscape_certificate_sequence* PEM_read_bio_NETSCAPE_CERT_SEQUENCE(struct bio_st* out, struct Netscape_certificate_sequence** x, int (*cb)(char*,int,int,void*), void* u);
struct Netscape_certificate_sequence* PEM_read_NETSCAPE_CERT_SEQUENCE(struct _IO_FILE* out, struct Netscape_certificate_sequence** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_NETSCAPE_CERT_SEQUENCE(struct bio_st* out, const struct Netscape_certificate_sequence* x);
int PEM_write_NETSCAPE_CERT_SEQUENCE(struct _IO_FILE* out, const struct Netscape_certificate_sequence* x);
struct X509_sig_st* PEM_read_bio_PKCS8(struct bio_st* out, struct X509_sig_st** x, int (*cb)(char*,int,int,void*), void* u);
struct X509_sig_st* PEM_read_PKCS8(struct _IO_FILE* out, struct X509_sig_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_PKCS8(struct bio_st* out, const struct X509_sig_st* x);
int PEM_write_PKCS8(struct _IO_FILE* out, const struct X509_sig_st* x);
struct pkcs8_priv_key_info_st* PEM_read_bio_PKCS8_PRIV_KEY_INFO(struct bio_st* out, struct pkcs8_priv_key_info_st** x, int (*cb)(char*,int,int,void*), void* u);
struct pkcs8_priv_key_info_st* PEM_read_PKCS8_PRIV_KEY_INFO(struct _IO_FILE* out, struct pkcs8_priv_key_info_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_PKCS8_PRIV_KEY_INFO(struct bio_st* out, const struct pkcs8_priv_key_info_st* x);
int PEM_write_PKCS8_PRIV_KEY_INFO(struct _IO_FILE* out, const struct pkcs8_priv_key_info_st* x);
struct rsa_st* PEM_read_bio_RSAPrivateKey(struct bio_st* out, struct rsa_st** x, int (*cb)(char*,int,int,void*), void* u);
struct rsa_st* PEM_read_RSAPrivateKey(struct _IO_FILE* out, struct rsa_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_RSAPrivateKey(struct bio_st* out, const struct rsa_st* x, const struct evp_cipher_st* enc, const unsigned char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_RSAPrivateKey(struct _IO_FILE* out, const struct rsa_st* x, const struct evp_cipher_st* enc, const unsigned char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u);
struct rsa_st* PEM_read_bio_RSAPublicKey(struct bio_st* out, struct rsa_st** x, int (*cb)(char*,int,int,void*), void* u);
struct rsa_st* PEM_read_RSAPublicKey(struct _IO_FILE* out, struct rsa_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_RSAPublicKey(struct bio_st* out, const struct rsa_st* x);
int PEM_write_RSAPublicKey(struct _IO_FILE* out, const struct rsa_st* x);
struct rsa_st* PEM_read_bio_RSA_PUBKEY(struct bio_st* out, struct rsa_st** x, int (*cb)(char*,int,int,void*), void* u);
struct rsa_st* PEM_read_RSA_PUBKEY(struct _IO_FILE* out, struct rsa_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_RSA_PUBKEY(struct bio_st* out, const struct rsa_st* x);
int PEM_write_RSA_PUBKEY(struct _IO_FILE* out, const struct rsa_st* x);
struct dsa_st* PEM_read_bio_DSAPrivateKey(struct bio_st* out, struct dsa_st** x, int (*cb)(char*,int,int,void*), void* u);
struct dsa_st* PEM_read_DSAPrivateKey(struct _IO_FILE* out, struct dsa_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_DSAPrivateKey(struct bio_st* out, const struct dsa_st* x, const struct evp_cipher_st* enc, const unsigned char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_DSAPrivateKey(struct _IO_FILE* out, const struct dsa_st* x, const struct evp_cipher_st* enc, const unsigned char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u);
struct dsa_st* PEM_read_bio_DSA_PUBKEY(struct bio_st* out, struct dsa_st** x, int (*cb)(char*,int,int,void*), void* u);
struct dsa_st* PEM_read_DSA_PUBKEY(struct _IO_FILE* out, struct dsa_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_DSA_PUBKEY(struct bio_st* out, const struct dsa_st* x);
int PEM_write_DSA_PUBKEY(struct _IO_FILE* out, const struct dsa_st* x);
struct dsa_st* PEM_read_bio_DSAparams(struct bio_st* out, struct dsa_st** x, int (*cb)(char*,int,int,void*), void* u);
struct dsa_st* PEM_read_DSAparams(struct _IO_FILE* out, struct dsa_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_DSAparams(struct bio_st* out, const struct dsa_st* x);
int PEM_write_DSAparams(struct _IO_FILE* out, const struct dsa_st* x);
struct ec_group_st* PEM_read_bio_ECPKParameters(struct bio_st* out, struct ec_group_st** x, int (*cb)(char*,int,int,void*), void* u);
struct ec_group_st* PEM_read_ECPKParameters(struct _IO_FILE* out, struct ec_group_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_ECPKParameters(struct bio_st* out, const struct ec_group_st* x);
int PEM_write_ECPKParameters(struct _IO_FILE* out, const struct ec_group_st* x);
struct ec_key_st* PEM_read_bio_ECPrivateKey(struct bio_st* out, struct ec_key_st** x, int (*cb)(char*,int,int,void*), void* u);
struct ec_key_st* PEM_read_ECPrivateKey(struct _IO_FILE* out, struct ec_key_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_ECPrivateKey(struct bio_st* out, const struct ec_key_st* x, const struct evp_cipher_st* enc, const unsigned char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_ECPrivateKey(struct _IO_FILE* out, const struct ec_key_st* x, const struct evp_cipher_st* enc, const unsigned char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u);
struct ec_key_st* PEM_read_bio_EC_PUBKEY(struct bio_st* out, struct ec_key_st** x, int (*cb)(char*,int,int,void*), void* u);
struct ec_key_st* PEM_read_EC_PUBKEY(struct _IO_FILE* out, struct ec_key_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_EC_PUBKEY(struct bio_st* out, const struct ec_key_st* x);
int PEM_write_EC_PUBKEY(struct _IO_FILE* out, const struct ec_key_st* x);
struct dh_st* PEM_read_bio_DHparams(struct bio_st* out, struct dh_st** x, int (*cb)(char*,int,int,void*), void* u);
struct dh_st* PEM_read_DHparams(struct _IO_FILE* out, struct dh_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_DHparams(struct bio_st* out, const struct dh_st* x);
int PEM_write_DHparams(struct _IO_FILE* out, const struct dh_st* x);
int PEM_write_bio_DHxparams(struct bio_st* out, const struct dh_st* x);
int PEM_write_DHxparams(struct _IO_FILE* out, const struct dh_st* x);
struct evp_pkey_st* PEM_read_bio_PrivateKey(struct bio_st* out, struct evp_pkey_st** x, int (*cb)(char*,int,int,void*), void* u);
struct evp_pkey_st* PEM_read_bio_PrivateKey_ex(struct bio_st* out, struct evp_pkey_st** x, int (*cb)(char*,int,int,void*), void* u, struct ossl_lib_ctx_st* libctx, const char* propq);
struct evp_pkey_st* PEM_read_PrivateKey(struct _IO_FILE* out, struct evp_pkey_st** x, int (*cb)(char*,int,int,void*), void* u);
struct evp_pkey_st* PEM_read_PrivateKey_ex(struct _IO_FILE* out, struct evp_pkey_st** x, int (*cb)(char*,int,int,void*), void* u, struct ossl_lib_ctx_st* libctx, const char* propq);
int PEM_write_bio_PrivateKey(struct bio_st* out, const struct evp_pkey_st* x, const struct evp_cipher_st* enc, const unsigned char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_PrivateKey_ex(struct bio_st* out, const struct evp_pkey_st* x, const struct evp_cipher_st* enc, const unsigned char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u, struct ossl_lib_ctx_st* libctx, const char* propq);
int PEM_write_PrivateKey(struct _IO_FILE* out, const struct evp_pkey_st* x, const struct evp_cipher_st* enc, const unsigned char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_PrivateKey_ex(struct _IO_FILE* out, const struct evp_pkey_st* x, const struct evp_cipher_st* enc, const unsigned char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u, struct ossl_lib_ctx_st* libctx, const char* propq);
struct evp_pkey_st* PEM_read_bio_PUBKEY(struct bio_st* out, struct evp_pkey_st** x, int (*cb)(char*,int,int,void*), void* u);
struct evp_pkey_st* PEM_read_bio_PUBKEY_ex(struct bio_st* out, struct evp_pkey_st** x, int (*cb)(char*,int,int,void*), void* u, struct ossl_lib_ctx_st* libctx, const char* propq);
struct evp_pkey_st* PEM_read_PUBKEY(struct _IO_FILE* out, struct evp_pkey_st** x, int (*cb)(char*,int,int,void*), void* u);
struct evp_pkey_st* PEM_read_PUBKEY_ex(struct _IO_FILE* out, struct evp_pkey_st** x, int (*cb)(char*,int,int,void*), void* u, struct ossl_lib_ctx_st* libctx, const char* propq);
int PEM_write_bio_PUBKEY(struct bio_st* out, const struct evp_pkey_st* x);
int PEM_write_bio_PUBKEY_ex(struct bio_st* out, const struct evp_pkey_st* x, struct ossl_lib_ctx_st* libctx, const char* propq);
int PEM_write_PUBKEY(struct _IO_FILE* out, const struct evp_pkey_st* x);
int PEM_write_PUBKEY_ex(struct _IO_FILE* out, const struct evp_pkey_st* x, struct ossl_lib_ctx_st* libctx, const char* propq);
int PEM_write_bio_PrivateKey_traditional(struct bio_st* bp, const struct evp_pkey_st* x, const struct evp_cipher_st* enc, const unsigned char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_PKCS8PrivateKey_nid(struct bio_st* bp, const struct evp_pkey_st* x, int nid, const char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_PKCS8PrivateKey(struct bio_st* anonymous_var_nameX1704, const struct evp_pkey_st* anonymous_var_nameX1705, const struct evp_cipher_st* anonymous_var_nameX1706, const char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u);
int i2d_PKCS8PrivateKey_bio(struct bio_st* bp, const struct evp_pkey_st* x, const struct evp_cipher_st* enc, const char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u);
int i2d_PKCS8PrivateKey_nid_bio(struct bio_st* bp, const struct evp_pkey_st* x, int nid, const char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u);
struct evp_pkey_st* d2i_PKCS8PrivateKey_bio(struct bio_st* bp, struct evp_pkey_st** x, int (*cb)(char*,int,int,void*), void* u);
int i2d_PKCS8PrivateKey_fp(struct _IO_FILE* fp, const struct evp_pkey_st* x, const struct evp_cipher_st* enc, const char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u);
int i2d_PKCS8PrivateKey_nid_fp(struct _IO_FILE* fp, const struct evp_pkey_st* x, int nid, const char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_PKCS8PrivateKey_nid(struct _IO_FILE* fp, const struct evp_pkey_st* x, int nid, const char* kstr, int klen, int (*cb)(char*,int,int,void*), void* u);
struct evp_pkey_st* d2i_PKCS8PrivateKey_fp(struct _IO_FILE* fp, struct evp_pkey_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_PKCS8PrivateKey(struct _IO_FILE* fp, const struct evp_pkey_st* x, const struct evp_cipher_st* enc, const char* kstr, int klen, int (*cd)(char*,int,int,void*), void* u);
struct evp_pkey_st* PEM_read_bio_Parameters_ex(struct bio_st* bp, struct evp_pkey_st** x, struct ossl_lib_ctx_st* libctx, const char* propq);
struct evp_pkey_st* PEM_read_bio_Parameters(struct bio_st* bp, struct evp_pkey_st** x);
int PEM_write_bio_Parameters(struct bio_st* bp, const struct evp_pkey_st* x);
struct evp_pkey_st* b2i_PrivateKey(const unsigned char** in, long length);
struct evp_pkey_st* b2i_PublicKey(const unsigned char** in, long length);
struct evp_pkey_st* b2i_PrivateKey_bio(struct bio_st* in);
struct evp_pkey_st* b2i_PublicKey_bio(struct bio_st* in);
int i2b_PrivateKey_bio(struct bio_st* out, const struct evp_pkey_st* pk);
int i2b_PublicKey_bio(struct bio_st* out, const struct evp_pkey_st* pk);
struct evp_pkey_st* b2i_PVK_bio(struct bio_st* in, int (*cb)(char*,int,int,void*), void* u);
struct evp_pkey_st* b2i_PVK_bio_ex(struct bio_st* in, int (*cb)(char*,int,int,void*), void* u, struct ossl_lib_ctx_st* libctx, const char* propq);
int i2b_PVK_bio(struct bio_st* out, const struct evp_pkey_st* pk, int enclevel, int (*cb)(char*,int,int,void*), void* u);
int i2b_PVK_bio_ex(struct bio_st* out, const struct evp_pkey_st* pk, int enclevel, int (*cb)(char*,int,int,void*), void* u, struct ossl_lib_ctx_st* libctx, const char* propq);
unsigned long  int HMAC_size(const struct hmac_ctx_st* e);
struct hmac_ctx_st* HMAC_CTX_new();
int HMAC_CTX_reset(struct hmac_ctx_st* ctx);
void HMAC_CTX_free(struct hmac_ctx_st* ctx);
int HMAC_Init(struct hmac_ctx_st* ctx, const void* key, int len, const struct evp_md_st* md);
int HMAC_Init_ex(struct hmac_ctx_st* ctx, const void* key, int len, const struct evp_md_st* md, struct engine_st* impl);
int HMAC_Update(struct hmac_ctx_st* ctx, const unsigned char* data, unsigned long  int len);
int HMAC_Final(struct hmac_ctx_st* ctx, unsigned char* md, unsigned int* len);
int HMAC_CTX_copy(struct hmac_ctx_st* dctx, struct hmac_ctx_st* sctx);
void HMAC_CTX_set_flags(struct hmac_ctx_st* ctx, unsigned long  int flags);
const struct evp_md_st* HMAC_CTX_get_md(const struct hmac_ctx_st* ctx);
unsigned char* HMAC(const struct evp_md_st* evp_md, const void* key, int key_len, const unsigned char* data, unsigned long  int data_len, unsigned char* md, unsigned int* md_len);
int ASYNC_init_thread(unsigned long  int max_size, unsigned long  int init_size);
void ASYNC_cleanup_thread();
struct async_wait_ctx_st* ASYNC_WAIT_CTX_new();
void ASYNC_WAIT_CTX_free(struct async_wait_ctx_st* ctx);
int ASYNC_WAIT_CTX_set_wait_fd(struct async_wait_ctx_st* ctx, const void* key, int fd, void* custom_data, void (*cleanup)(struct async_wait_ctx_st*,const void*,int,void*));
int ASYNC_WAIT_CTX_get_fd(struct async_wait_ctx_st* ctx, const void* key, int* fd, void** custom_data);
int ASYNC_WAIT_CTX_get_all_fds(struct async_wait_ctx_st* ctx, int* fd, unsigned long  int* numfds);
int ASYNC_WAIT_CTX_get_callback(struct async_wait_ctx_st* ctx, int (*callback)(void*), void** callback_arg);
int ASYNC_WAIT_CTX_set_callback(struct async_wait_ctx_st* ctx, int (*callback)(void*), void* callback_arg);
int ASYNC_WAIT_CTX_set_status(struct async_wait_ctx_st* ctx, int status);
int ASYNC_WAIT_CTX_get_status(struct async_wait_ctx_st* ctx);
int ASYNC_WAIT_CTX_get_changed_fds(struct async_wait_ctx_st* ctx, int* addfd, unsigned long  int* numaddfds, int* delfd, unsigned long  int* numdelfds);
int ASYNC_WAIT_CTX_clear_fd(struct async_wait_ctx_st* ctx, const void* key);
int ASYNC_is_capable();
int ASYNC_set_mem_functions(void* (*alloc_fn)(unsigned long  int*), void (*free_fn)(void*));
void ASYNC_get_mem_functions(void* (*alloc_fn)(unsigned long  int*), void (*free_fn)(void*));
int ASYNC_start_job(struct async_job_st** job, struct async_wait_ctx_st* ctx, int* ret, int (*func)(void*), void* args, unsigned long  int size);
int ASYNC_pause_job();
struct async_job_st* ASYNC_get_current_job();
struct async_wait_ctx_st* ASYNC_get_wait_ctx(struct async_job_st* job);
void ASYNC_block_pause();
void ASYNC_unblock_pause();
struct ct_policy_eval_ctx_st* CT_POLICY_EVAL_CTX_new_ex(struct ossl_lib_ctx_st* libctx, const char* propq);
struct ct_policy_eval_ctx_st* CT_POLICY_EVAL_CTX_new();
void CT_POLICY_EVAL_CTX_free(struct ct_policy_eval_ctx_st* ctx);
struct x509_st* CT_POLICY_EVAL_CTX_get0_cert(const struct ct_policy_eval_ctx_st* ctx);
int CT_POLICY_EVAL_CTX_set1_cert(struct ct_policy_eval_ctx_st* ctx, struct x509_st* cert);
struct x509_st* CT_POLICY_EVAL_CTX_get0_issuer(const struct ct_policy_eval_ctx_st* ctx);
int CT_POLICY_EVAL_CTX_set1_issuer(struct ct_policy_eval_ctx_st* ctx, struct x509_st* issuer);
const struct ctlog_store_st* CT_POLICY_EVAL_CTX_get0_log_store(const struct ct_policy_eval_ctx_st* ctx);
void CT_POLICY_EVAL_CTX_set_shared_CTLOG_STORE(struct ct_policy_eval_ctx_st* ctx, struct ctlog_store_st* log_store);
unsigned long  int CT_POLICY_EVAL_CTX_get_time(const struct ct_policy_eval_ctx_st* ctx);
void CT_POLICY_EVAL_CTX_set_time(struct ct_policy_eval_ctx_st* ctx, unsigned long  int time_in_ms);
struct sct_st* SCT_new();
struct sct_st* SCT_new_from_base64(unsigned char version, const char* logid_base64, enum anonymous_typeY44 entry_type, unsigned long  int timestamp, const char* extensions_base64, const char* signature_base64);
void SCT_free(struct sct_st* sct);
void SCT_LIST_free(struct stack_st_SCT* a);
enum anonymous_typeY45 SCT_get_version(const struct sct_st* sct);
int SCT_set_version(struct sct_st* sct, enum anonymous_typeY45 version);
enum anonymous_typeY44 SCT_get_log_entry_type(const struct sct_st* sct);
int SCT_set_log_entry_type(struct sct_st* sct, enum anonymous_typeY44 entry_type);
unsigned long  int SCT_get0_log_id(const struct sct_st* sct, unsigned char** log_id);
int SCT_set0_log_id(struct sct_st* sct, unsigned char* log_id, unsigned long  int log_id_len);
int SCT_set1_log_id(struct sct_st* sct, const unsigned char* log_id, unsigned long  int log_id_len);
unsigned long  int SCT_get_timestamp(const struct sct_st* sct);
void SCT_set_timestamp(struct sct_st* sct, unsigned long  int timestamp);
int SCT_get_signature_nid(const struct sct_st* sct);
int SCT_set_signature_nid(struct sct_st* sct, int nid);
unsigned long  int SCT_get0_extensions(const struct sct_st* sct, unsigned char** ext);
void SCT_set0_extensions(struct sct_st* sct, unsigned char* ext, unsigned long  int ext_len);
int SCT_set1_extensions(struct sct_st* sct, const unsigned char* ext, unsigned long  int ext_len);
unsigned long  int SCT_get0_signature(const struct sct_st* sct, unsigned char** sig);
void SCT_set0_signature(struct sct_st* sct, unsigned char* sig, unsigned long  int sig_len);
int SCT_set1_signature(struct sct_st* sct, const unsigned char* sig, unsigned long  int sig_len);
enum anonymous_typeY46 SCT_get_source(const struct sct_st* sct);
int SCT_set_source(struct sct_st* sct, enum anonymous_typeY46 source);
const char* SCT_validation_status_string(const struct sct_st* sct);
void SCT_print(const struct sct_st* sct, struct bio_st* out, int indent, const struct ctlog_store_st* logs);
void SCT_LIST_print(const struct stack_st_SCT* sct_list, struct bio_st* out, int indent, const char* separator, const struct ctlog_store_st* logs);
enum anonymous_typeY47 SCT_get_validation_status(const struct sct_st* sct);
int SCT_validate(struct sct_st* sct, const struct ct_policy_eval_ctx_st* ctx);
int SCT_LIST_validate(const struct stack_st_SCT* scts, struct ct_policy_eval_ctx_st* ctx);
int i2o_SCT_LIST(const struct stack_st_SCT* a, unsigned char** pp);
struct stack_st_SCT* o2i_SCT_LIST(struct stack_st_SCT** a, const unsigned char** pp, unsigned long  int len);
int i2d_SCT_LIST(const struct stack_st_SCT* a, unsigned char** pp);
struct stack_st_SCT* d2i_SCT_LIST(struct stack_st_SCT** a, const unsigned char** pp, long len);
int i2o_SCT(const struct sct_st* sct, unsigned char** out);
struct sct_st* o2i_SCT(struct sct_st** psct, const unsigned char** in, unsigned long  int len);
struct ctlog_st* CTLOG_new_ex(struct evp_pkey_st* public_key, const char* name, struct ossl_lib_ctx_st* libctx, const char* propq);
struct ctlog_st* CTLOG_new(struct evp_pkey_st* public_key, const char* name);
int CTLOG_new_from_base64_ex(struct ctlog_st** ct_log, const char* pkey_base64, const char* name, struct ossl_lib_ctx_st* libctx, const char* propq);
int CTLOG_new_from_base64(struct ctlog_st** ct_log, const char* pkey_base64, const char* name);
void CTLOG_free(struct ctlog_st* log);
const char* CTLOG_get0_name(const struct ctlog_st* log);
void CTLOG_get0_log_id(const struct ctlog_st* log, const unsigned char** log_id, unsigned long  int* log_id_len);
struct evp_pkey_st* CTLOG_get0_public_key(const struct ctlog_st* log);
struct ctlog_store_st* CTLOG_STORE_new_ex(struct ossl_lib_ctx_st* libctx, const char* propq);
struct ctlog_store_st* CTLOG_STORE_new();
void CTLOG_STORE_free(struct ctlog_store_st* store);
const struct ctlog_st* CTLOG_STORE_get0_log_by_id(const struct ctlog_store_st* store, const unsigned char* log_id, unsigned long  int log_id_len);
int CTLOG_STORE_load_file(struct ctlog_store_st* store, const char* file);
int CTLOG_STORE_load_default_file(struct ctlog_store_st* store);
int ERR_load_SSL_strings();
unsigned long  int SSL_CTX_get_options(const struct ssl_ctx_st* ctx);
unsigned long  int SSL_get_options(const struct ssl_st* s);
unsigned long  int SSL_CTX_clear_options(struct ssl_ctx_st* ctx, unsigned long  int op);
unsigned long  int SSL_clear_options(struct ssl_st* s, unsigned long  int op);
unsigned long  int SSL_CTX_set_options(struct ssl_ctx_st* ctx, unsigned long  int op);
unsigned long  int SSL_set_options(struct ssl_st* s, unsigned long  int op);
void SSL_CTX_set_msg_callback(struct ssl_ctx_st* ctx, void (*cb)(int,int,int,const void*,unsigned long  int,struct ssl_st*,void*));
void SSL_set_msg_callback(struct ssl_st* ssl, void (*cb)(int,int,int,const void*,unsigned long  int,struct ssl_st*,void*));
int SSL_SRP_CTX_init(struct ssl_st* s);
int SSL_CTX_SRP_CTX_init(struct ssl_ctx_st* ctx);
int SSL_SRP_CTX_free(struct ssl_st* ctx);
int SSL_CTX_SRP_CTX_free(struct ssl_ctx_st* ctx);
int SSL_srp_server_param_with_username(struct ssl_st* s, int* ad);
int SRP_Calc_A_param(struct ssl_st* s);
struct lhash_st_SSL_SESSION* SSL_CTX_sessions(struct ssl_ctx_st* ctx);
void SSL_CTX_sess_set_new_cb(struct ssl_ctx_st* ctx, int (*new_session_cb)(struct ssl_st*,struct ssl_session_st*));
int (*SSL_CTX_sess_get_new_cb(struct ssl_ctx_st* _function_pointer_result_var_name_a59))(struct ssl_st*,struct ssl_session_st*);
void SSL_CTX_sess_set_remove_cb(struct ssl_ctx_st* ctx, void (*remove_session_cb)(struct ssl_ctx_st*,struct ssl_session_st*));
void (*SSL_CTX_sess_get_remove_cb(struct ssl_ctx_st* _function_pointer_result_var_name_a60))(struct ssl_ctx_st*,struct ssl_session_st*);
void SSL_CTX_sess_set_get_cb(struct ssl_ctx_st* ctx, struct ssl_session_st* (*get_session_cb)(struct ssl_st*,const unsigned char*,int,int*));
struct ssl_session_st* (*SSL_CTX_sess_get_get_cb(struct ssl_ctx_st* _function_pointer_result_var_name_a61))(struct ssl_st*,const unsigned char*,int,int*);
void SSL_CTX_set_info_callback(struct ssl_ctx_st* ctx, void (*cb)(const struct ssl_st*,int,int));
void (*SSL_CTX_get_info_callback(struct ssl_ctx_st* _function_pointer_result_var_name_a62))(const struct ssl_st*,int,int);
void SSL_CTX_set_client_cert_cb(struct ssl_ctx_st* ctx, int (*client_cert_cb)(struct ssl_st*,struct x509_st**,struct evp_pkey_st**));
int (*SSL_CTX_get_client_cert_cb(struct ssl_ctx_st* _function_pointer_result_var_name_a63))(struct ssl_st*,struct x509_st**,struct evp_pkey_st**);
int SSL_CTX_set_client_cert_engine(struct ssl_ctx_st* ctx, struct engine_st* e);
void SSL_CTX_set_cookie_generate_cb(struct ssl_ctx_st* ctx, int (*app_gen_cookie_cb)(struct ssl_st*,unsigned char*,unsigned int*));
void SSL_CTX_set_cookie_verify_cb(struct ssl_ctx_st* ctx, int (*app_verify_cookie_cb)(struct ssl_st*,const unsigned char*,unsigned int));
void SSL_CTX_set_stateless_cookie_generate_cb(struct ssl_ctx_st* ctx, int (*gen_stateless_cookie_cb)(struct ssl_st*,unsigned char*,unsigned long  int*));
void SSL_CTX_set_stateless_cookie_verify_cb(struct ssl_ctx_st* ctx, int (*verify_stateless_cookie_cb)(struct ssl_st*,const unsigned char*,unsigned long  int));
void SSL_CTX_set_next_protos_advertised_cb(struct ssl_ctx_st* s, int (*cb)(struct ssl_st*,const unsigned char**,unsigned int*,void*), void* arg);
void SSL_CTX_set_next_proto_select_cb(struct ssl_ctx_st* s, int (*cb)(struct ssl_st*,unsigned char**,unsigned char*,const unsigned char*,unsigned int,void*), void* arg);
void SSL_get0_next_proto_negotiated(const struct ssl_st* s, const unsigned char** data, unsigned int* len);
int SSL_select_next_proto(unsigned char** out, unsigned char* outlen, const unsigned char* in, unsigned int inlen, const unsigned char* client, unsigned int client_len);
int SSL_CTX_set_alpn_protos(struct ssl_ctx_st* ctx, const unsigned char* protos, unsigned int protos_len);
int SSL_set_alpn_protos(struct ssl_st* ssl, const unsigned char* protos, unsigned int protos_len);
void SSL_CTX_set_alpn_select_cb(struct ssl_ctx_st* ctx, int (*cb)(struct ssl_st*,const unsigned char**,unsigned char*,const unsigned char*,unsigned int,void*), void* arg);
void SSL_get0_alpn_selected(const struct ssl_st* ssl, const unsigned char** data, unsigned int* len);
void SSL_CTX_set_psk_client_callback(struct ssl_ctx_st* ctx, unsigned int (*cb)(struct ssl_st*,const char*,char*,unsigned int,unsigned char*,unsigned int));
void SSL_set_psk_client_callback(struct ssl_st* ssl, unsigned int (*cb)(struct ssl_st*,const char*,char*,unsigned int,unsigned char*,unsigned int));
void SSL_CTX_set_psk_server_callback(struct ssl_ctx_st* ctx, unsigned int (*cb)(struct ssl_st*,const char*,unsigned char*,unsigned int));
void SSL_set_psk_server_callback(struct ssl_st* ssl, unsigned int (*cb)(struct ssl_st*,const char*,unsigned char*,unsigned int));
int SSL_CTX_use_psk_identity_hint(struct ssl_ctx_st* ctx, const char* identity_hint);
int SSL_use_psk_identity_hint(struct ssl_st* s, const char* identity_hint);
const char* SSL_get_psk_identity_hint(const struct ssl_st* s);
const char* SSL_get_psk_identity(const struct ssl_st* s);
void SSL_set_psk_find_session_callback(struct ssl_st* s, int (*cb)(struct ssl_st*,const unsigned char*,unsigned long  int,struct ssl_session_st**));
void SSL_CTX_set_psk_find_session_callback(struct ssl_ctx_st* ctx, int (*cb)(struct ssl_st*,const unsigned char*,unsigned long  int,struct ssl_session_st**));
void SSL_set_psk_use_session_callback(struct ssl_st* s, int (*cb)(struct ssl_st*,const struct evp_md_st*,const unsigned char**,unsigned long  int*,struct ssl_session_st**));
void SSL_CTX_set_psk_use_session_callback(struct ssl_ctx_st* ctx, int (*cb)(struct ssl_st*,const struct evp_md_st*,const unsigned char**,unsigned long  int*,struct ssl_session_st**));
int SSL_CTX_has_client_custom_ext(const struct ssl_ctx_st* ctx, unsigned int ext_type);
int SSL_CTX_add_client_custom_ext(struct ssl_ctx_st* ctx, unsigned int ext_type, int (*add_cb)(struct ssl_st*,unsigned int,const unsigned char**,unsigned long  int*,int*,void*), void (*free_cb)(struct ssl_st*,unsigned int,const unsigned char*,void*), void* add_arg, int (*parse_cb)(struct ssl_st*,unsigned int,const unsigned char*,unsigned long  int,int*,void*), void* parse_arg);
int SSL_CTX_add_server_custom_ext(struct ssl_ctx_st* ctx, unsigned int ext_type, int (*add_cb)(struct ssl_st*,unsigned int,const unsigned char**,unsigned long  int*,int*,void*), void (*free_cb)(struct ssl_st*,unsigned int,const unsigned char*,void*), void* add_arg, int (*parse_cb)(struct ssl_st*,unsigned int,const unsigned char*,unsigned long  int,int*,void*), void* parse_arg);
int SSL_CTX_add_custom_ext(struct ssl_ctx_st* ctx, unsigned int ext_type, unsigned int context, int (*add_cb)(struct ssl_st*,unsigned int,unsigned int,const unsigned char**,unsigned long  int*,struct x509_st*,unsigned long  int,int*,void*), void (*free_cb)(struct ssl_st*,unsigned int,unsigned int,const unsigned char*,void*), void* add_arg, int (*parse_cb)(struct ssl_st*,unsigned int,unsigned int,const unsigned char*,unsigned long  int,struct x509_st*,unsigned long  int,int*,void*), void* parse_arg);
int SSL_extension_supported(unsigned int ext_type);
void SSL_CTX_set_keylog_callback(struct ssl_ctx_st* ctx, void (*cb)(const struct ssl_st*,const char*));
void (*SSL_CTX_get_keylog_callback(const struct ssl_ctx_st* ctx))(const struct ssl_st*,const char*);
int SSL_CTX_set_max_early_data(struct ssl_ctx_st* ctx, unsigned int max_early_data);
unsigned int SSL_CTX_get_max_early_data(const struct ssl_ctx_st* ctx);
int SSL_set_max_early_data(struct ssl_st* s, unsigned int max_early_data);
unsigned int SSL_get_max_early_data(const struct ssl_st* s);
int SSL_CTX_set_recv_max_early_data(struct ssl_ctx_st* ctx, unsigned int recv_max_early_data);
unsigned int SSL_CTX_get_recv_max_early_data(const struct ssl_ctx_st* ctx);
int SSL_set_recv_max_early_data(struct ssl_st* s, unsigned int recv_max_early_data);
unsigned int SSL_get_recv_max_early_data(const struct ssl_st* s);
int SSL_CTX_set_tlsext_max_fragment_length(struct ssl_ctx_st* ctx, unsigned char mode);
int SSL_set_tlsext_max_fragment_length(struct ssl_st* ssl, unsigned char mode);
const char* SSL_get_servername(const struct ssl_st* s, const int type);
int SSL_get_servername_type(const struct ssl_st* s);
int SSL_export_keying_material(struct ssl_st* s, unsigned char* out, unsigned long  int olen, const char* label, unsigned long  int llen, const unsigned char* context, unsigned long  int contextlen, int use_context);
int SSL_export_keying_material_early(struct ssl_st* s, unsigned char* out, unsigned long  int olen, const char* label, unsigned long  int llen, const unsigned char* context, unsigned long  int contextlen);
int SSL_get_peer_signature_type_nid(const struct ssl_st* s, int* pnid);
int SSL_get_signature_type_nid(const struct ssl_st* s, int* pnid);
int SSL_get_sigalgs(struct ssl_st* s, int idx, int* psign, int* phash, int* psignandhash, unsigned char* rsig, unsigned char* rhash);
int SSL_get_shared_sigalgs(struct ssl_st* s, int idx, int* psign, int* phash, int* psignandhash, unsigned char* rsig, unsigned char* rhash);
int SSL_check_chain(struct ssl_st* s, struct x509_st* x, struct evp_pkey_st* pk, struct stack_st_X509* chain);
int SSL_CTX_set_tlsext_ticket_key_evp_cb(struct ssl_ctx_st* ctx, int (*fp)(struct ssl_st*,unsigned char*,unsigned char*,struct evp_cipher_ctx_st*,struct evp_mac_ctx_st*,int));
int SSL_CTX_set_tlsext_use_srtp(struct ssl_ctx_st* ctx, const char* profiles);
int SSL_set_tlsext_use_srtp(struct ssl_st* ssl, const char* profiles);
struct stack_st_SRTP_PROTECTION_PROFILE* SSL_get_srtp_profiles(struct ssl_st* ssl);
struct srtp_protection_profile_st* SSL_get_selected_srtp_profile(struct ssl_st* s);
const struct ssl_method_st* OSSL_QUIC_client_method();
const struct ssl_method_st* OSSL_QUIC_client_thread_method();
void SSL_set_debug(struct ssl_st* s, int debug);
int SSL_in_init(const struct ssl_st* s);
int SSL_in_before(const struct ssl_st* s);
int SSL_is_init_finished(const struct ssl_st* s);
unsigned long  int SSL_get_finished(const struct ssl_st* s, void* buf, unsigned long  int count);
unsigned long  int SSL_get_peer_finished(const struct ssl_st* s, void* buf, unsigned long  int count);
struct ssl_session_st* PEM_read_bio_SSL_SESSION(struct bio_st* out, struct ssl_session_st** x, int (*cb)(char*,int,int,void*), void* u);
struct ssl_session_st* PEM_read_SSL_SESSION(struct _IO_FILE* out, struct ssl_session_st** x, int (*cb)(char*,int,int,void*), void* u);
int PEM_write_bio_SSL_SESSION(struct bio_st* out, const struct ssl_session_st* x);
int PEM_write_SSL_SESSION(struct _IO_FILE* out, const struct ssl_session_st* x);
const char* SSL_get0_group_name(struct ssl_st* s);
const char* SSL_group_to_name(struct ssl_st* s, int id);
int SSL_set0_tmp_dh_pkey(struct ssl_st* s, struct evp_pkey_st* dhpkey);
int SSL_CTX_set0_tmp_dh_pkey(struct ssl_ctx_st* ctx, struct evp_pkey_st* dhpkey);
const struct bio_method_st* BIO_f_ssl();
struct bio_st* BIO_new_ssl(struct ssl_ctx_st* ctx, int client);
struct bio_st* BIO_new_ssl_connect(struct ssl_ctx_st* ctx);
struct bio_st* BIO_new_buffer_ssl_connect(struct ssl_ctx_st* ctx);
int BIO_ssl_copy_session_id(struct bio_st* to, struct bio_st* from);
void BIO_ssl_shutdown(struct bio_st* ssl_bio);
int SSL_CTX_set_cipher_list(struct ssl_ctx_st* anonymous_var_nameX1718, const char* str);
struct ssl_ctx_st* SSL_CTX_new(const struct ssl_method_st* meth);
struct ssl_ctx_st* SSL_CTX_new_ex(struct ossl_lib_ctx_st* libctx, const char* propq, const struct ssl_method_st* meth);
int SSL_CTX_up_ref(struct ssl_ctx_st* ctx);
void SSL_CTX_free(struct ssl_ctx_st* anonymous_var_nameX1719);
long SSL_CTX_set_timeout(struct ssl_ctx_st* ctx, long t);
long SSL_CTX_get_timeout(const struct ssl_ctx_st* ctx);
struct x509_store_st* SSL_CTX_get_cert_store(const struct ssl_ctx_st* anonymous_var_nameX1720);
void SSL_CTX_set_cert_store(struct ssl_ctx_st* anonymous_var_nameX1721, struct x509_store_st* anonymous_var_nameX1722);
void SSL_CTX_set1_cert_store(struct ssl_ctx_st* anonymous_var_nameX1723, struct x509_store_st* anonymous_var_nameX1724);
int SSL_want(const struct ssl_st* s);
int SSL_clear(struct ssl_st* s);
void SSL_CTX_flush_sessions(struct ssl_ctx_st* ctx, long tm);
const struct ssl_cipher_st* SSL_get_current_cipher(const struct ssl_st* s);
const struct ssl_cipher_st* SSL_get_pending_cipher(const struct ssl_st* s);
int SSL_CIPHER_get_bits(const struct ssl_cipher_st* c, int* alg_bits);
const char* SSL_CIPHER_get_version(const struct ssl_cipher_st* c);
const char* SSL_CIPHER_get_name(const struct ssl_cipher_st* c);
const char* SSL_CIPHER_standard_name(const struct ssl_cipher_st* c);
const char* OPENSSL_cipher_name(const char* rfc_name);
unsigned int SSL_CIPHER_get_id(const struct ssl_cipher_st* c);
unsigned short int SSL_CIPHER_get_protocol_id(const struct ssl_cipher_st* c);
int SSL_CIPHER_get_kx_nid(const struct ssl_cipher_st* c);
int SSL_CIPHER_get_auth_nid(const struct ssl_cipher_st* c);
const struct evp_md_st* SSL_CIPHER_get_handshake_digest(const struct ssl_cipher_st* c);
int SSL_CIPHER_is_aead(const struct ssl_cipher_st* c);
int SSL_get_fd(const struct ssl_st* s);
int SSL_get_rfd(const struct ssl_st* s);
int SSL_get_wfd(const struct ssl_st* s);
const char* SSL_get_cipher_list(const struct ssl_st* s, int n);
char* SSL_get_shared_ciphers(const struct ssl_st* s, char* buf, int size);
int SSL_get_read_ahead(const struct ssl_st* s);
int SSL_pending(const struct ssl_st* s);
int SSL_has_pending(const struct ssl_st* s);
int SSL_set_fd(struct ssl_st* s, int fd);
int SSL_set_rfd(struct ssl_st* s, int fd);
int SSL_set_wfd(struct ssl_st* s, int fd);
void SSL_set0_rbio(struct ssl_st* s, struct bio_st* rbio);
void SSL_set0_wbio(struct ssl_st* s, struct bio_st* wbio);
void SSL_set_bio(struct ssl_st* s, struct bio_st* rbio, struct bio_st* wbio);
struct bio_st* SSL_get_rbio(const struct ssl_st* s);
struct bio_st* SSL_get_wbio(const struct ssl_st* s);
int SSL_set_cipher_list(struct ssl_st* s, const char* str);
int SSL_CTX_set_ciphersuites(struct ssl_ctx_st* ctx, const char* str);
int SSL_set_ciphersuites(struct ssl_st* s, const char* str);
void SSL_set_read_ahead(struct ssl_st* s, int yes);
int SSL_get_verify_mode(const struct ssl_st* s);
int SSL_get_verify_depth(const struct ssl_st* s);
int (*SSL_get_verify_callback(const struct ssl_st* s))(int,struct x509_store_ctx_st*);
void SSL_set_verify(struct ssl_st* s, int mode, int (*callback)(int,struct x509_store_ctx_st*));
void SSL_set_verify_depth(struct ssl_st* s, int depth);
void SSL_set_cert_cb(struct ssl_st* s, int (*cb)(struct ssl_st*,void*), void* arg);
int SSL_use_RSAPrivateKey(struct ssl_st* ssl, struct rsa_st* rsa);
int SSL_use_RSAPrivateKey_ASN1(struct ssl_st* ssl, const unsigned char* d, long len);
int SSL_use_PrivateKey(struct ssl_st* ssl, struct evp_pkey_st* pkey);
int SSL_use_PrivateKey_ASN1(int pk, struct ssl_st* ssl, const unsigned char* d, long len);
int SSL_use_certificate(struct ssl_st* ssl, struct x509_st* x);
int SSL_use_certificate_ASN1(struct ssl_st* ssl, const unsigned char* d, int len);
int SSL_use_cert_and_key(struct ssl_st* ssl, struct x509_st* x509, struct evp_pkey_st* privatekey, struct stack_st_X509* chain, int override);
int SSL_CTX_use_serverinfo(struct ssl_ctx_st* ctx, const unsigned char* serverinfo, unsigned long  int serverinfo_length);
int SSL_CTX_use_serverinfo_ex(struct ssl_ctx_st* ctx, unsigned int version, const unsigned char* serverinfo, unsigned long  int serverinfo_length);
int SSL_CTX_use_serverinfo_file(struct ssl_ctx_st* ctx, const char* file);
int SSL_use_RSAPrivateKey_file(struct ssl_st* ssl, const char* file, int type);
int SSL_use_PrivateKey_file(struct ssl_st* ssl, const char* file, int type);
int SSL_use_certificate_file(struct ssl_st* ssl, const char* file, int type);
int SSL_CTX_use_RSAPrivateKey_file(struct ssl_ctx_st* ctx, const char* file, int type);
int SSL_CTX_use_PrivateKey_file(struct ssl_ctx_st* ctx, const char* file, int type);
int SSL_CTX_use_certificate_file(struct ssl_ctx_st* ctx, const char* file, int type);
int SSL_CTX_use_certificate_chain_file(struct ssl_ctx_st* ctx, const char* file);
int SSL_use_certificate_chain_file(struct ssl_st* ssl, const char* file);
struct stack_st_X509_NAME* SSL_load_client_CA_file(const char* file);
struct stack_st_X509_NAME* SSL_load_client_CA_file_ex(const char* file, struct ossl_lib_ctx_st* libctx, const char* propq);
int SSL_add_file_cert_subjects_to_stack(struct stack_st_X509_NAME* stackCAs, const char* file);
int SSL_add_dir_cert_subjects_to_stack(struct stack_st_X509_NAME* stackCAs, const char* dir);
int SSL_add_store_cert_subjects_to_stack(struct stack_st_X509_NAME* stackCAs, const char* uri);
const char* SSL_state_string(const struct ssl_st* s);
const char* SSL_rstate_string(const struct ssl_st* s);
const char* SSL_state_string_long(const struct ssl_st* s);
const char* SSL_rstate_string_long(const struct ssl_st* s);
long SSL_SESSION_get_time(const struct ssl_session_st* s);
long SSL_SESSION_set_time(struct ssl_session_st* s, long t);
long SSL_SESSION_get_timeout(const struct ssl_session_st* s);
long SSL_SESSION_set_timeout(struct ssl_session_st* s, long t);
int SSL_SESSION_get_protocol_version(const struct ssl_session_st* s);
int SSL_SESSION_set_protocol_version(struct ssl_session_st* s, int version);
long SSL_SESSION_get_time_ex(const struct ssl_session_st* s);
long SSL_SESSION_set_time_ex(struct ssl_session_st* s, long t);
const char* SSL_SESSION_get0_hostname(const struct ssl_session_st* s);
int SSL_SESSION_set1_hostname(struct ssl_session_st* s, const char* hostname);
void SSL_SESSION_get0_alpn_selected(const struct ssl_session_st* s, const unsigned char** alpn, unsigned long  int* len);
int SSL_SESSION_set1_alpn_selected(struct ssl_session_st* s, const unsigned char* alpn, unsigned long  int len);
const struct ssl_cipher_st* SSL_SESSION_get0_cipher(const struct ssl_session_st* s);
int SSL_SESSION_set_cipher(struct ssl_session_st* s, const struct ssl_cipher_st* cipher);
int SSL_SESSION_has_ticket(const struct ssl_session_st* s);
unsigned long  int SSL_SESSION_get_ticket_lifetime_hint(const struct ssl_session_st* s);
void SSL_SESSION_get0_ticket(const struct ssl_session_st* s, const unsigned char** tick, unsigned long  int* len);
unsigned int SSL_SESSION_get_max_early_data(const struct ssl_session_st* s);
int SSL_SESSION_set_max_early_data(struct ssl_session_st* s, unsigned int max_early_data);
int SSL_copy_session_id(struct ssl_st* to, const struct ssl_st* from);
struct x509_st* SSL_SESSION_get0_peer(struct ssl_session_st* s);
int SSL_SESSION_set1_id_context(struct ssl_session_st* s, const unsigned char* sid_ctx, unsigned int sid_ctx_len);
int SSL_SESSION_set1_id(struct ssl_session_st* s, const unsigned char* sid, unsigned int sid_len);
int SSL_SESSION_is_resumable(const struct ssl_session_st* s);
struct ssl_session_st* SSL_SESSION_new();
struct ssl_session_st* SSL_SESSION_dup(const struct ssl_session_st* src);
const unsigned char* SSL_SESSION_get_id(const struct ssl_session_st* s, unsigned int* len);
const unsigned char* SSL_SESSION_get0_id_context(const struct ssl_session_st* s, unsigned int* len);
unsigned int SSL_SESSION_get_compress_id(const struct ssl_session_st* s);
int SSL_SESSION_print_fp(struct _IO_FILE* fp, const struct ssl_session_st* ses);
int SSL_SESSION_print(struct bio_st* fp, const struct ssl_session_st* ses);
int SSL_SESSION_print_keylog(struct bio_st* bp, const struct ssl_session_st* x);
int SSL_SESSION_up_ref(struct ssl_session_st* ses);
void SSL_SESSION_free(struct ssl_session_st* ses);
int i2d_SSL_SESSION(const struct ssl_session_st* in, unsigned char** pp);
int SSL_set_session(struct ssl_st* to, struct ssl_session_st* session);
int SSL_CTX_add_session(struct ssl_ctx_st* ctx, struct ssl_session_st* session);
int SSL_CTX_remove_session(struct ssl_ctx_st* ctx, struct ssl_session_st* session);
int SSL_CTX_set_generate_session_id(struct ssl_ctx_st* ctx, int (*cb)(struct ssl_st*,unsigned char*,unsigned int*));
int SSL_set_generate_session_id(struct ssl_st* s, int (*cb)(struct ssl_st*,unsigned char*,unsigned int*));
int SSL_has_matching_session_id(const struct ssl_st* s, const unsigned char* id, unsigned int id_len);
struct ssl_session_st* d2i_SSL_SESSION(struct ssl_session_st** a, const unsigned char** pp, long length);
struct ssl_session_st* d2i_SSL_SESSION_ex(struct ssl_session_st** a, const unsigned char** pp, long length, struct ossl_lib_ctx_st* libctx, const char* propq);
struct x509_st* SSL_get0_peer_certificate(const struct ssl_st* s);
struct x509_st* SSL_get1_peer_certificate(const struct ssl_st* s);
struct stack_st_X509* SSL_get_peer_cert_chain(const struct ssl_st* s);
int SSL_CTX_get_verify_mode(const struct ssl_ctx_st* ctx);
int SSL_CTX_get_verify_depth(const struct ssl_ctx_st* ctx);
int (*SSL_CTX_get_verify_callback(const struct ssl_ctx_st* ctx))(int,struct x509_store_ctx_st*);
void SSL_CTX_set_verify(struct ssl_ctx_st* ctx, int mode, int (*callback)(int,struct x509_store_ctx_st*));
void SSL_CTX_set_verify_depth(struct ssl_ctx_st* ctx, int depth);
void SSL_CTX_set_cert_verify_callback(struct ssl_ctx_st* ctx, int (*cb)(struct x509_store_ctx_st*,void*), void* arg);
void SSL_CTX_set_cert_cb(struct ssl_ctx_st* c, int (*cb)(struct ssl_st*,void*), void* arg);
int SSL_CTX_use_RSAPrivateKey(struct ssl_ctx_st* ctx, struct rsa_st* rsa);
int SSL_CTX_use_RSAPrivateKey_ASN1(struct ssl_ctx_st* ctx, const unsigned char* d, long len);
int SSL_CTX_use_PrivateKey(struct ssl_ctx_st* ctx, struct evp_pkey_st* pkey);
int SSL_CTX_use_PrivateKey_ASN1(int pk, struct ssl_ctx_st* ctx, const unsigned char* d, long len);
int SSL_CTX_use_certificate(struct ssl_ctx_st* ctx, struct x509_st* x);
int SSL_CTX_use_certificate_ASN1(struct ssl_ctx_st* ctx, int len, const unsigned char* d);
int SSL_CTX_use_cert_and_key(struct ssl_ctx_st* ctx, struct x509_st* x509, struct evp_pkey_st* privatekey, struct stack_st_X509* chain, int override);
void SSL_CTX_set_default_passwd_cb(struct ssl_ctx_st* ctx, int (*cb)(char*,int,int,void*));
void SSL_CTX_set_default_passwd_cb_userdata(struct ssl_ctx_st* ctx, void* u);
int (*SSL_CTX_get_default_passwd_cb(struct ssl_ctx_st* ctx))(char*,int,int,void*);
void* SSL_CTX_get_default_passwd_cb_userdata(struct ssl_ctx_st* ctx);
void SSL_set_default_passwd_cb(struct ssl_st* s, int (*cb)(char*,int,int,void*));
void SSL_set_default_passwd_cb_userdata(struct ssl_st* s, void* u);
int (*SSL_get_default_passwd_cb(struct ssl_st* s))(char*,int,int,void*);
void* SSL_get_default_passwd_cb_userdata(struct ssl_st* s);
int SSL_CTX_check_private_key(const struct ssl_ctx_st* ctx);
int SSL_check_private_key(const struct ssl_st* ctx);
int SSL_CTX_set_session_id_context(struct ssl_ctx_st* ctx, const unsigned char* sid_ctx, unsigned int sid_ctx_len);
struct ssl_st* SSL_new(struct ssl_ctx_st* ctx);
int SSL_up_ref(struct ssl_st* s);
int SSL_is_dtls(const struct ssl_st* s);
int SSL_is_tls(const struct ssl_st* s);
int SSL_is_quic(const struct ssl_st* s);
int SSL_set_session_id_context(struct ssl_st* ssl, const unsigned char* sid_ctx, unsigned int sid_ctx_len);
int SSL_CTX_set_purpose(struct ssl_ctx_st* ctx, int purpose);
int SSL_set_purpose(struct ssl_st* ssl, int purpose);
int SSL_CTX_set_trust(struct ssl_ctx_st* ctx, int trust);
int SSL_set_trust(struct ssl_st* ssl, int trust);
int SSL_set1_host(struct ssl_st* s, const char* hostname);
int SSL_add1_host(struct ssl_st* s, const char* hostname);
const char* SSL_get0_peername(struct ssl_st* s);
void SSL_set_hostflags(struct ssl_st* s, unsigned int flags);
int SSL_CTX_dane_enable(struct ssl_ctx_st* ctx);
int SSL_CTX_dane_mtype_set(struct ssl_ctx_st* ctx, const struct evp_md_st* md, unsigned char mtype, unsigned char ord);
int SSL_dane_enable(struct ssl_st* s, const char* basedomain);
int SSL_dane_tlsa_add(struct ssl_st* s, unsigned char usage, unsigned char selector, unsigned char mtype, const unsigned char* data, unsigned long  int dlen);
int SSL_get0_dane_authority(struct ssl_st* s, struct x509_st** mcert, struct evp_pkey_st** mspki);
int SSL_get0_dane_tlsa(struct ssl_st* s, unsigned char* usage, unsigned char* selector, unsigned char* mtype, const unsigned char** data, unsigned long  int* dlen);
struct ssl_dane_st* SSL_get0_dane(struct ssl_st* ssl);
unsigned long  int SSL_CTX_dane_set_flags(struct ssl_ctx_st* ctx, unsigned long  int flags);
unsigned long  int SSL_CTX_dane_clear_flags(struct ssl_ctx_st* ctx, unsigned long  int flags);
unsigned long  int SSL_dane_set_flags(struct ssl_st* ssl, unsigned long  int flags);
unsigned long  int SSL_dane_clear_flags(struct ssl_st* ssl, unsigned long  int flags);
int SSL_CTX_set1_param(struct ssl_ctx_st* ctx, struct X509_VERIFY_PARAM_st* vpm);
int SSL_set1_param(struct ssl_st* ssl, struct X509_VERIFY_PARAM_st* vpm);
struct X509_VERIFY_PARAM_st* SSL_CTX_get0_param(struct ssl_ctx_st* ctx);
struct X509_VERIFY_PARAM_st* SSL_get0_param(struct ssl_st* ssl);
int SSL_CTX_set_srp_username(struct ssl_ctx_st* ctx, char* name);
int SSL_CTX_set_srp_password(struct ssl_ctx_st* ctx, char* password);
int SSL_CTX_set_srp_strength(struct ssl_ctx_st* ctx, int strength);
int SSL_CTX_set_srp_client_pwd_callback(struct ssl_ctx_st* ctx, char* (*cb)(struct ssl_st*,void*));
int SSL_CTX_set_srp_verify_param_callback(struct ssl_ctx_st* ctx, int (*cb)(struct ssl_st*,void*));
int SSL_CTX_set_srp_username_callback(struct ssl_ctx_st* ctx, int (*cb)(struct ssl_st*,int*,void*));
int SSL_CTX_set_srp_cb_arg(struct ssl_ctx_st* ctx, void* arg);
int SSL_set_srp_server_param(struct ssl_st* s, const struct bignum_st* N, const struct bignum_st* g, struct bignum_st* sa, struct bignum_st* v, char* info);
int SSL_set_srp_server_param_pw(struct ssl_st* s, const char* user, const char* pass, const char* grp);
struct bignum_st* SSL_get_srp_g(struct ssl_st* s);
struct bignum_st* SSL_get_srp_N(struct ssl_st* s);
char* SSL_get_srp_username(struct ssl_st* s);
char* SSL_get_srp_userinfo(struct ssl_st* s);
void SSL_CTX_set_client_hello_cb(struct ssl_ctx_st* c, int (*cb)(struct ssl_st*,int*,void*), void* arg);
int SSL_client_hello_isv2(struct ssl_st* s);
unsigned int SSL_client_hello_get0_legacy_version(struct ssl_st* s);
unsigned long  int SSL_client_hello_get0_random(struct ssl_st* s, const unsigned char** out);
unsigned long  int SSL_client_hello_get0_session_id(struct ssl_st* s, const unsigned char** out);
unsigned long  int SSL_client_hello_get0_ciphers(struct ssl_st* s, const unsigned char** out);
unsigned long  int SSL_client_hello_get0_compression_methods(struct ssl_st* s, const unsigned char** out);
int SSL_client_hello_get1_extensions_present(struct ssl_st* s, int** out, unsigned long  int* outlen);
int SSL_client_hello_get_extension_order(struct ssl_st* s, unsigned short int* exts, unsigned long  int* num_exts);
int SSL_client_hello_get0_ext(struct ssl_st* s, unsigned int type, const unsigned char** out, unsigned long  int* outlen);
void SSL_certs_clear(struct ssl_st* s);
void SSL_free(struct ssl_st* ssl);
int SSL_waiting_for_async(struct ssl_st* s);
int SSL_get_all_async_fds(struct ssl_st* s, int* fds, unsigned long  int* numfds);
int SSL_get_changed_async_fds(struct ssl_st* s, int* addfd, unsigned long  int* numaddfds, int* delfd, unsigned long  int* numdelfds);
int SSL_CTX_set_async_callback(struct ssl_ctx_st* ctx, int (*callback)(struct ssl_st*,void*));
int SSL_CTX_set_async_callback_arg(struct ssl_ctx_st* ctx, void* arg);
int SSL_set_async_callback(struct ssl_st* s, int (*callback)(struct ssl_st*,void*));
int SSL_set_async_callback_arg(struct ssl_st* s, void* arg);
int SSL_get_async_status(struct ssl_st* s, int* status);
int SSL_accept(struct ssl_st* ssl);
int SSL_stateless(struct ssl_st* s);
int SSL_connect(struct ssl_st* ssl);
int SSL_read(struct ssl_st* ssl, void* buf, int num);
int SSL_read_ex(struct ssl_st* ssl, void* buf, unsigned long  int num, unsigned long  int* readbytes);
int SSL_read_early_data(struct ssl_st* s, void* buf, unsigned long  int num, unsigned long  int* readbytes);
int SSL_peek(struct ssl_st* ssl, void* buf, int num);
int SSL_peek_ex(struct ssl_st* ssl, void* buf, unsigned long  int num, unsigned long  int* readbytes);
long SSL_sendfile(struct ssl_st* s, int fd, long offset, unsigned long  int size, int flags);
int SSL_write(struct ssl_st* ssl, const void* buf, int num);
int SSL_write_ex(struct ssl_st* s, const void* buf, unsigned long  int num, unsigned long  int* written);
int SSL_write_early_data(struct ssl_st* s, const void* buf, unsigned long  int num, unsigned long  int* written);
long SSL_ctrl(struct ssl_st* ssl, int cmd, long larg, void* parg);
long SSL_callback_ctrl(struct ssl_st* anonymous_var_nameX1734, int anonymous_var_nameX1735, void (*anonymous_lambda_var_nameZ38)());
long SSL_CTX_ctrl(struct ssl_ctx_st* ctx, int cmd, long larg, void* parg);
long SSL_CTX_callback_ctrl(struct ssl_ctx_st* anonymous_var_nameX1736, int anonymous_var_nameX1737, void (*anonymous_lambda_var_nameZ39)());
int SSL_write_ex2(struct ssl_st* s, const void* buf, unsigned long  int num, unsigned long  int flags, unsigned long  int* written);
int SSL_get_early_data_status(const struct ssl_st* s);
int SSL_get_error(const struct ssl_st* s, int ret_code);
const char* SSL_get_version(const struct ssl_st* s);
int SSL_get_handshake_rtt(const struct ssl_st* s, unsigned long  int* rtt);
int SSL_CTX_set_ssl_version(struct ssl_ctx_st* ctx, const struct ssl_method_st* meth);
const struct ssl_method_st* TLS_method();
const struct ssl_method_st* TLS_server_method();
const struct ssl_method_st* TLS_client_method();
const struct ssl_method_st* TLSv1_method();
const struct ssl_method_st* TLSv1_server_method();
const struct ssl_method_st* TLSv1_client_method();
const struct ssl_method_st* TLSv1_1_method();
const struct ssl_method_st* TLSv1_1_server_method();
const struct ssl_method_st* TLSv1_1_client_method();
const struct ssl_method_st* TLSv1_2_method();
const struct ssl_method_st* TLSv1_2_server_method();
const struct ssl_method_st* TLSv1_2_client_method();
const struct ssl_method_st* DTLSv1_method();
const struct ssl_method_st* DTLSv1_server_method();
const struct ssl_method_st* DTLSv1_client_method();
const struct ssl_method_st* DTLSv1_2_method();
const struct ssl_method_st* DTLSv1_2_server_method();
const struct ssl_method_st* DTLSv1_2_client_method();
const struct ssl_method_st* DTLS_method();
const struct ssl_method_st* DTLS_server_method();
const struct ssl_method_st* DTLS_client_method();
unsigned long  int DTLS_get_data_mtu(const struct ssl_st* s);
struct stack_st_SSL_CIPHER* SSL_get_ciphers(const struct ssl_st* s);
struct stack_st_SSL_CIPHER* SSL_CTX_get_ciphers(const struct ssl_ctx_st* ctx);
struct stack_st_SSL_CIPHER* SSL_get_client_ciphers(const struct ssl_st* s);
struct stack_st_SSL_CIPHER* SSL_get1_supported_ciphers(struct ssl_st* s);
int SSL_do_handshake(struct ssl_st* s);
int SSL_key_update(struct ssl_st* s, int updatetype);
int SSL_get_key_update_type(const struct ssl_st* s);
int SSL_renegotiate(struct ssl_st* s);
int SSL_renegotiate_abbreviated(struct ssl_st* s);
int SSL_renegotiate_pending(const struct ssl_st* s);
int SSL_new_session_ticket(struct ssl_st* s);
int SSL_shutdown(struct ssl_st* s);
int SSL_verify_client_post_handshake(struct ssl_st* s);
void SSL_CTX_set_post_handshake_auth(struct ssl_ctx_st* ctx, int val);
void SSL_set_post_handshake_auth(struct ssl_st* s, int val);
const struct ssl_method_st* SSL_CTX_get_ssl_method(const struct ssl_ctx_st* ctx);
const struct ssl_method_st* SSL_get_ssl_method(const struct ssl_st* s);
int SSL_set_ssl_method(struct ssl_st* s, const struct ssl_method_st* method);
const char* SSL_alert_type_string_long(int value);
const char* SSL_alert_type_string(int value);
const char* SSL_alert_desc_string_long(int value);
const char* SSL_alert_desc_string(int value);
void SSL_set0_CA_list(struct ssl_st* s, struct stack_st_X509_NAME* name_list);
void SSL_CTX_set0_CA_list(struct ssl_ctx_st* ctx, struct stack_st_X509_NAME* name_list);
const struct stack_st_X509_NAME* SSL_get0_CA_list(const struct ssl_st* s);
const struct stack_st_X509_NAME* SSL_CTX_get0_CA_list(const struct ssl_ctx_st* ctx);
int SSL_add1_to_CA_list(struct ssl_st* ssl, const struct x509_st* x);
int SSL_CTX_add1_to_CA_list(struct ssl_ctx_st* ctx, const struct x509_st* x);
const struct stack_st_X509_NAME* SSL_get0_peer_CA_list(const struct ssl_st* s);
void SSL_set_client_CA_list(struct ssl_st* s, struct stack_st_X509_NAME* name_list);
void SSL_CTX_set_client_CA_list(struct ssl_ctx_st* ctx, struct stack_st_X509_NAME* name_list);
struct stack_st_X509_NAME* SSL_get_client_CA_list(const struct ssl_st* s);
struct stack_st_X509_NAME* SSL_CTX_get_client_CA_list(const struct ssl_ctx_st* s);
int SSL_add_client_CA(struct ssl_st* ssl, struct x509_st* x);
int SSL_CTX_add_client_CA(struct ssl_ctx_st* ctx, struct x509_st* x);
void SSL_set_connect_state(struct ssl_st* s);
void SSL_set_accept_state(struct ssl_st* s);
long SSL_get_default_timeout(const struct ssl_st* s);
char* SSL_CIPHER_description(const struct ssl_cipher_st* anonymous_var_nameX1738, char* buf, int size);
struct stack_st_X509_NAME* SSL_dup_CA_list(const struct stack_st_X509_NAME* sk);
struct ssl_st* SSL_dup(struct ssl_st* ssl);
struct x509_st* SSL_get_certificate(const struct ssl_st* ssl);
struct evp_pkey_st* SSL_get_privatekey(const struct ssl_st* ssl);
struct x509_st* SSL_CTX_get0_certificate(const struct ssl_ctx_st* ctx);
struct evp_pkey_st* SSL_CTX_get0_privatekey(const struct ssl_ctx_st* ctx);
void SSL_CTX_set_quiet_shutdown(struct ssl_ctx_st* ctx, int mode);
int SSL_CTX_get_quiet_shutdown(const struct ssl_ctx_st* ctx);
void SSL_set_quiet_shutdown(struct ssl_st* ssl, int mode);
int SSL_get_quiet_shutdown(const struct ssl_st* ssl);
void SSL_set_shutdown(struct ssl_st* ssl, int mode);
int SSL_get_shutdown(const struct ssl_st* ssl);
int SSL_version(const struct ssl_st* ssl);
int SSL_client_version(const struct ssl_st* s);
int SSL_CTX_set_default_verify_paths(struct ssl_ctx_st* ctx);
int SSL_CTX_set_default_verify_dir(struct ssl_ctx_st* ctx);
int SSL_CTX_set_default_verify_file(struct ssl_ctx_st* ctx);
int SSL_CTX_set_default_verify_store(struct ssl_ctx_st* ctx);
int SSL_CTX_load_verify_file(struct ssl_ctx_st* ctx, const char* CAfile);
int SSL_CTX_load_verify_dir(struct ssl_ctx_st* ctx, const char* CApath);
int SSL_CTX_load_verify_store(struct ssl_ctx_st* ctx, const char* CAstore);
int SSL_CTX_load_verify_locations(struct ssl_ctx_st* ctx, const char* CAfile, const char* CApath);
struct ssl_session_st* SSL_get_session(const struct ssl_st* ssl);
struct ssl_session_st* SSL_get1_session(struct ssl_st* ssl);
struct ssl_ctx_st* SSL_get_SSL_CTX(const struct ssl_st* ssl);
struct ssl_ctx_st* SSL_set_SSL_CTX(struct ssl_st* ssl, struct ssl_ctx_st* ctx);
void SSL_set_info_callback(struct ssl_st* ssl, void (*cb)(const struct ssl_st*,int,int));
void (*SSL_get_info_callback(const struct ssl_st* _function_pointer_result_var_name_a64))(const struct ssl_st*,int,int);
enum anonymous_typeY48 SSL_get_state(const struct ssl_st* ssl);
void SSL_set_verify_result(struct ssl_st* ssl, long v);
long SSL_get_verify_result(const struct ssl_st* ssl);
struct stack_st_X509* SSL_get0_verified_chain(const struct ssl_st* s);
unsigned long  int SSL_get_client_random(const struct ssl_st* ssl, unsigned char* out, unsigned long  int outlen);
unsigned long  int SSL_get_server_random(const struct ssl_st* ssl, unsigned char* out, unsigned long  int outlen);
unsigned long  int SSL_SESSION_get_master_key(const struct ssl_session_st* sess, unsigned char* out, unsigned long  int outlen);
int SSL_SESSION_set1_master_key(struct ssl_session_st* sess, const unsigned char* in, unsigned long  int len);
unsigned char SSL_SESSION_get_max_fragment_length(const struct ssl_session_st* sess);
int SSL_set_ex_data(struct ssl_st* ssl, int idx, void* data);
void* SSL_get_ex_data(const struct ssl_st* ssl, int idx);
int SSL_SESSION_set_ex_data(struct ssl_session_st* ss, int idx, void* data);
void* SSL_SESSION_get_ex_data(const struct ssl_session_st* ss, int idx);
int SSL_CTX_set_ex_data(struct ssl_ctx_st* ssl, int idx, void* data);
void* SSL_CTX_get_ex_data(const struct ssl_ctx_st* ssl, int idx);
int SSL_get_ex_data_X509_STORE_CTX_idx();
void SSL_CTX_set_default_read_buffer_len(struct ssl_ctx_st* ctx, unsigned long  int len);
void SSL_set_default_read_buffer_len(struct ssl_st* s, unsigned long  int len);
void SSL_CTX_set_tmp_dh_callback(struct ssl_ctx_st* ctx, struct dh_st* (*dh)(struct ssl_st*,int,int));
void SSL_set_tmp_dh_callback(struct ssl_st* ssl, struct dh_st* (*dh)(struct ssl_st*,int,int));
const struct comp_method_st* SSL_get_current_compression(const struct ssl_st* s);
const struct comp_method_st* SSL_get_current_expansion(const struct ssl_st* s);
const char* SSL_COMP_get_name(const struct comp_method_st* comp);
const char* SSL_COMP_get0_name(const struct ssl_comp_st* comp);
int SSL_COMP_get_id(const struct ssl_comp_st* comp);
struct stack_st_SSL_COMP* SSL_COMP_get_compression_methods();
struct stack_st_SSL_COMP* SSL_COMP_set0_compression_methods(struct stack_st_SSL_COMP* meths);
int SSL_COMP_add_compression_method(int id, struct comp_method_st* cm);
const struct ssl_cipher_st* SSL_CIPHER_find(struct ssl_st* ssl, const unsigned char* ptr);
int SSL_CIPHER_get_cipher_nid(const struct ssl_cipher_st* c);
int SSL_CIPHER_get_digest_nid(const struct ssl_cipher_st* c);
int SSL_bytes_to_cipher_list(struct ssl_st* s, const unsigned char* bytes, unsigned long  int len, int isv2format, struct stack_st_SSL_CIPHER** sk, struct stack_st_SSL_CIPHER** scsvs);
int SSL_set_session_ticket_ext(struct ssl_st* s, void* ext_data, int ext_len);
int SSL_set_session_ticket_ext_cb(struct ssl_st* s, int (*cb)(struct ssl_st*,const unsigned char*,int,void*), void* arg);
int SSL_set_session_secret_cb(struct ssl_st* s, int (*session_secret_cb)(struct ssl_st*,void*,int*,struct stack_st_SSL_CIPHER*,const struct ssl_cipher_st**,void*), void* arg);
void SSL_CTX_set_not_resumable_session_callback(struct ssl_ctx_st* ctx, int (*cb)(struct ssl_st*,int));
void SSL_set_not_resumable_session_callback(struct ssl_st* ssl, int (*cb)(struct ssl_st*,int));
void SSL_CTX_set_record_padding_callback(struct ssl_ctx_st* ctx, unsigned long  int (*cb)(struct ssl_st*,int,unsigned long  int,void*));
void SSL_CTX_set_record_padding_callback_arg(struct ssl_ctx_st* ctx, void* arg);
void* SSL_CTX_get_record_padding_callback_arg(const struct ssl_ctx_st* ctx);
int SSL_CTX_set_block_padding(struct ssl_ctx_st* ctx, unsigned long  int block_size);
int SSL_set_record_padding_callback(struct ssl_st* ssl, unsigned long  int (*cb)(struct ssl_st*,int,unsigned long  int,void*));
void SSL_set_record_padding_callback_arg(struct ssl_st* ssl, void* arg);
void* SSL_get_record_padding_callback_arg(const struct ssl_st* ssl);
int SSL_set_block_padding(struct ssl_st* ssl, unsigned long  int block_size);
int SSL_set_num_tickets(struct ssl_st* s, unsigned long  int num_tickets);
unsigned long  int SSL_get_num_tickets(const struct ssl_st* s);
int SSL_CTX_set_num_tickets(struct ssl_ctx_st* ctx, unsigned long  int num_tickets);
unsigned long  int SSL_CTX_get_num_tickets(const struct ssl_ctx_st* ctx);
int SSL_handle_events(struct ssl_st* s);
int SSL_get_event_timeout(struct ssl_st* s, struct timeval* tv, int* is_infinite);
int SSL_get_rpoll_descriptor(struct ssl_st* s, struct bio_poll_descriptor_st* desc);
int SSL_get_wpoll_descriptor(struct ssl_st* s, struct bio_poll_descriptor_st* desc);
int SSL_net_read_desired(struct ssl_st* s);
int SSL_net_write_desired(struct ssl_st* s);
int SSL_set_blocking_mode(struct ssl_st* s, int blocking);
int SSL_get_blocking_mode(struct ssl_st* s);
int SSL_set1_initial_peer_addr(struct ssl_st* s, const union bio_addr_st* peer_addr);
struct ssl_st* SSL_get0_connection(struct ssl_st* s);
int SSL_is_connection(struct ssl_st* s);
int SSL_get_stream_type(struct ssl_st* s);
unsigned long  int SSL_get_stream_id(struct ssl_st* s);
int SSL_is_stream_local(struct ssl_st* s);
int SSL_set_default_stream_mode(struct ssl_st* s, unsigned int mode);
struct ssl_st* SSL_new_stream(struct ssl_st* s, unsigned long  int flags);
int SSL_set_incoming_stream_policy(struct ssl_st* s, int policy, unsigned long  int aec);
struct ssl_st* SSL_accept_stream(struct ssl_st* s, unsigned long  int flags);
unsigned long  int SSL_get_accept_stream_queue_len(struct ssl_st* s);
int SSL_inject_net_dgram(struct ssl_st* s, const unsigned char* buf, unsigned long  int buf_len, const union bio_addr_st* peer, const union bio_addr_st* local);
int SSL_shutdown_ex(struct ssl_st* ssl, unsigned long  int flags, const struct ssl_shutdown_ex_args_st* args, unsigned long  int args_len);
int SSL_stream_conclude(struct ssl_st* ssl, unsigned long  int flags);
int SSL_stream_reset(struct ssl_st* ssl, const struct ssl_stream_reset_args_st* args, unsigned long  int args_len);
int SSL_get_stream_read_state(struct ssl_st* ssl);
int SSL_get_stream_write_state(struct ssl_st* ssl);
int SSL_get_stream_read_error_code(struct ssl_st* ssl, unsigned long  int* app_error_code);
int SSL_get_stream_write_error_code(struct ssl_st* ssl, unsigned long  int* app_error_code);
int SSL_get_conn_close_info(struct ssl_st* ssl, struct ssl_conn_close_info_st* info, unsigned long  int info_len);
int SSL_get_value_uint(struct ssl_st* s, unsigned int class_, unsigned int id, unsigned long  int* v);
int SSL_set_value_uint(struct ssl_st* s, unsigned int class_, unsigned int id, unsigned long  int v);
int SSL_poll(struct ssl_poll_item_st* items, unsigned long  int num_items, unsigned long  int stride, const struct timeval* timeout, unsigned long  int flags, unsigned long  int* result_count);
int SSL_session_reused(const struct ssl_st* s);
int SSL_is_server(const struct ssl_st* s);
struct ssl_conf_ctx_st* SSL_CONF_CTX_new();
int SSL_CONF_CTX_finish(struct ssl_conf_ctx_st* cctx);
void SSL_CONF_CTX_free(struct ssl_conf_ctx_st* cctx);
unsigned int SSL_CONF_CTX_set_flags(struct ssl_conf_ctx_st* cctx, unsigned int flags);
unsigned int SSL_CONF_CTX_clear_flags(struct ssl_conf_ctx_st* cctx, unsigned int flags);
int SSL_CONF_CTX_set1_prefix(struct ssl_conf_ctx_st* cctx, const char* pre);
void SSL_CONF_CTX_set_ssl(struct ssl_conf_ctx_st* cctx, struct ssl_st* ssl);
void SSL_CONF_CTX_set_ssl_ctx(struct ssl_conf_ctx_st* cctx, struct ssl_ctx_st* ctx);
int SSL_CONF_cmd(struct ssl_conf_ctx_st* cctx, const char* cmd, const char* value);
int SSL_CONF_cmd_argv(struct ssl_conf_ctx_st* cctx, int* pargc, char*** pargv);
int SSL_CONF_cmd_value_type(struct ssl_conf_ctx_st* cctx, const char* cmd);
void SSL_add_ssl_module();
int SSL_config(struct ssl_st* s, const char* name);
int SSL_CTX_config(struct ssl_ctx_st* ctx, const char* name);
void SSL_trace(int write_p, int version, int content_type, const void* buf, unsigned long  int len, struct ssl_st* ssl, void* arg);
int DTLSv1_listen(struct ssl_st* s, union bio_addr_st* client);
int SSL_set_ct_validation_callback(struct ssl_st* s, int (*callback)(const struct ct_policy_eval_ctx_st*,const struct stack_st_SCT*,void*), void* arg);
int SSL_CTX_set_ct_validation_callback(struct ssl_ctx_st* ctx, int (*callback)(const struct ct_policy_eval_ctx_st*,const struct stack_st_SCT*,void*), void* arg);
int SSL_enable_ct(struct ssl_st* s, int validation_mode);
int SSL_CTX_enable_ct(struct ssl_ctx_st* ctx, int validation_mode);
int SSL_ct_is_enabled(const struct ssl_st* s);
int SSL_CTX_ct_is_enabled(const struct ssl_ctx_st* ctx);
const struct stack_st_SCT* SSL_get0_peer_scts(struct ssl_st* s);
int SSL_CTX_set_default_ctlog_list_file(struct ssl_ctx_st* ctx);
int SSL_CTX_set_ctlog_list_file(struct ssl_ctx_st* ctx, const char* path);
void SSL_CTX_set0_ctlog_store(struct ssl_ctx_st* ctx, struct ctlog_store_st* logs);
const struct ctlog_store_st* SSL_CTX_get0_ctlog_store(const struct ssl_ctx_st* ctx);
void SSL_set_security_level(struct ssl_st* s, int level);
int SSL_get_security_level(const struct ssl_st* s);
void SSL_set_security_callback(struct ssl_st* s, int (*cb)(const struct ssl_st*,const struct ssl_ctx_st*,int,int,int,void*,void*));
int (*SSL_get_security_callback(const struct ssl_st* _function_pointer_result_var_name_a65))(const struct ssl_st*,const struct ssl_ctx_st*,int,int,int,void*,void*);
void SSL_set0_security_ex_data(struct ssl_st* s, void* ex);
void* SSL_get0_security_ex_data(const struct ssl_st* s);
void SSL_CTX_set_security_level(struct ssl_ctx_st* ctx, int level);
int SSL_CTX_get_security_level(const struct ssl_ctx_st* ctx);
void SSL_CTX_set_security_callback(struct ssl_ctx_st* ctx, int (*cb)(const struct ssl_st*,const struct ssl_ctx_st*,int,int,int,void*,void*));
int (*SSL_CTX_get_security_callback(const struct ssl_ctx_st* _function_pointer_result_var_name_a66))(const struct ssl_st*,const struct ssl_ctx_st*,int,int,int,void*,void*);
void SSL_CTX_set0_security_ex_data(struct ssl_ctx_st* ctx, void* ex);
void* SSL_CTX_get0_security_ex_data(const struct ssl_ctx_st* ctx);
int OPENSSL_init_ssl(unsigned long  int opts, const struct ossl_init_settings_st* settings);
int SSL_free_buffers(struct ssl_st* ssl);
int SSL_alloc_buffers(struct ssl_st* ssl);
int SSL_CTX_set_session_ticket_cb(struct ssl_ctx_st* ctx, int (*gen_cb)(struct ssl_st*,void*), int (*dec_cb)(struct ssl_st*,struct ssl_session_st*,const unsigned char*,unsigned long  int,int,void*), void* arg);
int SSL_SESSION_set1_ticket_appdata(struct ssl_session_st* ss, const void* data, unsigned long  int len);
int SSL_SESSION_get0_ticket_appdata(struct ssl_session_st* ss, void** data, unsigned long  int* len);
void DTLS_set_timer_cb(struct ssl_st* s, unsigned int (*cb)(struct ssl_st*,unsigned int));
void SSL_CTX_set_allow_early_data_cb(struct ssl_ctx_st* ctx, int (*cb)(struct ssl_st*,void*), void* arg);
void SSL_set_allow_early_data_cb(struct ssl_st* s, int (*cb)(struct ssl_st*,void*), void* arg);
const char* OSSL_default_cipher_list();
const char* OSSL_default_ciphersuites();
int SSL_CTX_compress_certs(struct ssl_ctx_st* ctx, int alg);
int SSL_compress_certs(struct ssl_st* ssl, int alg);
int SSL_CTX_set1_cert_comp_preference(struct ssl_ctx_st* ctx, int* algs, unsigned long  int len);
int SSL_set1_cert_comp_preference(struct ssl_st* ssl, int* algs, unsigned long  int len);
int SSL_CTX_set1_compressed_cert(struct ssl_ctx_st* ctx, int algorithm, unsigned char* comp_data, unsigned long  int comp_length, unsigned long  int orig_length);
int SSL_set1_compressed_cert(struct ssl_st* ssl, int algorithm, unsigned char* comp_data, unsigned long  int comp_length, unsigned long  int orig_length);
unsigned long  int SSL_CTX_get1_compressed_cert(struct ssl_ctx_st* ctx, int alg, unsigned char** data, unsigned long  int* orig_len);
unsigned long  int SSL_get1_compressed_cert(struct ssl_st* ssl, int alg, unsigned char** data, unsigned long  int* orig_len);
int SSL_add_expected_rpk(struct ssl_st* s, struct evp_pkey_st* rpk);
struct evp_pkey_st* SSL_get0_peer_rpk(const struct ssl_st* s);
struct evp_pkey_st* SSL_SESSION_get0_peer_rpk(struct ssl_session_st* s);
int SSL_get_negotiated_client_cert_type(const struct ssl_st* s);
int SSL_get_negotiated_server_cert_type(const struct ssl_st* s);
int SSL_set1_client_cert_type(struct ssl_st* s, const unsigned char* val, unsigned long  int len);
int SSL_set1_server_cert_type(struct ssl_st* s, const unsigned char* val, unsigned long  int len);
int SSL_CTX_set1_client_cert_type(struct ssl_ctx_st* ctx, const unsigned char* val, unsigned long  int len);
int SSL_CTX_set1_server_cert_type(struct ssl_ctx_st* ctx, const unsigned char* val, unsigned long  int len);
int SSL_get0_client_cert_type(const struct ssl_st* s, unsigned char** t, unsigned long  int* len);
int SSL_get0_server_cert_type(const struct ssl_st* s, unsigned char** t, unsigned long  int* len);
int SSL_CTX_get0_client_cert_type(const struct ssl_ctx_st* ctx, unsigned char** t, unsigned long  int* len);
int SSL_CTX_get0_server_cert_type(const struct ssl_ctx_st* s, unsigned char** t, unsigned long  int* len);
void ERR_new();
void ERR_set_debug(const char* file, int line, const char* func);
void ERR_set_error(int lib, int reason, const char* fmt, ...);
void ERR_vset_error(int lib, int reason, const char* fmt, va_list args);
void ERR_set_error_data(char* data, int flags);
unsigned long  int ERR_get_error();
unsigned long  int ERR_get_error_all(const char** file, int* line, const char** func, const char** data, int* flags);
unsigned long  int ERR_get_error_line(const char** file, int* line);
unsigned long  int ERR_get_error_line_data(const char** file, int* line, const char** data, int* flags);
unsigned long  int ERR_peek_error();
unsigned long  int ERR_peek_error_line(const char** file, int* line);
unsigned long  int ERR_peek_error_func(const char** func);
unsigned long  int ERR_peek_error_data(const char** data, int* flags);
unsigned long  int ERR_peek_error_all(const char** file, int* line, const char** func, const char** data, int* flags);
unsigned long  int ERR_peek_error_line_data(const char** file, int* line, const char** data, int* flags);
unsigned long  int ERR_peek_last_error();
unsigned long  int ERR_peek_last_error_line(const char** file, int* line);
unsigned long  int ERR_peek_last_error_func(const char** func);
unsigned long  int ERR_peek_last_error_data(const char** data, int* flags);
unsigned long  int ERR_peek_last_error_all(const char** file, int* line, const char** func, const char** data, int* flags);
unsigned long  int ERR_peek_last_error_line_data(const char** file, int* line, const char** data, int* flags);
void ERR_clear_error();
char* ERR_error_string(unsigned long  int e, char* buf);
void ERR_error_string_n(unsigned long  int e, char* buf, unsigned long  int len);
const char* ERR_lib_error_string(unsigned long  int e);
const char* ERR_func_error_string(unsigned long  int e);
const char* ERR_reason_error_string(unsigned long  int e);
void ERR_print_errors_cb(int (*cb)(const char*,unsigned long  int,void*), void* u);
void ERR_print_errors(struct bio_st* bp);
void ERR_add_error_data(int num, ...);
void ERR_add_error_vdata(int num, va_list args);
void ERR_add_error_txt(const char* sepr, const char* txt);
void ERR_add_error_mem_bio(const char* sep, struct bio_st* bio);
int ERR_load_strings(int lib, struct ERR_string_data_st* str);
int ERR_load_strings_const(const struct ERR_string_data_st* str);
int ERR_unload_strings(int lib, struct ERR_string_data_st* str);
void ERR_remove_thread_state(void* anonymous_var_nameX1769);
void ERR_remove_state(unsigned long  int pid);
struct err_state_st* ERR_get_state();
int ERR_get_next_error_library();
int ERR_set_mark();
int ERR_pop_to_mark();
int ERR_clear_last_mark();
int ERR_count_to_mark();
int ERR_pop();
struct err_state_st* OSSL_ERR_STATE_new();
void OSSL_ERR_STATE_save(struct err_state_st* es);
void OSSL_ERR_STATE_save_to_mark(struct err_state_st* es);
void OSSL_ERR_STATE_restore(const struct err_state_st* es);
void OSSL_ERR_STATE_free(struct err_state_st* es);
int ma_net_init(struct st_net* net, struct st_ma_pvio* pvio);
void ma_net_end(struct st_net* net);
void ma_net_clear(struct st_net* net);
int ma_net_flush(struct st_net* net);
int ma_net_write(struct st_net* net, const unsigned char* packet, unsigned long  int len);
int ma_net_write_command(struct st_net* net, unsigned char command, const char* packet, unsigned long  int len, char disable_flush);
int ma_net_real_write(struct st_net* net, const char* packet, unsigned long  int len);
unsigned long  int ma_net_read(struct st_net* net);
char* ma_scramble_323(char* to, const char* message, const char* password);
void ma_scramble_41(const unsigned char* buffer, const char* scramble, const char* password);
void ma_hash_password(unsigned long  int* result, const char* password, unsigned long  int len);
void ma_make_scrambled_password(char* to, const char* password);
void mariadb_load_defaults(const char* conf_file, const char** groups, int* argc, char*** argv);
char ma_thread_init();
void ma_thread_end();
struct st_list* list_add(struct st_list* root, struct st_list* element);
struct st_list* list_delete(struct st_list* root, struct st_list* element);
struct st_list* list_cons(void* data, struct st_list* root);
struct st_list* list_reverse(struct st_list* root);
void list_free(struct st_list* root, unsigned int free_data);
unsigned int list_length(struct st_list* list);
int list_walk(struct st_list* list, int (*action)(void*,void*), char* argument);
int isalnum(int anonymous_var_nameX1772);
int isalpha(int anonymous_var_nameX1773);
int isblank(int anonymous_var_nameX1774);
int iscntrl(int anonymous_var_nameX1775);
int isdigit(int anonymous_var_nameX1776);
int isgraph(int anonymous_var_nameX1777);
int islower(int anonymous_var_nameX1778);
int isprint(int anonymous_var_nameX1779);
int ispunct(int anonymous_var_nameX1780);
int isspace(int anonymous_var_nameX1781);
int isupper(int anonymous_var_nameX1782);
int isxdigit(int anonymous_var_nameX1783);
int tolower(int anonymous_var_nameX1784);
int toupper(int anonymous_var_nameX1785);
int isalnum_l(int anonymous_var_nameX1787, struct __locale_struct* anonymous_var_nameX1788);
int isalpha_l(int anonymous_var_nameX1789, struct __locale_struct* anonymous_var_nameX1790);
int isblank_l(int anonymous_var_nameX1791, struct __locale_struct* anonymous_var_nameX1792);
int iscntrl_l(int anonymous_var_nameX1793, struct __locale_struct* anonymous_var_nameX1794);
int isdigit_l(int anonymous_var_nameX1795, struct __locale_struct* anonymous_var_nameX1796);
int isgraph_l(int anonymous_var_nameX1797, struct __locale_struct* anonymous_var_nameX1798);
int islower_l(int anonymous_var_nameX1799, struct __locale_struct* anonymous_var_nameX1800);
int isprint_l(int anonymous_var_nameX1801, struct __locale_struct* anonymous_var_nameX1802);
int ispunct_l(int anonymous_var_nameX1803, struct __locale_struct* anonymous_var_nameX1804);
int isspace_l(int anonymous_var_nameX1805, struct __locale_struct* anonymous_var_nameX1806);
int isupper_l(int anonymous_var_nameX1807, struct __locale_struct* anonymous_var_nameX1808);
int isxdigit_l(int anonymous_var_nameX1809, struct __locale_struct* anonymous_var_nameX1810);
int tolower_l(int anonymous_var_nameX1811, struct __locale_struct* anonymous_var_nameX1812);
int toupper_l(int anonymous_var_nameX1813, struct __locale_struct* anonymous_var_nameX1814);
int isascii(int anonymous_var_nameX1815);
int toascii(int anonymous_var_nameX1816);
struct ma_charset_info_st* find_compiled_charset(unsigned int cs_number);
struct ma_charset_info_st* find_compiled_charset_by_name(const char* name);
unsigned long  int mysql_cset_escape_quotes(const struct ma_charset_info_st* cset, char* newstr, const char* escapestr, unsigned long  int escapestr_len);
unsigned long  int mysql_cset_escape_slashes(const struct ma_charset_info_st* cset, char* newstr, const char* escapestr, unsigned long  int escapestr_len);
const char* madb_get_os_character_set();
int mariadb_field_attr(struct st_ma_const_string* attr, const struct st_mysql_field* field, enum mariadb_field_attr_t type);
unsigned long  int ma_net_safe_read(struct st_mysql* mysql);
void mysql_init_ps_subsystem();
unsigned long  int net_field_length(unsigned char** packet);
int ma_simple_command(struct st_mysql* mysql, enum enum_server_command command, const char* arg, unsigned long  int length, char skipp_check, void* opt_arg);
void stmt_set_error(struct st_mysql_stmt* stmt, unsigned int error_nr, const char* sqlstate, const char* format, ...);
struct st_mysql_stmt* mysql_stmt_init(struct st_mysql* mysql);
int mysql_stmt_prepare(struct st_mysql_stmt* stmt, const char* query, unsigned long  int length);
int mysql_stmt_execute(struct st_mysql_stmt* stmt);
int mysql_stmt_fetch(struct st_mysql_stmt* stmt);
int mysql_stmt_fetch_column(struct st_mysql_stmt* stmt, struct st_mysql_bind* bind_arg, unsigned int column, unsigned long  int offset);
int mysql_stmt_store_result(struct st_mysql_stmt* stmt);
unsigned long  int mysql_stmt_param_count(struct st_mysql_stmt* stmt);
char mysql_stmt_attr_set(struct st_mysql_stmt* stmt, enum enum_stmt_attr_type attr_type, const void* attr);
char mysql_stmt_attr_get(struct st_mysql_stmt* stmt, enum enum_stmt_attr_type attr_type, void* attr);
char mysql_stmt_bind_param(struct st_mysql_stmt* stmt, struct st_mysql_bind* bnd);
char mysql_stmt_bind_result(struct st_mysql_stmt* stmt, struct st_mysql_bind* bnd);
char mysql_stmt_close(struct st_mysql_stmt* stmt);
char mysql_stmt_reset(struct st_mysql_stmt* stmt);
char mysql_stmt_free_result(struct st_mysql_stmt* stmt);
char mysql_stmt_send_long_data(struct st_mysql_stmt* stmt, unsigned int param_number, const char* data, unsigned long  int length);
struct st_mysql_res* mysql_stmt_result_metadata(struct st_mysql_stmt* stmt);
struct st_mysql_res* mysql_stmt_param_metadata(struct st_mysql_stmt* stmt);
unsigned int mysql_stmt_errno(struct st_mysql_stmt* stmt);
const char* mysql_stmt_error(struct st_mysql_stmt* stmt);
const char* mysql_stmt_sqlstate(struct st_mysql_stmt* stmt);
struct st_mysql_rows* mysql_stmt_row_seek(struct st_mysql_stmt* stmt, struct st_mysql_rows* offset);
struct st_mysql_rows* mysql_stmt_row_tell(struct st_mysql_stmt* stmt);
void mysql_stmt_data_seek(struct st_mysql_stmt* stmt, unsigned long  long offset);
unsigned long  long mysql_stmt_num_rows(struct st_mysql_stmt* stmt);
unsigned long  long mysql_stmt_affected_rows(struct st_mysql_stmt* stmt);
unsigned long  long mysql_stmt_insert_id(struct st_mysql_stmt* stmt);
unsigned int mysql_stmt_field_count(struct st_mysql_stmt* stmt);
int mysql_stmt_next_result(struct st_mysql_stmt* stmt);
char mysql_stmt_more_results(struct st_mysql_stmt* stmt);
int mariadb_stmt_execute_direct(struct st_mysql_stmt* stmt, const char* stmt_str, unsigned long  int length);
struct st_mysql_field* mariadb_stmt_fetch_fields(struct st_mysql_stmt* stmt);
struct st_mysql_client_plugin* mysql_load_plugin(struct st_mysql* mysql, const char* name, int type, int argc, ...);
struct st_mysql_client_plugin* mysql_load_plugin_v(struct st_mysql* mysql, const char* name, int type, int argc, va_list args);
struct st_mysql_client_plugin* mysql_client_find_plugin(struct st_mysql* mysql, const char* name, int type);
struct st_mysql_client_plugin* mysql_client_register_plugin(struct st_mysql* mysql, struct st_mysql_client_plugin* plugin);
void mysql_set_local_infile_handler(struct st_mysql* mysql, int (*local_infile_init)(void**,const char*,void*), int (*local_infile_read)(void*,char*,unsigned int), void (*local_infile_end)(void*), int (*local_infile_error)(void*,char*,unsigned int), void* anonymous_var_nameX1866);
void mysql_set_local_infile_default(struct st_mysql* mysql);
void my_set_error(struct st_mysql* mysql, unsigned int error_nr, const char* sqlstate, const char* format, ...);
unsigned long  long mysql_num_rows(struct st_mysql_res* res);
unsigned int mysql_num_fields(struct st_mysql_res* res);
char mysql_eof(struct st_mysql_res* res);
struct st_mysql_field* mysql_fetch_field_direct(struct st_mysql_res* res, unsigned int fieldnr);
struct st_mysql_field* mysql_fetch_fields(struct st_mysql_res* res);
struct st_mysql_rows* mysql_row_tell(struct st_mysql_res* res);
unsigned int mysql_field_tell(struct st_mysql_res* res);
unsigned int mysql_field_count(struct st_mysql* mysql);
char mysql_more_results(struct st_mysql* mysql);
int mysql_next_result(struct st_mysql* mysql);
unsigned long  long mysql_affected_rows(struct st_mysql* mysql);
char mysql_autocommit(struct st_mysql* mysql, char mode);
char mysql_commit(struct st_mysql* mysql);
char mysql_rollback(struct st_mysql* mysql);
unsigned long  long mysql_insert_id(struct st_mysql* mysql);
unsigned int mysql_errno(struct st_mysql* mysql);
const char* mysql_error(struct st_mysql* mysql);
const char* mysql_info(struct st_mysql* mysql);
unsigned long  int mysql_thread_id(struct st_mysql* mysql);
const char* mysql_character_set_name(struct st_mysql* mysql);
void mysql_get_character_set_info(struct st_mysql* mysql, struct character_set* cs);
int mysql_set_character_set(struct st_mysql* mysql, const char* csname);
char mariadb_get_infov(struct st_mysql* mysql, enum mariadb_value value, void* arg, ...);
char mariadb_get_info(struct st_mysql* mysql, enum mariadb_value value, void* arg);
struct st_mysql* mysql_init(struct st_mysql* mysql);
int mysql_ssl_set(struct st_mysql* mysql, const char* key, const char* cert, const char* ca, const char* capath, const char* cipher);
const char* mysql_get_ssl_cipher(struct st_mysql* mysql);
char mysql_change_user(struct st_mysql* mysql, const char* user, const char* passwd, const char* db);
struct st_mysql* mysql_real_connect(struct st_mysql* mysql, const char* host, const char* user, const char* passwd, const char* db, unsigned int port, const char* unix_socket, unsigned long  int clientflag);
void mysql_close(struct st_mysql* sock);
int mysql_select_db(struct st_mysql* mysql, const char* db);
int mysql_query(struct st_mysql* mysql, const char* q);
int mysql_send_query(struct st_mysql* mysql, const char* q, unsigned long  int length);
char mysql_read_query_result(struct st_mysql* mysql);
int mysql_real_query(struct st_mysql* mysql, const char* q, unsigned long  int length);
int mysql_shutdown(struct st_mysql* mysql, enum mysql_enum_shutdown_level shutdown_level);
int mysql_dump_debug_info(struct st_mysql* mysql);
int mysql_refresh(struct st_mysql* mysql, unsigned int refresh_options);
int mysql_kill(struct st_mysql* mysql, unsigned long  int pid);
int mysql_ping(struct st_mysql* mysql);
char* mysql_stat(struct st_mysql* mysql);
char* mysql_get_server_info(struct st_mysql* mysql);
unsigned long  int mysql_get_server_version(struct st_mysql* mysql);
char* mysql_get_host_info(struct st_mysql* mysql);
unsigned int mysql_get_proto_info(struct st_mysql* mysql);
struct st_mysql_res* mysql_list_dbs(struct st_mysql* mysql, const char* wild);
struct st_mysql_res* mysql_list_tables(struct st_mysql* mysql, const char* wild);
struct st_mysql_res* mysql_list_fields(struct st_mysql* mysql, const char* table, const char* wild);
struct st_mysql_res* mysql_list_processes(struct st_mysql* mysql);
struct st_mysql_res* mysql_store_result(struct st_mysql* mysql);
struct st_mysql_res* mysql_use_result(struct st_mysql* mysql);
int mysql_options(struct st_mysql* mysql, enum mysql_option option, const void* arg);
int mysql_options4(struct st_mysql* mysql, enum mysql_option option, const void* arg1, const void* arg2);
void mysql_free_result(struct st_mysql_res* result);
void mysql_data_seek(struct st_mysql_res* result, unsigned long  long offset);
struct st_mysql_rows* mysql_row_seek(struct st_mysql_res* result, struct st_mysql_rows* anonymous_var_nameX1867);
unsigned int mysql_field_seek(struct st_mysql_res* result, unsigned int offset);
char** mysql_fetch_row(struct st_mysql_res* result);
unsigned long  int* mysql_fetch_lengths(struct st_mysql_res* result);
struct st_mysql_field* mysql_fetch_field(struct st_mysql_res* result);
unsigned long  int mysql_escape_string(char* to, const char* from, unsigned long  int from_length);
unsigned long  int mysql_real_escape_string(struct st_mysql* mysql, char* to, const char* from, unsigned long  int length);
unsigned int mysql_thread_safe();
unsigned int mysql_warning_count(struct st_mysql* mysql);
const char* mysql_sqlstate(struct st_mysql* mysql);
int mysql_server_init(int argc, char** argv, char** groups);
void mysql_server_end();
void mysql_thread_end();
char mysql_thread_init();
int mysql_set_server_option(struct st_mysql* mysql, enum enum_mysql_set_option option);
const char* mysql_get_client_info();
unsigned long  int mysql_get_client_version();
char mariadb_connection(struct st_mysql* mysql);
const char* mysql_get_server_name(struct st_mysql* mysql);
struct ma_charset_info_st* mariadb_get_charset_by_name(const char* csname);
struct ma_charset_info_st* mariadb_get_charset_by_nr(unsigned int csnr);
unsigned long  int mariadb_convert_string(const char* from, unsigned long  int* from_len, struct ma_charset_info_st* from_cs, char* to, unsigned long  int* to_len, struct ma_charset_info_st* to_cs, int* errorcode);
int mysql_optionsv(struct st_mysql* mysql, enum mysql_option option, ...);
int mysql_get_optionv(struct st_mysql* mysql, enum mysql_option option, void* arg, ...);
int mysql_get_option(struct st_mysql* mysql, enum mysql_option option, void* arg);
unsigned long  int mysql_hex_string(char* to, const char* from, unsigned long  int len);
int mysql_get_socket(struct st_mysql* mysql);
unsigned int mysql_get_timeout_value(const struct st_mysql* mysql);
unsigned int mysql_get_timeout_value_ms(const struct st_mysql* mysql);
char mariadb_reconnect(struct st_mysql* mysql);
int mariadb_cancel(struct st_mysql* mysql);
void mysql_debug(const char* debug);
unsigned long  int mysql_net_read_packet(struct st_mysql* mysql);
unsigned long  int mysql_net_field_length(unsigned char** packet);
char mysql_embedded();
struct anonymous_typeX49* mysql_get_parameters();
int mysql_close_start(struct st_mysql* sock);
int mysql_close_cont(struct st_mysql* sock, int status);
int mysql_commit_start(char* ret, struct st_mysql* mysql);
int mysql_commit_cont(char* ret, struct st_mysql* mysql, int status);
int mysql_dump_debug_info_cont(int* ret, struct st_mysql* mysql, int ready_status);
int mysql_dump_debug_info_start(int* ret, struct st_mysql* mysql);
int mysql_rollback_start(char* ret, struct st_mysql* mysql);
int mysql_rollback_cont(char* ret, struct st_mysql* mysql, int status);
int mysql_autocommit_start(char* ret, struct st_mysql* mysql, char auto_mode);
int mysql_list_fields_cont(struct st_mysql_res** ret, struct st_mysql* mysql, int ready_status);
int mysql_list_fields_start(struct st_mysql_res** ret, struct st_mysql* mysql, const char* table, const char* wild);
int mysql_autocommit_cont(char* ret, struct st_mysql* mysql, int status);
int mysql_next_result_start(int* ret, struct st_mysql* mysql);
int mysql_next_result_cont(int* ret, struct st_mysql* mysql, int status);
int mysql_select_db_start(int* ret, struct st_mysql* mysql, const char* db);
int mysql_select_db_cont(int* ret, struct st_mysql* mysql, int ready_status);
int mysql_stmt_warning_count(struct st_mysql_stmt* stmt);
int mysql_stmt_next_result_start(int* ret, struct st_mysql_stmt* stmt);
int mysql_stmt_next_result_cont(int* ret, struct st_mysql_stmt* stmt, int status);
int mysql_set_character_set_start(int* ret, struct st_mysql* mysql, const char* csname);
int mysql_set_character_set_cont(int* ret, struct st_mysql* mysql, int status);
int mysql_change_user_start(char* ret, struct st_mysql* mysql, const char* user, const char* passwd, const char* db);
int mysql_change_user_cont(char* ret, struct st_mysql* mysql, int status);
int mysql_real_connect_start(struct st_mysql** ret, struct st_mysql* mysql, const char* host, const char* user, const char* passwd, const char* db, unsigned int port, const char* unix_socket, unsigned long  int clientflag);
int mysql_real_connect_cont(struct st_mysql** ret, struct st_mysql* mysql, int status);
int mysql_query_start(int* ret, struct st_mysql* mysql, const char* q);
int mysql_query_cont(int* ret, struct st_mysql* mysql, int status);
int mysql_send_query_start(int* ret, struct st_mysql* mysql, const char* q, unsigned long  int length);
int mysql_send_query_cont(int* ret, struct st_mysql* mysql, int status);
int mysql_real_query_start(int* ret, struct st_mysql* mysql, const char* q, unsigned long  int length);
int mysql_real_query_cont(int* ret, struct st_mysql* mysql, int status);
int mysql_store_result_start(struct st_mysql_res** ret, struct st_mysql* mysql);
int mysql_store_result_cont(struct st_mysql_res** ret, struct st_mysql* mysql, int status);
int mysql_shutdown_start(int* ret, struct st_mysql* mysql, enum mysql_enum_shutdown_level shutdown_level);
int mysql_shutdown_cont(int* ret, struct st_mysql* mysql, int status);
int mysql_refresh_start(int* ret, struct st_mysql* mysql, unsigned int refresh_options);
int mysql_refresh_cont(int* ret, struct st_mysql* mysql, int status);
int mysql_kill_start(int* ret, struct st_mysql* mysql, unsigned long  int pid);
int mysql_kill_cont(int* ret, struct st_mysql* mysql, int status);
int mysql_set_server_option_start(int* ret, struct st_mysql* mysql, enum enum_mysql_set_option option);
int mysql_set_server_option_cont(int* ret, struct st_mysql* mysql, int status);
int mysql_ping_start(int* ret, struct st_mysql* mysql);
int mysql_ping_cont(int* ret, struct st_mysql* mysql, int status);
int mysql_stat_start(const char** ret, struct st_mysql* mysql);
int mysql_stat_cont(const char** ret, struct st_mysql* mysql, int status);
int mysql_free_result_start(struct st_mysql_res* result);
int mysql_free_result_cont(struct st_mysql_res* result, int status);
int mysql_fetch_row_start(char*** ret, struct st_mysql_res* result);
int mysql_fetch_row_cont(char*** ret, struct st_mysql_res* result, int status);
int mysql_read_query_result_start(char* ret, struct st_mysql* mysql);
int mysql_read_query_result_cont(char* ret, struct st_mysql* mysql, int status);
int mysql_reset_connection_start(int* ret, struct st_mysql* mysql);
int mysql_reset_connection_cont(int* ret, struct st_mysql* mysql, int status);
int mysql_session_track_get_next(struct st_mysql* mysql, enum enum_session_state_type type, const char** data, unsigned long  int* length);
int mysql_session_track_get_first(struct st_mysql* mysql, enum enum_session_state_type type, const char** data, unsigned long  int* length);
int mysql_stmt_prepare_start(int* ret, struct st_mysql_stmt* stmt, const char* query, unsigned long  int length);
int mysql_stmt_prepare_cont(int* ret, struct st_mysql_stmt* stmt, int status);
int mysql_stmt_execute_start(int* ret, struct st_mysql_stmt* stmt);
int mysql_stmt_execute_cont(int* ret, struct st_mysql_stmt* stmt, int status);
int mysql_stmt_fetch_start(int* ret, struct st_mysql_stmt* stmt);
int mysql_stmt_fetch_cont(int* ret, struct st_mysql_stmt* stmt, int status);
int mysql_stmt_store_result_start(int* ret, struct st_mysql_stmt* stmt);
int mysql_stmt_store_result_cont(int* ret, struct st_mysql_stmt* stmt, int status);
int mysql_stmt_close_start(char* ret, struct st_mysql_stmt* stmt);
int mysql_stmt_close_cont(char* ret, struct st_mysql_stmt* stmt, int status);
int mysql_stmt_reset_start(char* ret, struct st_mysql_stmt* stmt);
int mysql_stmt_reset_cont(char* ret, struct st_mysql_stmt* stmt, int status);
int mysql_stmt_free_result_start(char* ret, struct st_mysql_stmt* stmt);
int mysql_stmt_free_result_cont(char* ret, struct st_mysql_stmt* stmt, int status);
int mysql_stmt_send_long_data_start(char* ret, struct st_mysql_stmt* stmt, unsigned int param_number, const char* data, unsigned long  int len);
int mysql_stmt_send_long_data_cont(char* ret, struct st_mysql_stmt* stmt, int status);
int mysql_reset_connection(struct st_mysql* mysql);
int socket_fd_write(int self, char* str);
int server_socket(int port, int socket_family, int socket_type, int protocol, _Bool reuse, void* parent, void (*block)(void*,int,_Bool*,_Bool*));
static void sockaddr_in_finalize(struct sockaddr_in* self);
int client_socket(int port, char* address, void* parent, void (*block)(void*,int,_Bool*));
char* client_socket2(int port, char* data, char* address);
int httpd_socket(int port, int socket_family, int socket_type, int protocol, _Bool reuse, void* parent, void (*block)(void*,int,_Bool*));
void ERR_print_errors_fp(struct _IO_FILE* f);
int httpsd_socket(int port, _Bool reuse, void* parent, void (*block)(void*,struct ssl_st*,_Bool*));
int come_mysql_init();
void come_mysql_final();
int finish_with_error();
int create_user_if_not_exists(char* user, char* password, char* root_password, char* host_name);
int create_database_if_not_exists(char* database_name, char* user_name, char* password, char* host_name);
int xmysql_query(char* query, char* user, char* password, _Bool create_user, _Bool create_database, char* root_password, char* database_name, char* host_name);
struct list$1list$1charphph* xmysql_query_and_fetch_row(char* query, char* user, char* password, _Bool create_user, _Bool create_database, char* root_password, char* database_name, char* host_name);
static struct list$1list$1charphph* list$1list$1charphph_initialize(struct list$1list$1charphph* self);
static void list$1list$1charphphp_finalize(struct list$1list$1charphph* self);
static void list_item$1list$1charphphp_finalize(struct list_item$1list$1charphph* self);
static void list$1charph_finalize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static struct list$1list$1charphph* list$1list$1charphph_add(struct list$1list$1charphph* self, struct list$1charph* item);
// uniq global variable
// inline function
static _Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return (_Bool)0;
}
static unsigned char* buffer_head_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
unsigned char* __result52__;
    __result52__ = gComeFunResultObject = __result_obj__ = self->buf;
    gComeFunResultObject = (void*)0;
    return __result52__;
}
static struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_109;
struct buffer* __result53__;
    result_109=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3641, "buffer"))));
    buffer_append(result_109,self,sizeof(char)*len);
    __result53__ = gComeFunResultObject = __result_obj__ = result_109;
    /*i*/come_call_finalizer3(result_109,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_110;
int i_111;
struct buffer* __result54__;
    result_110=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3648, "buffer"))));
    for(    i_111=0;    i_111<len;    i_111++    ){
        buffer_append(result_110,self[i_111],strlen(self[i_111]));
    }
    __result54__ = gComeFunResultObject = __result_obj__ = result_110;
    /*i*/come_call_finalizer3(result_110,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result54__;
}
static struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_112;
struct buffer* __result55__;
    result_112=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3657, "buffer"))));
    buffer_append(result_112,(char*)self,sizeof(short)*len);
    __result55__ = gComeFunResultObject = __result_obj__ = result_112;
    /*i*/come_call_finalizer3(result_112,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_113;
struct buffer* __result56__;
    result_113=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3664, "buffer"))));
    buffer_append(result_113,(char*)self,sizeof(int)*len);
    __result56__ = gComeFunResultObject = __result_obj__ = result_113;
    /*i*/come_call_finalizer3(result_113,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result56__;
}
static struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_114;
struct buffer* __result57__;
    result_114=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3671, "buffer"))));
    buffer_append(result_114,(char*)self,sizeof(long)*len);
    __result57__ = gComeFunResultObject = __result_obj__ = result_114;
    /*i*/come_call_finalizer3(result_114,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_115;
struct buffer* __result58__;
    result_115=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3678, "buffer"))));
    buffer_append(result_115,(char*)self,sizeof(float)*len);
    __result58__ = gComeFunResultObject = __result_obj__ = result_115;
    /*i*/come_call_finalizer3(result_115,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result58__;
}
static struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* result_116;
struct buffer* __result59__;
    result_116=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3685, "buffer"))));
    buffer_append(result_116,(char*)self,sizeof(double)*len);
    __result59__ = gComeFunResultObject = __result_obj__ = result_116;
    /*i*/come_call_finalizer3(result_116,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result59__;
}
static struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value48 = (void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct smart_pointer$1char* __result62__;
    __result62__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value50=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4013, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value50,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result62__;
}
static struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
struct smart_pointer$1char* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value53=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4018, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value53,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value54 = (void*)0;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
struct smart_pointer$1short* __result65__;
    __result65__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value56=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4023, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value56,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result65__;
}
static struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
struct smart_pointer$1int* __result67__;
    __result67__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value59=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4028, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value59,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result67__;
}
static struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value60 = (void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct smart_pointer$1long* __result69__;
    __result69__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value62=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4033, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value62,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result69__;
}
static struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct buffer* buf_122;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct smart_pointer$1char* __result70__;
    buf_122=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4066, "buffer"))));
    buffer_append(buf_122,(char*)self,sizeof(char)*len);
    __result70__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value66=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4068, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_122))));
    /*i*/come_call_finalizer3(buf_122,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value66,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result70__;
}
static struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct buffer* buf_123;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct smart_pointer$1charp* __result72__;
    buf_123=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4073, "buffer"))));
    buffer_append(buf_123,(char*)self,sizeof(char*)*len);
    __result72__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value70=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 4075, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_123))));
    /*i*/come_call_finalizer3(buf_123,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value70,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result72__;
}
static struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
struct buffer* buf_124;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct smart_pointer$1short* __result73__;
    buf_124=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4080, "buffer"))));
    buffer_append(buf_124,(char*)self,sizeof(short)*len);
    __result73__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value74=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4082, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_124))));
    /*i*/come_call_finalizer3(buf_124,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value74,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result73__;
}
static struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct buffer* buf_125;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct smart_pointer$1int* __result74__;
    buf_125=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4087, "buffer"))));
    buffer_append(buf_125,(char*)self,sizeof(int)*len);
    __result74__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value78=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4089, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_125))));
    /*i*/come_call_finalizer3(buf_125,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value78,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result74__;
}
static struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct buffer* buf_126;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
struct smart_pointer$1long* __result75__;
    buf_126=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4094, "buffer"))));
    buffer_append(buf_126,(char*)self,sizeof(long)*len);
    __result75__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value82=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4096, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_126))));
    /*i*/come_call_finalizer3(buf_126,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value82,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result75__;
}
static struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct buffer* buf_127;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct smart_pointer$1float* __result77__;
    buf_127=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4101, "buffer"))));
    buffer_append(buf_127,(char*)self,sizeof(float)*len);
    __result77__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value86=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 4103, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_127))));
    /*i*/come_call_finalizer3(buf_127,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value86,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result77__;
}
static struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
struct buffer* buf_128;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
struct smart_pointer$1double* __result79__;
    buf_128=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4108, "buffer"))));
    buffer_append(buf_128,(char*)self,sizeof(double)*len);
    __result79__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value90=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 4110, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_128))));
    /*i*/come_call_finalizer3(buf_128,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value90,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result79__;
}
static struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value91 = (void*)0;
void* __right_value95 = (void*)0;
struct list$1char* __result82__;
    __result82__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value95=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 4115, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value95,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result82__;
}
static struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value96 = (void*)0;
void* __right_value100 = (void*)0;
struct list$1charp* __result85__;
    __result85__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value100=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 4120, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value100,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result85__;
}
static struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value101 = (void*)0;
void* __right_value105 = (void*)0;
struct list$1short* __result88__;
    __result88__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value105=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 4125, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value105,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result88__;
}
static struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value106 = (void*)0;
void* __right_value110 = (void*)0;
struct list$1int* __result91__;
    __result91__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value110=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 4130, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value110,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result91__;
}
static struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value111 = (void*)0;
void* __right_value115 = (void*)0;
struct list$1long* __result94__;
    __result94__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value115=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 4135, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value115,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result94__;
}
static struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value116 = (void*)0;
void* __right_value120 = (void*)0;
struct list$1float* __result97__;
    __result97__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value120=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 4140, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value120,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result97__;
}
static struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value121 = (void*)0;
void* __right_value125 = (void*)0;
struct list$1double* __result100__;
    __result100__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value125=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 4145, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value125,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result100__;
}
static struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value126 = (void*)0;
void* __right_value128 = (void*)0;
struct vector$1char* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value128=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 4150, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value128,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}
static struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value129 = (void*)0;
void* __right_value131 = (void*)0;
struct vector$1charp* __result104__;
    __result104__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value131=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 4155, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value131,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result104__;
}
static struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value132 = (void*)0;
void* __right_value134 = (void*)0;
struct vector$1short* __result106__;
    __result106__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value134=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 4160, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value134,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result106__;
}
static struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value135 = (void*)0;
void* __right_value137 = (void*)0;
struct vector$1int* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value137=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 4165, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value137,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result108__;
}
static struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value138 = (void*)0;
void* __right_value140 = (void*)0;
struct vector$1long* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value140=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 4170, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value140,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}
static struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value141 = (void*)0;
void* __right_value143 = (void*)0;
struct vector$1float* __result112__;
    __result112__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value143=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 4175, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value143,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result112__;
}
static struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value144 = (void*)0;
void* __right_value146 = (void*)0;
struct vector$1double* __result114__;
    __result114__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value146=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 4180, "vector$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value146,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result114__;
}
static unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static _Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_186;
int i_187;
    result_186=(_Bool)0;
    for(    i_187=0;    i_187<len;    i_187++    ){
        if(        strncmp(self[i_187],str,strlen(self[i_187]))==0) {
            result_186=(_Bool)1;
            break;
        }
    }
    return result_186;
}
static unsigned long  int shortpa_length(short* self, unsigned long  int len){
    return len;
}
static unsigned long  int intpa_length(int* self, unsigned long  int len){
    return len;
}
static unsigned long  int longpa_length(long* self, unsigned long  int len){
    return len;
}
static unsigned long  int floatpa_length(float* self, unsigned long  int len){
    return len;
}
static unsigned long  int doublepa_length(double* self, unsigned long  int len){
    return len;
}
static char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value220 = (void*)0;
char* __result168__;
    __result168__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value220=xsprintf(msg,self)));
    /* U11 */__right_value220 = come_decrement_ref_count2(__right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result168__;
}
static char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value221 = (void*)0;
char* __result169__;
    __result169__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value221=xsprintf(msg,self)));
    /* U11 */__right_value221 = come_decrement_ref_count2(__right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result169__;
}
static char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value222 = (void*)0;
char* __result170__;
    __result170__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value222=xsprintf(msg,self)));
    /* U11 */__right_value222 = come_decrement_ref_count2(__right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result170__;
}
static char* string_printable(char* str){
void* __result_obj__=(void*)0;
void* __right_value224 = (void*)0;
char* __result172__;
    __result172__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value224=string_printable(str)));
    /* U11 */__right_value224 = come_decrement_ref_count2(__right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result172__;
}
static unsigned short int __bswap16(unsigned short int __x){
    return __x<<8|__x>>8;
}
static unsigned int __bswap32(unsigned int __x){
    return __x>>24|__x>>8&65280|__x<<8&16711680|__x<<24;
}
static unsigned long  int __bswap64(unsigned long  int __x){
    return __bswap32(__x)+0<<32|__bswap32(__x>>32);
}
static char* ossl_check_OPENSSL_STRING_type(char* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_OPENSSL_STRING_sk_type(const struct stack_st_OPENSSL_STRING* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_OPENSSL_STRING_sk_type(struct stack_st_OPENSSL_STRING* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_OPENSSL_STRING_compfunc_type(int (*cmp)(const char**,const char**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_OPENSSL_STRING_copyfunc_type(char* (*cpy)(const char*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_OPENSSL_STRING_freefunc_type(void (*fr)(char*)))(void*){
    return (void (*)(void*))fr;
}
static const char* ossl_check_OPENSSL_CSTRING_type(const char* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_OPENSSL_CSTRING_sk_type(const struct stack_st_OPENSSL_CSTRING* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_OPENSSL_CSTRING_sk_type(struct stack_st_OPENSSL_CSTRING* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_OPENSSL_CSTRING_compfunc_type(int (*cmp)(const char**,const char**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_OPENSSL_CSTRING_copyfunc_type(char* (*cpy)(const char*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_OPENSSL_CSTRING_freefunc_type(void (*fr)(char*)))(void*){
    return (void (*)(void*))fr;
}
static void* ossl_check_OPENSSL_BLOCK_type(void* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_OPENSSL_BLOCK_sk_type(const struct stack_st_OPENSSL_BLOCK* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_OPENSSL_BLOCK_sk_type(struct stack_st_OPENSSL_BLOCK* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_OPENSSL_BLOCK_compfunc_type(int (*cmp)(const void**,const void**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_OPENSSL_BLOCK_copyfunc_type(void* (*cpy)(const void*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_OPENSSL_BLOCK_freefunc_type(void (*fr)(void*)))(void*){
    return (void (*)(void*))fr;
}
static void* ossl_check_void_type(void* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_void_sk_type(const struct stack_st_void* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_void_sk_type(struct stack_st_void* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_void_compfunc_type(int (*cmp)(const void**,const void**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_void_copyfunc_type(void* (*cpy)(const void*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_void_freefunc_type(void (*fr)(void*)))(void*){
    return (void (*)(void*))fr;
}
static void __CPU_AND_S(unsigned long  int __size, struct cpu_set_t* __dest, const struct cpu_set_t* __src1, const struct cpu_set_t* __src2){
unsigned long  int __i_271;
memset(&__i_271, 0, sizeof(unsigned long  int));
    for(    __i_271=0;    __i_271<__size/sizeof(long);    __i_271++    ){
        ((unsigned long  int*)__dest)[__i_271]=((unsigned long  int*)__src1)[__i_271]&((unsigned long  int*)__src2)[__i_271];
    }
}
static void __CPU_OR_S(unsigned long  int __size, struct cpu_set_t* __dest, const struct cpu_set_t* __src1, const struct cpu_set_t* __src2){
unsigned long  int __i_272;
memset(&__i_272, 0, sizeof(unsigned long  int));
    for(    __i_272=0;    __i_272<__size/sizeof(long);    __i_272++    ){
        ((unsigned long  int*)__dest)[__i_272]=((unsigned long  int*)__src1)[__i_272]|((unsigned long  int*)__src2)[__i_272];
    }
}
static void __CPU_XOR_S(unsigned long  int __size, struct cpu_set_t* __dest, const struct cpu_set_t* __src1, const struct cpu_set_t* __src2){
unsigned long  int __i_273;
memset(&__i_273, 0, sizeof(unsigned long  int));
    for(    __i_273=0;    __i_273<__size/sizeof(long);    __i_273++    ){
        ((unsigned long  int*)__dest)[__i_273]=((unsigned long  int*)__src1)[__i_273]^((unsigned long  int*)__src2)[__i_273];
    }
}
static struct bio_st* ossl_check_BIO_type(struct bio_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_BIO_sk_type(const struct stack_st_BIO* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_BIO_sk_type(struct stack_st_BIO* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_BIO_compfunc_type(int (*cmp)(const struct bio_st**,const struct bio_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_BIO_copyfunc_type(struct bio_st* (*cpy)(const struct bio_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_BIO_freefunc_type(void (*fr)(struct bio_st*)))(void*){
    return (void (*)(void*))fr;
}
static const struct ossl_param_st* (*OSSL_FUNC_core_gettable_params(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*){
    return (const struct ossl_param_st* (*)(const struct ossl_core_handle_st*))opf->function;
}
static int (*OSSL_FUNC_core_get_params(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*,struct ossl_param_st*){
    return (int (*)(const struct ossl_core_handle_st*,struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_core_thread_start(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*,void (*)(void*),void*){
    return (int (*)(const struct ossl_core_handle_st*,void (*)(void*),void*))opf->function;
}
static struct openssl_core_ctx_st* (*OSSL_FUNC_core_get_libctx(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*){
    return (struct openssl_core_ctx_st* (*)(const struct ossl_core_handle_st*))opf->function;
}
static void (*OSSL_FUNC_core_new_error(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*){
    return (void (*)(const struct ossl_core_handle_st*))opf->function;
}
static void (*OSSL_FUNC_core_set_error_debug(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*,const char*,int,const char*){
    return (void (*)(const struct ossl_core_handle_st*,const char*,int,const char*))opf->function;
}
static void (*OSSL_FUNC_core_vset_error(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*,unsigned int,const char*,va_list){
    return (void (*)(const struct ossl_core_handle_st*,unsigned int,const char*,va_list))opf->function;
}
static int (*OSSL_FUNC_core_set_error_mark(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*){
    return (int (*)(const struct ossl_core_handle_st*))opf->function;
}
static int (*OSSL_FUNC_core_clear_last_error_mark(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*){
    return (int (*)(const struct ossl_core_handle_st*))opf->function;
}
static int (*OSSL_FUNC_core_pop_error_to_mark(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*){
    return (int (*)(const struct ossl_core_handle_st*))opf->function;
}
static int (*OSSL_FUNC_core_obj_add_sigid(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*,const char*,const char*,const char*){
    return (int (*)(const struct ossl_core_handle_st*,const char*,const char*,const char*))opf->function;
}
static int (*OSSL_FUNC_core_obj_create(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*,const char*,const char*,const char*){
    return (int (*)(const struct ossl_core_handle_st*,const char*,const char*,const char*))opf->function;
}
static void* (*OSSL_FUNC_CRYPTO_malloc(const struct ossl_dispatch_st* opf))(unsigned long  int,const char*,int){
    return (void* (*)(unsigned long  int,const char*,int))opf->function;
}
static void* (*OSSL_FUNC_CRYPTO_zalloc(const struct ossl_dispatch_st* opf))(unsigned long  int,const char*,int){
    return (void* (*)(unsigned long  int,const char*,int))opf->function;
}
static void (*OSSL_FUNC_CRYPTO_free(const struct ossl_dispatch_st* opf))(void*,const char*,int){
    return (void (*)(void*,const char*,int))opf->function;
}
static void (*OSSL_FUNC_CRYPTO_clear_free(const struct ossl_dispatch_st* opf))(void*,unsigned long  int,const char*,int){
    return (void (*)(void*,unsigned long  int,const char*,int))opf->function;
}
static void* (*OSSL_FUNC_CRYPTO_realloc(const struct ossl_dispatch_st* opf))(void*,unsigned long  int,const char*,int){
    return (void* (*)(void*,unsigned long  int,const char*,int))opf->function;
}
static void* (*OSSL_FUNC_CRYPTO_clear_realloc(const struct ossl_dispatch_st* opf))(void*,unsigned long  int,unsigned long  int,const char*,int){
    return (void* (*)(void*,unsigned long  int,unsigned long  int,const char*,int))opf->function;
}
static void* (*OSSL_FUNC_CRYPTO_secure_malloc(const struct ossl_dispatch_st* opf))(unsigned long  int,const char*,int){
    return (void* (*)(unsigned long  int,const char*,int))opf->function;
}
static void* (*OSSL_FUNC_CRYPTO_secure_zalloc(const struct ossl_dispatch_st* opf))(unsigned long  int,const char*,int){
    return (void* (*)(unsigned long  int,const char*,int))opf->function;
}
static void (*OSSL_FUNC_CRYPTO_secure_free(const struct ossl_dispatch_st* opf))(void*,const char*,int){
    return (void (*)(void*,const char*,int))opf->function;
}
static void (*OSSL_FUNC_CRYPTO_secure_clear_free(const struct ossl_dispatch_st* opf))(void*,unsigned long  int,const char*,int){
    return (void (*)(void*,unsigned long  int,const char*,int))opf->function;
}
static int (*OSSL_FUNC_CRYPTO_secure_allocated(const struct ossl_dispatch_st* opf))(const void*){
    return (int (*)(const void*))opf->function;
}
static void (*OSSL_FUNC_OPENSSL_cleanse(const struct ossl_dispatch_st* opf))(void*,unsigned long  int){
    return (void (*)(void*,unsigned long  int))opf->function;
}
static struct ossl_core_bio_st* (*OSSL_FUNC_BIO_new_file(const struct ossl_dispatch_st* opf))(const char*,const char*){
    return (struct ossl_core_bio_st* (*)(const char*,const char*))opf->function;
}
static struct ossl_core_bio_st* (*OSSL_FUNC_BIO_new_membuf(const struct ossl_dispatch_st* opf))(const void*,int){
    return (struct ossl_core_bio_st* (*)(const void*,int))opf->function;
}
static int (*OSSL_FUNC_BIO_read_ex(const struct ossl_dispatch_st* opf))(struct ossl_core_bio_st*,void*,unsigned long  int,unsigned long  int*){
    return (int (*)(struct ossl_core_bio_st*,void*,unsigned long  int,unsigned long  int*))opf->function;
}
static int (*OSSL_FUNC_BIO_write_ex(const struct ossl_dispatch_st* opf))(struct ossl_core_bio_st*,const void*,unsigned long  int,unsigned long  int*){
    return (int (*)(struct ossl_core_bio_st*,const void*,unsigned long  int,unsigned long  int*))opf->function;
}
static int (*OSSL_FUNC_BIO_gets(const struct ossl_dispatch_st* opf))(struct ossl_core_bio_st*,char*,int){
    return (int (*)(struct ossl_core_bio_st*,char*,int))opf->function;
}
static int (*OSSL_FUNC_BIO_puts(const struct ossl_dispatch_st* opf))(struct ossl_core_bio_st*,const char*){
    return (int (*)(struct ossl_core_bio_st*,const char*))opf->function;
}
static int (*OSSL_FUNC_BIO_up_ref(const struct ossl_dispatch_st* opf))(struct ossl_core_bio_st*){
    return (int (*)(struct ossl_core_bio_st*))opf->function;
}
static int (*OSSL_FUNC_BIO_free(const struct ossl_dispatch_st* opf))(struct ossl_core_bio_st*){
    return (int (*)(struct ossl_core_bio_st*))opf->function;
}
static int (*OSSL_FUNC_BIO_vprintf(const struct ossl_dispatch_st* opf))(struct ossl_core_bio_st*,const char*,va_list){
    return (int (*)(struct ossl_core_bio_st*,const char*,va_list))opf->function;
}
static int (*OSSL_FUNC_BIO_vsnprintf(const struct ossl_dispatch_st* opf))(char*,unsigned long  int,const char*,va_list){
    return (int (*)(char*,unsigned long  int,const char*,va_list))opf->function;
}
static int (*OSSL_FUNC_BIO_ctrl(const struct ossl_dispatch_st* opf))(struct ossl_core_bio_st*,int,long,void*){
    return (int (*)(struct ossl_core_bio_st*,int,long,void*))opf->function;
}
static void (*OSSL_FUNC_self_test_cb(const struct ossl_dispatch_st* opf))(struct openssl_core_ctx_st*,int (*)(const struct ossl_param_st*,void*),void**){
    return (void (*)(struct openssl_core_ctx_st*,int (*)(const struct ossl_param_st*,void*),void**))opf->function;
}
static unsigned long  int (*OSSL_FUNC_get_entropy(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*,unsigned char**,int,unsigned long  int,unsigned long  int){
    return (unsigned long  int (*)(const struct ossl_core_handle_st*,unsigned char**,int,unsigned long  int,unsigned long  int))opf->function;
}
static unsigned long  int (*OSSL_FUNC_get_user_entropy(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*,unsigned char**,int,unsigned long  int,unsigned long  int){
    return (unsigned long  int (*)(const struct ossl_core_handle_st*,unsigned char**,int,unsigned long  int,unsigned long  int))opf->function;
}
static void (*OSSL_FUNC_cleanup_entropy(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*,unsigned char*,unsigned long  int){
    return (void (*)(const struct ossl_core_handle_st*,unsigned char*,unsigned long  int))opf->function;
}
static void (*OSSL_FUNC_cleanup_user_entropy(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*,unsigned char*,unsigned long  int){
    return (void (*)(const struct ossl_core_handle_st*,unsigned char*,unsigned long  int))opf->function;
}
static unsigned long  int (*OSSL_FUNC_get_nonce(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*,unsigned char**,unsigned long  int,unsigned long  int,const void*,unsigned long  int){
    return (unsigned long  int (*)(const struct ossl_core_handle_st*,unsigned char**,unsigned long  int,unsigned long  int,const void*,unsigned long  int))opf->function;
}
static unsigned long  int (*OSSL_FUNC_get_user_nonce(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*,unsigned char**,unsigned long  int,unsigned long  int,const void*,unsigned long  int){
    return (unsigned long  int (*)(const struct ossl_core_handle_st*,unsigned char**,unsigned long  int,unsigned long  int,const void*,unsigned long  int))opf->function;
}
static void (*OSSL_FUNC_cleanup_nonce(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*,unsigned char*,unsigned long  int){
    return (void (*)(const struct ossl_core_handle_st*,unsigned char*,unsigned long  int))opf->function;
}
static void (*OSSL_FUNC_cleanup_user_nonce(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*,unsigned char*,unsigned long  int){
    return (void (*)(const struct ossl_core_handle_st*,unsigned char*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_provider_register_child_cb(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*,int (*)(const struct ossl_core_handle_st*,void*),int (*)(const struct ossl_core_handle_st*,void*),int (*)(const char*,void*),void*){
    return (int (*)(const struct ossl_core_handle_st*,int (*)(const struct ossl_core_handle_st*,void*),int (*)(const struct ossl_core_handle_st*,void*),int (*)(const char*,void*),void*))opf->function;
}
static void (*OSSL_FUNC_provider_deregister_child_cb(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*){
    return (void (*)(const struct ossl_core_handle_st*))opf->function;
}
static const char* (*OSSL_FUNC_provider_name(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*){
    return (const char* (*)(const struct ossl_core_handle_st*))opf->function;
}
static void* (*OSSL_FUNC_provider_get0_provider_ctx(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*){
    return (void* (*)(const struct ossl_core_handle_st*))opf->function;
}
static const struct ossl_dispatch_st* (*OSSL_FUNC_provider_get0_dispatch(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*){
    return (const struct ossl_dispatch_st* (*)(const struct ossl_core_handle_st*))opf->function;
}
static int (*OSSL_FUNC_provider_up_ref(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*,int){
    return (int (*)(const struct ossl_core_handle_st*,int))opf->function;
}
static int (*OSSL_FUNC_provider_free(const struct ossl_dispatch_st* opf))(const struct ossl_core_handle_st*,int){
    return (int (*)(const struct ossl_core_handle_st*,int))opf->function;
}
static void (*OSSL_FUNC_provider_teardown(const struct ossl_dispatch_st* opf))(void*){
    return (void (*)(void*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_provider_gettable_params(const struct ossl_dispatch_st* opf))(void*){
    return (const struct ossl_param_st* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_provider_get_params(const struct ossl_dispatch_st* opf))(void*,struct ossl_param_st*){
    return (int (*)(void*,struct ossl_param_st*))opf->function;
}
static const struct ossl_algorithm_st* (*OSSL_FUNC_provider_query_operation(const struct ossl_dispatch_st* opf))(void*,int,int*){
    return (const struct ossl_algorithm_st* (*)(void*,int,int*))opf->function;
}
static void (*OSSL_FUNC_provider_unquery_operation(const struct ossl_dispatch_st* opf))(void*,int,const struct ossl_algorithm_st*){
    return (void (*)(void*,int,const struct ossl_algorithm_st*))opf->function;
}
static const struct ossl_item_st* (*OSSL_FUNC_provider_get_reason_strings(const struct ossl_dispatch_st* opf))(void*){
    return (const struct ossl_item_st* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_provider_get_capabilities(const struct ossl_dispatch_st* opf))(void*,const char*,int (*)(const struct ossl_param_st*,void*),void*){
    return (int (*)(void*,const char*,int (*)(const struct ossl_param_st*,void*),void*))opf->function;
}
static int (*OSSL_FUNC_provider_self_test(const struct ossl_dispatch_st* opf))(void*){
    return (int (*)(void*))opf->function;
}
static void* (*OSSL_FUNC_digest_newctx(const struct ossl_dispatch_st* opf))(void*){
    return (void* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_digest_init(const struct ossl_dispatch_st* opf))(void*,const struct ossl_param_st*){
    return (int (*)(void*,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_digest_update(const struct ossl_dispatch_st* opf))(void*,const unsigned char*,unsigned long  int){
    return (int (*)(void*,const unsigned char*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_digest_final(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned long  int*,unsigned long  int){
    return (int (*)(void*,unsigned char*,unsigned long  int*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_digest_squeeze(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned long  int*,unsigned long  int){
    return (int (*)(void*,unsigned char*,unsigned long  int*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_digest_digest(const struct ossl_dispatch_st* opf))(void*,const unsigned char*,unsigned long  int,unsigned char*,unsigned long  int*,unsigned long  int){
    return (int (*)(void*,const unsigned char*,unsigned long  int,unsigned char*,unsigned long  int*,unsigned long  int))opf->function;
}
static void (*OSSL_FUNC_digest_freectx(const struct ossl_dispatch_st* opf))(void*){
    return (void (*)(void*))opf->function;
}
static void* (*OSSL_FUNC_digest_dupctx(const struct ossl_dispatch_st* opf))(void*){
    return (void* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_digest_get_params(const struct ossl_dispatch_st* opf))(struct ossl_param_st*){
    return (int (*)(struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_digest_set_ctx_params(const struct ossl_dispatch_st* opf))(void*,const struct ossl_param_st*){
    return (int (*)(void*,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_digest_get_ctx_params(const struct ossl_dispatch_st* opf))(void*,struct ossl_param_st*){
    return (int (*)(void*,struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_digest_gettable_params(const struct ossl_dispatch_st* opf))(void*){
    return (const struct ossl_param_st* (*)(void*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_digest_settable_ctx_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_digest_gettable_ctx_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static void* (*OSSL_FUNC_cipher_newctx(const struct ossl_dispatch_st* opf))(void*){
    return (void* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_cipher_encrypt_init(const struct ossl_dispatch_st* opf))(void*,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int,const struct ossl_param_st*){
    return (int (*)(void*,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_cipher_decrypt_init(const struct ossl_dispatch_st* opf))(void*,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int,const struct ossl_param_st*){
    return (int (*)(void*,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_cipher_update(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int){
    return (int (*)(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_cipher_final(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned long  int*,unsigned long  int){
    return (int (*)(void*,unsigned char*,unsigned long  int*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_cipher_cipher(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int){
    return (int (*)(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int))opf->function;
}
static void (*OSSL_FUNC_cipher_freectx(const struct ossl_dispatch_st* opf))(void*){
    return (void (*)(void*))opf->function;
}
static void* (*OSSL_FUNC_cipher_dupctx(const struct ossl_dispatch_st* opf))(void*){
    return (void* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_cipher_get_params(const struct ossl_dispatch_st* opf))(struct ossl_param_st*){
    return (int (*)(struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_cipher_get_ctx_params(const struct ossl_dispatch_st* opf))(void*,struct ossl_param_st*){
    return (int (*)(void*,struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_cipher_set_ctx_params(const struct ossl_dispatch_st* opf))(void*,const struct ossl_param_st*){
    return (int (*)(void*,const struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_cipher_gettable_params(const struct ossl_dispatch_st* opf))(void*){
    return (const struct ossl_param_st* (*)(void*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_cipher_settable_ctx_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_cipher_gettable_ctx_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static void* (*OSSL_FUNC_mac_newctx(const struct ossl_dispatch_st* opf))(void*){
    return (void* (*)(void*))opf->function;
}
static void* (*OSSL_FUNC_mac_dupctx(const struct ossl_dispatch_st* opf))(void*){
    return (void* (*)(void*))opf->function;
}
static void (*OSSL_FUNC_mac_freectx(const struct ossl_dispatch_st* opf))(void*){
    return (void (*)(void*))opf->function;
}
static int (*OSSL_FUNC_mac_init(const struct ossl_dispatch_st* opf))(void*,const unsigned char*,unsigned long  int,const struct ossl_param_st*){
    return (int (*)(void*,const unsigned char*,unsigned long  int,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_mac_update(const struct ossl_dispatch_st* opf))(void*,const unsigned char*,unsigned long  int){
    return (int (*)(void*,const unsigned char*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_mac_final(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned long  int*,unsigned long  int){
    return (int (*)(void*,unsigned char*,unsigned long  int*,unsigned long  int))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_mac_gettable_params(const struct ossl_dispatch_st* opf))(void*){
    return (const struct ossl_param_st* (*)(void*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_mac_gettable_ctx_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_mac_settable_ctx_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static int (*OSSL_FUNC_mac_get_params(const struct ossl_dispatch_st* opf))(struct ossl_param_st*){
    return (int (*)(struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_mac_get_ctx_params(const struct ossl_dispatch_st* opf))(void*,struct ossl_param_st*){
    return (int (*)(void*,struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_mac_set_ctx_params(const struct ossl_dispatch_st* opf))(void*,const struct ossl_param_st*){
    return (int (*)(void*,const struct ossl_param_st*))opf->function;
}
static void* (*OSSL_FUNC_kdf_newctx(const struct ossl_dispatch_st* opf))(void*){
    return (void* (*)(void*))opf->function;
}
static void* (*OSSL_FUNC_kdf_dupctx(const struct ossl_dispatch_st* opf))(void*){
    return (void* (*)(void*))opf->function;
}
static void (*OSSL_FUNC_kdf_freectx(const struct ossl_dispatch_st* opf))(void*){
    return (void (*)(void*))opf->function;
}
static void (*OSSL_FUNC_kdf_reset(const struct ossl_dispatch_st* opf))(void*){
    return (void (*)(void*))opf->function;
}
static int (*OSSL_FUNC_kdf_derive(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned long  int,const struct ossl_param_st*){
    return (int (*)(void*,unsigned char*,unsigned long  int,const struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_kdf_gettable_params(const struct ossl_dispatch_st* opf))(void*){
    return (const struct ossl_param_st* (*)(void*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_kdf_gettable_ctx_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_kdf_settable_ctx_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static int (*OSSL_FUNC_kdf_get_params(const struct ossl_dispatch_st* opf))(struct ossl_param_st*){
    return (int (*)(struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_kdf_get_ctx_params(const struct ossl_dispatch_st* opf))(void*,struct ossl_param_st*){
    return (int (*)(void*,struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_kdf_set_ctx_params(const struct ossl_dispatch_st* opf))(void*,const struct ossl_param_st*){
    return (int (*)(void*,const struct ossl_param_st*))opf->function;
}
static void* (*OSSL_FUNC_rand_newctx(const struct ossl_dispatch_st* opf))(void*,void*,const struct ossl_dispatch_st*){
    return (void* (*)(void*,void*,const struct ossl_dispatch_st*))opf->function;
}
static void (*OSSL_FUNC_rand_freectx(const struct ossl_dispatch_st* opf))(void*){
    return (void (*)(void*))opf->function;
}
static int (*OSSL_FUNC_rand_instantiate(const struct ossl_dispatch_st* opf))(void*,unsigned int,int,const unsigned char*,unsigned long  int,const struct ossl_param_st*){
    return (int (*)(void*,unsigned int,int,const unsigned char*,unsigned long  int,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_rand_uninstantiate(const struct ossl_dispatch_st* opf))(void*){
    return (int (*)(void*))opf->function;
}
static int (*OSSL_FUNC_rand_generate(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned long  int,unsigned int,int,const unsigned char*,unsigned long  int){
    return (int (*)(void*,unsigned char*,unsigned long  int,unsigned int,int,const unsigned char*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_rand_reseed(const struct ossl_dispatch_st* opf))(void*,int,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int){
    return (int (*)(void*,int,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int))opf->function;
}
static unsigned long  int (*OSSL_FUNC_rand_nonce(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned int,unsigned long  int,unsigned long  int){
    return (unsigned long  int (*)(void*,unsigned char*,unsigned int,unsigned long  int,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_rand_enable_locking(const struct ossl_dispatch_st* opf))(void*){
    return (int (*)(void*))opf->function;
}
static int (*OSSL_FUNC_rand_lock(const struct ossl_dispatch_st* opf))(void*){
    return (int (*)(void*))opf->function;
}
static void (*OSSL_FUNC_rand_unlock(const struct ossl_dispatch_st* opf))(void*){
    return (void (*)(void*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_rand_gettable_params(const struct ossl_dispatch_st* opf))(void*){
    return (const struct ossl_param_st* (*)(void*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_rand_gettable_ctx_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_rand_settable_ctx_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static int (*OSSL_FUNC_rand_get_params(const struct ossl_dispatch_st* opf))(struct ossl_param_st*){
    return (int (*)(struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_rand_get_ctx_params(const struct ossl_dispatch_st* opf))(void*,struct ossl_param_st*){
    return (int (*)(void*,struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_rand_set_ctx_params(const struct ossl_dispatch_st* opf))(void*,const struct ossl_param_st*){
    return (int (*)(void*,const struct ossl_param_st*))opf->function;
}
static void (*OSSL_FUNC_rand_set_callbacks(const struct ossl_dispatch_st* opf))(void*,int (*)(const struct ossl_param_st*,struct ossl_param_st*,void*),int (*)(const struct ossl_param_st*,void*),int (*)(const struct ossl_param_st*,struct ossl_param_st*,void*),int (*)(const struct ossl_param_st*,void*),void*){
    return (void (*)(void*,int (*)(const struct ossl_param_st*,struct ossl_param_st*,void*),int (*)(const struct ossl_param_st*,void*),int (*)(const struct ossl_param_st*,struct ossl_param_st*,void*),int (*)(const struct ossl_param_st*,void*),void*))opf->function;
}
static int (*OSSL_FUNC_rand_verify_zeroization(const struct ossl_dispatch_st* opf))(void*){
    return (int (*)(void*))opf->function;
}
static unsigned long  int (*OSSL_FUNC_rand_get_seed(const struct ossl_dispatch_st* opf))(void*,unsigned char**,int,unsigned long  int,unsigned long  int,int,const unsigned char*,unsigned long  int){
    return (unsigned long  int (*)(void*,unsigned char**,int,unsigned long  int,unsigned long  int,int,const unsigned char*,unsigned long  int))opf->function;
}
static void (*OSSL_FUNC_rand_clear_seed(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned long  int){
    return (void (*)(void*,unsigned char*,unsigned long  int))opf->function;
}
static void* (*OSSL_FUNC_keymgmt_new(const struct ossl_dispatch_st* opf))(void*){
    return (void* (*)(void*))opf->function;
}
static void* (*OSSL_FUNC_keymgmt_gen_init(const struct ossl_dispatch_st* opf))(void*,int,const struct ossl_param_st*){
    return (void* (*)(void*,int,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_keymgmt_gen_set_template(const struct ossl_dispatch_st* opf))(void*,void*){
    return (int (*)(void*,void*))opf->function;
}
static int (*OSSL_FUNC_keymgmt_gen_set_params(const struct ossl_dispatch_st* opf))(void*,const struct ossl_param_st*){
    return (int (*)(void*,const struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_keymgmt_gen_settable_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static void* (*OSSL_FUNC_keymgmt_gen(const struct ossl_dispatch_st* opf))(void*,int (*)(const struct ossl_param_st*,void*),void*){
    return (void* (*)(void*,int (*)(const struct ossl_param_st*,void*),void*))opf->function;
}
static void (*OSSL_FUNC_keymgmt_gen_cleanup(const struct ossl_dispatch_st* opf))(void*){
    return (void (*)(void*))opf->function;
}
static void* (*OSSL_FUNC_keymgmt_load(const struct ossl_dispatch_st* opf))(const void*,unsigned long  int){
    return (void* (*)(const void*,unsigned long  int))opf->function;
}
static void (*OSSL_FUNC_keymgmt_free(const struct ossl_dispatch_st* opf))(void*){
    return (void (*)(void*))opf->function;
}
static int (*OSSL_FUNC_keymgmt_get_params(const struct ossl_dispatch_st* opf))(void*,struct ossl_param_st*){
    return (int (*)(void*,struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_keymgmt_gettable_params(const struct ossl_dispatch_st* opf))(void*){
    return (const struct ossl_param_st* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_keymgmt_set_params(const struct ossl_dispatch_st* opf))(void*,const struct ossl_param_st*){
    return (int (*)(void*,const struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_keymgmt_settable_params(const struct ossl_dispatch_st* opf))(void*){
    return (const struct ossl_param_st* (*)(void*))opf->function;
}
static const char* (*OSSL_FUNC_keymgmt_query_operation_name(const struct ossl_dispatch_st* opf))(int){
    return (const char* (*)(int))opf->function;
}
static int (*OSSL_FUNC_keymgmt_has(const struct ossl_dispatch_st* opf))(const void*,int){
    return (int (*)(const void*,int))opf->function;
}
static int (*OSSL_FUNC_keymgmt_validate(const struct ossl_dispatch_st* opf))(const void*,int,int){
    return (int (*)(const void*,int,int))opf->function;
}
static int (*OSSL_FUNC_keymgmt_match(const struct ossl_dispatch_st* opf))(const void*,const void*,int){
    return (int (*)(const void*,const void*,int))opf->function;
}
static int (*OSSL_FUNC_keymgmt_import(const struct ossl_dispatch_st* opf))(void*,int,const struct ossl_param_st*){
    return (int (*)(void*,int,const struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_keymgmt_import_types(const struct ossl_dispatch_st* opf))(int){
    return (const struct ossl_param_st* (*)(int))opf->function;
}
static int (*OSSL_FUNC_keymgmt_export(const struct ossl_dispatch_st* opf))(void*,int,int (*)(const struct ossl_param_st*,void*),void*){
    return (int (*)(void*,int,int (*)(const struct ossl_param_st*,void*),void*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_keymgmt_export_types(const struct ossl_dispatch_st* opf))(int){
    return (const struct ossl_param_st* (*)(int))opf->function;
}
static void* (*OSSL_FUNC_keymgmt_dup(const struct ossl_dispatch_st* opf))(const void*,int){
    return (void* (*)(const void*,int))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_keymgmt_import_types_ex(const struct ossl_dispatch_st* opf))(void*,int){
    return (const struct ossl_param_st* (*)(void*,int))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_keymgmt_export_types_ex(const struct ossl_dispatch_st* opf))(void*,int){
    return (const struct ossl_param_st* (*)(void*,int))opf->function;
}
static void* (*OSSL_FUNC_keyexch_newctx(const struct ossl_dispatch_st* opf))(void*){
    return (void* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_keyexch_init(const struct ossl_dispatch_st* opf))(void*,void*,const struct ossl_param_st*){
    return (int (*)(void*,void*,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_keyexch_derive(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned long  int*,unsigned long  int){
    return (int (*)(void*,unsigned char*,unsigned long  int*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_keyexch_set_peer(const struct ossl_dispatch_st* opf))(void*,void*){
    return (int (*)(void*,void*))opf->function;
}
static void (*OSSL_FUNC_keyexch_freectx(const struct ossl_dispatch_st* opf))(void*){
    return (void (*)(void*))opf->function;
}
static void* (*OSSL_FUNC_keyexch_dupctx(const struct ossl_dispatch_st* opf))(void*){
    return (void* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_keyexch_set_ctx_params(const struct ossl_dispatch_st* opf))(void*,const struct ossl_param_st*){
    return (int (*)(void*,const struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_keyexch_settable_ctx_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static int (*OSSL_FUNC_keyexch_get_ctx_params(const struct ossl_dispatch_st* opf))(void*,struct ossl_param_st*){
    return (int (*)(void*,struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_keyexch_gettable_ctx_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static void* (*OSSL_FUNC_signature_newctx(const struct ossl_dispatch_st* opf))(void*,const char*){
    return (void* (*)(void*,const char*))opf->function;
}
static int (*OSSL_FUNC_signature_sign_init(const struct ossl_dispatch_st* opf))(void*,void*,const struct ossl_param_st*){
    return (int (*)(void*,void*,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_signature_sign(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int){
    return (int (*)(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_signature_verify_init(const struct ossl_dispatch_st* opf))(void*,void*,const struct ossl_param_st*){
    return (int (*)(void*,void*,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_signature_verify(const struct ossl_dispatch_st* opf))(void*,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int){
    return (int (*)(void*,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_signature_verify_recover_init(const struct ossl_dispatch_st* opf))(void*,void*,const struct ossl_param_st*){
    return (int (*)(void*,void*,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_signature_verify_recover(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int){
    return (int (*)(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_signature_digest_sign_init(const struct ossl_dispatch_st* opf))(void*,const char*,void*,const struct ossl_param_st*){
    return (int (*)(void*,const char*,void*,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_signature_digest_sign_update(const struct ossl_dispatch_st* opf))(void*,const unsigned char*,unsigned long  int){
    return (int (*)(void*,const unsigned char*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_signature_digest_sign_final(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned long  int*,unsigned long  int){
    return (int (*)(void*,unsigned char*,unsigned long  int*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_signature_digest_sign(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int){
    return (int (*)(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_signature_digest_verify_init(const struct ossl_dispatch_st* opf))(void*,const char*,void*,const struct ossl_param_st*){
    return (int (*)(void*,const char*,void*,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_signature_digest_verify_update(const struct ossl_dispatch_st* opf))(void*,const unsigned char*,unsigned long  int){
    return (int (*)(void*,const unsigned char*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_signature_digest_verify_final(const struct ossl_dispatch_st* opf))(void*,const unsigned char*,unsigned long  int){
    return (int (*)(void*,const unsigned char*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_signature_digest_verify(const struct ossl_dispatch_st* opf))(void*,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int){
    return (int (*)(void*,const unsigned char*,unsigned long  int,const unsigned char*,unsigned long  int))opf->function;
}
static void (*OSSL_FUNC_signature_freectx(const struct ossl_dispatch_st* opf))(void*){
    return (void (*)(void*))opf->function;
}
static void* (*OSSL_FUNC_signature_dupctx(const struct ossl_dispatch_st* opf))(void*){
    return (void* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_signature_get_ctx_params(const struct ossl_dispatch_st* opf))(void*,struct ossl_param_st*){
    return (int (*)(void*,struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_signature_gettable_ctx_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static int (*OSSL_FUNC_signature_set_ctx_params(const struct ossl_dispatch_st* opf))(void*,const struct ossl_param_st*){
    return (int (*)(void*,const struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_signature_settable_ctx_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static int (*OSSL_FUNC_signature_get_ctx_md_params(const struct ossl_dispatch_st* opf))(void*,struct ossl_param_st*){
    return (int (*)(void*,struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_signature_gettable_ctx_md_params(const struct ossl_dispatch_st* opf))(void*){
    return (const struct ossl_param_st* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_signature_set_ctx_md_params(const struct ossl_dispatch_st* opf))(void*,const struct ossl_param_st*){
    return (int (*)(void*,const struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_signature_settable_ctx_md_params(const struct ossl_dispatch_st* opf))(void*){
    return (const struct ossl_param_st* (*)(void*))opf->function;
}
static void* (*OSSL_FUNC_asym_cipher_newctx(const struct ossl_dispatch_st* opf))(void*){
    return (void* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_asym_cipher_encrypt_init(const struct ossl_dispatch_st* opf))(void*,void*,const struct ossl_param_st*){
    return (int (*)(void*,void*,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_asym_cipher_encrypt(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int){
    return (int (*)(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int))opf->function;
}
static int (*OSSL_FUNC_asym_cipher_decrypt_init(const struct ossl_dispatch_st* opf))(void*,void*,const struct ossl_param_st*){
    return (int (*)(void*,void*,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_asym_cipher_decrypt(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int){
    return (int (*)(void*,unsigned char*,unsigned long  int*,unsigned long  int,const unsigned char*,unsigned long  int))opf->function;
}
static void (*OSSL_FUNC_asym_cipher_freectx(const struct ossl_dispatch_st* opf))(void*){
    return (void (*)(void*))opf->function;
}
static void* (*OSSL_FUNC_asym_cipher_dupctx(const struct ossl_dispatch_st* opf))(void*){
    return (void* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_asym_cipher_get_ctx_params(const struct ossl_dispatch_st* opf))(void*,struct ossl_param_st*){
    return (int (*)(void*,struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_asym_cipher_gettable_ctx_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static int (*OSSL_FUNC_asym_cipher_set_ctx_params(const struct ossl_dispatch_st* opf))(void*,const struct ossl_param_st*){
    return (int (*)(void*,const struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_asym_cipher_settable_ctx_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static void* (*OSSL_FUNC_kem_newctx(const struct ossl_dispatch_st* opf))(void*){
    return (void* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_kem_encapsulate_init(const struct ossl_dispatch_st* opf))(void*,void*,const struct ossl_param_st*){
    return (int (*)(void*,void*,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_kem_auth_encapsulate_init(const struct ossl_dispatch_st* opf))(void*,void*,void*,const struct ossl_param_st*){
    return (int (*)(void*,void*,void*,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_kem_encapsulate(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned long  int*,unsigned char*,unsigned long  int*){
    return (int (*)(void*,unsigned char*,unsigned long  int*,unsigned char*,unsigned long  int*))opf->function;
}
static int (*OSSL_FUNC_kem_decapsulate_init(const struct ossl_dispatch_st* opf))(void*,void*,const struct ossl_param_st*){
    return (int (*)(void*,void*,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_kem_auth_decapsulate_init(const struct ossl_dispatch_st* opf))(void*,void*,void*,const struct ossl_param_st*){
    return (int (*)(void*,void*,void*,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_kem_decapsulate(const struct ossl_dispatch_st* opf))(void*,unsigned char*,unsigned long  int*,const unsigned char*,unsigned long  int){
    return (int (*)(void*,unsigned char*,unsigned long  int*,const unsigned char*,unsigned long  int))opf->function;
}
static void (*OSSL_FUNC_kem_freectx(const struct ossl_dispatch_st* opf))(void*){
    return (void (*)(void*))opf->function;
}
static void* (*OSSL_FUNC_kem_dupctx(const struct ossl_dispatch_st* opf))(void*){
    return (void* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_kem_get_ctx_params(const struct ossl_dispatch_st* opf))(void*,struct ossl_param_st*){
    return (int (*)(void*,struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_kem_gettable_ctx_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static int (*OSSL_FUNC_kem_set_ctx_params(const struct ossl_dispatch_st* opf))(void*,const struct ossl_param_st*){
    return (int (*)(void*,const struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_kem_settable_ctx_params(const struct ossl_dispatch_st* opf))(void*,void*){
    return (const struct ossl_param_st* (*)(void*,void*))opf->function;
}
static void* (*OSSL_FUNC_encoder_newctx(const struct ossl_dispatch_st* opf))(void*){
    return (void* (*)(void*))opf->function;
}
static void (*OSSL_FUNC_encoder_freectx(const struct ossl_dispatch_st* opf))(void*){
    return (void (*)(void*))opf->function;
}
static int (*OSSL_FUNC_encoder_get_params(const struct ossl_dispatch_st* opf))(struct ossl_param_st*){
    return (int (*)(struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_encoder_gettable_params(const struct ossl_dispatch_st* opf))(void*){
    return (const struct ossl_param_st* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_encoder_set_ctx_params(const struct ossl_dispatch_st* opf))(void*,const struct ossl_param_st*){
    return (int (*)(void*,const struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_encoder_settable_ctx_params(const struct ossl_dispatch_st* opf))(void*){
    return (const struct ossl_param_st* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_encoder_does_selection(const struct ossl_dispatch_st* opf))(void*,int){
    return (int (*)(void*,int))opf->function;
}
static int (*OSSL_FUNC_encoder_encode(const struct ossl_dispatch_st* opf))(void*,struct ossl_core_bio_st*,const void*,const struct ossl_param_st*,int,int (*)(char*,unsigned long  int,unsigned long  int*,const struct ossl_param_st*,void*),void*){
    return (int (*)(void*,struct ossl_core_bio_st*,const void*,const struct ossl_param_st*,int,int (*)(char*,unsigned long  int,unsigned long  int*,const struct ossl_param_st*,void*),void*))opf->function;
}
static void* (*OSSL_FUNC_encoder_import_object(const struct ossl_dispatch_st* opf))(void*,int,const struct ossl_param_st*){
    return (void* (*)(void*,int,const struct ossl_param_st*))opf->function;
}
static void (*OSSL_FUNC_encoder_free_object(const struct ossl_dispatch_st* opf))(void*){
    return (void (*)(void*))opf->function;
}
static void* (*OSSL_FUNC_decoder_newctx(const struct ossl_dispatch_st* opf))(void*){
    return (void* (*)(void*))opf->function;
}
static void (*OSSL_FUNC_decoder_freectx(const struct ossl_dispatch_st* opf))(void*){
    return (void (*)(void*))opf->function;
}
static int (*OSSL_FUNC_decoder_get_params(const struct ossl_dispatch_st* opf))(struct ossl_param_st*){
    return (int (*)(struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_decoder_gettable_params(const struct ossl_dispatch_st* opf))(void*){
    return (const struct ossl_param_st* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_decoder_set_ctx_params(const struct ossl_dispatch_st* opf))(void*,const struct ossl_param_st*){
    return (int (*)(void*,const struct ossl_param_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_decoder_settable_ctx_params(const struct ossl_dispatch_st* opf))(void*){
    return (const struct ossl_param_st* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_decoder_does_selection(const struct ossl_dispatch_st* opf))(void*,int){
    return (int (*)(void*,int))opf->function;
}
static int (*OSSL_FUNC_decoder_decode(const struct ossl_dispatch_st* opf))(void*,struct ossl_core_bio_st*,int,int (*)(const struct ossl_param_st*,void*),void*,int (*)(char*,unsigned long  int,unsigned long  int*,const struct ossl_param_st*,void*),void*){
    return (int (*)(void*,struct ossl_core_bio_st*,int,int (*)(const struct ossl_param_st*,void*),void*,int (*)(char*,unsigned long  int,unsigned long  int*,const struct ossl_param_st*,void*),void*))opf->function;
}
static int (*OSSL_FUNC_decoder_export_object(const struct ossl_dispatch_st* opf))(void*,const void*,unsigned long  int,int (*)(const struct ossl_param_st*,void*),void*){
    return (int (*)(void*,const void*,unsigned long  int,int (*)(const struct ossl_param_st*,void*),void*))opf->function;
}
static void* (*OSSL_FUNC_store_open(const struct ossl_dispatch_st* opf))(void*,const char*){
    return (void* (*)(void*,const char*))opf->function;
}
static void* (*OSSL_FUNC_store_attach(const struct ossl_dispatch_st* opf))(void*,struct ossl_core_bio_st*){
    return (void* (*)(void*,struct ossl_core_bio_st*))opf->function;
}
static const struct ossl_param_st* (*OSSL_FUNC_store_settable_ctx_params(const struct ossl_dispatch_st* opf))(void*){
    return (const struct ossl_param_st* (*)(void*))opf->function;
}
static int (*OSSL_FUNC_store_set_ctx_params(const struct ossl_dispatch_st* opf))(void*,const struct ossl_param_st*){
    return (int (*)(void*,const struct ossl_param_st*))opf->function;
}
static int (*OSSL_FUNC_store_load(const struct ossl_dispatch_st* opf))(void*,int (*)(const struct ossl_param_st*,void*),void*,int (*)(char*,unsigned long  int,unsigned long  int*,const struct ossl_param_st*,void*),void*){
    return (int (*)(void*,int (*)(const struct ossl_param_st*,void*),void*,int (*)(char*,unsigned long  int,unsigned long  int*,const struct ossl_param_st*,void*),void*))opf->function;
}
static int (*OSSL_FUNC_store_eof(const struct ossl_dispatch_st* opf))(void*){
    return (int (*)(void*))opf->function;
}
static int (*OSSL_FUNC_store_close(const struct ossl_dispatch_st* opf))(void*){
    return (int (*)(void*))opf->function;
}
static int (*OSSL_FUNC_store_export_object(const struct ossl_dispatch_st* opf))(void*,const void*,unsigned long  int,int (*)(const struct ossl_param_st*,void*),void*){
    return (int (*)(void*,const void*,unsigned long  int,int (*)(const struct ossl_param_st*,void*),void*))opf->function;
}
static int (*OSSL_FUNC_store_delete(const struct ossl_dispatch_st* opf))(void*,const char*,const struct ossl_param_st*,int (*)(char*,unsigned long  int,unsigned long  int*,const struct ossl_param_st*,void*),void*){
    return (int (*)(void*,const char*,const struct ossl_param_st*,int (*)(char*,unsigned long  int,unsigned long  int*,const struct ossl_param_st*,void*),void*))opf->function;
}
static void* (*OSSL_FUNC_store_open_ex(const struct ossl_dispatch_st* opf))(void*,const char*,const struct ossl_param_st*,int (*)(char*,unsigned long  int,unsigned long  int*,const struct ossl_param_st*,void*),void*){
    return (void* (*)(void*,const char*,const struct ossl_param_st*,int (*)(char*,unsigned long  int,unsigned long  int*,const struct ossl_param_st*,void*),void*))opf->function;
}
static struct X509_algor_st* ossl_check_X509_ALGOR_type(struct X509_algor_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_X509_ALGOR_sk_type(const struct stack_st_X509_ALGOR* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_X509_ALGOR_sk_type(struct stack_st_X509_ALGOR* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_X509_ALGOR_compfunc_type(int (*cmp)(const struct X509_algor_st**,const struct X509_algor_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_X509_ALGOR_copyfunc_type(struct X509_algor_st* (*cpy)(const struct X509_algor_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_X509_ALGOR_freefunc_type(void (*fr)(struct X509_algor_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct asn1_string_table_st* ossl_check_ASN1_STRING_TABLE_type(struct asn1_string_table_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_ASN1_STRING_TABLE_sk_type(const struct stack_st_ASN1_STRING_TABLE* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_ASN1_STRING_TABLE_sk_type(struct stack_st_ASN1_STRING_TABLE* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_ASN1_STRING_TABLE_compfunc_type(int (*cmp)(const struct asn1_string_table_st**,const struct asn1_string_table_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_ASN1_STRING_TABLE_copyfunc_type(struct asn1_string_table_st* (*cpy)(const struct asn1_string_table_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_ASN1_STRING_TABLE_freefunc_type(void (*fr)(struct asn1_string_table_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct asn1_type_st* ossl_check_ASN1_TYPE_type(struct asn1_type_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_ASN1_TYPE_sk_type(const struct stack_st_ASN1_TYPE* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_ASN1_TYPE_sk_type(struct stack_st_ASN1_TYPE* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_ASN1_TYPE_compfunc_type(int (*cmp)(const struct asn1_type_st**,const struct asn1_type_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_ASN1_TYPE_copyfunc_type(struct asn1_type_st* (*cpy)(const struct asn1_type_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_ASN1_TYPE_freefunc_type(void (*fr)(struct asn1_type_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct asn1_object_st* ossl_check_ASN1_OBJECT_type(struct asn1_object_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_ASN1_OBJECT_sk_type(const struct stack_st_ASN1_OBJECT* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_ASN1_OBJECT_sk_type(struct stack_st_ASN1_OBJECT* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_ASN1_OBJECT_compfunc_type(int (*cmp)(const struct asn1_object_st**,const struct asn1_object_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_ASN1_OBJECT_copyfunc_type(struct asn1_object_st* (*cpy)(const struct asn1_object_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_ASN1_OBJECT_freefunc_type(void (*fr)(struct asn1_object_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct asn1_string_st* ossl_check_ASN1_INTEGER_type(struct asn1_string_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_ASN1_INTEGER_sk_type(const struct stack_st_ASN1_INTEGER* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_ASN1_INTEGER_sk_type(struct stack_st_ASN1_INTEGER* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_ASN1_INTEGER_compfunc_type(int (*cmp)(const struct asn1_string_st**,const struct asn1_string_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_ASN1_INTEGER_copyfunc_type(struct asn1_string_st* (*cpy)(const struct asn1_string_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_ASN1_INTEGER_freefunc_type(void (*fr)(struct asn1_string_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct asn1_string_st* ossl_check_ASN1_UTF8STRING_type(struct asn1_string_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_ASN1_UTF8STRING_sk_type(const struct stack_st_ASN1_UTF8STRING* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_ASN1_UTF8STRING_sk_type(struct stack_st_ASN1_UTF8STRING* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_ASN1_UTF8STRING_compfunc_type(int (*cmp)(const struct asn1_string_st**,const struct asn1_string_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_ASN1_UTF8STRING_copyfunc_type(struct asn1_string_st* (*cpy)(const struct asn1_string_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_ASN1_UTF8STRING_freefunc_type(void (*fr)(struct asn1_string_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct asn1_string_st* ossl_check_ASN1_GENERALSTRING_type(struct asn1_string_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_ASN1_GENERALSTRING_sk_type(const struct stack_st_ASN1_GENERALSTRING* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_ASN1_GENERALSTRING_sk_type(struct stack_st_ASN1_GENERALSTRING* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_ASN1_GENERALSTRING_compfunc_type(int (*cmp)(const struct asn1_string_st**,const struct asn1_string_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_ASN1_GENERALSTRING_copyfunc_type(struct asn1_string_st* (*cpy)(const struct asn1_string_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_ASN1_GENERALSTRING_freefunc_type(void (*fr)(struct asn1_string_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct X509_name_st* ossl_check_X509_NAME_type(struct X509_name_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_X509_NAME_sk_type(const struct stack_st_X509_NAME* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_X509_NAME_sk_type(struct stack_st_X509_NAME* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_X509_NAME_compfunc_type(int (*cmp)(const struct X509_name_st**,const struct X509_name_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_X509_NAME_copyfunc_type(struct X509_name_st* (*cpy)(const struct X509_name_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_X509_NAME_freefunc_type(void (*fr)(struct X509_name_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct x509_st* ossl_check_X509_type(struct x509_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_X509_sk_type(const struct stack_st_X509* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_X509_sk_type(struct stack_st_X509* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_X509_compfunc_type(int (*cmp)(const struct x509_st**,const struct x509_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_X509_copyfunc_type(struct x509_st* (*cpy)(const struct x509_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_X509_freefunc_type(void (*fr)(struct x509_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct x509_revoked_st* ossl_check_X509_REVOKED_type(struct x509_revoked_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_X509_REVOKED_sk_type(const struct stack_st_X509_REVOKED* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_X509_REVOKED_sk_type(struct stack_st_X509_REVOKED* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_X509_REVOKED_compfunc_type(int (*cmp)(const struct x509_revoked_st**,const struct x509_revoked_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_X509_REVOKED_copyfunc_type(struct x509_revoked_st* (*cpy)(const struct x509_revoked_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_X509_REVOKED_freefunc_type(void (*fr)(struct x509_revoked_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct X509_crl_st* ossl_check_X509_CRL_type(struct X509_crl_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_X509_CRL_sk_type(const struct stack_st_X509_CRL* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_X509_CRL_sk_type(struct stack_st_X509_CRL* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_X509_CRL_compfunc_type(int (*cmp)(const struct X509_crl_st**,const struct X509_crl_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_X509_CRL_copyfunc_type(struct X509_crl_st* (*cpy)(const struct X509_crl_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_X509_CRL_freefunc_type(void (*fr)(struct X509_crl_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct X509_name_entry_st* ossl_check_X509_NAME_ENTRY_type(struct X509_name_entry_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_X509_NAME_ENTRY_sk_type(const struct stack_st_X509_NAME_ENTRY* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_X509_NAME_ENTRY_sk_type(struct stack_st_X509_NAME_ENTRY* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_X509_NAME_ENTRY_compfunc_type(int (*cmp)(const struct X509_name_entry_st**,const struct X509_name_entry_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_X509_NAME_ENTRY_copyfunc_type(struct X509_name_entry_st* (*cpy)(const struct X509_name_entry_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_X509_NAME_ENTRY_freefunc_type(void (*fr)(struct X509_name_entry_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct X509_extension_st* ossl_check_X509_EXTENSION_type(struct X509_extension_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_X509_EXTENSION_sk_type(const struct stack_st_X509_EXTENSION* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_X509_EXTENSION_sk_type(struct stack_st_X509_EXTENSION* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_X509_EXTENSION_compfunc_type(int (*cmp)(const struct X509_extension_st**,const struct X509_extension_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_X509_EXTENSION_copyfunc_type(struct X509_extension_st* (*cpy)(const struct X509_extension_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_X509_EXTENSION_freefunc_type(void (*fr)(struct X509_extension_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct x509_attributes_st* ossl_check_X509_ATTRIBUTE_type(struct x509_attributes_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_X509_ATTRIBUTE_sk_type(const struct stack_st_X509_ATTRIBUTE* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_X509_ATTRIBUTE_sk_type(struct stack_st_X509_ATTRIBUTE* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_X509_ATTRIBUTE_compfunc_type(int (*cmp)(const struct x509_attributes_st**,const struct x509_attributes_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_X509_ATTRIBUTE_copyfunc_type(struct x509_attributes_st* (*cpy)(const struct x509_attributes_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_X509_ATTRIBUTE_freefunc_type(void (*fr)(struct x509_attributes_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct X509_info_st* ossl_check_X509_INFO_type(struct X509_info_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_X509_INFO_sk_type(const struct stack_st_X509_INFO* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_X509_INFO_sk_type(struct stack_st_X509_INFO* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_X509_INFO_compfunc_type(int (*cmp)(const struct X509_info_st**,const struct X509_info_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_X509_INFO_copyfunc_type(struct X509_info_st* (*cpy)(const struct X509_info_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_X509_INFO_freefunc_type(void (*fr)(struct X509_info_st*)))(void*){
    return (void (*)(void*))fr;
}
static unsigned long  int lh_OPENSSL_STRING_hash_thunk(const void* data, unsigned long  int (*hfn)(const void*)){
unsigned long  int (*hfn_conv_274)(const char**);
memset(&hfn_conv_274, 0, sizeof(unsigned long  int (*)(const char**)));
    hfn_conv_274=(unsigned long  int (*)(const char**))hfn;
    return hfn_conv_274((const char**)data);
}
static int lh_OPENSSL_STRING_comp_thunk(const void* da, const void* db, int (*cfn)(const void*,const void*)){
int (*cfn_conv_275)(const char**,const char**);
memset(&cfn_conv_275, 0, sizeof(int (*)(const char**,const char**)));
    cfn_conv_275=(int (*)(const char**,const char**))cfn;
    return cfn_conv_275((const char**)da,(const char**)db);
}
static void lh_OPENSSL_STRING_doall_thunk(void* node, void (*doall)(void*)){
void (*doall_conv_276)(char**);
memset(&doall_conv_276, 0, sizeof(void (*)(char**)));
    doall_conv_276=(void (*)(char**))doall;
    doall_conv_276((char**)node);
}
static void lh_OPENSSL_STRING_doall_arg_thunk(void* node, void* arg, void (*doall)(void*,void*)){
void (*doall_conv_277)(char**,void*);
memset(&doall_conv_277, 0, sizeof(void (*)(char**,void*)));
    doall_conv_277=(void (*)(char**,void*))doall;
    doall_conv_277((char**)node,arg);
}
static char** ossl_check_OPENSSL_STRING_lh_plain_type(char** ptr){
    return ptr;
}
static const char** ossl_check_const_OPENSSL_STRING_lh_plain_type(const char** ptr){
    return ptr;
}
static const struct lhash_st* ossl_check_const_OPENSSL_STRING_lh_type(const struct lhash_st_OPENSSL_STRING* lh){
    return (const struct lhash_st*)lh;
}
static struct lhash_st* ossl_check_OPENSSL_STRING_lh_type(struct lhash_st_OPENSSL_STRING* lh){
    return (struct lhash_st*)lh;
}
static int (*ossl_check_OPENSSL_STRING_lh_compfunc_type(int (*cmp)(const char**,const char**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static unsigned long  int (*ossl_check_OPENSSL_STRING_lh_hashfunc_type(unsigned long  int (*hfn)(const char**)))(const void*){
    return (unsigned long  int (*)(const void*))hfn;
}
static void (*ossl_check_OPENSSL_STRING_lh_doallfunc_type(void (*dfn)(char**)))(void*){
    return (void (*)(void*))dfn;
}
static unsigned long  int lh_OPENSSL_CSTRING_hash_thunk(const void* data, unsigned long  int (*hfn)(const void*)){
unsigned long  int (*hfn_conv_278)(const char**);
memset(&hfn_conv_278, 0, sizeof(unsigned long  int (*)(const char**)));
    hfn_conv_278=(unsigned long  int (*)(const char**))hfn;
    return hfn_conv_278((const char**)data);
}
static int lh_OPENSSL_CSTRING_comp_thunk(const void* da, const void* db, int (*cfn)(const void*,const void*)){
int (*cfn_conv_279)(const char**,const char**);
memset(&cfn_conv_279, 0, sizeof(int (*)(const char**,const char**)));
    cfn_conv_279=(int (*)(const char**,const char**))cfn;
    return cfn_conv_279((const char**)da,(const char**)db);
}
static void lh_OPENSSL_CSTRING_doall_thunk(void* node, void (*doall)(void*)){
void (*doall_conv_280)(const char**);
memset(&doall_conv_280, 0, sizeof(void (*)(const char**)));
    doall_conv_280=(void (*)(const char**))doall;
    doall_conv_280((const char**)node);
}
static void lh_OPENSSL_CSTRING_doall_arg_thunk(void* node, void* arg, void (*doall)(void*,void*)){
void (*doall_conv_281)(const char**,void*);
memset(&doall_conv_281, 0, sizeof(void (*)(const char**,void*)));
    doall_conv_281=(void (*)(const char**,void*))doall;
    doall_conv_281((const char**)node,arg);
}
static const char** ossl_check_OPENSSL_CSTRING_lh_plain_type(const char** ptr){
    return ptr;
}
static const char** ossl_check_const_OPENSSL_CSTRING_lh_plain_type(const char** ptr){
    return ptr;
}
static const struct lhash_st* ossl_check_const_OPENSSL_CSTRING_lh_type(const struct lhash_st_OPENSSL_CSTRING* lh){
    return (const struct lhash_st*)lh;
}
static struct lhash_st* ossl_check_OPENSSL_CSTRING_lh_type(struct lhash_st_OPENSSL_CSTRING* lh){
    return (struct lhash_st*)lh;
}
static int (*ossl_check_OPENSSL_CSTRING_lh_compfunc_type(int (*cmp)(const char**,const char**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static unsigned long  int (*ossl_check_OPENSSL_CSTRING_lh_hashfunc_type(unsigned long  int (*hfn)(const char**)))(const void*){
    return (unsigned long  int (*)(const void*))hfn;
}
static void (*ossl_check_OPENSSL_CSTRING_lh_doallfunc_type(void (*dfn)(const char**)))(void*){
    return (void (*)(void*))dfn;
}
static struct x509_lookup_st* ossl_check_X509_LOOKUP_type(struct x509_lookup_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_X509_LOOKUP_sk_type(const struct stack_st_X509_LOOKUP* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_X509_LOOKUP_sk_type(struct stack_st_X509_LOOKUP* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_X509_LOOKUP_compfunc_type(int (*cmp)(const struct x509_lookup_st**,const struct x509_lookup_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_X509_LOOKUP_copyfunc_type(struct x509_lookup_st* (*cpy)(const struct x509_lookup_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_X509_LOOKUP_freefunc_type(void (*fr)(struct x509_lookup_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct x509_object_st* ossl_check_X509_OBJECT_type(struct x509_object_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_X509_OBJECT_sk_type(const struct stack_st_X509_OBJECT* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_X509_OBJECT_sk_type(struct stack_st_X509_OBJECT* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_X509_OBJECT_compfunc_type(int (*cmp)(const struct x509_object_st**,const struct x509_object_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_X509_OBJECT_copyfunc_type(struct x509_object_st* (*cpy)(const struct x509_object_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_X509_OBJECT_freefunc_type(void (*fr)(struct x509_object_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct X509_VERIFY_PARAM_st* ossl_check_X509_VERIFY_PARAM_type(struct X509_VERIFY_PARAM_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_X509_VERIFY_PARAM_sk_type(const struct stack_st_X509_VERIFY_PARAM* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_X509_VERIFY_PARAM_sk_type(struct stack_st_X509_VERIFY_PARAM* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_X509_VERIFY_PARAM_compfunc_type(int (*cmp)(const struct X509_VERIFY_PARAM_st**,const struct X509_VERIFY_PARAM_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_X509_VERIFY_PARAM_copyfunc_type(struct X509_VERIFY_PARAM_st* (*cpy)(const struct X509_VERIFY_PARAM_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_X509_VERIFY_PARAM_freefunc_type(void (*fr)(struct X509_VERIFY_PARAM_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct x509_trust_st* ossl_check_X509_TRUST_type(struct x509_trust_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_X509_TRUST_sk_type(const struct stack_st_X509_TRUST* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_X509_TRUST_sk_type(struct stack_st_X509_TRUST* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_X509_TRUST_compfunc_type(int (*cmp)(const struct x509_trust_st**,const struct x509_trust_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_X509_TRUST_copyfunc_type(struct x509_trust_st* (*cpy)(const struct x509_trust_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_X509_TRUST_freefunc_type(void (*fr)(struct x509_trust_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct pkcs7_signer_info_st* ossl_check_PKCS7_SIGNER_INFO_type(struct pkcs7_signer_info_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_PKCS7_SIGNER_INFO_sk_type(const struct stack_st_PKCS7_SIGNER_INFO* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_PKCS7_SIGNER_INFO_sk_type(struct stack_st_PKCS7_SIGNER_INFO* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_PKCS7_SIGNER_INFO_compfunc_type(int (*cmp)(const struct pkcs7_signer_info_st**,const struct pkcs7_signer_info_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_PKCS7_SIGNER_INFO_copyfunc_type(struct pkcs7_signer_info_st* (*cpy)(const struct pkcs7_signer_info_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_PKCS7_SIGNER_INFO_freefunc_type(void (*fr)(struct pkcs7_signer_info_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct pkcs7_recip_info_st* ossl_check_PKCS7_RECIP_INFO_type(struct pkcs7_recip_info_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_PKCS7_RECIP_INFO_sk_type(const struct stack_st_PKCS7_RECIP_INFO* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_PKCS7_RECIP_INFO_sk_type(struct stack_st_PKCS7_RECIP_INFO* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_PKCS7_RECIP_INFO_compfunc_type(int (*cmp)(const struct pkcs7_recip_info_st**,const struct pkcs7_recip_info_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_PKCS7_RECIP_INFO_copyfunc_type(struct pkcs7_recip_info_st* (*cpy)(const struct pkcs7_recip_info_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_PKCS7_RECIP_INFO_freefunc_type(void (*fr)(struct pkcs7_recip_info_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct pkcs7_st* ossl_check_PKCS7_type(struct pkcs7_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_PKCS7_sk_type(const struct stack_st_PKCS7* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_PKCS7_sk_type(struct stack_st_PKCS7* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_PKCS7_compfunc_type(int (*cmp)(const struct pkcs7_st**,const struct pkcs7_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_PKCS7_copyfunc_type(struct pkcs7_st* (*cpy)(const struct pkcs7_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_PKCS7_freefunc_type(void (*fr)(struct pkcs7_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct anonymous_typeX43* ossl_check_CONF_VALUE_type(struct anonymous_typeX43* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_CONF_VALUE_sk_type(const struct stack_st_CONF_VALUE* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_CONF_VALUE_sk_type(struct stack_st_CONF_VALUE* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_CONF_VALUE_compfunc_type(int (*cmp)(const struct anonymous_typeX43**,const struct anonymous_typeX43**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_CONF_VALUE_copyfunc_type(struct anonymous_typeX43* (*cpy)(const struct anonymous_typeX43*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_CONF_VALUE_freefunc_type(void (*fr)(struct anonymous_typeX43*)))(void*){
    return (void (*)(void*))fr;
}
static unsigned long  int lh_CONF_VALUE_hash_thunk(const void* data, unsigned long  int (*hfn)(const void*)){
unsigned long  int (*hfn_conv_282)(const struct anonymous_typeX43*);
memset(&hfn_conv_282, 0, sizeof(unsigned long  int (*)(const struct anonymous_typeX43*)));
    hfn_conv_282=(unsigned long  int (*)(const struct anonymous_typeX43*))hfn;
    return hfn_conv_282((const struct anonymous_typeX43*)data);
}
static int lh_CONF_VALUE_comp_thunk(const void* da, const void* db, int (*cfn)(const void*,const void*)){
int (*cfn_conv_283)(const struct anonymous_typeX43*,const struct anonymous_typeX43*);
memset(&cfn_conv_283, 0, sizeof(int (*)(const struct anonymous_typeX43*,const struct anonymous_typeX43*)));
    cfn_conv_283=(int (*)(const struct anonymous_typeX43*,const struct anonymous_typeX43*))cfn;
    return cfn_conv_283((const struct anonymous_typeX43*)da,(const struct anonymous_typeX43*)db);
}
static void lh_CONF_VALUE_doall_thunk(void* node, void (*doall)(void*)){
void (*doall_conv_284)(struct anonymous_typeX43*);
memset(&doall_conv_284, 0, sizeof(void (*)(struct anonymous_typeX43*)));
    doall_conv_284=(void (*)(struct anonymous_typeX43*))doall;
    doall_conv_284((struct anonymous_typeX43*)node);
}
static void lh_CONF_VALUE_doall_arg_thunk(void* node, void* arg, void (*doall)(void*,void*)){
void (*doall_conv_285)(struct anonymous_typeX43*,void*);
memset(&doall_conv_285, 0, sizeof(void (*)(struct anonymous_typeX43*,void*)));
    doall_conv_285=(void (*)(struct anonymous_typeX43*,void*))doall;
    doall_conv_285((struct anonymous_typeX43*)node,arg);
}
static struct anonymous_typeX43* ossl_check_CONF_VALUE_lh_plain_type(struct anonymous_typeX43* ptr){
    return ptr;
}
static const struct anonymous_typeX43* ossl_check_const_CONF_VALUE_lh_plain_type(const struct anonymous_typeX43* ptr){
    return ptr;
}
static const struct lhash_st* ossl_check_const_CONF_VALUE_lh_type(const struct lhash_st_CONF_VALUE* lh){
    return (const struct lhash_st*)lh;
}
static struct lhash_st* ossl_check_CONF_VALUE_lh_type(struct lhash_st_CONF_VALUE* lh){
    return (struct lhash_st*)lh;
}
static int (*ossl_check_CONF_VALUE_lh_compfunc_type(int (*cmp)(const struct anonymous_typeX43*,const struct anonymous_typeX43*)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static unsigned long  int (*ossl_check_CONF_VALUE_lh_hashfunc_type(unsigned long  int (*hfn)(const struct anonymous_typeX43*)))(const void*){
    return (unsigned long  int (*)(const void*))hfn;
}
static void (*ossl_check_CONF_VALUE_lh_doallfunc_type(void (*dfn)(struct anonymous_typeX43*)))(void*){
    return (void (*)(void*))dfn;
}
static struct sct_st* ossl_check_SCT_type(struct sct_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_SCT_sk_type(const struct stack_st_SCT* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_SCT_sk_type(struct stack_st_SCT* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_SCT_compfunc_type(int (*cmp)(const struct sct_st**,const struct sct_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_SCT_copyfunc_type(struct sct_st* (*cpy)(const struct sct_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_SCT_freefunc_type(void (*fr)(struct sct_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct ctlog_st* ossl_check_CTLOG_type(struct ctlog_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_CTLOG_sk_type(const struct stack_st_CTLOG* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_CTLOG_sk_type(struct stack_st_CTLOG* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_CTLOG_compfunc_type(int (*cmp)(const struct ctlog_st**,const struct ctlog_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_CTLOG_copyfunc_type(struct ctlog_st* (*cpy)(const struct ctlog_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_CTLOG_freefunc_type(void (*fr)(struct ctlog_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct srtp_protection_profile_st* ossl_check_SRTP_PROTECTION_PROFILE_type(struct srtp_protection_profile_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_SRTP_PROTECTION_PROFILE_sk_type(const struct stack_st_SRTP_PROTECTION_PROFILE* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_SRTP_PROTECTION_PROFILE_sk_type(struct stack_st_SRTP_PROTECTION_PROFILE* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_SRTP_PROTECTION_PROFILE_compfunc_type(int (*cmp)(const struct srtp_protection_profile_st**,const struct srtp_protection_profile_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_SRTP_PROTECTION_PROFILE_copyfunc_type(struct srtp_protection_profile_st* (*cpy)(const struct srtp_protection_profile_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_SRTP_PROTECTION_PROFILE_freefunc_type(void (*fr)(struct srtp_protection_profile_st*)))(void*){
    return (void (*)(void*))fr;
}
static const struct ssl_cipher_st* ossl_check_SSL_CIPHER_type(const struct ssl_cipher_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_SSL_CIPHER_sk_type(const struct stack_st_SSL_CIPHER* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_SSL_CIPHER_sk_type(struct stack_st_SSL_CIPHER* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_SSL_CIPHER_compfunc_type(int (*cmp)(const struct ssl_cipher_st**,const struct ssl_cipher_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_SSL_CIPHER_copyfunc_type(struct ssl_cipher_st* (*cpy)(const struct ssl_cipher_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_SSL_CIPHER_freefunc_type(void (*fr)(struct ssl_cipher_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct ssl_comp_st* ossl_check_SSL_COMP_type(struct ssl_comp_st* ptr){
    return ptr;
}
static const struct stack_st* ossl_check_const_SSL_COMP_sk_type(const struct stack_st_SSL_COMP* sk){
    return (const struct stack_st*)sk;
}
static struct stack_st* ossl_check_SSL_COMP_sk_type(struct stack_st_SSL_COMP* sk){
    return (struct stack_st*)sk;
}
static int (*ossl_check_SSL_COMP_compfunc_type(int (*cmp)(const struct ssl_comp_st**,const struct ssl_comp_st**)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static void* (*ossl_check_SSL_COMP_copyfunc_type(struct ssl_comp_st* (*cpy)(const struct ssl_comp_st*)))(const void*){
    return (void* (*)(const void*))cpy;
}
static void (*ossl_check_SSL_COMP_freefunc_type(void (*fr)(struct ssl_comp_st*)))(void*){
    return (void (*)(void*))fr;
}
static struct bio_poll_descriptor_st SSL_as_poll_descriptor(struct ssl_st* s){
struct bio_poll_descriptor_st d_286;
memset(&d_286, 0, sizeof(struct bio_poll_descriptor_st));
    d_286.type=2;
    d_286.value.ssl=s;
    return d_286;
}
static int ERR_GET_LIB(unsigned long  int errcode){
    if(    (((errcode)&((unsigned int)2147483647+1))!=0)) {
        return 2;
    }
    return (errcode>>23)&255;
}
static int ERR_GET_RFLAGS(unsigned long  int errcode){
    if(    (((errcode)&((unsigned int)2147483647+1))!=0)) {
        return 0;
    }
    return errcode&(31<<18);
}
static int ERR_GET_REASON(unsigned long  int errcode){
    if(    (((errcode)&((unsigned int)2147483647+1))!=0)) {
        return errcode&((unsigned int)2147483647);
    }
    return errcode&8388607;
}
static int ERR_FATAL_ERROR(unsigned long  int errcode){
    return (ERR_GET_RFLAGS(errcode)&(1<<18))!=0;
}
static int ERR_COMMON_ERROR(unsigned long  int errcode){
    return (ERR_GET_RFLAGS(errcode)&(2<<18))!=0;
}
static unsigned long  int lh_ERR_STRING_DATA_hash_thunk(const void* data, unsigned long  int (*hfn)(const void*)){
unsigned long  int (*hfn_conv_287)(const struct ERR_string_data_st*);
memset(&hfn_conv_287, 0, sizeof(unsigned long  int (*)(const struct ERR_string_data_st*)));
    hfn_conv_287=(unsigned long  int (*)(const struct ERR_string_data_st*))hfn;
    return hfn_conv_287((const struct ERR_string_data_st*)data);
}
static int lh_ERR_STRING_DATA_comp_thunk(const void* da, const void* db, int (*cfn)(const void*,const void*)){
int (*cfn_conv_288)(const struct ERR_string_data_st*,const struct ERR_string_data_st*);
memset(&cfn_conv_288, 0, sizeof(int (*)(const struct ERR_string_data_st*,const struct ERR_string_data_st*)));
    cfn_conv_288=(int (*)(const struct ERR_string_data_st*,const struct ERR_string_data_st*))cfn;
    return cfn_conv_288((const struct ERR_string_data_st*)da,(const struct ERR_string_data_st*)db);
}
static void lh_ERR_STRING_DATA_doall_thunk(void* node, void (*doall)(void*)){
void (*doall_conv_289)(struct ERR_string_data_st*);
memset(&doall_conv_289, 0, sizeof(void (*)(struct ERR_string_data_st*)));
    doall_conv_289=(void (*)(struct ERR_string_data_st*))doall;
    doall_conv_289((struct ERR_string_data_st*)node);
}
static void lh_ERR_STRING_DATA_doall_arg_thunk(void* node, void* arg, void (*doall)(void*,void*)){
void (*doall_conv_290)(struct ERR_string_data_st*,void*);
memset(&doall_conv_290, 0, sizeof(void (*)(struct ERR_string_data_st*,void*)));
    doall_conv_290=(void (*)(struct ERR_string_data_st*,void*))doall;
    doall_conv_290((struct ERR_string_data_st*)node,arg);
}
static struct ERR_string_data_st* ossl_check_ERR_STRING_DATA_lh_plain_type(struct ERR_string_data_st* ptr){
    return ptr;
}
static const struct ERR_string_data_st* ossl_check_const_ERR_STRING_DATA_lh_plain_type(const struct ERR_string_data_st* ptr){
    return ptr;
}
static const struct lhash_st* ossl_check_const_ERR_STRING_DATA_lh_type(const struct lhash_st_ERR_STRING_DATA* lh){
    return (const struct lhash_st*)lh;
}
static struct lhash_st* ossl_check_ERR_STRING_DATA_lh_type(struct lhash_st_ERR_STRING_DATA* lh){
    return (struct lhash_st*)lh;
}
static int (*ossl_check_ERR_STRING_DATA_lh_compfunc_type(int (*cmp)(const struct ERR_string_data_st*,const struct ERR_string_data_st*)))(const void*,const void*){
    return (int (*)(const void*,const void*))cmp;
}
static unsigned long  int (*ossl_check_ERR_STRING_DATA_lh_hashfunc_type(unsigned long  int (*hfn)(const struct ERR_string_data_st*)))(const void*){
    return (unsigned long  int (*)(const void*))hfn;
}
static void (*ossl_check_ERR_STRING_DATA_lh_doallfunc_type(void (*dfn)(struct ERR_string_data_st*)))(void*){
    return (void (*)(void*))dfn;
}
static int __isspace(int _c){
    return _c==32||(unsigned int)_c-9<5;
}

// body function
static void buffer_finalize(struct buffer* self){
char* __dec_obj1;
    if(    self!=((void*)0)&&self->buf!=((void*)0)) {
        if(        self->buf==gComeFunResultObject) {
            __dec_obj1=self->buf;
            /*G*/ __dec_obj1 = come_decrement_ref_count2(__dec_obj1, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->buf = come_decrement_ref_count2(self->buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void va_list_finalize(va_list self){
}

static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj14;
struct smart_pointer$1char* __result61__;
    __dec_obj14=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj14,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result61__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result61__;
}

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
struct buffer* __dec_obj15;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj15=self->memory;
            come_call_finalizer3(__dec_obj15,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj16;
struct smart_pointer$1short* __result64__;
    __dec_obj16=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj16,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result64__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result64__;
}

static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
struct buffer* __dec_obj17;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj17=self->memory;
            come_call_finalizer3(__dec_obj17,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj18;
struct smart_pointer$1int* __result66__;
    __dec_obj18=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj18,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result66__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result66__;
}

static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
struct buffer* __dec_obj19;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj19=self->memory;
            come_call_finalizer3(__dec_obj19,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj20;
struct smart_pointer$1long* __result68__;
    __dec_obj20=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj20,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result68__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result68__;
}

static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
struct buffer* __dec_obj21;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj21=self->memory;
            come_call_finalizer3(__dec_obj21,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj22;
struct smart_pointer$1charp* __result71__;
    __dec_obj22=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj22,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result71__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result71__;
}

static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self){
struct buffer* __dec_obj23;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj23=self->memory;
            come_call_finalizer3(__dec_obj23,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj24;
struct smart_pointer$1float* __result76__;
    __dec_obj24=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj24,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result76__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result76__;
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
struct buffer* __dec_obj25;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj25=self->memory;
            come_call_finalizer3(__dec_obj25,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj26;
struct smart_pointer$1double* __result78__;
    __dec_obj26=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj26,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result78__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result78__;
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
struct buffer* __dec_obj27;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj27=self->memory;
            come_call_finalizer3(__dec_obj27,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_129;
struct list$1char* __result81__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_129=0;    i_129<num_value;    i_129++    ){
        list$1char_push_back(self,values[i_129]);
    }
    __result81__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
struct list_item$1char* litem_130;
void* __right_value93 = (void*)0;
struct list_item$1char* litem_131;
void* __right_value94 = (void*)0;
struct list_item$1char* litem_132;
struct list$1char* __result80__;
    if(    self->len==0) {
        litem_130=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1135, "list_item$1char"))));
        litem_130->prev=((void*)0);
        litem_130->next=((void*)0);
        litem_130->item=item;
        self->tail=litem_130;
        self->head=litem_130;
    }
    else if(    self->len==1) {
        litem_131=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value93=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1145, "list_item$1char"))));
        litem_131->prev=self->head;
        litem_131->next=((void*)0);
        litem_131->item=item;
        self->tail=litem_131;
        self->head->next=litem_131;
    }
    else {
        litem_132=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value94=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1155, "list_item$1char"))));
        litem_132->prev=self->tail;
        litem_132->next=((void*)0);
        litem_132->item=item;
        self->tail->next=litem_132;
        self->tail=litem_132;
    }
    self->len++;
    __result80__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result80__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_133;
struct list_item$1char* prev_it_134;
    it_133=self->head;
    while(it_133!=((void*)0)) {
        prev_it_134=it_133;
        it_133=it_133->next;
        /*i*/come_call_finalizer3(prev_it_134,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}

static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_135;
struct list$1charp* __result84__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_135=0;    i_135<num_value;    i_135++    ){
        list$1charp_push_back(self,values[i_135]);
    }
    __result84__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value97 = (void*)0;
struct list_item$1charp* litem_136;
void* __right_value98 = (void*)0;
struct list_item$1charp* litem_137;
void* __right_value99 = (void*)0;
struct list_item$1charp* litem_138;
struct list$1charp* __result83__;
    if(    self->len==0) {
        litem_136=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1135, "list_item$1charp"))));
        litem_136->prev=((void*)0);
        litem_136->next=((void*)0);
        litem_136->item=item;
        self->tail=litem_136;
        self->head=litem_136;
    }
    else if(    self->len==1) {
        litem_137=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value98=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1145, "list_item$1charp"))));
        litem_137->prev=self->head;
        litem_137->next=((void*)0);
        litem_137->item=item;
        self->tail=litem_137;
        self->head->next=litem_137;
    }
    else {
        litem_138=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value99=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1155, "list_item$1charp"))));
        litem_138->prev=self->tail;
        litem_138->next=((void*)0);
        litem_138->item=item;
        self->tail->next=litem_138;
        self->tail=litem_138;
    }
    self->len++;
    __result83__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result83__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_139;
struct list_item$1charp* prev_it_140;
    it_139=self->head;
    while(it_139!=((void*)0)) {
        prev_it_140=it_139;
        it_139=it_139->next;
        /*i*/come_call_finalizer3(prev_it_140,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_141;
struct list$1short* __result87__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_141=0;    i_141<num_value;    i_141++    ){
        list$1short_push_back(self,values[i_141]);
    }
    __result87__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result87__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value102 = (void*)0;
struct list_item$1short* litem_142;
void* __right_value103 = (void*)0;
struct list_item$1short* litem_143;
void* __right_value104 = (void*)0;
struct list_item$1short* litem_144;
struct list$1short* __result86__;
    if(    self->len==0) {
        litem_142=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1135, "list_item$1short"))));
        litem_142->prev=((void*)0);
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail=litem_142;
        self->head=litem_142;
    }
    else if(    self->len==1) {
        litem_143=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value103=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1145, "list_item$1short"))));
        litem_143->prev=self->head;
        litem_143->next=((void*)0);
        litem_143->item=item;
        self->tail=litem_143;
        self->head->next=litem_143;
    }
    else {
        litem_144=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value104=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1155, "list_item$1short"))));
        litem_144->prev=self->tail;
        litem_144->next=((void*)0);
        litem_144->item=item;
        self->tail->next=litem_144;
        self->tail=litem_144;
    }
    self->len++;
    __result86__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result86__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_145;
struct list_item$1short* prev_it_146;
    it_145=self->head;
    while(it_145!=((void*)0)) {
        prev_it_146=it_145;
        it_145=it_145->next;
        /*i*/come_call_finalizer3(prev_it_146,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_147;
struct list$1int* __result90__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_147=0;    i_147<num_value;    i_147++    ){
        list$1int_push_back(self,values[i_147]);
    }
    __result90__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result90__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
struct list_item$1int* litem_148;
void* __right_value108 = (void*)0;
struct list_item$1int* litem_149;
void* __right_value109 = (void*)0;
struct list_item$1int* litem_150;
struct list$1int* __result89__;
    if(    self->len==0) {
        litem_148=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1135, "list_item$1int"))));
        litem_148->prev=((void*)0);
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail=litem_148;
        self->head=litem_148;
    }
    else if(    self->len==1) {
        litem_149=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value108=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1145, "list_item$1int"))));
        litem_149->prev=self->head;
        litem_149->next=((void*)0);
        litem_149->item=item;
        self->tail=litem_149;
        self->head->next=litem_149;
    }
    else {
        litem_150=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value109=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1155, "list_item$1int"))));
        litem_150->prev=self->tail;
        litem_150->next=((void*)0);
        litem_150->item=item;
        self->tail->next=litem_150;
        self->tail=litem_150;
    }
    self->len++;
    __result89__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result89__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_151;
struct list_item$1int* prev_it_152;
    it_151=self->head;
    while(it_151!=((void*)0)) {
        prev_it_152=it_151;
        it_151=it_151->next;
        /*i*/come_call_finalizer3(prev_it_152,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_153;
struct list$1long* __result93__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_153=0;    i_153<num_value;    i_153++    ){
        list$1long_push_back(self,values[i_153]);
    }
    __result93__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value112 = (void*)0;
struct list_item$1long* litem_154;
void* __right_value113 = (void*)0;
struct list_item$1long* litem_155;
void* __right_value114 = (void*)0;
struct list_item$1long* litem_156;
struct list$1long* __result92__;
    if(    self->len==0) {
        litem_154=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1135, "list_item$1long"))));
        litem_154->prev=((void*)0);
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail=litem_154;
        self->head=litem_154;
    }
    else if(    self->len==1) {
        litem_155=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value113=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1145, "list_item$1long"))));
        litem_155->prev=self->head;
        litem_155->next=((void*)0);
        litem_155->item=item;
        self->tail=litem_155;
        self->head->next=litem_155;
    }
    else {
        litem_156=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value114=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1155, "list_item$1long"))));
        litem_156->prev=self->tail;
        litem_156->next=((void*)0);
        litem_156->item=item;
        self->tail->next=litem_156;
        self->tail=litem_156;
    }
    self->len++;
    __result92__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result92__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_157;
struct list_item$1long* prev_it_158;
    it_157=self->head;
    while(it_157!=((void*)0)) {
        prev_it_158=it_157;
        it_157=it_157->next;
        /*i*/come_call_finalizer3(prev_it_158,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_159;
struct list$1float* __result96__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_159=0;    i_159<num_value;    i_159++    ){
        list$1float_push_back(self,values[i_159]);
    }
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value117 = (void*)0;
struct list_item$1float* litem_160;
void* __right_value118 = (void*)0;
struct list_item$1float* litem_161;
void* __right_value119 = (void*)0;
struct list_item$1float* litem_162;
struct list$1float* __result95__;
    if(    self->len==0) {
        litem_160=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1135, "list_item$1float"))));
        litem_160->prev=((void*)0);
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail=litem_160;
        self->head=litem_160;
    }
    else if(    self->len==1) {
        litem_161=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value118=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1145, "list_item$1float"))));
        litem_161->prev=self->head;
        litem_161->next=((void*)0);
        litem_161->item=item;
        self->tail=litem_161;
        self->head->next=litem_161;
    }
    else {
        litem_162=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value119=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1155, "list_item$1float"))));
        litem_162->prev=self->tail;
        litem_162->next=((void*)0);
        litem_162->item=item;
        self->tail->next=litem_162;
        self->tail=litem_162;
    }
    self->len++;
    __result95__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result95__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_163;
struct list_item$1float* prev_it_164;
    it_163=self->head;
    while(it_163!=((void*)0)) {
        prev_it_164=it_163;
        it_163=it_163->next;
        /*i*/come_call_finalizer3(prev_it_164,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_165;
struct list$1double* __result99__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_165=0;    i_165<num_value;    i_165++    ){
        list$1double_push_back(self,values[i_165]);
    }
    __result99__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value122 = (void*)0;
struct list_item$1double* litem_166;
void* __right_value123 = (void*)0;
struct list_item$1double* litem_167;
void* __right_value124 = (void*)0;
struct list_item$1double* litem_168;
struct list$1double* __result98__;
    if(    self->len==0) {
        litem_166=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1135, "list_item$1double"))));
        litem_166->prev=((void*)0);
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail=litem_166;
        self->head=litem_166;
    }
    else if(    self->len==1) {
        litem_167=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value123=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1145, "list_item$1double"))));
        litem_167->prev=self->head;
        litem_167->next=((void*)0);
        litem_167->item=item;
        self->tail=litem_167;
        self->head->next=litem_167;
    }
    else {
        litem_168=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value124=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1155, "list_item$1double"))));
        litem_168->prev=self->tail;
        litem_168->next=((void*)0);
        litem_168->item=item;
        self->tail->next=litem_168;
        self->tail=litem_168;
    }
    self->len++;
    __result98__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result98__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_169;
struct list_item$1double* prev_it_170;
    it_169=self->head;
    while(it_169!=((void*)0)) {
        prev_it_170=it_169;
        it_169=it_169->next;
        /*i*/come_call_finalizer3(prev_it_170,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}

static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
struct vector$1char* __result101__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 1929, "char")));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_171;
    if(    0) {
        for(        i_171=0;        i_171<self->len;        i_171++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
struct vector$1charp* __result103__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value130=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 1929, "char*")));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_172;
    if(    0) {
        for(        i_172=0;        i_172<self->len;        i_172++        ){
            /* U13 */self->items[i_172] = come_decrement_ref_count2(self->items[i_172], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
struct vector$1short* __result105__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value133=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 1929, "short")));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result105__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result105__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_173;
    if(    0) {
        for(        i_173=0;        i_173<self->len;        i_173++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
struct vector$1int* __result107__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value136=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 1929, "int")));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_174;
    if(    0) {
        for(        i_174=0;        i_174<self->len;        i_174++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
struct vector$1long* __result109__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value139=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 1929, "long")));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result109__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_175;
    if(    0) {
        for(        i_175=0;        i_175<self->len;        i_175++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
struct vector$1float* __result111__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value142=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 1929, "float")));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result111__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_176;
    if(    0) {
        for(        i_176=0;        i_176<self->len;        i_176++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value145 = (void*)0;
struct vector$1double* __result113__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value145=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 1929, "double")));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result113__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result113__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_177;
    if(    0) {
        for(        i_177=0;        i_177<self->len;        i_177++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result162__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result162__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result162__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_218;
struct list_item$1charph* prev_it_219;
    it_218=self->head;
    while(it_218!=((void*)0)) {
        prev_it_219=it_218;
        it_218=it_218->next;
        /*i*/come_call_finalizer3(prev_it_219,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj28;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj28=self->item;
            /*G*/ __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value207 = (void*)0;
struct list_item$1charph* litem_223;
char* __dec_obj29;
void* __right_value208 = (void*)0;
struct list_item$1charph* litem_224;
char* __dec_obj30;
void* __right_value209 = (void*)0;
struct list_item$1charph* litem_225;
char* __dec_obj31;
struct list$1charph* __result164__;
    if(    self->len==0) {
        litem_223=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value207=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1135, "list_item$1charph"))));
        litem_223->prev=((void*)0);
        litem_223->next=((void*)0);
        __dec_obj29=litem_223->item;
        litem_223->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_223;
        self->head=litem_223;
    }
    else if(    self->len==1) {
        litem_224=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value208=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1145, "list_item$1charph"))));
        litem_224->prev=self->head;
        litem_224->next=((void*)0);
        __dec_obj30=litem_224->item;
        litem_224->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_224;
        self->head->next=litem_224;
    }
    else {
        litem_225=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value209=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1155, "list_item$1charph"))));
        litem_225->prev=self->tail;
        litem_225->next=((void*)0);
        __dec_obj31=litem_225->item;
        litem_225->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_225;
        self->tail=litem_225;
    }
    self->len++;
    __result164__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result164__;
}

int socket_fd_write(int self, char* str){
int __result223__;
    __result223__ = write(self,str,string_length(str));
    /* U13 */str = come_decrement_ref_count2(str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result223__;
}

int server_socket(int port, int socket_family, int socket_type, int protocol, _Bool reuse, void* parent, void (*block)(void*,int,_Bool*,_Bool*)){
int sock_291;
_Bool __exception_result_var_b1;
int opt_292;
void* __right_value280 = (void*)0;
_Bool __exception_result_var_b2;
struct sockaddr_in address_293;
int addrlen_294;
void* __right_value281 = (void*)0;
_Bool __exception_result_var_b3;
void* __right_value282 = (void*)0;
_Bool __exception_result_var_b4;
int new_socket_295;
_Bool reconnection_296;
_Bool break__297;
int __result224__;
memset(&address_293, 0, sizeof(struct sockaddr_in));
    sock_291=socket(socket_family,socket_type,protocol);
    if(    sock_291<0) {
        (come_push_stackframe("libcomelang-net.c", 16, 0),__exception_result_var_b1=die("socket failed"), come_pop_stackframe(), __exception_result_var_b1);
    }
    if(    reuse) {
        opt_292=1;
        if(        setsockopt(sock_291,1,2,&opt_292,sizeof(opt_292))) {
            close(sock_291);
            (come_push_stackframe("libcomelang-net.c", 23, 1),__exception_result_var_b2=die(((char*)(__right_value280=xsprintf("setsockopt")))), come_pop_stackframe(), __exception_result_var_b2);
            /* U11 */__right_value280 = come_decrement_ref_count2(__right_value280, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
    }
    address_293.sin_family=2;
    address_293.sin_addr.s_addr=((unsigned int)0);
    address_293.sin_port=htons(port);
    addrlen_294=sizeof(address_293);
    if(    bind(sock_291,(struct sockaddr*)&address_293,sizeof(address_293))<0) {
        close(sock_291);
        (come_push_stackframe("libcomelang-net.c", 37, 2),__exception_result_var_b3=die(((char*)(__right_value281=xsprintf("Unable to bind")))), come_pop_stackframe(), __exception_result_var_b3);
        /* U11 */__right_value281 = come_decrement_ref_count2(__right_value281, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    if(    listen(sock_291,3)<0) {
        close(sock_291);
        (come_push_stackframe("libcomelang-net.c", 42, 3),__exception_result_var_b4=die(((char*)(__right_value282=xsprintf("Unable to listen")))), come_pop_stackframe(), __exception_result_var_b4);
        /* U11 */__right_value282 = come_decrement_ref_count2(__right_value282, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    new_socket_295=accept(sock_291,(struct sockaddr*)&address_293,(unsigned int*)&addrlen_294);
    while(1) {
        reconnection_296=(_Bool)0;
        break__297=(_Bool)0;
        block(parent,new_socket_295,&break__297,&reconnection_296);
        if(        reconnection_296) {
            close(new_socket_295);
            new_socket_295=accept(sock_291,(struct sockaddr*)&address_293,(unsigned int*)&addrlen_294);
        }
        if(        break__297) {
            break;
        }
    }
    close(new_socket_295);
    close(sock_291);
    __result224__ = 0;
    /*i*/come_call_finalizer3((&address_293),sockaddr_in_finalize, 1, 0, 0, 0, (void*)0);
    return __result224__;
}

static void sockaddr_in_finalize(struct sockaddr_in* self){
}

int client_socket(int port, char* address, void* parent, void (*block)(void*,int,_Bool*)){
int sock_298;
struct sockaddr_in serv_addr_299;
void* __right_value283 = (void*)0;
_Bool __exception_result_var_b5;
void* __right_value284 = (void*)0;
_Bool __exception_result_var_b6;
void* __right_value285 = (void*)0;
_Bool __exception_result_var_b7;
_Bool break__300;
_Bool break__301;
int __result225__;
memset(&serv_addr_299, 0, sizeof(struct sockaddr_in));
    sock_298=0;
    if(    (sock_298=socket(2,1,0))<0) {
        (come_push_stackframe("libcomelang-net.c", 75, 4),__exception_result_var_b5=die(((char*)(__right_value283=xsprintf("socket")))), come_pop_stackframe(), __exception_result_var_b5);
        /* U11 */__right_value283 = come_decrement_ref_count2(__right_value283, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    serv_addr_299.sin_family=2;
    serv_addr_299.sin_port=htons(port);
    if(    inet_pton(2,address,&serv_addr_299.sin_addr)<=0) {
        close(sock_298);
        (come_push_stackframe("libcomelang-net.c", 83, 5),__exception_result_var_b6=die(((char*)(__right_value284=xsprintf("Invalid address/ Address not supported")))), come_pop_stackframe(), __exception_result_var_b6);
        /* U11 */__right_value284 = come_decrement_ref_count2(__right_value284, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    if(    connect(sock_298,(struct sockaddr*)&serv_addr_299,sizeof(serv_addr_299))<0) {
        close(sock_298);
        (come_push_stackframe("libcomelang-net.c", 87, 6),__exception_result_var_b7=die(((char*)(__right_value285=xsprintf("Connection Failed")))), come_pop_stackframe(), __exception_result_var_b7);
        /* U11 */__right_value285 = come_decrement_ref_count2(__right_value285, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    break__300=(_Bool)0;
    while(1) {
        break__301=(_Bool)0;
        block(parent,sock_298,&break__301);
        if(        break__301) {
            break;
        }
    }
    close(sock_298);
    __result225__ = 0;
    /*i*/come_call_finalizer3((&serv_addr_299),sockaddr_in_finalize, 1, 0, 0, 0, (void*)0);
    return __result225__;
}

char* client_socket2(int port, char* data, char* address){
void* __result_obj__=(void*)0;
int sock_302;
struct sockaddr_in serv_addr_303;
void* __right_value286 = (void*)0;
_Bool __exception_result_var_b8;
void* __right_value287 = (void*)0;
_Bool __exception_result_var_b9;
void* __right_value288 = (void*)0;
_Bool __exception_result_var_b10;
void* __right_value289 = (void*)0;
_Bool __exception_result_var_b11;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
struct buffer* buf_304;
int size_306;
void* __right_value292 = (void*)0;
_Bool __exception_result_var_b12;
void* __right_value293 = (void*)0;
char* __result226__;
memset(&serv_addr_303, 0, sizeof(struct sockaddr_in));
    sock_302=0;
    if(    (sock_302=socket(2,1,0))<0) {
        (come_push_stackframe("libcomelang-net.c", 112, 7),__exception_result_var_b8=die(((char*)(__right_value286=xsprintf("Socket creation error")))), come_pop_stackframe(), __exception_result_var_b8);
        /* U11 */__right_value286 = come_decrement_ref_count2(__right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    serv_addr_303.sin_family=2;
    serv_addr_303.sin_port=htons(port);
    if(    inet_pton(2,address,&serv_addr_303.sin_addr)<=0) {
        close(sock_302);
        (come_push_stackframe("libcomelang-net.c", 120, 8),__exception_result_var_b9=die(((char*)(__right_value287=xsprintf("Invalid address/ Address not supported")))), come_pop_stackframe(), __exception_result_var_b9);
        /* U11 */__right_value287 = come_decrement_ref_count2(__right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    if(    connect(sock_302,(struct sockaddr*)&serv_addr_303,sizeof(serv_addr_303))<0) {
        close(sock_302);
        (come_push_stackframe("libcomelang-net.c", 124, 9),__exception_result_var_b10=die(((char*)(__right_value288=xsprintf("Connection Failed")))), come_pop_stackframe(), __exception_result_var_b10);
        /* U11 */__right_value288 = come_decrement_ref_count2(__right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    if(    write(sock_302,data,strlen(data))<0) {
        close(sock_302);
        (come_push_stackframe("libcomelang-net.c", 129, 10),__exception_result_var_b11=die(((char*)(__right_value289=xsprintf("Write Failed")))), come_pop_stackframe(), __exception_result_var_b11);
        /* U11 */__right_value289 = come_decrement_ref_count2(__right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    buf_304=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-net.c", 132, "buffer"))));
    char buf2_305[1024]={0};
    size_306=read(sock_302,buf2_305,1024);
    if(    size_306<0) {
        close(sock_302);
        (come_push_stackframe("libcomelang-net.c", 140, 11),__exception_result_var_b12=die(((char*)(__right_value292=xsprintf("Read Failed")))), come_pop_stackframe(), __exception_result_var_b12);
        /* U11 */__right_value292 = come_decrement_ref_count2(__right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    buffer_append(buf_304,buf2_305,size_306);
    close(sock_302);
    __result226__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value293=buffer_to_string(buf_304)));
    /*i*/come_call_finalizer3((&serv_addr_303),sockaddr_in_finalize, 1, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_304,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value293 = come_decrement_ref_count2(__right_value293, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

int httpd_socket(int port, int socket_family, int socket_type, int protocol, _Bool reuse, void* parent, void (*block)(void*,int,_Bool*)){
int sock_307;
_Bool __exception_result_var_b13;
int opt_308;
void* __right_value294 = (void*)0;
_Bool __exception_result_var_b14;
struct sockaddr_in address_309;
int addrlen_310;
void* __right_value295 = (void*)0;
_Bool __exception_result_var_b15;
void* __right_value296 = (void*)0;
_Bool __exception_result_var_b16;
int new_socket_311;
_Bool break__312;
int __result227__;
memset(&address_309, 0, sizeof(struct sockaddr_in));
    sock_307=socket(socket_family,socket_type,protocol);
    if(    sock_307<0) {
        (come_push_stackframe("libcomelang-net.c", 153, 12),__exception_result_var_b13=die("socket failed"), come_pop_stackframe(), __exception_result_var_b13);
    }
    if(    reuse) {
        opt_308=1;
        if(        setsockopt(sock_307,1,2,&opt_308,sizeof(opt_308))) {
            close(sock_307);
            (come_push_stackframe("libcomelang-net.c", 160, 13),__exception_result_var_b14=die(((char*)(__right_value294=xsprintf("setsockpt failed")))), come_pop_stackframe(), __exception_result_var_b14);
            /* U11 */__right_value294 = come_decrement_ref_count2(__right_value294, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
    }
    address_309.sin_family=2;
    address_309.sin_addr.s_addr=((unsigned int)0);
    address_309.sin_port=htons(port);
    addrlen_310=sizeof(address_309);
    if(    bind(sock_307,(struct sockaddr*)&address_309,sizeof(address_309))<0) {
        close(sock_307);
        (come_push_stackframe("libcomelang-net.c", 174, 14),__exception_result_var_b15=die(((char*)(__right_value295=xsprintf("Unable to bind")))), come_pop_stackframe(), __exception_result_var_b15);
        /* U11 */__right_value295 = come_decrement_ref_count2(__right_value295, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    if(    listen(sock_307,3)<0) {
        close(sock_307);
        (come_push_stackframe("libcomelang-net.c", 179, 15),__exception_result_var_b16=die(((char*)(__right_value296=xsprintf("Unable to listen")))), come_pop_stackframe(), __exception_result_var_b16);
        /* U11 */__right_value296 = come_decrement_ref_count2(__right_value296, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    while(1) {
        new_socket_311=accept(sock_307,(struct sockaddr*)&address_309,(unsigned int*)&addrlen_310);
        break__312=(_Bool)0;
        block(parent,new_socket_311,&break__312);
        close(new_socket_311);
        if(        break__312) {
            break;
        }
    }
    close(sock_307);
    __result227__ = 0;
    /*i*/come_call_finalizer3((&address_309),sockaddr_in_finalize, 1, 0, 0, 0, (void*)0);
    return __result227__;
}

void ERR_print_errors_fp(struct _IO_FILE* f){
}

int httpsd_socket(int port, _Bool reuse, void* parent, void (*block)(void*,struct ssl_st*,_Bool*)){
int sock_313;
struct ssl_ctx_st* ctx_314;
const struct ssl_method_st* method_315;
void* __right_value297 = (void*)0;
_Bool __exception_result_var_b17;
void* __right_value298 = (void*)0;
_Bool __exception_result_var_b18;
void* __right_value299 = (void*)0;
_Bool __exception_result_var_b19;
void* __right_value300 = (void*)0;
_Bool __exception_result_var_b20;
struct sockaddr_in addr_316;
void* __right_value301 = (void*)0;
_Bool __exception_result_var_b21;
void* __right_value302 = (void*)0;
_Bool __exception_result_var_b22;
struct sockaddr_in addr_317;
unsigned int len_318;
int client_319;
void* __right_value303 = (void*)0;
_Bool __exception_result_var_b23;
struct ssl_st* ssl_320;
_Bool break__321;
int __result228__;
memset(&sock_313, 0, sizeof(int));
ctx_314 = (void*)0;
method_315 = (void*)0;
memset(&addr_316, 0, sizeof(struct sockaddr_in));
memset(&addr_317, 0, sizeof(struct sockaddr_in));
    OPENSSL_init_ssl(2097152|2,((void*)0));
    OPENSSL_init_ssl(0,((void*)0));
    method_315=TLS_server_method();
    ctx_314=SSL_CTX_new(method_315);
    if(    !ctx_314) {
        (come_push_stackframe("libcomelang-net.c", 225, 16),__exception_result_var_b17=die(((char*)(__right_value297=xsprintf("Unable to create SSL context")))), come_pop_stackframe(), __exception_result_var_b17);
        /* U11 */__right_value297 = come_decrement_ref_count2(__right_value297, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    if(    SSL_CTX_use_certificate_file(ctx_314,"cert.pem",1)<=0) {
        (come_push_stackframe("libcomelang-net.c", 230, 17),__exception_result_var_b18=die(((char*)(__right_value298=xsprintf("SSL_CTX_use_certificate_file")))), come_pop_stackframe(), __exception_result_var_b18);
        /* U11 */__right_value298 = come_decrement_ref_count2(__right_value298, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    if(    SSL_CTX_use_PrivateKey_file(ctx_314,"key.pem",1)<=0) {
        (come_push_stackframe("libcomelang-net.c", 235, 18),__exception_result_var_b19=die(((char*)(__right_value299=xsprintf("SSL_CTX_use_PrivateKey_file")))), come_pop_stackframe(), __exception_result_var_b19);
        /* U11 */__right_value299 = come_decrement_ref_count2(__right_value299, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    sock_313=socket(2,1,0);
    if(    sock_313<0) {
        (come_push_stackframe("libcomelang-net.c", 240, 19),__exception_result_var_b20=die(((char*)(__right_value300=xsprintf("Unable to create socket")))), come_pop_stackframe(), __exception_result_var_b20);
        /* U11 */__right_value300 = come_decrement_ref_count2(__right_value300, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    addr_316.sin_family=2;
    addr_316.sin_port=htons(port);
    addr_316.sin_addr.s_addr=((unsigned int)0);
    if(    bind(sock_313,(struct sockaddr*)&addr_316,sizeof(addr_316))<0) {
        (come_push_stackframe("libcomelang-net.c", 249, 20),__exception_result_var_b21=die(((char*)(__right_value301=xsprintf("Unable to bind")))), come_pop_stackframe(), __exception_result_var_b21);
        /* U11 */__right_value301 = come_decrement_ref_count2(__right_value301, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    if(    listen(sock_313,1)<0) {
        (come_push_stackframe("libcomelang-net.c", 253, 21),__exception_result_var_b22=die(((char*)(__right_value302=xsprintf("Unable to listen")))), come_pop_stackframe(), __exception_result_var_b22);
        /* U11 */__right_value302 = come_decrement_ref_count2(__right_value302, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    while(1) {
        len_318=sizeof(addr_317);
        client_319=accept(sock_313,(struct sockaddr*)&addr_317,&len_318);
        if(        client_319<0) {
            (come_push_stackframe("libcomelang-net.c", 262, 22),__exception_result_var_b23=die(((char*)(__right_value303=xsprintf("Unable to accept")))), come_pop_stackframe(), __exception_result_var_b23);
            /* U11 */__right_value303 = come_decrement_ref_count2(__right_value303, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        ssl_320=SSL_new(ctx_314);
        SSL_set_fd(ssl_320,client_319);
        if(        SSL_accept(ssl_320)<=0) {
            ERR_print_errors_fp((stdout));
        }
        else {
            break__321=(_Bool)0;
            block(parent,ssl_320,&break__321);
            if(            break__321) {
                /*i*/come_call_finalizer3((&addr_317),sockaddr_in_finalize, 1, 0, 0, 0, (void*)0);
                break;
            }
        }
        SSL_shutdown(ssl_320);
        SSL_free(ssl_320);
        close(client_319);
        /*i*/come_call_finalizer3((&addr_317),sockaddr_in_finalize, 1, 0, 0, 0, (void*)0);
    }
    close(sock_313);
    SSL_CTX_free(ctx_314);
    while(0) {
        continue;
    }
    __result228__ = 0;
    /*i*/come_call_finalizer3((&addr_316),sockaddr_in_finalize, 1, 0, 0, 0, (void*)0);
    return __result228__;
}

int come_mysql_init(){
void* __right_value304 = (void*)0;
_Bool __exception_result_var_b24;
    if(    gComeMySQL==((void*)0)) {
        gComeMySQL=mysql_init(((void*)0));
        if(        gComeMySQL==((void*)0)) {
            (come_push_stackframe("libcomelang-net.c", 299, 23),__exception_result_var_b24=die(((char*)(__right_value304=xsprintf("mysql_init failed")))), come_pop_stackframe(), __exception_result_var_b24);
            /* U11 */__right_value304 = come_decrement_ref_count2(__right_value304, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
    }
    return 0;
}

void come_mysql_final(){
    if(    gComeMySQL) {
        mysql_close(gComeMySQL);
        gComeMySQL=((void*)0);
    }
}

int finish_with_error(){
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
_Bool __exception_result_var_b25;
    mysql_close(gComeMySQL);
    (come_push_stackframe("libcomelang-net.c", 317, 24),__exception_result_var_b25=die(((char*)(__right_value306=xsprintf("\%s",((char*)(__right_value305=charp_to_string(mysql_error(gComeMySQL)))))))), come_pop_stackframe(), __exception_result_var_b25);
    /* U11 */__right_value305 = come_decrement_ref_count2(__right_value305, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value306 = come_decrement_ref_count2(__right_value306, (void*)0, (void*)0, 1, 0, 0, (void*)0);
}

int create_user_if_not_exists(char* user, char* password, char* root_password, char* host_name){
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
char* check_user_query_322;
struct st_mysql_res* result_323;
char** row_324;
int user_exists_325;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
_Bool _if_conditional1;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
_Bool _if_conditional2;
int __result229__;
    come_mysql_init();
    if(    mysql_real_connect(gComeMySQL,host_name,"root",root_password,((void*)0),0,((void*)0),0)==((void*)0)) {
        finish_with_error();
    }
    check_user_query_322=(char*)come_increment_ref_count(xsprintf("SELECT COUNT(*) FROM mysql.user WHERE user = '\%s' AND host = '\%s'",((char*)(__right_value307=charp_to_string(user))),((char*)(__right_value308=charp_to_string(host_name)))));
    /* U11 */__right_value307 = come_decrement_ref_count2(__right_value307, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value308 = come_decrement_ref_count2(__right_value308, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(    mysql_query(gComeMySQL,check_user_query_322)==((void*)0)) {
        finish_with_error();
    }
    result_323=mysql_store_result(gComeMySQL);
    if(    result_323==((void*)0)) {
        finish_with_error();
    }
    row_324=mysql_fetch_row(result_323);
    user_exists_325=atoi(row_324[0]);
    mysql_free_result(result_323);
    if(    user_exists_325==0) {
        if(        (_if_conditional1=(mysql_query(gComeMySQL,((char*)(__right_value313=xsprintf("CREATE USER '\%s'@'\%s' IDENTIFIED BY '\%s'",((char*)(__right_value310=charp_to_string(user))),((char*)(__right_value311=charp_to_string(host_name))),((char*)(__right_value312=charp_to_string(password)))))))==((void*)0))),        /* U10 */ (__right_value310 = come_decrement_ref_count2(__right_value310, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        /* U10 */ (__right_value311 = come_decrement_ref_count2(__right_value311, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        /* U10 */ (__right_value312 = come_decrement_ref_count2(__right_value312, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        /* U10 */ (__right_value313 = come_decrement_ref_count2(__right_value313, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional1) {
            finish_with_error();
        }
        if(        (_if_conditional2=(mysql_query(gComeMySQL,((char*)(__right_value316=xsprintf("GRANT ALL PRIVILEGES ON *.* TO '\%s'@'\%s'",((char*)(__right_value314=charp_to_string(user))),((char*)(__right_value315=charp_to_string(host_name)))))))==((void*)0))),        /* U10 */ (__right_value314 = come_decrement_ref_count2(__right_value314, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        /* U10 */ (__right_value315 = come_decrement_ref_count2(__right_value315, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        /* U10 */ (__right_value316 = come_decrement_ref_count2(__right_value316, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional2) {
            finish_with_error();
        }
        if(        mysql_query(gComeMySQL,"FLUSH PRIVILEGES")==((void*)0)) {
            finish_with_error();
        }
    }
    come_mysql_final();
    __result229__ = 0;
    /* U13 */check_user_query_322 = come_decrement_ref_count2(check_user_query_322, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result229__;
}

int create_database_if_not_exists(char* database_name, char* user_name, char* password, char* host_name){
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
char* create_db_query_326;
int __result230__;
    come_mysql_init();
    if(    mysql_real_connect(gComeMySQL,host_name,user_name,password,((void*)0),0,((void*)0),0)==((void*)0)) {
        finish_with_error();
    }
    create_db_query_326=(char*)come_increment_ref_count(xsprintf("CREATE DATABASE IF NOT EXISTS \%s",((char*)(__right_value317=charp_to_string(database_name)))));
    /* U11 */__right_value317 = come_decrement_ref_count2(__right_value317, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(    mysql_query(gComeMySQL,create_db_query_326)==((void*)0)) {
        finish_with_error();
    }
    come_mysql_final();
    __result230__ = 0;
    /* U13 */create_db_query_326 = come_decrement_ref_count2(create_db_query_326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result230__;
}

int xmysql_query(char* query, char* user, char* password, _Bool create_user, _Bool create_database, char* root_password, char* database_name, char* host_name){
    if(    create_user) {
        create_user_if_not_exists(user,password,root_password,"localhost");
    }
    if(    create_database) {
        create_database_if_not_exists(database_name,user,password,host_name);
    }
    come_mysql_init();
    if(    mysql_select_db(gComeMySQL,database_name)==((void*)0)) {
        finish_with_error();
    }
    if(    mysql_real_connect(gComeMySQL,host_name,user,password,database_name,0,((void*)0),0)==((void*)0)) {
        finish_with_error();
    }
    if(    mysql_query(gComeMySQL,query)==((void*)0)) {
        finish_with_error();
    }
    come_mysql_final();
    return 0;
}

struct list$1list$1charphph* xmysql_query_and_fetch_row(char* query, char* user, char* password, _Bool create_user, _Bool create_database, char* root_password, char* database_name, char* host_name){
void* __result_obj__=(void*)0;
struct st_mysql_res* res_327;
int num_fields_328;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct list$1list$1charphph* result_329;
char** row_334;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct list$1charph* li_335;
int i_336;
void* __right_value326 = (void*)0;
struct list$1list$1charphph* __result234__;
row_334 = (void*)0;
    if(    create_user) {
        create_user_if_not_exists(user,password,root_password,"localhost");
    }
    if(    create_database) {
        create_database_if_not_exists(database_name,user,password,host_name);
    }
    come_mysql_init();
    if(    mysql_select_db(gComeMySQL,database_name)==((void*)0)) {
        finish_with_error();
    }
    if(    mysql_real_connect(gComeMySQL,host_name,user,password,database_name,0,((void*)0),0)==((void*)0)) {
        finish_with_error();
    }
    if(    mysql_query(gComeMySQL,query)==((void*)0)) {
        finish_with_error();
    }
    res_327=mysql_store_result(gComeMySQL);
    if(    res_327) {
        finish_with_error();
    }
    num_fields_328=mysql_num_fields(res_327);
    result_329=(struct list$1list$1charphph*)come_increment_ref_count(list$1list$1charphph_initialize((struct list$1list$1charphph*)come_increment_ref_count((struct list$1list$1charphph*)come_calloc(1, sizeof(struct list$1list$1charphph)*(1), "libcomelang-net.c", 421, "list$1list$1charphph"))));
    while((row_334=mysql_fetch_row(res_327))!=((void*)0)) {
        li_335=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-net.c", 425, "list$1charph"))));
        for(        i_336=0;        i_336<num_fields_328;        i_336++        ){
            if(            row_334[i_336]) {
                list$1charph_add(li_335,(char*)come_increment_ref_count(__builtin_string(row_334[i_336])));
            }
        }
        list$1list$1charphph_add(result_329,(struct list$1charph*)come_increment_ref_count(li_335));
        /*i*/come_call_finalizer3(li_335,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    mysql_free_result(res_327);
    come_mysql_final();
    __result234__ = gComeFunResultObject = __result_obj__ = result_329;
    /*i*/come_call_finalizer3(result_329,list$1list$1charphphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static struct list$1list$1charphph* list$1list$1charphph_initialize(struct list$1list$1charphph* self){
void* __result_obj__=(void*)0;
struct list$1list$1charphph* __result231__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result231__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1list$1charphphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static void list$1list$1charphphp_finalize(struct list$1list$1charphph* self){
struct list_item$1list$1charphph* it_330;
struct list_item$1list$1charphph* prev_it_331;
    it_330=self->head;
    while(it_330!=((void*)0)) {
        prev_it_331=it_330;
        it_330=it_330->next;
        /*i*/come_call_finalizer3(prev_it_331,list_item$1list$1charphphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1list$1charphphp_finalize(struct list_item$1list$1charphph* self){
struct list$1charph* __dec_obj32;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj32=self->item;
            come_call_finalizer3(__dec_obj32,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_332;
struct list_item$1charph* prev_it_333;
    it_332=self->head;
    while(it_332!=((void*)0)) {
        prev_it_333=it_332;
        it_332=it_332->next;
        /*i*/come_call_finalizer3(prev_it_333,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value323 = (void*)0;
struct list_item$1charph* litem_337;
char* __dec_obj33;
void* __right_value324 = (void*)0;
struct list_item$1charph* litem_338;
char* __dec_obj34;
void* __right_value325 = (void*)0;
struct list_item$1charph* litem_339;
char* __dec_obj35;
struct list$1charph* __result232__;
    if(    self->len==0) {
        litem_337=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value323=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1065, "list_item$1charph"))));
        litem_337->prev=((void*)0);
        litem_337->next=((void*)0);
        __dec_obj33=litem_337->item;
        litem_337->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_337;
        self->head=litem_337;
    }
    else if(    self->len==1) {
        litem_338=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value324=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1075, "list_item$1charph"))));
        litem_338->prev=self->head;
        litem_338->next=((void*)0);
        __dec_obj34=litem_338->item;
        litem_338->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_338;
        self->head->next=litem_338;
    }
    else {
        litem_339=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value325=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1085, "list_item$1charph"))));
        litem_339->prev=self->tail;
        litem_339->next=((void*)0);
        __dec_obj35=litem_339->item;
        litem_339->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_339;
        self->tail=litem_339;
    }
    self->len++;
    __result232__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static struct list$1list$1charphph* list$1list$1charphph_add(struct list$1list$1charphph* self, struct list$1charph* item){
void* __result_obj__=(void*)0;
void* __right_value327 = (void*)0;
struct list_item$1list$1charphph* litem_340;
struct list$1charph* __dec_obj36;
void* __right_value328 = (void*)0;
struct list_item$1list$1charphph* litem_341;
struct list$1charph* __dec_obj37;
void* __right_value329 = (void*)0;
struct list_item$1list$1charphph* litem_342;
struct list$1charph* __dec_obj38;
struct list$1list$1charphph* __result233__;
    if(    self->len==0) {
        litem_340=(struct list_item$1list$1charphph*)come_increment_ref_count(((struct list_item$1list$1charphph*)(__right_value327=(struct list_item$1list$1charphph*)come_calloc(1, sizeof(struct list_item$1list$1charphph)*(1), "./comelang.h", 1065, "list_item$1list$1charphph"))));
        litem_340->prev=((void*)0);
        litem_340->next=((void*)0);
        __dec_obj36=litem_340->item;
        litem_340->item=(struct list$1charph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj36,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_340;
        self->head=litem_340;
    }
    else if(    self->len==1) {
        litem_341=(struct list_item$1list$1charphph*)come_increment_ref_count(((struct list_item$1list$1charphph*)(__right_value328=(struct list_item$1list$1charphph*)come_calloc(1, sizeof(struct list_item$1list$1charphph)*(1), "./comelang.h", 1075, "list_item$1list$1charphph"))));
        litem_341->prev=self->head;
        litem_341->next=((void*)0);
        __dec_obj37=litem_341->item;
        litem_341->item=(struct list$1charph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj37,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_341;
        self->head->next=litem_341;
    }
    else {
        litem_342=(struct list_item$1list$1charphph*)come_increment_ref_count(((struct list_item$1list$1charphph*)(__right_value329=(struct list_item$1list$1charphph*)come_calloc(1, sizeof(struct list_item$1list$1charphph)*(1), "./comelang.h", 1085, "list_item$1list$1charphph"))));
        litem_342->prev=self->tail;
        litem_342->next=((void*)0);
        __dec_obj38=litem_342->item;
        litem_342->item=(struct list$1charph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj38,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_342;
        self->tail=litem_342;
    }
    self->len++;
    __result233__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

