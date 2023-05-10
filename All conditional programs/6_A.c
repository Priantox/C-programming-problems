#include <stdio.h>
int main()
{
    char n;

    printf("Enter any character: ");
    scanf("%c", &n);

    if ((n >= 'A' && n <= 'Z') || (n >= 'a' && n <= 'z'))
    {
        printf("Alphabet");
    }
    else
    {
        printf("Not Alphabet");
    }

    return 0;
}