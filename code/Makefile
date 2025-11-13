CC := neo-c
CFLAGS ?= -std=gnu17 -Wall -Wextra -O2
LDFLAGS ?=
HOSTCC ?= cc
HOSTCFLAGS ?= -std=c11 -Wall -Wextra -O2

.PHONY: all clean test

# Build sample binaries, build tests, then run runner
all: test

# Run tests that validate common C syntax
test: *.c
	neo-c attrs.c
	./attrs
	neo-c codex.c
	./codex
	neo-c neo-c.c
	./neo-c
	neo-c neo-c10.c
	./neo-c10
	neo-c neo-c11.c
	./neo-c11
	neo-c neo-c12.c
	./neo-c12
	neo-c neo-c13.c
	./neo-c13
	neo-c neo-c14.c
	./neo-c14
	neo-c neo-c2.c
	./neo-c2
	neo-c neo-c3.c
	./neo-c3
	neo-c neo-c4.c
	./neo-c4
	neo-c neo-c5.c
	./neo-c5
	neo-c neo-c6.c
	./neo-c6
	neo-c neo-c7.c
	./neo-c7
	neo-c neo-c8.c
	./neo-c8
	neo-c neo-c9.c
	./neo-c9
	neo-c labels_as_values.c
	./labels_as_values
	neo-c nested_functions.c
	./nested_functions
	neo-c statement_expr.c
	./statement_expr
	neo-c test_arith.c
	./test_arith
	neo-c test_array_ptr.c
	./test_array_ptr
	neo-c test_control_flow.c
	./test_control_flow
	neo-c test_control.c
	./test_control
	neo-c test_functions.c
	./test_functions
#	neo-c test_invalid_0888.c
	neo-c test_ops.c
	./test_ops
	neo-c test_pointers_arrays.c
	./test_pointers_arrays
	neo-c test_string_cast.c
	./test_string_cast
	neo-c test_struct_enum.c
	./test_struct_enum
	neo-c test_struct_union_enum.c
	./test_struct_union_enum
	neo-c test_switch_ternary.c
	./test_switch_ternary
	neo-c test_valid.c
	./test_valid
	neo-c typeof_auto.c
	./typeof_auto
	neo-c user.c
	./user

clean:
	rm -rf runner .valid_bin .invalid_bin .test_out *.c.c *.c.o ./attrs ./codex ./neo-c ./neo-c10 ./neo-c11 ./neo-c12 ./neo-c13 ./neo-c14 ./neo-c2 ./neo-c3 ./neo-c4 ./neo-c5 ./neo-c6 ./neo-c7 ./neo-c8 ./neo-c9 ./labels_as_values ./nested_functions ./statement_expr ./test_arith ./test_array_ptr ./test_control_flow ./test_control ./test_functions ./test_ops ./test_pointers_arrays ./test_string_cast ./test_struct_enum ./test_struct_union_enum ./test_switch_ternary ./test_valid

