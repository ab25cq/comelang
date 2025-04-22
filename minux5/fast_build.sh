sudo apt install gcc-riscv64-unknown-elf \
                 binutils-riscv64-unknown-elf \
                 qemu-system-misc \
                 make \
                 git \
                 build-essential \
                 gawk \
                 gdb-multiarch


if test ! -f ~/.config/gdb/gdbinit
then
    mkdir -p ~/.config/gdb
    echo "add-auto-load-safe-path $(pwd)/.gdbinit" >> ~/.config/gdb/gdbinit
fi

make debug
