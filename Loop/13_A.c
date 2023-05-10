#include <stdio.h>
int main()
{
    int n;
    int i;
    int x = 1;

    scanf("%d", &n);

    printf("%d! = ", n);

    for (i = n; i >= 1; i--)
    {
        x = x * i;

        printf("%d", i);
        if (i != 1)
        {
            printf(" X ");
        }
    }
    printf(" = %d", x);

    return 0;
}