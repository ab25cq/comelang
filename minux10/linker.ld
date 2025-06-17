ENTRY(_start)

SECTIONS {
    . = 0x40000000; /* QEMUの'virt'マシンでのRAM開始アドレス */
    .text : {
        KEEP(*(.text.boot))
        *(.text*)
    }
    .rodata : {
        *(.rodata*)
    }
    .data : {
        *(.data*)
    }
    .bss : {
        _bss_start = .;
        *(.bss*)
        *(COMMON)
        _bss_end = .;
    }
    . = ALIGN(8);
    .stack (NOLOAD) : {
        . = . + 8192; /* 8KBのスタック */
        stack_top = .;
    }
}
