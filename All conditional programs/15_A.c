#include <stdio.h>
int main()
{
    float marks;
    float total = 500;

    printf("Enter the marks obtained: ");
    scanf("%f", &marks);

    float percentage = (marks / total) * 100;
    printf("Percentage: %.2f\n", percentage);

    if (percentage >= 80)
        printf("Division: Distinction\n");
    else if (percentage >= 60)
        printf("Division: First\n");
    else if (percentage >= 45)
        printf("Division: Second\n");
    else
        printf("Division: Fail\n");

    return 0;
}