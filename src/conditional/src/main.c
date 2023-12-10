/*
    Autor: Marco Guilherme
    Data: 10/12/2023
*/

#include <stdio.h>

int main(void) {
    unsigned int age = 0;

    printf("Enter your age: ");

    scanf("%u", &age);

    if(age < 12) {
        printf("Child\n");
    }
    else if(age >= 12 && age < 18) {
        printf("Teenager\n");
    }
    else if(age >= 18 && age < 60) {
        printf("Adult\n");
    }
    else {
        printf("Elderly\n");
    }


    unsigned int month_number = 1;

    printf("Enter the month number between 1 and 12: ");

    scanf("%u", &month_number);

    switch(month_number) {
        case 1: {
            printf("January\n");
            break;
        }

        case 2: {
            printf("February\n");
            break;
        }

        case 3: {
            printf("March\n");
            break;
        }

        case 4: {
            printf("April\n");
            break;
        }

        case 5: {
            printf("May\n");
            break;
        }

        case 6: {
            printf("June\n");
            break;
        }

        case 7: {
            printf("July\n");
            break;
        }

        case 8: {
            printf("August\n");
            break;
        }

        case 9: {
            printf("September\n");
            break;
        }

        case 10: {
            printf("October\n");
            break;
        }

        case 11: {
            printf("November\n");
            break;
        }

        case 12: {
            printf("December\n");
            break;
        }

        default: {
            printf("Invalid month number\n");
        }
    }

    return 0;
}
