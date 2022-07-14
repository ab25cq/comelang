; ModuleID = 'src/cmd/6c/frontend.c'
source_filename = "src/cmd/6c/frontend.c"

%__sFILE = type { i8*, i32, i32, i16, i16, %__sbuf, i32, i8*, i32* (i8*)*, i32* (i8*, i8*, i32)*, i64* (i8*, i64, i32)*, i32* (i8*, i8*, i32)*, %__sbuf, %__sFILEX*, i32, [3 x i8], [1 x i8], %__sbuf, i32, i64 }
%__sFILEX = type opaque
%__sbuf = type { i8*, i32 }
%CTy = type { i32, i32, i32, i32, %come_anon21 }
%come_anon21 = type { %come_anon23 }
%come_anon23 = type { i32, i8*, %Vec*, %Vec* }
%Vec = type { i32, i32, i8** }
%rlimit = type { i64, i64 }
%rusage = type { %timeval, %timeval, i64, i64, i64, i64, i64, i64, i64, i64, i64, i64, i64, i64, i64, i64 }
%timeval = type { i64, i32 }
%__siginfo = type { i32, i32, i32, i32, i32, i32, i8*, %sigval, i64, [7 x i64] }
%sigval = type { i8* }
%come_anon6 = type { i32, i32 }
%come_anon7 = type { i64, i64 }
%come_anon8 = type { i64, i64 }
%List = type { i32, %ListEnt* }
%ListEnt = type { %ListEnt*, i8* }
%Map = type { %List* }
%StrSet = type { %StrSet*, i8* }
%SrcPos = type { i8*, i32, i32 }
%Tok = type { i32, i8*, i32, i32, %StrSet*, %SrcPos }
%Lexer = type { %__sFILE*, %SrcPos, %SrcPos, %SrcPos, i32, i32, i32, i32, i32, [4097 x i8] }
%StructIter = type { %CTy*, i32, [1024 x i32] }
%StructMember = type { i32, i8*, %CTy* }
%Const = type { i8*, i64 }
%Node = type { i32, %SrcPos, %CTy*, %come_anon67 }
%come_anon67 = type { %come_anon72 }
%come_anon72 = type { i8*, i8*, i8*, %Node*, %Node*, %Node*, %Node* }
%come_anon27 = type { i32, i32 }
%Sym = type { i32, %SrcPos*, %CTy*, i8*, %Node*, %come_anon108 }
%come_anon108 = type { %come_anon110 }
%come_anon110 = type { %StkSlot*, %CTy*, i32, i32 }
%StkSlot = type { i32, i32, i32 }

@__mb_cur_max = external externally_initialized global i32
@suboptarg = external externally_initialized global i8*, align 4
@__stdinp = external externally_initialized global %__sFILE*, align 4
@__stdoutp = external externally_initialized global %__sFILE*, align 4
@__stderrp = external externally_initialized global %__sFILE*, align 4
@sys_nerr = external externally_initialized global i32
@sys_errlist = external externally_initialized global i8**, align 4
@0 = private unnamed_addr constant [15 x i8] c"internal error\00", align 1
@1 = private unnamed_addr constant [15 x i8] c"internal error\00", align 1
@_cvoid = global %CTy { i32 0, i32 0, i32 0, i32 1, i1 false }
@cvoid = global %CTy* @_cvoid
@_cchar = global %CTy { i32 1, i32 1, i32 1, i32 0, i1 false }
@cchar = global %CTy* @_cchar
@_cshort = global %CTy { i32 1, i32 2, i32 2, i32 0, i1 false }
@cshort = global %CTy* @_cshort
@_cint = global %CTy { i32 1, i32 4, i32 4, i32 0, i1 false }
@cint = global %CTy* @_cint
@_clong = global %CTy { i32 1, i32 8, i32 8, i32 0, i1 false }
@clong = global %CTy* @_clong
@_cllong = global %CTy { i32 1, i32 8, i32 8, i32 0, i1 false }
@cllong = global %CTy* @_cllong
@_cuchar = global %CTy { i32 1, i32 1, i32 1, i32 0, i1 false }
@cuchar = global %CTy* @_cuchar
@_cushort = global %CTy { i32 1, i32 2, i32 2, i32 0, i1 false }
@cushort = global %CTy* @_cushort
@_cuint = global %CTy { i32 1, i32 4, i32 4, i32 0, i1 false }
@cuint = global %CTy* @_cuint
@_culong = global %CTy { i32 1, i32 8, i32 8, i32 0, i1 false }
@culong = global %CTy* @_culong
@_cullong = global %CTy { i32 1, i32 8, i32 8, i32 0, i1 false }
@cullong = global %CTy* @_cullong
@_cfloat = global %CTy { i32 1, i32 8, i32 8, i32 0, i1 false }
@cfloat = global %CTy* @_cfloat
@_cdouble = global %CTy { i32 1, i32 8, i32 8, i32 0, i1 false }
@cdouble = global %CTy* @_cdouble
@_cldouble = global %CTy { i32 1, i32 8, i32 8, i32 0, i1 false }
@cldouble = global %CTy* @_cldouble

; Function Attrs: nofree nosync nounwind willreturn
declare void @llvm.va_start(i8*) #0

declare void @__builtin_va_start(i8*)

; Function Attrs: nofree nosync nounwind willreturn
declare void @llvm.va_end(i8*) #0

declare void @__builtin_va_end(i8*)

