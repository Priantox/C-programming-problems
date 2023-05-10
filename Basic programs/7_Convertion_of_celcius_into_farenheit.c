//
//
// Celcius to farenheit
//
//
#include <stdio.h>
int main()
{
    float C;
    float F;

    printf("Enter celcius value: ");
    scanf("%f", &C);

    F = (C * 9 / 5) + 32;

    printf("Farenheit value is %0.2f", F);

    return 0;
}