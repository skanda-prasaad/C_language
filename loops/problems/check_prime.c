#include <stdio.h>
int main()
{
    int a = 4, isPrime = 0;
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            isPrime = 1;
            break;
        }
    }
    if (isPrime)
    {
        printf("it is a prime");
    }
    else
    {
        printf("It's not a prime");
    }
}