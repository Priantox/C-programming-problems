#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int first;
    int last;
    int count = 0;
    int d;

    scanf("%d", &n);
    int temp = n;

    last = temp % 10;

    count = (int)log10(temp);

    while (temp >= 10)
    {
        temp /= 10;
    }
    first = temp;

    int swap = (last * pow(10, count) + first) + (n - (first * pow(10, count) + last));

    printf("%d", swap);

    return 0;
}