#include <stdio.h>
// factorial(n) = n * factorial(n-1)
int factorial(int a);
int main()
{
    printf("The factorial of the value is : %d", factorial(7));
}
int factorial(int a)
{
    if (a == 0 || a == 1)
    {
        return 1;
    }
    return a * factorial(a - 1);
}