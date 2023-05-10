#include <stdio.h>
int main()
{
    int a[10000];
    int n;
    int i;
    int count = 0;

    printf("Enter the size : ");
    scanf("%d", &n);
    printf("Enter any number: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The negative numbers are ");

    for (i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}