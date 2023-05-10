#include <stdio.h>
int main()
{
    int n;
    int a[1000];
    int count = 0;

    printf("Enter the size: ");
    scanf("%d", &n);
    printf("Enter the number of elements: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;

                break;
            }
        }
    }

    printf("%d ", count);

    return 0;
}