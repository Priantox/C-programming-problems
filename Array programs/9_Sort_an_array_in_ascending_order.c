#include <stdio.h>
int main()
{
    int n;
    int a[10000];
    int i;

    printf("Enter the size: ");
    scanf("%d", &n);
    printf("Enter the elements: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Elements of array in sorted ascending: \n");

    for (i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] <= a[i])
            {
                int k = a[i];
                a[i] = a[j];
                a[j] = k;
            }
        }
        printf("%d\n", a[i]);
    }

    return 0;
}