; Function Attrs: inaccessiblememonly nofree nosync nounwind willreturn
declare void @llvm.assume(i1 noundef) #1

; Function Attrs: nofree nosync nounwind willreturn
declare i64 @llvm.readcyclecounter() #0

; Function Attrs: nofree nosync nounwind readnone speculatable willreturn
declare i8 @llvm.bitreverse.i8(i8) #2

; Function Attrs: nofree nosync nounwind readnone speculatable willreturn
declare i16 @llvm.bitreverse.i16(i16) #2

; Function Attrs: nofree nosync nounwind readnone speculatable willreturn
declare i32 @llvm.bitreverse.i32(i32) #2

; Function Attrs: nofree nosync nounwind readnone speculatable willreturn
declare i64 @llvm.bitreverse.i64(i64) #2

; Function Attrs: nofree nosync nounwind readnone speculatable willreturn
declare i8 @llvm.fshl.i8(i8, i8) #2

; Function Attrs: nofree nosync nounwind readnone speculatable willreturn
declare i16 @llvm.fshl.i16(i16, i16) #2

; Function Attrs: nofree nosync nounwind readnone speculatable willreturn
declare i32 @llvm.fshl.i32(i32, i32) #2

; Function Attrs: nofree nosync nounwind readnone speculatable willreturn
declare i64 @llvm.fshl.i64(i64, i64) #2

; Function Attrs: nofree nosync nounwind readnone speculatable willreturn
declare i8 @llvm.fshr.i8(i8, i8) #2

; Function Attrs: nofree nosync nounwind readnone speculatable willreturn
declare i16 @llvm.fshr.i16(i16, i16) #2

; Function Attrs: nofree nosync nounwind readnone speculatable willreturn
declare i32 @llvm.fshr.i32(i32, i32) #2

; Function Attrs: nofree nosync nounwind readnone speculatable willreturn
declare i64 @llvm.fshr.i64(i64, i64) #2

; Function Attrs: nofree nosync nounwind readnone speculatable willreturn
declare double @llvm.canonicalize.f64(double) #2

; Function Attrs: nofree nosync nounwind readnone speculatable willreturn
declare float @llvm.canonicalize.f32(float) #2

; Function Attrs: nofree nosync nounwind readnone speculatable willreturn
declare fp128 @llvm.canonicalize.f80(fp128) #2

; Function Attrs: nofree nosync nounwind readnone speculatable willreturn
declare i64 @llvm.objectsize.i64.p0i8(i8*, i1 immarg, i1 immarg, i1 immarg) #2

declare void (i32)* @signal(i32, void (i32)*)

declare i32 @getpriority(i32, i32)

declare i32 @getiopolicy_np(i32, i32)

declare i32 @getrlimit(i32, %rlimit*)

declare i32 @getrusage(i32, %rusage*)

declare i32 @setpriority(i32, i32, i32)

declare i32 @setiopolicy_np(i32, i32, i32)

declare i32 @setrlimit(i32, %rlimit*)

declare i32 @wait(i32*)

declare i32 @waitpid(i32, i32*, i32)

declare i32 @waitid(i32, i32, %__siginfo*, i32)

declare i32 @wait3(i32*, i32, %rusage*)

declare i32 @wait4(i32, i32*, i32, %rusage*)

declare i8* @alloca(i64)

declare i8* @malloc(i64)

declare i8* @calloc(i64, i64)

declare void @free(i8*)

declare i8* @realloc(i8*, i64)

declare i8* @valloc(i64)

declare i8* @aligned_alloc(i64, i64)

declare i32 @posix_memalign(i8**, i64, i64)

declare void @abort()

declare i32 @abs(i32)

declare i32 @atexit(void ()*)

declare double @atof(i8*)

declare i32 @atoi(i8*)

declare i64 @atol(i8*)

declare i64 @atoll(i8*)

declare i8* @bsearch(i8*, i8*, i64, i64, i32* (i8*, i8*)*)

declare %come_anon6 @div(i32, i32)

declare void @exit(i32)

declare i8* @getenv(i8*)

declare i64 @labs(i64)

declare %come_anon7 @ldiv(i64, i64)

declare i64 @llabs(i64)

declare %come_anon8 @lldiv(i64, i64)

declare i32 @mblen(i8*, i64)

declare i64 @mbstowcs(i32*, i8*, i64)

declare i32 @mbtowc(i32*, i8*, i64)

declare void @qsort(i8*, i64, i64, i32* (i8*, i8*)*)

declare i32 @rand()

declare void @srand(i32)

declare double @strtod(i8*, i8**)

declare float @strtof(i8*, i8**)

declare i64 @strtol(i8*, i8**, i32)

declare fp128 @strtold(i8*, i8**)

declare i64 @strtoll(i8*, i8**, i32)

declare i64 @strtoul(i8*, i8**, i32)

declare i64 @strtoull(i8*, i8**, i32)

declare i32 @system(i8*)

declare i64 @wcstombs(i8*, i32*, i64)

declare i32 @wctomb(i8*, i32)

declare void @_Exit(i32)

declare i64 @a64l(i8*)

declare double @drand48()

declare i8* @ecvt(double, i32, i32*, i32*)

declare double @erand48(i16*)

declare i8* @fcvt(double, i32, i32*, i32*)

declare i8* @gcvt(double, i32, i8*)

declare i32 @getsubopt(i8**, i8**, i8**)

declare i32 @grantpt(i32)

declare i8* @initstate(i32, i8*, i64)

