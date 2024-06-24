#include <stdio.h>
int main()
{
    int a, b, result, ch;
    printf("Simple Calculator\n");
    printf("please give the value of 'a' anf 'b'\n");
    scanf("%d %d", &a, &b);
    printf("Choices are :- \n 1-addition\n2-multiplication\n3-subtract\n4-division\n5-modulus\n");
    printf("Enter the choice below \n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        result = a + b;
        printf("The addition result is %d", result);
        break;
    case 2:
        result = a * b;
        printf("The multiplcation result is %d", result);
        break;
    case 3:
        result = a - b;
        printf("The subtraction result is : %d", result);
        break;
    case 4:
        if (b == 0)
        {
            printf("divison by zero error\n");
        }
        else
        {
            result = a / b;
            printf("The division result is %d", result);
        }
        break;
    case 5:
        result = a % b;
        printf("The modulus result is %d", result);
        break;
    }
}