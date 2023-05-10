#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int i;
    int x = 0;

    printf("Enter any number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        int q = i;

        int count = log10(i) + 1;

        while (q != 0)
        {
            int rem = q % 10;
            x = x + pow(rem, count);
            q = q / 10;
        }
        if (x == i)
        {
            printf("%d ", i);
        }
        count = 0;
        x = 0;
    }

    return 0;
}