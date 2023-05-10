#include <stdio.h>
void prime(int, int);
int main()
{
    int a;
    int b;
    scanf("%d%d", &a, &b);

    prime(a, b);

    return 0;
}

void prime(int x, int y)
{
    for (int i = x; i <= y; i++)
    {
        int flag = -1;

        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag != 0 && i > 1)
        {
            printf("%d ", i);
        }
    }
}