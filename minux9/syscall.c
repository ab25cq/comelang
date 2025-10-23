#include "common.h"

char uart_getc();
size_t uart_readline(char *buf, size_t maxlen);
size_t uart_readn(char *buf, size_t len) ;

int Sys_write() {
//*(char*)0x10000000UL = 'Y';
    struct context_t* tf = (struct context_t*)TRAPFRAME;
    int fd = (int)tf->a0;
    uint64_t u = tf->a1;
    int len = (int)tf->a2;

    char kbuf[256];
    struct proc *p = gProc[gActiveProc];
    int left = len, total = 0;

    while (left > 0) {
        int n = left > (int)sizeof(kbuf) ? (int)sizeof(kbuf) : left;
        if (copyin(p->pagetable, kbuf, u, n) < 0) {
            return -1;
        }
        
        /* まず TTY/STDOUT を優先して処理する */
        if (is_stdout(fd) || is_tty(fd)) {
            for (int i = 0; i < n; i++) putchar(kbuf[i]);
            total += n;
        }
        else if (is_pipe(fd)) {
            // パイプの内部バッファに配慮して 16B スライスで書く
            int off = 0;
            while (off < n) {
                int m = n - off;
                if (m > 16) m = 16;
                int w = pipewrite(fd, kbuf + off, m);
                if (w < 0) return (total > 0) ? total : w;
                off   += w;
                total += w;
            }
        }
        else {
            ssize_t w = fs_write(fd, kbuf, n);
            if (w < 0) return (total > 0) ? total : (int)w;
            total += w;
        }
        u += n;
        left -= n;

/*
        if (is_pipe(fd)) {
            int w = pipewrite(fd, kbuf, n);
            if (w < 0) return w;
        if (is_pipe(fd)) {
             // パイプの内部バッファ（例: 32B）を越えないように
            // さらに細かく分割して書き込む
            int off = 0;
            while (off < n) {
                int m = n - off;
                // PIPE_SIZE を知らなくても安全なように 16B スライスに制限
                if (m > 16) m = 16;
                int w = pipewrite(fd, kbuf + off, m);
                if (w < 0) return w;
                off   += w;
                total += w;
            }
        } else if (is_stdout(fd) || is_tty(fd)) {
            for (int i = 0; i < n; i++) putchar(kbuf[i]);
        } else {
            ssize_t w = fs_write(fd, kbuf, n);
            if (w < 0) return (int)w;
        }
        u += n; left -= n; total += n;
*/
    }
//*(char*)0x10000000UL = 'Z';
    return total;
}


/*
int Sys_write()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    
    uintptr_t arg0 = trapframe->a0;
    uintptr_t arg1 = trapframe->a1;
    uintptr_t arg2 = trapframe->a2;
    uintptr_t arg3 = trapframe->a3;
    uintptr_t arg4 = trapframe->a4;
    uintptr_t arg5 = trapframe->a5;
    uintptr_t arg6 = trapframe->a6;
    uintptr_t arg_syscall_no = trapframe->a7;
    
    int fd = arg0;
    
    char kernel_buf[256];
    uint64_t user_va = arg1;
    int len = arg2;
    
    memset(kernel_buf, 0, 256);
    
    struct proc *p = gProc[gActiveProc]; // 現在のプロセスを取得

    int ret = copyin(p->pagetable, kernel_buf, user_va, len);
    
    if(ret < 0) {
        panic("copyinstr");
    }
    
    struct file** file_table = get_current_file_table();

    if(is_pipe(fd)) {
        int w = pipewrite(fd, kernel_buf, len);
        return w;
    }
    else if(is_stdout(fd)) {
        for(int i=0; i<len; i++) {
            putchar(kernel_buf[i]);
        }
        return len;
    }
    else if(is_tty(fd)) {
        for(int i=0; i<len; i++) {
            putchar(kernel_buf[i]);
        }
        return len;
    }
    else {
        // 通常ファイルへの書き込み
        ssize_t w = fs_write(fd, kernel_buf, len);
        return (int)w;
    }
}
*/

int Sys_exit()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    
    uintptr_t arg0 = trapframe->a0;
    uintptr_t arg1 = trapframe->a1;
    uintptr_t arg2 = trapframe->a2;
    uintptr_t arg3 = trapframe->a3;
    uintptr_t arg4 = trapframe->a4;
    uintptr_t arg5 = trapframe->a5;
    uintptr_t arg6 = trapframe->a6;
    uintptr_t arg_syscall_no = trapframe->a7;
    
    struct proc *p = gProc[gActiveProc]; // 現在のプロセスを取得
    
    fs_exit(p->file_table);
    
    p->xstatus = arg0;
    p->zombie = 1;
    
    remove_kernel_state(gActiveProc);
    
    yield();
    
    return 0;
}

int Sys_sleep()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;

    int seconds = (int)trapframe->a0;
    if (seconds <= 0) {
        return 0;
    }

    const uint64_t TICKS_PER_SEC = 1000000ULL; // CSR time increments ~1MHz
    uint64_t start = r_time();
    uint64_t deadline = start + (uint64_t)seconds * TICKS_PER_SEC;

    while (r_time() < deadline) {
        yield();
    }

    return 0;
}

