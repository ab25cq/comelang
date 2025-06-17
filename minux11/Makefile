# Makefile

# --- ツールチェインの定義 ---
AS = aarch64-none-elf-as
LD = aarch64-none-elf-ld

# --- ファイル名の定義 ---
TARGET = kernel
SRC_S = hello.S

# --- フラグの定義 ---
ASFLAGS = -g
LDFLAGS = -T linker.ld

# --- ルールの定義 ---

all: $(TARGET).elf

# .S ファイルから .o ファイルを生成
%.o: %.S
	$(AS) $(ASFLAGS) $< -o $@

# .o ファイルから .elf ファイルを生成
$(TARGET).elf: $(SRC_S:.S=.o)
	$(LD) $(LDFLAGS) $^ -o $@

# QEMUで実行
run: all
	qemu-system-aarch64 \
        -M virt \
        -cpu cortex-a53 \
        -nographic \
        -kernel $(TARGET).elf \
        -semihosting  # セミホスティングを有効にする (非常に重要！)
debug: all
	qemu-system-aarch64 \
        -M virt \
        -cpu cortex-a53 \
        -nographic \
        -kernel $(TARGET).elf \
        -semihosting -S -s &  # セミホスティングを有効にする (非常に重要！)
	gdb kernel

# クリーンアップ
clean:
	rm -f *.o *.elf
