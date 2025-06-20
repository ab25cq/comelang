
#if which brew
#then
#    brew tap riscv-software-src/riscv
#    brew install riscv-tools
#fi
#if which apk
#then
#    apk update
#    apk add git build-base autoconf automake libtool curl mpfr-dev gmp-dev mpc1-dev texinfo flex bison gperf patchutils bc zlib-dev expat-dev g++ gawk python3-dev tcl-dev libffi-dev texinfo flex bison boost-dev boost-program_options dtc musl pthreads-dev
#    apk update
#    git clone https://github.com/riscv/riscv-gnu-toolchain
#    cd riscv-gnu-toolchain
#    mkdir -p /opt/riscv
#    ./configure --prefix=/opt/riscv --with-arch=rv64gc --with-abi=lp64 --disable-multilib --enable-gdb --enable-multilib
#    make -j$(($(nproc)/2))
#    echo 'export PATH="/opt/riscv/bin:$PATH"' >> ~/.bashrc
#    cd ..
#
#    (git clone https://github.com/riscv-software-src/riscv-isa-sim
#    cd riscv-isa-sim
#    ./configure --prefix=/opt/riscv --enable-histogram --enable-gdb
#    make -j$(nproc)
#    sudo make install
#    )
#    git clone https://github.com/riscv/riscv-openocd.git
#    cd riscv-openocd
#    ./bootstrap
#    ./configure --prefix=/opt/openocd --enable-remote-bitbang --enable-jtag_manual --enable-riscv --disable-werror
#    make -j$(nproc)
#    sudo make install
#    
#    apk add jimtcl-dev
#    
#    git clone https://github.com/riscv/riscv-openocd.git
#    cd riscv-openocd
#    ./bootstrap
#    ./configure --prefix=/opt/openocd --enable-remote-bitbang --enable-jtag_manual --enable-riscv --disable-werror
#    make -j$(nproc)
#    sudo make install
#    
#    echo 'export PATH=/opt/openocd/bin:$PATH' >> ~/.bashrc
#fi
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

rm -rf ~/.config/gdb
mkdir -p ~/.config/gdb
echo "add-auto-load-safe-path $(pwd)/.gdbinit" >> ~/.config/gdb/gdbinit

make clean
if uname -a | grep Darwin
then
    make run
#    make debug-mac
elif which riscv-none-elf-gcc
then
    make run CCPREFIX=riscv-none-elf- CFLAGS="-march=rv64gc -mabi=lp64" 
else 
    make run
fi
