#include <stdio.h>
void swap(int, int);

int main()
{
    int a;
    int b;

    scanf("%d%d", &a, &b);

    swap(a, b);

    printf("Value in main:  %d %d", a, b);

    return 0;
}

void swap(int x, int y)
{
    int t = x;
    x = y;
    y = t;

    printf("Value in func:  %d %d\n", x, y);
}