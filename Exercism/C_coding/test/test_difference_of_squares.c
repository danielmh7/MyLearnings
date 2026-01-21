/**
 * @file test_difference_of_squares.c
 * @brief Unit tests for difference_of_squares.c
 * 
 * This file contains unit tests for the functions defined in difference_of_squares.c.
 * It uses simple assertions to verify the correctness of the calculations.
 */

#include <assert.h>
#include <stdio.h>
#include "../difference_of_squares.h"

/**
 * @brief Test for difference_of_squares function
 * 
 * Verifies that the difference between the square of the sum and the sum of the squares
 * is calculated correctly for various inputs.
 */
void test_difference_of_squares_func() {
    // Case 1: Number = 1
    // Sum of squares: 1^2 = 1
    // Square of sum: 1^2 = 1
    // Difference: 0
    assert(difference_of_squares(1) == 0);

    // Case 2: Number = 5
    // Sum of squares: 1+4+9+16+25 = 55
    // Square of sum: (1+2+3+4+5)^2 = 15^2 = 225
    // Difference: 225 - 55 = 170
    assert(difference_of_squares(5) == 170);

    // Case 3: Number = 10
    // Expect 2640 (Example from problem statement usually)
    // Sum of squares: 385
    // Square of sum: 3025
    // Difference: 2640
    assert(difference_of_squares(10) == 2640);

    printf("test_difference_of_squares_func passed\n");
}

int main() {
    test_difference_of_squares_func();
    printf("All tests passed for difference_of_squares.\n");
    return 0;
}
