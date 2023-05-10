#include <stdio.h>
void IsPrime(int);

int main()
{
    int n;
    scanf("%d", &n);

    IsPrime(n);

    return 0;
}

void IsPrime(int x)
{
    int flag = -1;
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag != 0 && x > 1)
    {
        printf("Prime");
    }
    else
    {
        printf("Not prime");
    }
}