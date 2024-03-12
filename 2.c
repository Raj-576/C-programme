#include <stdio.h>

int main()
{
    float num1;
    float num2;
    char op;
    float result;

    printf("Enter the first number: ");
    if (scanf("%f", &num1) != 1) {
        printf("Invalid input for the first number\n");
        return 1;
    }

    printf("Enter the operation (+, -, *, /): ");
    scanf(" %c", &op);
    getchar(); 

    printf("Enter the second number: ");
    if (scanf("%f", &num2) != 1) {
        printf("Invalid input for the second number\n");
        return 1;
    }

    switch (op)
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero!\n");
                return 1; 
            }
            break;
        default:
            printf("Invalid operation\n");
            return 1; 
    }

    printf("Result: %f\n", result);

    return 0;
}
