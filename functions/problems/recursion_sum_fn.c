#include <stdio.h>
int sum(int n);
// sum(n) = 1+ 2 + 3 +.....(n-1) + n;
// sum(n) = sum(n-1) + n
int main()
{
    int a;
    printf("please give the number to calculate sum\n");
    scanf("%d", &a);
    printf("The sum of %d natural numbers is : %d", a, sum(a));
}
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return sum(n - 1) + n;
}