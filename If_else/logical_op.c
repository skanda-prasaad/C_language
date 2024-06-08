#include <stdio.h>
int main()
{
    int a, b;
    printf("give the value of a and b");
    scanf("%d,%d", &a, &b);
    if (a > 15 && b < 5)
    {
        printf("This is true");
    }
    else
    {
        printf("false");
    }
    return 0;
}