#include <stdio.h>
int main()
{
    char x;

    printf("Enter any character: ");
    scanf("%c", &x);

    printf("%c ASCII value is %d", x, x);

    return 0;
}