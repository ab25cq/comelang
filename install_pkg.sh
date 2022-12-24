
# alpine linux
if uname -v | grep iSH
then
    apk add sudo git clang g++ gcc llvm-dev pcre-dev gc-dev readline-dev ncurses-dev make samurai cmake autoconf valgrind gdb musl-dev
elif uname | grep Darwin
then
    brew install git llvm pcre libgc readline ncurses make ninja cmake autoconf 
elif which apk > /dev/null
then
    sudo apk add sudo git clang g++ gcc llvm-dev pcre-dev gc-dev readline-dev ncurses-dev make samurai cmake autoconf valgrind gdb lldb musl-dev
# termux
elif test `uname -o` = Android
then
    apt install clang libllvm pcre libgc readline ncurses make ninja cmake autoconf valgrind gdb lldb binutils libandroid-glob
# debian
elif which apt > /dev/null
then
    sudo apt install  clang g++ gcc llvm-dev libpcre++-dev libgc-dev libreadline-dev ncurses-dev make ninja-build cmake autoconf valgrind gdb lldb
fi
