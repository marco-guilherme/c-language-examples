/*
    Autor: Marco Guilherme
    Data: 09/07/2024
*/

#include <stdio.h>

int main(void) {
    // Cria o vetor de 5 inteiros
    int numbers[5];

    // Atribui valores no vetor
    numbers[0] = 5;
    numbers[1] = 42;
    numbers[2] = -23;
    numbers[3] = 90;
    numbers[4] = 671;

    // Exibe um elemento do vetor
    printf("numbers[1] = %d\n", numbers[1]);


    printf("\n\n");

    float real_numbers[15];
    unsigned char i;

    // Itera, atribui e exibe
    for(i = 0; i < 15; i++) {
        real_numbers[i] = (float) i * 5;

        printf("real_numbers[%u] = %f\n", i, real_numbers[i]);
    }


    printf("\n\n");

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
