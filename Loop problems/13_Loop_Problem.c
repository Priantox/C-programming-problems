#include <stdio.h>
int main()
{
    int b;
    int e;
    int i;
    int x = 1;

    printf("Enter base: ");
    scanf("%d", &b);
    printf("Enter exponent: ");
    scanf("%d", &e);

    for (i = 1; i <= e; i++)
    {
        x = x * b;
    }
    printf("Power: %d", x);

    return 0;
}