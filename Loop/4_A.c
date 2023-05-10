#include <stdio.h>
int main()
{
    int n;
    int i;
    int count;

    float a, x = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%f", &a);

        x = x + a;
        count++;
    }
    printf("Average: %0.2f", x / n);

    return 0;
}