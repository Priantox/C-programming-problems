#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a = 1;
    int b = 1;
    int x;

    for (int i = n; i >= 1; i--)
    {
        printf("%d", a);
        x = a + b;
        a = b;
        b = x;
        if (i > 1)
        {
            printf(", ");
        }
    }

    return 0;
}