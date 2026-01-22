#include <stdio.h>
#include "main.h"

int main(void)
{
    char *my_string = "An entire sentence";
    char only_one_char = 'A';
    printf("The following is a string %s\n", my_string);
    printf("The following is a char %c\n", only_one_char);
    return 0;
}