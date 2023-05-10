#include <stdio.h>
int sectumSempra(int);
int checkerFunc1(int);
int checkerFunc2(int);
int checkerFunc3(int);
int strongChecker(int);
int defectiveChecker(int);
int checkerFunc4(int);

int main()
{
    int x;
    int y;

    scanf("%d%d", &x, &y);

    for (int i = x; i <= y; i++)
    {
        if (sectumSempra(i))
        {
            printf("%d ", i);
        }
    }

    return 0;
}

int sectumSempra(int a)
{
    if ((checkerFunc1(a)) && (checkerFunc2(a)) && (checkerFunc3(a)) && (checkerFunc4(a)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int checkerFunc1(int a)
{
    int q = a;

    while (q < 10)
    {
        q /= 10;
    }

    int k = a;

    k = k % 10;

    if ((q == 7 ||
        q == 1) && 
        (k != 9 || k != 2))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int checkerFunc2(int a)
{
    int q = a;
    int c = 0;
    int flag;

    while (q != 0)
    {
        q /= 10;

        c++;
    }
    q = a;

    for (int i = 1; i <= c; i++)
    {
        flag = -1;

        int r = q % 10;

        if (i % 2 != 0)
        {
            if (r % 2 == 0)
            {
                flag = 0;
                break;
            }
        }

        if (i % 2 == 0)
        {
            if (r % 2 != 0)
            {
                flag = 0;
                break;
            }
        }
        q /= 10;
    }

    if (flag != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int checkerFunc3(int a)
{
    if ((strongChecker(a)) && (defectiveChecker(a)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int strongChecker(int a)
{
    int q = a;
    int sum = 0;

    while (q != 0)
    {
        int n = 1;
        int r = q % 10;

        for (int i = 1; i <= r; i++)
        {
            n = n * i;
        }

        sum = sum + n;

        q /= 10;
    }

    if (a == sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int defectiveChecker(int a)
{
    int q = a;
    int sum = 0;

    for (int i = 1; i <= q; i++)
    {
        if (q % i == 0)
        {
            sum += i;
        }
    }

    if (sum < q * 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int checkerFunc4(int a)
{
    int q = a;
    int c = 0;
    int sum = 0;

    while (q != 0)
    {
        q /= 10;

        c++;
    }

    q = a;

    while (q != 0)
    {
        int r = q % 10;

        int s = r * r;

        sum += s;

        q /= 10;
    }

    if ((c >= 2) && (sum % 7 == 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
