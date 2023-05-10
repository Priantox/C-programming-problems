#include <stdio.h>
int main()
{
    double value1;
    int boolean;
    value1 = 3.140000;
    boolean = 1;

    printf("The double value: %e\n", value1);
    printf("The boolean value: %d\n", boolean);

    printf("\n");

    value1 = 1.618039;
    boolean = 0;

    printf("The double value: %lf\n", value1);
    printf("The boolean value: %d\n", boolean);
    
    return 0;
}