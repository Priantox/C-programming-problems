#include <stdio.h>
int main()
{
    int n;
    int r;
    int i;
    int x = 1;

    scanf("%d%d", &n, &r);

    for (i = 1; i <= n; i++)
    {
        x = x * i;
    }

    int y = 1;

    for (int j = 1; j <= r; j++)
    {
        y = y * j;
    }
    int z = 1;

    int a = n - r;

    for (int k = 1; k <= a; k++)
    {
        z = z * k;
    }

    printf("%d", x / (z * y));

    return 0;
}