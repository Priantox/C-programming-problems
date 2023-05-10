#include <stdio.h>
int stark(char a[]);

int main()
{
    char a[100];

    gets(a);

    int count = stark(a);

    printf("%d", count);

    return 0;
}

int stark(char x[])
{
    int c = 0;

    for (int i = 0; x[i] != '\0'; i++)
    {
        if (x[i] == 'a' || x[i] == 'e' || x[i] == 'i' || x[i] == 'o' || x[i] == 'u')
        {
            c++;
        }
        if (x[i] == 'A' || x[i] == 'E' || x[i] == 'I' || x[i] == 'O' || x[i] == 'U')
        {
            c++;
        }
    }

    return c;
}