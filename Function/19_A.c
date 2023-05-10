//
// Function “GeneratePrime()” to compute the prime numbers less than N, where N is an input
// integer. GeneratePrime() uses IsPrime() to check whether a number is prime or not.
//

#include <stdio.h>
int GeneratePrime(int, int *);
int IsPrime(int);

int main()
{
    int a[100];
    int *l = 0;
    int N;
    scanf("%d", &N);

    int r = GeneratePrime(N, a);

    printf("\n\n");

    printf("Prime less than %d: ", N);

    for (int i = 0; i < r; i++)
    {
        printf("%d", a[i]);

        if (i != r - 1)
        {
            printf(", ");
        }
    }

    return 0;
}

int GeneratePrime(int x, int *y)
{
    int j = 0;

    for (int i = 2; i < x; i++)
    {
        if (IsPrime(i))
        {
            y[j] = i;

            j++;
        }
    }
    return j;
}

int IsPrime(int a)
{
    int flag = -1;

    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}