CC=comelang
CFLAGS ?= -std=gnu17 -Wall -Wextra -O2
LDFLAGS ?=

SOURCES := attrs.c \
           statement_expr.c \
           nested_functions.c \
           labels_as_values.c \
           vector_types.c \
           builtins.c \
           typeof_auto.c
BIN_DIR := bin
BINARIES := $(patsubst %.c,$(BIN_DIR)/%,$(SOURCES))

.PHONY: all clean

all: $(BINARIES)

$(BIN_DIR):
	@mkdir -p $(BIN_DIR)

$(BIN_DIR)/%: %.c | $(BIN_DIR)
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -rf $(BIN_DIR)
