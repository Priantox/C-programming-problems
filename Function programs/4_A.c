#include <stdio.h>
#include <math.h>
int convert(int);

int main()
{
    int n;
    scanf("%d", &n);

    int sum = convert(n);
    printf("%d", sum);

    return 0;
}

int convert(int n)
{
    int sum = 0;
    int q = n;
    int c = 0;

    while (q != 0)
    {
        q /= 10;
        c++;
    }
    q = n;

    for (int i = 0; i < c; i++)
    {
        int r = q % 10;

        if (r == 1)
        {
            sum += pow(2, i);
        }
        q /= 10;
    }

    return sum;
}