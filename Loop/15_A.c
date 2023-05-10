#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    int b;

    scanf("%d%d", &a, &b);

    if (a > 0 && b > 0)
    {
        int x = pow(a, b);

        printf("%d", x);
    }
    else
    {
        printf("Not valid");
    }

    return 0;
}