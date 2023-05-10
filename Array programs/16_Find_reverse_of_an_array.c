#include <stdio.h>
int main()
{
    int n;
    int a[100];

    printf("Enter the size of number ");
    scanf("%d", &n);

    printf("Enter the elements: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The reverse of elements are ");

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}