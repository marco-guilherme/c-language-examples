/*
    Autor: Marco Guilherme
    Data: 12/12/2023
*/

#include <stdio.h>

int main(void) {
    int condition = 0, number;

    condition ? printf("TRUE\n") : printf("FALSE\n");

    condition = 1;
    
    condition ? printf("TRUE\n") : printf("FALSE\n");

    // Expression must be a modifiable lvalue
    1 ? (number = 42) : (number = -1);

    printf("Number: %d\n", number);

    number = 0 ? 11 : 22;

    printf("Number: %d\n", number);

    // Se a primeira condição for falsa, avalia a segunda condição
    (!condition) ? printf("TRUE\n") : condition ? printf("TRUE 1\n") : printf("FALSE 1\n");

    return 0;
}
