/*
    Autor: Marco Guilherme
    Data: 27/08/2023
*/

#include <stdio.h>

int main(void) {
    // Operador de atribuição (=)
    int x1 = 5, x2 = -2;

    // Operador de soma (+)
    int x3 = x1 + x2;
    // Valor literal na soma
    int x4 = x3 + 63;

    printf("x1 + x2 = %i\n\n\n", x3);

    // Operador de subtração (-)
    printf("x1 - x2 = %i\n\n\n", x1 - x2);

    // Operador de multiplicação (*)
    printf("x1 * x2 = %i\n\n\n", x1 * x2);

    // Operador de divisão (/)
    // Ao dividir um número inteiro por outro inteiro, o resultado será um
    // inteiro
    printf("x1/x2 = %i\n\n\n", x1/x2);

    // Divisão decimal
    // Se um dos operandos for um número decimal, o resultado será um número
    // decimal
    printf("x1/x2 = %f\n\n\n", x1/(float) x2);

    // Precedência dos operadores
    printf("x1 + (x2 * x3) = %i\n", x1 + x2 * x3);
    printf("x1 + (x2 * x3) - (12/x4) = %i\n\n\n", x1 + x2 * x3 - 12/x4);

    // Operadores de comparação
    printf("x1 == x2? %d\n", x1 == x2); // Igual
    printf("x1 > x2? %d\n", x1 > x2); // Maior
    printf("x1 < x2? %d\n", x1 < x2); // Menor
    printf("x1 >= x2? %d\n", x1 >= x2); // Maior ou igual
    printf("x1 <= x2? %d\n", x1 <= x2); // Menor ou igual

    return 0;
}
