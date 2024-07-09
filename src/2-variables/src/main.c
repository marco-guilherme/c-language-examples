/*
    Autor: Marco Guilherme
    Data: 15/08/2023
*/

#include <stdio.h>

int main(void) {
    // Declaração sem inicialização
    int age;

    // Inicialização
    age = 23;

    // Declaração com inicialização
    int day = 15;

    // Ponto flutuante
    float height = 1.85;

    // Caractere
    char symbol = '$';

    printf("age = %i\nday = %i\n", age, day);
    printf("height = %f\n", height);
    printf("symbol = %c\n", symbol);

    // Mais especificadores de formato do que variáveis (incorreto)
    printf("%i %i %i\n", age);

    return 0;
}