declare i64 @jrand48(i16*)

declare i8* @l64a(i64)

declare void @lcong48(i16*)

declare i64 @lrand48()

declare i8* @mktemp(i8*)

declare i32 @mkstemp(i8*)

declare i64 @mrand48()

declare i64 @nrand48(i16*)

declare i32 @posix_openpt(i32)

declare i8* @ptsname(i32)

declare i32 @ptsname_r(i32, i8*, i64)

declare i32 @putenv(i8*)

declare i64 @random()

declare i32 @rand_r(i32*)

declare i8* @"realpath$DARWIN_EXTSN"(i8*, i8*)

declare i16* @seed48(i16*)

declare i32 @setenv(i8*, i8*, i32)

declare void @setkey(i8*)

declare i8* @setstate(i8*)

declare void @srand48(i64)

declare void @srandom(i32)

declare i32 @unlockpt(i32)

declare i32 @unsetenv(i8*)

declare i32 @arc4random()

declare void @arc4random_addrandom(i8*, i32)

declare void @arc4random_buf(i8*, i64)

declare void @arc4random_stir()

declare i32 @arc4random_uniform(i32)

declare i32 @atexit_b(void ()*)

declare i8* @bsearch_b(i8*, i8*, i64, i64, i32 (i8*, i8*)*)

declare i8* @cgetcap(i8*, i8*, i32)

declare i32 @cgetclose()

declare i32 @cgetent(i8**, i8**, i8*)

declare i32 @cgetfirst(i8**, i8**)

declare i32 @cgetmatch(i8*, i8*)

declare i32 @cgetnext(i8**, i8**)

declare i32 @cgetnum(i8*, i8*, i64*)

declare i32 @cgetset(i8*)

declare i32 @cgetstr(i8*, i8*, i8**)

declare i32 @cgetustr(i8*, i8*, i8**)

declare i32 @"daemon$1050"(i32, i32)

declare i8* @devname(i32, i16)

declare i8* @devname_r(i32, i16, i8*, i32)

declare i8* @getbsize(i32*, i64*)

declare i32 @getloadavg(double*, i32)

declare i8* @getprogname()

declare void @setprogname(i8*)

declare i32 @heapsort(i8*, i64, i64, i32* (i8*, i8*)*)

declare i32 @heapsort_b(i8*, i64, i64, i32 (i8*, i8*)*)

declare i32 @mergesort(i8*, i64, i64, i32* (i8*, i8*)*)

declare i32 @mergesort_b(i8*, i64, i64, i32 (i8*, i8*)*)

declare void @psort(i8*, i64, i64, i32* (i8*, i8*)*)

declare void @psort_b(i8*, i64, i64, i32 (i8*, i8*)*)

declare void @psort_r(i8*, i64, i64, i8*, i32* (i8*, i8*, i8*)*)

declare void @qsort_b(i8*, i64, i64, i32 (i8*, i8*)*)

declare void @qsort_r(i8*, i64, i64, i8*, i32* (i8*, i8*, i8*)*)

declare i32 @radixsort(i8**, i32, i8*, i32)

declare i32 @rpmatch(i8*)

declare i32 @sradixsort(i8**, i32, i8*, i32)

declare void @sranddev()

declare void @srandomdev()

declare i8* @reallocf(i8*, i64)

declare i64 @strtonum(i8*, i64, i64, i8**)

declare i64 @strtoq(i8*, i8**, i32)

declare i64 @strtouq(i8*, i8**, i32)

declare i32 @renameat(i32, i8*, i32, i8*)

declare i32 @renamex_np(i8*, i8*, i32)

declare i32 @renameatx_np(i32, i8*, i32, i8*, i32)

declare void @clearerr(%__sFILE*)

declare i32 @fclose(%__sFILE*)

declare i32 @feof(%__sFILE*)

declare i32 @ferror(%__sFILE*)

declare i32 @fflush(%__sFILE*)

declare i32 @fgetc(%__sFILE*)

declare i32 @fgetpos(%__sFILE*, i64*)

declare i8* @fgets(i8*, i32, %__sFILE*)

declare %__sFILE* @fopen(i8*, i8*)

declare i32 @fprintf(%__sFILE*, i8*, ...)

declare i32 @fputc(i32, %__sFILE*)

declare i32 @fputs(i8*, %__sFILE*)

declare i64 @fread(i8*, i64, i64, %__sFILE*)

declare %__sFILE* @freopen(i8*, i8*, %__sFILE*)

declare i32 @fscanf(%__sFILE*, i8*, ...)

declare i32 @fseek(%__sFILE*, i64, i32)

declare i32 @fsetpos(%__sFILE*, i64*)

declare i64 @ftell(%__sFILE*)

declare i64 @fwrite(i8*, i64, i64, %__sFILE*)

declare i32 @getc(%__sFILE*)

declare i32 @getchar()

declare i8* @gets(i8*)

declare void @perror(i8*)

declare i32 @printf(i8*, ...)

declare i32 @putc(i32, %__sFILE*)

declare i32 @putchar(i32)

declare i32 @puts(i8*)

declare i32 @remove(i8*)

declare i32 @rename(i8*, i8*)

declare void @rewind(%__sFILE*)

declare i32 @scanf(i8*, ...)

declare void @setbuf(%__sFILE*, i8*)

declare i32 @setvbuf(%__sFILE*, i8*, i32, i64)

declare i32 @sprintf(i8*, i8*, ...)

