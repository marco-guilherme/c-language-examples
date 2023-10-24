/*
    Autor: Marco Guilherme
    Data: 27/08/2023
*/

#include <stdio.h>

int main(void) {
    // Área do retângulo
    int area;
    int length; // Comprimento ou base
    int width; // Largura ou altura

    printf("Enter the length value (integer): ");

    // Lê um número inteiro e atribui na variável length
    // O primeiro argumento é o especificador de formato para um número inteiro
    // O segundo argumento é o endereço da variável length
    scanf("%i", &length);

    printf("Enter the width value (integer): ");

    scanf("%i", &width);

    area = length * width;

    printf("length = %i\n", length);
    printf("width = %i\n", width);
    printf("area = %i\n", area);

    return 0;
}
