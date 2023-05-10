#include <stdio.h>
void ascen(int *, int);

int main()
{
    int a[100];
    int i;
    char ch;

    for (i = 0; ch != '\n'; i++)
    {
        scanf("%d", &a[i]);
        scanf("%c", &ch);
    }

    ascen(a, i);

    printf("\n\n");

    for (int j = 0; j < i; j++)
    {
        printf("%d ", a[j]);
    }

    return 0;
}

void ascen(int *x, int l)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = i + 1; j < l; j++)
        {
            if (*(x + j) <= *(x + i))
            {
                int t = *(x + i);
                *(x + i) = *(x + j);
                *(x + j) = t;
            }
        }
    }
}