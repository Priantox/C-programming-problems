#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        float atten;
        float assign;
        float ct;
        float mid;
        float final;
        float sum;

        scanf("%f%f%f%f%f", &atten, &assign, &ct, &mid, &final);

        float x = (mid / 50) * 30;
        float y = (final / 100) * 40;

        sum = atten + assign + ct + x + y;

        printf("Student %d : ", i);

        if (sum >= 90 && sum <= 100)
        {
            printf("A");
        }
        else if (sum >= 86 && sum <= 89)
        {
            printf("A-");
        }
        else if (sum >= 82 && sum <= 85)
        {
            printf("B+");
        }
        else if (sum >= 78 && sum <= 81)
        {
            printf("B");
        }
        else if (sum >= 74 && sum <= 77)
        {
            printf("B-");
        }
        else if (sum >= 70 && sum <= 73)
        {
            printf("C+");
        }
        else if (sum >= 66 && sum <= 69)
        {
            printf("C");
        }
        else if (sum >= 62 && sum <= 65)
        {
            printf("C-");
        }
        else if (sum >= 58 && sum <= 61)
        {
            printf("D+");
        }
        else if (sum >= 55 && sum <= 57)
        {
            printf("D-");
        }
        else if (sum >= 0 && sum <= 55)
        {
            printf("F");
        }
        else
        {
            printf("Not eligible");
        }
    }

    return 0;
}