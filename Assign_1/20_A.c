#include <stdio.h>
void GenNthPrime(int);

int main()
{
    int n;
    scanf("%d", &n);
    
    GenNthPrime(n);

    return 0;
}

void GenNthPrime(int a)
{
    int flag, p, c = 2;
    for (int i = 1; i <= a; i++)
    {

        for (int j = c;; j++)
        {
            flag = -1;
            for (int k = 2; k < j; k++)
            {
                if (j % k == 0)
                {
                    flag = 0;
                    break;
                }
            }

            if (flag != 0)
            {
                p = j;
                c = j + 1;
                break;
            }
        }
    }
    printf("\n");
    printf("%dth Prime: %d", a, p);
}