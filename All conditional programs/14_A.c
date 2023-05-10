#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int d;
    int mp;

    printf("Eligibility Criteria for an engineering:\n");
    printf("Marks in Mathematics >= 65\n");
    printf("Marks in Physics >= 55\n");
    printf("Marks in Chemestry >= 50\n");
    printf("Total in all three subject >= 180\n");
    printf("or Total in Maths and Physics >= 140\n");
    printf("-------------------------------------\n");
    printf("Input the marks obtained in Physics :");
    scanf("%d", &a);
    printf("Input the marks obtained in Chemistry :");
    scanf("%d", &b);
    printf("Input the marks obtained in Mathematics :");
    scanf("%d", &c);
    printf("Total marks of Mathematics, Physics and Chemistry : %d\n", c + a + b);
    printf("Total marks of Maths and  Physics : %d\n", c + a);
    if (c >= 65)

        if (a >= 55)

            if (b >= 50)

                if ((c + a + b) >= 180 || (c + a) >= 140)

                    printf("The  candidate is eligible for admission.\n");
                else
                    printf("The candidate is not eligible.\n");
            else
                printf("The candidate is not eligible.\n");
        else
            printf("The candidate is not eligible.\n");
    else
        printf("The candidate is not eligible.\n");

    return 0;
}