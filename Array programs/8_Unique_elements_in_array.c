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

    for (int i = 0; i < n; i++)
    {
        int flag = 1;

        for (int j = 0; j < n; j++)
        {
            if (i != j && a[i] == a[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
