//
//
// Farenheit into celcius
//
//
#include <stdio.h>
int main()
{
    float C;
    float F;

    printf("Enter Farenheit value: ");
    scanf("%f", &F);

    C = (F - 32) * 5 / 9;

    printf("Celcius value is %0.2f", C);

    return 0;
}