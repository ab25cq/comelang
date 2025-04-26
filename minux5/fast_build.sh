make clean

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
#   sudo apt install gawk bison flex texinfo gperf libtool libncurses5-dev \
#   autoconf automake python3-dev libexpat-dev git build-essential
  
#   git clone --recursive https://github.com/riscv/riscv-gnu-toolchain
#   cd riscv-gnu-toolchain
#   ./configure --prefix=$HOME/riscv --with-newlib --with-arch=rv64gc --with-abi=lp64
#   make -j$(nproc)
  
    mkdir -p ~/.config/gdb
    echo "add-auto-load-safe-path $(pwd)/.gdbinit" >> ~/.config/gdb/gdbinit
fi

make clean
make debug
