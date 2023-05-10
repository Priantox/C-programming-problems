#include <stdio.h>
int main()
{
    int a[10000];
    int n;
    int i;

    printf("Enter the size : ");
    scanf("%d", &n);
    printf("Enter any number: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The numbers are  ");

    for (i = 0; i < n; i++)
    {
        printf(" %d", a[i]);

        if (i != n - 1)
        {
            printf(",");
        }
    }

    return 0;
}