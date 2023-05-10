#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int x = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int f = pow(i, 2);

        x = x + f * (i + 1);
    }
    printf("Result: %d", x);

    return 0;
}