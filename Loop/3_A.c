#include <stdio.h>
int main()
{
    int n;
    printf("Enter: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        if (i % 2 == 0)
        {
            printf("0");
        }
        if (i % 2 != 0)
        {
            printf("1");
        }
        if (i < n)
        {
            printf(", ");
        }
    }

    return 0;
}