#include <stdio.h>
double average(int a, int b, int c);
int main()
{
    printf("the average of three numbers : \n");
    printf("%2.4f\n", average(1, 4, 3));
}

double average(int a, int b, int c)
{
    double result;
    result = (a + b + c) / 3.0;
    return result;
}