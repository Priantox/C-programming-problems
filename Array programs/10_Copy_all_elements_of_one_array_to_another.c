#include <stdio.h>
int main()
{
    int n;
    int a[10000];
    int i;
    int b[1000];

    printf("Enter the size: ");
    scanf("%d", &n);
    printf("Enter the elements: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }

    printf("The elements stored in the first array are : ");
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }

    printf("\nThe elements stored in the second array are : ");
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d  ", b[i]);
    }

    return 0;
}