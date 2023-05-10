#include <stdio.h>
void rev(int a[], int);

int main()
{
    int n;
    int a[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    rev(a, n);

    return 0;
}

void rev(int a[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
}