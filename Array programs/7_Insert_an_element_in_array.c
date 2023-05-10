#include <stdio.h>
int main()
{
    int a[10000];
    int n;
    int i;
    int e;
    int p;

    printf("Enter the size : ");
    scanf("%d", &n);
    printf("Enter any number: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &e);
    printf("Enter position to insert: ");
    scanf("%d", &p);

    printf("Array elements after insertion :");

    for (i = 0; i < n; i++)
    {
        if (i == p - 1)
        {
            a[i] = p;
        }

        printf("%d ", a[i]);
    }

    return 0;
}