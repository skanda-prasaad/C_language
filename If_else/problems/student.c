#include <stdio.h>
int main()
{
    int marks1, marks2, marks3;
    printf("enter the marks of sub1: \n");
    scanf("%d", &marks1);
    printf("enter the marks of sub2: \n");
    scanf("%d", &marks2);
    printf("enter the marks of sub3: \n");
    scanf("%d", &marks3);

    float total = (marks1 + marks2 + marks3) / 3;
    if (total >= 40)
    {
        if (marks1 < 33 || marks2 < 33 || marks3 < 33)
        {
            printf("You have failed!!");
        }
        else
        {
            printf("You have passed the exam");
        }
    }
    else
    {
        printf("You have failed the exam !!!");
    }
}