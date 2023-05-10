#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int x = 0;
    int y = 0;

    for (int i = 1; i <= n; i++)
    {
        x = x * 10 + i;
        y = y + x;
    }
    printf("%d", y);

    return 0;
}