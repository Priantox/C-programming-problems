#include <stdio.h>
float diameter(int);
float circum(int);
float area(int);

int main()
{
    int n;
    scanf("%d", &n);

    printf("Diameter = %0.2f units\n", diameter(n));
    printf("Circumference = %0.2f units\n", circum(n));
    printf("Area = %0.2f sq. units", area(n));

    return 0;
}
float diameter(int a)
{
    float d = 2 * a;

    return d;
}

float circum(int b)
{
    float c = 2 * 3.1416 * b;

    return c;
}

float area(int f)
{
    float area = 3.1416 * f * f;

    return area;
}