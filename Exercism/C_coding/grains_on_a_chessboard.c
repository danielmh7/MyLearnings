#include <stdio.h>
#include <stdint.h>

uint64_t square(uint8_t number) {
    if (number < 1 || number > 64) {
        return 0;
    }
    /**
     * @brief Calcula el número de granos en un cuadrado específico del tablero de ajedrez.
     * 
     * Esta función utiliza el desplazamiento de bits para calcular 2^(number-1), que representa
     * la cantidad de granos de trigo/arroz en un cuadrado dado del tablero de ajedrez, siguiendo
     * el problema clásico donde cada cuadrado tiene el doble de granos que el anterior:
     * - Cuadrado 1: 2^0 = 1 grano
     * - Cuadrado 2: 2^1 = 2 granos
     * - Cuadrado n: 2^(n-1) granos
     * 
     * @param number El número del cuadrado del tablero (1-64)
     * @return unsigned long long El número de granos en ese cuadrado específico
     * 
     * @note Utiliza 1ULL (unsigned long long) para manejar números grandes hasta 2^63
     * @note El operador << realiza un desplazamiento de bits a la izquierda, equivalente a
     *       multiplicar por potencias de 2
     */
    return 1ULL << (number - 1);
}

uint64_t total(void) {
    return UINT64_MAX;
}