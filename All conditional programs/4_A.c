#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;

    printf("Enter any three number: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("%d is the largest number", a);
        }
        else
        {
            printf("%d is the largest number", c);
        }
    }

    return 0;
}