int Sys_tcsetpgrp()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;

    int fildes = (int)trapframe->a0;
    if (fildes <= 0) {
        return 0;
    }
    int pgid_id = (int)trapframe->a1;
    if (pgid_id <= 0) {
        return 0;
    }
    
    struct proc* p = gProc[gActiveProc];
    
    p->pgrp = pgid_id;

    return 0;
}

int Sys_getpid()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;

    return gActiveProc;
}

int Sys_wait()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    
    uintptr_t arg0 = trapframe->a0;
    uintptr_t arg1 = trapframe->a1;
    uintptr_t arg2 = trapframe->a2;
    uintptr_t arg3 = trapframe->a3;
    uintptr_t arg4 = trapframe->a4;
    uintptr_t arg5 = trapframe->a5;
    uintptr_t arg6 = trapframe->a6;
    uintptr_t arg_syscall_no = trapframe->a7;
    
    int* status_va = (int*)arg0;
    
    struct proc* active_proc = gProc[gActiveProc];
    
    int exit_status = 0;
    pid_t child_pid = -1;
    while(1) { // Keep searching until a zombie is found and handled
        struct proc* zombie_proc = NULL;
        for (int n=0; n<gNumProc; n++) {
            struct proc* it = gProc[n];
            
            if(it == NULL) {
            }
            else if(it->zombie && it->pgrp == active_proc->pgrp) {
                zombie_proc = it;
                child_pid = n; // This is problematic if gProc is not an array-like list
                break;
            }
        }

        if(zombie_proc) {
            exit_status = zombie_proc->xstatus;
            free_fs_table(zombie_proc->file_table);
            free_proc(zombie_proc);
            remove_kernel_state(child_pid);
            //gProc.remove_by_pointer(zombie_proc);
            gProc[child_pid] = NULL;
            break; // Exit the while(1) loop
        }
        else {
            yield(); // No zombie found, yield and try again
        }
    }
    
    struct proc *p = gProc[gActiveProc]; // 現在のプロセスを取得
    if (copyout(p->pagetable, (uint64_t)status_va, (void*)&exit_status, sizeof(int)) < 0) {
        panic("wait: copyout failed");
    }
    
    return child_pid;
}

int Sys_isatty()
{
    struct context_t* tf = (struct context_t*)TRAPFRAME;
    int fd = (int)tf->a0;
    if (fd < 0 || fd >= MAX_OPEN_FILES) return 0;
    if (is_pipe(fd)) return 0;
    if (is_stdin(fd) || is_stdout(fd) || is_tty(fd)) return 1;
    // treat stderr as tty as well
    struct file** ft = get_current_file_table();
    if (ft[fd] && ft[fd]->kind == FK_STDERR) return 1;
    return 0;
}

int Sys_open()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    
    uintptr_t arg0 = trapframe->a0;
    uintptr_t arg1 = trapframe->a1; // flags
    uintptr_t arg2 = trapframe->a2; // mode
    uintptr_t arg3 = trapframe->a3;
    uintptr_t arg4 = trapframe->a4;
    uintptr_t arg5 = trapframe->a5;
    uintptr_t arg6 = trapframe->a6;
    uintptr_t arg_syscall_no = trapframe->a7;
    
    char kernel_buf[256];
    uint64_t user_va = arg0;
    
    struct proc *p = gProc[gActiveProc]; // 現在のプロセスを取得
    copyinstr(p->pagetable, kernel_buf, user_va, 256);
            
    int result = fs_open2(kernel_buf, (int)arg1, (int)arg2);
    
    return result;
}

// Open a directory only; returns fd or -1
int Sys_opendir()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;

    uintptr_t arg0 = trapframe->a0; // const char* path (user VA)

    char kernel_buf[256];
    uint64_t user_va = arg0;

    struct proc *p = gProc[gActiveProc];
    if (copyinstr(p->pagetable, kernel_buf, user_va, sizeof(kernel_buf)) < 0) {
        return -1;
    }

    // Use fs_open2 with default flags/mode
    int fd = fs_open2(kernel_buf, 0, 0);
    if (fd < 0) {
        return -1;
    }

    // Verify the target is a directory
    struct file** file_table = get_current_file_table();
    if (!file_table[fd]) {
        return -1;
    }
    if (file_table[fd]->din.type != T_DIR) {
        fs_close(fd, 0 /* massive */);
        return -1;
    }

    return fd;
}

// getcwd: copy current working directory string into user buffer
int Sys_getcwd()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;

    uint64_t destva = (uint64_t)trapframe->a0;
    int      maxlen = (int)trapframe->a1;
    if (maxlen <= 0) return -1;

    struct proc *p = gProc[gActiveProc];
    const char *cwd = p->cwd ? p->cwd : "/";

    int src_len  = (int)strlen(cwd);
    int copy_len = src_len;
    if (copy_len > maxlen - 1) copy_len = maxlen - 1;

    if (copyout(p->pagetable, destva, (void*)cwd, copy_len) < 0) return -1;
    char nul = '\0';
    if (copyout(p->pagetable, destva + copy_len, &nul, 1) < 0) return -1;

    return copy_len;

