#include <stdio.h>
#include "main.h"

void squares_excersise()
{
    int i_firstValue;
    int i_result;
    printf("Coloca el numero: ");
    scanf("%d", &i_firstValue);
    i_result = difference_of_squares(i_firstValue);
    printf("La diferencia de cuadrados es: %d\n", i_result);
}

void granos_de_trigo()
{
    printf("Coloca el numero del tablero: ");
    unsigned int i_position_board; 
    scanf("%d", &i_position_board);
    uint64_t granos = square(i_position_board);
    //printf("En esa posicion tienes: %I64u granos\n", granos);
    //printf("El total es: %I64u granos\n", total());
}

void resistor_colors_excersise()
{
    const int tamanio = TOTAL;
    char* colors[TOTAL];
    llenar_array_colores(colors, tamanio);
    for (int i = 0; i < tamanio; i++) {
        printf("Color %d: %s\n", i, colors[i]);
    }
}


int main() {

    // This is my first C program
    //squares_excersise();
    //granos_de_trigo();
    //resistor_colors_excersise();
    printf("Let's run some code...\n");
    return 0;
}

