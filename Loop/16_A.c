#include <stdio.h>
int main()
{
    int a;
    int b;

    scanf("%d%d", &a, &b);

    int max = a > b ? a : b;
    int min = a < b ? a : b;

    while (max % min != 0)
    {
        int rem = max % min;
        max = min;
        min = rem;
    }
    printf("GCD: %d\n", min);
    printf("LCD: %d", (a * b) / min);

    return 0;
}