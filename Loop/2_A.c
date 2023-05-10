#include <stdio.h>
int main()
{
    int n;
    printf("Enter: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 3)
    {
        printf("%d", i);

        if (i < n)
        {
            printf(", ");
        }
    }

    return 0;
}