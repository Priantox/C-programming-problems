#include <stdio.h>
void sum(int);

int main()
{
    int n;
    int arr[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int total = 0;

    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }

    sum(total);

    printf("Sum In Main: %d", total);

    return 0;
}

void sum(int x)
{
    printf("Sum In Function: %d\n", x);
}
