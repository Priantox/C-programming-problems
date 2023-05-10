//
// Function to print an input character value.
//

#include <stdio.h>
void value(char);

int main()
{
    char n;
    scanf("%c", &n);

    value(n);

    return 0;
}

void value(char x)
{
    printf("Value received from main: %c", x);
}