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

    int max = a[0];
    int min = a[0];

    for (i = 0; i < n; i++)
    {

        if (a[i] > max)
        {
            max = a[i];
        }

        if (a[i] < min)
        {
            min = a[i];
        }
    }

    printf("Maximum number is %d\n", max);
    printf("Minimum number is %d", min);

    return 0;
}