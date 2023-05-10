#include <stdio.h>
int main()
{
    float num1;
    float num2;
    float result;
    char operator;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator)
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
        result = num1 / num2;
        break;

    default:
        printf("Error! operator is not correct");
        return 0;
    }

    printf("%.2f %c %.2f = %.2f", num1, operator, num2, result);
    return 0;
}
