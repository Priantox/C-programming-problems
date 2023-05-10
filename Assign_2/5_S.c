#include <stdio.h>
void rev(char a[]);

int main()
{
    char a[100];

    gets(a);

    rev(a);

    return 0;
}

void rev(char x[])
{
    int l = 0;

    while (x[l] != '\0')
    {
        l++;
    }

    for (int i = 0; i < l / 2; i++)
    {
        int j = l - i - 1;
        int t = x[i];
        x[i] = x[j];
        x[j] = t;
    }

    puts(x);
}