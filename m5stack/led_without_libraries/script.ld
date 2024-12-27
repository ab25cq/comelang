MEMORY {
    FLASH_BL (rx)  : ORIGIN = 0x400f0000, LENGTH = 1024
}

PROVIDE ( GPIO = 0x3ff44000 );
PROVIDE ( esp_rom_gpio_connect_out_signal = 0x40009f0c );
