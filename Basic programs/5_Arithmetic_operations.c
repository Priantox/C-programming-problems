//
//
//Arithmetic operation
//
//

#include <stdio.h>
int main()
{
    int a;
    int b;

    printf("Enter two integar: ");
    scanf("%d%d", &a, &b);

    int sum = a + b;
    int minus = a - b;
    int multi = a * b;
    float x = a / b;
    int y = a % b;

    printf("Sum of two integar = %d\n", sum);
    printf("Difference of two integar = %d\n", minus);
    printf("Product of two integar = %d\n", multi);
    printf("Division of two integar = %0.1f\n", x);
    printf("Modulus of two integar = %d\n", y);

    return 0;
}