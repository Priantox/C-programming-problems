#include <stdio.h>
int main()
{
    int n;
    int i;

    scanf("%d", &n);
    int q = n;
    int x = 0;

    while (q != 0)
    {
        int rem = q % 10;
        x = x * 10 + rem;

        q = q / 10;
    }
    printf("%d", x);

    return 0;
}