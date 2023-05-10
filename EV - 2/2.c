#include <stdio.h>
int main()
{
    float angle1;
    float angle2;
    float angle3;
    float sum;

    // Input three angles from the keyboard
    printf("Enter the three angles of the triangle:\n");
    scanf("%f%f%f", &angle1, &angle2, &angle3);
    
    // Check if each angle is between 0 and 180 degrees
    if (angle1 <= 0 || angle1 >= 180)
    {
        printf("Invalid input! Angle 1 value should be such that, 0 < value < 180.\n");
    }
    else
    {
        if (angle2 <= 0 || angle2 >= 180)
        {
            printf("Invalid input! Angle 2 value should be such that, 0 < value < 180.\n");
        }
        else
        {
            if (angle3 <= 0 || angle3 >= 180)
            {
                printf("Invalid input! Angle 3 value should be such that, 0 < value < 180.\n");
            }
            else
            {
                // Calculate the sum of all three angles
                sum = angle1 + angle2 + angle3;
                // Check if the sum of angles is equal to 180 degrees
                if (sum == 180)
                {
                    printf("The triangle is valid.\n");
                }
                else
                {
                    printf("The triangle is not valid.\n");
                }
            }
        }
    }
    return 0;
}
