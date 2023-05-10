#include <stdio.h>
int numb(int);

int main()
{
    int x;

    printf("Minimum Value: %d", numb(x));

    return 0;
}

int numb(int min)
{
    int i = 0, a[100];
    char ch;

    min = a[0];

    while (1)
    {
        scanf("%d", &a[i]);
        scanf("%c", &ch);

        if (min > a[i])
        {
            min = a[i];
        }

        if (ch == '\n')
        {
            break;
        }

        i++;
    }

    return min;
}