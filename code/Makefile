CC := comelang
CFLAGS ?= -std=gnu17 -Wall -Wextra -O2
LDFLAGS ?=
HOSTCC ?= cc
HOSTCFLAGS ?= -std=c11 -Wall -Wextra -O2

.PHONY: all clean test

# Build sample binaries, build tests, then run runner
all: test

# Run tests that validate common C syntax
test: *.c
	comelang attrs.c
	./attrs
	comelang codex.c
	./codex
	comelang comelang.c
	./comelang
	comelang comelang10.c
	./comelang10
	comelang comelang11.c
	./comelang11
	comelang comelang12.c
	./comelang12
	comelang comelang13.c
	./comelang13
	comelang comelang14.c
	./comelang14
	comelang comelang2.c
	./comelang2
	comelang comelang3.c
	./comelang3
	comelang comelang4.c
	./comelang4
	comelang comelang5.c
	./comelang5
	comelang comelang6.c
	./comelang6
	comelang comelang7.c
	./comelang7
	comelang comelang8.c
	./comelang8
	comelang comelang9.c
	./comelang9
	comelang labels_as_values.c
	./labels_as_values
	comelang nested_functions.c
	./nested_functions
	comelang statement_expr.c
	./statement_expr
	comelang test_arith.c
	./test_arith
	comelang test_array_ptr.c
	./test_array_ptr
	comelang test_control_flow.c
	./test_control_flow
	comelang test_control.c
	./test_control
	comelang test_functions.c
	./test_functions
#	comelang test_invalid_0888.c
	comelang test_ops.c
	./test_ops
	comelang test_pointers_arrays.c
	./test_pointers_arrays
	comelang test_string_cast.c
	./test_string_cast
	comelang test_struct_enum.c
	./test_struct_enum
	comelang test_struct_union_enum.c
	./test_struct_union_enum
	comelang test_switch_ternary.c
	./test_switch_ternary
	comelang test_valid.c
	./test_valid
	comelang typeof_auto.c
	./typeof_auto
	comelang user.c
	./user

clean:
	rm -rf $(BIN_DIR) runner .valid_bin .invalid_bin .test_out *.c.c *.c.o ./attrs ./codex ./comelang ./comelang10 ./comelang11 ./comelang12 ./comelang13 ./comelang14 ./comelang2 ./comelang3 ./comelang4 ./comelang5 ./comelang6 ./comelang7 ./comelang8 ./comelang9 ./labels_as_values ./nested_functions ./statement_expr ./test_arith ./test_array_ptr ./test_control_flow ./test_control ./test_functions ./test_ops ./test_pointers_arrays ./test_string_cast ./test_struct_enum ./test_struct_union_enum ./test_switch_ternary ./test_valid
	comelang typeof_auto.c
	./typeof_auto
	comelang user.c
	./user

