#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter four numbers \n");
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    scanf("%d\n", &c);
    scanf("%d\n", &d);
    if (a > b && a > c && a > d)
    {
        printf("%d is the greatest ", a);
    }
    if (b > a && b > c && b > d)
    {
        printf("%d is the greatest ", b);
    }
    if (c > b && c > a && c > d)
    {
        printf("%d is the greatest ", c);
    }
    else
    {
        printf("%d is the greatest ", d);
    }
}