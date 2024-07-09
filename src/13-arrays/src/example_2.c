/*
    Autor: Marco Guilherme
    Data: 09/07/2024
*/

#include <stdio.h>

int main(void) {
    float real_numbers[15];
    unsigned char i;

    // Itera, atribui e exibe
    for(i = 0; i < 15; i++) {
        real_numbers[i] = (float) i * 5;

        printf("real_numbers[%u] = %f\n", i, real_numbers[i]);
    }

    return 0;
}
