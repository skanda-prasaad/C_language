#include <stdio.h>
float force(float m);
int main()
{
    float m;
    printf("Enter the mass to calculate the force :\n");
    scanf("%f", &m);
    float f = force(m);
    printf("The force of attraction on a body of mass %0.2f is %0.2f\n", m, f);
    return 0;
}

float force(float m)
{
    float f = 9.8 * m;
    return f;
}