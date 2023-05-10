#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int x = 0;
    int y;
    int sum = 0;
    int f = 0;

    scanf("%d", &n);

    int q = n;

    for (int j = q; j >= 1; j -= 2)
    {
        if ((j % 2 == 0) && (j == q))
        {
            printf("%d.%d^2", j, (j - 1));
        }

        if ((j % 2 != 0) && (j == q))
        {
            printf("%d^2", j);
        }
        if ((j != q) && (j % 2 != 0))
        {
            printf("%d.%d^2", (j + 1), j);
        }
        if ((j != q) && (j % 2 == 0))
        {
            printf("%d.%d^2", j, (j - 1));
        }

        if ((j != 1) && (j != 2))
        {
            printf(" + ");
        }
    }

    for (int i = 0; ((i <= n) && (x < n) && (f < n)); i++)
    {
        x = (2 * i) + 1;
        y = pow(x, 2);
        f = (x + 1);

        if (x == n)
        {
            f = 1;
        }

        sum = sum + f * y;
    }
    printf(" = %d", sum);

    return 0;
}