#include <stdio.h>
void str(char *, char *);

int main()
{
    char x[100];
    char y[100];

    gets(x);
    gets(y);

    str(x, y);

    puts(x);

    return 0;
}

void str(char *a, char *b)
{
    int i = 0;

    while (*(a + i) != '\0')
    {
        i++;
    }

    int j = 0;

    while (*(b + i) != '\0')
    {
        *(a + i) = *(b + j);

        i++;
        j++;
    }

    *(a + i) = '\0';
}