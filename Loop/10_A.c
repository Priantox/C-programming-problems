#include <stdio.h>
int main()
{
    int n;
    int x = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            x -= i;
        }
        else
        {
            x += i;
        }
    }
    printf("Result: %d", x);

    return 0;
}