declare i32 @sscanf(i8*, i8*, ...)

declare %__sFILE* @tmpfile()

declare i8* @tmpnam(i8*)

declare i32 @ungetc(i32, %__sFILE*)

declare i32 @vfprintf(%__sFILE*, i8*, { i32, i32, i8*, i8* }*)

declare i32 @vprintf(i8*, { i32, i32, i8*, i8* }*)

declare i32 @vsprintf(i8*, i8*, { i32, i32, i8*, i8* }*)

declare i8* @ctermid(i8*)

declare %__sFILE* @fdopen(i32, i8*)

declare i32 @fileno(%__sFILE*)

declare i32 @pclose(%__sFILE*)

declare %__sFILE* @popen(i8*, i8*)

declare i32 @__srget(%__sFILE*)

declare i32 @__svfscanf(%__sFILE*, i8*, { i32, i32, i8*, i8* }*)

declare i32 @__swbuf(i32, %__sFILE*)

declare void @flockfile(%__sFILE*)

declare i32 @ftrylockfile(%__sFILE*)

declare void @funlockfile(%__sFILE*)

declare i32 @getc_unlocked(%__sFILE*)

declare i32 @getchar_unlocked()

declare i32 @putc_unlocked(i32, %__sFILE*)

declare i32 @putchar_unlocked(i32)

declare i32 @getw(%__sFILE*)

declare i32 @putw(i32, %__sFILE*)

declare i8* @tempnam(i8*, i8*)

declare i32 @fseeko(%__sFILE*, i64, i32)

declare i64 @ftello(%__sFILE*)

declare i32 @snprintf(i8*, i64, i8*, ...)

declare i32 @vfscanf(%__sFILE*, i8*, { i32, i32, i8*, i8* }*)

declare i32 @vscanf(i8*, { i32, i32, i8*, i8* }*)

declare i32 @vsnprintf(i8*, i64, i8*, { i32, i32, i8*, i8* }*)

declare i32 @vsscanf(i8*, i8*, { i32, i32, i8*, i8* }*)

declare i32 @dprintf(i32, i8*, ...)

declare i32 @vdprintf(i32, i8*, { i32, i32, i8*, i8* }*)

declare i64 @getdelim(i8**, i64*, i32, %__sFILE*)

declare i64 @getline(i8**, i64*, %__sFILE*)

declare %__sFILE* @fmemopen(i8*, i64, i8*)

declare %__sFILE* @open_memstream(i8**, i64*)

declare i32 @asprintf(i8**, i8*, ...)

declare i8* @ctermid_r(i8*)

declare i8* @fgetln(%__sFILE*, i64*)

declare i8* @fmtcheck(i8*, i8*)

declare i32 @fpurge(%__sFILE*)

declare void @setbuffer(%__sFILE*, i8*, i32)

declare i32 @setlinebuf(%__sFILE*)

declare i32 @vasprintf(i8**, i8*, { i32, i32, i8*, i8* }*)

declare %__sFILE* @funopen(i8*, i32 (i8*, i8*, i32)*, i32 (i8*, i8*, i32)*, i64 (i8*, i64, i32)*, i32 (i8*)*)

declare i8* @memchr(i8*, i32, i64)

declare i32 @memcmp(i8*, i8*, i64)

declare i8* @memcpy(i8*, i8*, i64)

declare i8* @memmove(i8*, i8*, i64)

declare i8* @memset(i8*, i32, i64)

declare i8* @strcat(i8*, i8*)

declare i8* @strchr(i8*, i32)

declare i32 @strcmp(i8*, i8*)

declare i32 @strcoll(i8*, i8*)

declare i8* @strcpy(i8*, i8*)

declare i64 @strcspn(i8*, i8*)

declare i8* @strerror(i32)

declare i64 @strlen(i8*)

declare i8* @strncat(i8*, i8*, i64)

declare i32 @strncmp(i8*, i8*, i64)

declare i8* @strncpy(i8*, i8*, i64)

declare i8* @strpbrk(i8*, i8*)

declare i8* @strrchr(i8*, i32)

declare i64 @strspn(i8*, i8*)

declare i8* @strstr(i8*, i8*)

declare i8* @strtok(i8*, i8*)

declare i64 @strxfrm(i8*, i8*, i64)

declare i8* @strtok_r(i8*, i8*, i8**)

declare i32 @strerror_r(i32, i8*, i64)

declare i8* @strdup(i8*)

declare i8* @memccpy(i8*, i8*, i32, i64)

declare i8* @stpcpy(i8*, i8*)

declare i8* @stpncpy(i8*, i8*, i64)

declare i8* @strndup(i8*, i64)

declare i64 @strnlen(i8*, i64)

declare i8* @strsignal(i32)

declare i32 @memset_s(i8*, i64, i32, i64)

declare i8* @memmem(i8*, i64, i8*, i64)

declare void @memset_pattern4(i8*, i8*, i64)

declare void @memset_pattern8(i8*, i8*, i64)

declare void @memset_pattern16(i8*, i8*, i64)

declare i8* @strcasestr(i8*, i8*)

declare i8* @strnstr(i8*, i8*, i64)

declare i64 @strlcat(i8*, i8*, i64)

declare i64 @strlcpy(i8*, i8*, i64)

declare void @strmode(i32, i8*)

declare i8* @strsep(i8**, i8*)

declare void @swab(i8*, i8*, i64)

declare i32 @timingsafe_bcmp(i8*, i8*, i64)

