#include <sys/select.h>
#include <gc.h>

void come_fd_zero(fd_set* fds)
{
    FD_ZERO(fds);
}

void come_fd_set(int fd, fd_set* fds)
{
    FD_SET(fd, fds);
}

int come_fd_isset(int fd, fd_set* fds)
{
    return FD_ISSET(fd, fds);
}

void come_boehm_gc_init()
{
    GC_INIT();
    GC_set_warn_proc(GC_ignore_warn_proc);
    GC_enable_incremental();
}
