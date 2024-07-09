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

    i = 0;
    printf("\n\n");

    // Laço for sem inicialização
    for( ; i < 3; i++) {
        printf("%d\n", i);
    }

    i = 0;
    printf("\n\n");

    // Laço for sem inicialização e sem condição de parada
    for( ; ; i++) {
        printf("%d\n", i);

        if(i > 3) {
            break;
        }
    }

    i = 0;
    printf("\n\n");

    // Laço for sem inicialização, sem condição de parada e sem
    // incremento/decremento
    for( ; ; ) {
        printf("%d\n", i);

        i++;

        if(i > 3) {
            break;
        }
    }

    // Laço for infinito
    // for( ; ; ) {
    //     printf("FOR\n");
    // }

    // Laço while infinito
    // while(1) {
    //     printf("WHILE\n");
    // }

    i = 0;
    printf("\n\n");

    // Laço do while
    do {
        printf("DO WHILE\n");
    } while(i != 0);


    printf("\n\n");

    // Laço aninhado
    unsigned char j, k;

    for(j = 0; j < 5; j++) {
        for(k = 0; k < 7; k++) {
            printf("[%u][%u]\n", j, k);
        }

        printf("---\n");
    }

    return EXIT_SUCCESS;
}
