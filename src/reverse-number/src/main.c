/*
    Autor: Marco Guilherme
    Data: 12/12/2023

    123 -> 321
    -123 -> -321
*/

#include <stdio.h>

int main(void) {
    int number, last_digit;

    printf("Enter an integer: ");

    scanf("%i", &number);

    printf("Inverted number: ");

    if(number < 0) {
        printf("-");
        number *= -1;
    }

    do {
        last_digit = number % 10;
        number /= 10;
        printf("%i", last_digit);
    } while(number != 0);

    printf("\n");

    return 0;
}
