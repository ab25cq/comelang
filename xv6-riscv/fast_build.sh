if which apk
then
    sudo apk add --no-cache gcc binutils qemu-system-riscv64 make git build-base gawk
else
    sudo apt install gcc-riscv64-unknown-elf \
                 binutils-riscv64-unknown-elf \
                 qemu-system-misc \
                 make \
                 git \
                 build-essential \
                 gawk
                 
fi

make qemu TOOLPREFIX=riscv64-alpine-linux-musl-