/*
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    
    uintptr_t arg0 = trapframe->a0;
    uintptr_t arg1 = trapframe->a1;
    uintptr_t arg2 = trapframe->a2;
    uintptr_t arg3 = trapframe->a3;
    uintptr_t arg4 = trapframe->a4;
    uintptr_t arg5 = trapframe->a5;
    uintptr_t arg6 = trapframe->a6;
    uintptr_t arg_syscall_no = trapframe->a7;
    
    uint64_t destva = arg0;
    
    int maxlen = arg1;
    if (maxlen <= 0) return -1;
    
    struct proc *p = gProc[gActiveProc];
    
    int len = strlen(p->cwd);
    // Defensive: ensure cwd is never empty when reported
    const char* src = p->cwd;
    
    char kernel_buf[4096];
    strncpy(kernel_buf, p->cwd, 4096);
    int ret = strlen(p->cwd);

    if (copyout(p->pagetable, destva, kernel_buf, ret) < 0) {
        panic("read: copyout failed");
    }

    return ret;
*/
}

// chdir: change current working directory
int Sys_chdir()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    uint64_t user_path = trapframe->a0;
    char kpath[256];
    struct proc *p = gProc[gActiveProc];
    if (copyinstr(p->pagetable, kpath, user_path, sizeof(kpath)) < 0) return -1;

    // If empty or ".", no-op success
    if (kpath[0] == '\0' || (kpath[0]=='.' && kpath[1]=='\0')) {
        return 0;
    }

    // build absolute normalized path supporting . and ..
    char abs[256];
    // inline normalize (duplicated logic to avoid sharing helper):
    char merged[256];
    if (kpath[0] == '/') { strncpy(merged, kpath, sizeof(merged)-1); merged[sizeof(merged)-1]='\0'; }
    else { strncpy(merged, p->cwd, sizeof(merged)-1); merged[sizeof(merged)-1]='\0'; int n=strlen(merged); if(!(n==1&&merged[0]=='/')){ if(n<(int)sizeof(merged)-1){ merged[n++]='/'; merged[n]='\0'; }} strncat(merged, kpath, sizeof(merged)-strlen(merged)-1); }
    { // normalize merged -> abs
        char tmp[256]; strncpy(tmp, merged, sizeof(tmp)-1); tmp[sizeof(tmp)-1]='\0';
        const char *s=tmp,*end=tmp+strlen(tmp),*tok; char comps[32][32]; int compn=0;
        while(s<end){ while(*s=='/') s++; if(!*s) break; tok=s; while(*s && *s!='/') s++; int len=s-tok; if(len==1 && tok[0]=='.'){} else if(len==2 && tok[0]=='.'&&tok[1]=='.'){ if(compn>0) compn--; } else if(len>0){ int l=len; if(l>31) l=31; for(int i=0;i<32;i++) comps[compn][i]=0; for(int i=0;i<l;i++) comps[compn][i]=tok[i]; comps[compn][l]='\0'; if(compn<31) compn++; }}
        int pos=0; abs[pos++]='/'; for(int i=0;i<compn;i++){ if(i && pos<(int)sizeof(abs)-1) abs[pos++]='/'; for(int j=0; comps[i][j] && pos<(int)sizeof(abs)-1; j++) abs[pos++]=comps[i][j]; } abs[pos]='\0'; if(pos==1) abs[1]='\0';
    }

    // Validate that abs points to a directory
    uint32_t inum = path_lookup(abs);
    if (inum == 0) return -1;
    struct dinode di; read_inode(inum, &di);
    if (di.type != T_DIR) return -1;

    // Set as new cwd
    strncpy(p->cwd, abs, sizeof(p->cwd));
    p->cwd[sizeof(p->cwd)-1] = '\0';
    return 0;
}

// mkdir: create directory
int Sys_mkdir()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    uint64_t user_path = trapframe->a0; int mode = (int)trapframe->a1;
    char kpath[256]; struct proc *p = gProc[gActiveProc];
    if (copyinstr(p->pagetable, kpath, user_path, sizeof(kpath)) < 0) return -1;
    return fs_mkdir(kpath, mode);
}

// rmdir: remove directory
int Sys_rmdir()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    uint64_t user_path = trapframe->a0; char kpath[256];
    struct proc *p = gProc[gActiveProc];
    if (copyinstr(p->pagetable, kpath, user_path, sizeof(kpath)) < 0) return -1;
    return fs_rmdir(kpath);
}

// unlink: remove file
int Sys_unlink()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    uint64_t user_path = trapframe->a0;
    char kpath[256];
    struct proc *p = gProc[gActiveProc];
    if (copyinstr(p->pagetable, kpath, user_path, sizeof(kpath)) < 0) return -1;
    return fs_unlink(kpath);
}

// rename: move/rename
int Sys_rename()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    uint64_t u_old = trapframe->a0;
    uint64_t u_new = trapframe->a1;
    char kold[256], knew[256];
    struct proc *p = gProc[gActiveProc];
    if (copyinstr(p->pagetable, kold, u_old, sizeof(kold)) < 0) return -1;
    if (copyinstr(p->pagetable, knew, u_new, sizeof(knew)) < 0) return -1;
    return fs_rename(kold, knew);
}

