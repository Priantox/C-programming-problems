#include <stdio.h>

struct triangle
{
    int triangle_id;
    float base;
    float height;
};

int main()
{
    struct triangle t[3]; // declare an array of three triangles
    int i;

    // input data for three triangles
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &t[i].triangle_id);

        scanf("%f", &t[i].base);

        scanf("%f", &t[i].height);
    }

    printf("\n");

    // calculate the area of each triangle and display the results
    for (i = 0; i < 3; i++)
    {
        float area = (t[i].base * t[i].height) / 2;
        printf("Area of %d: %.2f\n", t[i].triangle_id, area);
    }

    return 0;
}
