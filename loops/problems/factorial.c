#include <stdio.h>
int main()
{
    int fact = 1;
    int n = 4;
    printf("Enter the number to get factorial of it\n");
    // scanf("%d\n", &n);
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("%d is the factorial of your number", fact);
}