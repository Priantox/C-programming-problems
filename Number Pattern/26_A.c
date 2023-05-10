#include <stdio.h>
int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int x = n;
        for (int j = 1; j <= i; j++)
        {
            printf("%d", x);

            x--;
        }

        printf("\n");
    }

    return 0;
}