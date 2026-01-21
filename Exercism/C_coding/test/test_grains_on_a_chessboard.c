/**
 * @file test_grains_on_a_chessboard.c
 * @brief Unit tests for grains_on_a_chessboard.c
 * 
 * Tests the calculation of grains on a chessboard (doubling on each square).
 */

#include <assert.h>
#include <stdio.h>
#include <stdint.h>
#include "../grains_on_a_chessboard.h"

/**
 * @brief Test for square function
 * 
 * Verifies that the number of grains on a specific square is 2^(n-1).
 */
void test_square() {
    // Square 1: 1 grain
    assert(square(1) == 1ULL);

    // Square 2: 2 grains
    assert(square(2) == 2ULL);

    // Square 3: 4 grains
    assert(square(3) == 4ULL);

    // Square 64: 2^63 grains
    // 2^63 = 9223372036854775808
    assert(square(64) == 9223372036854775808ULL);

    // Error cases (0 or > 64) -> SHOULD RETURN 0 based on implementation
    assert(square(0) == 0);
    assert(square(65) == 0);

    printf("test_square passed\n");
}

/**
 * @brief Test for total function
 * 
 * Verifies that the total number of grains on the board is 2^64 - 1 (UINT64_MAX).
 */
void test_total_func() {
    assert(total() == UINT64_MAX);
    printf("test_total_func passed\n");
}

int main() {
    test_square();
    test_total_func();
    printf("All tests passed for grains_on_a_chessboard.\n");
    return 0;
}
