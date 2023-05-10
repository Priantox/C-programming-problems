//
// Function to calculate the sum of n numbers coming from the console.
//

#include <stdio.h>
int stark(int *, int);

int main()
{
    int a[100];
    int i;
    char ch;

    for (i = 0; ch != '\n'; i++)
    {
        scanf("%d", &a[i]);
        scanf("%c", &ch);
    }

    int sum = stark(a, i);

    printf("Sum in Main: %d\n", sum);

    return 0;
}

int stark(int *ar, int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += *(ar + i);
    }

    printf("Sum in Function: %d\n", sum);

    return sum;
}