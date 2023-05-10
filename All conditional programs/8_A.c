#include <stdio.h>
int main()
{
    char n;

    printf("Enter any alphabets: ");
    scanf("%c", &n);

    if (n >= 'a' && n <= 'z')
    {
        printf("Lower case");
    }
    else if (n >= 'A' && n <= 'Z')
    {
        printf("Upper case");
    }
    else
    {
        printf("Not an alphabet");
    }

    return 0;
}