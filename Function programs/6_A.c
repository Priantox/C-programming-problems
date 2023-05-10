#include <stdio.h>
void str(char x[]);
int main()
{
    char x[100];

    gets(x);

    str(x);

    return 0;
}

void str(char x[])
{
    int i = 0;
    int c = 0;

    while (x[i] != '\0')
    {
        c++;

        i++;
    }

    printf("%d", c);
}