// link: hard link
int Sys_link()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    uint64_t u_old = trapframe->a0;
    uint64_t u_new = trapframe->a1;
    char kold[256], knew[256];
    struct proc *p = gProc[gActiveProc];
    if (copyinstr(p->pagetable, kold, u_old, sizeof(kold)) < 0) return -1;
    if (copyinstr(p->pagetable, knew, u_new, sizeof(knew)) < 0) return -1;
    return fs_link(kold, knew);
}

int Sys_symlink()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    uint64_t u_tgt = trapframe->a0;
    uint64_t u_lnk = trapframe->a1;
    char ktgt[256], klnk[256];
    struct proc *p = gProc[gActiveProc];
    if (copyinstr(p->pagetable, ktgt, u_tgt, sizeof(ktgt)) < 0) return -1;
    if (copyinstr(p->pagetable, klnk, u_lnk, sizeof(klnk)) < 0) return -1;
    return fs_symlink(ktgt, klnk);
}

int Sys_stat()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    uint64_t u_path = trapframe->a0;
    uint64_t u_st   = trapframe->a1;
    char kpath[256];
    struct stat kst;
    struct proc *p = gProc[gActiveProc];
    if (copyinstr(p->pagetable, kpath, u_path, sizeof(kpath)) < 0) return -1;
    if (fs_stat(kpath, &kst) < 0) return -1;
    if (copyout(p->pagetable, u_st, &kst, sizeof(kst)) < 0) return -1;
    return 0;
}

int Sys_readlink()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    uint64_t u_path = trapframe->a0;
    uint64_t u_buf  = trapframe->a1;
    int      sz     = (int)trapframe->a2;
    char kpath[256];
    char kbuf[256]; if (sz > (int)sizeof(kbuf)) sz = sizeof(kbuf);
    struct proc *p = gProc[gActiveProc];
    if (copyinstr(p->pagetable, kpath, u_path, sizeof(kpath)) < 0) return -1;
    int n = fs_readlink(kpath, kbuf, sz);
    if (n < 0) return -1;
    if (copyout(p->pagetable, u_buf, kbuf, n) < 0) return -1;
    return n;
}

int Sys_lstat()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    uint64_t u_path = trapframe->a0;
    uint64_t u_st   = trapframe->a1;
    char kpath[256];
    struct stat kst;
    struct proc *p = gProc[gActiveProc];
    if (copyinstr(p->pagetable, kpath, u_path, sizeof(kpath)) < 0) return -1;
    if (fs_lstat(kpath, &kst) < 0) return -1;
    if (copyout(p->pagetable, u_st, &kst, sizeof(kst)) < 0) return -1;
    return 0;
}

int Sys_chmod()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    uint64_t u_path = trapframe->a0; uint32_t mode = (uint32_t)trapframe->a1;
    char kpath[256]; struct proc *p = gProc[gActiveProc];
    if (copyinstr(p->pagetable, kpath, u_path, sizeof(kpath)) < 0) return -1;
    return fs_chmod(kpath, mode);
}

int Sys_chown()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    uint64_t u_path = trapframe->a0; uint16_t uid = (uint16_t)trapframe->a1; uint16_t gid = (uint16_t)trapframe->a2;
    char kpath[256]; struct proc *p = gProc[gActiveProc];
    if (copyinstr(p->pagetable, kpath, u_path, sizeof(kpath)) < 0) return -1;
    return fs_chown(kpath, uid, gid);
}

int Sys_settimeofday()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    uint32_t sec = (uint32_t)trapframe->a0;
    g_time_offset = sec;
    return 0;
}

int Sys_utimes()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    uint64_t u_path = trapframe->a0;
    uint32_t at = (uint32_t)trapframe->a1;
    uint32_t mt = (uint32_t)trapframe->a2;
    char kpath[256];
    struct proc *p = gProc[gActiveProc];
    if (copyinstr(p->pagetable, kpath, u_path, sizeof(kpath)) < 0) return -1;
    return fs_utimes(kpath, at, mt);
}

int Sys_umask()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    uint32_t newmask = (uint32_t)trapframe->a0;
    struct proc *p = gProc[gActiveProc];
    uint32_t old = p->umask;
    if (newmask != (uint32_t)-1) p->umask = (uint16_t)(newmask & 0777);
    return old;
}

int Sys_gettimeofday()
{
    // seconds = g_time_offset + time/FS_TIME_HZ
    extern uint32_t g_time_offset;
    uint64_t t = r_time();
    uint32_t sec = g_time_offset + (uint32_t)(t / 1000000UL);
    return sec;
}

int Sys_getuid() { return gProc[gActiveProc]->uid; }
int Sys_getgid() { return gProc[gActiveProc]->gid; }

int Sys_setuid()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    uint16_t uid = (uint16_t)trapframe->a0;
    // Policy: allow root to set; allow self to set to same (no-op)
    struct proc *p = gProc[gActiveProc];
    if (p->uid == 0 || uid == p->uid) { p->uid = uid; return 0; }
    return -1;
}

int Sys_setgid()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    uint16_t gid = (uint16_t)trapframe->a0;
    struct proc *p = gProc[gActiveProc];
    if (p->uid == 0 || gid == p->gid) { p->gid = gid; return 0; }
    return -1;
}

