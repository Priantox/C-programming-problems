#include <stdio.h>
#include <math.h>
int main()
{
    int r1;
    int r2;
    int x = 0;
    int sum = 0;
    int y;
    int f;
    int l;

    scanf("%d%d", &r1, &r2);

    for (int i = r1; i <= r2; i++)
    {
        int q = i;

        while (q != 0)
        {
            int rem = q % 10;
            x = x * 10 + rem;

            q /= 10;
        }
        q = i;

        while (q != 0)
        {
            int rev = q % 10;
            sum = sum + rev;
            q /= 10;
        }
        y = pow(sum, 2);

        f = i;
        while (f >= 10)
        {
            f /= 10;
        }
        l = i % 10;

        if ((x != i) && (y % 8 == 0) && (f == 1) && (l == 1))
        {
            printf("%d ", i);
        }
        x = 0;
        sum = 0;
        y = 0;
        l = 0;
    }

    return 0;
}