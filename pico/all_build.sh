arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -nostartfiles -nodefaultlibs -ffreestanding -o crt0.o -D__ARM_ARCH_6M__ -I./pico_base_headers/include/ -I. -I./pico_bootrom/include/ -c crt0.S 

arm-none-eabi-gcc -I. -I/Users/ab25cq/pico-sdk/src/host/hardware_sync/include/ -I/Users/ab25cq/pico-sdk/src/host/hardware_irq/include -I/Users/ab25cq/pico-sdk/src/host/hardware_gpio/include -I/Users/ab25cq/pico-sdk/src/host/hardware_uart/include/ -I/Users/ab25cq/pico-sdk/src/host/hardware_timer/include -I/Users/ab25cq/pico-sdk/src/host/hardware_divider/include -I/Users/ab25cq/pico-sdk/src/host/pico_platform/include/ -Ipico -Ipico_base_headers/include/ -Iinclude -mcpu=cortex-m0plus -mthumb -nodefaultlibs -nostartfiles -ffreestanding crt0.o main.c -o main.elf -T memmap_default.ld gpio.c.obj

