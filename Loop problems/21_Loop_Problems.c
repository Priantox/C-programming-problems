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
    printf("HCF: %d", min);

    return 0;
}