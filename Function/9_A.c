//
// Function to calculate the factorial of a number.
//

#include <stdio.h>
void fac(int);

int main()
{
    int n;

    scanf("%d", &n);

    fac(n);

    return 0;
}

void fac(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }

    printf("%d", f);
}
