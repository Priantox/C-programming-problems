#include <stdio.h>
int numb(int);

int main()
{
    int n;
    scanf("%d", &n);

    if (numb(n) == 1)
    {
        printf("Positive");
    }
    else if (numb(n) == 2)
    {
        printf("Negative");
    }
    else
    {
        printf("Zero");
    }

    return 0;
}

int numb(int x)
{
    if (x > 0)
    {
        return 1;
    }
    if (x < 0)
    {
        return 2;
    }
    if (x == 0)
    {
        return 0;
    }
}