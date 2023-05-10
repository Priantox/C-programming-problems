#include <stdio.h>
void numb(int a[]);

int main()
{
    int a[100];

    numb(a);

    return 0;
}

void numb(int a[])
{
    int i = 0;
    char ch;

    while (1)
    {
        scanf("%d", &a[i]);
        scanf("%c", &ch);

        if (a[i] % 2 == 0)
        {
            printf("%d ", a[i]);
        }

        if (ch == '\n')
        {
            break;
        }

        i++;
    }
}