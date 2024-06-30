#include <stdio.h>
int change(int *a);
int main()
{
    int x = 5;
    printf("The vlaue of variable is %d\n", x);
    change(&x);
    printf("The cahnged value of variable is %d", x);
}

int change(int *a)
{
    *a = *a * 10;
    return *a;
}