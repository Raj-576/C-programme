// c program to compute Quotient and Ramainder
#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter the number :");
    scanf("%d%d", &num1, &num2);
    int Q = num1 / num2;
    int R = num1 % num2;

    printf("quotient : %d\n",Q);
    printf("remainder : %d",R); 
    return 0;
}
