/*
    Autor: Marco Guilherme
    Data: 09/07/2024
*/

#include <stdio.h>

int main(void) {
    unsigned char i;
    int foo[9];

    // O vetor não foi inicializado, portanto, exibirá o "lixo" contido na memória
    for(i = 0; i < 9; i++) {
        printf("foo[%u] = %d\n", i, foo[i]);
    }


    printf("\n\n");

    // Inicializa apenas a primeira posição do vetor com 8 e zera o restante
    int bar[10] = {8};

    for(i = 0; i < 10; i++) {
        printf("bar[%u] = %d\n", i, bar[i]);
    }


    printf("\n\n");

    // Inicializa a primeira e segunda posição do vetor e zera o restante
    int baz[10] = {8, 2};

    for(i = 0; i < 10; i++) {
        printf("baz[%u] = %d\n", i, baz[i]);
    }


    printf("\n\n");

    // Inicializa todo o vetor com zeros
    int qux[100] = {0};

    for(i = 0; i < 100; i++) {
        printf("%d ", qux[i]);
    }

    return 0;
}
