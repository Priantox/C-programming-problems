#include <stdio.h>
int steve_roger(char x[], char);

int main()
{
    char a[100];
    char n;

    gets(a);

    scanf("%c", &n);

    int count = steve_roger(a, n);

    printf("%d", count);

    return 0;
}

int steve_roger(char x[], char n)
{
    int c = 0;

    for (int i = 0; x[i] != '\0'; i++)
    {
        if (x[i] == n || x[i] == n - 32 || x[i] == n + 32)
        {
            c++;
        }
    }

    return c;
}