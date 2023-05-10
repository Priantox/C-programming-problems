//
// Function to take two positive numbers x and y as input and calculate x to the power y.
//

#include <stdio.h>
void power(int, int);

int main()
{
    int a;
    int b;
    scanf("%d%d", &a, &b);

    power(a, b);

    return 0;
}

void power(int x, int y)
{
    int i = 1, p = 1;
    
    while (i <= y)
    {
        p = p * x;

        i++;
    }

    printf("%d to the power %d is %d", x, y, p);
}