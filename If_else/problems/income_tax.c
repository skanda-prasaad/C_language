#include <stdio.h>

int main()
{
    float tax = 0;
    int income;
    printf("Please enter your exact income: ");
    scanf("%d", &income); // Use %d for integer input

    if (income <= 250000)
    {
        printf("No tax :) \n");
    }
    else if (income > 250000 && income <= 500000)
    {
        printf("Your income is more than 2.5L and your tax is 0.5%% of the income over 2.5L.\n");
        tax = tax + 0.05 * (income - 250000);
    }
    else if (income > 500000 && income <= 1000000)
    {
        printf("Your income is more than 5L and your tax is 5%% of the income between 2.5L and 5L, and 20%% of the income over 5L.\n");
        tax = tax + 0.05 * (500000 - 250000);
        tax = tax + 0.2 * (income - 500000);
    }
    else
    {
        printf("Your income is more than 10L and your tax is 5%% of the income between 2.5L and 5L, 20%% of the income between 5L and 10L, and 30%% of the income over 10L.\n");
        tax = tax + 0.05 * (500000 - 250000);
        tax = tax + 0.2 * (1000000 - 500000);
        tax = tax + 0.3 * (income - 1000000);
    }

    printf("Total tax to be paid is %f", tax);

    return 0;
}
