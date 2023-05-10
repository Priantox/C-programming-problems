#include <stdio.h>
#include <math.h>
int main()
{
    float p;
    float interest;
    float t;

    printf("Enter the  amount: ");
    scanf("%f", &p);

    printf("Enter the rate of interest: ");
    scanf("%f", &interest);

    printf("Enter the time in years: ");
    scanf("%f", &t);

    float x = 1 + (interest / 100);

    float y = p * pow(x, t);

    float ci = y - p;

    printf("The compount interest is %0.2f", ci);

    return 0;
}