int Sys_realpath()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    uint64_t u_path = trapframe->a0;
    uint64_t u_out  = trapframe->a1;
    int outsz       = (int)trapframe->a2;
    char kpath[256]; char kout[256];
    struct proc *p = gProc[gActiveProc];
    if (copyinstr(p->pagetable, kpath, u_path, sizeof(kpath)) < 0) return -1;
    if (fs_realpath(kpath, kout, sizeof(kout)) < 0) return -1;
    int n = strlen(kout)+1; if (n>outsz) n=outsz;
    if (copyout(p->pagetable, u_out, kout, n) < 0) return -1;
    return 0;
}


// readdir: return next valid dirent for a directory fd.
// args: a0=fd, a1=user_buf (struct dirent*)
// ret: 1 on success, 0 on EOF, -1 on error
int Sys_readdir()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    int fd = (int)trapframe->a0;
    uint64_t user_buf = trapframe->a1;
    int max_entries = (int)trapframe->a2;

    if (fd < 0 || fd >= MAX_OPEN_FILES) return -1;
    struct file** ft = get_current_file_table();
    struct file* f = ft[fd];
    if (!f) return -1;
    if (f->din.type != T_DIR) return -1;
    if (max_entries <= 0) return -1;

    int outcnt = 0;
    struct proc *p = gProc[gActiveProc];
    while (outcnt < max_entries && f->off < f->din.size) {
        struct dirent de;
        read_data(&f->din, f->off, (uint8_t*)&de, sizeof(struct dirent));
        f->off += sizeof(struct dirent);
        if (de.inum == 0)
            continue; // skip empty slots
        uint64_t dst = user_buf + (uint64_t)outcnt * sizeof(struct dirent);
        if (copyout(p->pagetable, dst, &de, sizeof(de)) < 0) {
            return -1;
        }
        outcnt++;
    }
    // If none copied and EOF reached, return 0; else number filled
    return outcnt;
}

// closedir: close directory fd (wrapper separate from close)
int Sys_closedir()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    int fd = (int)trapframe->a0;

    if (fd < 0 || fd >= MAX_OPEN_FILES) return -1;
    struct file** ft = get_current_file_table();
    struct file* f = ft[fd];
    if (!f) return -1;
    // Allow closing any regular file or directory opened via opendir/open
    return fs_close(fd, 0 /* massive */);
}

int Sys_fork()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    
    uintptr_t arg0 = trapframe->a0;
    uintptr_t arg1 = trapframe->a1;
    uintptr_t arg2 = trapframe->a2;
    uintptr_t arg3 = trapframe->a3;
    uintptr_t arg4 = trapframe->a4;
    uintptr_t arg5 = trapframe->a5;
    uintptr_t arg6 = trapframe->a6;
    uintptr_t arg_syscall_no = trapframe->a7;
    
    struct proc *p = gProc[gActiveProc]; // 現在のプロセスを取得
    
    int fork_flag;
    int child_proc_index = -1;
    alloc_prog((char*)p->program, p->program_size, fork_flag=1, 0, &child_proc_index);
    struct proc* child_proc = gProc[child_proc_index];
    
    uint64_t sp = child_proc->context.sp;
    
    child_proc->context = *trapframe;
    child_proc->context.mepc = child_proc->context.mepc + 4;
    child_proc->context.sp = sp;
    child_proc->context.a0 = 0;
    
    int result = child_proc_index;
   
    return result;
}

