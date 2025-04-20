MEMORY
{
    iram0_0_seg : ORIGIN = 0x40080000, LENGTH = 0x20000
    dram0_0_seg : ORIGIN = 0x3FFB0000, LENGTH = 0x18000
    flash_text  : ORIGIN = 0x1000, LENGTH = 0x100000
}

SECTIONS
{
    .text : {
        *(.text)
        *(.text.*)
    } > iram0_0_seg

    .data : {
        *(.data)
        *(.data.*)
    } > dram0_0_seg AT> flash_text

    .bss : {
        *(.bss)
        *(.bss.*)
        *(COMMON)
    } > dram0_0_seg
}

