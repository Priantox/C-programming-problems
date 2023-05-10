#include <stdio.h>
int main()
{
    int integer;
    float floting;
    char character;
    integer = 5;
    floting = 3.141593;
    character = 'a';

    printf("The integer value: %d\nThe floating point value: %f\nThe character value: %c", integer, floting, character);
    printf("\n");

    integer = 100;
    floting = 1.618000;
    character = 'z';
    
    printf("The integer value: %d\nThe floating point value: %f\nThe character value: %c", integer, floting, character);
    return 0;
}