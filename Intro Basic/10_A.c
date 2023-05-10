#include <stdio.h>
int main()
{
    long int lint;
    long long int llint;
    long double ld;
    short int sint;
    lint = 2147483647;
    llint = 9223372036854775807;
    ld = 1.1E+4931;
    sint = 32767;

    printf("The long int value: %ld\n", lint);
    printf("The long long int value: %lld\n", llint);
    printf("The long double value: %Lf\n", ld);
    printf("The short int value: %d\n", sint);
    printf("\n");

    lint = -2147483648;
    llint = -9223372036854775807;
    ld = 3.4E+4931;
    sint = -32768;
    
    printf("The long int value: %ld\n", lint);
    printf("The long long int value: %lld\n", llint);
    printf("The long double value: %Lf\n", ld);
    printf("The short int value: %d", sint);
    return 0;
}
