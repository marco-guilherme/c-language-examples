/*
    Autor: Marco Guilherme
    Data: 16/12/2023
*/

#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <float.h>

int main(void) {
    char character = '$', entered_character;
    bool condition = true;
    float x;

    printf("Character: %c\n\n", character);

    printf("Enter a character: ");
    scanf("%c", &entered_character);
    printf("Entered character: %c\n\n", entered_character);


    printf("Condition: %i\n", condition);
    condition = false;
    printf("Condition: %i\n\n", condition);


    printf("Size of char: %zu byte(s) -> %ld to %ld\n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("Size of signed char: %zu byte(s) -> %ld to %ld\n", sizeof(signed char), SCHAR_MIN, SCHAR_MAX);
    printf("Size of unsigned char: %zu byte(s) -> %ld to %ld\n\n", sizeof(unsigned char), 0, UCHAR_MAX);

    printf("Size of signed short int: %zu byte(s)\n", sizeof(signed short int));
    printf("Size of signed int: %zu byte(s)\n", sizeof(signed int));
    printf("Size of signed long int: %zu byte(s)\n\n", sizeof(signed long int));

    printf("Size of unsigned short int: %zu byte(s)\n", sizeof(unsigned short int));
    printf("Size of unsigned int: %zu byte(s)\n", sizeof(unsigned int));
    printf("Size of unsigned long int: %zu byte(s)\n\n", sizeof(unsigned long int));

    printf("Size of float: %zu byte(s) -> %e to %e\n\n", sizeof(float), FLT_MIN, FLT_MAX);

    printf("Size of double: %zu byte(s)\n", sizeof(double));
    printf("Size of long double: %zu byte(s)\n", sizeof(long double));

    return 0;
}
