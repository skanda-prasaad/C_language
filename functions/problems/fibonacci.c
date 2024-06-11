#include <stdio.h>
int fib(int n);
int main()
{
    int n;
    printf("Enter the number to see nth element fibonacci series of it: \n");
    scanf("%d", &n);
    int result = fib(n);
    printf("The nth element of fibonacci series id %d", result);
}

int fib(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}