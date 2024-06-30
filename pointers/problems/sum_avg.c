#include <stdio.h>
int sum(int *, int *);
int avg(int *, int *);
int main()
{
    int a = 5;
    int b = 9;
    printf("The sum of a and b is %d\n", sum(&a, &b));
    printf("The avg of a and b is %d", avg(&a, &b));
}

int sum(int *x, int *y)
{
    return *x + *y;
}

int avg(int *x, int *y)
{
    return (*x + *y) / 2;
}