//
// Implement the following functions and calculate standard deviation of an array whose values come from the terminal
//

#include <stdio.h>
#include <math.h>
double TakeInput();
double CalcMean(int x[], int);
double Calc_Std_deviation(int x[], int);

int a[100];

int main()
{
    int l = TakeInput();

    double r = Calc_Std_deviation(a, l);

    printf("\n");

    printf("%0.2lf", r);

    return 0;
}

double TakeInput()
{
    char ch;
    int i;

    for (i = 0; ch != '\n'; i++)
    {
        scanf("%d", &a[i]);
        scanf("%c", &ch);
    }

    return i;
}

double Calc_Std_deviation(int x[], int num_of_elem)
{
    double mean = CalcMean(x, num_of_elem);
    double sum = 0;

    for (int i = 0; i < num_of_elem; i++)
    {
        double s = (double)(x[i] - mean);

        sum += pow(s, 2);
    }

    double result = sqrt(sum / num_of_elem);

    return result;
}

double CalcMean(int x[], int num_of_elem)
{
    double sum = 0;

    for (int i = 0; i < num_of_elem; i++)
    {
        sum += x[i];
    }

    double d = sum / num_of_elem;

    return d;
}