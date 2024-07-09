/*
    Autor: Marco Guilherme
    Data: 09/07/2024
*/

#include <stdio.h>

#define ARRAY_SIZE 5

int main(void) {
    float foo[ARRAY_SIZE];
    unsigned char i;
    float sum = 0.0, mean;

    for(i = 0; i < ARRAY_SIZE; i++) {
        printf("Enter a real number [%u of %u]: ", i + 1, ARRAY_SIZE);
        scanf("%f", &foo[i]);
        sum += foo[i];
    }

    mean = sum/ARRAY_SIZE;

    printf("\nMean = %f\n", mean);

    return 0;
}
