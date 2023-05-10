//
// Function to determine if a number is even or odd
//

#include <stdio.h>
int numb(int);

int main()
{
    int n;
    scanf("%d", &n);

    if (numb(n) == 1)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }

    return 0;
}

int numb(int x)
{
    if(x % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}