/**
 * @file
 * @brief Header file containing defined values and constants
 * 
 * This header file defines various constants and configuration values used throughout
 * the application. These definitions provide centralized configuration and magic numbers
 * that can be easily modified without changing the core implementation code.
 * 
 * @note Modify these values carefully as they may affect system behavior
 * @warning Ensure all dependent modules are recompiled after modifying these constants
 */
#ifndef MAIN_H
#define MAIN_H

#include <stdint.h>
#include "difference_of_squares.h"
#include "resistor_color.h"

// Externs function declarations
extern unsigned int difference_of_squares(unsigned int number);
extern uint64_t square(uint8_t index);
extern uint64_t total(void);

extern void llenar_array_colores(char** colors, int tamanio);

// Local function declarations
void squares_excersise();



// Directivas para compatibilidad con C++
#ifdef __cplusplus
extern "C" {
#endif

// Tus funciones que pueden ser llamadas desde C o C++





// Final de las directivas para compatibilidad con C++
#ifdef __cplusplus
}
#endif



#endif // MAIN_H