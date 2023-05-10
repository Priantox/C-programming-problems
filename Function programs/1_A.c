#include <stdio.h>
int check(int);
int main()
{
    int n;
    scanf("%d", &n);

    int flag = check(n);

    if (flag == 1)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }

    return 0;
}

int check(int x)
{
    int flag = 0;

    if (x % 2 == 0)
    {
        flag = 1;
    }

    return flag;
}