declare i32 @strsignal_r(i32, i8*, i64)

declare i32 @bcmp(i8*, i8*, i64)

declare void @bcopy(i8*, i8*, i64)

declare void @bzero(i8*, i64)

declare i8* @index(i8*, i32)

declare i8* @rindex(i8*, i32)

declare i32 @ffs(i32)

declare i32 @strcasecmp(i8*, i8*)

declare i32 @strncasecmp(i8*, i8*, i64)

declare i32 @ffsl(i64)

declare i32 @ffsll(i64)

declare i32 @fls(i32)

declare i32 @flsl(i64)

declare i32 @flsll(i64)

declare void @panic(i8*, ...)

declare %List* @list()

declare void @listappend(%List*, i8*)

declare void @listprepend(%List*, i8*)

declare void @listinsert(%List*, i32, i8*)

declare i8* @listpopfront(%List*)

declare %Map* @map()

declare i8* @mapget(%Map*, i8*)

declare void @mapdel(%Map*, i8*)

declare void @mapset(%Map*, i8*, i8*)

declare %StrSet* @strsetadd(%StrSet*, i8*)

declare i32 @strsethas(%StrSet*, i8*)

declare %StrSet* @strsetintersect(%StrSet*, %StrSet*)

declare %Vec* @vec()

declare i8* @vecget(%Vec*, i32)

declare void @vecset(%Vec*, i32, i8*)

declare void @vecappend(%Vec*, i8*)

declare void @dumpty(%CTy*)

declare void @errorf(i8*, ...)

declare void @errorposf(%SrcPos*, i8*, ...)

declare void @cppinit(i8*, %Vec*)

declare i8* @tokktostr(i32)

declare %Tok* @lex(%Lexer*)

declare %Tok* @pp()

declare %CTy* @newtype(i32)

declare %CTy* @mkptr(%CTy*)

declare i32 @isvoid(%CTy*)

declare i32 @isftype(%CTy*)

declare i32 @isitype(%CTy*)

declare i32 @isarithtype(%CTy*)

declare i32 @isptr(%CTy*)

declare i32 @ischarptr(%CTy*)

declare i32 @ischararray(%CTy*)

declare i32 @isfunc(%CTy*)

declare i32 @isfuncptr(%CTy*)

declare i32 @isstruct(%CTy*)

declare i32 @isarray(%CTy*)

declare i32 @sametype(%CTy*, %CTy*)

declare i32 @convrank(%CTy*)

declare i32 @canrepresent(%CTy*, %CTy*)

declare i32 @getstructiter(%StructIter*, %CTy*, i8*)

declare i32 @structnext(%StructIter*)

declare i32 @structoffsetfromname(%CTy*, i8*)

declare %CTy* @structtypefromname(%CTy*, i8*)

declare void @initstructiter(%StructIter*, %CTy*)

declare void @structwalk(%StructIter*, %StructMember**, i32*)

declare void @addtostruct(%CTy*, i8*, %CTy*)

declare void @finalizestruct(%SrcPos*, %CTy*)

declare void @parse()

declare i8* @newlabel()

declare %Const* @foldexpr(%Node*)

