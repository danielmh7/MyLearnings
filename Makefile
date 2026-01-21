# 1. Listamos todos los archivos .c necesarios
SRCS = Exercism/C_coding/main.c \
       Exercism/C_coding/grains_on_a_chessboard.c \
       Exercism/C_coding/resistor_color.c \
       Exercism/C_coding/difference_of_squares.c

# 2. Definimos el nombre del ejecutable
TARGET = Exercism/C_coding/main_ejecutable

# 3. La regla para compilar
all:
	gcc $(SRCS) -o $(TARGET)

clean:
	rm -f $(TARGET)
