#include <stdio.h>
void display(int n); // function prototype
int main()
{
    int a;
    display(4); // function call
    return 0;
}
void display(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("Hello World\n");
    }
}
