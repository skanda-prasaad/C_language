#include <stdio.h>
int sum(int *a, int *b);
int main()
{
    int x = 4;
    int y = 5;
    printf("The value of x+y is %d", sum(&x, &y));
}

int sum(int *a, int *b)
{
    *a = 50;
    return *a + *b;
}