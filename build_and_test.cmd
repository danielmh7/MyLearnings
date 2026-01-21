@echo off
echo ==========================================
echo Compiling Main Executable (Project)
echo ==========================================
gcc Exercism/C_coding/main.c Exercism/C_coding/grains_on_a_chessboard.c Exercism/C_coding/resistor_color.c Exercism/C_coding/difference_of_squares.c -o Exercism/C_coding/main_ejecutable
if %errorlevel% neq 0 (
    echo [ERROR] Main compilation failed.
    exit /b %errorlevel%
)
echo [OK] Main executable created.

echo.
echo ==========================================
echo Compiling Unit Tests
echo ==========================================

echo [Compiling] Difference of Squares Test...
gcc -DUNIT_TEST -IExercism/C_coding Exercism/C_coding/difference_of_squares.c Exercism/C_coding/test/test_difference_of_squares.c -o test_diff
if %errorlevel% neq 0 exit /b %errorlevel%

echo [Compiling] Grains on a Chessboard Test...
gcc -DUNIT_TEST -IExercism/C_coding Exercism/C_coding/grains_on_a_chessboard.c Exercism/C_coding/test/test_grains_on_a_chessboard.c -o test_grains
if %errorlevel% neq 0 exit /b %errorlevel%

echo [Compiling] Resistor Color Test...
gcc -DUNIT_TEST -IExercism/C_coding Exercism/C_coding/resistor_color.c Exercism/C_coding/test/test_resistor_color.c -o test_resistor
if %errorlevel% neq 0 exit /b %errorlevel%

echo [Compiling] Main Test...
gcc -DUNIT_TEST -IExercism/C_coding Exercism/C_coding/main.c Exercism/C_coding/test/test_main.c Exercism/C_coding/resistor_color.c Exercism/C_coding/difference_of_squares.c Exercism/C_coding/grains_on_a_chessboard.c -o test_main_exec
if %errorlevel% neq 0 exit /b %errorlevel%

echo [OK] All tests compiled.

echo.
echo ==========================================
echo Running Unit Tests
echo ==========================================

echo [RUN] Difference of Squares
test_diff.exe
if %errorlevel% neq 0 echo [FAIL] Difference of Squares

echo.
echo [RUN] Grains on a Chessboard
test_grains.exe
if %errorlevel% neq 0 echo [FAIL] Grains on a Chessboard

echo.
echo [RUN] Resistor Color
test_resistor.exe
if %errorlevel% neq 0 echo [FAIL] Resistor Color

echo.
echo [RUN] Main Test
test_main_exec.exe
if %errorlevel% neq 0 echo [FAIL] Main Test

echo.
echo ==========================================
echo Cleaning up Test Executables
echo ==========================================
del test_diff.exe test_grains.exe test_resistor.exe test_main_exec.exe Exercism\C_coding\main_ejecutable.exe

echo.
echo [DONE] Build and Test process completed.
pause
