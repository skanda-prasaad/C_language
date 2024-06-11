#include <stdio.h>
int sum(int a, int b);
int main()
{
    printf("Sum of 2 + 9 is %d", sum(2, 9));
    return 0;
}

int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}