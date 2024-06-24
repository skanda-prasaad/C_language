#include <stdio.h>
int main()
{
    float charge;
    int units;
    char name[30];
    printf("Enter consumer's name and the units consumed\n");
    scanf("%s %d", &name, &units);
    if (units <= 200)
    {
        charge = 100 + units * 0.8;
    }
    else if (units <= 300)
    {
        charge = (100 + 200 * 0.8 + (units - 200) * 0.9);
    }
    else
    {
        charge = (100 + 200 * 0.8 + 100 * 0.9 + (units - 300) * 1);
    }
    if (units > 400)
    {
        charge = charge + charge * 0.15;
    }
    printf("\nName\t\t\tUnits\t\t\tcharge\n");
    printf("%s\t\t\t%d\t\t\t%f\n", name, units, charge);
}