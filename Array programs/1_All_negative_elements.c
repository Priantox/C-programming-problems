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
    printf("the negative numbers are ");

    for (i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}