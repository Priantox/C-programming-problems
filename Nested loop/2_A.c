#include <stdio.h>
int main()
{
    int n;
    int x = 1;

    printf("Enter any number: ");
    scanf("%d", &n);

    int q = n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = x; j <= q; j++)
        {
            printf("%d", j);
        }

        x = x + 1;
        q = q + 1;

        printf("\n");
    }

    return 0;
}