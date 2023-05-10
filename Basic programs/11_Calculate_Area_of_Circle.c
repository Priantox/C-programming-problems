#include <stdio.h>
int main()
{
    float r;

    printf("Enter radius: ");
    scanf("%f", &r);

    float A = 3.1416 * (r * r);

    printf("The area of circle is %0.2f", A);

    return 0;
}