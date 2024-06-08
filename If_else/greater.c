#include <stdio.h>
int main()
{
    int a, b;
    printf("Please give the value of a and b : ");
    scanf("%d,%d", &a, &b);
    if (a > b)
    {
        printf("The value of a is greater than b");
    }
    else
    {
        printf("The value of b is greater than a ");
    }
}