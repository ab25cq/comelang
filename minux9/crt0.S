.section .text
.globl _start

# Minimal userland entry: call main(argc, argv, envp);
# The kernel's execv/execve sets a0=argc, a1=argv, a2=envp before sret.
# We preserve those and only ensure exiting with main's return code.
_start:
    # a0=argc, a1=argv already set by kernel. Do not clobber.
    # envp is in a2 when execve is used; leave it as-is.
    call    main             # returns int in a0

    # Issue exit(a0) syscall directly to avoid libc dependency.
    # SYS_exit = 70
    li      a7, 70
    ecall

1:  j       1b               # Should not return; just in case
