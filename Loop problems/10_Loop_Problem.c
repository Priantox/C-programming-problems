#include <stdio.h>
int main()
{
    int f;
    int l;
    int n;

    printf("Enter any number: ");
    scanf("%d", &n);

    l = n % 10;

    while (n >= 10)
    {
        n /= 10;
    }
    f = n;

    printf("The first digit: %d\n", f);
    printf("The first digit: %d\n", l);

    return 0;
}