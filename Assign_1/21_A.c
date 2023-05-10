#include <stdio.h>
#include <math.h>

int a[1000];
int TakeInput()
{
    char c;
    int size;
    for (int i = 0; c != '\n'; i++)
    {
        scanf("%d", &a[i]);
        scanf("%c", &c);

        size++;
    }
    return size;
}
double calcMean(int *x, int num_of_elem)
{
    double sum = 0;
    for (int i = 0; i < num_of_elem; i++)
    {
        sum += x[i];
    }

    double mean = sum / num_of_elem;
    return mean;
}
double Calc_Std_deviation(int *x, int num_of_elem)
{
    double mean = calcMean(x, num_of_elem);
    double sum = 0;
    for (int i = 0; i < num_of_elem; i++)
    {
        double single = (double)x[i] - mean;
        sum += pow(single, 2);
    }

    double result = sqrt(sum / num_of_elem);
    return result;
}
int main()
{
    int size = TakeInput();

    double result;
    result = Calc_Std_deviation(a, size);

    printf("\n");

    printf("%.2f", result);

    return 0;
}