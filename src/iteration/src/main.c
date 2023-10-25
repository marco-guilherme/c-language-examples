/*
    Autor: Marco Guilherme
    Data: 04/09/2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i;

    // Laço for
    for(i = 0; i < 10; i++) {
        printf("i = %i\n", i);
    }

    i = 0;
    printf("\n\n");

    // Laço while
    while(i < 10) {
        printf("i = %i\n", i);
        i++;
    } 

    return EXIT_SUCCESS;
}
