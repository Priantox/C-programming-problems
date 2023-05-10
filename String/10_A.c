#include <stdio.h>
void palindrome(char x[]);

int main()
{
    char a[100];

    gets(a);

    palindrome(a);

    return 0;
}

void palindrome(char x[])
{
    int l = 0;

    while (x[l] != '\0')
    {
        l++;
    }

    char r[100];

    int i = 0;

    while (x[i] != '\0')
    {
        r[i] = x[l - i - 1];

        i++;
    }
    int flag;

    for (int j = 0; j < l; j++)
    {
        flag = -1;

        if (x[j] != r[j])
        {
            flag = 0;
            break;
        }
    }

    if (flag != 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}