define i64 @getmaxval(%CTy* %0) !dbg !4 {
entry:
  %l = alloca %CTy*, align 8, !dbg !10
  %l1 = alloca %CTy**, align 8, !dbg !10
  store %CTy* %0, %CTy** %l, align 8
  store %CTy** %l, %CTy*** %l1, align 8
  %l2 = load %CTy*, %CTy** %l, align 8, !dbg !11
  %field = getelementptr inbounds %CTy, %CTy* %l2, i32 0, i32 0, !dbg !11
  %t = load i32, i32* %field, align 4, !dbg !11
  %eq = icmp eq i32 %t, 6, !dbg !11
  br i1 %eq, label %cond_jump_then, label %cond_end, !dbg !11

cond_jump_then:                                   ; preds = %entry
  ret i64 -1, !dbg !12

cond_end:                                         ; preds = %entry
  %l3 = load %CTy*, %CTy** %l, align 8, !dbg !13
  %l4 = load %CTy*, %CTy** %l, align 8, !dbg !13
  %field5 = getelementptr inbounds %CTy, %CTy* %l4, i32 0, i32 4, !dbg !13
  %come_anon28 = load %come_anon21, %come_anon21* %field5, align 8, !dbg !13
  %field6 = getelementptr inbounds %come_anon21, %come_anon21* %field5, i32 0, i32 0, !dbg !13
  %icastO = bitcast %come_anon23* %field6 to %come_anon27*, !dbg !13
  %Prim = load %come_anon27, %come_anon27* %icastO, align 4, !dbg !13
  %field7 = getelementptr inbounds %come_anon27, %come_anon27* %icastO, i32 0, i32 1, !dbg !13
  %type = load i32, i32* %field7, align 4, !dbg !13
  %eqtmp = icmp eq i32 %type, 0, !dbg !14
  br i1 %eqtmp, label %cond_then_block, label %cond_else_blockX, !dbg !14

end_blockX:                                       ; preds = %cond_else_blockX53
  call void (i8*, ...) @panic(i8* bitcast ([15 x i8]* @0 to i8*)), !dbg !15
  ret i64 0, !dbg !16

cond_then_block:                                  ; preds = %cond_end
  %l8 = load %CTy*, %CTy** %l, align 8, !dbg !17
  %l9 = load %CTy*, %CTy** %l, align 8, !dbg !17
  %field10 = getelementptr inbounds %CTy, %CTy* %l9, i32 0, i32 4, !dbg !17
  %come_anon2811 = load %come_anon21, %come_anon21* %field10, align 8, !dbg !17
  %field12 = getelementptr inbounds %come_anon21, %come_anon21* %field10, i32 0, i32 0, !dbg !17
  %icastO13 = bitcast %come_anon23* %field12 to %come_anon27*, !dbg !17
  %Prim14 = load %come_anon27, %come_anon27* %icastO13, align 4, !dbg !17
  %field15 = getelementptr inbounds %come_anon27, %come_anon27* %icastO13, i32 0, i32 0, !dbg !17
  %issigned = load i32, i32* %field15, align 4, !dbg !17
  %icmpA = icmp ne i32 %issigned, 0, !dbg !17
  br i1 %icmpA, label %cond_jump_then16, label %cond_else_block, !dbg !17

cond_else_blockX:                                 ; preds = %cond_end
  %eqtmp20 = icmp eq i32 %type, 1, !dbg !18
  br i1 %eqtmp20, label %cond_then_block18, label %cond_else_blockX19, !dbg !18

cond_jump_then16:                                 ; preds = %cond_then_block
  ret i64 127, !dbg !19

cond_else_block:                                  ; preds = %cond_then_block
  ret i64 255, !dbg !20

cond_end17:                                       ; No predecessors!
  br label %cond_then_block18, !dbg !18

cond_then_block18:                                ; preds = %cond_else_blockX, %cond_end17
  %l21 = load %CTy*, %CTy** %l, align 8, !dbg !21
  %l22 = load %CTy*, %CTy** %l, align 8, !dbg !21
  %field23 = getelementptr inbounds %CTy, %CTy* %l22, i32 0, i32 4, !dbg !21
  %come_anon2824 = load %come_anon21, %come_anon21* %field23, align 8, !dbg !21
  %field25 = getelementptr inbounds %come_anon21, %come_anon21* %field23, i32 0, i32 0, !dbg !21
  %icastO26 = bitcast %come_anon23* %field25 to %come_anon27*, !dbg !21
  %Prim27 = load %come_anon27, %come_anon27* %icastO26, align 4, !dbg !21
  %field28 = getelementptr inbounds %come_anon27, %come_anon27* %icastO26, i32 0, i32 0, !dbg !21
  %issigned29 = load i32, i32* %field28, align 4, !dbg !21
  %icmpA30 = icmp ne i32 %issigned29, 0, !dbg !21
  br i1 %icmpA30, label %cond_jump_then31, label %cond_else_block32, !dbg !21

cond_else_blockX19:                               ; preds = %cond_else_blockX
  %eqtmp36 = icmp eq i32 %type, 2, !dbg !22
  br i1 %eqtmp36, label %cond_then_block34, label %cond_else_blockX35, !dbg !22
  br label %cond_then_block34, !dbg !23

cond_jump_then31:                                 ; preds = %cond_then_block18
  ret i64 32767, !dbg !24

cond_else_block32:                                ; preds = %cond_then_block18
  ret i64 65535, !dbg !25

cond_end33:                                       ; No predecessors!
  br label %cond_then_block34, !dbg !22

cond_then_block34:                                ; preds = %cond_else_blockX35, %cond_else_blockX19, %cond_else_blockX19, %cond_end33
  %l39 = load %CTy*, %CTy** %l, align 8, !dbg !26
  %l40 = load %CTy*, %CTy** %l, align 8, !dbg !26
  %field41 = getelementptr inbounds %CTy, %CTy* %l40, i32 0, i32 4, !dbg !26
  %come_anon2842 = load %come_anon21, %come_anon21* %field41, align 8, !dbg !26
  %field43 = getelementptr inbounds %come_anon21, %come_anon21* %field41, i32 0, i32 0, !dbg !26
  %icastO44 = bitcast %come_anon23* %field43 to %come_anon27*, !dbg !26
  %Prim45 = load %come_anon27, %come_anon27* %icastO44, align 4, !dbg !26
  %field46 = getelementptr inbounds %come_anon27, %come_anon27* %icastO44, i32 0, i32 0, !dbg !26
  %issigned47 = load i32, i32* %field46, align 4, !dbg !26
  %icmpA48 = icmp ne i32 %issigned47, 0, !dbg !26
  br i1 %icmpA48, label %cond_jump_then49, label %cond_else_block50, !dbg !26

cond_else_blockX35:                               ; preds = %cond_else_blockX19
  %eqtmp38 = icmp eq i32 %type, 3, !dbg !23
  br i1 %eqtmp38, label %cond_then_block34, label %cond_else_blockX37, !dbg !23

cond_else_blockX37:                               ; preds = %cond_else_blockX35
  %eqtmp54 = icmp eq i32 %type, 4, !dbg !27
  br i1 %eqtmp54, label %cond_then_block52, label %cond_else_blockX53, !dbg !27

cond_jump_then49:                                 ; preds = %cond_then_block34
  ret i64 2147483647, !dbg !28

cond_else_block50:                                ; preds = %cond_then_block34
  ret i64 -1, !dbg !29

cond_end51:                                       ; No predecessors!
  br label %cond_then_block52, !dbg !27

cond_then_block52:                                ; preds = %cond_else_blockX37, %cond_end51
  %l55 = load %CTy*, %CTy** %l, align 8, !dbg !30
  %l56 = load %CTy*, %CTy** %l, align 8, !dbg !30
  %field57 = getelementptr inbounds %CTy, %CTy* %l56, i32 0, i32 4, !dbg !30
  %come_anon2858 = load %come_anon21, %come_anon21* %field57, align 8, !dbg !30
  %field59 = getelementptr inbounds %come_anon21, %come_anon21* %field57, i32 0, i32 0, !dbg !30
  %icastO60 = bitcast %come_anon23* %field59 to %come_anon27*, !dbg !30
  %Prim61 = load %come_anon27, %come_anon27* %icastO60, align 4, !dbg !30
  %field62 = getelementptr inbounds %come_anon27, %come_anon27* %icastO60, i32 0, i32 0, !dbg !30
  %issigned63 = load i32, i32* %field62, align 4, !dbg !30
  %icmpA64 = icmp ne i32 %issigned63, 0, !dbg !30
  br i1 %icmpA64, label %cond_jump_then65, label %cond_else_block66, !dbg !30

cond_else_blockX53:                               ; preds = %cond_end67, %cond_else_blockX37
  br label %end_blockX, !dbg !31

cond_jump_then65:                                 ; preds = %cond_then_block52
  ret i64 -1, !dbg !32

cond_else_block66:                                ; preds = %cond_then_block52
  ret i64 -1, !dbg !31

cond_end67:                                       ; No predecessors!
  br label %cond_else_blockX53, !dbg !31
}

