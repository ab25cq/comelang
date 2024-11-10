arm-none-eabi-gcc -I include -mthumb -mcpu=cortex-m0plus -c boot.c
arm-none-eabi-gcc -nostartfiles -Wl,--script=pico_memmap.ld -Wl,-z,max-page-size=4096 -Wl,--gc-sections *.o -o out.elf

#picotool uf2 convert out.elf out.uf2
