#include <stdio.h>
int main()
{
    int integer;
    float floting;
    char character;
    
    scanf("%d\n%f\n%c", &integer, &floting, &character);

    printf("The integer value: %d\nThe floating point value: %f\nThe character value: %c", integer, floting, character);
    
    return 0;
}