int Sys_execv()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    
    uintptr_t arg0 = trapframe->a0;
    uintptr_t arg1 = trapframe->a1;
    
    /// path ///
    char kernel_buf[256];
    uint64_t user_va = arg0;
    
    struct proc *p = gProc[gActiveProc]; // 現在のプロセスを取得
    if(copyinstr(p->pagetable, kernel_buf, user_va, 256) < 0) {
        trapframe->a0 = -1;
        return -1;
    }
    
    char* path = kernel_buf;
    
    /// argv ////
    char argv_storage[32][32];
    char* kargv[32];
    uint64_t user_argv = arg1;
    int argc = 0;

    for (argc = 0; argc < 32; argc++) {
        uintptr_t uargp;
        if (copyin(p->pagetable, (char*)&uargp, user_argv + argc * sizeof(uintptr_t), sizeof(uintptr_t)) < 0) {
            trapframe->a0 = -1;
            return -1;
        }
    
        if (uargp == 0) break; // End of argv
    
        if (copyinstr(p->pagetable, argv_storage[argc], uargp, sizeof(argv_storage[0])) < 0) {
            trapframe->a0 = -1;
            return -1;
        }
        kargv[argc] = argv_storage[argc];
    }
    kargv[argc] = NULL;

    // Read ELF file

    // Preserve current working directory across exec explicitly.
    // Although alloc_prog(exec_flag=1) copies it, keep a backup to be safe.
    char cwd_backup[128];
    {
        struct proc *par = gProc[gActiveProc];
        int i = 0; while (par->cwd[i] && i < (int)sizeof(cwd_backup)-1) { cwd_backup[i] = par->cwd[i]; i++; }
        cwd_backup[i] = '\0';
        if (i == 0) { cwd_backup[0] = '/'; cwd_backup[1] = '\0'; }
    }
    int fd = fs_open2(path, 0, 0);
    if(fd < 0) {
        trapframe->a0 = -1;
        return -1;
    }
    ssize_t size = fs_size(fd);
    char* elf_buf = calloc(1, size+32);
    //char elf_buf[4096]; //048]; // = calloc(1, size);
    int ret = fs_read(fd, elf_buf, size);
    fs_close(fd, 0 /* massive */);
    if (ret <= 0) {
        trapframe->a0 = -1;
        return -1;
    }
    
    // Check setuid/setgid on target
    struct stat stx; int has_stat = (fs_stat(path, &stx) == 0);
    uint16_t new_uid = gProc[gActiveProc]->uid;
    uint16_t new_gid = gProc[gActiveProc]->gid;
    if (has_stat && (stx.mode & S_ISUID)) new_uid = stx.uid;
    if (has_stat && (stx.mode & S_ISGID)) new_gid = stx.gid;

    // alloc_prog with exec_flag=1 replaces the current process's page table etc.
    int child_proc_index = 0;
    alloc_prog(elf_buf, size +32, /*fork_flag=*/0, /*exec_flag=*/1, &child_proc_index);
    
    // elf_buf is no longer needed after alloc_prog; free it now.
    free(elf_buf);
    
    struct proc* new_p = gProc[gActiveProc]; // gProc[gActiveProc] now points to the new process data
    // Apply setuid/setgid semantics
    new_p->uid = new_uid;
    new_p->gid = new_gid;

    // Final safeguard: if cwd became empty or root handling broke, restore backup
    if (!(new_p->cwd[0])) {
        int i = 0; while (cwd_backup[i] && i < (int)sizeof(new_p->cwd)-1) { new_p->cwd[i] = cwd_backup[i]; i++; }
        new_p->cwd[i] = '\0';
    }

    // Set up the user stack
    uint64_t sp = new_p->context.sp; // Initial top of stack
    uint64_t str_addrs[32];

    // Copy strings to stack
    for (int i = argc - 1; i >= 0; i--) {
        size_t len = strlen(kargv[i]) + 1;
        sp -= len;
        // sp &= ~7; // Align strings to 8 bytes for simplicity/safety
        if (copyout(new_p->pagetable, sp, kargv[i], len) < 0) {
            panic("execv: copyout string failed");
        }
        str_addrs[i] = sp;
    }
    
    // Align stack for argv array
    sp -= (argc + 1) * sizeof(uint64_t);
    sp &= ~7; 
    uint64_t argv_base = sp;

    // Copy argv pointers to stack
    for (int i = 0; i < argc; i++) {
        uint64_t ptr = str_addrs[i];
        if (copyout(new_p->pagetable, argv_base + i * sizeof(uint64_t), &ptr, sizeof(uint64_t)) < 0) {
            panic("execv: copyout ptr failed");
        }
    }
    // Null terminate argv
    uint64_t nullp = 0;
    if (copyout(new_p->pagetable, argv_base + argc * sizeof(uint64_t), &nullp, sizeof(uint64_t)) < 0) {
        panic("execv: copyout nullp failed");
    }

    // Update the trap frame for the new program
    // The assembly code will restore registers from this frame
    // and then do `sret`.
    trapframe->a0 = argc;
    trapframe->a1 = argv_base;
    trapframe->sp = sp;
    
    // The assembly code in trap.S increments sepc by 4 after the syscall handler.
    // To counteract this, we set mepc to entry-4. This is a hack.
    // A proper fix would involve changing trap.S to handle execv specially.
    trapframe->mepc = new_p->context.mepc - 4;

    // Update the global user_sp, which trap_return will use.
    user_sp = sp;
    
    return argc;
}

