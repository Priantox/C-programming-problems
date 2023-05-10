#include <stdio.h>
int main()
{
    int f;
    int l;
    int n;
    int x = 1;

    printf("Enter any number: ");
    scanf("%d", &n);

    while (n >= 10)
    {
        x = x * (n % 10);

        n /= 10;
    }

    printf("The product is %d", x);

    return 0;
}