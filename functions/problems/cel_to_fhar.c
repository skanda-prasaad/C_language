#include <stdio.h>
float conversion(float c);
int main()
{
    float c;
    printf("Enter value of celcius\n");
    scanf("%f", &c);
    float f = conversion(c);
    printf("The calue of %f celcius in fahrenheit is %f", c, f);
}

float conversion(float c)
{
    float f = (c * 9 / 5.0) + 32;
    return f;
}