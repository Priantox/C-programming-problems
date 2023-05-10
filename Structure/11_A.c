#include <stdio.h>

struct triangle
{
    int triangle_id;
    float base;
    float height;
};

float find_max_area(struct triangle t1, struct triangle t2, struct triangle t3);

int main()
{
    struct triangle t1, t2, t3;

    // Take input of three triangles

    scanf("%d", &t1.triangle_id);
    scanf("%f", &t1.base);
    scanf("%f", &t1.height);

    scanf("%d", &t2.triangle_id);
    scanf("%f", &t2.base);
    scanf("%f", &t2.height);

    scanf("%d", &t3.triangle_id);
    scanf("%f", &t3.base);
    scanf("%f", &t3.height);

    // Find the triangle with the maximum area
    struct triangle max_triangle = t1;

    float max_area = find_max_area(t1, t2, t3);

    if (max_area == (t2.base * t2.height) / 2)
    {
        max_triangle = t2;
    }
    else if (max_area == (t3.base * t3.height) / 2)
    {
        max_triangle = t3;
    }

    // Output the details of the triangle with the maximum area

    printf("Area: %.2f\n", max_area);

    return 0;
}

float find_max_area(struct triangle t1, struct triangle t2, struct triangle t3)
{
    float area1 = (t1.base * t1.height) / 2;
    float area2 = (t2.base * t2.height) / 2;
    float area3 = (t3.base * t3.height) / 2;

    if (area1 >= area2 && area1 >= area3)
    {
        return area1;
    }
    else if (area2 >= area1 && area2 >= area3)
    {
        return area2;
    }
    else
    {
        return area3;
    }
}
