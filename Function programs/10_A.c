#include <stdio.h>
void perfect(int, int);

int main()
{
    int a;
    int b;

    scanf("%d%d", &a, &b);

    perfect(a, b);

    return 0;
}

void perfect(int x, int y)
{
    for (int i = x; i <= y; i++)
    {
        int sum = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }

        if (sum == i)
        {
            printf("%d ", i);
        }
    }
}