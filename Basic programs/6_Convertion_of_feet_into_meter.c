//
//
//Feet to meter
//
//
#include <stdio.h>
int main()
{
    double ft;
    double met;

    printf("Enter feet: ");
    scanf("%lf", &ft);

    met = ft * 0.3048;

    printf("Meter: %0.4lf", met);

    return 0;
}