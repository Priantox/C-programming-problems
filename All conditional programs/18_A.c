#include <stdio.h>
int main()
{
    int angle1;
    int angle2;
    int angle3;
    int sum;

    printf("Enter the three angles of a triangle: ");
    scanf("%d%d%d", &angle1, &angle2, &angle3);

    sum = angle1 + angle2 + angle3;
    
    if (sum == 180)
    {
        printf("Triangle can be formed.\n");
    }
    else
    {
        printf("Triangle cannot be formed.\n");
    }

    return 0;
}