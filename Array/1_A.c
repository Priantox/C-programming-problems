//
//WAP that will take n integer numbers into an array, and then print all the integers into reverse order (from the last valid index to index 0).
//

#include <stdio.h>
int main()
{
    int n;
    int i;
    int j;
    int a[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}