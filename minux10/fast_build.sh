make clean

if which apk
then
    apk update
    apk add build-base
    
    apk add  gcc-aarch64-none-elf binutils-aarch64-none-elf
    apk add newlib-aarch64-none-elf 
    apk add qemu-system-aarch64
    apk add gdb-multiarch
fi


if test ! -f ~/.config/gdb/gdbinit
then
    mkdir -p ~/.config/gdb
    echo "add-auto-load-safe-path $(pwd)/.gdbinit" >> ~/.config/gdb/gdbinit
fi

make debug
