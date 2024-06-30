#include <stdio.h>
int main()
{
    int i = 5;
    printf("The address of i is %u", &i);
    printf("The value of i is %d", *(&i));
}