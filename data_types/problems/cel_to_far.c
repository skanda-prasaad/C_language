#include <stdio.h>
int main()

{
    float a, fahr;
    printf("enter the value of centigrate: ");
    scanf("%f", &a);
    fahr = (a * (9 / 5)) + 32;
    printf("The value of fahrenheit is %f", fahr);
}