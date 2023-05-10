#include <stdio.h>
int main()
{
    int n;
    int i;
    int x = 1;

    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            x = 0;
            break;
        }
    }
    if (x == 1 && n > 1)
    {
        printf("Prime");
    }
    else
    {
        printf("Not prime");
    }

    return 0;
}