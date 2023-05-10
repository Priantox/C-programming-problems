//
//
// Multiply two floating number
//
//
#include <stdio.h>
int main()
{
    float x1;
    float x2;
    float Multiply;

    printf("Enter two integar: ");
    scanf("%f%f", &x1, &x2);

    Multiply = x1 * x2;

    printf("Result = %0.2f", Multiply);

    return 0;
}