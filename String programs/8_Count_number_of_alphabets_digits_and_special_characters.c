#include <stdio.h>
#include <string.h>
int main()
{
    char x[100];
    int a = 0;
    int d = 0;
    int s = 0;

    gets(x);

    int i = 0;

    while (x[i] != '\0')
    {
        if ((x[i] >= 'A' && x[i] <= 'Z') || (x[i] >= 'a' && x[i] <= 'z'))
        {
            a++;
        }

        else if (x[i] >= '0' && x[i] <= '9')
        {
            d++;
        }
        else
        {
            s++;
        }

        i++;
    }

    printf("Total Alphabets: %d\n", a);
    printf("Total Digits: %d\n", d);
    printf("Total Special characters: %d", s);

    return 0;
}