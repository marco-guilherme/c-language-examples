/*
    Autor: Marco Guilherme
    Data: 10/12/2023
*/

#include <stdio.h>

int main(void) {
    unsigned long int factorial = 1;
    unsigned int number = 0, i, index;

    // Máximo 12
    printf("Enter a positive number to determine your factorial: ");

    scanf("%u", &number);

    if(number > 0) {
        factorial = number;
        index = number;

        for(i = 0; i < number - 1; i++) {
            factorial *= --index;
        }
    }

    printf("%u! = %lu\n", number, factorial);

    return 0;
}
