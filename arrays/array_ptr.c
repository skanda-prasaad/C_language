#include <stdio.h>
int main()
{
    int marks[3] = {56, 89, 96};
    // &marks ======= marks
    int *ptr = marks;
    *ptr = 68;
    ptr++;
    *ptr = 90;
    printf("The marks of student 0 is %d\n", marks[0]);
    printf("The marks of student 1 is %d\n", marks[1]);
}