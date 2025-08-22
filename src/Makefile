# Simple Makefile for the minimal C parser built with Bison/Flex

CC ?= clang
CFLAGS ?= -O2 -g -Wall -Wextra

all: cparse

parser.c parser.h: c.y
	@echo "[Bison] c.y -> parser.c, parser.h"
	bison -d -v --defines=parser.h -o parser.c c.y

lexer.c: c.l parser.h
	@echo "[Flex ] c.l -> lexer.c"
	flex -o lexer.c c.l

cparse: parser.o lexer.o main.o ast.o
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f parser.c parser.h parser.output lexer.c cparse *.o

.PHONY: all clean
