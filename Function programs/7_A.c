#include <stdio.h>
void strong(int, int);

int main()
{
    int s;
    int e;

    scanf("%d%d", &s, &e);

    strong(s, e);

    return 0;
}

void strong(int x, int y)
{

    for (int i = x; i <= y; i++)
    {
        int sum = 0;
        int q = i;

        while (q != 0)
        {
            int r = q % 10;
            int m = 1;

            for (int j = 1; j <= r; j++)
            {
                m *= j;
            }
            sum = sum + m;
            q /= 10;
        }

        if (sum == i)
        {
            printf("%d ", sum);
        }
    }
}