/*
 * Basic Calculator Program
 * CodeAlpha Internship Task
 *
 * Performs addition, subtraction, multiplication, and division using switch.
 */

#include <stdio.h>

int main(void)
{
    int choice;
    double firstNumber, secondNumber, result;

    printf("\n========================================\n");
    printf("         BASIC CALCULATOR PROGRAM\n");
    printf("========================================\n");
    printf("  1. Addition       (+)\n");
    printf("  2. Subtraction    (-)\n");
    printf("  3. Multiplication (*)\n");
    printf("  4. Division       (/)\n");
    printf("----------------------------------------\n");

    printf("Select an operation (1-4): ");
    if (scanf("%d", &choice) != 1) {
        printf("\nInvalid selection. Please enter a number from 1 to 4.\n");
        return 1;
    }

    if (choice < 1 || choice > 4) {
        printf("\nInvalid selection. Please choose an option from 1 to 4.\n");
        return 1;
    }

    printf("Enter the first number: ");
    if (scanf("%lf", &firstNumber) != 1) {
        printf("\nInvalid number entered.\n");
        return 1;
    }

    printf("Enter the second number: ");
    if (scanf("%lf", &secondNumber) != 1) {
        printf("\nInvalid number entered.\n");
        return 1;
    }

    switch (choice) {
        case 1:
            result = firstNumber + secondNumber;
            printf("\nResult: %.2f + %.2f = %.2f\n", firstNumber, secondNumber, result);
            break;

        case 2:
            result = firstNumber - secondNumber;
            printf("\nResult: %.2f - %.2f = %.2f\n", firstNumber, secondNumber, result);
            break;

        case 3:
            result = firstNumber * secondNumber;
            printf("\nResult: %.2f * %.2f = %.2f\n", firstNumber, secondNumber, result);
            break;

        case 4:
            if (secondNumber == 0) {
                printf("\nError: Division by zero is not allowed.\n");
                return 1;
            }
            result = firstNumber / secondNumber;
            printf("\nResult: %.2f / %.2f = %.2f\n", firstNumber, secondNumber, result);
            break;
    }

    printf("\nThank you for using the calculator!\n");
    return 0;
}