int Sys_execve()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    
    uintptr_t arg0 = trapframe->a0; // path
    uintptr_t arg1 = trapframe->a1; // argv
    uintptr_t arg2 = trapframe->a2; // envp
    
    // path
    char kernel_buf[256];
    uint64_t user_va = arg0;
    
    struct proc *p = gProc[gActiveProc];
    if(copyinstr(p->pagetable, kernel_buf, user_va, 256) < 0) {
        trapframe->a0 = -1;
        return -1;
    }
    char* path = kernel_buf;

    // argv
    char argv_storage[32][32];
    char* kargv[32];
    uint64_t user_argv = arg1;
    int argc = 0;
    for (argc = 0; argc < 32; argc++) {
        uintptr_t uargp;
        if (copyin(p->pagetable, (char*)&uargp, user_argv + argc * sizeof(uintptr_t), sizeof(uintptr_t)) < 0) {
            trapframe->a0 = -1;
            return -1;
        }
        if (uargp == 0) break;
        if (copyinstr(p->pagetable, argv_storage[argc], uargp, sizeof(argv_storage[0])) < 0) {
            trapframe->a0 = -1;
            return -1;
        }
        kargv[argc] = argv_storage[argc];
    }
    kargv[argc] = NULL;

    // envp
    char env_storage[16][128];
    char* kenv[16];
    uint64_t user_envp = arg2;
    int envc = 0;
    for (envc = 0; envc < 16; envc++) {
        uintptr_t uenvp;
        if (copyin(p->pagetable, (char*)&uenvp, user_envp + envc * sizeof(uintptr_t), sizeof(uintptr_t)) < 0) {
            trapframe->a0 = -1;
            return -1;
        }
        if (uenvp == 0) break;
        if (copyinstr(p->pagetable, env_storage[envc], uenvp, sizeof(env_storage[0])) < 0) {
            trapframe->a0 = -1;
            return -1;
        }
        kenv[envc] = env_storage[envc];
    }

    // open and load program
    int fd = fs_open2(path, 0, 0);
    if(fd < 0) { trapframe->a0 = -1; return -1; }
    ssize_t size = fs_size(fd);
    char* elf_buf = calloc(1, size+32);
    int ret = fs_read(fd, elf_buf, size);
    fs_close(fd, 0);
    if (ret <= 0) { trapframe->a0 = -1; return -1; }

    // setuid/gid checks
    struct stat stx; int has_stat = (fs_stat(path, &stx) == 0);
    uint16_t new_uid = gProc[gActiveProc]->uid;
    uint16_t new_gid = gProc[gActiveProc]->gid;
    if (has_stat && (stx.mode & S_ISUID)) new_uid = stx.uid;
    if (has_stat && (stx.mode & S_ISGID)) new_gid = stx.gid;

    int child_proc_index = 0;
    alloc_prog(elf_buf, size + 32, /*fork_flag=*/0, /*exec_flag=*/1, &child_proc_index);
    free(elf_buf);

    struct proc* new_p = gProc[gActiveProc];
    new_p->uid = new_uid;
    new_p->gid = new_gid;

    // Setup user stack with argv strings
    uint64_t sp = new_p->context.sp;
    uint64_t str_addrs[32];
    for (int i = argc - 1; i >= 0; i--) {
        size_t len = strlen(kargv[i]) + 1;
        sp -= len;
        if (copyout(new_p->pagetable, sp, kargv[i], len) < 0) {
            panic("execve: copyout argv string failed");
        }
        str_addrs[i] = sp;
    }
    sp -= (argc + 1) * sizeof(uint64_t);
    sp &= ~7ULL;
    uint64_t argv_base = sp;
    for (int i = 0; i < argc; i++) {
        uint64_t ptr = str_addrs[i];
        if (copyout(new_p->pagetable, argv_base + i * sizeof(uint64_t), &ptr, sizeof(uint64_t)) < 0) {
            panic("execve: copyout argv ptr failed");
        }
    }
    uint64_t nullp = 0;
    if (copyout(new_p->pagetable, argv_base + argc * sizeof(uint64_t), &nullp, sizeof(uint64_t)) < 0) {
        panic("execve: copyout argv null failed");
    }

    // Setup env strings and envp
    uint64_t env_addrs[16];
    for (int i = envc - 1; i >= 0; i--) {
        size_t len = strlen(kenv[i]) + 1;
        sp -= len;
        if (copyout(new_p->pagetable, sp, kenv[i], len) < 0) {
            panic("execve: copyout env string failed");
        }
        env_addrs[i] = sp;
    }
    sp -= (envc + 1) * sizeof(uint64_t);
    sp &= ~7ULL;
    uint64_t envp_base = sp;
    for (int i = 0; i < envc; i++) {
        uint64_t ptr = env_addrs[i];
        if (copyout(new_p->pagetable, envp_base + i * sizeof(uint64_t), &ptr, sizeof(uint64_t)) < 0) {
            panic("execve: copyout env ptr failed");
        }
    }
    if (copyout(new_p->pagetable, envp_base + envc * sizeof(uint64_t), &nullp, sizeof(uint64_t)) < 0) {
        panic("execve: copyout env null failed");
    }

    // Set registers for new program
    trapframe->a0 = argc;
    trapframe->a1 = argv_base;
    trapframe->a2 = envp_base;
    trapframe->sp = sp;
    trapframe->mepc = new_p->context.mepc - 4; // compensate sepc+4 in trap
    user_sp = sp;
    return argc;
}

// プロセスごとに管理するヒープ末尾
static uintptr_t heap_base;   // 初期化時: .bss末尾かユーザ領域の開始
static uintptr_t heap_end;    // 現在の brk

/*
int Sys_brk(void) {
    struct context_t* tf = (struct context_t*)TRAPFRAME;
    uintptr_t req = (uintptr_t)tf->a0;   // ユーザーの a0
    struct proc *p = gProc[gActiveProc];

    // 問い合わせ: brk(0) → 現在の brk を返す
    if (req == 0) {
        tf->a0 = heap_end;
        return heap_end;  // or 0; どちらでも sbrk 側は後で brk(0) を読みに行く
    }

    // ガード: 下限/上限
    if (req < heap_base) { tf->a0 = (long)-1; return -1; }
//    if (req > USER_TOP - PAGE_SIZE) { tf->a0 = (long)-1; return -1; }

    // ページ境界に合わせて map/unmap
    uintptr_t old = heap_end;
    if (req > old) {
        //map_user_pages(old, req - old, PTE_U|PTE_R|PTE_W);
        if(uvm_alloc(p, p->pagetable, old, req) < 0) {
            return -1;
        }
    } else if (req < old) {
        uvm_dealloc(p->pagetable, old, req);
    }
//    heap_end = req;
    p->sz = req;

    // 成功：0 でも heap_end でもどちらでも可（sbrk は最終的に brk(0) で読み直す）
    tf->a0 = 0;
    return 0;
}
*/


