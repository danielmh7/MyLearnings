/**
 * @file test_resistor_color.c
 * @brief Unit tests for resistor_color.c
 * 
 * Tests resistor color code logic and array population.
 */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../resistor_color.h"

// Declaration for the function not in header but present in .c
// Note: It returns const int in .c, but we can treat return as int for checking.
int color_value(char* color);

/**
 * @brief Test for color_value function
 * 
 * Verifies correct integer value returned for color strings.
 */
void test_color_value() {
    assert(color_value("black") == BLACK);
    assert(color_value("brown") == BROWN);
    assert(color_value("red") == RED);
    assert(color_value("orange") == ORANGE);
    assert(color_value("yellow") == YELLOW);
    assert(color_value("green") == GREEN);
    assert(color_value("blue") == BLUE);
    assert(color_value("violet") == VIOLET);
    assert(color_value("grey") == GREY);
    assert(color_value("white") == WHITE);
    
    // Test unknown
    assert(color_value("purple") == -1); // Not in standard list
    
    printf("test_color_value passed\n");
}

/**
 * @brief Test for llenar_array_colores function
 * 
 * Verifies that the colors array is populated with the correct strings.
 */
void test_llenar_array_colores() {
    int size = TOTAL;
    const char* colors[TOTAL];
    
    // Initialize with NULL or garbage
    for(int i=0; i<TOTAL; i++) colors[i] = NULL;

    llenar_array_colores(colors, size);

    // Verify mapping matches index
    // BLACK = 0
    assert(strcmp(colors[BLACK], "black") == 0);
    assert(strcmp(colors[BROWN], "brown") == 0);
    assert(strcmp(colors[RED], "red") == 0);
    assert(strcmp(colors[ORANGE], "orange") == 0);
    assert(strcmp(colors[YELLOW], "yellow") == 0);
    assert(strcmp(colors[GREEN], "green") == 0);
    assert(strcmp(colors[BLUE], "blue") == 0);
    assert(strcmp(colors[VIOLET], "violet") == 0);
    assert(strcmp(colors[GREY], "grey") == 0);
    assert(strcmp(colors[WHITE], "white") == 0);

    printf("test_llenar_array_colores passed\n");
}

int main() {
    test_color_value();
    test_llenar_array_colores();
    printf("All tests passed for resistor_color.\n");
    return 0;
}
