# 1. Listamos todos los archivos .c necesarios
SRCS = Exercism/C_coding/main.c \
       Exercism/C_coding/grains_on_a_chessboard.c \
       Exercism/C_coding/resistor_color.c \
       Exercism/C_coding/difference_of_squares.c

# Test sources
TEST_SRCS = Exercism/C_coding/test/test_difference_of_squares.c \
            Exercism/C_coding/test/test_grains_on_a_chessboard.c \
            Exercism/C_coding/test/test_resistor_color.c \
            Exercism/C_coding/test/test_main.c

# 2. Definimos el nombre del ejecutable
TARGET = Exercism/C_coding/main_ejecutable
TEST_TARGET = Exercism/C_coding/test_ejecutable

# 3. La regla para compilar
all:
	gcc $(SRCS) -o $(TARGET)

test:
	gcc -DUNIT_TEST -IExercism/C_coding Exercism/C_coding/difference_of_squares.c Exercism/C_coding/test/test_difference_of_squares.c -o test_diff
	./test_diff
	gcc -DUNIT_TEST -IExercism/C_coding Exercism/C_coding/grains_on_a_chessboard.c Exercism/C_coding/test/test_grains_on_a_chessboard.c -o test_grains
	./test_grains
	gcc -DUNIT_TEST -IExercism/C_coding Exercism/C_coding/resistor_color.c Exercism/C_coding/test/test_resistor_color.c -o test_resistor
	./test_resistor
	gcc -DUNIT_TEST -IExercism/C_coding Exercism/C_coding/main.c Exercism/C_coding/test/test_main.c -o test_main_exec
	./test_main_exec
	rm -f test_diff test_grains test_resistor test_main_exec

clean:
	rm -f $(TARGET) test_diff test_grains test_resistor test_main_exec
