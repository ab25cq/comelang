make clean

if which apt
then
    sudo apt install gcc-riscv64-unknown-elf \
                 binutils-riscv64-unknown-elf \
                 qemu-system-misc \
                 make \
                 git \
                 build-essential \
                 gawk \
                 gdb-multiarch
 fi


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

#if which riscv-none-elf-gcc
#then
#    echo "OK"
#else
#    curl -LO https://github.com/xpack-dev-tools/riscv-none-elf-gcc-xpack/releases/download/v13.2.0-1/xpack-riscv-none-elf-gcc-13.2.0-1-linux-arm64.tar.gz
#    tar -xvf xpack-riscv-none-elf-gcc-*.tar.gz
#    sudo mkdir -p /opt/riscv
#    sudo mv xpack-riscv-none-elf-gcc-* /opt/riscv
#    echo 'export PATH=/opt/riscv/xpack-riscv-none-elf-gcc-13.2.0-1/bin:$PATH' >> ~/.bashrc
#    export PATH=/opt/riscv/xpack-riscv-none-elf-gcc-13.2.0-1/bin:$PATH
#    rm -rf xpack-riscv-none-elf-gcc-13.2.0-1
#fi


make clean
#if which riscv-none-elf-gcc
#then
#    make debug CCPREFIX=riscv-none-elf- CFLAGS="-march=rv64gc -mabi=lp64"
#else 
    make debug
#fi


