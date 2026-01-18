#include "resistor_color.h"
#include <string.h>
#include <string.h>
//static resistor_band_t color_code(resistor_band_t color) {
//    return color;
//}

const int color_value(char* color) {
    if (strcmp(color, "black") == 0) return BLACK;
    if (strcmp(color, "brown") == 0) return BROWN;
    if (strcmp(color, "red") == 0) return RED;
    if (strcmp(color, "orange") == 0) return ORANGE;
    if (strcmp(color, "yellow") == 0) return YELLOW;
    if (strcmp(color, "green") == 0) return GREEN;
    if (strcmp(color, "blue") == 0) return BLUE;
    if (strcmp(color, "violet") == 0) return VIOLET;
    if (strcmp(color, "grey") == 0) return GREY;
    if (strcmp(color, "white") == 0) return WHITE;
    return -1; // Unknown color
}

static const char* color_name(resistor_band_t color) {
    switch (color) {
        case BLACK: return "black"; break;
        case BROWN: return "brown"; break;
        case RED: return "red"; break;
        case ORANGE: return "orange"; break;
        case YELLOW: return "yellow"; break;
        case GREEN: return "green"; break;
        case BLUE: return "blue"; break;
        case VIOLET: return "violet"; break;
        case GREY: return "grey"; break;
        case WHITE: return "white"; break;
        default: return "unknown"; break;
    }
}

void llenar_array_colores(char** a_colors, int tamanio) {
    for (int i = 0; i < tamanio; i++) {
        a_colors[i] = color_name(i);
    }
}


