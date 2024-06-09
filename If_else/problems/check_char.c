#include <stdio.h>
int main()
{
    char a;
    printf("Please enter the character: \n");
    scanf("%c", &a);
    if (a >= 97 && a <= 122)
    {
        printf("The character you entered is small letter");
    }
    else
    {
        printf("Its a capital letter");
    }
}