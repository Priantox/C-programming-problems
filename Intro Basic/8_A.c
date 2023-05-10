#include <stdio.h>
int main()
{
    int num1;
    int num2;
    int num3;
    
    scanf("%d\n", &num1);
    scanf("%d\n", &num2);
    scanf("%d", &num3);

    printf("First Value = %d, Last Value = %d", num1, num3);
    
    return 0;
}