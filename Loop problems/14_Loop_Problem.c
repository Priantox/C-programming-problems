#include <stdio.h>
int main()
{
    int n;
    int i;
    int x = 1;

    printf("Enter any number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        x = x * i;
    }
    printf("Factorial of %d is %d", n, x);

    return 0;
}