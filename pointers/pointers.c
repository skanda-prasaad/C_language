#include <stdio.h>
int main()
{
    int i = 15;
    printf("The address of i is %u\n", &i);
    printf("The value of address of i is %d", *(&i));
}