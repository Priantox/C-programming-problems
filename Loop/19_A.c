#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int f;
    int g;
    int k = 1;
    float sum1 = 0;
    float x;
    float sum2 = 0;
    float y;

    scanf("%f%d", &x, &n);

    for (int i = 0; i < n; i++)
    {
        f = 2 * i + 1;

        if (i % 2 == 0)
        {
            y = pow(x, f);

            while (f != 0)
            {
                k = k * f;
                f = f - 1;
            }
            sum1 = sum1 + (y / k);
        }

        if (i % 2 != 0)
        {
            y = pow(x, f);

            while (f != 0)
            {
                k = k * f;
                f = f - 1;
            }
            sum2 = sum2 - (y / k);
        }
    }
    printf("%0.3f", (sum1 + sum2));

    return 0;
}