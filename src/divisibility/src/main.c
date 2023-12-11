/*
    Autor: Marco Guilherme
    Data: 11/12/2023
*/

#include <stdio.h>

int main(void) {
    int first_number, second_number, remainder;

    printf("Enter two integers separated by a blank space: ");

    scanf("%d %d", &first_number, &second_number);

    if(second_number == 0) {
        printf("Attempt to divide by zero. Shutting down...\n");

        return -1;
    }

    remainder = first_number % second_number;

    if(!remainder) {
        printf("%d is divisible by %d\n", first_number, second_number);
    }
    else {
        printf("%d is not divisible by %d\n", first_number, second_number);
    }

    return 0;
}
