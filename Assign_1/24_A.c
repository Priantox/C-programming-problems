#include <stdio.h>
void stark(int, int);

int main()
{
    int x;
    int y;

    scanf("%d%d", &x, &y);

    stark(x, y);

    return 0;
}

void stark(int a, int b)
{
    int max = a > b ? a : b;
    int min = a < b ? a : b;

    while (max % min != 0)
    {
        int rem = max % min;
        max = min;
        min = rem;
    }

    printf("\n");

    printf("GCD : %d\n", min);
    printf("LCD: %d\n", (a * b) / min);
}