define i64 @getminval(%CTy* %0) !dbg !33 {
entry:
  %l = alloca %CTy*, align 8, !dbg !34
  %l1 = alloca %CTy**, align 8, !dbg !34
  store %CTy* %0, %CTy** %l, align 8
  store %CTy** %l, %CTy*** %l1, align 8
  %l2 = load %CTy*, %CTy** %l, align 8, !dbg !35
  %field = getelementptr inbounds %CTy, %CTy* %l2, i32 0, i32 0, !dbg !35
  %t = load i32, i32* %field, align 4, !dbg !35
  %eq = icmp eq i32 %t, 6, !dbg !35
  br i1 %eq, label %cond_jump_then, label %cond_end, !dbg !35

cond_jump_then:                                   ; preds = %entry
  ret i64 -2147483648, !dbg !36

cond_end:                                         ; preds = %entry
  %l3 = load %CTy*, %CTy** %l, align 8, !dbg !37
  %l4 = load %CTy*, %CTy** %l, align 8, !dbg !37
  %field5 = getelementptr inbounds %CTy, %CTy* %l4, i32 0, i32 4, !dbg !37
  %come_anon28 = load %come_anon21, %come_anon21* %field5, align 8, !dbg !37
  %field6 = getelementptr inbounds %come_anon21, %come_anon21* %field5, i32 0, i32 0, !dbg !37
  %icastO = bitcast %come_anon23* %field6 to %come_anon27*, !dbg !37
  %Prim = load %come_anon27, %come_anon27* %icastO, align 4, !dbg !37
  %field7 = getelementptr inbounds %come_anon27, %come_anon27* %icastO, i32 0, i32 0, !dbg !37
  %issigned = load i32, i32* %field7, align 4, !dbg !37
  %logical_denial = icmp eq i32 %issigned, 0, !dbg !37
  %castOOOO = zext i1 %logical_denial to i32, !dbg !37
  %icmpA = icmp ne i32 %castOOOO, 0, !dbg !37
  br i1 %icmpA, label %cond_jump_then8, label %cond_end9, !dbg !37

cond_jump_then8:                                  ; preds = %cond_end
  ret i64 0, !dbg !38

cond_end9:                                        ; preds = %cond_end
  %l10 = load %CTy*, %CTy** %l, align 8, !dbg !39
  %l11 = load %CTy*, %CTy** %l, align 8, !dbg !39
  %field12 = getelementptr inbounds %CTy, %CTy* %l11, i32 0, i32 4, !dbg !39
  %come_anon2813 = load %come_anon21, %come_anon21* %field12, align 8, !dbg !39
  %field14 = getelementptr inbounds %come_anon21, %come_anon21* %field12, i32 0, i32 0, !dbg !39
  %icastO15 = bitcast %come_anon23* %field14 to %come_anon27*, !dbg !39
  %Prim16 = load %come_anon27, %come_anon27* %icastO15, align 4, !dbg !39
  %field17 = getelementptr inbounds %come_anon27, %come_anon27* %icastO15, i32 0, i32 1, !dbg !39
  %type = load i32, i32* %field17, align 4, !dbg !39
  %eqtmp = icmp eq i32 %type, 0, !dbg !40
  br i1 %eqtmp, label %cond_then_block, label %cond_else_blockX, !dbg !40

end_blockX:                                       ; preds = %cond_else_blockX27
  call void (i8*, ...) @panic(i8* bitcast ([15 x i8]* @1 to i8*)), !dbg !41
  ret i64 0, !dbg !42

cond_then_block:                                  ; preds = %cond_end9
  ret i64 -128, !dbg !43
  br label %cond_else_blockX19, !dbg !44

cond_else_blockX:                                 ; preds = %cond_end9
  %eqtmp20 = icmp eq i32 %type, 1, !dbg !44
  br i1 %eqtmp20, label %cond_then_block18, label %cond_else_blockX19, !dbg !44

cond_then_block18:                                ; preds = %cond_else_blockX
  ret i64 -32768, !dbg !45
  br label %cond_else_blockX22, !dbg !46

cond_else_blockX19:                               ; preds = %cond_else_blockX, %cond_then_block
  %eqtmp23 = icmp eq i32 %type, 2, !dbg !46
  br i1 %eqtmp23, label %cond_then_block21, label %cond_else_blockX22, !dbg !46
  br label %cond_else_blockX24, !dbg !47

cond_then_block21:                                ; preds = %cond_else_blockX22, %cond_else_blockX19
  ret i64 -2147483648, !dbg !48
  br label %cond_else_blockX27, !dbg !49

cond_else_blockX22:                               ; preds = %cond_else_blockX19, %cond_then_block18
  %eqtmp25 = icmp eq i32 %type, 3, !dbg !47
  br i1 %eqtmp25, label %cond_then_block21, label %cond_else_blockX24, !dbg !47

cond_else_blockX24:                               ; preds = %cond_else_blockX22, %cond_else_blockX19
  %eqtmp28 = icmp eq i32 %type, 4, !dbg !49
  br i1 %eqtmp28, label %cond_then_block26, label %cond_else_blockX27, !dbg !49

cond_then_block26:                                ; preds = %cond_else_blockX24
  ret i64 poison, !dbg !50
  br label %cond_else_blockX27, !dbg !50

cond_else_blockX27:                               ; preds = %cond_then_block26, %cond_else_blockX24, %cond_then_block21
  br label %end_blockX, !dbg !50
}

