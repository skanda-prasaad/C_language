#include <stdio.h>
int main()
{
    int a, b, result;
    printf("enter the values of length: ");
    scanf("%d", &a);
    printf("enter the value of breadth: ");
    scanf("%d", &b);
    result = a * b;
    printf("The area of rectangle is : %d", result);
}