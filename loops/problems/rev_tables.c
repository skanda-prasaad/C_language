#include <stdio.h>
int main()
{
    int num, i = 10, result;
    printf("give the value for the multiplication table : ");
    scanf("%d", &num);
    while (i >= 0)
    {
        result = i * num;
        printf("%d * %d = %d\n", num, i, result);
        i--;
    }
}