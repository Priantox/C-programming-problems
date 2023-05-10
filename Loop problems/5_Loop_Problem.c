#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    int x;

    printf("Enter any number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        x = n % 10;
        sum += x;
        n = n / 10;
    }
    printf("Sum of digit: %d", sum);

    return 0;
}