#include <stdio.h>
int main()
{
    int n;
    int a[100];
    int e = 0;
    int f = 0;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements in array: ", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            e++;
        }
        else
        {
            f++;
        }
    }

    printf("Total even elements: %d\n", e);
    printf("Total odd elements: %d", f);

    return 0;
}