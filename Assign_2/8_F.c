//
// Function that takes an array of n integer numbers as input and prints them in reverse order.
//

#include <stdio.h>
void stark(int a[], int);

int main()
{
    int n;
    int a[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    stark(a, n);

    return 0;
}

void stark(int a[], int l)
{
    for (int i = 0; i < l / 2; i++)
    {
        int j = l - i - 1;
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
    }

    for (int i = 0; i < l; i++)
    {
        printf("%d ", a[i]);
    }
}
