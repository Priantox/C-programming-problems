//
// Function to take a string as input and find its length
//

#include<stdio.h>
#include <stdio.h>
int str(char a[]);

int main()
{
    char x[100];

    gets(x);

    int k = str(x);

    printf("%d", k);

    return 0;
}

int str(char a[])
{
    int c = 0;

    for (int i = 0; a[i] != '\0'; i++)
    {
        c++;
    }

    return c;
}