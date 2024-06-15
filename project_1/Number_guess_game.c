#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguess = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    do
    {
        printf("Hey guess the number between 1 - 100 : ");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Guess lower number !!\n");
        }
        else if (guess < number)
        {
            printf("Guess higher number !!\n");
        }
        else
        {
            printf("Heey you got it right !! and you took %d number of guess", nguess);
        }
        nguess++;
    } while (number != guess);
}