// In main.c, inside Sys_brk
int Sys_brk() {
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    uint64_t addr = trapframe->a0;
    struct proc *p = gProc[gActiveProc];
    uint64_t old_sz = p->sz;

    if (addr == 0) {
        return old_sz;
    }

    if (addr > old_sz) {
        if(uvm_alloc(p, p->pagetable, old_sz, addr) < 0) {
            return -1;
        }
    } else if (addr < old_sz) {
        uvm_dealloc(p->pagetable, old_sz, addr);
    }

    p->sz = addr;
    return p->sz;
}

/*
int Sys_brk() {
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    uint64_t addr = trapframe->a0;
    struct proc *p = gProc[gActiveProc];
    uint64_t old_sz = p->sz;

    if (addr == 0) {
        return old_sz;
    }

    if (addr > old_sz) {
        if(uvm_alloc(p->pagetable, old_sz, addr) < 0) {
            return -1; 
        }
    } else if (addr < old_sz) {
        uvm_dealloc(p->pagetable, old_sz, addr);
    }

    p->sz = addr;
    return p->sz;
}
*/

int Sys_dup2(void)
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    
    uintptr_t arg0 = trapframe->a0;
    uintptr_t arg1 = trapframe->a1;
    uintptr_t arg2 = trapframe->a2;
    uintptr_t arg3 = trapframe->a3;
    uintptr_t arg4 = trapframe->a4;
    uintptr_t arg5 = trapframe->a5;
    uintptr_t arg6 = trapframe->a6;
    uintptr_t arg_syscall_no = trapframe->a7;
    
    int oldfd = arg0;
    int newfd = arg1;
    
    fs_dup2(oldfd, newfd);
    
    return 0;
}

int Sys_pipe(void)
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    
    uintptr_t arg0 = trapframe->a0;
    uintptr_t arg1 = trapframe->a1;
    uintptr_t arg2 = trapframe->a2;
    uintptr_t arg3 = trapframe->a3;
    uintptr_t arg4 = trapframe->a4;
    uintptr_t arg5 = trapframe->a5;
    uintptr_t arg6 = trapframe->a6;
    uintptr_t arg_syscall_no = trapframe->a7;
    
    char* kernel_buf;
    uint64_t user_va = arg0;
    
    int pipe_fds[2];
    int* fd = (int*)pipe_fds;
    
    pipe_open(&fd[0], &fd[1]);
    
    struct proc *p = gProc[gActiveProc]; // 現在のプロセスを取得
    
    if(copyout(p->pagetable, (uint64_t)user_va, (char*)fd, sizeof(int)*2) < 0)
    {
        panic("copyout");
    }
    
    return 0;
}

int Sys_read()
{
//*(char*)0x10000000UL = 'X';
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    
    uintptr_t arg0 = trapframe->a0;
    uintptr_t arg1 = trapframe->a1;
    uintptr_t arg2 = trapframe->a2;
    uintptr_t arg3 = trapframe->a3;
    uintptr_t arg4 = trapframe->a4;
    uintptr_t arg5 = trapframe->a5;
    uintptr_t arg6 = trapframe->a6;
    uintptr_t arg_syscall_no = trapframe->a7;
    
    int fd   = arg0;
    uint64_t destva = arg1;
    size_t   n     = arg2;
    
    char kernel_buf[4096];
    int ret;
    
    struct file** file_table = get_current_file_table();
    
    if(n > 4096) {
        panic("read: size is overflow");
    }

    if(is_stdin(fd)) {
        ret = uart_readn(kernel_buf, n);
    }
    else if(is_tty(fd)) {
        ret = uart_readn(kernel_buf, n);
    }
    else if(is_pipe(fd)) {
        ret = piperead(fd, kernel_buf, n);
    }
    else {
        ret = fs_read(fd, kernel_buf, n);
        if (ret < 0) {
            trapframe->a0 = ret;
            return 0;
        }
        //kernel_buf[ret] = '\0';
        if (ret < (int)sizeof(kernel_buf)) kernel_buf[ret] = '\0';
    }
    
    struct proc *p = gProc[gActiveProc]; // 現在のプロセスを取得

    /* copyout を使ってまとめてコピー */
    if (copyout(p->pagetable, destva, kernel_buf, ret) < 0) {
        panic("read: copyout failed");
    }

//*(char*)0x10000000UL = 'B';
    return ret;
}

// syscall.c 追記
int Sys_fstat()
{
    struct context_t* tf = (struct context_t*)TRAPFRAME;
    int fd = (int)tf->a0;
    uint64_t u_st = tf->a1;

    struct stat kst;
    if (fs_fstat_fd(fd, &kst) < 0) return -1;

    struct proc *p = gProc[gActiveProc];
    if (copyout(p->pagetable, u_st, &kst, sizeof(kst)) < 0) return -1;

    return 0;
}

// syscall.c 追加
int Sys_lseek() {
    struct context_t* tf = (struct context_t*)TRAPFRAME;
    int  fd     = (int) tf->a0;
    long offset = (long)tf->a1;
    int  whence = (int) tf->a2;
    long r = fs_lseek(fd, offset, whence);
    return (int)r;  // プラットフォームの規約に合わせて int 返却
}

