make clean

#if which brew
#then
##    brew tap riscv-software-src/riscv
##    brew install riscv-tools
#fi

if which apk
then
    apk update
    apk add git build-base autoconf automake libtool curl mpfr-dev gmp-dev mpc1-dev texinfo flex bison gperf patchutils bc zlib-dev expat-dev g++ gawk
    git clone https://github.com/riscv/riscv-gnu-toolchain
    cd riscv-gnu-toolchain
    mkdir -p /opt/riscv
    ./configure --prefix=/opt/riscv --with-arch=rv64gc --with-abi=lp64 --disable-multilib
    make -j$(($(nproc)/2))
    export PATH="/opt/riscv/bin:$PATH"
fi


#if which apt
#then
#    sudo apt install gcc-riscv64-unknown-elf \
#                 binutils-riscv64-unknown-elf \
#                 qemu-system-misc \
#                 make \
#                 git \
#                 build-essential \
#                 gawk \
#                 gdb-multiarch xxd
#    sudo apt install spike
#fi
 
#if which apk
#then
#    sudo apk add binutils-riscv-none-elf binutils-riscv64 gcc-riscv-none-elf newlib-riscv-none-elf qemu-riscv64 make git gawk gdb-multiarch qemu-riscv64 qemu-riscv64 qemu-riscv64 qemu-riscv64 qemu-riscv64 qemu-riscv64 qemu-system-riscv64
#    sudo apk add spike
#fi

#if brew
#then
#    brew install spike
#fi


if test ! -f ~/.config/gdb/gdbinit
then
    mkdir -p ~/.config/gdb
    echo "add-auto-load-safe-path $(pwd)/.gdbinit" >> ~/.config/gdb/gdbinit
fi

make clean
if uname -a | grep Darwin
then
#    make run
    make debug-mac
#    make log
#    make debug
#    make debug-mac
elif which riscv-none-elf-gcc
then
    make run CCPREFIX=riscv-none-elf- CFLAGS="-march=rv64gc -mabi=lp64" 
else 
    make debug
fi
