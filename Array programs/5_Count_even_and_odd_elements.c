#include <stdio.h>
int main()
{
    int a[10000];
    int n;
    int i;
    int sum = 0;
    int counteven = 0;
    int countodd = 0;

    printf("Enter the size : ");
    scanf("%d", &n);

    printf("Enter any number: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {

        if (a[i] % 2 == 0)
        {
            counteven++;
        }
        if (a[i] % 2 != 0)
        {
            countodd++;
        }
    }

    printf("Total even numbers are %d\n", counteven);
    printf("Total odd numbers are %d", countodd);

    return 0;
}