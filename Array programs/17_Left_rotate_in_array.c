#include <stdio.h>
int main()
{
    int n;
    int a[100];
    int k;
    int x;

    printf("Enter the size: ");
    scanf("%d", &n);

    printf("Enter the elements: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the number of times to left rotate: ");
    scanf("%d", &k);

    for (int i = 0; i < k; i++)
    {
        x = a[0];

        for (int j = 0; j < n - 1; j++)
        {
            a[j] = a[j + 1];
        }

        a[n - 1] = x;
    }

    printf("Array after left rotation: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}