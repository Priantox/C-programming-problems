#include <stdio.h>
int drstrange(char a[]);

int main()
{
    char a[100];

    gets(a);

    printf("%d", drstrange(a));

    return 0;
}

int drstrange(char x[])
{
    int c = 0;

    for (int i = 0; x[i] != '\0'; i++)
    {
        if (x[i] == ' ')
        {
            c++;
        }
    }

    return c + 1;
}