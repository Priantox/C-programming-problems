#include <stdio.h>
#include <math.h>
int cube(int);

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d", cube(n));

    return 0;
}

int cube(int x)
{
    return pow(x, 3);
}