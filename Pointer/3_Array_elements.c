#include <stdio.h>
void arr(int *, int *);

int main()
{
    int n;
    int a[100];
    
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    arr(&a[0], &n);

    return 0;
}

void arr(int *x, int *N)
{
    for (int i = 0; i < *N; i++)
    {
        printf("%d", *(x + i));

        if (i != *N - 1)
        {
            printf(", ");
        }
    }
}