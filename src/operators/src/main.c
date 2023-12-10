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
    int result = 0;

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

    // Módulo (resto da divisão)
    printf("83 %% 6 = %d\n\n\n", 83 % 6);

    // Precedência dos operadores
    printf("x1 + (x2 * x3) = %i\n", x1 + x2 * x3);
    printf("x1 + (x2 * x3) - (12/x4) = %i\n\n\n", x1 + x2 * x3 - 12/x4);

    // Operadores de comparação
    printf("x1 == x2? %d\n", x1 == x2); // Igual
    printf("x1 != x2? %d\n", x1 == x2); // Diferente
    printf("x1 > x2? %d\n", x1 > x2); // Maior
    printf("x1 < x2? %d\n", x1 < x2); // Menor
    printf("x1 >= x2? %d\n", x1 >= x2); // Maior ou igual
    printf("x1 <= x2? %d\n\n\n", x1 <= x2); // Menor ou igual

    x1 = 4;
    x2 = 9;

    // Incremento (x1 = x1 + 1)
    x1++;

    printf("x1++ %d\n", x1);

    // Decremento (x2 = x2 - 1)
    x2--;

    printf("x2-- %d\n", x2);

    // Primeiro lê o valor da variável, depois incrementa/decrementa
    printf("x1++ %d\n", x1++);
    printf("x2-- %d\n", x2--);

    // Primeiro incrementa/decrementa, depois lê o valor da variável
    printf("++x1 %d\n", ++x1);
    printf("--x2 %d\n", --x2);

    // Atribuição aumentada
    x1 += 1;
    x1 -= 1;
    x1 *= 2;
    x1 /= 2;
    x1 %= 2;

    // Operadores lógicos
    result = 1 && 0;
    result = 1 || 0;
    result = !1;

    // Ternário
    result = x1 > -5 ? 11 : 22;

    return 0;
}
