#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int q = n;
    int x = 0;

    while (q != 0)
    {
        int rem = q % 10;
        x = x * 10 + rem;

        q /= 10;
    }
    if (x == n)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}