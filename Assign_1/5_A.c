#include <stdio.h>
void numb(int, int);

int main()
{
    int a;
    int b;
    
    scanf("%d%d", &a, &b);

    numb(a, b);

    return 0;
}

void numb(int x, int y)
{
    if (x > y)
    {
        printf("%d is greater than %d", x, y);
    }

    if (x < y)
    {
        printf("%d is less than %d", x, y);
    }

    if (x == y)
    {
        printf("%d is equal to %d", x, y);
    }
}