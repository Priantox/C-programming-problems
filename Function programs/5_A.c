#include <stdio.h>
void convert(int);
int main()
{
    int n;
    scanf("%d", &n);

    convert(n);

    return 0;
}

void convert(int x)
{
    int f = 1;
    int sum = 0;

    while (x != 0)
    {
        int r = x % 2;
        sum = sum + f * r;
        f = f * 10;
        x /= 2;
    }
    printf("%d", sum);
}