#include <stdio.h>
int star(int n);
int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);
    star(a);
}

int star(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (2 * i + 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
}