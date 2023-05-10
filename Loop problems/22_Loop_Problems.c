#include <stdio.h>
int main()
{
    int a;
    int b;

    printf("Enter two integar: ");
    scanf("%d%d", &a, &b);

    int max = a > b ? a : b;
    int min = a < b ? a : b;

    while (max % min != 0)
    {
        int rem = max % min;
        max = min;
        min = rem;
    }
    int x = (a * b) / min;

    printf("LCM: %d", x);

    return 0;
}