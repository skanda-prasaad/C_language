#include <stdio.h>
int main()
{
    int a = 0, i = 1;
    while (i <= 10)
    {
        a += i;
        i++;
    }
    printf("%d", a);
}