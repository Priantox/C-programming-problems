#include <stdio.h>

int main()
{
    // a) Declare a variable uninitialized
    int x;

    // b) Declare and initialize a variable in one statement
    int y = 10;

    // c) Declare and initialize multiple variables with different values in one statement
    int a = 5, b = 7, c = 9;

    // d) Declare and initialize multiple variables with the same value in one statement
    int p = 2, q = 2, r = 2;

    // Output the values of the variables
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    printf("p = %d, q = %d, r = %d\n", p, q, r);

    return 0;
}
