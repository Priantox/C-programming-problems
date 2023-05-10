#include <stdio.h>
int main()
{
    int n;
    int x = 1;

    printf("Enter row: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", x);

            x++;
        }
        printf("\n");
    }
    return 0;
}