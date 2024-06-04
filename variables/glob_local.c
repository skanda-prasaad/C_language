// global var :-

#include <stdio.h>

int x = 10;

void function1()
{
    printf("Function 1: %d\n", x);
}

void function2() { printf("Function 2: %d\n", x); }

int main()
{

    function1();
    function2();
    return 0;
}

// Local var :-
// ***********************

#include <stdio.h>

void function()
{
    int x = 10; // local variable
    printf("%d", x);
}

int main() { function(); }