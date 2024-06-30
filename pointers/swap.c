#include <stdio.h>
void swap(int *, int *);
int main()
{
    int a = 5;
    int b = 7;
    printf("The value of a and b before swap is %d %d\n", a, b);
    swap(&a, &b);
    printf("The value of a and b after swap is %d %d\n", a, b);
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}