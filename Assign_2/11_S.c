#include <stdio.h>
int count(char x[]);

int main()
{
    char a[100];

    gets(a);

    int total = count(a);

    printf("%d", total);

    return 0;
}

int count(char x[])
{
    int sum = 0;

    for (int i = 0; x[i] != '\0'; i++)
    {
        if (x[i] >= '0' && x[i] <= '9')
        {
            sum += x[i] - '0';
        }
    }

    return sum;
}