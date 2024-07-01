#include <Stdio.h>
int main()
{
    int marks[3] = {58, 89, 90};
    for (int i = 0; i < 3; i++)
    {
        printf("The marks of student %d is %d\n", i + 1, marks[i]);
    }
}