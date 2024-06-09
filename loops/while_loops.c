#include <stdio.h>
int main()
{
    int i = 0, a;
    printf("Please give the vale: ");
    scanf("%d", &a);
    while (i < a)
    {
        printf("The value is %d\n", i);
        i++;
    }
}