CC      := cc
CFLAGS  := -std=c99 -Wall -Wextra -O2
LDFLAGS :=

BIN     := ccpp
SRC     := src/ccpp.c
OBJ     := $(SRC:.c=.o)

.PHONY: all clean test

all: $(BIN)

$(BIN): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ) $(BIN) tests/out/*

test: $(BIN)
	@mkdir -p tests/out
	# Test 1
	./$(BIN) tests/input1.c > tests/out/actual1.c
	@diff -u tests/expected1.c tests/out/actual1.c && echo "OK: test1" || (echo "FAIL: test1" && exit 1)
	# Test 2
	./$(BIN) tests/input2.c > tests/out/actual2.c
	@diff -u tests/expected2.c tests/out/actual2.c && echo "OK: test2" || (echo "FAIL: test2" && exit 1)
	# Test 3 nested block comments
	./$(BIN) tests/input3.c > tests/out/actual3.c
	@diff -u tests/expected3.c tests/out/actual3.c && echo "OK: test3" || (echo "FAIL: test3" && exit 1)
	# Test 4 conditionals
	./$(BIN) tests/input4.c > tests/out/actual4.c
	@diff -u tests/expected4.c tests/out/actual4.c && echo "OK: test4" || (echo "FAIL: test4" && exit 1)
	# Test 5 expression operators
	./$(BIN) tests/input5.c > tests/out/actual5.c
	@diff -u tests/expected5.c tests/out/actual5.c && echo "OK: test5" || (echo "FAIL: test5" && exit 1)
	# Test 6 includes with -I search
	./$(BIN) -I tests/incs -I tests/incs2 tests/input6.c > tests/out/actual6.c
	@diff -u tests/expected6.c tests/out/actual6.c && echo "OK: test6" || (echo "FAIL: test6" && exit 1)
	# Test 7 function-like macros
	./$(BIN) tests/input7.c > tests/out/actual7.c
	@diff -u tests/expected7.c tests/out/actual7.c && echo "OK: test7" || (echo "FAIL: test7" && exit 1)
	# Test 8 # and ## operators, and bracketed arg commas
	./$(BIN) tests/input8.c > tests/out/actual8.c
	@diff -u tests/expected8.c tests/out/actual8.c && echo "OK: test8" || (echo "FAIL: test8" && exit 1)
	# Test 9 variadic macros
	./$(BIN) tests/input9.c > tests/out/actual9.c
	@diff -u tests/expected9.c tests/out/actual9.c && echo "OK: test9" || (echo "FAIL: test9" && exit 1)
	# Test 10 system include via CPATH
	CPATH=tests/incs2 ./$(BIN) tests/input10.c > tests/out/actual10.c
	@diff -u tests/expected10.c tests/out/actual10.c && echo "OK: test10" || (echo "FAIL: test10" && exit 1)
	# Test 11 system include via SDKROOT
	SDKROOT=tests/sdkroot/MacOSX.sdk ./$(BIN) tests/input11.c > tests/out/actual11.c
	@diff -u tests/expected11.c tests/out/actual11.c && echo "OK: test11" || (echo "FAIL: test11" && exit 1)
	# Test 12 pragma once
	./$(BIN) tests/input12.c > tests/out/actual12.c
	@diff -u tests/expected12.c tests/out/actual12.c && echo "OK: test12" || (echo "FAIL: test12" && exit 1)
	# Test 13 extended operators
	./$(BIN) tests/input13.c > tests/out/actual13.c
	@diff -u tests/expected13.c tests/out/actual13.c && echo "OK: test13" || (echo "FAIL: test13" && exit 1)
	# Test 14 rescan macro chain
	./$(BIN) tests/input14.c > tests/out/actual14.c
	@diff -u tests/expected14.c tests/out/actual14.c && echo "OK: test14" || (echo "FAIL: test14" && exit 1)
	# Test 15 #line and #pragma passthrough
	./$(BIN) tests/input15.c > tests/out/actual15.c
	@diff -u tests/expected15.c tests/out/actual15.c && echo "OK: test15" || (echo "FAIL: test15" && exit 1)

.PHONY: test-linux-headers
test-linux-headers: $(BIN)
	@bash tests/scripts/test_linux_headers.sh --defs "_GNU_SOURCE=1 _DEFAULT_SOURCE=1" -j $${JOBS:-8}
