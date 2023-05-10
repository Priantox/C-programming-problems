#include <stdio.h>
int main()
{
    int n;
    int x = 0;

    printf("Enter any number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        x = x * 10;
        x = x + n % 10;
        n = n / 10;
    }
    printf("The reverse is %d", x);

    return 0;
}