declare void @emitinit(%__sFILE*)

declare void @emitsym(%Sym*)

declare void @penddata(i8*, %CTy*, %Node*, i32)

declare void @emitend()

attributes #0 = { nofree nosync nounwind willreturn }
attributes #1 = { inaccessiblememonly nofree nosync nounwind willreturn }
attributes #2 = { nofree nosync nounwind readnone speculatable willreturn }

!llvm.dbg.cu = !{!0}
!llvm.module.flags = !{!2, !3}

!0 = distinct !DICompileUnit(language: DW_LANG_C, file: !1, producer: "come", isOptimized: false, runtimeVersion: 0, emissionKind: FullDebug, splitDebugInlining: false)
!1 = !DIFile(filename: "src/cmd/6c/frontend.c", directory: "/Users/ab25cq/comelang/c")
!2 = !{i32 7, !"Dwarf Version", i32 4}
!3 = !{i32 2, !"Debug Info Version", i32 3}
!4 = distinct !DISubprogram(name: "getmaxval", linkageName: "getmaxval", scope: !1, file: !1, line: 6, type: !5, scopeLine: 6, spFlags: DISPFlagLocalToUnit | DISPFlagDefinition, unit: !0, retainedNodes: !9)
!5 = !DISubroutineType(types: !6)
!6 = !{!7}
!7 = !DIDerivedType(tag: DW_TAG_pointer_type, name: "pointer", baseType: !8, size: 64, dwarfAddressSpace: 0)
!8 = !DIBasicType(name: "CTy", size: 64)
!9 = !{}
!10 = !DILocation(line: 6, scope: !4)
!11 = !DILocation(line: 8, scope: !4)
!12 = !DILocation(line: 9, scope: !4)
!13 = !DILocation(line: 10, scope: !4)
!14 = !DILocation(line: 11, scope: !4)
!15 = !DILocation(line: 33, scope: !4)
!16 = !DILocation(line: 34, scope: !4)
!17 = !DILocation(line: 12, scope: !4)
!18 = !DILocation(line: 16, scope: !4)
!19 = !DILocation(line: 13, scope: !4)
!20 = !DILocation(line: 15, scope: !4)
!21 = !DILocation(line: 17, scope: !4)
!22 = !DILocation(line: 21, scope: !4)
!23 = !DILocation(line: 22, scope: !4)
!24 = !DILocation(line: 18, scope: !4)
!25 = !DILocation(line: 20, scope: !4)
!26 = !DILocation(line: 23, scope: !4)
!27 = !DILocation(line: 27, scope: !4)
!28 = !DILocation(line: 24, scope: !4)
!29 = !DILocation(line: 26, scope: !4)
!30 = !DILocation(line: 28, scope: !4)
!31 = !DILocation(line: 31, scope: !4)
!32 = !DILocation(line: 29, scope: !4)
!33 = distinct !DISubprogram(name: "getminval", linkageName: "getminval", scope: !1, file: !1, line: 38, type: !5, scopeLine: 38, spFlags: DISPFlagLocalToUnit | DISPFlagDefinition, unit: !0, retainedNodes: !9)
!34 = !DILocation(line: 38, scope: !33)
!35 = !DILocation(line: 40, scope: !33)
!36 = !DILocation(line: 41, scope: !33)
!37 = !DILocation(line: 42, scope: !33)
!38 = !DILocation(line: 43, scope: !33)
!39 = !DILocation(line: 44, scope: !33)
!40 = !DILocation(line: 45, scope: !33)
!41 = !DILocation(line: 55, scope: !33)
!42 = !DILocation(line: 56, scope: !33)
!43 = !DILocation(line: 46, scope: !33)
!44 = !DILocation(line: 47, scope: !33)
!45 = !DILocation(line: 48, scope: !33)
!46 = !DILocation(line: 49, scope: !33)
!47 = !DILocation(line: 50, scope: !33)
!48 = !DILocation(line: 51, scope: !33)
!49 = !DILocation(line: 52, scope: !33)
!50 = !DILocation(line: 53, scope: !33)
