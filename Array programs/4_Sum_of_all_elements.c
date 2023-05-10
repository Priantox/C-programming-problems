#include <stdio.h>
int main()
{
    int a[10000];
    int n;
    int i;
    int sum = 0;

    printf("Enter the size : ");
    scanf("%d", &n);

    printf("Enter any number: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Sum = ");

    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    printf("%d", sum);

    return 0;
}