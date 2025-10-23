# Test JAL and JALR instructions
.section .text
.globl _start

_start:
    # Test JAL - jump to function and save return address
    li a0, 10
    jal ra, add_one        # Call add_one(10)
    # a0 should now be 11

    # Test JALR - return from function
    # (already tested inside add_one)

    # Test JAL with offset calculation
    li a0, 5
    jal ra, multiply_two   # Call multiply_two(5)
    # a0 should now be 10

    # Test JALR with offset
    li a0, 20
    la t0, add_five
    jalr ra, 0(t0)         # Indirect call to add_five
    # a0 should now be 25

    # All tests passed - exit with result (should be 25)
    ecall

# Function: add_one
# Input: a0
# Output: a0 + 1
add_one:
    addi a0, a0, 1
    jalr zero, 0(ra)       # Return (JALR with rd=zero)

# Function: multiply_two
# Input: a0
# Output: a0 * 2
multiply_two:
    slli a0, a0, 1         # a0 = a0 << 1 (multiply by 2)
    jalr zero, 0(ra)       # Return

# Function: add_five
# Input: a0
# Output: a0 + 5
add_five:
    addi a0, a0, 5
    jalr zero, 0(ra)       # Return
