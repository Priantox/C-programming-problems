//
// Function find_substr( ) that takes two string arrays (a, b) as parameters, returns 1 if string b
// is found anywhere in string a, or returns –1 if no match is found. 
//

#include <stdio.h>
int find_substr(char x[], char r[]);

int main()
{
    char a[100];
    char b[100];

    gets(a);
    gets(b);

    int count = find_substr(a, b);

    printf("%d", count);

    return 0;
}

int find_substr(char x[], char r[])
{
    int i = 0;
    int flag;
    int c = 0;
    while (x[i] != '\0')
    {
        if (x[i] == r[0])
        {
            flag = -1;
            for (int j = 1; r[j] != '\0'; j++)
            {
                if (x[i + j] != r[j])
                {
                    flag = 0;
                    break;
                }
            }

            if (flag != 0)
            {
                c = 1;
            }
        }

        i++;
    }

    if (c != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}