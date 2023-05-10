#include <stdio.h>
#include <math.h>
int prime(int);
int armstrong(int);

int main()
{
    int n;
    int flag;

    scanf("%d", &n);

    flag = prime(n);

    if (flag == 1)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not prime\n");
    }

    flag = armstrong(n);

    if (flag == 1 && n > 1)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not armstrong");
    }

    return 0;
}

int prime(int x)
{
    int flag = 1;
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

int armstrong(int y)
{
    int q, sum = 0, c = 0, flag = 0;

    q = y;

    while (q != 0)
    {
        q /= 10;

        c++;
    }
    q = y;

    while (q != 0)
    {
        int r = q % 10;
        sum += pow(r, c);

        q /= 10;
    }

    if (sum == y)
    {
        flag = 1;
    }

    return flag;
}