//
// WAP that will take inputs of a 3 by 3 matrix into a 2D array. Now find the determinant of
// this matrix.
//

#include <stdio.h>
int main()
{
    int n;
    int arr[100][100];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int a = arr[0][0];
    int b = arr[0][1];
    int c = arr[0][2];
    int d = arr[1][0];
    int e = arr[1][1];
    int f = arr[1][2];
    int g = arr[2][0];
    int h = arr[2][1];
    int i = arr[2][2];

    printf("\n");

    int det = (a * ((e * i) - (f * h))) - (b * ((d * i) - (g * f))) + (c * ((d * h) - (g * e)));

    printf("%d", det);

    return 0;
}